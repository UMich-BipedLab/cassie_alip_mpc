# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "lp_0"
prob = None
opt_val = None




# Variable declarations

m = 20
n = 50
np.random.seed(1)

A = np.random.rand(m, n)

y = (np.random.rand(n) - 0.5)
x_hat = -np.select([y < 0], [y])
Lambda = np.select([y >= 0], [y]) # x_hat^T Lambda = 0

mu = np.random.rand(m)
c = Lambda - A.T.dot(mu)
b = A.dot(x_hat)


# Problem construction

x = cp.Variable(n)
objective = cp.Minimize(c*x)
constraints = [A*x == b, x >= 0]

prob = cp.Problem(objective, constraints)
opt_val = np.dot(c, x_hat)


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


