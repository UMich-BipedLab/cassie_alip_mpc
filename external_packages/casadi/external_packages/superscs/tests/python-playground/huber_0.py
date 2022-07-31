# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "huber_0"
prob = None
opt_val = None




# Variable declarations

import scipy.sparse as sps
np.random.seed(0)
m = 5000
n = 200

x0 = np.random.randn(n)
A = np.random.randn(m,n)
A = A*sps.diags([1 / np.sqrt(np.sum(A**2, 0))], [0])
b = A.dot(x0) + np.sqrt(0.01)*np.random.randn(m)
b = b + 10*np.asarray(sps.rand(m, 1, 0.05).todense()).ravel()


# Problem construction

x = cp.Variable(n)
prob = cp.Problem(cp.Minimize(cp.sum_entries(cp.huber(A*x - b))))


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


