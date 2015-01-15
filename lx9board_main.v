`timescale 1ns / 1ps

/* Do NOT allow undeclared nets */
`default_nettype none

/* Programmable Logic in Practice example file. From Dec 2013 Column.
 *
 * See http://www.ProgrammableLogicInPractice.com
 */
module lx9board_main(
    input wire clk_40mhz,
	 input wire reset_i, //reset button
    input wire rxd,
    output wire txd,
	 
	 output wire GPIO_LED1,
	 output wire GPIO_LED2,
	 output wire GPIO_LED3,
	 output wire GPIO_LED4,
	 
	 /*** Testbench ***/
	 input wire		tb_clk,
	 
	 output reg	rst_out,
	 input wire		rst_out_ack,
	 
	 input wire		tb_led,
	 input wire [7:0]   cmdfifo_txdata,
	 output wire [7:0]  cmdfifo_rxdata,
    output wire	cmdfifo_rxe,
	 output wire	cmdfifo_txf,
	 input wire 	cmdfifo_rd,
	 input wire		cmdfifo_wr
    );
	
	assign GPIO_LED1 = tb_led;
	assign GPIO_LED3 = tb_led;
	assign GPIO_LED2 = reset_i;
	assign GPIO_LED4 = reset_i;

	wire [7:0] cmdfifo_txdata_clk;
	wire [7:0] cmdfifo_rxdata_clk;
	wire cmdfifo_txf_clk;
	wire cmdfifo_rxe_clk;
	
	always @(posedge clk_40mhz)
		if (reset_i == 1'b1)
			rst_out <= 1'b1;
		else if (rst_out_ack)
			rst_out <= 1'b0;		
		
	wire empty;
		
	//Used to measure test-bench clock speed
	//assign tbclkout = tb_clk;
		
	//Write FIFO Only
	cross_clock write_fifo (
  .rst(reset_i), // input rst
  .wr_clk(tb_clk), // input wr_clk
  .rd_clk(clk_40mhz), // input rd_clk
  .din(cmdfifo_txdata), // input [7 : 0] din
  .wr_en(cmdfifo_wr), // input wr_en
  .rd_en(~cmdfifo_txf_clk & ~empty), // input rd_en
  .dout(cmdfifo_txdata_clk), // output [7 : 0] dout
  .full(cmdfifo_txf), // output full
  .empty(empty) // output empty
	);
	 
	 reg cmdfifo_wr_single;
	 always @(posedge clk_40mhz) begin
		cmdfifo_wr_single <= ~cmdfifo_txf_clk & ~empty;
	 end
	 
	reg cmdfifo_rd_single;
	reg cmdfifo_rd_single_delay;
	//Read FIFO Only
	cross_clock read_fifo (
  .rst(reset_i), // input rst
  .wr_clk(clk_40mhz), // input wr_clk
  .rd_clk(tb_clk), // input rd_clk
  .din(cmdfifo_rxdata_clk), // input [7 : 0] din
  .wr_en(cmdfifo_rd_single_delay), // input wr_en
  .rd_en(cmdfifo_rd), // input rd_en
  .dout(cmdfifo_rxdata), // output [7 : 0] dout
  .full(), // output full
  .empty(cmdfifo_rxe) // output empty
);
	 
	 always @(posedge clk_40mhz) begin
		cmdfifo_rd_single <= ~cmdfifo_rxe_clk;
		cmdfifo_rd_single_delay <= cmdfifo_rd_single;
	 end
	 
	 /* Standard HW-Level interface */	
	 serial_reg_iface cmdfifo_serial(.reset_i(reset_i),
										  .clk_i(clk_40mhz),
										  .rx_i(rxd),
										  .tx_o(txd),
										  .cmdfifo_rxe(cmdfifo_rxe_clk),
										  .cmdfifo_txf(cmdfifo_txf_clk),
										  .cmdfifo_rd(cmdfifo_rd_single),
										  .cmdfifo_wr(cmdfifo_wr_single),
										  .cmdfifo_drx(cmdfifo_rxdata_clk),
										  .cmdfifo_dtx(cmdfifo_txdata_clk));	
endmodule
