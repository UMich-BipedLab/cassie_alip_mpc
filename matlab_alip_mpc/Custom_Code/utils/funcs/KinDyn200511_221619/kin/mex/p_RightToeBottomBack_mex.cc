/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:29 GMT-04:00
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
  double t10;
  double t539;
  double t541;
  double t580;
  double t663;
  double t732;
  double t916;
  double t827;
  double t918;
  double t117;
  double t144;
  double t215;
  double t438;
  double t895;
  double t958;
  double t970;
  double t1126;
  double t1136;
  double t1152;
  double t58;
  double t1225;
  double t1229;
  double t1264;
  double t1274;
  double t1302;
  double t1303;
  double t1306;
  double t1487;
  double t1507;
  double t1536;
  double t1684;
  double t1736;
  double t1746;
  double t1770;
  double t1776;
  double t1781;
  double t1815;
  double t1849;
  double t1861;
  double t1865;
  double t1949;
  double t1956;
  double t1989;
  double t2109;
  double t2130;
  double t2132;
  double t2192;
  double t2290;
  double t2295;
  double t2340;
  double t2427;
  double t2444;
  double t2449;
  double t2456;
  double t2481;
  double t2496;
  double t2506;
  double t2554;
  double t2562;
  double t2569;
  double t2648;
  double t2696;
  double t2709;
  double t2720;
  double t2734;
  double t2745;
  double t2800;
  double t2852;
  double t2893;
  double t2913;
  double t2969;
  double t2997;
  double t2998;
  double t370;
  double t496;
  double t507;
  double t589;
  double t702;
  double t705;
  double t1042;
  double t1086;
  double t1091;
  double t1162;
  double t1181;
  double t1217;
  double t3114;
  double t3118;
  double t3132;
  double t3168;
  double t3181;
  double t3201;
  double t1304;
  double t1309;
  double t1416;
  double t3243;
  double t3246;
  double t3247;
  double t1645;
  double t1677;
  double t1681;
  double t1787;
  double t1829;
  double t1841;
  double t3259;
  double t3264;
  double t3270;
  double t3396;
  double t3408;
  double t3420;
  double t1878;
  double t1890;
  double t1914;
  double t2159;
  double t2204;
  double t2253;
  double t3455;
  double t3459;
  double t3471;
  double t3477;
  double t3484;
  double t3486;
  double t2390;
  double t2410;
  double t2421;
  double t2500;
  double t2524;
  double t2551;
  double t3490;
  double t3497;
  double t3499;
  double t3517;
  double t3519;
  double t3523;
  double t2611;
  double t2612;
  double t2646;
  double t2779;
  double t2806;
  double t2837;
  double t3538;
  double t3564;
  double t3595;
  double t3613;
  double t3629;
  double t3662;
  double t2948;
  double t2961;
  double t2964;
  double t3676;
  double t3689;
  double t3691;
  double t3722;
  double t3726;
  double t3730;
  double t3898;
  double t3900;
  double t3901;
  double t3918;
  double t3927;
  double t3942;
  double t4015;
  double t4026;
  double t4032;
  double t4048;
  double t4049;
  double t4064;
  double t4090;
  double t4117;
  double t4132;
  double t4154;
  double t4159;
  double t4160;
  double t4182;
  double t4185;
  double t4186;
  double t4257;
  double t4258;
  double t4275;
  double t4333;
  double t4371;
  double t4419;
  double t4441;
  double t4445;
  double t4447;
  double t4457;
  double t4464;
  double t4469;
  t10 = Cos(var1[3]);
  t539 = Cos(var1[13]);
  t541 = -1.*t539;
  t580 = 1. + t541;
  t663 = Sin(var1[13]);
  t732 = Cos(var1[5]);
  t916 = Sin(var1[3]);
  t827 = Sin(var1[4]);
  t918 = Sin(var1[5]);
  t117 = Cos(var1[14]);
  t144 = -1.*t117;
  t215 = 1. + t144;
  t438 = Sin(var1[14]);
  t895 = t10*t732*t827;
  t958 = t916*t918;
  t970 = t895 + t958;
  t1126 = -1.*t732*t916;
  t1136 = t10*t827*t918;
  t1152 = t1126 + t1136;
  t58 = Cos(var1[4]);
  t1225 = t663*t970;
  t1229 = t539*t1152;
  t1264 = t1225 + t1229;
  t1274 = Cos(var1[15]);
  t1302 = -1.*t1274;
  t1303 = 1. + t1302;
  t1306 = Sin(var1[15]);
  t1487 = t539*t970;
  t1507 = -1.*t663*t1152;
  t1536 = t1487 + t1507;
  t1684 = t117*t10*t58;
  t1736 = t438*t1264;
  t1746 = t1684 + t1736;
  t1770 = Cos(var1[16]);
  t1776 = -1.*t1770;
  t1781 = 1. + t1776;
  t1815 = Sin(var1[16]);
  t1849 = t1306*t1536;
  t1861 = t1274*t1746;
  t1865 = t1849 + t1861;
  t1949 = t1274*t1536;
  t1956 = -1.*t1306*t1746;
  t1989 = t1949 + t1956;
  t2109 = Cos(var1[17]);
  t2130 = -1.*t2109;
  t2132 = 1. + t2130;
  t2192 = Sin(var1[17]);
  t2290 = -1.*t1815*t1865;
  t2295 = t1770*t1989;
  t2340 = t2290 + t2295;
  t2427 = t1770*t1865;
  t2444 = t1815*t1989;
  t2449 = t2427 + t2444;
  t2456 = Cos(var1[18]);
  t2481 = -1.*t2456;
  t2496 = 1. + t2481;
  t2506 = Sin(var1[18]);
  t2554 = t2192*t2340;
  t2562 = t2109*t2449;
  t2569 = t2554 + t2562;
  t2648 = t2109*t2340;
  t2696 = -1.*t2192*t2449;
  t2709 = t2648 + t2696;
  t2720 = Cos(var1[19]);
  t2734 = -1.*t2720;
  t2745 = 1. + t2734;
  t2800 = Sin(var1[19]);
  t2852 = -1.*t2506*t2569;
  t2893 = t2456*t2709;
  t2913 = t2852 + t2893;
  t2969 = t2456*t2569;
  t2997 = t2506*t2709;
  t2998 = t2969 + t2997;
  t370 = -0.08055*t215;
  t496 = -0.135*t438;
  t507 = 0. + t370 + t496;
  t589 = 0.07996*t580;
  t702 = 0.135*t663;
  t705 = 0. + t589 + t702;
  t1042 = -0.135*t580;
  t1086 = 0.07996*t663;
  t1091 = 0. + t1042 + t1086;
  t1162 = -0.135*t215;
  t1181 = 0.08055*t438;
  t1217 = 0. + t1162 + t1181;
  t3114 = t732*t916*t827;
  t3118 = -1.*t10*t918;
  t3132 = t3114 + t3118;
  t3168 = t10*t732;
  t3181 = t916*t827*t918;
  t3201 = t3168 + t3181;
  t1304 = -0.01004*t1303;
  t1309 = 0.08055*t1306;
  t1416 = 0. + t1304 + t1309;
  t3243 = t663*t3132;
  t3246 = t539*t3201;
  t3247 = t3243 + t3246;
  t1645 = -0.08055*t1303;
  t1677 = -0.01004*t1306;
  t1681 = 0. + t1645 + t1677;
  t1787 = -0.08055*t1781;
  t1829 = -0.13004*t1815;
  t1841 = 0. + t1787 + t1829;
  t3259 = t539*t3132;
  t3264 = -1.*t663*t3201;
  t3270 = t3259 + t3264;
  t3396 = t117*t58*t916;
  t3408 = t438*t3247;
  t3420 = t3396 + t3408;
  t1878 = -0.13004*t1781;
  t1890 = 0.08055*t1815;
  t1914 = 0. + t1878 + t1890;
  t2159 = -0.19074*t2132;
  t2204 = 0.03315*t2192;
  t2253 = 0. + t2159 + t2204;
  t3455 = t1306*t3270;
  t3459 = t1274*t3420;
  t3471 = t3455 + t3459;
  t3477 = t1274*t3270;
  t3484 = -1.*t1306*t3420;
  t3486 = t3477 + t3484;
  t2390 = -0.03315*t2132;
  t2410 = -0.19074*t2192;
  t2421 = 0. + t2390 + t2410;
  t2500 = -0.01315*t2496;
  t2524 = -0.62554*t2506;
  t2551 = 0. + t2500 + t2524;
  t3490 = -1.*t1815*t3471;
  t3497 = t1770*t3486;
  t3499 = t3490 + t3497;
  t3517 = t1770*t3471;
  t3519 = t1815*t3486;
  t3523 = t3517 + t3519;
  t2611 = -0.62554*t2496;
  t2612 = 0.01315*t2506;
  t2646 = 0. + t2611 + t2612;
  t2779 = -1.03354*t2745;
  t2806 = 0.05315*t2800;
  t2837 = 0. + t2779 + t2806;
  t3538 = t2192*t3499;
  t3564 = t2109*t3523;
  t3595 = t3538 + t3564;
  t3613 = t2109*t3499;
  t3629 = -1.*t2192*t3523;
  t3662 = t3613 + t3629;
  t2948 = -0.05315*t2745;
  t2961 = -1.03354*t2800;
  t2964 = 0. + t2948 + t2961;
  t3676 = -1.*t2506*t3595;
  t3689 = t2456*t3662;
  t3691 = t3676 + t3689;
  t3722 = t2456*t3595;
  t3726 = t2506*t3662;
  t3730 = t3722 + t3726;
  t3898 = t58*t732*t663;
  t3900 = t539*t58*t918;
  t3901 = t3898 + t3900;
  t3918 = t539*t58*t732;
  t3927 = -1.*t58*t663*t918;
  t3942 = t3918 + t3927;
  t4015 = -1.*t117*t827;
  t4026 = t438*t3901;
  t4032 = t4015 + t4026;
  t4048 = t1306*t3942;
  t4049 = t1274*t4032;
  t4064 = t4048 + t4049;
  t4090 = t1274*t3942;
  t4117 = -1.*t1306*t4032;
  t4132 = t4090 + t4117;
  t4154 = -1.*t1815*t4064;
  t4159 = t1770*t4132;
  t4160 = t4154 + t4159;
  t4182 = t1770*t4064;
  t4185 = t1815*t4132;
  t4186 = t4182 + t4185;
  t4257 = t2192*t4160;
  t4258 = t2109*t4186;
  t4275 = t4257 + t4258;
  t4333 = t2109*t4160;
  t4371 = -1.*t2192*t4186;
  t4419 = t4333 + t4371;
  t4441 = -1.*t2506*t4275;
  t4445 = t2456*t4419;
  t4447 = t4441 + t4445;
  t4457 = t2456*t4275;
  t4464 = t2506*t4419;
  t4469 = t4457 + t4464;
  p_output1[0]=0. + t1091*t1152 + t1217*t1264 + t1416*t1536 + t1681*t1746 + t1841*t1865 + t1914*t1989 + t2253*t2340 + t2421*t2449 + t2551*t2569 + t2646*t2709 + t2837*t2913 + t2964*t2998 - 0.063247*(t2800*t2913 + t2720*t2998) - 1.109926*(t2720*t2913 - 1.*t2800*t2998) + t10*t507*t58 - 0.1305*(t117*t1264 - 1.*t10*t438*t58) + t705*t970 + var1[0];
  p_output1[1]=0. + t1091*t3201 + t1217*t3247 + t1416*t3270 + t1681*t3420 + t1841*t3471 + t1914*t3486 + t2253*t3499 + t2421*t3523 + t2551*t3595 + t2646*t3662 + t2837*t3691 + t2964*t3730 - 0.063247*(t2800*t3691 + t2720*t3730) - 1.109926*(t2720*t3691 - 1.*t2800*t3730) + t3132*t705 + t507*t58*t916 - 0.1305*(t117*t3247 - 1.*t438*t58*t916) + var1[1];
  p_output1[2]=0. + t1217*t3901 + t1416*t3942 + t1681*t4032 + t1841*t4064 + t1914*t4132 + t2253*t4160 + t2421*t4186 + t2551*t4275 + t2646*t4419 + t2837*t4447 + t2964*t4469 - 0.063247*(t2800*t4447 + t2720*t4469) - 1.109926*(t2720*t4447 - 1.*t2800*t4469) + t58*t705*t732 - 1.*t507*t827 - 0.1305*(t117*t3901 + t438*t827) + t1091*t58*t918 + var1[2];
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

#include "p_RightToeBottomBack_mex.hh"

namespace SymExpression
{

void p_RightToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
