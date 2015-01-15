{
  'ClockGenerator' => {
    'DCM' => {
      'Clk0' => {
        'Used' => false
      },
      'Clk2x' => {
        'Used' => false
      },
      'ClkDv' => {
        'Used' => false
      },
      'ClkFx' => {
        'Divisor' => 10,
        'Multiplier' => 2,
        'Used' => true
      },
      'ClkInDivideBy2' => false,
      'DFSFrequencyMode' => 'LOW',
      'DLLFrequencyMode' => 'LOW'
    },
    'Type' => 'DCM'
  },
  'CosimCore' => {
    'EntityName' => 'jtagcosim_iface_spartan6',
    'Interface' => {
      'Clock' => [
        {
          'Clock' => {
            'Period' => 50.00000000000
          },
          'Constraints' => [
            'NET "hwcosim_sys_clk" LOC = C10;'
          ],
          'DCMPort' => 'clkfx',
          'Direction' => 'in',
          'IOType' => 'ibufg',
          'Name' => 'sys_clk',
          'Width' => 1
        }
      ],
      'Cosim' => [
        {
          'Direction' => 'out',
          'Name' => 'addr',
          'Width' => 24
        },
        {
          'Direction' => 'out',
          'Name' => 'bank_sel',
          'Width' => 8
        },
        {
          'Direction' => 'out',
          'Name' => 'cosim_clk_sel',
          'Width' => 1
        },
        {
          'Direction' => 'out',
          'Name' => 'data_in',
          'Width' => 32
        },
        {
          'Direction' => 'in',
          'Name' => 'data_out',
          'Width' => 32
        },
        {
          'Direction' => 'out',
          'Name' => 'sstep_clk',
          'Width' => 1
        },
        {
          'Direction' => 'out',
          'Name' => 'we',
          'Width' => 1
        },
        {
          'Direction' => 'out',
          'Name' => 're',
          'Width' => 1
        }
      ]
    }
  },
  'Design' => {
    'BasePath' => 'C:/Users/hjy/Desktop/FPGA-HJY/serial_ise',
    'Constraints' => [
      'CONFIG VCCAUX=3.3;',
      'NET reset_i      LOC = V4  |IOSTANDARD = LVCMOS33 |PULLDOWN;    # "USER_RESET"',
      'NET reset_i      TIG;',
      'NET clk_40mhz        LOC = V10 |IOSTANDARD = LVCMOS33;               # "USER_CLOCK"',
      'INST clk_40mhz TNM_NET = clk_40mhz;',
      'TIMESPEC TS_USER_CLOCK = PERIOD clk_40mhz 40000 kHz;',
      'NET GPIO_LED1         LOC = P4  |IOSTANDARD = LVCMOS18;               # "GPIO_LED1"',
      'NET GPIO_LED2         LOC = L6  |IOSTANDARD = LVCMOS18;               # "GPIO_LED2"',
      'NET GPIO_LED3         LOC = F5  |IOSTANDARD = LVCMOS18;               # "GPIO_LED3"',
      'NET GPIO_LED4         LOC = C2  |IOSTANDARD = LVCMOS18;               # "GPIO_LED4"',
      'NET rxd     LOC = R7  |IOSTANDARD = LVCMOS33;               # "USB_RS232_RXD"',
      'NET txd     LOC = T7  |IOSTANDARD = LVCMOS33;               # "USB_RS232_TXD"'
    ],
    'ConstraintsFile' => 'C:/Users/hjy/Desktop/FPGA-HJY/serial_ise/Avt_S6LX9_MicroBoard_UCF_110804.ucf',
    'EntityName' => 'lx9board_main',
    'HDLFileExtension' => 'v',
    'HDLLanguage' => 'verilog',
    'InstanceName' => 'lx9example_tb/uut',
    'ParameterList' => [

    ],
    'PeripheralList' => [

    ],
    'PortList' => [
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'clk_40mhz',
        'ExternalName' => 'clk_40mhz',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'clk_40mhz',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'reset_i',
        'ExternalName' => 'reset_i',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'reset_i',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'rxd',
        'ExternalName' => 'rxd',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'rxd',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'txd',
        'ExternalName' => 'txd',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'txd',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'GPIO_LED1',
        'ExternalName' => 'GPIO_LED1',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'GPIO_LED1',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'GPIO_LED2',
        'ExternalName' => 'GPIO_LED2',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'GPIO_LED2',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'GPIO_LED3',
        'ExternalName' => 'GPIO_LED3',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'GPIO_LED3',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'GPIO_LED4',
        'ExternalName' => 'GPIO_LED4',
        'IsExternal' => true,
        'IsMemoryMapped' => true,
        'Name' => 'GPIO_LED4',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'Clock' => {
          'Period' => 50.00000000000
        },
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'tb_clk',
        'IsClock' => true,
        'IsExternal' => false,
        'IsMemoryMapped' => false,
        'Name' => 'tb_clk',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'rst_out',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'rst_out',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'rst_out_ack',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'rst_out_ack',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'tb_led',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'tb_led',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_8_0',
        'Direction' => 'in',
        'DisplayName' => 'cmdfifo_txdata',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'cmdfifo_txdata',
        'Range' => {
          'Left' => '7',
          'Length' => 8,
          'Order' => 'downto',
          'Right' => '0'
        },
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 8
      },
      {
        'DataType' => 'UFix_8_0',
        'Direction' => 'out',
        'DisplayName' => 'cmdfifo_rxdata',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'cmdfifo_rxdata',
        'Range' => {
          'Left' => '7',
          'Length' => 8,
          'Order' => 'downto',
          'Right' => '0'
        },
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 8
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'cmdfifo_rxe',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'cmdfifo_rxe',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'out',
        'DisplayName' => 'cmdfifo_txf',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'cmdfifo_txf',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'output',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'cmdfifo_rd',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'cmdfifo_rd',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      },
      {
        'DataType' => 'UFix_1_0',
        'Direction' => 'in',
        'DisplayName' => 'cmdfifo_wr',
        'IsExternal' => false,
        'IsMemoryMapped' => true,
        'Name' => 'cmdfifo_wr',
        'SamplePeriod' => 1,
        'VerilogDirection' => 'input',
        'Width' => 1
      }
    ],
    'ProjectFile' => 'C:/Users/hjy/Desktop/FPGA-HJY/serial_ise/hwcosim_xst.prj',
    'SharedFIFOList' => [

    ],
    'SharedRAMList' => [

    ],
    'SharedRegisterList' => [

    ],
    'SynthesisTool' => 'xst',
    'SynthesisToolExecutable' => 'xst',
    'UsesSynplify' => false,
    'UsesVivado' => false,
    'UsesXST' => true
  },
  'Flow' => 'isim',
  'Incremental' => '',
  'IsMultipleClock' => '0',
  'IsZynqHIL' => '0',
  'MemoryMap' => {
    'InputPortMapping' => [
      {
        'Address' => 0,
        'Port' => {
          'Name' => 'clk_40mhz'
        }
      },
      {
        'Address' => 1,
        'Port' => {
          'Name' => 'reset_i'
        }
      },
      {
        'Address' => 2,
        'Port' => {
          'Name' => 'rxd'
        }
      },
      {
        'Address' => 3,
        'Port' => {
          'Name' => 'rst_out_ack'
        }
      },
      {
        'Address' => 4,
        'Port' => {
          'Name' => 'tb_led'
        }
      },
      {
        'Address' => 5,
        'Port' => {
          'Name' => 'cmdfifo_txdata',
          'Range' => {
            'Left' => 7,
            'Length' => 8,
            'Order' => 'downto',
            'Right' => 0
          }
        }
      },
      {
        'Address' => 6,
        'Port' => {
          'Name' => 'cmdfifo_rd'
        }
      },
      {
        'Address' => 7,
        'Port' => {
          'Name' => 'cmdfifo_wr'
        }
      }
    ],
    'OutputPortMapping' => [
      {
        'Address' => 0,
        'Port' => {
          'Name' => 'txd'
        }
      },
      {
        'Address' => 1,
        'Port' => {
          'Name' => 'GPIO_LED1'
        }
      },
      {
        'Address' => 2,
        'Port' => {
          'Name' => 'GPIO_LED2'
        }
      },
      {
        'Address' => 3,
        'Port' => {
          'Name' => 'GPIO_LED3'
        }
      },
      {
        'Address' => 4,
        'Port' => {
          'Name' => 'GPIO_LED4'
        }
      },
      {
        'Address' => 5,
        'Port' => {
          'Name' => 'rst_out'
        }
      },
      {
        'Address' => 6,
        'Port' => {
          'Name' => 'cmdfifo_rxdata',
          'Range' => {
            'Left' => 7,
            'Length' => 8,
            'Order' => 'downto',
            'Right' => 0
          }
        }
      },
      {
        'Address' => 7,
        'Port' => {
          'Name' => 'cmdfifo_rxe'
        }
      },
      {
        'Address' => 8,
        'Port' => {
          'Name' => 'cmdfifo_txf'
        }
      }
    ]
  },
  'Platform' => {
    'Board' => 'lx9',
    'BoundaryScanPosition' => 1,
    'Clock' => {
      'Differential' => false,
      'Period' => 10,
      'Pin' => 'C10',
      'VariablePeriods' => [
        15,
        20,
        30
      ]
    },
    'Description' => 'LX9 (JTAG)',
    'Interface' => 'jtag',
    'Part' => {
      'BaseFamily' => 'spartan6',
      'Device' => 'xc6slx9',
      'Family' => 'spartan6',
      'FamilyForSynplify' => 'spartan6',
      'Package' => 'csg324',
      'Speed' => '-2'
    },
    'Type' => 'jtag',
    'Vendor' => 'Xilinx'
  },
  'SYSGEN' => 'C:/Xilinx/14.7/ISE_DS/ISE/sysgen',
  'Subflow' => 'xflow',
  'Target' => {
    'ExcludedModules' => [

    ],
    'Modules' => [
      'jtag'
    ]
  },
  'TopLevel' => {
    'EntityName' => 'hwcosim_top'
  },
  'Type' => 'hwcosim',
  'Version' => '9.2',
  'XILINX' => 'C:/Xilinx/14.7/ISE_DS/ISE'
}
