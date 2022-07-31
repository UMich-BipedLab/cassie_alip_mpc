/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightAnkleJoint_src.h"

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
  double t187;
  double t707;
  double t736;
  double t749;
  double t812;
  double t1010;
  double t1048;
  double t1015;
  double t1099;
  double t297;
  double t343;
  double t382;
  double t419;
  double t1021;
  double t1160;
  double t1235;
  double t1490;
  double t1516;
  double t1519;
  double t261;
  double t1754;
  double t1757;
  double t1817;
  double t1906;
  double t1924;
  double t1946;
  double t2294;
  double t2299;
  double t2323;
  double t2426;
  double t3115;
  double t3163;
  double t3173;
  double t3358;
  double t3525;
  double t3526;
  double t3580;
  double t3755;
  double t3818;
  double t3830;
  double t4160;
  double t4179;
  double t4207;
  double t4306;
  double t4392;
  double t4419;
  double t4580;
  double t4760;
  double t4801;
  double t4866;
  double t5208;
  double t5441;
  double t5542;
  double t5675;
  double t5809;
  double t5848;
  double t5872;
  double t5989;
  double t6078;
  double t6245;
  double t6326;
  double t6385;
  double t6454;
  double t398;
  double t439;
  double t491;
  double t796;
  double t883;
  double t956;
  double t1350;
  double t1445;
  double t1479;
  double t1563;
  double t1657;
  double t1673;
  double t6799;
  double t6858;
  double t6864;
  double t6903;
  double t6907;
  double t6908;
  double t1971;
  double t2296;
  double t2297;
  double t6951;
  double t6960;
  double t6961;
  double t2601;
  double t2659;
  double t3037;
  double t3541;
  double t3681;
  double t3715;
  double t6972;
  double t6973;
  double t7000;
  double t7049;
  double t7055;
  double t7069;
  double t4053;
  double t4155;
  double t4156;
  double t4579;
  double t4609;
  double t4643;
  double t7094;
  double t7097;
  double t7139;
  double t7166;
  double t7175;
  double t7176;
  double t5085;
  double t5171;
  double t5184;
  double t5864;
  double t5892;
  double t5950;
  double t7186;
  double t7194;
  double t7197;
  double t7218;
  double t7221;
  double t7222;
  double t6278;
  double t6300;
  double t6312;
  double t7224;
  double t7268;
  double t7273;
  double t7276;
  double t7277;
  double t7278;
  double t7310;
  double t7311;
  double t7315;
  double t7320;
  double t7331;
  double t7334;
  double t7344;
  double t7346;
  double t7351;
  double t7362;
  double t7364;
  double t7365;
  double t7367;
  double t7368;
  double t7371;
  double t7373;
  double t7374;
  double t7375;
  double t7377;
  double t7378;
  double t7381;
  double t7383;
  double t7384;
  double t7385;
  double t7389;
  double t7390;
  double t7392;
  t187 = Cos(var1[3]);
  t707 = Cos(var1[13]);
  t736 = -1.*t707;
  t749 = 1. + t736;
  t812 = Sin(var1[13]);
  t1010 = Cos(var1[5]);
  t1048 = Sin(var1[3]);
  t1015 = Sin(var1[4]);
  t1099 = Sin(var1[5]);
  t297 = Cos(var1[14]);
  t343 = -1.*t297;
  t382 = 1. + t343;
  t419 = Sin(var1[14]);
  t1021 = t187*t1010*t1015;
  t1160 = t1048*t1099;
  t1235 = t1021 + t1160;
  t1490 = -1.*t1010*t1048;
  t1516 = t187*t1015*t1099;
  t1519 = t1490 + t1516;
  t261 = Cos(var1[4]);
  t1754 = t812*t1235;
  t1757 = t707*t1519;
  t1817 = t1754 + t1757;
  t1906 = Cos(var1[15]);
  t1924 = -1.*t1906;
  t1946 = 1. + t1924;
  t2294 = Sin(var1[15]);
  t2299 = t707*t1235;
  t2323 = -1.*t812*t1519;
  t2426 = t2299 + t2323;
  t3115 = t297*t187*t261;
  t3163 = t419*t1817;
  t3173 = t3115 + t3163;
  t3358 = Cos(var1[16]);
  t3525 = -1.*t3358;
  t3526 = 1. + t3525;
  t3580 = Sin(var1[16]);
  t3755 = t2294*t2426;
  t3818 = t1906*t3173;
  t3830 = t3755 + t3818;
  t4160 = t1906*t2426;
  t4179 = -1.*t2294*t3173;
  t4207 = t4160 + t4179;
  t4306 = Cos(var1[17]);
  t4392 = -1.*t4306;
  t4419 = 1. + t4392;
  t4580 = Sin(var1[17]);
  t4760 = -1.*t3580*t3830;
  t4801 = t3358*t4207;
  t4866 = t4760 + t4801;
  t5208 = t3358*t3830;
  t5441 = t3580*t4207;
  t5542 = t5208 + t5441;
  t5675 = Cos(var1[18]);
  t5809 = -1.*t5675;
  t5848 = 1. + t5809;
  t5872 = Sin(var1[18]);
  t5989 = t4580*t4866;
  t6078 = t4306*t5542;
  t6245 = t5989 + t6078;
  t6326 = t4306*t4866;
  t6385 = -1.*t4580*t5542;
  t6454 = t6326 + t6385;
  t398 = -0.08055*t382;
  t439 = -0.135*t419;
  t491 = 0. + t398 + t439;
  t796 = 0.07996*t749;
  t883 = 0.135*t812;
  t956 = 0. + t796 + t883;
  t1350 = -0.135*t749;
  t1445 = 0.07996*t812;
  t1479 = 0. + t1350 + t1445;
  t1563 = -0.135*t382;
  t1657 = 0.08055*t419;
  t1673 = 0. + t1563 + t1657;
  t6799 = t1010*t1048*t1015;
  t6858 = -1.*t187*t1099;
  t6864 = t6799 + t6858;
  t6903 = t187*t1010;
  t6907 = t1048*t1015*t1099;
  t6908 = t6903 + t6907;
  t1971 = -0.01004*t1946;
  t2296 = 0.08055*t2294;
  t2297 = 0. + t1971 + t2296;
  t6951 = t812*t6864;
  t6960 = t707*t6908;
  t6961 = t6951 + t6960;
  t2601 = -0.08055*t1946;
  t2659 = -0.01004*t2294;
  t3037 = 0. + t2601 + t2659;
  t3541 = -0.08055*t3526;
  t3681 = -0.13004*t3580;
  t3715 = 0. + t3541 + t3681;
  t6972 = t707*t6864;
  t6973 = -1.*t812*t6908;
  t7000 = t6972 + t6973;
  t7049 = t297*t261*t1048;
  t7055 = t419*t6961;
  t7069 = t7049 + t7055;
  t4053 = -0.13004*t3526;
  t4155 = 0.08055*t3580;
  t4156 = 0. + t4053 + t4155;
  t4579 = -0.19074*t4419;
  t4609 = 0.03315*t4580;
  t4643 = 0. + t4579 + t4609;
  t7094 = t2294*t7000;
  t7097 = t1906*t7069;
  t7139 = t7094 + t7097;
  t7166 = t1906*t7000;
  t7175 = -1.*t2294*t7069;
  t7176 = t7166 + t7175;
  t5085 = -0.03315*t4419;
  t5171 = -0.19074*t4580;
  t5184 = 0. + t5085 + t5171;
  t5864 = -0.01315*t5848;
  t5892 = -0.62554*t5872;
  t5950 = 0. + t5864 + t5892;
  t7186 = -1.*t3580*t7139;
  t7194 = t3358*t7176;
  t7197 = t7186 + t7194;
  t7218 = t3358*t7139;
  t7221 = t3580*t7176;
  t7222 = t7218 + t7221;
  t6278 = -0.62554*t5848;
  t6300 = 0.01315*t5872;
  t6312 = 0. + t6278 + t6300;
  t7224 = t4580*t7197;
  t7268 = t4306*t7222;
  t7273 = t7224 + t7268;
  t7276 = t4306*t7197;
  t7277 = -1.*t4580*t7222;
  t7278 = t7276 + t7277;
  t7310 = t261*t1010*t812;
  t7311 = t707*t261*t1099;
  t7315 = t7310 + t7311;
  t7320 = t707*t261*t1010;
  t7331 = -1.*t261*t812*t1099;
  t7334 = t7320 + t7331;
  t7344 = -1.*t297*t1015;
  t7346 = t419*t7315;
  t7351 = t7344 + t7346;
  t7362 = t2294*t7334;
  t7364 = t1906*t7351;
  t7365 = t7362 + t7364;
  t7367 = t1906*t7334;
  t7368 = -1.*t2294*t7351;
  t7371 = t7367 + t7368;
  t7373 = -1.*t3580*t7365;
  t7374 = t3358*t7371;
  t7375 = t7373 + t7374;
  t7377 = t3358*t7365;
  t7378 = t3580*t7371;
  t7381 = t7377 + t7378;
  t7383 = t4580*t7375;
  t7384 = t4306*t7381;
  t7385 = t7383 + t7384;
  t7389 = t4306*t7375;
  t7390 = -1.*t4580*t7381;
  t7392 = t7389 + t7390;
  p_output1[0]=0. + t1479*t1519 + t1673*t1817 + t2297*t2426 + t3037*t3173 + t3715*t3830 - 0.1305*(t1817*t297 - 1.*t187*t261*t419) + t4156*t4207 + t4643*t4866 + t187*t261*t491 + t5184*t5542 + t5950*t6245 + t6312*t6454 - 0.62554*(-1.*t5872*t6245 + t5675*t6454) - 0.01315*(t5675*t6245 + t5872*t6454) + t1235*t956 + var1[0];
  p_output1[1]=0. + t1048*t261*t491 + t1479*t6908 + t1673*t6961 - 0.1305*(-1.*t1048*t261*t419 + t297*t6961) + t2297*t7000 + t3037*t7069 + t3715*t7139 + t4156*t7176 + t4643*t7197 + t5184*t7222 + t5950*t7273 + t6312*t7278 - 0.62554*(-1.*t5872*t7273 + t5675*t7278) - 0.01315*(t5675*t7273 + t5872*t7278) + t6864*t956 + var1[1];
  p_output1[2]=0. + t1099*t1479*t261 - 1.*t1015*t491 + t1673*t7315 - 0.1305*(t1015*t419 + t297*t7315) + t2297*t7334 + t3037*t7351 + t3715*t7365 + t4156*t7371 + t4643*t7375 + t5184*t7381 + t5950*t7385 + t6312*t7392 - 0.62554*(-1.*t5872*t7385 + t5675*t7392) - 0.01315*(t5675*t7385 + t5872*t7392) + t1010*t261*t956 + var1[2];
}



void p_RightAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
