
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name lab3 -dir "C:/Users/152/CS-M152-A/lab3/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/152/CS-M152-A/lab3/stopwatch.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/152/CS-M152-A/lab3} }
set_property target_constrs_file "nexys3.ucf" [current_fileset -constrset]
add_files [list {nexys3.ucf}] -fileset [get_property constrset [current_run]]
link_design
