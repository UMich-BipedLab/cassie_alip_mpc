import cvxpy as cp            # CVXPy
import numpy as np            # NumPy
import scipy as sp            # SciPy
import superscs               # SuperSCS
import scipy.sparse as sps    # SciPy sparse
import scipy.linalg as la


''' -------------------- HELPERS -------------------- '''

    
'''
Helper function __quantileLoss
'''
def __quantileLoss(alphas, Theta, X, y):
    m, n = X.shape
    k = len(alphas)
    Y = np.tile(y.flatten(), (k, 1)).T
    A = np.tile(alphas, (m, 1))
    Z = X*Theta - Y
    return cp.sum_entries(
        cp.max_elemwise(
            cp.mul_elemwise( -A, Z),
            cp.mul_elemwise(1-A, Z)))

'''
Helper function
'''
def __normalized_data_matrix(m, n, mu):
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

def __hinge_loss(theta, X, y):
    if not all(np.unique(y) == [-1, 1]):
        raise ValueError("y must have binary labels in {-1,1}")
    return cp.sum_entries(cp.max_elemwise(1 - sps.diags([y],[0])*X*theta, 0))

def __create_classification(m, n, rho=1, mu=1, sigma=0.05):
    """Create a random classification problem."""
    A = __normalized_data_matrix(m, n, mu)
    x0 = sps.rand(n, 1, rho)
    x0.data = np.random.randn(x0.nnz)
    x0 = x0.toarray().ravel()

    b = np.sign(A.dot(x0) + sigma*np.random.randn(m))
    return A, b



''' -------------------- FUNCTIONS -------------------- '''


'''
Basis Pursuit problems
problemOptions = {'n':500, 'm':300, 'density':0.1}
'''
def basisPursuitProblem(problemOptions, solverOptions):
    A = np.random.rand(problemOptions['m'], problemOptions['n'])
    x0 = sps.rand(problemOptions['n'], 1, 0.1)
    b = A*x0
    x = cp.Variable( problemOptions['n'])
    prob = cp.Problem(cp.Minimize(cp.norm1(x)), [A*x == b])
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'basisPursuitProblem'}

'''
Chebyshev
problemOptions = {'n':200, 'm':100, 'k':10}
'''    
def chebyshevProblem(problemOptions, solverOptions):
    n = problemOptions['n']
    m = problemOptions['m']
    k = problemOptions['k']
    A = [__normalized_data_matrix(m,n,1) for i in range(k)]
    B = __normalized_data_matrix(k,n,1)
    c = np.random.rand(k)
    # Problem construction
    x = cp.Variable(n)
    obj_list = [cp.pnorm(A[i]*x, 2) + cp.abs(B[i,:]*x - c[i]) for i in range(k)]
    f = cp.max_elemwise(obj_list)
    prob = cp.Problem(cp.Minimize(f))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'chebyshevProblem'}
    

    
'''
Chebychev epigraph
problemOptions = {'n':200, 'm':100, 'k':10}
'''    
def chebyshevEpigraphProblem(problemOptions, solverOptions):
    n = problemOptions['n']
    m = problemOptions['m']
    k = problemOptions['k']
    A = [__normalized_data_matrix(m,n,1) for i in range(k)]
    B = __normalized_data_matrix(k,n,1)
    c = np.random.rand(k)
    x = cp.Variable(n)
    t = cp.Variable(k)
    f = cp.max_entries(t+cp.abs(B*x-c))
    C = []
    for i in range(k):
        C.append(cp.pnorm(A[i]*x, 2) <= t[i])
    prob = cp.Problem(cp.Minimize(f), C)
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'chebyshevEpigraphProblem'}


'''
Quantile regression
problemOptions = {'n':10, 'm':400, 'k':100, 'p':1, 'sigma':0.1}
'''    
def quantileProblem(problemOptions, solverOptions):
    n = problemOptions['n']
    m = problemOptions['m']
    k = problemOptions['k']
    p = problemOptions['p']
    sigma = problemOptions['sigma']
    # Variable declarations
    Theta = cp.Variable(n,k)
    x = np.random.rand(m)*2*np.pi*p
    y = np.sin(x) + sigma*np.sin(x)*np.random.randn(m)
    alphas = np.linspace(1./(k+1), 1-1./(k+1), k)
    # RBF features
    mu_rbf = np.array([np.linspace(-1, 2*np.pi*p+1, n)])
    mu_sig = (2*np.pi*p+2)/n
    X = np.exp(-(mu_rbf.T - x).T**2/(2*mu_sig**2))
    f = __quantileLoss(alphas, Theta, X, y)
    C = [X*(Theta[:,1:] - Theta[:,:-1]) >= 0]
    prob = cp.Problem(cp.Minimize(f), C)
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'quantileProblem'}

