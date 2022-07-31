/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:30 GMT-04:00
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
  double t70;
  double t139;
  double t62;
  double t121;
  double t190;
  double t268;
  double t128;
  double t191;
  double t238;
  double t4;
  double t294;
  double t338;
  double t391;
  double t3;
  double t419;
  double t421;
  double t449;
  double t620;
  double t823;
  double t837;
  double t862;
  double t932;
  double t958;
  double t959;
  double t243;
  double t394;
  double t396;
  double t566;
  double t653;
  double t668;
  double t700;
  double t716;
  double t738;
  double t928;
  double t970;
  double t973;
  double t1000;
  double t1054;
  double t1083;
  double t1100;
  double t1140;
  double t1142;
  double t1253;
  double t1257;
  double t1262;
  double t1296;
  double t1322;
  double t1340;
  double t1362;
  double t1379;
  double t1420;
  double t2022;
  double t2031;
  double t1763;
  double t1767;
  double t2223;
  double t2238;
  double t1443;
  double t1445;
  double t1458;
  double t1782;
  double t1787;
  double t1809;
  double t2036;
  double t2042;
  double t2044;
  double t2092;
  double t2097;
  double t2112;
  double t2187;
  double t2194;
  double t2217;
  double t2239;
  double t2248;
  double t2259;
  double t2433;
  double t2439;
  double t2450;
  double t1470;
  double t1472;
  double t1483;
  double t1495;
  double t1497;
  double t1507;
  t70 = Cos(var1[5]);
  t139 = Sin(var1[3]);
  t62 = Cos(var1[3]);
  t121 = Sin(var1[4]);
  t190 = Sin(var1[5]);
  t268 = Sin(var1[13]);
  t128 = t62*t70*t121;
  t191 = t139*t190;
  t238 = t128 + t191;
  t4 = Cos(var1[13]);
  t294 = -1.*t70*t139;
  t338 = t62*t121*t190;
  t391 = t294 + t338;
  t3 = Cos(var1[15]);
  t419 = Sin(var1[15]);
  t421 = Cos(var1[14]);
  t449 = Cos(var1[4]);
  t620 = Sin(var1[14]);
  t823 = t70*t139*t121;
  t837 = -1.*t62*t190;
  t862 = t823 + t837;
  t932 = t62*t70;
  t958 = t139*t121*t190;
  t959 = t932 + t958;
  t243 = t4*t238;
  t394 = -1.*t268*t391;
  t396 = t243 + t394;
  t566 = t421*t62*t449;
  t653 = t268*t238;
  t668 = t4*t391;
  t700 = t653 + t668;
  t716 = t620*t700;
  t738 = t566 + t716;
  t928 = t4*t862;
  t970 = -1.*t268*t959;
  t973 = t928 + t970;
  t1000 = t421*t449*t139;
  t1054 = t268*t862;
  t1083 = t4*t959;
  t1100 = t1054 + t1083;
  t1140 = t620*t1100;
  t1142 = t1000 + t1140;
  t1253 = t4*t449*t70;
  t1257 = -1.*t449*t268*t190;
  t1262 = t1253 + t1257;
  t1296 = -1.*t421*t121;
  t1322 = t449*t70*t268;
  t1340 = t4*t449*t190;
  t1362 = t1322 + t1340;
  t1379 = t620*t1362;
  t1420 = t1296 + t1379;
  t2022 = -1.*t4;
  t2031 = 1. + t2022;
  t1763 = -1.*t421;
  t1767 = 1. + t1763;
  t2223 = -1.*t3;
  t2238 = 1. + t2223;
  t1443 = t419*t396;
  t1445 = t3*t738;
  t1458 = t1443 + t1445;
  t1782 = -0.08055*t1767;
  t1787 = -0.135*t620;
  t1809 = 0. + t1782 + t1787;
  t2036 = 0.07996*t2031;
  t2042 = 0.135*t268;
  t2044 = 0. + t2036 + t2042;
  t2092 = -0.135*t2031;
  t2097 = 0.07996*t268;
  t2112 = 0. + t2092 + t2097;
  t2187 = -0.135*t1767;
  t2194 = 0.08055*t620;
  t2217 = 0. + t2187 + t2194;
  t2239 = -0.01004*t2238;
  t2248 = 0.08055*t419;
  t2259 = 0. + t2239 + t2248;
  t2433 = -0.08055*t2238;
  t2439 = -0.01004*t419;
  t2450 = 0. + t2433 + t2439;
  t1470 = t419*t973;
  t1472 = t3*t1142;
  t1483 = t1470 + t1472;
  t1495 = t419*t1262;
  t1497 = t3*t1420;
  t1507 = t1495 + t1497;
  p_output1[0]=-1.*t3*t396 + t419*t738;
  p_output1[1]=t1142*t419 - 1.*t3*t973;
  p_output1[2]=-1.*t1262*t3 + t1420*t419;
  p_output1[3]=0.;
  p_output1[4]=t1458;
  p_output1[5]=t1483;
  p_output1[6]=t1507;
  p_output1[7]=0.;
  p_output1[8]=t449*t62*t620 - 1.*t421*t700;
  p_output1[9]=-1.*t1100*t421 + t139*t449*t620;
  p_output1[10]=-1.*t1362*t421 - 1.*t121*t620;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08045*t1458 + t2044*t238 + t2112*t391 + t2259*t396 + t1809*t449*t62 + t2217*t700 - 0.1708*(-1.*t449*t62*t620 + t421*t700) + t2450*t738 - 0.06984*(t3*t396 - 1.*t419*t738) + var1[0];
  p_output1[13]=0. - 0.08045*t1483 + t1100*t2217 + t1142*t2450 + t139*t1809*t449 - 0.1708*(t1100*t421 - 1.*t139*t449*t620) + t2044*t862 + t2112*t959 + t2259*t973 - 0.06984*(-1.*t1142*t419 + t3*t973) + var1[1];
  p_output1[14]=0. - 0.08045*t1507 - 1.*t121*t1809 + t1362*t2217 + t1262*t2259 + t1420*t2450 - 0.06984*(t1262*t3 - 1.*t1420*t419) + t190*t2112*t449 - 0.1708*(t1362*t421 + t121*t620) + t2044*t449*t70 + var1[2];
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

#include "T_RightThigh_mex.hh"

namespace SymExpression
{

void T_RightThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
