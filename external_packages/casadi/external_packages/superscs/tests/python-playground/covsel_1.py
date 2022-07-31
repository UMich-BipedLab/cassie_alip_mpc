# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "covsel_1"
prob = None
opt_val = None




# Variable declarations

np.random.seed(0)

m = 20
n = 30
lam = float(0.1)

import scipy.sparse as sps

A = sps.rand(n,n, 0.01)
A = np.asarray(A.T.dot(A).todense() + 0.1*np.eye(n))
L = np.linalg.cholesky(np.linalg.inv(A))
X = np.random.randn(m,n).dot(L.T)
S = X.T.dot(X)/m
W = np.ones((n,n)) - np.eye(n)




# Problem construction

Theta = cp.Variable(n,n)
prob = cp.Problem(cp.Minimize(
        lam*cp.norm1(cp.mul_elemwise(W,Theta)) +
        cp.sum_entries(cp.mul_elemwise(S,Theta)) -
        cp.log_det(Theta)))


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


