/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftHip_src.h"

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
  double t14;
  double t168;
  double t875;
  double t642;
  double t1215;
  double t2499;
  double t1949;
  double t1282;
  double t2892;
  double t2994;
  double t3039;
  double t3080;
  double t3962;
  double t3965;
  double t3983;
  double t4241;
  double t4253;
  double t4266;
  double t4267;
  double t3462;
  double t3682;
  double t3693;
  double t4455;
  double t4486;
  double t4496;
  double t2177;
  double t2633;
  double t2638;
  double t4575;
  double t4601;
  double t3702;
  double t3719;
  double t4655;
  double t3795;
  double t3887;
  double t3954;
  double t3995;
  double t4853;
  double t4313;
  double t4316;
  double t4321;
  double t4322;
  double t4334;
  double t5045;
  double t5050;
  double t5052;
  double t4586;
  double t4598;
  double t4623;
  double t4629;
  double t4811;
  double t4813;
  double t4827;
  double t4906;
  double t4726;
  double t4728;
  double t4732;
  double t5014;
  double t5015;
  double t5016;
  double t4867;
  double t4870;
  double t4877;
  double t4960;
  double t4961;
  double t4975;
  double t5128;
  double t5136;
  double t5140;
  t14 = Cos(var1[3]);
  t168 = Cos(var1[4]);
  t875 = Cos(var1[6]);
  t642 = Cos(var1[5]);
  t1215 = Sin(var1[5]);
  t2499 = Sin(var1[4]);
  t1949 = Sin(var1[3]);
  t1282 = Sin(var1[6]);
  t2892 = t14*t642*t2499;
  t2994 = t1949*t1215;
  t3039 = t2892 + t2994;
  t3080 = t3039*t1282;
  t3962 = -1.*t14*t642;
  t3965 = -1.*t1949*t2499*t1215;
  t3983 = t3962 + t3965;
  t4241 = t642*t1949*t2499;
  t4253 = -1.*t14*t1215;
  t4266 = t4241 + t4253;
  t4267 = t4266*t1282;
  t3462 = -1.*t642*t1949;
  t3682 = t14*t2499*t1215;
  t3693 = t3462 + t3682;
  t4455 = t168*t875*t1215;
  t4486 = t168*t642*t1282;
  t4496 = t4455 + t4486;
  t2177 = t642*t1949;
  t2633 = -1.*t14*t2499*t1215;
  t2638 = t2177 + t2633;
  t4575 = t875*t3039;
  t4601 = Sin(var1[7]);
  t3702 = t875*t3693;
  t3719 = t3702 + t3080;
  t4655 = Cos(var1[7]);
  t3795 = -1.*t642*t1949*t2499;
  t3887 = t14*t1215;
  t3954 = t3795 + t3887;
  t3995 = t3983*t1282;
  t4853 = t875*t4266;
  t4313 = t14*t642;
  t4316 = t1949*t2499*t1215;
  t4321 = t4313 + t4316;
  t4322 = t875*t4321;
  t4334 = t4322 + t4267;
  t5045 = t168*t642*t875;
  t5050 = -1.*t168*t1215*t1282;
  t5052 = t5045 + t5050;
  t4586 = t2638*t1282;
  t4598 = t4575 + t4586;
  t4623 = -1.*t3693*t1282;
  t4629 = t4575 + t4623;
  t4811 = t875*t3983;
  t4813 = t3954*t1282;
  t4827 = t4811 + t4813;
  t4906 = -1.*t168*t1949*t4601;
  t4726 = t14*t168*t875*t1215;
  t4728 = t14*t168*t642*t1282;
  t4732 = t4726 + t4728;
  t5014 = t14*t168*t4655;
  t5015 = t3719*t4601;
  t5016 = t5014 + t5015;
  t4867 = t4853 + t3995;
  t4870 = -1.*t4321*t1282;
  t4877 = t4853 + t4870;
  t4960 = t168*t875*t1949*t1215;
  t4961 = t168*t642*t1949*t1282;
  t4975 = t4960 + t4961;
  t5128 = -1.*t875*t2499*t1215;
  t5136 = -1.*t642*t2499*t1282;
  t5140 = t5128 + t5136;
  p_output1[0]=(t3995 - 1.*t3954*t875)*var2[3] + (t1215*t1282*t14*t168 - 1.*t14*t168*t642*t875)*var2[4] + (t3080 - 1.*t2638*t875)*var2[5] + t3719*var2[6];
  p_output1[1]=(t1282*t3693 - 1.*t3039*t875)*var2[3] + (t1215*t1282*t168*t1949 - 1.*t168*t1949*t642*t875)*var2[4] + (t4267 - 1.*t3983*t875)*var2[5] + t4334*var2[6];
  p_output1[2]=(-1.*t1215*t1282*t2499 + t2499*t642*t875)*var2[4] + t4496*var2[5] + t4496*var2[6];
  p_output1[3]=(-1.*t168*t1949*t4655 + t4601*t4827)*var2[3] + (-1.*t14*t2499*t4655 + t4601*t4732)*var2[4] + t4598*t4601*var2[5] + t4601*t4629*var2[6] + (-1.*t14*t168*t4601 + t3719*t4655)*var2[7];
  p_output1[4]=t5016*var2[3] + (-1.*t1949*t2499*t4655 + t4601*t4975)*var2[4] + t4601*t4867*var2[5] + t4601*t4877*var2[6] + (t4334*t4655 + t4906)*var2[7];
  p_output1[5]=(-1.*t168*t4655 + t4601*t5140)*var2[4] + t4601*t5052*var2[5] + t4601*t5052*var2[6] + (t2499*t4601 + t4496*t4655)*var2[7];
  p_output1[6]=(-1.*t4655*t4827 + t4906)*var2[3] + (-1.*t14*t2499*t4601 - 1.*t4655*t4732)*var2[4] - 1.*t4598*t4655*var2[5] - 1.*t4629*t4655*var2[6] + t5016*var2[7];
  p_output1[7]=(t14*t168*t4601 - 1.*t3719*t4655)*var2[3] + (-1.*t1949*t2499*t4601 - 1.*t4655*t4975)*var2[4] - 1.*t4655*t4867*var2[5] - 1.*t4655*t4877*var2[6] + (t4334*t4601 + t168*t1949*t4655)*var2[7];
  p_output1[8]=(-1.*t168*t4601 - 1.*t4655*t5140)*var2[4] - 1.*t4655*t5052*var2[5] - 1.*t4655*t5052*var2[6] + (t4496*t4601 - 1.*t2499*t4655)*var2[7];
}



void dR_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