'''
Control
problemOptions = {'m':2, 'n':8, 'T':50, 'alpha':0.2, 'beta':5}
'''
def controlProblem(problemOptions, solverOptions):
    m = problemOptions['m'] # number of inputs
    n = problemOptions['n'] # number of states
    T = problemOptions['T'] # number of time steps
    alpha = problemOptions['alpha']
    beta = problemOptions['beta']
    A = np.eye(n) + alpha*np.random.randn(n,n)
    B = np.random.randn(n,m)
    x_0 = beta*np.random.randn(n,1)
    
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
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'controlProblem'}


'''
Covsel
problemOptions = {'m':20, 'n':30, 'lam':0.01, 'density': 0.01, 'beta':0.1}
'''
def covselProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    lam = problemOptions['lam']
    A = sps.rand(n,n, problemOptions['density'])
    A = np.asarray(A.T.dot(A).todense() + problemOptions['beta']*np.eye(n))
    L = np.linalg.cholesky(np.linalg.inv(A))
    X = np.random.randn(m,n).dot(L.T)
    S = X.T.dot(X)/m
    W = np.ones((n,n)) - np.eye(n)
    
    Theta = cp.Variable(n,n)
    prob = cp.Problem(cp.Minimize(
            lam*cp.norm1(cp.mul_elemwise(W,Theta)) +
            cp.sum_entries(cp.mul_elemwise(S,Theta)) -
            cp.log_det(Theta)))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'covselProblem'}


'''
Fused lasso problem
problemOptions = {'m':1000, 'ni':10, 'k':1000, 'rho': 0.05, 
                  'sigma':0.05, 'lam_factor': 0.1}
'''
def fusedLassoProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    ni = problemOptions['ni']
    k = problemOptions['k']
    rho=problemOptions['rho']
    sigma=problemOptions['sigma']

    A = np.random.randn(m, ni*k)
    A /= np.sqrt(np.sum(A**2, 0))

    x0 = np.zeros(ni*k)
    for i in range(k):
        if np.random.rand() < rho:
            x0[i*ni:(i+1)*ni] = np.random.rand()
    b = A.dot(x0) + sigma*np.random.randn(m)
    lam = problemOptions['lam_factor']*sigma*np.sqrt(m*np.log(ni*k))

    x = cp.Variable(A.shape[1])
    f = cp.sum_squares(A*x - b) + lam*cp.norm1(x) + lam*cp.tv(x)
    prob = cp.Problem(cp.Minimize(f))
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'fusedLassoProblem'}


'''
Hinge-based SVC with l1 term
problemOptions = {'m':1500, 'n':5000, 'rho': 0.01, 
                  'sigma':0.05, 'mu':1}
'''
def hingeL1ClassificationProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    rho = problemOptions['rho']
    sigma = problemOptions['sigma']
    mu = problemOptions['mu']
    lam = 0.5*sigma*np.sqrt(m*np.log(mu*n))
    A, b = __create_classification(m, n, rho=rho, mu=mu, sigma=sigma)

    x = cp.Variable(A.shape[1])
    f = __hinge_loss(x, A, b) + lam*cp.norm1(x)
    prob = cp.Problem(cp.Minimize(f))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'hingeL1ClassificationProblem'}


'''
Hinge-based SVC with l2 term
problemOptions = {'m':1500, 'n':5000, 'rho': 0.01, 
                  'sigma':0.05, 'mu':1}
'''
def hingeL2ClassificationProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    rho = problemOptions['rho']
    sigma = problemOptions['sigma']
    mu = problemOptions['mu']
    lam = 0.5*sigma*np.sqrt(m*np.log(mu*n))
    A, b = __create_classification(m, n, rho=rho, mu=mu, sigma=sigma)

    x = cp.Variable(A.shape[1])
    f = __hinge_loss(x, A, b) + lam*cp.sum_squares(x)
    prob = cp.Problem(cp.Minimize(f))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'hingeL2ClassificationProblem'}


