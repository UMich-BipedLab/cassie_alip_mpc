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

# nost test suite copied initially from ECOS project
from __future__ import print_function
import platform

def import_error(msg):
  print()
  print("## IMPORT ERROR:" + msg)
  print()

try:
  from nose.tools import assert_raises, assert_almost_equals
except ImportError:
  import_error("Please install nose to run tests.")
  raise

try:
  import superscs
except ImportError:
  import_error("You must install the superscs module before running tests.")
  raise

try:
  import numpy as np
except ImportError:
  import_error("Please install numpy.")
  raise

try:
  import scipy.sparse as sp
except ImportError:
  import_error("Please install scipy.")
  raise

# global data structures for problem
c = np.array([-1.])
b = np.array([1., -0.])
A = sp.csc_matrix([1., -1.]).T.tocsc()
data = {'A':A, 'b':b, 'c':c}
cone = {'q': [], 'l': 2}

FAIL = 'Failure' # scs code for failure

def check_solution(solution, expected):
  assert_almost_equals(solution, expected, places=2)

def check_failure(sol):
  assert sol['info']['status'] == FAIL

def test_problems():
  sol = superscs.solve(data, cone, use_indirect=False)
  yield check_solution, sol['x'][0], 1

  new_cone = {'q':[2], 'l': 0}
  sol = superscs.solve(data, new_cone, use_indirect=False)
  yield check_solution, sol['x'][0], 0.5

  sol = superscs.solve(data, cone, use_indirect = True )
  yield check_solution, sol['x'][0], 1

  sol = superscs.solve(data, new_cone, use_indirect = True )
  yield check_solution, sol['x'][0], 0.5


if platform.python_version_tuple() < ('3','0','0'):
  def test_problems_with_longs():
    new_cone = {'q': [], 'l': long(2)}
    sol = superscs.solve(data, new_cone, use_indirect=False)
    yield check_solution, sol['x'][0], 1
    sol = superscs.solve(data, new_cone, use_indirect=True )
    yield check_solution, sol['x'][0], 1

    new_cone = {'q':[long(2)], 'l': 0}
    sol = superscs.solve(data, new_cone, use_indirect=False)
    yield check_solution, sol['x'][0], 0.5
    sol = superscs.solve(data, new_cone, use_indirect=True )
    yield check_solution, sol['x'][0], 0.5

def check_keyword(error_type, keyword, value):
  assert_raises(error_type, superscs.solve, data, cone, **{keyword: value})

def test_failures():
  yield assert_raises, TypeError, superscs.solve
  yield assert_raises, ValueError, superscs.solve, data, {'q':[4], 'l':-2}
  yield check_keyword, ValueError, 'max_iters', -1
  # python 2.6 and before just cast float to int
  if platform.python_version_tuple() >= ('2', '7', '0'):
    yield check_keyword, TypeError, 'max_iters', 1.1

  yield check_failure, superscs.solve( data, {'q':[1], 'l': 0} )

