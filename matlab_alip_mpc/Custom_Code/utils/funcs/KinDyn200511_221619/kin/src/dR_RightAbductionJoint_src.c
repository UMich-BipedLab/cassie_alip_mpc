/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightAbductionJoint_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t408;
  double t13;
  double t297;
  double t565;
  double t1308;
  double t1125;
  double t1532;
  double t1260;
  double t2200;
  double t2328;
  double t2329;
  double t2660;
  double t3971;
  double t3985;
  double t4033;
  double t5874;
  double t6114;
  double t6336;
  double t8817;
  double t8854;
  double t8884;
  double t8926;
  double t9377;
  double t9383;
  double t9397;
  double t2705;
  double t2990;
  double t3312;
  double t9430;
  double t4711;
  double t5181;
  double t5599;
  double t4104;
  double t4149;
  double t6552;
  double t9459;
  double t9247;
  double t9251;
  double t9340;
  double t9478;
  double t9479;
  double t9480;
  t408 = Cos(var1[3]);
  t13 = Cos(var1[4]);
  t297 = Sin(var1[3]);
  t565 = Sin(var1[4]);
  t1308 = Cos(var1[13]);
  t1125 = Cos(var1[5]);
  t1532 = Sin(var1[5]);
  t1260 = Sin(var1[13]);
  t2200 = t408*t1125*t565;
  t2328 = t297*t1532;
  t2329 = t2200 + t2328;
  t2660 = t1308*t2329;
  t3971 = -1.*t1125*t297;
  t3985 = t408*t565*t1532;
  t4033 = t3971 + t3985;
  t5874 = -1.*t408*t1125;
  t6114 = -1.*t297*t565*t1532;
  t6336 = t5874 + t6114;
  t8817 = t1125*t297*t565;
  t8854 = -1.*t408*t1532;
  t8884 = t8817 + t8854;
  t8926 = t1308*t8884;
  t9377 = t1308*t13*t1125;
  t9383 = -1.*t13*t1260*t1532;
  t9397 = t9377 + t9383;
  t2705 = t1125*t297;
  t2990 = -1.*t408*t565*t1532;
  t3312 = t2705 + t2990;
  t9430 = -1.*t1260*t2329;
  t4711 = -1.*t1125*t297*t565;
  t5181 = t408*t1532;
  t5599 = t4711 + t5181;
  t4104 = -1.*t1260*t4033;
  t4149 = t2660 + t4104;
  t6552 = t1308*t6336;
  t9459 = -1.*t1260*t8884;
  t9247 = t408*t1125;
  t9251 = t297*t565*t1532;
  t9340 = t9247 + t9251;
  t9478 = -1.*t13*t1125*t1260;
  t9479 = -1.*t1308*t13*t1532;
  t9480 = t9478 + t9479;
  p_output1[0]=-1.*t13*t297*var2[3] - 1.*t408*t565*var2[4];
  p_output1[1]=t13*t408*var2[3] - 1.*t297*t565*var2[4];
  p_output1[2]=-1.*t13*var2[4];
  p_output1[3]=(t1260*t5599 + t6552)*var2[3] + (t1125*t1260*t13*t408 + t13*t1308*t1532*t408)*var2[4] + (t2660 + t1260*t3312)*var2[5] + t4149*var2[13];
  p_output1[4]=(t1260*t2329 + t1308*t4033)*var2[3] + (t1125*t1260*t13*t297 + t13*t1308*t1532*t297)*var2[4] + (t1260*t6336 + t8926)*var2[5] + (t8926 - 1.*t1260*t9340)*var2[13];
  p_output1[5]=(-1.*t1125*t1260*t565 - 1.*t1308*t1532*t565)*var2[4] + t9397*var2[5] + t9397*var2[13];
  p_output1[6]=(t1308*t5599 - 1.*t1260*t6336)*var2[3] + (t1125*t13*t1308*t408 - 1.*t1260*t13*t1532*t408)*var2[4] + (t1308*t3312 + t9430)*var2[5] + (-1.*t1308*t4033 + t9430)*var2[13];
  p_output1[7]=t4149*var2[3] + (t1125*t13*t1308*t297 - 1.*t1260*t13*t1532*t297)*var2[4] + (t6552 + t9459)*var2[5] + (-1.*t1308*t9340 + t9459)*var2[13];
  p_output1[8]=(-1.*t1125*t1308*t565 + t1260*t1532*t565)*var2[4] + t9480*var2[5] + t9480*var2[13];
}



void dR_RightAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
