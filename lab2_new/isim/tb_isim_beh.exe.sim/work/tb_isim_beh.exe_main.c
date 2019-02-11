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
    work_m_00000000003245736234_1746683258_init();
    work_m_00000000001222519110_0890363242_init();
    work_m_00000000003095162747_3635933665_init();
    work_m_00000000003095162747_2508368337_init();
    work_m_00000000002923998731_1893459751_init();
    work_m_00000000000634212935_1724093919_init();
    work_m_00000000002442679938_3962613427_init();
    work_m_00000000000726793445_3505899711_init();
    work_m_00000000001282191262_3959351695_init();
    work_m_00000000000872782632_3235807583_init();
    work_m_00000000000410131471_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000410131471_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
