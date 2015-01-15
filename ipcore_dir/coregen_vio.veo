///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2013 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 14.4
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : coregen_vio.veo
// /___/   /\     Timestamp  : Mon Aug 26 17:19:16 Atlantic Daylight Time 2013
// \   \  /  \
//  \___\/\___\
//
// Design Name: ISE Instantiation template
///////////////////////////////////////////////////////////////////////////////

// The following must be inserted into your Verilog file for this
// core to be instantiated. Change the instance name and port connections
// (in parentheses) to your own signal names.

//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
coregen_vio YourInstanceName (
    .CONTROL(CONTROL), // INOUT BUS [35:0]
    .CLK(CLK), // IN
    .SYNC_OUT(SYNC_OUT) // OUT BUS [8:0]
);

// INST_TAG_END ------ End INSTANTIATION Template ---------

