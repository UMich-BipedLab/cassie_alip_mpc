/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:58 GMT-04:00
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
  double t5;
  double t212;
  double t303;
  double t340;
  double t450;
  double t524;
  double t599;
  double t543;
  double t624;
  double t81;
  double t119;
  double t150;
  double t181;
  double t584;
  double t626;
  double t633;
  double t685;
  double t694;
  double t695;
  double t38;
  double t773;
  double t820;
  double t824;
  double t836;
  double t843;
  double t859;
  double t879;
  double t999;
  double t1000;
  double t1012;
  double t1309;
  double t1384;
  double t1402;
  double t1419;
  double t1424;
  double t1467;
  double t1541;
  double t1583;
  double t1601;
  double t1616;
  double t1778;
  double t1788;
  double t1795;
  double t1812;
  double t1843;
  double t1860;
  double t1877;
  double t1917;
  double t1942;
  double t1943;
  double t2010;
  double t2026;
  double t2034;
  double t2075;
  double t2082;
  double t2090;
  double t2184;
  double t2254;
  double t2258;
  double t2270;
  double t2361;
  double t2363;
  double t2377;
  double t2397;
  double t2398;
  double t2407;
  double t2433;
  double t2465;
  double t2474;
  double t2486;
  double t2533;
  double t2538;
  double t2540;
  double t180;
  double t203;
  double t207;
  double t392;
  double t475;
  double t508;
  double t637;
  double t639;
  double t671;
  double t717;
  double t738;
  double t769;
  double t2693;
  double t2695;
  double t2725;
  double t2798;
  double t2799;
  double t2816;
  double t864;
  double t884;
  double t961;
  double t2829;
  double t2872;
  double t2876;
  double t1234;
  double t1281;
  double t1304;
  double t1501;
  double t1545;
  double t1556;
  double t2888;
  double t2929;
  double t2946;
  double t3018;
  double t3020;
  double t3028;
  double t1682;
  double t1696;
  double t1770;
  double t1870;
  double t1898;
  double t1899;
  double t3039;
  double t3052;
  double t3054;
  double t3079;
  double t3108;
  double t3109;
  double t1970;
  double t2001;
  double t2003;
  double t2146;
  double t2202;
  double t2218;
  double t3112;
  double t3125;
  double t3135;
  double t3146;
  double t3153;
  double t3192;
  double t2295;
  double t2335;
  double t2350;
  double t2427;
  double t2444;
  double t2448;
  double t3234;
  double t3242;
  double t3244;
  double t3256;
  double t3265;
  double t3276;
  double t2518;
  double t2527;
  double t2532;
  double t3301;
  double t3309;
  double t3321;
  double t3325;
  double t3354;
  double t3363;
  double t3575;
  double t3589;
  double t3614;
  double t3650;
  double t3660;
  double t3661;
  double t3775;
  double t3787;
  double t3791;
  double t3814;
  double t3817;
  double t3868;
  double t3910;
  double t3911;
  double t3918;
  double t3953;
  double t3959;
  double t3962;
  double t3975;
  double t3989;
  double t3990;
  double t4021;
  double t4027;
  double t4028;
  double t4044;
  double t4046;
  double t4061;
  double t4088;
  double t4092;
  double t4093;
  double t4134;
  double t4148;
  double t4159;
  t5 = Cos(var1[3]);
  t212 = Cos(var1[13]);
  t303 = -1.*t212;
  t340 = 1. + t303;
  t450 = Sin(var1[13]);
  t524 = Cos(var1[5]);
  t599 = Sin(var1[3]);
  t543 = Sin(var1[4]);
  t624 = Sin(var1[5]);
  t81 = Cos(var1[14]);
  t119 = -1.*t81;
  t150 = 1. + t119;
  t181 = Sin(var1[14]);
  t584 = t5*t524*t543;
  t626 = t599*t624;
  t633 = t584 + t626;
  t685 = -1.*t524*t599;
  t694 = t5*t543*t624;
  t695 = t685 + t694;
  t38 = Cos(var1[4]);
  t773 = t450*t633;
  t820 = t212*t695;
  t824 = t773 + t820;
  t836 = Cos(var1[15]);
  t843 = -1.*t836;
  t859 = 1. + t843;
  t879 = Sin(var1[15]);
  t999 = t212*t633;
  t1000 = -1.*t450*t695;
  t1012 = t999 + t1000;
  t1309 = t81*t5*t38;
  t1384 = t181*t824;
  t1402 = t1309 + t1384;
  t1419 = Cos(var1[16]);
  t1424 = -1.*t1419;
  t1467 = 1. + t1424;
  t1541 = Sin(var1[16]);
  t1583 = t879*t1012;
  t1601 = t836*t1402;
  t1616 = t1583 + t1601;
  t1778 = t836*t1012;
  t1788 = -1.*t879*t1402;
  t1795 = t1778 + t1788;
  t1812 = Cos(var1[17]);
  t1843 = -1.*t1812;
  t1860 = 1. + t1843;
  t1877 = Sin(var1[17]);
  t1917 = -1.*t1541*t1616;
  t1942 = t1419*t1795;
  t1943 = t1917 + t1942;
  t2010 = t1419*t1616;
  t2026 = t1541*t1795;
  t2034 = t2010 + t2026;
  t2075 = Cos(var1[18]);
  t2082 = -1.*t2075;
  t2090 = 1. + t2082;
  t2184 = Sin(var1[18]);
  t2254 = t1877*t1943;
  t2258 = t1812*t2034;
  t2270 = t2254 + t2258;
  t2361 = t1812*t1943;
  t2363 = -1.*t1877*t2034;
  t2377 = t2361 + t2363;
  t2397 = Cos(var1[19]);
  t2398 = -1.*t2397;
  t2407 = 1. + t2398;
  t2433 = Sin(var1[19]);
  t2465 = -1.*t2184*t2270;
  t2474 = t2075*t2377;
  t2486 = t2465 + t2474;
  t2533 = t2075*t2270;
  t2538 = t2184*t2377;
  t2540 = t2533 + t2538;
  t180 = -0.08055*t150;
  t203 = -0.135*t181;
  t207 = 0. + t180 + t203;
  t392 = 0.07996*t340;
  t475 = 0.135*t450;
  t508 = 0. + t392 + t475;
  t637 = -0.135*t340;
  t639 = 0.07996*t450;
  t671 = 0. + t637 + t639;
  t717 = -0.135*t150;
  t738 = 0.08055*t181;
  t769 = 0. + t717 + t738;
  t2693 = t524*t599*t543;
  t2695 = -1.*t5*t624;
  t2725 = t2693 + t2695;
  t2798 = t5*t524;
  t2799 = t599*t543*t624;
  t2816 = t2798 + t2799;
  t864 = -0.01004*t859;
  t884 = 0.08055*t879;
  t961 = 0. + t864 + t884;
  t2829 = t450*t2725;
  t2872 = t212*t2816;
  t2876 = t2829 + t2872;
  t1234 = -0.08055*t859;
  t1281 = -0.01004*t879;
  t1304 = 0. + t1234 + t1281;
  t1501 = -0.08055*t1467;
  t1545 = -0.13004*t1541;
  t1556 = 0. + t1501 + t1545;
  t2888 = t212*t2725;
  t2929 = -1.*t450*t2816;
  t2946 = t2888 + t2929;
  t3018 = t81*t38*t599;
  t3020 = t181*t2876;
  t3028 = t3018 + t3020;
  t1682 = -0.13004*t1467;
  t1696 = 0.08055*t1541;
  t1770 = 0. + t1682 + t1696;
  t1870 = -0.19074*t1860;
  t1898 = 0.03315*t1877;
  t1899 = 0. + t1870 + t1898;
  t3039 = t879*t2946;
  t3052 = t836*t3028;
  t3054 = t3039 + t3052;
  t3079 = t836*t2946;
  t3108 = -1.*t879*t3028;
  t3109 = t3079 + t3108;
  t1970 = -0.03315*t1860;
  t2001 = -0.19074*t1877;
  t2003 = 0. + t1970 + t2001;
  t2146 = -0.01315*t2090;
  t2202 = -0.62554*t2184;
  t2218 = 0. + t2146 + t2202;
  t3112 = -1.*t1541*t3054;
  t3125 = t1419*t3109;
  t3135 = t3112 + t3125;
  t3146 = t1419*t3054;
  t3153 = t1541*t3109;
  t3192 = t3146 + t3153;
  t2295 = -0.62554*t2090;
  t2335 = 0.01315*t2184;
  t2350 = 0. + t2295 + t2335;
  t2427 = -1.03354*t2407;
  t2444 = 0.05315*t2433;
  t2448 = 0. + t2427 + t2444;
  t3234 = t1877*t3135;
  t3242 = t1812*t3192;
  t3244 = t3234 + t3242;
  t3256 = t1812*t3135;
  t3265 = -1.*t1877*t3192;
  t3276 = t3256 + t3265;
  t2518 = -0.05315*t2407;
  t2527 = -1.03354*t2433;
  t2532 = 0. + t2518 + t2527;
  t3301 = -1.*t2184*t3244;
  t3309 = t2075*t3276;
  t3321 = t3301 + t3309;
  t3325 = t2075*t3244;
  t3354 = t2184*t3276;
  t3363 = t3325 + t3354;
  t3575 = t38*t524*t450;
  t3589 = t212*t38*t624;
  t3614 = t3575 + t3589;
  t3650 = t212*t38*t524;
  t3660 = -1.*t38*t450*t624;
  t3661 = t3650 + t3660;
  t3775 = -1.*t81*t543;
  t3787 = t181*t3614;
  t3791 = t3775 + t3787;
  t3814 = t879*t3661;
  t3817 = t836*t3791;
  t3868 = t3814 + t3817;
  t3910 = t836*t3661;
  t3911 = -1.*t879*t3791;
  t3918 = t3910 + t3911;
  t3953 = -1.*t1541*t3868;
  t3959 = t1419*t3918;
  t3962 = t3953 + t3959;
  t3975 = t1419*t3868;
  t3989 = t1541*t3918;
  t3990 = t3975 + t3989;
  t4021 = t1877*t3962;
  t4027 = t1812*t3990;
  t4028 = t4021 + t4027;
  t4044 = t1812*t3962;
  t4046 = -1.*t1877*t3990;
  t4061 = t4044 + t4046;
  t4088 = -1.*t2184*t4028;
  t4092 = t2075*t4061;
  t4093 = t4088 + t4092;
  t4134 = t2075*t4028;
  t4148 = t2184*t4061;
  t4159 = t4134 + t4148;
  p_output1[0]=0. + t1304*t1402 + t1556*t1616 + t1770*t1795 + t1899*t1943 + t2003*t2034 + t2218*t2270 + t2350*t2377 + t2448*t2486 + t2532*t2540 - 0.00095*(t2433*t2486 + t2397*t2540) - 1.05124*(t2397*t2486 - 1.*t2433*t2540) + t207*t38*t5 + t508*t633 + t671*t695 + t769*t824 - 0.1305*(-1.*t181*t38*t5 + t81*t824) + t1012*t961 + var1[0];
  p_output1[1]=0. + t1304*t3028 + t1556*t3054 + t1770*t3109 + t1899*t3135 + t2003*t3192 + t2218*t3244 + t2350*t3276 + t2448*t3321 + t2532*t3363 - 0.00095*(t2433*t3321 + t2397*t3363) - 1.05124*(t2397*t3321 - 1.*t2433*t3363) + t2725*t508 + t207*t38*t599 + t2816*t671 + t2876*t769 - 0.1305*(-1.*t181*t38*t599 + t2876*t81) + t2946*t961 + var1[1];
  p_output1[2]=0. + t1304*t3791 + t1556*t3868 + t1770*t3918 + t1899*t3962 + t2003*t3990 + t2218*t4028 + t2350*t4061 + t2448*t4093 + t2532*t4159 - 0.00095*(t2433*t4093 + t2397*t4159) - 1.05124*(t2397*t4093 - 1.*t2433*t4159) + t38*t508*t524 - 1.*t207*t543 + t38*t624*t671 + t3614*t769 - 0.1305*(t181*t543 + t3614*t81) + t3661*t961 + var1[2];
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

#include "p_RightToeBottom_mex.hh"

namespace SymExpression
{

void p_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
