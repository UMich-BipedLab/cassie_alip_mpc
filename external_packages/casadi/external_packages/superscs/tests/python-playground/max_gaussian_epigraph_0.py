# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup


problemID = "max_gaussian_epigraph_0"
prob = None
opt_val = None

problemID = problemID + "_epigraph"




# Variable declarations

np.random.seed(0)
m = 10
n = 10
k = 3
A = np.matrix(np.random.rand(m,n))
A -= np.mean(A, axis=0)
K = np.array([(A[i].T*A[i]).flatten() for i in range(m)])


# Problem construction

sigma_inv = cp.Variable(n, n) # Inverse covariance matrix
obs = cp.vstack([-cp.log_det(sigma_inv) + cp.trace(A[i].T*A[i]*sigma_inv) for i in range(m)])
f = cp.sum_largest(obs, k)
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


