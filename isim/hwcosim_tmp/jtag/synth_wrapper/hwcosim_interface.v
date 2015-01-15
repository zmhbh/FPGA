//----------------------------------------------------------------------------
// System Generator version 12.3 Verilog source file.
//
// Copyright(C) 2010 by Xilinx, Inc.  All rights reserved.  This
// text/file contains proprietary, confidential information of Xilinx,
// Inc., is distributed under license from Xilinx, Inc., and may be used,
// copied and/or disclosed only pursuant to the terms of a valid license
// agreement with Xilinx, Inc.  Xilinx hereby grants you a license to use
// this text/file solely for design, simulation, implementation and
// creation of design files limited to Xilinx devices or technologies.
// Use with non-Xilinx devices or technologies is expressly prohibited
// and immediately terminates your license unless covered by a separate
// agreement.
//
// Xilinx is providing this design, code, or information "as is" solely
// for use in developing programs and solutions for Xilinx devices.  By
// providing this design, code, or information as one possible
// implementation of this feature, application or standard, Xilinx is
// making no representation that this implementation is free from any
// claims of infringement.  You are responsible for obtaining any rights
// you may require for your implementation.  Xilinx expressly disclaims
// any warranty whatsoever with respect to the adequacy of the
// implementation, including but not limited to warranties of
// merchantability or fitness for a particular purpose.
//
// Xilinx products are not intended for use in life support appliances,
// devices, or systems.  Use in such applications is expressly prohibited.
//
// Any modifications that are made to the source code are done at the user's
// sole risk and will be unsupported.
//
// This copyright and support notice must be retained as part of this
// text at all times.  (c) Copyright 1995-2010 Xilinx, Inc.  All rights
// reserved.
//----------------------------------------------------------------------------

module hwcosim_shared_memory_lock_manager(clk, hw_req, hw_grant, sw_req, sw_grant);
  input clk;
  input hw_req;
  output reg hw_grant;
  output sw_req;
  input sw_grant;

  wire hw_req_int;
  reg hr_reg1;
  wire hr_reg1_en;
  reg hr_reg2;
  reg sw_req_int;

  assign sw_req = sw_req_int;
  assign hr_reg1_en = ~hr_reg2;

  // Increase # pulses for hw_req signal
  always @(posedge clk or negedge hw_req) begin
    if (!hw_req) begin
      hr_reg1 <= 1'b0;
    end else begin
      if (hr_reg1_en) begin
        hr_reg1 <= 1'b1;
      end
    end
  end

  always @(posedge clk) begin
    hr_reg2 <= hr_reg1;
  end

  assign hw_req_int = hw_req & hr_reg1;

  // Generate sw_req signal
  always @(posedge clk or negedge hw_req_int) begin
    if (!hw_req_int) begin
      sw_req_int <= 1'b0;
    end else begin
      if (!sw_grant) begin
        sw_req_int <= 1'b1;
      end
    end
  end

  // Generate hw_grant signal
  always @(posedge clk or negedge hw_req_int) begin
    if (!hw_req_int) begin
      hw_grant <= 1'b0;
    end else begin
      if (sw_req_int && sw_grant) begin
        hw_grant <= 1'b1;
      end
    end
  end

endmodule

//----------------------------------------------------------------------------

