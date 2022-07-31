/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:23 GMT-04:00
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
  double t129;
  double t1584;
  double t1809;
  double t1828;
  double t1893;
  double t2077;
  double t2359;
  double t2275;
  double t2486;
  double t970;
  double t1042;
  double t1186;
  double t1350;
  double t2303;
  double t2537;
  double t2566;
  double t2881;
  double t2907;
  double t2974;
  double t959;
  double t3047;
  double t3241;
  double t3275;
  double t3449;
  double t3450;
  double t3451;
  double t3643;
  double t3798;
  double t3871;
  double t3874;
  double t4070;
  double t4248;
  double t4266;
  double t4302;
  double t4379;
  double t4401;
  double t4527;
  double t4605;
  double t4609;
  double t4687;
  double t4793;
  double t4826;
  double t4830;
  double t4840;
  double t4899;
  double t4925;
  double t5018;
  double t5082;
  double t5087;
  double t5236;
  double t5378;
  double t5392;
  double t5396;
  double t1187;
  double t1384;
  double t1459;
  double t1833;
  double t1946;
  double t2071;
  double t2782;
  double t2823;
  double t2830;
  double t2995;
  double t3012;
  double t3042;
  double t5790;
  double t5794;
  double t5820;
  double t5834;
  double t5881;
  double t5905;
  double t3497;
  double t3682;
  double t3691;
  double t5919;
  double t5922;
  double t5958;
  double t3965;
  double t4016;
  double t4030;
  double t4476;
  double t4528;
  double t4536;
  double t6008;
  double t6016;
  double t6042;
  double t6088;
  double t6098;
  double t6099;
  double t4713;
  double t4723;
  double t4767;
  double t5002;
  double t5051;
  double t5064;
  double t6128;
  double t6143;
  double t6147;
  double t6154;
  double t6171;
  double t6180;
  double t5271;
  double t5297;
  double t5332;
  double t6188;
  double t6194;
  double t6199;
  double t6223;
  double t6230;
  double t6255;
  double t6305;
  double t6310;
  double t6311;
  double t6325;
  double t6333;
  double t6336;
  double t6353;
  double t6356;
  double t6359;
  double t6381;
  double t6384;
  double t6390;
  double t6395;
  double t6400;
  double t6402;
  double t6426;
  double t6448;
  double t6454;
  double t6479;
  double t6488;
  double t6496;
  t129 = Cos(var1[3]);
  t1584 = Cos(var1[13]);
  t1809 = -1.*t1584;
  t1828 = 1. + t1809;
  t1893 = Sin(var1[13]);
  t2077 = Cos(var1[5]);
  t2359 = Sin(var1[3]);
  t2275 = Sin(var1[4]);
  t2486 = Sin(var1[5]);
  t970 = Cos(var1[14]);
  t1042 = -1.*t970;
  t1186 = 1. + t1042;
  t1350 = Sin(var1[14]);
  t2303 = t129*t2077*t2275;
  t2537 = t2359*t2486;
  t2566 = t2303 + t2537;
  t2881 = -1.*t2077*t2359;
  t2907 = t129*t2275*t2486;
  t2974 = t2881 + t2907;
  t959 = Cos(var1[4]);
  t3047 = t1893*t2566;
  t3241 = t1584*t2974;
  t3275 = t3047 + t3241;
  t3449 = Cos(var1[15]);
  t3450 = -1.*t3449;
  t3451 = 1. + t3450;
  t3643 = Sin(var1[15]);
  t3798 = t1584*t2566;
  t3871 = -1.*t1893*t2974;
  t3874 = t3798 + t3871;
  t4070 = t970*t129*t959;
  t4248 = t1350*t3275;
  t4266 = t4070 + t4248;
  t4302 = Cos(var1[16]);
  t4379 = -1.*t4302;
  t4401 = 1. + t4379;
  t4527 = Sin(var1[16]);
  t4605 = t3643*t3874;
  t4609 = t3449*t4266;
  t4687 = t4605 + t4609;
  t4793 = t3449*t3874;
  t4826 = -1.*t3643*t4266;
  t4830 = t4793 + t4826;
  t4840 = Cos(var1[17]);
  t4899 = -1.*t4840;
  t4925 = 1. + t4899;
  t5018 = Sin(var1[17]);
  t5082 = -1.*t4527*t4687;
  t5087 = t4302*t4830;
  t5236 = t5082 + t5087;
  t5378 = t4302*t4687;
  t5392 = t4527*t4830;
  t5396 = t5378 + t5392;
  t1187 = -0.08055*t1186;
  t1384 = -0.135*t1350;
  t1459 = 0. + t1187 + t1384;
  t1833 = 0.07996*t1828;
  t1946 = 0.135*t1893;
  t2071 = 0. + t1833 + t1946;
  t2782 = -0.135*t1828;
  t2823 = 0.07996*t1893;
  t2830 = 0. + t2782 + t2823;
  t2995 = -0.135*t1186;
  t3012 = 0.08055*t1350;
  t3042 = 0. + t2995 + t3012;
  t5790 = t2077*t2359*t2275;
  t5794 = -1.*t129*t2486;
  t5820 = t5790 + t5794;
  t5834 = t129*t2077;
  t5881 = t2359*t2275*t2486;
  t5905 = t5834 + t5881;
  t3497 = -0.01004*t3451;
  t3682 = 0.08055*t3643;
  t3691 = 0. + t3497 + t3682;
  t5919 = t1893*t5820;
  t5922 = t1584*t5905;
  t5958 = t5919 + t5922;
  t3965 = -0.08055*t3451;
  t4016 = -0.01004*t3643;
  t4030 = 0. + t3965 + t4016;
  t4476 = -0.08055*t4401;
  t4528 = -0.13004*t4527;
  t4536 = 0. + t4476 + t4528;
  t6008 = t1584*t5820;
  t6016 = -1.*t1893*t5905;
  t6042 = t6008 + t6016;
  t6088 = t970*t959*t2359;
  t6098 = t1350*t5958;
  t6099 = t6088 + t6098;
  t4713 = -0.13004*t4401;
  t4723 = 0.08055*t4527;
  t4767 = 0. + t4713 + t4723;
  t5002 = -0.19074*t4925;
  t5051 = 0.03315*t5018;
  t5064 = 0. + t5002 + t5051;
  t6128 = t3643*t6042;
  t6143 = t3449*t6099;
  t6147 = t6128 + t6143;
  t6154 = t3449*t6042;
  t6171 = -1.*t3643*t6099;
  t6180 = t6154 + t6171;
  t5271 = -0.03315*t4925;
  t5297 = -0.19074*t5018;
  t5332 = 0. + t5271 + t5297;
  t6188 = -1.*t4527*t6147;
  t6194 = t4302*t6180;
  t6199 = t6188 + t6194;
  t6223 = t4302*t6147;
  t6230 = t4527*t6180;
  t6255 = t6223 + t6230;
  t6305 = t959*t2077*t1893;
  t6310 = t1584*t959*t2486;
  t6311 = t6305 + t6310;
  t6325 = t1584*t959*t2077;
  t6333 = -1.*t959*t1893*t2486;
  t6336 = t6325 + t6333;
  t6353 = -1.*t970*t2275;
  t6356 = t1350*t6311;
  t6359 = t6353 + t6356;
  t6381 = t3643*t6336;
  t6384 = t3449*t6359;
  t6390 = t6381 + t6384;
  t6395 = t3449*t6336;
  t6400 = -1.*t3643*t6359;
  t6402 = t6395 + t6400;
  t6426 = -1.*t4527*t6390;
  t6448 = t4302*t6402;
  t6454 = t6426 + t6448;
  t6479 = t4302*t6390;
  t6488 = t4527*t6402;
  t6496 = t6479 + t6488;
  p_output1[0]=0. + t2071*t2566 + t2830*t2974 + t3042*t3275 + t3691*t3874 + t4030*t4266 + t4536*t4687 + t4767*t4830 + t5064*t5236 + t5332*t5396 - 0.03195*(t5018*t5236 + t4840*t5396) - 0.37414*(t4840*t5236 - 1.*t5018*t5396) + t129*t1459*t959 - 0.1303*(-1.*t129*t1350*t959 + t3275*t970) + var1[0];
  p_output1[1]=0. + t2071*t5820 + t2830*t5905 + t3042*t5958 + t3691*t6042 + t4030*t6099 + t4536*t6147 + t4767*t6180 + t5064*t6199 + t5332*t6255 - 0.03195*(t5018*t6199 + t4840*t6255) - 0.37414*(t4840*t6199 - 1.*t5018*t6255) + t1459*t2359*t959 - 0.1303*(-1.*t1350*t2359*t959 + t5958*t970) + var1[1];
  p_output1[2]=0. - 1.*t1459*t2275 + t3042*t6311 + t3691*t6336 + t4030*t6359 + t4536*t6390 + t4767*t6402 + t5064*t6454 + t5332*t6496 - 0.03195*(t5018*t6454 + t4840*t6496) - 0.37414*(t4840*t6454 - 1.*t5018*t6496) + t2071*t2077*t959 + t2486*t2830*t959 - 0.1303*(t1350*t2275 + t6311*t970) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightShin_mex.hh"

namespace SymExpression
{

void p_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
