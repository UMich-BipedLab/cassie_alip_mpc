# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "hinge_l2_sparse"
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
def create_classification(m, n, rho=1, mu=1, sigma=0.05):
    """Create a random classification problem."""
    A = normalized_data_matrix(m, n, mu)
    x0 = sps.rand(n, 1, rho)
    x0.data = np.random.randn(x0.nnz)
    x0 = x0.toarray().ravel()

    b = np.sign(A.dot(x0) + sigma*np.random.randn(m))
    return A, b

np.random.seed(0)

m = 1000
n = 1500
rho = 1
sigma = 0.05
mu = 0.1
lam = 0.5*sigma*np.sqrt(m*np.log(mu*n))

A, b = create_classification(m, n, rho=rho, mu=mu, sigma=sigma)


# Problem construction

def hinge_loss(theta, X, y):
    if not all(np.unique(y) == [-1, 1]):
        raise ValueError("y must have binary labels in {-1,1}")
    return cp.sum_entries(cp.max_elemwise(1 - sps.diags([y],[0])*X*theta, 0))
    
x = cp.Variable(A.shape[1])
f = hinge_loss(x, A, b) + lam*cp.sum_squares(x)
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


