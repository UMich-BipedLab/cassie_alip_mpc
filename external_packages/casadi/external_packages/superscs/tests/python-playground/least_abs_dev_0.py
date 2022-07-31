# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "least_abs_dev_0"
prob = None
opt_val = None




# Variable declarations

import scipy.sparse as sps

np.random.seed(0)
m = 5000
n = 200

A = np.random.randn(m,n);
A = A*sps.diags([1 / np.sqrt(np.sum(A**2, 0))], [0])
b = A.dot(10*np.random.randn(n) + 5*np.random.randn(1))

k = max(m//50, 1)
idx = np.random.randint(0, m, k)
b[idx] += 100*np.random.randn(k)


# Problem construction

x = cp.Variable(n)
v = cp.Variable(1)
prob = cp.Problem(cp.Minimize(cp.norm1(A*x + v*np.ones(m) - b)))


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