'''
Huber
problemOptions = {'m':5000, 'n':200, 'noiselevel': 0.01, 'noiselevelsparse', 10}
'''
def huberProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']

    x0 = np.random.randn(n)
    A = np.random.randn(m,n)
    A = A*sps.diags([1 / np.sqrt(np.sum(A**2, 0))], [0])
    b = A.dot(x0) + np.sqrt(problemOptions['noiselevel'])*np.random.randn(m)
    b = b + problemOptions['noiselevelsparse']*np.asarray(sps.rand(m, 1, 0.05).todense()).ravel()

    x = cp.Variable(n)
    prob = cp.Problem(cp.Minimize(cp.sum_entries(cp.huber(A*x - b))))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'huberProblem'}

'''
Ininite push
problemOptions = {'m':100, 'n':200, 'd': 20, 'lam':1}
'''
def infPushProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    d = problemOptions['d']
    lam = problemOptions['lam']
    Xp = __normalized_data_matrix(m, d, 1)
    Xn = __normalized_data_matrix(n, d, 1)

    def infinite_push(theta, Xp, Xn):
        m, d = Xp.shape
        n = Xn.shape[0]
        Z = cp.max_elemwise(
            1 - (Xp*theta*np.ones((1,n)) - (Xn*theta*np.ones((1,m))).T), 0)
        return cp.max_entries(cp.sum_entries(Z, axis=0))

    theta = cp.Variable(d)
    f = infinite_push(theta, Xp, Xn) + lam*cp.sum_squares(theta)
    prob = cp.Problem(cp.Minimize(f))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'infPushProblem'}

'''
LASSO
problemOptions = {'m':1500, 'n':5000, 'rho': 0.01, 'mu':1, 'k':1, 'lam_factor':0.5}
'''
def lassoProblem(problemOptions, solverOptions):
    def create_regression(m, n, k=1, rho=1, mu=1, sigma=0.05):
        """Create a random (multivariate) regression problem."""

        A = __normalized_data_matrix(m, n, mu)
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

    m = problemOptions['m']
    n = problemOptions['n']
    rho = problemOptions['rho']
    mu = problemOptions['mu']
    k = problemOptions['k']

    A, B = create_regression(m, n, k = k, rho = rho, mu = mu)
    lambda_max = np.abs(A.T.dot(B)).max()
    lam = problemOptions['lam_factor']*lambda_max

    X = cp.Variable(A.shape[1], B.shape[1] if len(B.shape) > 1 else 1)
    f = cp.sum_squares(A*X - B) + lam*cp.norm1(X)
    prob = cp.Problem(cp.Minimize(f))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'lassoProblem'}


'''
Least absolute deviation
problemOptions = {'m':5000, 'n':200, 'noiselevel': 10, 'biaslevel':5}
'''
def leastAbsDevProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']

    A = np.random.randn(m,n);
    A = A*sps.diags([1 / np.sqrt(np.sum(A**2, 0))], [0])
    b = A.dot(problemOptions['noiselevel']*np.random.randn(n) 
              + problemOptions['biaslevel']*np.random.randn(1))
    k = max(m//50, 1)
    idx = np.random.randint(0, m, k)
    b[idx] += 100*np.random.randn(k)

    # Problem construction
    x = cp.Variable(n)
    v = cp.Variable(1)
    prob = cp.Problem(cp.Minimize(cp.norm1(A*x + v*np.ones(m) - b)))
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'leastAbsDevProblem'}

'''
Least squares
problemOptions = {'m':100, 'n':100, 'noiselevel': 10}
'''
def leastSquaresProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']

    x = cp.Variable(n)
    A = np.random.randn(m, n)
    A = A * sps.diags([1 / np.sqrt(np.sum(A**2, 0))], [0])
    x_0 = np.random.randn(n)
    b = A.dot(x_0) + problemOptions['noiselevel']*np.random.randn(m)

    # Problem construction
    objective = cp.Minimize(cp.sum_squares(A*x - b))
    prob = cp.Problem(objective)
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'leastSquaresProblem'}


