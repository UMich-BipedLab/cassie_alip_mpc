/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:32 GMT-04:00
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
  double t331;
  double t438;
  double t78;
  double t405;
  double t472;
  double t509;
  double t417;
  double t483;
  double t496;
  double t74;
  double t523;
  double t525;
  double t622;
  double t23;
  double t1043;
  double t1123;
  double t1169;
  double t1195;
  double t1451;
  double t1460;
  double t1549;
  double t1638;
  double t1651;
  double t1659;
  double t499;
  double t757;
  double t758;
  double t1189;
  double t1216;
  double t1253;
  double t1258;
  double t1263;
  double t1324;
  double t1550;
  double t1674;
  double t1721;
  double t1748;
  double t1828;
  double t1830;
  double t1851;
  double t1887;
  double t1944;
  double t1974;
  double t2034;
  double t2038;
  double t2072;
  double t2122;
  double t2161;
  double t2162;
  double t2196;
  double t2210;
  t331 = Cos(var1[5]);
  t438 = Sin(var1[3]);
  t78 = Cos(var1[3]);
  t405 = Sin(var1[4]);
  t472 = Sin(var1[5]);
  t509 = Sin(var1[13]);
  t417 = t78*t331*t405;
  t483 = t438*t472;
  t496 = t417 + t483;
  t74 = Cos(var1[13]);
  t523 = -1.*t331*t438;
  t525 = t78*t405*t472;
  t622 = t523 + t525;
  t23 = Cos(var1[15]);
  t1043 = Sin(var1[15]);
  t1123 = Cos(var1[14]);
  t1169 = Cos(var1[4]);
  t1195 = Sin(var1[14]);
  t1451 = t331*t438*t405;
  t1460 = -1.*t78*t472;
  t1549 = t1451 + t1460;
  t1638 = t78*t331;
  t1651 = t438*t405*t472;
  t1659 = t1638 + t1651;
  t499 = t74*t496;
  t757 = -1.*t509*t622;
  t758 = t499 + t757;
  t1189 = t1123*t78*t1169;
  t1216 = t509*t496;
  t1253 = t74*t622;
  t1258 = t1216 + t1253;
  t1263 = t1195*t1258;
  t1324 = t1189 + t1263;
  t1550 = t74*t1549;
  t1674 = -1.*t509*t1659;
  t1721 = t1550 + t1674;
  t1748 = t1123*t1169*t438;
  t1828 = t509*t1549;
  t1830 = t74*t1659;
  t1851 = t1828 + t1830;
  t1887 = t1195*t1851;
  t1944 = t1748 + t1887;
  t1974 = t74*t1169*t331;
  t2034 = -1.*t1169*t509*t472;
  t2038 = t1974 + t2034;
  t2072 = -1.*t1123*t405;
  t2122 = t1169*t331*t509;
  t2161 = t74*t1169*t472;
  t2162 = t2122 + t2161;
  t2196 = t1195*t2162;
  t2210 = t2072 + t2196;
  p_output1[0]=t1043*t1324 - 1.*t23*t758;
  p_output1[1]=t1043*t1944 - 1.*t1721*t23;
  p_output1[2]=t1043*t2210 - 1.*t2038*t23;
  p_output1[3]=t1324*t23 + t1043*t758;
  p_output1[4]=t1043*t1721 + t1944*t23;
  p_output1[5]=t1043*t2038 + t2210*t23;
  p_output1[6]=-1.*t1123*t1258 + t1169*t1195*t78;
  p_output1[7]=-1.*t1123*t1851 + t1169*t1195*t438;
  p_output1[8]=-1.*t1123*t2162 - 1.*t1195*t405;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightThighJoint_mex.hh"

namespace SymExpression
{

void R_RightThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
