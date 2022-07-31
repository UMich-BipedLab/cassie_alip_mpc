from scs_benchmark import *



''' ------------ HELPERS -------------- '''
def __problemToDict(problem, problemOptions, solverOptions):
    p = problem['Problem']
    problemDict = {   'name':problem['name'],
                      'value':p.value,
                      'iters':p.solver_stats.num_iters,
                      'setup_time':p.solver_stats.setup_time,
                      'solve_time':p.solver_stats.solve_time,
                      'problemOptions':problemOptions,
                      'solverOptions':solverOptions}
    return problemDict




'''
infPushProfile(solverOptions)
'''
def infPushProfile(solverOptions,
                   mrange=[50 + 10*p for p in range(1,10)], 
                   drange=[10, 20, 30], 
                   lrange=[0.5, 1, 10],
                   reps=3,
                   randSeed=0):
    np.random.seed(randSeed)
    times = []
    probDicts = []
    for m in mrange:
        for d in drange:
            for i in range(reps):
                problemOptions = {'m':m, 'n':2*m, 'd': d, 'lam':10}
                P = infPushProblem(problemOptions, solverOptions)
                t = P['Problem'].solver_stats.solve_time
                times.append(t);
                probDicts.append(__problemToDict(P, problemOptions, solverOptions))
    return {'times':times, 'probDicts':probDicts}


'''
chebyshevProfile(solverOptions)
'''
def chebyshevProfile(solverOptions,
                   mrange=[50, 100, 200, 500], 
                   n_factor_range=[2,3], 
                   krange=[5, 10, 20],
                   reps=3,
                   randSeed=0):
    np.random.seed(randSeed)
    times = []
    probDicts = []
    for m in mrange:
        for n_factor in n_factor_range:
            for k in krange:
                for i in range(reps):
                    n=n_factor*m
                    problemOptions = {'m':m, 'n':n, 'k': k}
                    P=chebyshevProblem(problemOptions, solverOptions)
    return {'times':times, 'probDicts':probDicts}
