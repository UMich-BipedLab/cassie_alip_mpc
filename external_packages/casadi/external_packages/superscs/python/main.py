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

import superscs 
from sys import getrefcount
from guppy import hpy

import numpy as np
from scipy import sparse
ij = np.array([[0,1,2,3],[0,1,2,3]])
A = sparse.csc_matrix(([-1.,-1.,1.,1.], ij), (4,4))
b = np.array([0.,0.,1,1])
c = np.array([1.,1.,-1,-1])
cone = {'l': 4}

print c
print b
print A
print cone
data = {'A': A, 'b':b, 'c':c}

sol = superscs.solve(data, cone, use_indirect = False)
print sol

sol = superscs.solve(data, cone, use_indirect = True)
print sol

sol = superscs.solve(data, cone, max_iters = 500, eps = 1e-6, normalize = False, use_indirect = False)
print sol

sol = superscs.solve(data, cone, max_iters = 500, eps = 1e-6, use_indirect = True)
print sol

print getrefcount(sol['x'])
h = hpy()
print h.heap()

data['x'] = sol['x']
data['y'] = sol['y']
data['s'] = sol['s']
sol = superscs.solve(data, cone, max_iters = 500, eps = 1e-6, use_indirect = False)
sol = superscs.solve(data, cone, max_iters = 500, eps = 1e-6, use_indirect = True)

