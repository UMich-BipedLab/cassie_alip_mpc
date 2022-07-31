# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup


problemID = "robust_svm_epigraph_0"
prob = None
opt_val = None

problemID = problemID + "_epigraph"




# Variable declarations

import scipy.sparse as sps
import scipy.linalg as la

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

np.random.seed(0)
m = 2000
n = 600
mu = 1
rho = 1
sigma = 0.1

A = normalized_data_matrix(m, n, mu)
x0 = sps.rand(n, 1, rho)
x0.data = np.random.randn(x0.nnz)
x0 = x0.toarray().ravel()

b = np.sign(A.dot(x0) + sigma*np.random.randn(m))
A[b>0,:] += 0.7*np.tile([x0], (np.sum(b>0),1))
A[b<0,:] -= 0.7*np.tile([x0], (np.sum(b<0),1))

P = la.block_diag(np.random.randn(n-1,n-1), 0)

lam = 1


# Problem construction

# Explicit epigraph constraint
x = cp.Variable(n)
t = cp.Variable(1)

z = 1 - sps.diags([b],[0])*A*x + t
f = lam*cp.sum_squares(x) + cp.sum_entries(cp.max_elemwise(z, 0))
C = [cp.norm1(P.T*x) <= t]
prob = cp.Problem(cp.Minimize(f), C)


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


