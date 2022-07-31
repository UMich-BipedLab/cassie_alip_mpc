/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:32 GMT-04:00
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
  double t118;
  double t603;
  double t38;
  double t339;
  double t607;
  double t937;
  double t986;
  double t993;
  double t1200;
  double t1491;
  double t1507;
  double t1524;
  double t581;
  double t790;
  double t912;
  double t1918;
  double t1948;
  double t1957;
  double t2047;
  double t1730;
  double t1839;
  double t1843;
  double t2227;
  double t2457;
  double t2472;
  double t2502;
  double t2559;
  double t2403;
  double t2419;
  double t2431;
  double t2776;
  double t2821;
  double t2884;
  double t2996;
  double t3020;
  double t3120;
  double t3136;
  double t3153;
  double t3156;
  double t3179;
  double t3417;
  double t3448;
  double t3483;
  double t3567;
  double t3581;
  double t3596;
  double t3670;
  double t3736;
  double t3739;
  double t3760;
  double t3877;
  double t3910;
  double t3971;
  double t1071;
  double t1250;
  double t1254;
  double t1569;
  double t1622;
  double t1642;
  double t4370;
  double t4379;
  double t4386;
  double t4288;
  double t4303;
  double t4329;
  double t2029;
  double t2128;
  double t2225;
  double t2309;
  double t2333;
  double t2340;
  double t4460;
  double t4479;
  double t4487;
  double t2540;
  double t2601;
  double t2661;
  double t2925;
  double t2959;
  double t2966;
  double t3129;
  double t3143;
  double t3148;
  double t4588;
  double t4590;
  double t4627;
  double t4672;
  double t4704;
  double t4707;
  double t3286;
  double t3351;
  double t3403;
  double t3605;
  double t3681;
  double t3703;
  double t4750;
  double t4765;
  double t4821;
  double t4852;
  double t4872;
  double t4881;
  double t3800;
  double t3817;
  double t3875;
  double t4945;
  double t4971;
  double t4980;
  double t5039;
  double t5043;
  double t5053;
  double t5318;
  double t5326;
  double t5352;
  double t5485;
  double t5527;
  double t5536;
  double t5565;
  double t5566;
  double t5572;
  double t5580;
  double t5582;
  double t5589;
  double t5593;
  double t5595;
  double t5621;
  double t5645;
  double t5649;
  double t5650;
  double t5671;
  double t5714;
  double t5726;
  t118 = Cos(var1[5]);
  t603 = Sin(var1[3]);
  t38 = Cos(var1[3]);
  t339 = Sin(var1[4]);
  t607 = Sin(var1[5]);
  t937 = Cos(var1[6]);
  t986 = -1.*t937;
  t993 = 1. + t986;
  t1200 = Sin(var1[6]);
  t1491 = -1.*t118*t603;
  t1507 = t38*t339*t607;
  t1524 = t1491 + t1507;
  t581 = t38*t118*t339;
  t790 = t603*t607;
  t912 = t581 + t790;
  t1918 = Cos(var1[7]);
  t1948 = -1.*t1918;
  t1957 = 1. + t1948;
  t2047 = Sin(var1[7]);
  t1730 = t937*t1524;
  t1839 = t912*t1200;
  t1843 = t1730 + t1839;
  t2227 = Cos(var1[4]);
  t2457 = Cos(var1[8]);
  t2472 = -1.*t2457;
  t2502 = 1. + t2472;
  t2559 = Sin(var1[8]);
  t2403 = t38*t2227*t1918;
  t2419 = t1843*t2047;
  t2431 = t2403 + t2419;
  t2776 = t937*t912;
  t2821 = -1.*t1524*t1200;
  t2884 = t2776 + t2821;
  t2996 = Cos(var1[9]);
  t3020 = -1.*t2996;
  t3120 = 1. + t3020;
  t3136 = Sin(var1[9]);
  t3153 = t2457*t2431;
  t3156 = t2884*t2559;
  t3179 = t3153 + t3156;
  t3417 = t2457*t2884;
  t3448 = -1.*t2431*t2559;
  t3483 = t3417 + t3448;
  t3567 = Cos(var1[10]);
  t3581 = -1.*t3567;
  t3596 = 1. + t3581;
  t3670 = Sin(var1[10]);
  t3736 = -1.*t3136*t3179;
  t3739 = t2996*t3483;
  t3760 = t3736 + t3739;
  t3877 = t2996*t3179;
  t3910 = t3136*t3483;
  t3971 = t3877 + t3910;
  t1071 = 0.07996*t993;
  t1250 = -0.135*t1200;
  t1254 = 0. + t1071 + t1250;
  t1569 = 0.135*t993;
  t1622 = 0.07996*t1200;
  t1642 = 0. + t1569 + t1622;
  t4370 = t38*t118;
  t4379 = t603*t339*t607;
  t4386 = t4370 + t4379;
  t4288 = t118*t603*t339;
  t4303 = -1.*t38*t607;
  t4329 = t4288 + t4303;
  t2029 = 0.135*t1957;
  t2128 = 0.08055*t2047;
  t2225 = 0. + t2029 + t2128;
  t2309 = -0.08055*t1957;
  t2333 = 0.135*t2047;
  t2340 = 0. + t2309 + t2333;
  t4460 = t937*t4386;
  t4479 = t4329*t1200;
  t4487 = t4460 + t4479;
  t2540 = -0.08055*t2502;
  t2601 = -0.01004*t2559;
  t2661 = 0. + t2540 + t2601;
  t2925 = -0.01004*t2502;
  t2959 = 0.08055*t2559;
  t2966 = 0. + t2925 + t2959;
  t3129 = -0.08055*t3120;
  t3143 = -0.13004*t3136;
  t3148 = 0. + t3129 + t3143;
  t4588 = t2227*t1918*t603;
  t4590 = t4487*t2047;
  t4627 = t4588 + t4590;
  t4672 = t937*t4329;
  t4704 = -1.*t4386*t1200;
  t4707 = t4672 + t4704;
  t3286 = -0.13004*t3120;
  t3351 = 0.08055*t3136;
  t3403 = 0. + t3286 + t3351;
  t3605 = -0.19074*t3596;
  t3681 = 0.03315*t3670;
  t3703 = 0. + t3605 + t3681;
  t4750 = t2457*t4627;
  t4765 = t4707*t2559;
  t4821 = t4750 + t4765;
  t4852 = t2457*t4707;
  t4872 = -1.*t4627*t2559;
  t4881 = t4852 + t4872;
  t3800 = -0.03315*t3596;
  t3817 = -0.19074*t3670;
  t3875 = 0. + t3800 + t3817;
  t4945 = -1.*t3136*t4821;
  t4971 = t2996*t4881;
  t4980 = t4945 + t4971;
  t5039 = t2996*t4821;
  t5043 = t3136*t4881;
  t5053 = t5039 + t5043;
  t5318 = t2227*t937*t607;
  t5326 = t2227*t118*t1200;
  t5352 = t5318 + t5326;
  t5485 = -1.*t1918*t339;
  t5527 = t5352*t2047;
  t5536 = t5485 + t5527;
  t5565 = t2227*t118*t937;
  t5566 = -1.*t2227*t607*t1200;
  t5572 = t5565 + t5566;
  t5580 = t2457*t5536;
  t5582 = t5572*t2559;
  t5589 = t5580 + t5582;
  t5593 = t2457*t5572;
  t5595 = -1.*t5536*t2559;
  t5621 = t5593 + t5595;
  t5645 = -1.*t3136*t5589;
  t5649 = t2996*t5621;
  t5650 = t5645 + t5649;
  t5671 = t2996*t5589;
  t5714 = t3136*t5621;
  t5726 = t5671 + t5714;
  p_output1[0]=0. + t1524*t1642 + t1843*t2225 + t2431*t2661 + t2884*t2966 + t3148*t3179 + t3403*t3483 + t3703*t3760 + t2227*t2340*t38 + 0.1303*(t1843*t1918 - 1.*t2047*t2227*t38) + t3875*t3971 - 0.03195*(t3670*t3760 + t3567*t3971) - 0.37414*(t3567*t3760 - 1.*t3670*t3971) + t1254*t912 + var1[0];
  p_output1[1]=0. + t1254*t4329 + t1642*t4386 + t2225*t4487 + t2661*t4627 + t2966*t4707 + t3148*t4821 + t3403*t4881 + t3703*t4980 + t3875*t5053 - 0.03195*(t3670*t4980 + t3567*t5053) - 0.37414*(t3567*t4980 - 1.*t3670*t5053) + t2227*t2340*t603 + 0.1303*(t1918*t4487 - 1.*t2047*t2227*t603) + var1[1];
  p_output1[2]=0. + t118*t1254*t2227 - 1.*t2340*t339 + t2225*t5352 + 0.1303*(t2047*t339 + t1918*t5352) + t2661*t5536 + t2966*t5572 + t3148*t5589 + t3403*t5621 + t3703*t5650 + t3875*t5726 - 0.03195*(t3670*t5650 + t3567*t5726) - 0.37414*(t3567*t5650 - 1.*t3670*t5726) + t1642*t2227*t607 + var1[2];
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

#include "p_LeftShin_mex.hh"

namespace SymExpression
{

void p_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
