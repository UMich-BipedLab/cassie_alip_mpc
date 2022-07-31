# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "quantile_0"
prob = None
opt_val = None




# Variable declarations

# Generate data
np.random.seed(0)
m = 400
n = 10
k = 100
p = 1
sigma = 0.1

x = np.random.rand(m)*2*np.pi*p
y = np.sin(x) + sigma*np.sin(x)*np.random.randn(m)
alphas = np.linspace(1./(k+1), 1-1./(k+1), k)

# RBF features
mu_rbf = np.array([np.linspace(-1, 2*np.pi*p+1, n)])
mu_sig = (2*np.pi*p+2)/n
X = np.exp(-(mu_rbf.T - x).T**2/(2*mu_sig**2))


# Problem construction

Theta = cp.Variable(n,k)
def quantile_loss(alphas, Theta, X, y):
    m, n = X.shape
    k = len(alphas)
    Y = np.tile(y.flatten(), (k, 1)).T
    A = np.tile(alphas, (m, 1))
    Z = X*Theta - Y
    return cp.sum_entries(
        cp.max_elemwise(
            cp.mul_elemwise( -A, Z),
            cp.mul_elemwise(1-A, Z)))

f = quantile_loss(alphas, Theta, X, y)
C = [X*(Theta[:,1:] - Theta[:,:-1]) >= 0]
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


