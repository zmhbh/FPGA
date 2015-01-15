{
  'Design' => {
    'ConstraintsFile' => 'C:/Users/hjy/Desktop/FPGA-HJY/serial_ise/Avt_S6LX9_MicroBoard_UCF_110804.ucf',
    'EntityName' => 'lx9board_main',
    'HDLFileExtension' => 'v',
    'HDLLanguage' => 'verilog',
    'InstanceName' => 'lx9example_tb/uut',
    'ParameterList' => [

    ],
    'PortList' => [
      {
        'Direction' => 'in',
        'Name' => 'clk_40mhz'
      },
      {
        'Direction' => 'in',
        'Name' => 'reset_i'
      },
      {
        'Direction' => 'in',
        'Name' => 'rxd'
      },
      {
        'Direction' => 'out',
        'Name' => 'txd'
      },
      {
        'Direction' => 'out',
        'Name' => 'GPIO_LED1'
      },
      {
        'Direction' => 'out',
        'Name' => 'GPIO_LED2'
      },
      {
        'Direction' => 'out',
        'Name' => 'GPIO_LED3'
      },
      {
        'Direction' => 'out',
        'Name' => 'GPIO_LED4'
      },
      {
        'Direction' => 'in',
        'IsClock' => true,
        'Name' => 'tb_clk'
      },
      {
        'Direction' => 'out',
        'Name' => 'rst_out'
      },
      {
        'Direction' => 'in',
        'Name' => 'rst_out_ack'
      },
      {
        'Direction' => 'in',
        'Name' => 'tb_led'
      },
      {
        'Direction' => 'in',
        'Name' => 'cmdfifo_txdata',
        'Range' => {
          'Left' => '7',
          'Right' => '0'
        }
      },
      {
        'Direction' => 'out',
        'Name' => 'cmdfifo_rxdata',
        'Range' => {
          'Left' => '7',
          'Right' => '0'
        }
      },
      {
        'Direction' => 'out',
        'Name' => 'cmdfifo_rxe'
      },
      {
        'Direction' => 'out',
        'Name' => 'cmdfifo_txf'
      },
      {
        'Direction' => 'in',
        'Name' => 'cmdfifo_rd'
      },
      {
        'Direction' => 'in',
        'Name' => 'cmdfifo_wr'
      }
    ],
    'ProjectFile' => 'C:/Users/hjy/Desktop/FPGA-HJY/serial_ise/hwcosim_xst.prj',
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
  'Platform' => {
    'Board' => 'lx9',
    'BoundaryScanPosition' => 1,
    'Clock' => [
      {
        'Differential' => false,
        'Period' => 10,
        'Pin' => 'C10',
        'VariablePeriods' => [
          15,
          20,
          30
        ]
      }
    ],
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
  'Subflow' => 'xflow',
  'Target' => {
    'ExcludedModules' => [

    ],
    'Modules' => [

    ]
  }
}
