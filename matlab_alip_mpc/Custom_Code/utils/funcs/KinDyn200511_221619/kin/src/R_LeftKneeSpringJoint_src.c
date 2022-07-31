/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftKneeSpringJoint_src.h"

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
  double t206;
  double t1302;
  double t1507;
  double t1471;
  double t1541;
  double t950;
  double t1894;
  double t1913;
  double t2151;
  double t1476;
  double t1544;
  double t1724;
  double t2195;
  double t168;
  double t2287;
  double t2292;
  double t2310;
  double t250;
  double t435;
  double t655;
  double t1858;
  double t2228;
  double t2244;
  double t2246;
  double t2257;
  double t2273;
  double t2327;
  double t2425;
  double t2281;
  double t2331;
  double t2345;
  double t129;
  double t2428;
  double t2431;
  double t2443;
  double t118;
  double t2619;
  double t2631;
  double t2640;
  double t2595;
  double t2606;
  double t2607;
  double t2689;
  double t2690;
  double t2703;
  double t2580;
  double t2613;
  double t2650;
  double t2658;
  double t2664;
  double t2669;
  double t2520;
  double t2672;
  double t2746;
  double t2747;
  double t2770;
  double t2774;
  double t2804;
  double t3058;
  double t3068;
  double t3077;
  double t2960;
  double t3003;
  double t3005;
  double t3013;
  double t3030;
  double t3031;
  double t3039;
  double t3081;
  double t3082;
  double t3100;
  double t3111;
  double t3137;
  double t2361;
  double t2470;
  double t2480;
  double t2536;
  double t2540;
  double t2545;
  double t2757;
  double t2814;
  double t2816;
  double t2900;
  double t2928;
  double t2933;
  double t3096;
  double t3164;
  double t3219;
  double t3266;
  double t3272;
  double t3274;
  t206 = Cos(var1[3]);
  t1302 = Cos(var1[5]);
  t1507 = Sin(var1[4]);
  t1471 = Sin(var1[3]);
  t1541 = Sin(var1[5]);
  t950 = Cos(var1[6]);
  t1894 = t206*t1302*t1507;
  t1913 = t1471*t1541;
  t2151 = t1894 + t1913;
  t1476 = -1.*t1302*t1471;
  t1544 = t206*t1507*t1541;
  t1724 = t1476 + t1544;
  t2195 = Sin(var1[6]);
  t168 = Cos(var1[8]);
  t2287 = t950*t2151;
  t2292 = -1.*t1724*t2195;
  t2310 = t2287 + t2292;
  t250 = Cos(var1[4]);
  t435 = Cos(var1[7]);
  t655 = t206*t250*t435;
  t1858 = t950*t1724;
  t2228 = t2151*t2195;
  t2244 = t1858 + t2228;
  t2246 = Sin(var1[7]);
  t2257 = t2244*t2246;
  t2273 = t655 + t2257;
  t2327 = Sin(var1[8]);
  t2425 = Cos(var1[9]);
  t2281 = t168*t2273;
  t2331 = t2310*t2327;
  t2345 = t2281 + t2331;
  t129 = Sin(var1[9]);
  t2428 = t168*t2310;
  t2431 = -1.*t2273*t2327;
  t2443 = t2428 + t2431;
  t118 = Cos(var1[10]);
  t2619 = t1302*t1471*t1507;
  t2631 = -1.*t206*t1541;
  t2640 = t2619 + t2631;
  t2595 = t206*t1302;
  t2606 = t1471*t1507*t1541;
  t2607 = t2595 + t2606;
  t2689 = t950*t2640;
  t2690 = -1.*t2607*t2195;
  t2703 = t2689 + t2690;
  t2580 = t250*t435*t1471;
  t2613 = t950*t2607;
  t2650 = t2640*t2195;
  t2658 = t2613 + t2650;
  t2664 = t2658*t2246;
  t2669 = t2580 + t2664;
  t2520 = Sin(var1[10]);
  t2672 = t168*t2669;
  t2746 = t2703*t2327;
  t2747 = t2672 + t2746;
  t2770 = t168*t2703;
  t2774 = -1.*t2669*t2327;
  t2804 = t2770 + t2774;
  t3058 = t250*t1302*t950;
  t3068 = -1.*t250*t1541*t2195;
  t3077 = t3058 + t3068;
  t2960 = -1.*t435*t1507;
  t3003 = t250*t950*t1541;
  t3005 = t250*t1302*t2195;
  t3013 = t3003 + t3005;
  t3030 = t3013*t2246;
  t3031 = t2960 + t3030;
  t3039 = t168*t3031;
  t3081 = t3077*t2327;
  t3082 = t3039 + t3081;
  t3100 = t168*t3077;
  t3111 = -1.*t3031*t2327;
  t3137 = t3100 + t3111;
  t2361 = -1.*t129*t2345;
  t2470 = t2425*t2443;
  t2480 = t2361 + t2470;
  t2536 = t2425*t2345;
  t2540 = t129*t2443;
  t2545 = t2536 + t2540;
  t2757 = -1.*t129*t2747;
  t2814 = t2425*t2804;
  t2816 = t2757 + t2814;
  t2900 = t2425*t2747;
  t2928 = t129*t2804;
  t2933 = t2900 + t2928;
  t3096 = -1.*t129*t3082;
  t3164 = t2425*t3137;
  t3219 = t3096 + t3164;
  t3266 = t2425*t3082;
  t3272 = t129*t3137;
  t3274 = t3266 + t3272;
  p_output1[0]=-1.*t118*t2480 + t2520*t2545;
  p_output1[1]=-1.*t118*t2816 + t2520*t2933;
  p_output1[2]=-1.*t118*t3219 + t2520*t3274;
  p_output1[3]=t2480*t2520 + t118*t2545;
  p_output1[4]=t2520*t2816 + t118*t2933;
  p_output1[5]=t2520*t3219 + t118*t3274;
  p_output1[6]=t206*t2246*t250 - 1.*t2244*t435;
  p_output1[7]=t1471*t2246*t250 - 1.*t2658*t435;
  p_output1[8]=-1.*t1507*t2246 - 1.*t3013*t435;
}



void R_LeftKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
