/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightAbductionJoint_src.h"

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
  double t736;
  double t24;
  double t1522;
  double t1151;
  double t1868;
  double t1965;
  double t1800;
  double t2089;
  double t1870;
  double t1983;
  double t2047;
  double t3071;
  double t3074;
  double t3260;
  double t3689;
  double t3691;
  double t3723;
  double t3791;
  double t3968;
  double t4000;
  double t5194;
  double t5207;
  double t2060;
  double t3283;
  double t3422;
  double t4423;
  double t4723;
  double t4886;
  double t5212;
  double t5389;
  double t5452;
  double t5464;
  double t5592;
  double t5694;
  double t3787;
  double t4025;
  double t4064;
  double t4933;
  double t4950;
  double t5032;
  double t4322;
  double t4330;
  double t4348;
  double t5088;
  double t5102;
  double t5176;
  t736 = Cos(var1[4]);
  t24 = Cos(var1[3]);
  t1522 = Sin(var1[4]);
  t1151 = Sin(var1[3]);
  t1868 = Cos(var1[5]);
  t1965 = Sin(var1[5]);
  t1800 = Sin(var1[13]);
  t2089 = Cos(var1[13]);
  t1870 = t24*t1868*t1522;
  t1983 = t1151*t1965;
  t2047 = t1870 + t1983;
  t3071 = -1.*t1868*t1151;
  t3074 = t24*t1522*t1965;
  t3260 = t3071 + t3074;
  t3689 = t1868*t1151*t1522;
  t3691 = -1.*t24*t1965;
  t3723 = t3689 + t3691;
  t3791 = t24*t1868;
  t3968 = t1151*t1522*t1965;
  t4000 = t3791 + t3968;
  t5194 = -1.*t2089;
  t5207 = 1. + t5194;
  t2060 = t1800*t2047;
  t3283 = t2089*t3260;
  t3422 = t2060 + t3283;
  t4423 = t2089*t2047;
  t4723 = -1.*t1800*t3260;
  t4886 = t4423 + t4723;
  t5212 = 0.07996*t5207;
  t5389 = 0.135*t1800;
  t5452 = 0. + t5212 + t5389;
  t5464 = -0.135*t5207;
  t5592 = 0.07996*t1800;
  t5694 = 0. + t5464 + t5592;
  t3787 = t1800*t3723;
  t4025 = t2089*t4000;
  t4064 = t3787 + t4025;
  t4933 = t2089*t3723;
  t4950 = -1.*t1800*t4000;
  t5032 = t4933 + t4950;
  t4322 = t736*t1868*t1800;
  t4330 = t2089*t736*t1965;
  t4348 = t4322 + t4330;
  t5088 = t2089*t736*t1868;
  t5102 = -1.*t736*t1800*t1965;
  t5176 = t5088 + t5102;
  p_output1[0]=t24*t736;
  p_output1[1]=t1151*t736;
  p_output1[2]=-1.*t1522;
  p_output1[3]=0.;
  p_output1[4]=t3422;
  p_output1[5]=t4064;
  p_output1[6]=t4348;
  p_output1[7]=0.;
  p_output1[8]=t4886;
  p_output1[9]=t5032;
  p_output1[10]=t5176;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*t3422 + 0.07996*t4886 + t2047*t5452 + t3260*t5694 - 0.08055*t24*t736 + var1[0];
  p_output1[13]=0. - 0.135*t4064 + 0.07996*t5032 + t3723*t5452 + t4000*t5694 - 0.08055*t1151*t736 + var1[1];
  p_output1[14]=0. + 0.08055*t1522 - 0.135*t4348 + 0.07996*t5176 + t1868*t5452*t736 + t1965*t5694*t736 + var1[2];
  p_output1[15]=1.;
}



void T_RightAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
