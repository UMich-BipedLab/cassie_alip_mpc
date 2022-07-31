ifeq ($(OS),Windows_NT)
UNAME = CYGWINorMINGWorMSYS
else
UNAME = $(shell uname -s)
endif

ifeq (, $(CC))
CC = gcc
endif

CUCC = $(CC) #Don't need to use nvcc, since using cuda blas APIs

# For GPU must add cuda libs to path, e.g.
# export DYLD_LIBRARY_PATH=/usr/local/cuda/lib:$DYLD_LIBRARY_PATH

ifneq (, $(findstring CYGWIN, $(UNAME)))
ISWINDOWS := 1
else
ifneq (, $(findstring MINGW, $(UNAME)))
ISWINDOWS := 1
else
ifneq (, $(findstring MSYS, $(UNAME)))
ISWINDOWS := 1
else
ISWINDOWS := 0
endif
endif
endif

ifeq ($(UNAME), Darwin)
# we're on apple, no need to link rt library
LDFLAGS += -lm
SHARED = dylib
SONAME = -install_name
CULDFLAGS = -L/usr/local/cuda/lib
else
ifeq ($(ISWINDOWS), 1)
# we're on windows (cygwin or msys)
LDFLAGS += -lm
SHARED = dll
SONAME = -soname
CULDFLAGS = -L/usr/local/cuda/lib64 #TODO: probably doesn't work...
else
# we're on a linux system, use accurate timer provided by clock_gettime()
LDFLAGS += -lm -lrt
SHARED = so
SONAME = -soname
CULDFLAGS = -L/usr/local/cuda/lib64
endif
endif

# Add on default CFLAGS
CFLAGS += -g -Wall -std=c99 -Wwrite-strings -funroll-loops -Wstrict-prototypes -I. -Iinclude
ifneq ($(ISWINDOWS), 1)
CFLAGS += -fPIC
endif

# The following flag is to enable C90-compatible string
# formatting in printf
ifeq ($(ISWINDOWS), 1)
CFLAGS += -D__USE_MINGW_ANSI_STDIO=1
endif

CULDFLAGS += -lcudart -lcublas -lcusparse
CUDAFLAGS = $(CFLAGS) -I/usr/local/cuda/include -Wno-c++11-long-long # turn off annoying long-long warnings in cuda header files

LINSYS = linsys
DIRSRC = $(LINSYS)/direct
DIRSRCEXT = $(DIRSRC)/external
INDIRSRC = $(LINSYS)/indirect
GPU = $(LINSYS)/gpu

OUT = out
AR = ar
ARFLAGS = rv
ARCHIVE = $(AR) $(ARFLAGS)
RANLIB = ranlib

OPT_FLAGS =
########### OPTIONAL FLAGS ##########
# these can all be override from the command line
# e.g. make DLONG=1 will override the setting below

# ------------------------------------------------------
# Profiling parameters 
# ------------------------------------------------------
ifeq (, $(PN))
PN=default
endif

# Activate/Deactivate profiling
ifeq (,$(PF))
    PF = 0
    OPT_DEFAULT = -Ofast
endif
ifneq ($(PF), 0)
    CFLAGS += -pg
    OPT_DEFAULT = -O0
    ifeq (,$(SCS_MEM))
        CFLAGS += -DSCS_MEM=20
    else
        CFLAGS += -DSCS_MEM=$(SCS_MEM)
    endif
    ifeq (,$(SCS_DIR))
        CFLAGS += -DSCS_DIR=restarted_broyden
    else
        CFLAGS += -DSCS_DIR=$(SCS_DIR)
    endif
    ifneq (,$(PROBLEM_YAML_FILE))
	CFLAGS += -DPROBLEM_YAML_FILE=$(PROBLEM_YAML_FILE)
    endif
endif

ifeq (,$(OPT))
CFLAGS += $(OPT_DEFAULT)
else
CFLAGS += -O$(OPT)
endif


# ------------------------------------------------------
# Coverage parameters
# ------------------------------------------------------
# Activate/Deactivate coverage
ifeq (,$(COV))
COV = 0
endif
ifneq ($(COV), 0)
CFLAGS += --coverage
endif



# ------------------------------------------------------
# Other parameters
# ------------------------------------------------------

