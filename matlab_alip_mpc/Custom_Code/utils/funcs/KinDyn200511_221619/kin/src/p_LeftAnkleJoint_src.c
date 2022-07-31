/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftAnkleJoint_src.h"

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
  double t154;
  double t295;
  double t87;
  double t202;
  double t297;
  double t403;
  double t421;
  double t430;
  double t434;
  double t905;
  double t952;
  double t1033;
  double t283;
  double t380;
  double t388;
  double t1612;
  double t1681;
  double t1703;
  double t1941;
  double t1245;
  double t1262;
  double t1378;
  double t2155;
  double t2726;
  double t2743;
  double t2798;
  double t2857;
  double t2488;
  double t2503;
  double t2717;
  double t2905;
  double t2940;
  double t2944;
  double t3134;
  double t3142;
  double t3179;
  double t3194;
  double t3334;
  double t3344;
  double t3348;
  double t3720;
  double t3872;
  double t3921;
  double t4134;
  double t4179;
  double t4227;
  double t4296;
  double t4383;
  double t4414;
  double t4492;
  double t4968;
  double t4970;
  double t5069;
  double t5152;
  double t5222;
  double t5229;
  double t5327;
  double t5381;
  double t5386;
  double t5387;
  double t5500;
  double t5532;
  double t5580;
  double t431;
  double t475;
  double t505;
  double t1129;
  double t1133;
  double t1177;
  double t6193;
  double t6246;
  double t6272;
  double t6167;
  double t6168;
  double t6170;
  double t1762;
  double t2025;
  double t2114;
  double t2185;
  double t2197;
  double t2342;
  double t6298;
  double t6304;
  double t6377;
  double t2831;
  double t2875;
  double t2878;
  double t3011;
  double t3070;
  double t3071;
  double t3188;
  double t3207;
  double t3311;
  double t6501;
  double t6523;
  double t6543;
  double t6559;
  double t6611;
  double t6613;
  double t3519;
  double t3543;
  double t3549;
  double t4237;
  double t4327;
  double t4328;
  double t6667;
  double t6670;
  double t6673;
  double t6686;
  double t6691;
  double t6710;
  double t4747;
  double t4759;
  double t4958;
  double t5325;
  double t5333;
  double t5348;
  double t6718;
  double t6721;
  double t6723;
  double t6729;
  double t6731;
  double t6758;
  double t5414;
  double t5453;
  double t5476;
  double t6772;
  double t6775;
  double t6790;
  double t6966;
  double t7001;
  double t7003;
  double t7211;
  double t7213;
  double t7216;
  double t7288;
  double t7292;
  double t7295;
  double t7305;
  double t7315;
  double t7318;
  double t7324;
  double t7331;
  double t7336;
  double t7348;
  double t7352;
  double t7353;
  double t7357;
  double t7358;
  double t7366;
  double t7372;
  double t7374;
  double t7376;
  double t7384;
  double t7385;
  double t7389;
  double t7392;
  double t7399;
  double t7401;
  t154 = Cos(var1[5]);
  t295 = Sin(var1[3]);
  t87 = Cos(var1[3]);
  t202 = Sin(var1[4]);
  t297 = Sin(var1[5]);
  t403 = Cos(var1[6]);
  t421 = -1.*t403;
  t430 = 1. + t421;
  t434 = Sin(var1[6]);
  t905 = -1.*t154*t295;
  t952 = t87*t202*t297;
  t1033 = t905 + t952;
  t283 = t87*t154*t202;
  t380 = t295*t297;
  t388 = t283 + t380;
  t1612 = Cos(var1[7]);
  t1681 = -1.*t1612;
  t1703 = 1. + t1681;
  t1941 = Sin(var1[7]);
  t1245 = t403*t1033;
  t1262 = t388*t434;
  t1378 = t1245 + t1262;
  t2155 = Cos(var1[4]);
  t2726 = Cos(var1[8]);
  t2743 = -1.*t2726;
  t2798 = 1. + t2743;
  t2857 = Sin(var1[8]);
  t2488 = t87*t2155*t1612;
  t2503 = t1378*t1941;
  t2717 = t2488 + t2503;
  t2905 = t403*t388;
  t2940 = -1.*t1033*t434;
  t2944 = t2905 + t2940;
  t3134 = Cos(var1[9]);
  t3142 = -1.*t3134;
  t3179 = 1. + t3142;
  t3194 = Sin(var1[9]);
  t3334 = t2726*t2717;
  t3344 = t2944*t2857;
  t3348 = t3334 + t3344;
  t3720 = t2726*t2944;
  t3872 = -1.*t2717*t2857;
  t3921 = t3720 + t3872;
  t4134 = Cos(var1[10]);
  t4179 = -1.*t4134;
  t4227 = 1. + t4179;
  t4296 = Sin(var1[10]);
  t4383 = -1.*t3194*t3348;
  t4414 = t3134*t3921;
  t4492 = t4383 + t4414;
  t4968 = t3134*t3348;
  t4970 = t3194*t3921;
  t5069 = t4968 + t4970;
  t5152 = Cos(var1[11]);
  t5222 = -1.*t5152;
  t5229 = 1. + t5222;
  t5327 = Sin(var1[11]);
  t5381 = t4296*t4492;
  t5386 = t4134*t5069;
  t5387 = t5381 + t5386;
  t5500 = t4134*t4492;
  t5532 = -1.*t4296*t5069;
  t5580 = t5500 + t5532;
  t431 = 0.07996*t430;
  t475 = -0.135*t434;
  t505 = 0. + t431 + t475;
  t1129 = 0.135*t430;
  t1133 = 0.07996*t434;
  t1177 = 0. + t1129 + t1133;
  t6193 = t87*t154;
  t6246 = t295*t202*t297;
  t6272 = t6193 + t6246;
  t6167 = t154*t295*t202;
  t6168 = -1.*t87*t297;
  t6170 = t6167 + t6168;
  t1762 = 0.135*t1703;
  t2025 = 0.08055*t1941;
  t2114 = 0. + t1762 + t2025;
  t2185 = -0.08055*t1703;
  t2197 = 0.135*t1941;
  t2342 = 0. + t2185 + t2197;
  t6298 = t403*t6272;
  t6304 = t6170*t434;
  t6377 = t6298 + t6304;
  t2831 = -0.08055*t2798;
  t2875 = -0.01004*t2857;
  t2878 = 0. + t2831 + t2875;
  t3011 = -0.01004*t2798;
  t3070 = 0.08055*t2857;
  t3071 = 0. + t3011 + t3070;
  t3188 = -0.08055*t3179;
  t3207 = -0.13004*t3194;
  t3311 = 0. + t3188 + t3207;
  t6501 = t2155*t1612*t295;
  t6523 = t6377*t1941;
  t6543 = t6501 + t6523;
  t6559 = t403*t6170;
  t6611 = -1.*t6272*t434;
  t6613 = t6559 + t6611;
  t3519 = -0.13004*t3179;
  t3543 = 0.08055*t3194;
  t3549 = 0. + t3519 + t3543;
  t4237 = -0.19074*t4227;
  t4327 = 0.03315*t4296;
  t4328 = 0. + t4237 + t4327;
  t6667 = t2726*t6543;
  t6670 = t6613*t2857;
  t6673 = t6667 + t6670;
  t6686 = t2726*t6613;
  t6691 = -1.*t6543*t2857;
  t6710 = t6686 + t6691;
  t4747 = -0.03315*t4227;
  t4759 = -0.19074*t4296;
  t4958 = 0. + t4747 + t4759;
  t5325 = -0.01315*t5229;
  t5333 = -0.62554*t5327;
  t5348 = 0. + t5325 + t5333;
  t6718 = -1.*t3194*t6673;
  t6721 = t3134*t6710;
  t6723 = t6718 + t6721;
  t6729 = t3134*t6673;
  t6731 = t3194*t6710;
  t6758 = t6729 + t6731;
  t5414 = -0.62554*t5229;
  t5453 = 0.01315*t5327;
  t5476 = 0. + t5414 + t5453;
  t6772 = t4296*t6723;
  t6775 = t4134*t6758;
  t6790 = t6772 + t6775;
  t6966 = t4134*t6723;
  t7001 = -1.*t4296*t6758;
  t7003 = t6966 + t7001;
  t7211 = t2155*t403*t297;
  t7213 = t2155*t154*t434;
  t7216 = t7211 + t7213;
  t7288 = -1.*t1612*t202;
  t7292 = t7216*t1941;
  t7295 = t7288 + t7292;
  t7305 = t2155*t154*t403;
  t7315 = -1.*t2155*t297*t434;
  t7318 = t7305 + t7315;
  t7324 = t2726*t7295;
  t7331 = t7318*t2857;
  t7336 = t7324 + t7331;
  t7348 = t2726*t7318;
  t7352 = -1.*t7295*t2857;
  t7353 = t7348 + t7352;
  t7357 = -1.*t3194*t7336;
  t7358 = t3134*t7353;
  t7366 = t7357 + t7358;
  t7372 = t3134*t7336;
  t7374 = t3194*t7353;
  t7376 = t7372 + t7374;
  t7384 = t4296*t7366;
  t7385 = t4134*t7376;
  t7389 = t7384 + t7385;
  t7392 = t4134*t7366;
  t7399 = -1.*t4296*t7376;
  t7401 = t7392 + t7399;
  p_output1[0]=0. + t1033*t1177 + t1378*t2114 + t2717*t2878 + t2944*t3071 + t3311*t3348 + t3549*t3921 + t4328*t4492 + t388*t505 + t4958*t5069 + t5348*t5387 + t5476*t5580 - 0.62554*(-1.*t5327*t5387 + t5152*t5580) - 0.01315*(t5152*t5387 + t5327*t5580) + t2155*t2342*t87 + 0.1305*(t1378*t1612 - 1.*t1941*t2155*t87) + var1[0];
  p_output1[1]=0. + t2155*t2342*t295 + t505*t6170 + t1177*t6272 + t2114*t6377 + 0.1305*(-1.*t1941*t2155*t295 + t1612*t6377) + t2878*t6543 + t3071*t6613 + t3311*t6673 + t3549*t6710 + t4328*t6723 + t4958*t6758 + t5348*t6790 + t5476*t7003 - 0.62554*(-1.*t5327*t6790 + t5152*t7003) - 0.01315*(t5152*t6790 + t5327*t7003) + var1[1];
  p_output1[2]=0. - 1.*t202*t2342 + t1177*t2155*t297 + t154*t2155*t505 + t2114*t7216 + 0.1305*(t1941*t202 + t1612*t7216) + t2878*t7295 + t3071*t7318 + t3311*t7336 + t3549*t7353 + t4328*t7366 + t4958*t7376 + t5348*t7389 + t5476*t7401 - 0.62554*(-1.*t5327*t7389 + t5152*t7401) - 0.01315*(t5152*t7389 + t5327*t7401) + var1[2];
}



void p_LeftAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
