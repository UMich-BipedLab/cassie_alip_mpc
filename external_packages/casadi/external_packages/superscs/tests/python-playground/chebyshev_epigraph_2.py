# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup


problemID = "chebyshev_epigraph_2"
prob = None
opt_val = None

problemID = problemID + "_epigraph"




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

np.random.seed(0)
m = 400
n = 800
k = 10
A = [normalized_data_matrix(m,n,1) for i in range(k)]
B = normalized_data_matrix(k,n,1)
c = np.random.rand(k)


# Problem construction

x = cp.Variable(n)
t = cp.Variable(k)

f = cp.max_entries(t+cp.abs(B*x-c))
C = []
for i in range(k):
    C.append(cp.pnorm(A[i]*x, 2) <= t[i])

prob = cp.Problem(cp.Minimize(f), C)
opt_val = None


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