'''
Logistic regression
problemOptions = {'m':1000, 'n':5000, 'rho': 0.01, 'mu':1, 'lam_factor':0.5}
'''
def logisticRegressionProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    rho = problemOptions['rho']
    mu = problemOptions['mu']

    A, b = __create_classification(m, n, rho = rho, mu = mu)

    ratio = float(np.sum(b==1)) / len(b)
    lambda_max = np.abs((1-ratio)*A[b==1,:].sum(axis=0) +
                        ratio*A[b==-1,:].sum(axis=0)).max()
    lam = problemOptions['lam_factor']*lambda_max


    # Problem construction

    x = cp.Variable(A.shape[1])
    def logistic_loss(theta, X, y):
        if not all(np.unique(y) == [-1, 1]):
            raise ValueError("y must have binary labels in {-1,1}")
        return cp.sum_entries(cp.logisticmu(-sps.diags([y],[0])*X*theta))

    f = logistic_loss(x, A, b) + lam*cp.norm1(x)
    prob = cp.Problem(cp.Minimize(f))
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'logisticRegressionProblem'}


'''
Linear programming
problemOptions = {'m':20, 'n':50}
'''
def lpProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']

    A = np.random.rand(m, n)

    y = (np.random.rand(n) - 0.5)
    x_hat = -np.select([y < 0], [y])
    Lambda = np.select([y >= 0], [y]) # x_hat^T Lambda = 0

    mu = np.random.rand(m)
    c = Lambda - A.T.dot(mu)
    b = A.dot(x_hat)


    # Problem construction
    x = cp.Variable(n)
    objective = cp.Minimize(c*x)
    constraints = [A*x == b, x >= 0]

    prob = cp.Problem(objective, constraints)
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'lp'}

'''
Max Gaussian
problemOptions = {'m':10, 'n':10, 'k':30}
'''
def maxGaussianProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    k = problemOptions['k']
    A = np.matrix(np.random.rand(m,n))
    A -= np.mean(A, axis=0)
    K = np.array([(A[i].T*A[i]).flatten() for i in range(m)])

    sigma_inv1 = cp.Variable(n,n) # Inverse covariance matrix
    t = cp.Variable(m)
    tdet = cp.Variable(1)

    f = cp.sum_largest(t+tdet, k)
    z = K*cp.reshape(sigma_inv1, n*n, 1)
    C = [-cp.log_det(sigma_inv1) <= tdet, t == z]
    prob = cp.Problem(cp.Minimize(f), C)
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'maxGaussianProblem'}


'''
Max Gaussian
problemOptions = {'m':10, 'n':10, 'k':30}
'''
def maxGaussianEpigraphProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    k = problemOptions['k']
    
    A = np.matrix(np.random.rand(m,n))
    A -= np.mean(A, axis=0)
    K = np.array([(A[i].T*A[i]).flatten() for i in range(m)])

    sigma_inv = cp.Variable(n, n) # Inverse covariance matrix
    obs = cp.vstack([-cp.log_det(sigma_inv) + cp.trace(A[i].T*A[i]*sigma_inv) for i in range(m)])
    f = cp.sum_largest(obs, k)
    prob = cp.Problem(cp.Minimize(f))
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'maxGaussianEpigraphProblem'}

'''
Max/Soft max
problemOptions = {'m':100, 'n':50, 'k':20, 'p':5}
'''
def maxSoftMaxProblem(problemOptions, solverOptions):
    k = problemOptions['k']  #class
    m = problemOptions['m'] #instances
    n = problemOptions['n']  #dim
    p = problemOptions['p']   #p-largest
    X = __normalized_data_matrix(m,n,1)
    Y = np.random.randint(0, k, m)

    # Problem construction
    Theta = cp.Variable(n,k)
    beta = cp.Variable(1,k)
    obs = cp.vstack([-(X[i]*Theta + beta)[Y[i]] + cp.log_sum_exp(X[i]*Theta + beta) for i in range(m)])
    prob = cp.Problem(cp.Minimize(cp.sum_largest(obs, p) + cp.sum_squares(Theta)))
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'maxSoftMaxProblem'}

'''
Max/Soft max, epigraphical formulation
problemOptions = {'m':100, 'n':50, 'k':20, 'p':5}
'''
def maxSoftMaxEpigraphProblem(problemOptions, solverOptions):
    k = problemOptions['k']  #class
    m = problemOptions['m'] #instances
    n = problemOptions['n']  #dim
    p = problemOptions['p']   #p-largest
    
    X = __normalized_data_matrix(m,n,1)
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
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'maxSoftMaxEpigraphProblem'}



