#!/bin/bash

# Execute the unit tests with coverage support
make COV=1 run-test

# Run the unit tests in Python
if [[ $CC = *"gcc"* ]] && [[ $SCS_RUN_PYTHON == 1 ]]; then 
    cd python/;
    python -m unittest -v test_superscs;
    cd ..;
fi

# Run profiler on an easy problem (just to make sure it works)
# (execute both on linux and on mac osx)
sudo make clean
make profile-run PF=1 PROBLEM_YAML_FILE='\"tests/c/data/test-5.yml\"' -s
make profile-run PF=1 SCS_DIR=150 SCS_MEM=3 PROBLEM_YAML_FILE='\"tests/c/data/test-5.yml\"' -s
make profile-run PF=1 SCS_DIR=100 SCS_MEM=20 PROBLEM_YAML_FILE='\"tests/c/data/test-5.yml\"' -s

# Run coverage (only for gcc)
if [[ $CC = *"gcc"* ]] && [[ $SCS_RUN_COV == 1 ]]; then 
    sudo make clean;
    make COV=1 cov; 
fi
