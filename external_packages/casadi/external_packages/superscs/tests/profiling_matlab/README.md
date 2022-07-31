### Profiling framework

This folder and its subfolders contain MATLAB functions and scripts to benchmark SuperSCS and help determine an optimal configuration (choice of directions, memory, etc)


Contents:
- `experimenters/` experimenters  call the  profile runners with different solver parameters.
- `profile_helpers/` functions used to run profiling problems
- `profile_runners/` functions which call the profile helpers with different problem parameters; these define a suite of numerical experiments
- `profile_results/` profiling  results  are  stored  in this folder
- `maros_meszaros/`contains data related to the Maros-Meszaros benchmarks suite

 
