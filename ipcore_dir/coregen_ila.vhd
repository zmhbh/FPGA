-------------------------------------------------------------------------------
-- Copyright (c) 2013 Xilinx, Inc.
-- All Rights Reserved
-------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor     : Xilinx
-- \   \   \/     Version    : 14.4
--  \   \         Application: XILINX CORE Generator
--  /   /         Filename   : coregen_ila.vhd
-- /___/   /\     Timestamp  : Mon Aug 26 17:17:05 Atlantic Daylight Time 2013
-- \   \  /  \
--  \___\/\___\
--
-- Design Name: VHDL Synthesis Wrapper
-------------------------------------------------------------------------------
-- This wrapper is used to integrate with Project Navigator and PlanAhead

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY coregen_ila IS
  port (
    CONTROL: inout std_logic_vector(35 downto 0);
    CLK: in std_logic;
    TRIG0: in std_logic_vector(8 downto 0);
    TRIG1: in std_logic_vector(8 downto 0);
    TRIG2: in std_logic_vector(23 downto 0);
    TRIG3: in std_logic_vector(1 downto 0));
END coregen_ila;

ARCHITECTURE coregen_ila_a OF coregen_ila IS
BEGIN

END coregen_ila_a;
