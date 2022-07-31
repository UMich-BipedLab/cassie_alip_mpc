# This is automatically-generated code.

# Uses the jinja2 library for templating.


import cvxpy as cp
import numpy as np
import scipy as sp

# setup

problemID = "control_0"
prob = None
opt_val = None




# Variable declarations

# Generate data for control problem.
np.random.seed(1)
m = 2 # number of inputs
n = 8 # number of states
T = 50 # number of time steps
alpha = 0.2
beta = 5
A = np.eye(n) + alpha*np.random.randn(n,n)
B = np.random.randn(n,m)
x_0 = beta*np.random.randn(n,1)


# Problem construction

# Form and solve control problem.
x = cp.Variable(n, T+1)
u = cp.Variable(m, T)
states = []
for t in range(T):
    cost = cp.pnorm(u[:,t], 1)
    constr = [x[:,t+1] == A*x[:,t] + B*u[:,t],
              cp.norm(u[:,t], 'inf') <= 1]
    states.append(cp.Problem(cp.Minimize(cost), constr))
# sums problem objectives and concatenates constraints.
prob = sum(states)
prob.constraints += [x[:,T] == 0, x[:,0] == x_0]


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


