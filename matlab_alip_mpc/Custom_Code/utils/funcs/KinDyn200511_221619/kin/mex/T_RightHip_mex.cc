/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:59 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t246;
  double t278;
  double t126;
  double t248;
  double t363;
  double t63;
  double t519;
  double t989;
  double t267;
  double t382;
  double t468;
  double t542;
  double t614;
  double t622;
  double t1217;
  double t1276;
  double t719;
  double t727;
  double t748;
  double t758;
  double t788;
  double t909;
  double t1320;
  double t1324;
  double t1359;
  double t1463;
  double t1489;
  double t1490;
  double t1555;
  double t1579;
  double t1586;
  double t1887;
  double t1922;
  double t1800;
  double t1817;
  double t1240;
  double t1391;
  double t1395;
  double t1825;
  double t1861;
  double t1863;
  double t1947;
  double t1952;
  double t1970;
  double t1976;
  double t1996;
  double t1999;
  double t2015;
  double t2038;
  double t2042;
  double t1406;
  double t1527;
  double t1538;
  double t1548;
  double t1609;
  double t1629;
  t246 = Cos(var1[5]);
  t278 = Sin(var1[3]);
  t126 = Cos(var1[3]);
  t248 = Sin(var1[4]);
  t363 = Sin(var1[5]);
  t63 = Cos(var1[13]);
  t519 = Sin(var1[13]);
  t989 = Cos(var1[4]);
  t267 = t126*t246*t248;
  t382 = t278*t363;
  t468 = t267 + t382;
  t542 = -1.*t246*t278;
  t614 = t126*t248*t363;
  t622 = t542 + t614;
  t1217 = Cos(var1[14]);
  t1276 = Sin(var1[14]);
  t719 = t246*t278*t248;
  t727 = -1.*t126*t363;
  t748 = t719 + t727;
  t758 = t126*t246;
  t788 = t278*t248*t363;
  t909 = t758 + t788;
  t1320 = t519*t468;
  t1324 = t63*t622;
  t1359 = t1320 + t1324;
  t1463 = t519*t748;
  t1489 = t63*t909;
  t1490 = t1463 + t1489;
  t1555 = t989*t246*t519;
  t1579 = t63*t989*t363;
  t1586 = t1555 + t1579;
  t1887 = -1.*t63;
  t1922 = 1. + t1887;
  t1800 = -1.*t1217;
  t1817 = 1. + t1800;
  t1240 = t1217*t126*t989;
  t1391 = t1276*t1359;
  t1395 = t1240 + t1391;
  t1825 = -0.08055*t1817;
  t1861 = -0.135*t1276;
  t1863 = 0. + t1825 + t1861;
  t1947 = 0.07996*t1922;
  t1952 = 0.135*t519;
  t1970 = 0. + t1947 + t1952;
  t1976 = -0.135*t1922;
  t1996 = 0.07996*t519;
  t1999 = 0. + t1976 + t1996;
  t2015 = -0.135*t1817;
  t2038 = 0.08055*t1276;
  t2042 = 0. + t2015 + t2038;
  t1406 = t1217*t989*t278;
  t1527 = t1276*t1490;
  t1538 = t1406 + t1527;
  t1548 = -1.*t1217*t248;
  t1609 = t1276*t1586;
  t1629 = t1548 + t1609;
  p_output1[0]=t519*t622 - 1.*t468*t63;
  p_output1[1]=-1.*t63*t748 + t519*t909;
  p_output1[2]=t363*t519*t989 - 1.*t246*t63*t989;
  p_output1[3]=0.;
  p_output1[4]=t1395;
  p_output1[5]=t1538;
  p_output1[6]=t1629;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1217*t1359 + t126*t1276*t989;
  p_output1[9]=-1.*t1217*t1490 + t1276*t278*t989;
  p_output1[10]=-1.*t1217*t1586 - 1.*t1276*t248;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1395 + t1359*t2042 + t1970*t468 + t1999*t622 + 0.04566*(-1.*t519*t622 + t468*t63) + t126*t1863*t989 - 0.135*(t1217*t1359 - 1.*t126*t1276*t989) + var1[0];
  p_output1[13]=0. - 0.08055*t1538 + t1490*t2042 + t1970*t748 + t1999*t909 + 0.04566*(t63*t748 - 1.*t519*t909) + t1863*t278*t989 - 0.135*(t1217*t1490 - 1.*t1276*t278*t989) + var1[1];
  p_output1[14]=0. - 0.08055*t1629 + t1586*t2042 - 1.*t1863*t248 - 0.135*(t1217*t1586 + t1276*t248) + t1970*t246*t989 + t1999*t363*t989 + 0.04566*(-1.*t363*t519*t989 + t246*t63*t989) + var1[2];
  p_output1[15]=1.;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_RightHip_mex.hh"

namespace SymExpression
{

void T_RightHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
