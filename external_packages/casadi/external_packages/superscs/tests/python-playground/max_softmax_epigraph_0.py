# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup


problemID = "max_softmax_epigraph_0"
prob = None
opt_val = None

problemID = problemID + "_epigraph"




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

np.random.seed(0)
k = 20  #class
m = 100  #instance
n = 50  #dim
p = 5   #p-largest
X = normalized_data_matrix(m,n,1)
Y = np.random.randint(0, k, m)


# Problem construction

def one_hot(y, k):
    m = len(y)
    return sps.coo_matrix((np.ones(m), (np.arange(m), y)), shape=(m, k)).todense()

Theta = cp.Variable(n,k)
beta = cp.Variable(1, k)
t = cp.Variable(m)
texp = cp.Variable(m)

f = cp.sum_largest(t+texp, p) + cp.sum_squares(Theta)
C = []
C.append(cp.log_sum_exp(X*Theta + np.ones((m, 1))*beta, axis=1) <= texp)
Yi = one_hot(Y, k)
C.append(t == cp.vstack([-(X[i]*Theta + beta)[Y[i]] for i in range(m)]))
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


