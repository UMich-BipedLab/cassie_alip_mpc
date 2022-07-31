# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "portfolio_0"
prob = None
opt_val = None




# Variable declarations

import scipy.sparse as sps

np.random.seed(0)
m = 500
n = 50000
density = 0.1

mu = np.exp(0.01*np.random.randn(n))-1  # returns
D = np.random.rand(n)/10;               # idiosyncratic risk
F = sps.rand(n,m,density)                # factor model
F.data = np.random.randn(len(F.data))/10
gamma = 1
B = 1

x = cp.Variable(n)


# Problem construction

f = mu.T*x - gamma*(cp.sum_squares(F.T.dot(x)) +
                    cp.sum_squares(cp.mul_elemwise(D, x)))
C = [cp.sum_entries(x) == B,
     x >= 0]

prob = cp.Problem(cp.Maximize(f), C)


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