# Whether to activate SVD for the computation of AA directions
ifeq (,$(SVD_ACTIVATED))
SVD_ACTIVATED = 1
endif
ifneq ($(SVD_ACTIVATED), 0)
OPT_FLAGS += -DSVD_ACTIVATED=$(SVD_ACTIVATED)
endif

ifeq (,$(DLONG))
DLONG = 0
endif
ifneq ($(DLONG), 0)
OPT_FLAGS += -DDLONG=$(DLONG) # use longs rather than ints
endif

ifeq (,$(CTRLC))
CTRLC = 1
endif
ifneq ($(CTRLC), 0)
OPT_FLAGS += -DCTRLC=$(CTRLC) # graceful interrupts with ctrl-c
endif


ifeq (,$(FLOAT))
FLOAT = 0
endif
ifneq ($(FLOAT), 0)
OPT_FLAGS += -DFLOAT=$(FLOAT) # use floats rather than doubles
endif

ifeq (,$(NOVALIDATE))
NOVALIDATE = 0
endif
NOVALIDATE = 0
ifneq ($(NOVALIDATE), 0)
OPT_FLAGS += -DNOVALIDATE=$(NOVALIDATE)$ # remove data validation step
endif


ifeq (,$(NOTIMER))
NOTIMER = 0
endif
NOTIMER = 0
ifneq ($(NOTIMER), 0)
OPT_FLAGS += -DNOTIMER=$(NOTIMER) # no timing, times reported as nan
endif

ifeq (,$(COPYAMATRIX))
COPYAMATRIX = 1
endif
ifneq ($(COPYAMATRIX), 0)
OPT_FLAGS += -DCOPYAMATRIX=$(COPYAMATRIX) # if normalize, copy A
endif

ifeq (,$(TEST_GPU_MAT_MUL))
TEST_GPU_MAT_MUL = 0
endif
ifneq ($(TEST_GPU_MAT_MUL), 0)
OPT_FLAGS += -DTEST_GPU_MAT_MUL=$(TEST_GPU_MAT_MUL) # tests GPU matrix multiply for correctness
endif

############ OPENMP: ############
# set USE_OPENMP = 1 to allow openmp (multi-threaded matrix multiplies):
# set the number of threads to, for example, 4 by entering the command:
# export OMP_NUM_THREADS=4

ifeq (,$(USE_OPENMP))
USE_OPENMP = 0
endif
ifneq ($(USE_OPENMP), 0)
  CFLAGS += -fopenmp
  LDFLAGS += -lgomp
endif

############ SDPS: BLAS + LAPACK ############
# set USE_LAPACK = 1 below to enable solving SDPs
# NB: point the libraries to the locations where
# you have blas and lapack installed

ifeq (,$(USE_LAPACK))
USE_LAPACK = 1
endif
ifneq ($(USE_LAPACK), 0)
  # edit these for your setup:
  BLASLDFLAGS = -lblas -llapack #-lgfortran
  LDFLAGS += $(BLASLDFLAGS)
  OPT_FLAGS += -DLAPACK_LIB_FOUND -DUSE_LAPACK

  BLAS64 = 0
  ifneq ($(BLAS64), 0)
  OPT_FLAGS += -DBLAS64=$(BLAS64) # if blas/lapack lib uses 64 bit ints
  endif

  NOBLASSUFFIX = 0
  ifneq ($(NOBLASSUFFIX), 0)
  OPT_FLAGS += -DNOBLASSUFFIX=$(NOBLASSUFFIX) # hack to strip blas suffix
  endif

  BLASSUFFIX = "_"
  ifneq ($(BLASSUFFIX), "_")
  OPT_FLAGS += -DBLASSUFFIX=$(BLASSUFFIX) # blas suffix (underscore usually)
  endif
endif

MATLAB_MEX_FILE = 0
ifneq ($(MATLAB_MEX_FILE), 0)
OPT_FLAGS += -DMATLAB_MEX_FILE=$(MATLAB_MEX_FILE) # matlab mex
endif
PYTHON = 0
ifneq ($(PYTHON), 0)
OPT_FLAGS += -DPYTHON=$(PYTHON) # python extension
endif
USING_R = 0
ifneq ($(USING_R), 0)
OPT_FLAGS += -DUSING_R=$(USING_R) # R extension
endif

# debug to see var values, e.g. 'make print-OBJECTS' shows OBJECTS value
print-%: ; @echo $*=$($*)
