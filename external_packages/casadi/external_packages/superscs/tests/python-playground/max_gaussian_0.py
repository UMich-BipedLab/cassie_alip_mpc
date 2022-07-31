# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "max_gaussian_0"
prob = None
opt_val = None




# Variable declarations

np.random.seed(0)
m = 10
n = 10
k = 3
A = np.matrix(np.random.rand(m,n))
A -= np.mean(A, axis=0)
K = np.array([(A[i].T*A[i]).flatten() for i in range(m)])


# Problem construction

sigma_inv1 = cp.Variable(n,n) # Inverse covariance matrix
t = cp.Variable(m)
tdet = cp.Variable(1)

f = cp.sum_largest(t+tdet, k)
z = K*cp.reshape(sigma_inv1, n*n, 1)
C = [-cp.log_det(sigma_inv1) <= tdet, t == z]
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


