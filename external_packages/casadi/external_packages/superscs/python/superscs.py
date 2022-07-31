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
#!/usr/bin/env python
from warnings import warn
from scipy import sparse
import _superscs_indirect

__version__ = _superscs_indirect.version()

def solve(probdata, cone, **kwargs):
    """
    solves convex cone problems
     
    @return dictionary with solution with keys:
         'x' - primal solution
         's' - primal slack solution
         'y' - dual solution
         'info' - information dictionary
    """
    if not probdata or not cone:
        raise TypeError("Missing data or cone information")

    if not 'A' in probdata or not 'b' in probdata or not 'c' in probdata:
        raise TypeError("Missing one or more of A, b, c from data dictionary")
    A = probdata['A']
    b = probdata['b']
    c = probdata['c']

    warm = {}
    if 'x' in probdata:
        warm['x'] = probdata['x']
    if 'y' in probdata:
        warm['y'] = probdata['y']
    if 's' in probdata:
        warm['s'] = probdata['s']

    if A is None or b is None or c is None:
        raise TypeError("Incomplete data specification")
    if not sparse.issparse(A):
        raise TypeError("A is required to be a sparse matrix")
    if not sparse.isspmatrix_csc(A):
        warn("Converting A to a CSC (compressed sparse column) matrix; may take a while.")
        A = A.tocsc()

    if sparse.issparse(b):
        b = b.todense()

    if sparse.issparse(c):
        c = c.todense()

    m, n = A.shape
    
    Adata, Aindices, Acolptr = A.data, A.indices, A.indptr
    if kwargs.pop('gpu', False): # False by default
        import _superscs_gpu
        return _superscs_gpu.csolve((m, n), Adata, Aindices, Acolptr, b, c, cone, warm, **kwargs)

    if not kwargs.pop('use_indirect', True): # True by default
        import _superscs_direct
        return _superscs_direct.csolve((m, n), Adata, Aindices, Acolptr, b, c, cone, warm, **kwargs)

    return _superscs_indirect.csolve((m, n), Adata, Aindices, Acolptr, b, c, cone, warm, **kwargs)
