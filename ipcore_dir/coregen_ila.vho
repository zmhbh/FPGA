-------------------------------------------------------------------------------
-- Copyright (c) 2013 Xilinx, Inc.
-- All Rights Reserved
-------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor     : Xilinx
-- \   \   \/     Version    : 14.4
--  \   \         Application: Xilinx CORE Generator
--  /   /         Filename   : coregen_ila.vho
-- /___/   /\     Timestamp  : Mon Aug 26 17:17:05 Atlantic Daylight Time 2013
-- \   \  /  \
--  \___\/\___\
--
-- Design Name: ISE Instantiation template
-- Component Identifier: xilinx.com:ip:chipscope_ila:1.05.a
-------------------------------------------------------------------------------
-- The following code must appear in the VHDL architecture header:

------------- Begin Cut here for COMPONENT Declaration ------ COMP_TAG
component coregen_ila
  PORT (
    CONTROL : INOUT STD_LOGIC_VECTOR(35 DOWNTO 0);
    CLK : IN STD_LOGIC;
    TRIG0 : IN STD_LOGIC_VECTOR(8 DOWNTO 0);
    TRIG1 : IN STD_LOGIC_VECTOR(8 DOWNTO 0);
    TRIG2 : IN STD_LOGIC_VECTOR(23 DOWNTO 0);
    TRIG3 : IN STD_LOGIC_VECTOR(1 DOWNTO 0));

end component;

-- COMP_TAG_END ------ End COMPONENT Declaration ------------
-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG

your_instance_name : coregen_ila
  port map (
    CONTROL => CONTROL,
    CLK => CLK,
    TRIG0 => TRIG0,
    TRIG1 => TRIG1,
    TRIG2 => TRIG2,
    TRIG3 => TRIG3);

-- INST_TAG_END ------ End INSTANTIATION Template ------------
