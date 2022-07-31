#!/bin/bash


# Send converage data to codecov
# Do it only if SCS_RUN_COV is set to 1
if [[ $SCS_RUN_COV == 1 ]]; then
    bash <(curl -s https://codecov.io/bash);
fi