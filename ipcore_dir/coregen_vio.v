///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2013 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 14.4
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : coregen_vio.v
// /___/   /\     Timestamp  : Mon Aug 26 17:19:16 Atlantic Daylight Time 2013
// \   \  /  \
//  \___\/\___\
//
// Design Name: Verilog Synthesis Wrapper
///////////////////////////////////////////////////////////////////////////////
// This wrapper is used to integrate with Project Navigator and PlanAhead

`timescale 1ns/1ps

module coregen_vio(
    CONTROL,
    CLK,
    SYNC_OUT) /* synthesis syn_black_box syn_noprune=1 */;


inout [35 : 0] CONTROL;
input CLK;
output [8 : 0] SYNC_OUT;

endmodule
