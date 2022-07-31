# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "least_squares_2"
prob = None
opt_val = None




# Variable declarations

import scipy.sparse as sps

n = 200
m = 300
np.random.seed(1)

x = cp.Variable(n)
A = np.random.randn(m, n)
A = A * sps.diags([1 / np.sqrt(np.sum(A**2, 0))], [0])
x_0 = np.random.randn(n)
b = A.dot(x_0) + 2*np.random.randn(m)


# Problem construction

objective = cp.Minimize(cp.sum_squares(A*x - b))
prob = cp.Problem(objective)


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


