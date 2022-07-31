/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:27 GMT-04:00
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
  double t299;
  double t351;
  double t261;
  double t311;
  double t394;
  double t485;
  double t567;
  double t572;
  double t659;
  double t827;
  double t847;
  double t848;
  double t331;
  double t428;
  double t466;
  double t982;
  double t1025;
  double t1066;
  double t1178;
  double t967;
  double t975;
  double t977;
  double t1250;
  double t1626;
  double t1632;
  double t1641;
  double t1656;
  double t1509;
  double t1581;
  double t1608;
  double t1767;
  double t1772;
  double t1810;
  double t1885;
  double t1898;
  double t1907;
  double t1953;
  double t2042;
  double t2086;
  double t2114;
  double t2205;
  double t2219;
  double t2223;
  double t2245;
  double t2261;
  double t2277;
  double t2293;
  double t2328;
  double t2329;
  double t2365;
  double t2399;
  double t2422;
  double t2433;
  double t2458;
  double t2463;
  double t2500;
  double t2560;
  double t2619;
  double t2632;
  double t2659;
  double t2730;
  double t2769;
  double t2780;
  double t2798;
  double t2805;
  double t2809;
  double t2876;
  double t2900;
  double t2920;
  double t2929;
  double t2955;
  double t2963;
  double t2968;
  double t602;
  double t681;
  double t790;
  double t920;
  double t921;
  double t928;
  double t3182;
  double t3220;
  double t3228;
  double t3132;
  double t3169;
  double t3174;
  double t1134;
  double t1201;
  double t1226;
  double t1296;
  double t1314;
  double t1375;
  double t3240;
  double t3242;
  double t3252;
  double t1642;
  double t1724;
  double t1740;
  double t1822;
  double t1847;
  double t1851;
  double t1916;
  double t1986;
  double t1992;
  double t3323;
  double t3341;
  double t3349;
  double t3362;
  double t3379;
  double t3388;
  double t2163;
  double t2193;
  double t2201;
  double t2285;
  double t2315;
  double t2323;
  double t3406;
  double t3430;
  double t3491;
  double t3504;
  double t3530;
  double t3535;
  double t2382;
  double t2383;
  double t2394;
  double t2531;
  double t2561;
  double t2564;
  double t3585;
  double t3590;
  double t3595;
  double t3635;
  double t3672;
  double t3687;
  double t2686;
  double t2695;
  double t2729;
  double t2827;
  double t2883;
  double t2890;
  double t3690;
  double t3692;
  double t3693;
  double t3726;
  double t3728;
  double t3735;
  double t2939;
  double t2940;
  double t2943;
  double t3751;
  double t3774;
  double t3776;
  double t3788;
  double t3799;
  double t3803;
  double t3922;
  double t3926;
  double t3972;
  double t4119;
  double t4142;
  double t4168;
  double t4185;
  double t4188;
  double t4191;
  double t4211;
  double t4220;
  double t4237;
  double t4271;
  double t4288;
  double t4300;
  double t4356;
  double t4373;
  double t4376;
  double t4391;
  double t4395;
  double t4398;
  double t4405;
  double t4415;
  double t4424;
  double t4441;
  double t4460;
  double t4521;
  double t4530;
  double t4531;
  double t4532;
  double t4549;
  double t4552;
  double t4559;
  t299 = Cos(var1[5]);
  t351 = Sin(var1[3]);
  t261 = Cos(var1[3]);
  t311 = Sin(var1[4]);
  t394 = Sin(var1[5]);
  t485 = Cos(var1[6]);
  t567 = -1.*t485;
  t572 = 1. + t567;
  t659 = Sin(var1[6]);
  t827 = -1.*t299*t351;
  t847 = t261*t311*t394;
  t848 = t827 + t847;
  t331 = t261*t299*t311;
  t428 = t351*t394;
  t466 = t331 + t428;
  t982 = Cos(var1[7]);
  t1025 = -1.*t982;
  t1066 = 1. + t1025;
  t1178 = Sin(var1[7]);
  t967 = t485*t848;
  t975 = t466*t659;
  t977 = t967 + t975;
  t1250 = Cos(var1[4]);
  t1626 = Cos(var1[8]);
  t1632 = -1.*t1626;
  t1641 = 1. + t1632;
  t1656 = Sin(var1[8]);
  t1509 = t261*t1250*t982;
  t1581 = t977*t1178;
  t1608 = t1509 + t1581;
  t1767 = t485*t466;
  t1772 = -1.*t848*t659;
  t1810 = t1767 + t1772;
  t1885 = Cos(var1[9]);
  t1898 = -1.*t1885;
  t1907 = 1. + t1898;
  t1953 = Sin(var1[9]);
  t2042 = t1626*t1608;
  t2086 = t1810*t1656;
  t2114 = t2042 + t2086;
  t2205 = t1626*t1810;
  t2219 = -1.*t1608*t1656;
  t2223 = t2205 + t2219;
  t2245 = Cos(var1[10]);
  t2261 = -1.*t2245;
  t2277 = 1. + t2261;
  t2293 = Sin(var1[10]);
  t2328 = -1.*t1953*t2114;
  t2329 = t1885*t2223;
  t2365 = t2328 + t2329;
  t2399 = t1885*t2114;
  t2422 = t1953*t2223;
  t2433 = t2399 + t2422;
  t2458 = Cos(var1[11]);
  t2463 = -1.*t2458;
  t2500 = 1. + t2463;
  t2560 = Sin(var1[11]);
  t2619 = t2293*t2365;
  t2632 = t2245*t2433;
  t2659 = t2619 + t2632;
  t2730 = t2245*t2365;
  t2769 = -1.*t2293*t2433;
  t2780 = t2730 + t2769;
  t2798 = Cos(var1[12]);
  t2805 = -1.*t2798;
  t2809 = 1. + t2805;
  t2876 = Sin(var1[12]);
  t2900 = -1.*t2560*t2659;
  t2920 = t2458*t2780;
  t2929 = t2900 + t2920;
  t2955 = t2458*t2659;
  t2963 = t2560*t2780;
  t2968 = t2955 + t2963;
  t602 = 0.07996*t572;
  t681 = -0.135*t659;
  t790 = 0. + t602 + t681;
  t920 = 0.135*t572;
  t921 = 0.07996*t659;
  t928 = 0. + t920 + t921;
  t3182 = t261*t299;
  t3220 = t351*t311*t394;
  t3228 = t3182 + t3220;
  t3132 = t299*t351*t311;
  t3169 = -1.*t261*t394;
  t3174 = t3132 + t3169;
  t1134 = 0.135*t1066;
  t1201 = 0.08055*t1178;
  t1226 = 0. + t1134 + t1201;
  t1296 = -0.08055*t1066;
  t1314 = 0.135*t1178;
  t1375 = 0. + t1296 + t1314;
  t3240 = t485*t3228;
  t3242 = t3174*t659;
  t3252 = t3240 + t3242;
  t1642 = -0.08055*t1641;
  t1724 = -0.01004*t1656;
  t1740 = 0. + t1642 + t1724;
  t1822 = -0.01004*t1641;
  t1847 = 0.08055*t1656;
  t1851 = 0. + t1822 + t1847;
  t1916 = -0.08055*t1907;
  t1986 = -0.13004*t1953;
  t1992 = 0. + t1916 + t1986;
  t3323 = t1250*t982*t351;
  t3341 = t3252*t1178;
  t3349 = t3323 + t3341;
  t3362 = t485*t3174;
  t3379 = -1.*t3228*t659;
  t3388 = t3362 + t3379;
  t2163 = -0.13004*t1907;
  t2193 = 0.08055*t1953;
  t2201 = 0. + t2163 + t2193;
  t2285 = -0.19074*t2277;
  t2315 = 0.03315*t2293;
  t2323 = 0. + t2285 + t2315;
  t3406 = t1626*t3349;
  t3430 = t3388*t1656;
  t3491 = t3406 + t3430;
  t3504 = t1626*t3388;
  t3530 = -1.*t3349*t1656;
  t3535 = t3504 + t3530;
  t2382 = -0.03315*t2277;
  t2383 = -0.19074*t2293;
  t2394 = 0. + t2382 + t2383;
  t2531 = -0.01315*t2500;
  t2561 = -0.62554*t2560;
  t2564 = 0. + t2531 + t2561;
  t3585 = -1.*t1953*t3491;
  t3590 = t1885*t3535;
  t3595 = t3585 + t3590;
  t3635 = t1885*t3491;
  t3672 = t1953*t3535;
  t3687 = t3635 + t3672;
  t2686 = -0.62554*t2500;
  t2695 = 0.01315*t2560;
  t2729 = 0. + t2686 + t2695;
  t2827 = -1.03354*t2809;
  t2883 = 0.05315*t2876;
  t2890 = 0. + t2827 + t2883;
  t3690 = t2293*t3595;
  t3692 = t2245*t3687;
  t3693 = t3690 + t3692;
  t3726 = t2245*t3595;
  t3728 = -1.*t2293*t3687;
  t3735 = t3726 + t3728;
  t2939 = -0.05315*t2809;
  t2940 = -1.03354*t2876;
  t2943 = 0. + t2939 + t2940;
  t3751 = -1.*t2560*t3693;
  t3774 = t2458*t3735;
  t3776 = t3751 + t3774;
  t3788 = t2458*t3693;
  t3799 = t2560*t3735;
  t3803 = t3788 + t3799;
  t3922 = t1250*t485*t394;
  t3926 = t1250*t299*t659;
  t3972 = t3922 + t3926;
  t4119 = -1.*t982*t311;
  t4142 = t3972*t1178;
  t4168 = t4119 + t4142;
  t4185 = t1250*t299*t485;
  t4188 = -1.*t1250*t394*t659;
  t4191 = t4185 + t4188;
  t4211 = t1626*t4168;
  t4220 = t4191*t1656;
  t4237 = t4211 + t4220;
  t4271 = t1626*t4191;
  t4288 = -1.*t4168*t1656;
  t4300 = t4271 + t4288;
  t4356 = -1.*t1953*t4237;
  t4373 = t1885*t4300;
  t4376 = t4356 + t4373;
  t4391 = t1885*t4237;
  t4395 = t1953*t4300;
  t4398 = t4391 + t4395;
  t4405 = t2293*t4376;
  t4415 = t2245*t4398;
  t4424 = t4405 + t4415;
  t4441 = t2245*t4376;
  t4460 = -1.*t2293*t4398;
  t4521 = t4441 + t4460;
  t4530 = -1.*t2560*t4424;
  t4531 = t2458*t4521;
  t4532 = t4530 + t4531;
  t4549 = t2458*t4424;
  t4552 = t2560*t4521;
  t4559 = t4549 + t4552;
  p_output1[0]=0. + t1608*t1740 + t1810*t1851 + t1992*t2114 + t2201*t2223 + t2323*t2365 + t2394*t2433 + t1250*t1375*t261 + t2564*t2659 + t2729*t2780 + t2890*t2929 + t2943*t2968 + 0.046027*(t2876*t2929 + t2798*t2968) - 0.979698*(t2798*t2929 - 1.*t2876*t2968) + t466*t790 + t848*t928 + t1226*t977 + 0.1305*(-1.*t1178*t1250*t261 + t977*t982) + var1[0];
  p_output1[1]=0. + t1226*t3252 + t1740*t3349 + t1851*t3388 + t1992*t3491 + t1250*t1375*t351 + t2201*t3535 + t2323*t3595 + t2394*t3687 + t2564*t3693 + t2729*t3735 + t2890*t3776 + t2943*t3803 + 0.046027*(t2876*t3776 + t2798*t3803) - 0.979698*(t2798*t3776 - 1.*t2876*t3803) + t3174*t790 + t3228*t928 + 0.1305*(-1.*t1178*t1250*t351 + t3252*t982) + var1[1];
  p_output1[2]=0. - 1.*t1375*t311 + t1226*t3972 + t1740*t4168 + t1851*t4191 + t1992*t4237 + t2201*t4300 + t2323*t4376 + t2394*t4398 + t2564*t4424 + t2729*t4521 + t2890*t4532 + t2943*t4559 + 0.046027*(t2876*t4532 + t2798*t4559) - 0.979698*(t2798*t4532 - 1.*t2876*t4559) + t1250*t299*t790 + t1250*t394*t928 + 0.1305*(t1178*t311 + t3972*t982) + var1[2];
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

#include "p_LeftToeBottomFront_mex.hh"

namespace SymExpression
{

void p_LeftToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
