### Profiling helpers

Contains functions of the form

```
out = function_name(problem, tolerance, configuration)
```

where `problem` is a structure containing the problem data and  the pair (tolerance, configuration) is used to configure CVX (using the helper function `scs_set_options`.

These helper  functions are invoked in a  loop by profiling runners (see `profiling_runners/`).
