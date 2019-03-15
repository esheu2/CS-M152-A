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
    work_m_15913049278469410676_2583037537_init();
    work_m_05429190872110016762_3360783247_init();
    work_m_09895931702687521119_1611881108_init();
    work_m_14418131051519842642_2201288042_init();
    work_m_13427065583494282554_3460996694_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_13427065583494282554_3460996694");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
