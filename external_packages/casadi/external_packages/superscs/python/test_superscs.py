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

import unittest
import superscs
import numpy as np
from numpy import linalg as npla
from scipy import sparse


class BroydenTestCase(unittest.TestCase):

    def test_nothing(self):
	return

    def test_superscs_solved(self):    
	x_correct = np.array([0., 0., 1., 1.])   
	ij = np.array([[0, 1, 2, 3] ,[0, 1, 2, 3]])
	A = sparse.csc_matrix(([-1., -1., 1., 1.], ij), (4, 4))
	b = np.array([0., 0.,  1,  1])
	c = np.array([1., 1., -1, -1])
	cone = {'l': 4}
	data = {'A': A, 'b': b, 'c': c}
	tolerance = 1e-8
	sol = superscs.solve(\
		data, cone, do_super_scs = True, \
		direction = 100, \
		use_indirect = False, memory = 10, \
		verbose = 0, eps = tolerance)
	self.assertEquals('Solved',sol['info']['status'])
	self.assertEquals(1, sol['info']['statusVal'])
	self.assertTrue(sol['info']['resPri'] < tolerance)
	self.assertTrue(sol['info']['resDual'] < tolerance)
	self.assertTrue(npla.norm(x_correct - sol['x']) < 1e-12)



class AATestCase(unittest.TestCase):


    def test_superscs_aa(self):    
	x_correct = np.array([0., 0., 1., 1.])   
	ij = np.array([[0, 1, 2, 3] ,[0, 1, 2, 3]])
	A = sparse.csc_matrix(([-1., -1., 1., 1.], ij), (4, 4))
	b = np.array([0., 0.,  1,  1])
	c = np.array([1., 1., -1, -1])
	cone = {'l': 4}
	data = {'A': A, 'b': b, 'c': c}
	tolerance = 1e-8
	sol = superscs.solve(\
		data, cone, do_super_scs = True, \
		direction = 150, \
		use_indirect = False, memory = 3, \
		verbose = 0, eps = tolerance)
	self.assertEquals('Solved',sol['info']['status'])
	self.assertEquals(1, sol['info']['statusVal'])
	self.assertTrue(sol['info']['resPri'] < tolerance)
	self.assertTrue(sol['info']['resDual'] < tolerance)
	self.assertTrue(npla.norm(x_correct - sol['x']) < 1e-12)

if __name__ == '__main__':
    unittest.main()

