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

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_06280648031180776741_3598138731_init();
    work_m_13374995663789577669_1069848932_init();
    work_m_15282813991771502216_2908904151_init();
    work_m_16832221364419204336_0122958029_init();
    work_m_13421738502369176220_3823007873_init();
    work_m_15582966780826485959_3115858369_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_15582966780826485959_3115858369");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
