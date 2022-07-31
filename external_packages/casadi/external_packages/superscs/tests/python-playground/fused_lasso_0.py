# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "fused_lasso_0"
prob = None
opt_val = None




# Variable declarations

m = 1000
ni = 10
k = 1000
rho=0.05
sigma=0.05
np.random.seed(0)

A = np.random.randn(m, ni*k)
A /= np.sqrt(np.sum(A**2, 0))

x0 = np.zeros(ni*k)
for i in range(k):
    if np.random.rand() < rho:
        x0[i*ni:(i+1)*ni] = np.random.rand()
b = A.dot(x0) + sigma*np.random.randn(m)
lam = 0.1*sigma*np.sqrt(m*np.log(ni*k))


# Problem construction

x = cp.Variable(A.shape[1])
f = cp.sum_squares(A*x - b) + lam*cp.norm1(x) + lam*cp.tv(x)
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


