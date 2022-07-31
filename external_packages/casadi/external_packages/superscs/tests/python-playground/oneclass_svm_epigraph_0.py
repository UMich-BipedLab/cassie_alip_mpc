# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup


problemID = "oneclass_svm_epigraph_0"
prob = None
opt_val = None

problemID = problemID + "_epigraph"




# Variable declarations

np.random.seed(0)
m = 5000
n = 200


# Generate random points uniform over hypersphere
A = np.random.randn(m, n)
A /= np.sqrt(np.sum(A**2, axis=1))[:,np.newaxis] # Normalize each row of A
A *= (np.random.rand(m)**(1./n))[:,np.newaxis]

# Shift points and add some outliers
# NOTE(mwytock): causes problems for operator splitting, should fix
#x0 = np.random.randn(n)
x0 = np.zeros(n)
A += x0

k = max(m//50, 1)
idx = np.random.randint(0, m, k)
A[idx, :] += np.random.randn(k, n)
lam = 1


# Problem construction

# Explicit epigraph form
x = cp.Variable(n)
t = cp.Variable(1)
rho = cp.Variable(1)

z = np.sum(A**2, axis=1) - 2*A*x + t  # z_i = ||a_i - x||^2
f = cp.sum_entries(cp.max_elemwise(z-rho, 0)) + lam*cp.sum_entries(cp.max_elemwise(rho, 0))
C = [cp.sum_squares(x) <= t]
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