module hwcosim_shared_register(clk, ce, clr, i, o);
  parameter WIDTH = 32;
  parameter [WIDTH-1:0] INIT_VALUE = {WIDTH{1'b0}};

  input clk;
  input ce;
  input clr;
  input [WIDTH-1:0] i;
  output [WIDTH-1:0] o;

  genvar index;
  generate
    for (index = 0; index < WIDTH; index = index + 1)
    begin:fd_prim_array
      if (INIT_VALUE[index] == 0)
      begin:rst_comp
        FDRE fdre_comp
        (
          .C (clk),
          .D (i[index]),
          .Q (o[index]),
          .CE (ce),
          .R (clr)
        );
      end
      else
      begin:set_comp
        FDSE fdse_comp
        (
          .C (clk),
          .D (i[index]),
          .Q (o[index]),
          .CE (ce),
          .S (clr)
        );
      end
    end
  endgenerate
endmodule

//----------------------------------------------------------------------------

module hwcosim_memory_map
  (
    mm_o_clk_40mhz,
    mm_o_reset_i,
    mm_o_rxd,
    mm_o_rst_out_ack,
    mm_o_tb_led,
    mm_o_cmdfifo_txdata,
    mm_o_cmdfifo_rd,
    mm_o_cmdfifo_wr,
    mm_i_txd,
    mm_i_GPIO_LED1,
    mm_i_GPIO_LED2,
    mm_i_GPIO_LED3,
    mm_i_GPIO_LED4,
    mm_i_rst_out,
    mm_i_cmdfifo_rxdata,
    mm_i_cmdfifo_rxe,
    mm_i_cmdfifo_txf,
    hwcosim_mm_clk,
    hwcosim_mm_we,
    hwcosim_mm_re,
    hwcosim_mm_bank_sel,
    hwcosim_mm_addr,
    hwcosim_mm_data_in,
    hwcosim_mm_data_out
  );

  output mm_o_clk_40mhz;
  output mm_o_reset_i;
  output mm_o_rxd;
  output mm_o_rst_out_ack;
  output mm_o_tb_led;
  output [7:0] mm_o_cmdfifo_txdata;
  output mm_o_cmdfifo_rd;
  output mm_o_cmdfifo_wr;
  input mm_i_txd;
  input mm_i_GPIO_LED1;
  input mm_i_GPIO_LED2;
  input mm_i_GPIO_LED3;
  input mm_i_GPIO_LED4;
  input mm_i_rst_out;
  input [7:0] mm_i_cmdfifo_rxdata;
  input mm_i_cmdfifo_rxe;
  input mm_i_cmdfifo_txf;
  input hwcosim_mm_clk;
  input hwcosim_mm_we;
  input hwcosim_mm_re;
  input [7:0] hwcosim_mm_bank_sel;
  input [23:0] hwcosim_mm_addr;
  input [31:0] hwcosim_mm_data_in;
  output reg [31:0] hwcosim_mm_data_out;

  reg [31:0] hwcosim_mm_data_out_bank0;

  reg int_o_clk_40mhz;
  reg int_o_reset_i;
  reg int_o_rxd;
  reg int_o_rst_out_ack;
  reg int_o_tb_led;
  reg [7:0] int_o_cmdfifo_txdata;
  reg int_o_cmdfifo_rd;
  reg int_o_cmdfifo_wr;
  wire int_i_txd;
  wire int_i_GPIO_LED1;
  wire int_i_GPIO_LED2;
  wire int_i_GPIO_LED3;
  wire int_i_GPIO_LED4;
  wire int_i_rst_out;
  wire [7:0] int_i_cmdfifo_rxdata;
  wire int_i_cmdfifo_rxe;
  wire int_i_cmdfifo_txf;

  always @(posedge hwcosim_mm_clk)
  begin
    if (hwcosim_mm_we && hwcosim_mm_bank_sel == 0) begin
      case (hwcosim_mm_addr)
        0 : int_o_clk_40mhz <= hwcosim_mm_data_in[0];
        1 : int_o_reset_i <= hwcosim_mm_data_in[0];
        2 : int_o_rxd <= hwcosim_mm_data_in[0];
        3 : int_o_rst_out_ack <= hwcosim_mm_data_in[0];
        4 : int_o_tb_led <= hwcosim_mm_data_in[0];
        5 : int_o_cmdfifo_txdata[7:0] <= hwcosim_mm_data_in[7:0];
        6 : int_o_cmdfifo_rd <= hwcosim_mm_data_in[0];
        7 : int_o_cmdfifo_wr <= hwcosim_mm_data_in[0];
        default : ;
      endcase
    end else begin
      case (hwcosim_mm_addr)
        0 : hwcosim_mm_data_out_bank0 <= int_i_txd;
        1 : hwcosim_mm_data_out_bank0 <= int_i_GPIO_LED1;
        2 : hwcosim_mm_data_out_bank0 <= int_i_GPIO_LED2;
        3 : hwcosim_mm_data_out_bank0 <= int_i_GPIO_LED3;
        4 : hwcosim_mm_data_out_bank0 <= int_i_GPIO_LED4;
        5 : hwcosim_mm_data_out_bank0 <= int_i_rst_out;
        6 : hwcosim_mm_data_out_bank0 <= int_i_cmdfifo_rxdata[7:0];
        7 : hwcosim_mm_data_out_bank0 <= int_i_cmdfifo_rxe;
        8 : hwcosim_mm_data_out_bank0 <= int_i_cmdfifo_txf;
        default : ;
      endcase
    end
  end

  assign int_i_txd = mm_i_txd;
  assign int_i_GPIO_LED1 = mm_i_GPIO_LED1;
  assign int_i_GPIO_LED2 = mm_i_GPIO_LED2;
  assign int_i_GPIO_LED3 = mm_i_GPIO_LED3;
  assign int_i_GPIO_LED4 = mm_i_GPIO_LED4;
  assign int_i_rst_out = mm_i_rst_out;
  assign int_i_cmdfifo_rxdata = mm_i_cmdfifo_rxdata;
  assign int_i_cmdfifo_rxe = mm_i_cmdfifo_rxe;
  assign int_i_cmdfifo_txf = mm_i_cmdfifo_txf;
  assign mm_o_clk_40mhz = int_o_clk_40mhz;
  assign mm_o_reset_i = int_o_reset_i;
  assign mm_o_rxd = int_o_rxd;
  assign mm_o_rst_out_ack = int_o_rst_out_ack;
  assign mm_o_tb_led = int_o_tb_led;
  assign mm_o_cmdfifo_txdata = int_o_cmdfifo_txdata;
  assign mm_o_cmdfifo_rd = int_o_cmdfifo_rd;
  assign mm_o_cmdfifo_wr = int_o_cmdfifo_wr;

  always @(hwcosim_mm_bank_sel,
           hwcosim_mm_data_out_bank0)
  begin
    case (hwcosim_mm_bank_sel)
      0 : hwcosim_mm_data_out <= hwcosim_mm_data_out_bank0;
      default : hwcosim_mm_data_out <= 0;
    endcase
  end

endmodule

//----------------------------------------------------------------------------

module hwcosim_interface
  (
    clk_40mhz,
    reset_i,
    rxd,
    txd,
    GPIO_LED1,
    GPIO_LED2,
    GPIO_LED3,
    GPIO_LED4,
    hwcosim_sys_clk,
    hwcosim_dut_fr_clk,
    hwcosim_dut_ss_clk, 
    hwcosim_mm_we,
    hwcosim_mm_re,
    hwcosim_mm_bank_sel,
    hwcosim_mm_addr,
    hwcosim_mm_data_in,
    hwcosim_mm_data_out
  );

  input  clk_40mhz;
  input  reset_i;
  input  rxd;
  output  txd;
  output  GPIO_LED1;
  output  GPIO_LED2;
  output  GPIO_LED3;
  output  GPIO_LED4;
  input hwcosim_sys_clk;
  input hwcosim_dut_fr_clk;
  input hwcosim_dut_ss_clk; 
  input hwcosim_mm_we;
  input hwcosim_mm_re;
  input [7:0] hwcosim_mm_bank_sel;
  input [23:0] hwcosim_mm_addr;
  input [31:0] hwcosim_mm_data_in;
  output [31:0] hwcosim_mm_data_out;
   
  wire mm_o_clk_40mhz;
  wire mm_o_reset_i;
  wire mm_o_rxd;
  wire mm_o_rst_out_ack;
  wire mm_o_tb_led;
  wire [7:0] mm_o_cmdfifo_txdata;
  wire mm_o_cmdfifo_rd;
  wire mm_o_cmdfifo_wr;
  wire mm_i_txd;
  wire mm_i_GPIO_LED1;
  wire mm_i_GPIO_LED2;
  wire mm_i_GPIO_LED3;
  wire mm_i_GPIO_LED4;
  wire mm_i_rst_out;
  wire [7:0] mm_i_cmdfifo_rxdata;
  wire mm_i_cmdfifo_rxe;
  wire mm_i_cmdfifo_txf;
  wire dut_o_clk_40mhz;
  wire dut_o_reset_i;
  wire dut_o_rxd;
  wire dut_o_tb_clk;
  wire dut_o_rst_out_ack;
  wire dut_o_tb_led;
  wire [7:0] dut_o_cmdfifo_txdata;
  wire dut_o_cmdfifo_rd;
  wire dut_o_cmdfifo_wr;
  wire dut_i_txd;
  wire dut_i_GPIO_LED1;
  wire dut_i_GPIO_LED2;
  wire dut_i_GPIO_LED3;
  wire dut_i_GPIO_LED4;
  wire dut_i_rst_out;
  wire [7:0] dut_i_cmdfifo_rxdata;
  wire dut_i_cmdfifo_rxe;
  wire dut_i_cmdfifo_txf;

  hwcosim_memory_map hwcosim_memory_map_inst
    (
      .mm_o_clk_40mhz (mm_o_clk_40mhz),
      .mm_o_reset_i (mm_o_reset_i),
      .mm_o_rxd (mm_o_rxd),
      .mm_o_rst_out_ack (mm_o_rst_out_ack),
      .mm_o_tb_led (mm_o_tb_led),
      .mm_o_cmdfifo_txdata (mm_o_cmdfifo_txdata),
      .mm_o_cmdfifo_rd (mm_o_cmdfifo_rd),
      .mm_o_cmdfifo_wr (mm_o_cmdfifo_wr),
      .mm_i_txd (mm_i_txd),
      .mm_i_GPIO_LED1 (mm_i_GPIO_LED1),
      .mm_i_GPIO_LED2 (mm_i_GPIO_LED2),
      .mm_i_GPIO_LED3 (mm_i_GPIO_LED3),
      .mm_i_GPIO_LED4 (mm_i_GPIO_LED4),
      .mm_i_rst_out (mm_i_rst_out),
      .mm_i_cmdfifo_rxdata (mm_i_cmdfifo_rxdata),
      .mm_i_cmdfifo_rxe (mm_i_cmdfifo_rxe),
      .mm_i_cmdfifo_txf (mm_i_cmdfifo_txf),
      .hwcosim_mm_clk (hwcosim_dut_fr_clk),
      .hwcosim_mm_we (hwcosim_mm_we),
      .hwcosim_mm_re (hwcosim_mm_re),
      .hwcosim_mm_bank_sel (hwcosim_mm_bank_sel),
      .hwcosim_mm_addr (hwcosim_mm_addr),
      .hwcosim_mm_data_in (hwcosim_mm_data_in),
      .hwcosim_mm_data_out (hwcosim_mm_data_out)
    );
    
  (* box_type="user_black_box" *)   
  lx9board_main hwcosim_dut_inst
    (
      .clk_40mhz (dut_o_clk_40mhz),
      .reset_i (dut_o_reset_i),
      .rxd (dut_o_rxd),
      .txd (dut_i_txd),
      .GPIO_LED1 (dut_i_GPIO_LED1),
      .GPIO_LED2 (dut_i_GPIO_LED2),
      .GPIO_LED3 (dut_i_GPIO_LED3),
      .GPIO_LED4 (dut_i_GPIO_LED4),
      .tb_clk (hwcosim_dut_ss_clk) ,
      .rst_out (dut_i_rst_out),
      .rst_out_ack (dut_o_rst_out_ack),
      .tb_led (dut_o_tb_led),
      .cmdfifo_txdata (dut_o_cmdfifo_txdata),
      .cmdfifo_rxdata (dut_i_cmdfifo_rxdata),
      .cmdfifo_rxe (dut_i_cmdfifo_rxe),
      .cmdfifo_txf (dut_i_cmdfifo_txf),
      .cmdfifo_rd (dut_o_cmdfifo_rd),
      .cmdfifo_wr (dut_o_cmdfifo_wr)
    ) /* synthesis syn_black_box=1 */;

  assign dut_o_clk_40mhz = clk_40mhz;
  assign dut_o_reset_i = reset_i;
  assign dut_o_rxd = rxd;
  assign dut_o_rst_out_ack = mm_o_rst_out_ack;
  assign dut_o_tb_led = mm_o_tb_led;
  assign dut_o_cmdfifo_txdata = mm_o_cmdfifo_txdata;
  assign dut_o_cmdfifo_rd = mm_o_cmdfifo_rd;
  assign dut_o_cmdfifo_wr = mm_o_cmdfifo_wr;
  assign txd = dut_i_txd;
  assign mm_i_txd = 0;
  assign GPIO_LED1 = dut_i_GPIO_LED1;
  assign mm_i_GPIO_LED1 = 0;
  assign GPIO_LED2 = dut_i_GPIO_LED2;
  assign mm_i_GPIO_LED2 = 0;
  assign GPIO_LED3 = dut_i_GPIO_LED3;
  assign mm_i_GPIO_LED3 = 0;
  assign GPIO_LED4 = dut_i_GPIO_LED4;
  assign mm_i_GPIO_LED4 = 0;
  assign mm_i_rst_out = dut_i_rst_out;
  assign mm_i_cmdfifo_rxdata = dut_i_cmdfifo_rxdata;
  assign mm_i_cmdfifo_rxe = dut_i_cmdfifo_rxe;
  assign mm_i_cmdfifo_txf = dut_i_cmdfifo_txf;

endmodule

//----------------------------------------------------------------------------
module lx9board_main
  (
    clk_40mhz,
    reset_i,
    rxd,
    txd,
    GPIO_LED1,
    GPIO_LED2,
    GPIO_LED3,
    GPIO_LED4,
    tb_clk,
    rst_out,
    rst_out_ack,
    tb_led,
    cmdfifo_txdata,
    cmdfifo_rxdata,
    cmdfifo_rxe,
    cmdfifo_txf,
    cmdfifo_rd,
    cmdfifo_wr
  );
  input  clk_40mhz;
  input  reset_i;
  input  rxd;
  output  txd;
  output  GPIO_LED1;
  output  GPIO_LED2;
  output  GPIO_LED3;
  output  GPIO_LED4;
  input  tb_clk;
  output  rst_out;
  input  rst_out_ack;
  input  tb_led;
  input  [7:0] cmdfifo_txdata;
  output  [7:0] cmdfifo_rxdata;
  output  cmdfifo_rxe;
  output  cmdfifo_txf;
  input  cmdfifo_rd;
  input  cmdfifo_wr;
endmodule
