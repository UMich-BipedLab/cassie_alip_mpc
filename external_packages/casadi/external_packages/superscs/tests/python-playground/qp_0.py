# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "qp_0"
prob = None
opt_val = None




# Variable declarations

np.random.seed(0)
n = 1000

P = np.random.rand(n,n);
P = P.T.dot(P) + np.eye(n)
q = np.random.randn(n);
r = np.random.randn();

l = np.random.randn(n);
u = np.random.randn(n);
lb = np.minimum(l,u);
ub = np.maximum(l,u);



# Problem construction

x = cp.Variable(n)
f = 0.5*cp.quad_form(x, P) + q.T*x + r
C = [x >= lb,
     x <= ub]
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


