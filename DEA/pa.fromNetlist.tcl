
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name DEA -dir "/home/bluelabuser/temp/yoda/DEA/planAhead_run_2" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/bluelabuser/temp/yoda/DEA/DEA.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/bluelabuser/temp/yoda/DEA} }
set_property target_constrs_file "DEA.ucf" [current_fileset -constrset]
add_files [list {DEA.ucf}] -fileset [get_property constrset [current_run]]
link_design
