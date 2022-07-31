/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightPelvisRotation_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t509;
  double t445;
  double t1198;
  double t780;
  double t1309;
  double t1426;
  double t1263;
  double t1956;
  double t1375;
  double t1507;
  double t1512;
  double t2071;
  double t2547;
  double t2606;
  double t2721;
  double t2872;
  double t2913;
  double t2963;
  double t2992;
  double t3046;
  double t4117;
  double t4203;
  double t1549;
  double t2674;
  double t2708;
  double t3668;
  double t3726;
  double t3771;
  double t4238;
  double t4246;
  double t4260;
  double t4270;
  double t4309;
  double t4314;
  double t2941;
  double t3055;
  double t3086;
  double t3828;
  double t3840;
  double t3906;
  double t3255;
  double t3276;
  double t3578;
  double t3917;
  double t4078;
  double t4086;
  t509 = Cos(var1[4]);
  t445 = Cos(var1[3]);
  t1198 = Sin(var1[4]);
  t780 = Sin(var1[3]);
  t1309 = Cos(var1[5]);
  t1426 = Sin(var1[5]);
  t1263 = Sin(var1[13]);
  t1956 = Cos(var1[13]);
  t1375 = t445*t1309*t1198;
  t1507 = t780*t1426;
  t1512 = t1375 + t1507;
  t2071 = -1.*t1309*t780;
  t2547 = t445*t1198*t1426;
  t2606 = t2071 + t2547;
  t2721 = t1309*t780*t1198;
  t2872 = -1.*t445*t1426;
  t2913 = t2721 + t2872;
  t2963 = t445*t1309;
  t2992 = t780*t1198*t1426;
  t3046 = t2963 + t2992;
  t4117 = -1.*t1956;
  t4203 = 1. + t4117;
  t1549 = t1263*t1512;
  t2674 = t1956*t2606;
  t2708 = t1549 + t2674;
  t3668 = t1956*t1512;
  t3726 = -1.*t1263*t2606;
  t3771 = t3668 + t3726;
  t4238 = 0.07996*t4203;
  t4246 = 0.135*t1263;
  t4260 = 0. + t4238 + t4246;
  t4270 = -0.135*t4203;
  t4309 = 0.07996*t1263;
  t4314 = 0. + t4270 + t4309;
  t2941 = t1263*t2913;
  t3055 = t1956*t3046;
  t3086 = t2941 + t3055;
  t3828 = t1956*t2913;
  t3840 = -1.*t1263*t3046;
  t3906 = t3828 + t3840;
  t3255 = t509*t1309*t1263;
  t3276 = t1956*t509*t1426;
  t3578 = t3255 + t3276;
  t3917 = t1956*t509*t1309;
  t4078 = -1.*t509*t1263*t1426;
  t4086 = t3917 + t4078;
  p_output1[0]=t445*t509;
  p_output1[1]=t509*t780;
  p_output1[2]=-1.*t1198;
  p_output1[3]=0.;
  p_output1[4]=t2708;
  p_output1[5]=t3086;
  p_output1[6]=t3578;
  p_output1[7]=0.;
  p_output1[8]=t3771;
  p_output1[9]=t3906;
  p_output1[10]=t4086;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1351*t2708 + 0.09786*t3771 + t1512*t4260 + t2606*t4314 - 0.05485*t445*t509 + var1[0];
  p_output1[13]=0. - 0.1351*t3086 + 0.09786*t3906 + t2913*t4260 + t3046*t4314 - 0.05485*t509*t780 + var1[1];
  p_output1[14]=0. + 0.05485*t1198 - 0.1351*t3578 + 0.09786*t4086 + t1309*t4260*t509 + t1426*t4314*t509 + var1[2];
  p_output1[15]=1.;
}



void T_RightPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