'''
1-class SVM
problemOptions = {'m':5000, 'n':200}
'''
def oneClassSVMProblem(problemOptions, solverOptions):
    n = problemOptions['n']
    m = problemOptions['m']

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

    x = cp.Variable(n)
    rho = cp.Variable(1)

    # Straightforward expression
    z = np.sum(A**2, axis=1) - 2*A*x + cp.sum_squares(x)  # z_i = ||a_i - x||^2
    f = cp.sum_entries(cp.max_elemwise(z - rho, 0)) + lam*cp.sum_entries(cp.max_elemwise(0, rho))
    prob = cp.Problem(cp.Minimize(f))
                                  
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'oneClassSVMProblem'}



'''
Robust SVM
problemOptions = {'m':2000, 'n':600, 'mu':1, 'rho':1, 'sigma':0.1, 'gamma':0.7, 'lam':1}
'''
def robustSVMProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    mu = problemOptions['mu']
    rho = problemOptions['rho']
    sigma = problemOptions['sigma']
    gamma = problemOptions['gamma']
    lam = problemOptions['lam']

    A = __normalized_data_matrix(m, n, mu)
    x0 = sps.rand(n, 1, rho)
    x0.data = np.random.randn(x0.nnz)
    x0 = x0.toarray().ravel()

    b = np.sign(A.dot(x0) + sigma*np.random.randn(m))
    A[b>0,:] += gamma*np.tile([x0], (np.sum(b>0),1))
    A[b<0,:] -= gamma*np.tile([x0], (np.sum(b<0),1))

    P = la.block_diag(np.random.randn(n-1,n-1), 0)

    x = cp.Variable(n)
    z = 1 - sps.diags([b],[0])*A*x + cp.norm1(P.T*x) 
    f = lam*cp.sum_squares(x) + cp.sum_entries(cp.max_elemwise(z, 0))
    prob = cp.Problem(cp.Minimize(f))
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'robustSVMProblem'}



'''
TV minimization
problemOptions = {'n':100000, 'noiselevel':10}
'''
def tvProblem(problemOptions, solverOptions):
    n = problemOptions['n']

    k = max(int(np.sqrt(n)/2), 1)

    x0 = np.ones((n,1))
    idxs = np.random.randint(0, n, (k,2))
    idxs.sort()
    for a, b in idxs:
        x0[a:b] += problemOptions['noiselevel']*(np.random.rand()-0.5)
    b = x0 + np.random.randn(n, 1)

    lam = np.sqrt(n)

    x = cp.Variable(n)
    f = 0.5*cp.sum_squares(x-b) + lam*cp.norm1(x[1:]-x[:-1])
    prob = cp.Problem(cp.Minimize(f))
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'tvProblem'}



'''
QP
problemOptions = {'n':1000, 'beta':1}
'''
def qpProblem(problemOptions, solverOptions):
    n = problemOptions['n']
    beta = problemOptions['beta']

    P = np.random.rand(n,n);
    P = P.T.dot(P) + beta*np.eye(n)
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
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'qpProblem'}


'''
Portfolio selection
problemOptions = {'n':50000, 'beta':500, 'density':0.1, 'noiselevel':0.01}
'''
def portfolioProblem(problemOptions, solverOptions):
    m = problemOptions['m']
    n = problemOptions['n']
    density = problemOptions['density']

    mu = np.exp(problemOptions['noiselevel']*np.random.randn(n))-1  # returns
    D = np.random.rand(n)/10;               # idiosyncratic risk
    F = sps.rand(n,m,density)                # factor model
    F.data = np.random.randn(len(F.data))/10
    gamma = 1
    B = 1
    x = cp.Variable(n)
    
    # Problem construction
    f = mu.T*x - gamma*(cp.sum_squares(F.T.dot(x)) +
                        cp.sum_squares(cp.mul_elemwise(D, x)))
    C = [cp.sum_entries(x) == B,
         x >= 0]

    prob = cp.Problem(cp.Maximize(f), C)
    
    prob.solve(**solverOptions)
    return {'Problem':prob, 'name':'portfolioProblem'}



