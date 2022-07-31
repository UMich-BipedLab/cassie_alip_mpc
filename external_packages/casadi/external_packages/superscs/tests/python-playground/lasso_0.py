# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "lasso_0"
prob = None
opt_val = None




# Variable declarations

import scipy.sparse as sps

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
def create_regression(m, n, k=1, rho=1, mu=1, sigma=0.05):
    """Create a random (multivariate) regression problem."""

    A = normalized_data_matrix(m, n, mu)
    X0 = sps.rand(n, k, rho)
    X0.data = np.random.randn(X0.nnz)

    if k == 1:
        x0 = sps.rand(n, 1, rho)
        x0.data = np.random.randn(x0.nnz)
        x0 = x0.toarray().ravel()
        b = A.dot(x0) + sigma*np.random.randn(m)
        return A, b
    else:
        X0 = sps.rand(n, k, rho)
        X0.data = np.random.randn(X0.nnz)
        X0 = X0.toarray()
        B = A.dot(X0) + sigma*np.random.randn(m,k)
        return A, B

m = 1500
n = 5000
rho = 0.01
mu = 1
k = 1
np.random.seed(0)

A, B = create_regression(m, n, k = k, rho = rho, mu = mu)
lambda_max = np.abs(A.T.dot(B)).max()
lam = 0.5*lambda_max


# Problem construction

X = cp.Variable(A.shape[1], B.shape[1] if len(B.shape) > 1 else 1)
f = cp.sum_squares(A*X - B) + lam*cp.norm1(X)
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


