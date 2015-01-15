/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#endif
struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    int argcF = argc + 1;
    char **argvF = (char*)malloc(argcF*sizeof(char*));
    int j;
    for (j = 0; j < argc; j++) {
         argvF[j] = argv[j];
    }
    argvF[j] = "-hwcosim";
    xsi_init_design(argcF, argvF);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000759807724_0607157625_hil_init();
    work_m_00000000001207389822_4236699398_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001207389822_4236699398");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
