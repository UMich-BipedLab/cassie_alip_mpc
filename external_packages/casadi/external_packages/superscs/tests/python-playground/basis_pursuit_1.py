# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "basis_pursuit_1"
prob = None
opt_val = None




# Variable declarations

import scipy.sparse as sps
n = 400
m = 200
np.random.seed(0)

A = np.random.rand(m, n)
x0 = sps.rand(n, 1, 0.1)
b = A*x0


# Problem construction

x = cp.Variable(n)
prob = cp.Problem(cp.Minimize(cp.norm1(x)), [A*x == b])


# Problem collection

# Single problem collection
problemDict = {
    "problemID" : problemID,
    "problem"   : prob,
    "opt_val"   : opt_val
}
problems = [problemDict]



# For debugging individual problems:
if __name__ == "__main__":
    def printResults(problemID = "", problem = None, opt_val = None):
        print(problemID)
        problem.solve()
        print("\tstatus: {}".format(problem.status))
        print("\toptimal value: {}".format(problem.value))
        print("\ttrue optimal value: {}".format(opt_val))
    printResults(**problems[0])


