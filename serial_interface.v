`timescale 1ns / 1ps
/* Do NOT allow undeclared nets */
`default_nettype none

/* Programmable Logic in Practice example file. From Dec 2013 Column.
 *
 * See http://www.ProgrammableLogicInPractice.com
 */
module serial_reg_iface(
	 /* Physical Interface */
    input wire reset_i,
    input wire clk_i,
	 input wire rx_i,
	 output wire tx_o,
	 
	 /* Register interface */
	 
	 //TX-FIFO transmits stuff out to computer
	 output wire	cmdfifo_txf, //TX-FULL, no more data please
	 input wire		cmdfifo_wr,	
	 input wire [7:0]	cmdfifo_dtx,	 
	 
	 //RX-FIFO receives stuff in from computer	 
	 output wire	cmdfifo_rxe, //RX-EMPTY, stop reading data please 
	 input wire		cmdfifo_rd,
	 output wire [7:0] cmdfifo_drx
    );

	wire clk;
	wire reset;
	wire tx_out;
	wire rx_in;
	
	assign clk = clk_i;
	assign rx_in = rx_i;
	assign tx_o = tx_out;
	assign reset = reset_i;


	reg cmdfifo_rxe_reg;
	assign cmdfifo_rxe = cmdfifo_rxe_reg;

	reg [7:0] dataout;
	wire [7:0] data;
	wire data_ready;
	assign cmdfifo_drx = dataout;

	always @(posedge clk) begin
		if (data_ready) begin
			dataout <= data;
		end
	end
	
	always @(posedge clk or posedge cmdfifo_rd) begin
		if (cmdfifo_rd | reset) begin
			cmdfifo_rxe_reg <= 1;
		end else begin
			if (data_ready) begin
				cmdfifo_rxe_reg <= 0;
			end
		end
	end

	//Serial
    wire txbusy;
    async_transmitter AT (.clk(clk),
                      .TxD_start(cmdfifo_wr),
                      .TxD_data(cmdfifo_dtx),
                      .TxD(tx_out),
                      .TxD_busy(txbusy));   
                
   assign cmdfifo_txf = (txbusy | cmdfifo_wr);
                
    async_receiver AR (.clk(clk),
                   .RxD(rx_in),
                   .RxD_data_ready(data_ready),
                   .RxD_data(data),
						 .RxD_endofpacket());
	
	/*
	wire [35:0] control0;					
	wire [31:0] chipscope;
	coregen_icon ilc (
    .CONTROL0(control0) // INOUT BUS [35:0]
	);

	coregen_ila ila (
    .CONTROL(control0), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .TRIG0(chipscope) // IN BUS [31:0]
	);
	
	assign chipscope[7:0] = data;
	assign chipscope[8] = data_ready;
	assign chipscope[9] = rx_in;
	*/

						 
endmodule