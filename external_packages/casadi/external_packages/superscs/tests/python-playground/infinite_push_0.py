# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "infinite_push_0"
prob = None
opt_val = None




# Variable declarations


def normalized_data_matrix(m, n, mu):
    if mu == 1:
        # dense
        A = np.random.randn(m, n)
        A /= np.sqrt(np.sum(A**2, 0))
    else:
        # sparse
        A = sps.rand(m, n, mu)
        A.data = np.random.randn(A.nnz)
        N = A.copy()
        N.data = N.data**2
        A = A*sps.diags([1 / np.sqrt(np.ravel(N.sum(axis=0)))], [0])

    return A

m = 100
n = 200
d = 20
np.random.seed(0)

Xp = normalized_data_matrix(m, d, 1)
Xn = normalized_data_matrix(n, d, 1)
lam = 1


# Problem construction

def infinite_push(theta, Xp, Xn):
    m, d = Xp.shape
    n = Xn.shape[0]
    Z = cp.max_elemwise(
        1 - (Xp*theta*np.ones((1,n)) - (Xn*theta*np.ones((1,m))).T), 0)
    return cp.max_entries(cp.sum_entries(Z, axis=0))

theta = cp.Variable(d)
f = infinite_push(theta, Xp, Xn) + lam*cp.sum_squares(theta)
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


