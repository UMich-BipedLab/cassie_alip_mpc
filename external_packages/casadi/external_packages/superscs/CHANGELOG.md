# Features

## Version 1.3.3

- Dockerfile added / image available on Docker Hub
- Runs on precise (tested on travis) with gcc 4.6
- C code is C99 compliant
- Solver info exports linsys statistics (e.g., CG iters)
- Updated docs [installation instructions]
- Documention: SuperSCS algorithm and termination
- Fixed some minor issues

## Version 1.3.2

- Significantly faster linear algebra
- Introduced and applied coding convention
- A lot of new documentation
- Using absolute paths in MATLAB
- Profiling framework (gprof)
- Applied SuperSCS on Maros-Meszaros problems
- Updated Makefile
- Achieved high code coverage
- New YAML serializer/parser in C and MATLAB
- Codecov configuration
- Analytics for the website


## Version 1.3.1
- Several benchmarks made available
- Parser for SIF/MPS/QPS files
- Anderson Acceleration implemented
- Implementation of SuperSCS using the same function template as SCS
- Implementation of restarted limited-memory Broyden directions
- Unit tests (90.9% coverage of scs.c, overall 80% coverage)
- [Online API documentation](https://kul-forbes.github.io/scs/index.html) using Doxygen with examples and benchmarks
- Support of printing to streams using stdio
- Modification of MEX interface that allows us to call SuperSCS from MATLAB
- Integration with CVX in MATLAB
- A lot more info can be exported to MATLAB regarding the progress of the algorithm
- Integration tools: codacy, Travis CI, codecov
- Memory management verification using valgrind
- Makefile with new functionality: run doxygen, generate coverage reports, run unit tests, test using valgrind
- Improvement of linear algebra routines using manual loop unrolling
- Gitter chat
