`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:13:46 05/26/2013
// Design Name:   interface
// Module Name:   C:/E/Documents/fpga/fpga_interface/lx9_demo/lx9example_tb.v
// Project Name:  lx9_demo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: interface
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lx9example_tb;

	// Inputs
	reg reset_i;
	reg clk_40mhz;

	reg tb_led;
	reg [7:0] cmdfifo_txdata;
	reg cmdfifo_rd;
	reg cmdfifo_wr;

	wire [7:0] cmdfifo_rxdata;
	wire cmdfifo_rxe;
	wire cmdfifo_txf;
	reg tb_clk;
	reg rst_out_ack;
	
	wire rst_out;
	
	
	
	
	///***************************
	parameter N=6;
	reg[N-1:0] x_i=6'b100001,y_i=6'b110111;
	reg go_i;
	
	reg[N-1:0] d_o;
	parameter s0=3'b111,s1=3'b001,s2=3'b010,s3=3'b011,s4=3'b100,s5=3'b101,s6=3'b110;
	reg[2:0] current_state,next_state;
	reg[N-1:0] x,y,r;
	///***************************
	
	
	

	// Instantiate the Unit Under Test (UUT)
	lx9board_main uut (
	/*	.reset_i(reset_i), 
		.clk_40mhz(clk_40mhz), 
		.rxd(rxd), 
		.txd(txd), 
		.GPIO_LED1(GPIO_LED1), 
		.GPIO_LED2(GPIO_LED2), 
		.GPIO_LED3(GPIO_LED3), 
		.GPIO_LED4(GPIO_LED4),  */		
	
		.tb_clk(tb_clk),
		.rst_out(rst_out),
		.rst_out_ack(rst_out_ack),
		.tb_led(tb_led), 
		.cmdfifo_txdata(cmdfifo_txdata), 
		.cmdfifo_rxdata(cmdfifo_rxdata), 
		.cmdfifo_rxe(cmdfifo_rxe), 
		.cmdfifo_txf(cmdfifo_txf), 
		.cmdfifo_rd(cmdfifo_rd), 
		.cmdfifo_wr(cmdfifo_wr)
	);

	always begin
		tb_clk = !tb_clk;
		#10;
	end

	always begin
		clk_40mhz = !clk_40mhz;
		#2;
	end


//*********************************
always @(posedge tb_clk)
	current_state<=next_state;
	always @(current_state,x_i,y_i,go_i,x,y,r)
	
	case(current_state)
	s0: if(go_i) next_state<=s1;
	    else next_state<=s0;
   s1: if(x_i>=y_i) next_state<=s2;
	    else next_state<=s3;
   s2: begin next_state<=s4;end
	s3: begin next_state<=s4;end
	s4: if (y>0) next_state<=s5;
	    else next_state<=s6;
   s5: begin next_state<=s4;end
	s6: begin next_state<=s0;end
	
	default: next_state<=s0;
	endcase
	
always @(negedge tb_clk)
	case (current_state)
	s2: begin x=x_i;y=y_i;end
	s3: begin x=y_i;y=x_i;end
	s5: begin r=x%y;x=y;y=r;end
	s6: begin d_o=x;end
   default:;
   endcase
//*********************************

	initial begin
		// Initialize Inputs
		tb_clk = 0;
		tb_led = 0;
		cmdfifo_txdata = 0;
		cmdfifo_rd = 0;
		cmdfifo_wr = 0;
		rst_out_ack= 0;

		clk_40mhz = 0;
		reset_i = 0;

		#100;
		//reset_i = 1;
		
		// Wait for global reset to finish from hardware (sync TB to hardware)
		// Comment this out if using software-only simulation		
		@(posedge rst_out);
		rst_out_ack = 1;
		go_i=1;
		@(negedge rst_out);
		rst_out_ack = 0;
		go_i=0;
      
		
		#100;
		// Change LED		
		tb_led = 1;
		
		//reset_i = 0;
		
		
		
		
		
		//Write a few
		cmdfifo_txdata = 8'h41;
		
		@(posedge tb_clk);
		cmdfifo_wr = 1;		
		@(posedge tb_clk);
		cmdfifo_wr = 0;
		
		cmdfifo_txdata = 8'h42;
		
		@(posedge tb_clk);
		cmdfifo_wr = 1;		
		@(posedge tb_clk);
		cmdfifo_wr = 0;
		
		cmdfifo_txdata = 8'h43;
		
		@(posedge tb_clk);
		cmdfifo_wr = 1;		
		@(posedge tb_clk);
		cmdfifo_wr = 0;
		//*************************
		
		
		cmdfifo_txdata =567;
		
		@(posedge tb_clk);
		cmdfifo_wr = 1;		
		@(posedge tb_clk);
		cmdfifo_wr = 0;
		
		
		//*************************
		//Read up to three
		wait (cmdfifo_rxe == 0);
		cmdfifo_rd = 1;		
		@(posedge tb_clk);
		cmdfifo_rd = 0;		
		$display ("%h", cmdfifo_rxdata);		

		@(posedge tb_clk);

		wait (cmdfifo_rxe == 0);
		cmdfifo_rd = 1;		
		@(posedge tb_clk);
		cmdfifo_rd = 0;		
		$display ("%h", cmdfifo_rxdata);		
		
		@(posedge tb_clk);
		
		wait (cmdfifo_rxe == 0);
		cmdfifo_rd = 1;		
		@(posedge tb_clk);
		cmdfifo_rd = 0;		
		$display ("%h", cmdfifo_rxdata);		


		$display	("*******DONE********");
	end
      
endmodule

