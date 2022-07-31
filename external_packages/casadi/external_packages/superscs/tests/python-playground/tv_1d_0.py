# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "tv_1d_0"
prob = None
opt_val = None




# Variable declarations

np.random.seed(0)
n = 100000

k = max(int(np.sqrt(n)/2), 1)

x0 = np.ones((n,1))
idxs = np.random.randint(0, n, (k,2))
idxs.sort()
for a, b in idxs:
    x0[a:b] += 10*(np.random.rand()-0.5)
b = x0 + np.random.randn(n, 1)

lam = np.sqrt(n)


# Problem construction

x = cp.Variable(n)
f = 0.5*cp.sum_squares(x-b) + lam*cp.norm1(x[1:]-x[:-1])
prob = cp.Problem(cp.Minimize(f))


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


