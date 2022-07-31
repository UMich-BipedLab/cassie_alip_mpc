'''
The MIT License (MIT)

Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
                   Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
                   Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
'''
#!/usr/bin/env python -u
# encoding: utf-8

import numpy as np
from scipy import interpolate, ndimage
import gc
import os
import psutil
from cvxpy import *
import numpy

import objgraph

def sample_mem():
    gc.collect()
    process = psutil.Process(os.getpid())
    return process.get_memory_info()[0] / float(2 ** 20)

def cvx_solve():
    m = 128
    n = 10
    np.random.seed(1)
    A = np.random.randn(m, n)
    b = np.random.randn(m)

    # Construct the problem.
    x = Variable(n)
    objective = Minimize(norm(A*x - b))
    constraints = [0 <= x, x <= 1]
    prob = Problem(objective, constraints)
    prob.solve('SUPERSCS')
    # prob.solve('ECOS')
    # prob.solve('CVXOPT')

if __name__=='__main__':
    for _ in range(10000):
        cvx_solve()
        print(sample_mem())

