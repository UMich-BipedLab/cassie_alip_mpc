AC_PREREQ(2.69)
AC_INIT([SNOPT-APIs],[2.0.0],[optimizers@ccom.ucsd.edu],[snopt-interfaces])

AC_CONFIG_SRCDIR([src/snoptProblem.cpp])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([config/m4])

AC_PREFIX_DEFAULT([`pwd`])

user_CFLAGS=${CFLAGS}
user_CXXFLAGS=${CXXFLAGS}
user_LDFLAGS=${LDFLAGS}

# Libtool
LT_INIT
AC_SUBST([LIBTOOL_DEPS])

# Check compilers.
AC_PROG_INSTALL
AC_PROG_FC
AC_PROG_CC
AC_PROG_CXX

AC_FC_LIBRARY_LDFLAGS
AC_SUBST([FCLIBS])

AC_FC_MODULE_OUTPUT_FLAG([],
  [ case $FC in
      *nagfor* ) FC_MODOUT="-mdir ";;
    esac
  ])
AC_FC_MODULE_FLAG([],
  [ case $FC in
      *nagfor* ) FC_MODINC="-mdir ";;
    esac
  ])

AC_SUBST(FC_MODOUT)
AC_SUBST(FC_MODINC)

dnl ----------------------------------------------------------------------------

# BLAS library.
AC_ARG_WITH([blas],
	    [AS_HELP_STRING([--with-blas=<lib>], [use BLAS library <lib>])],
	    [with_blas=${withval} ], [ blas=no ] )
case $with_blas in
	yes | "" | no) blas=no ;;
	-* | */* | *.a | *.so | *.so.* | *.o)
	  blas=yes; BLAS_LIBS="$with_blas" ;;
	*)
	  blas=yes; BLAS_LIBS="-l$with_blas" ;;
esac
AC_SUBST([blas])
AC_SUBST([BLAS_LIBS])

dnl ----------------------------------------------------------------------------

AC_ARG_WITH([snopt],
	    [AS_HELP_STRING([--with-snopt=/path/to/snopt], [location of SNOPT library])],
	    [snopt_dir=${withval}; ], [ snopt_dir=${libdir}; ] )
AC_SUBST([snopt_dir])

dnl ----------------------------------------------------------------------------

AC_ARG_WITH([c],[AS_HELP_STRING([--with-c, --without-c],
     [Compile C interfaces for SNOPT (default: with-c)]) ],
     [with_c=no;], [with_c=yes;] )
AC_MSG_CHECKING([for C interface])
AC_MSG_RESULT([${with_c}])

AC_ARG_WITH([cpp],
	    [AS_HELP_STRING([--with-cpp, --without-cpp],
                  [Compile C++ interfaces for SNOPT (default: with-cpp)]) ],
          [with_cpp=no;], [with_cpp=yes;] )
AC_MSG_CHECKING([for C++ interface])
AC_MSG_RESULT([${with_cpp}])

dnl ----------------------------------------------------------------------------

CFLAGS="${user_CFLAGS}"
CXXFLAGS="${user_CXXFLAGS}"
LDFLAGS="${user_LDFLAGS}"

AC_SUBST([CFLAGS])
AC_SUBST([CXXFLAGS])

AC_OUTPUT([Makefile])

echo ""
echo "The SNOPT interface libraries will be compiled:"
echo "  C   support?                      ${with_c}"
echo "  C++ support?                      ${with_cpp}"
echo ""
echo "Libraries will be installed into      ${prefix}/lib"
echo "  Shared libraries will be created:   ${enable_shared}"
echo "  Static libraries will be created:   ${enable_static}"
echo ""
echo "SNOPT library location?               ${snopt_dir}"
echo ""
echo "Using external BLAS library?          ${blas}    ${BLAS_LIBS} "
echo ""
echo "To build everything                   'make'          "
echo "To install the libraries              'make install'  "
echo "To build the examples                 'make examples' "
if test x"${with_c}" == xyes; then
  echo ""
  echo "To build   the SNOPT C interface      'make snopt_c'"
  echo "To install the SNOPT C interface      'make install_c'"
  echo "To build   the C examples             'make examples_c' "
fi

if test x"${with_cpp}" == xyes; then
  echo ""
  echo "To build   the SNOPT C++ interface    'make snopt_cpp'"
  echo "To install the SNOPT C++ interface    'make install_cpp'"
  echo "To build   the C++ examples           'make examples_cpp' "
fi
