/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightKneeSpringJoint_src.h"

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
  double t902;
  double t2440;
  double t2656;
  double t2695;
  double t2829;
  double t3030;
  double t3157;
  double t3106;
  double t3164;
  double t1286;
  double t1344;
  double t1384;
  double t1457;
  double t3121;
  double t3165;
  double t3173;
  double t3309;
  double t3333;
  double t3388;
  double t994;
  double t3874;
  double t3876;
  double t3878;
  double t3895;
  double t3922;
  double t4106;
  double t4176;
  double t4206;
  double t4210;
  double t4220;
  double t4823;
  double t5066;
  double t5085;
  double t5247;
  double t5283;
  double t5295;
  double t5374;
  double t5482;
  double t5485;
  double t5494;
  double t5636;
  double t5671;
  double t5731;
  double t5888;
  double t5910;
  double t5946;
  double t5968;
  double t6068;
  double t6110;
  double t6117;
  double t6189;
  double t6197;
  double t6199;
  double t1429;
  double t1715;
  double t2357;
  double t2768;
  double t2881;
  double t2897;
  double t3178;
  double t3233;
  double t3292;
  double t3470;
  double t3476;
  double t3686;
  double t6361;
  double t6362;
  double t6366;
  double t6412;
  double t6490;
  double t6505;
  double t4144;
  double t4196;
  double t4200;
  double t6564;
  double t6595;
  double t6638;
  double t4705;
  double t4733;
  double t4745;
  double t5350;
  double t5442;
  double t5463;
  double t6732;
  double t6734;
  double t6736;
  double t6764;
  double t6765;
  double t6769;
  double t5525;
  double t5533;
  double t5536;
  double t5950;
  double t6008;
  double t6063;
  double t6774;
  double t6775;
  double t6776;
  double t6796;
  double t6805;
  double t6806;
  double t6131;
  double t6133;
  double t6186;
  double t6815;
  double t6824;
  double t6840;
  double t6847;
  double t6849;
  double t6850;
  double t6952;
  double t6953;
  double t6954;
  double t6971;
  double t6972;
  double t6982;
  double t7027;
  double t7029;
  double t7034;
  double t7045;
  double t7046;
  double t7051;
  double t7058;
  double t7063;
  double t7064;
  double t7079;
  double t7081;
  double t7090;
  double t7092;
  double t7097;
  double t7098;
  t902 = Cos(var1[3]);
  t2440 = Cos(var1[13]);
  t2656 = -1.*t2440;
  t2695 = 1. + t2656;
  t2829 = Sin(var1[13]);
  t3030 = Cos(var1[5]);
  t3157 = Sin(var1[3]);
  t3106 = Sin(var1[4]);
  t3164 = Sin(var1[5]);
  t1286 = Cos(var1[14]);
  t1344 = -1.*t1286;
  t1384 = 1. + t1344;
  t1457 = Sin(var1[14]);
  t3121 = t902*t3030*t3106;
  t3165 = t3157*t3164;
  t3173 = t3121 + t3165;
  t3309 = -1.*t3030*t3157;
  t3333 = t902*t3106*t3164;
  t3388 = t3309 + t3333;
  t994 = Cos(var1[4]);
  t3874 = t2829*t3173;
  t3876 = t2440*t3388;
  t3878 = t3874 + t3876;
  t3895 = Cos(var1[15]);
  t3922 = -1.*t3895;
  t4106 = 1. + t3922;
  t4176 = Sin(var1[15]);
  t4206 = t2440*t3173;
  t4210 = -1.*t2829*t3388;
  t4220 = t4206 + t4210;
  t4823 = t1286*t902*t994;
  t5066 = t1457*t3878;
  t5085 = t4823 + t5066;
  t5247 = Cos(var1[16]);
  t5283 = -1.*t5247;
  t5295 = 1. + t5283;
  t5374 = Sin(var1[16]);
  t5482 = t4176*t4220;
  t5485 = t3895*t5085;
  t5494 = t5482 + t5485;
  t5636 = t3895*t4220;
  t5671 = -1.*t4176*t5085;
  t5731 = t5636 + t5671;
  t5888 = Cos(var1[17]);
  t5910 = -1.*t5888;
  t5946 = 1. + t5910;
  t5968 = Sin(var1[17]);
  t6068 = -1.*t5374*t5494;
  t6110 = t5247*t5731;
  t6117 = t6068 + t6110;
  t6189 = t5247*t5494;
  t6197 = t5374*t5731;
  t6199 = t6189 + t6197;
  t1429 = -0.08055*t1384;
  t1715 = -0.135*t1457;
  t2357 = 0. + t1429 + t1715;
  t2768 = 0.07996*t2695;
  t2881 = 0.135*t2829;
  t2897 = 0. + t2768 + t2881;
  t3178 = -0.135*t2695;
  t3233 = 0.07996*t2829;
  t3292 = 0. + t3178 + t3233;
  t3470 = -0.135*t1384;
  t3476 = 0.08055*t1457;
  t3686 = 0. + t3470 + t3476;
  t6361 = t3030*t3157*t3106;
  t6362 = -1.*t902*t3164;
  t6366 = t6361 + t6362;
  t6412 = t902*t3030;
  t6490 = t3157*t3106*t3164;
  t6505 = t6412 + t6490;
  t4144 = -0.01004*t4106;
  t4196 = 0.08055*t4176;
  t4200 = 0. + t4144 + t4196;
  t6564 = t2829*t6366;
  t6595 = t2440*t6505;
  t6638 = t6564 + t6595;
  t4705 = -0.08055*t4106;
  t4733 = -0.01004*t4176;
  t4745 = 0. + t4705 + t4733;
  t5350 = -0.08055*t5295;
  t5442 = -0.13004*t5374;
  t5463 = 0. + t5350 + t5442;
  t6732 = t2440*t6366;
  t6734 = -1.*t2829*t6505;
  t6736 = t6732 + t6734;
  t6764 = t1286*t994*t3157;
  t6765 = t1457*t6638;
  t6769 = t6764 + t6765;
  t5525 = -0.13004*t5295;
  t5533 = 0.08055*t5374;
  t5536 = 0. + t5525 + t5533;
  t5950 = -0.19074*t5946;
  t6008 = 0.03315*t5968;
  t6063 = 0. + t5950 + t6008;
  t6774 = t4176*t6736;
  t6775 = t3895*t6769;
  t6776 = t6774 + t6775;
  t6796 = t3895*t6736;
  t6805 = -1.*t4176*t6769;
  t6806 = t6796 + t6805;
  t6131 = -0.03315*t5946;
  t6133 = -0.19074*t5968;
  t6186 = 0. + t6131 + t6133;
  t6815 = -1.*t5374*t6776;
  t6824 = t5247*t6806;
  t6840 = t6815 + t6824;
  t6847 = t5247*t6776;
  t6849 = t5374*t6806;
  t6850 = t6847 + t6849;
  t6952 = t994*t3030*t2829;
  t6953 = t2440*t994*t3164;
  t6954 = t6952 + t6953;
  t6971 = t2440*t994*t3030;
  t6972 = -1.*t994*t2829*t3164;
  t6982 = t6971 + t6972;
  t7027 = -1.*t1286*t3106;
  t7029 = t1457*t6954;
  t7034 = t7027 + t7029;
  t7045 = t4176*t6982;
  t7046 = t3895*t7034;
  t7051 = t7045 + t7046;
  t7058 = t3895*t6982;
  t7063 = -1.*t4176*t7034;
  t7064 = t7058 + t7063;
  t7079 = -1.*t5374*t7051;
  t7081 = t5247*t7064;
  t7090 = t7079 + t7081;
  t7092 = t5247*t7051;
  t7097 = t5374*t7064;
  t7098 = t7092 + t7097;
  p_output1[0]=0. + t2897*t3173 + t3292*t3388 + t3686*t3878 + t4200*t4220 + t4745*t5085 + t5463*t5494 + t5536*t5731 + t6063*t6117 + t6186*t6199 - 0.03315*(t5968*t6117 + t5888*t6199) - 0.19074*(t5888*t6117 - 1.*t5968*t6199) + t2357*t902*t994 - 0.1305*(t1286*t3878 - 1.*t1457*t902*t994) + var1[0];
  p_output1[1]=0. + t2897*t6366 + t3292*t6505 + t3686*t6638 + t4200*t6736 + t4745*t6769 + t5463*t6776 + t5536*t6806 + t6063*t6840 + t6186*t6850 - 0.03315*(t5968*t6840 + t5888*t6850) - 0.19074*(t5888*t6840 - 1.*t5968*t6850) + t2357*t3157*t994 - 0.1305*(t1286*t6638 - 1.*t1457*t3157*t994) + var1[1];
  p_output1[2]=0. - 1.*t2357*t3106 + t3686*t6954 - 0.1305*(t1457*t3106 + t1286*t6954) + t4200*t6982 + t4745*t7034 + t5463*t7051 + t5536*t7064 + t6063*t7090 + t6186*t7098 - 0.03315*(t5968*t7090 + t5888*t7098) - 0.19074*(t5888*t7090 - 1.*t5968*t7098) + t2897*t3030*t994 + t3164*t3292*t994 + var1[2];
}



void p_RightKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
