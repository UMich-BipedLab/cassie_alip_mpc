/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftShin_src.h"

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
  double t465;
  double t179;
  double t329;
  double t475;
  double t80;
  double t1426;
  double t1441;
  double t1575;
  double t449;
  double t876;
  double t1067;
  double t1600;
  double t1980;
  double t2042;
  double t2071;
  double t2108;
  double t2125;
  double t2169;
  double t1220;
  double t1654;
  double t1667;
  double t2446;
  double t2417;
  double t2540;
  double t2544;
  double t2607;
  double t2881;
  double t2443;
  double t2693;
  double t2721;
  double t2200;
  double t2886;
  double t2903;
  double t2980;
  double t3722;
  double t3757;
  double t3858;
  double t4247;
  double t4285;
  double t4340;
  double t4363;
  double t3896;
  double t3939;
  double t4042;
  double t4707;
  double t4728;
  double t3250;
  double t3341;
  double t4524;
  double t4871;
  double t4955;
  double t5203;
  double t5207;
  double t5216;
  double t1764;
  double t2185;
  double t2192;
  double t2733;
  double t3036;
  double t3045;
  double t3065;
  double t3283;
  double t3354;
  double t3438;
  double t3486;
  double t3510;
  double t3556;
  double t3560;
  double t3629;
  double t4075;
  double t4478;
  double t4492;
  double t5193;
  double t5305;
  double t5306;
  double t5321;
  double t5351;
  double t5384;
  double t5397;
  double t5780;
  double t5795;
  double t5907;
  double t5944;
  double t5992;
  double t6038;
  double t6075;
  double t6368;
  double t6227;
  double t6287;
  double t6299;
  double t6302;
  t465 = Cos(var1[9]);
  t179 = Cos(var1[10]);
  t329 = Sin(var1[9]);
  t475 = Sin(var1[10]);
  t80 = Cos(var1[8]);
  t1426 = t465*t179;
  t1441 = -1.*t329*t475;
  t1575 = 0. + t1426 + t1441;
  t449 = t179*t329;
  t876 = t465*t475;
  t1067 = 0. + t449 + t876;
  t1600 = Sin(var1[8]);
  t1980 = Cos(var1[7]);
  t2042 = t80*t1575;
  t2071 = -1.*t1067*t1600;
  t2108 = 0. + t2042 + t2071;
  t2125 = t1980*t2108;
  t2169 = 0. + t2125;
  t1220 = t80*t1067;
  t1654 = t1575*t1600;
  t1667 = 0. + t1220 + t1654;
  t2446 = Cos(var1[6]);
  t2417 = Sin(var1[6]);
  t2540 = Sin(var1[7]);
  t2544 = t2540*t2108;
  t2607 = 0. + t2544;
  t2881 = Sin(var1[5]);
  t2443 = -1.*t2417*t1667;
  t2693 = t2446*t2607;
  t2721 = 0. + t2443 + t2693;
  t2200 = Cos(var1[5]);
  t2886 = t2446*t1667;
  t2903 = t2417*t2607;
  t2980 = 0. + t2886 + t2903;
  t3722 = -1.*t465*t179;
  t3757 = t329*t475;
  t3858 = 0. + t3722 + t3757;
  t4247 = -1.*t3858*t1600;
  t4285 = 0. + t1220 + t4247;
  t4340 = t1980*t4285;
  t4363 = 0. + t4340;
  t3896 = t80*t3858;
  t3939 = t1067*t1600;
  t4042 = 0. + t3896 + t3939;
  t4707 = t2540*t4285;
  t4728 = 0. + t4707;
  t3250 = Sin(var1[4]);
  t3341 = Cos(var1[4]);
  t4524 = -1.*t2417*t4042;
  t4871 = t2446*t4728;
  t4955 = 0. + t4524 + t4871;
  t5203 = t2446*t4042;
  t5207 = t2417*t4728;
  t5216 = 0. + t5203 + t5207;
  t1764 = var2[7]*t1667;
  t2185 = var2[5]*t2169;
  t2192 = var2[6]*t2169;
  t2733 = t2200*t2721;
  t3036 = -1.*t2881*t2980;
  t3045 = 0. + t2733 + t3036;
  t3065 = var2[4]*t3045;
  t3283 = -1.*t3250*t2169;
  t3354 = t2881*t2721;
  t3438 = t2200*t2980;
  t3486 = 0. + t3354 + t3438;
  t3510 = t3341*t3486;
  t3556 = 0. + t3283 + t3510;
  t3560 = var2[3]*t3556;
  t3629 = 0. + t1764 + t2185 + t2192 + t3065 + t3560;
  t4075 = var2[7]*t4042;
  t4478 = var2[5]*t4363;
  t4492 = var2[6]*t4363;
  t5193 = t2200*t4955;
  t5305 = -1.*t2881*t5216;
  t5306 = 0. + t5193 + t5305;
  t5321 = var2[4]*t5306;
  t5351 = -1.*t3250*t4363;
  t5384 = t2881*t4955;
  t5397 = t2200*t5216;
  t5780 = 0. + t5384 + t5397;
  t5795 = t3341*t5780;
  t5907 = 0. + t5351 + t5795;
  t5944 = var2[3]*t5907;
  t5992 = 0. + t4075 + t4478 + t4492 + t5321 + t5944;
  t6038 = -1.*t1980;
  t6075 = 0. + t6038;
  t6368 = 0. + t2540;
  t6227 = t2446*t6075;
  t6287 = 0. + t6227;
  t6299 = t6075*t2417;
  t6302 = 0. + t6299;
  p_output1[0]=0. + 0.000334*t3629 + 0.00036*t5992;
  p_output1[1]=0. + 0.0341*t3629 + 0.000334*t5992;
  p_output1[2]=0. + 0.0341*(0. + (0. + t3341*(0. + t2881*t6287 + t2200*t6302) - 1.*t3250*t6368)*var2[3] + (0. + t2200*t6287 - 1.*t2881*t6302)*var2[4] + t6368*var2[5] + t6368*var2[6] + var2[8] + var2[9] + var2[10]);
}



void AMBody_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
