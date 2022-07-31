/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:17 GMT-04:00
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
  double t35;
  double t475;
  double t562;
  double t601;
  double t642;
  double t746;
  double t801;
  double t750;
  double t946;
  double t211;
  double t232;
  double t279;
  double t303;
  double t796;
  double t956;
  double t1010;
  double t1395;
  double t1445;
  double t1456;
  double t121;
  double t1563;
  double t1657;
  double t1671;
  double t1679;
  double t1777;
  double t1816;
  double t1865;
  double t1971;
  double t1974;
  double t2294;
  double t2601;
  double t2659;
  double t2755;
  double t3092;
  double t3109;
  double t3112;
  double t3147;
  double t3195;
  double t3358;
  double t3426;
  double t3715;
  double t3716;
  double t3818;
  double t3912;
  double t3944;
  double t3948;
  double t3970;
  double t4250;
  double t4419;
  double t4579;
  double t5085;
  double t5171;
  double t5192;
  double t5319;
  double t5332;
  double t5428;
  double t5448;
  double t5675;
  double t5809;
  double t5846;
  double t5989;
  double t5994;
  double t6072;
  double t297;
  double t382;
  double t393;
  double t640;
  double t707;
  double t736;
  double t1099;
  double t1235;
  double t1344;
  double t1516;
  double t1519;
  double t1548;
  double t6794;
  double t6797;
  double t6799;
  double t6864;
  double t6867;
  double t6869;
  double t1817;
  double t1924;
  double t1946;
  double t6907;
  double t6908;
  double t6910;
  double t2473;
  double t2551;
  double t2581;
  double t3115;
  double t3163;
  double t3173;
  double t6951;
  double t6958;
  double t6960;
  double t7014;
  double t7015;
  double t7016;
  double t3526;
  double t3580;
  double t3681;
  double t3962;
  double t4053;
  double t4155;
  double t7033;
  double t7035;
  double t7045;
  double t7055;
  double t7057;
  double t7069;
  double t4609;
  double t4760;
  double t4866;
  double t5441;
  double t5542;
  double t5671;
  double t7090;
  double t7094;
  double t7097;
  double t7140;
  double t7166;
  double t7173;
  double t5864;
  double t5872;
  double t5950;
  double t7176;
  double t7179;
  double t7180;
  double t7194;
  double t7195;
  double t7196;
  double t7279;
  double t7282;
  double t7284;
  double t7289;
  double t7291;
  double t7292;
  double t7300;
  double t7304;
  double t7306;
  double t7310;
  double t7311;
  double t7314;
  double t7318;
  double t7319;
  double t7320;
  double t7332;
  double t7334;
  double t7335;
  double t7337;
  double t7340;
  double t7341;
  double t7344;
  double t7346;
  double t7349;
  double t7352;
  double t7355;
  double t7358;
  t35 = Cos(var1[3]);
  t475 = Cos(var1[13]);
  t562 = -1.*t475;
  t601 = 1. + t562;
  t642 = Sin(var1[13]);
  t746 = Cos(var1[5]);
  t801 = Sin(var1[3]);
  t750 = Sin(var1[4]);
  t946 = Sin(var1[5]);
  t211 = Cos(var1[14]);
  t232 = -1.*t211;
  t279 = 1. + t232;
  t303 = Sin(var1[14]);
  t796 = t35*t746*t750;
  t956 = t801*t946;
  t1010 = t796 + t956;
  t1395 = -1.*t746*t801;
  t1445 = t35*t750*t946;
  t1456 = t1395 + t1445;
  t121 = Cos(var1[4]);
  t1563 = t642*t1010;
  t1657 = t475*t1456;
  t1671 = t1563 + t1657;
  t1679 = Cos(var1[15]);
  t1777 = -1.*t1679;
  t1816 = 1. + t1777;
  t1865 = Sin(var1[15]);
  t1971 = t475*t1010;
  t1974 = -1.*t642*t1456;
  t2294 = t1971 + t1974;
  t2601 = t211*t35*t121;
  t2659 = t303*t1671;
  t2755 = t2601 + t2659;
  t3092 = Cos(var1[16]);
  t3109 = -1.*t3092;
  t3112 = 1. + t3109;
  t3147 = Sin(var1[16]);
  t3195 = t1865*t2294;
  t3358 = t1679*t2755;
  t3426 = t3195 + t3358;
  t3715 = t1679*t2294;
  t3716 = -1.*t1865*t2755;
  t3818 = t3715 + t3716;
  t3912 = Cos(var1[17]);
  t3944 = -1.*t3912;
  t3948 = 1. + t3944;
  t3970 = Sin(var1[17]);
  t4250 = -1.*t3147*t3426;
  t4419 = t3092*t3818;
  t4579 = t4250 + t4419;
  t5085 = t3092*t3426;
  t5171 = t3147*t3818;
  t5192 = t5085 + t5171;
  t5319 = Cos(var1[18]);
  t5332 = -1.*t5319;
  t5428 = 1. + t5332;
  t5448 = Sin(var1[18]);
  t5675 = t3970*t4579;
  t5809 = t3912*t5192;
  t5846 = t5675 + t5809;
  t5989 = t3912*t4579;
  t5994 = -1.*t3970*t5192;
  t6072 = t5989 + t5994;
  t297 = -0.08055*t279;
  t382 = -0.135*t303;
  t393 = 0. + t297 + t382;
  t640 = 0.07996*t601;
  t707 = 0.135*t642;
  t736 = 0. + t640 + t707;
  t1099 = -0.135*t601;
  t1235 = 0.07996*t642;
  t1344 = 0. + t1099 + t1235;
  t1516 = -0.135*t279;
  t1519 = 0.08055*t303;
  t1548 = 0. + t1516 + t1519;
  t6794 = t746*t801*t750;
  t6797 = -1.*t35*t946;
  t6799 = t6794 + t6797;
  t6864 = t35*t746;
  t6867 = t801*t750*t946;
  t6869 = t6864 + t6867;
  t1817 = -0.01004*t1816;
  t1924 = 0.08055*t1865;
  t1946 = 0. + t1817 + t1924;
  t6907 = t642*t6799;
  t6908 = t475*t6869;
  t6910 = t6907 + t6908;
  t2473 = -0.08055*t1816;
  t2551 = -0.01004*t1865;
  t2581 = 0. + t2473 + t2551;
  t3115 = -0.08055*t3112;
  t3163 = -0.13004*t3147;
  t3173 = 0. + t3115 + t3163;
  t6951 = t475*t6799;
  t6958 = -1.*t642*t6869;
  t6960 = t6951 + t6958;
  t7014 = t211*t121*t801;
  t7015 = t303*t6910;
  t7016 = t7014 + t7015;
  t3526 = -0.13004*t3112;
  t3580 = 0.08055*t3147;
  t3681 = 0. + t3526 + t3580;
  t3962 = -0.19074*t3948;
  t4053 = 0.03315*t3970;
  t4155 = 0. + t3962 + t4053;
  t7033 = t1865*t6960;
  t7035 = t1679*t7016;
  t7045 = t7033 + t7035;
  t7055 = t1679*t6960;
  t7057 = -1.*t1865*t7016;
  t7069 = t7055 + t7057;
  t4609 = -0.03315*t3948;
  t4760 = -0.19074*t3970;
  t4866 = 0. + t4609 + t4760;
  t5441 = -0.01315*t5428;
  t5542 = -0.62554*t5448;
  t5671 = 0. + t5441 + t5542;
  t7090 = -1.*t3147*t7045;
  t7094 = t3092*t7069;
  t7097 = t7090 + t7094;
  t7140 = t3092*t7045;
  t7166 = t3147*t7069;
  t7173 = t7140 + t7166;
  t5864 = -0.62554*t5428;
  t5872 = 0.01315*t5448;
  t5950 = 0. + t5864 + t5872;
  t7176 = t3970*t7097;
  t7179 = t3912*t7173;
  t7180 = t7176 + t7179;
  t7194 = t3912*t7097;
  t7195 = -1.*t3970*t7173;
  t7196 = t7194 + t7195;
  t7279 = t121*t746*t642;
  t7282 = t475*t121*t946;
  t7284 = t7279 + t7282;
  t7289 = t475*t121*t746;
  t7291 = -1.*t121*t642*t946;
  t7292 = t7289 + t7291;
  t7300 = -1.*t211*t750;
  t7304 = t303*t7284;
  t7306 = t7300 + t7304;
  t7310 = t1865*t7292;
  t7311 = t1679*t7306;
  t7314 = t7310 + t7311;
  t7318 = t1679*t7292;
  t7319 = -1.*t1865*t7306;
  t7320 = t7318 + t7319;
  t7332 = -1.*t3147*t7314;
  t7334 = t3092*t7320;
  t7335 = t7332 + t7334;
  t7337 = t3092*t7314;
  t7340 = t3147*t7320;
  t7341 = t7337 + t7340;
  t7344 = t3970*t7335;
  t7346 = t3912*t7341;
  t7349 = t7344 + t7346;
  t7352 = t3912*t7335;
  t7355 = -1.*t3970*t7341;
  t7358 = t7352 + t7355;
  p_output1[0]=0. + t1344*t1456 + t1548*t1671 + t1946*t2294 + t2581*t2755 + t3173*t3426 - 0.1305*(t1671*t211 - 1.*t121*t303*t35) + t3681*t3818 + t121*t35*t393 + t4155*t4579 + t4866*t5192 + t5671*t5846 + t5950*t6072 - 0.62554*(-1.*t5448*t5846 + t5319*t6072) - 0.01315*(t5319*t5846 + t5448*t6072) + t1010*t736 + var1[0];
  p_output1[1]=0. + t1344*t6869 + t1548*t6910 + t1946*t6960 + t2581*t7016 + t3173*t7045 + t3681*t7069 + t4155*t7097 + t4866*t7173 + t5671*t7180 + t5950*t7196 - 0.62554*(-1.*t5448*t7180 + t5319*t7196) - 0.01315*(t5319*t7180 + t5448*t7196) + t6799*t736 + t121*t393*t801 - 0.1305*(t211*t6910 - 1.*t121*t303*t801) + var1[1];
  p_output1[2]=0. + t1548*t7284 + t1946*t7292 + t2581*t7306 + t3173*t7314 + t3681*t7320 + t4155*t7335 + t4866*t7341 + t5671*t7349 + t5950*t7358 - 0.62554*(-1.*t5448*t7349 + t5319*t7358) - 0.01315*(t5319*t7349 + t5448*t7358) + t121*t736*t746 - 1.*t393*t750 - 0.1305*(t211*t7284 + t303*t750) + t121*t1344*t946 + var1[2];
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

#include "p_RightAnkleJoint_mex.hh"

namespace SymExpression
{

void p_RightAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
