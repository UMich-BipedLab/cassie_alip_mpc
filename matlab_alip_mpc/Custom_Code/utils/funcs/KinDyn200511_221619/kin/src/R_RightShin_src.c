/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightShin_src.h"

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
  double t1766;
  double t1873;
  double t1685;
  double t1770;
  double t1918;
  double t2339;
  double t1834;
  double t2254;
  double t2322;
  double t1381;
  double t2354;
  double t2360;
  double t2366;
  double t2415;
  double t2338;
  double t2378;
  double t2380;
  double t1345;
  double t2423;
  double t2442;
  double t2466;
  double t2477;
  double t2478;
  double t2493;
  double t2499;
  double t2541;
  double t2550;
  double t2598;
  double t2402;
  double t2553;
  double t2556;
  double t1214;
  double t2599;
  double t2609;
  double t2628;
  double t825;
  double t2864;
  double t2867;
  double t2873;
  double t2887;
  double t2893;
  double t2894;
  double t2880;
  double t2895;
  double t2928;
  double t2950;
  double t2955;
  double t2964;
  double t2968;
  double t3015;
  double t3017;
  double t2679;
  double t2940;
  double t3030;
  double t3037;
  double t3066;
  double t3092;
  double t3111;
  double t3217;
  double t3230;
  double t3254;
  double t3275;
  double t3283;
  double t3289;
  double t3292;
  double t3299;
  double t3304;
  double t3260;
  double t3307;
  double t3311;
  double t3336;
  double t3345;
  double t3368;
  double t2574;
  double t2633;
  double t2639;
  double t2686;
  double t2698;
  double t2721;
  double t3051;
  double t3136;
  double t3148;
  double t3185;
  double t3188;
  double t3194;
  double t3331;
  double t3396;
  double t3407;
  double t3431;
  double t3436;
  double t3441;
  t1766 = Cos(var1[5]);
  t1873 = Sin(var1[3]);
  t1685 = Cos(var1[3]);
  t1770 = Sin(var1[4]);
  t1918 = Sin(var1[5]);
  t2339 = Sin(var1[13]);
  t1834 = t1685*t1766*t1770;
  t2254 = t1873*t1918;
  t2322 = t1834 + t2254;
  t1381 = Cos(var1[13]);
  t2354 = -1.*t1766*t1873;
  t2360 = t1685*t1770*t1918;
  t2366 = t2354 + t2360;
  t2415 = Cos(var1[15]);
  t2338 = t1381*t2322;
  t2378 = -1.*t2339*t2366;
  t2380 = t2338 + t2378;
  t1345 = Sin(var1[15]);
  t2423 = Cos(var1[14]);
  t2442 = Cos(var1[4]);
  t2466 = t2423*t1685*t2442;
  t2477 = Sin(var1[14]);
  t2478 = t2339*t2322;
  t2493 = t1381*t2366;
  t2499 = t2478 + t2493;
  t2541 = t2477*t2499;
  t2550 = t2466 + t2541;
  t2598 = Cos(var1[16]);
  t2402 = t1345*t2380;
  t2553 = t2415*t2550;
  t2556 = t2402 + t2553;
  t1214 = Sin(var1[16]);
  t2599 = t2415*t2380;
  t2609 = -1.*t1345*t2550;
  t2628 = t2599 + t2609;
  t825 = Cos(var1[17]);
  t2864 = t1766*t1873*t1770;
  t2867 = -1.*t1685*t1918;
  t2873 = t2864 + t2867;
  t2887 = t1685*t1766;
  t2893 = t1873*t1770*t1918;
  t2894 = t2887 + t2893;
  t2880 = t1381*t2873;
  t2895 = -1.*t2339*t2894;
  t2928 = t2880 + t2895;
  t2950 = t2423*t2442*t1873;
  t2955 = t2339*t2873;
  t2964 = t1381*t2894;
  t2968 = t2955 + t2964;
  t3015 = t2477*t2968;
  t3017 = t2950 + t3015;
  t2679 = Sin(var1[17]);
  t2940 = t1345*t2928;
  t3030 = t2415*t3017;
  t3037 = t2940 + t3030;
  t3066 = t2415*t2928;
  t3092 = -1.*t1345*t3017;
  t3111 = t3066 + t3092;
  t3217 = t1381*t2442*t1766;
  t3230 = -1.*t2442*t2339*t1918;
  t3254 = t3217 + t3230;
  t3275 = -1.*t2423*t1770;
  t3283 = t2442*t1766*t2339;
  t3289 = t1381*t2442*t1918;
  t3292 = t3283 + t3289;
  t3299 = t2477*t3292;
  t3304 = t3275 + t3299;
  t3260 = t1345*t3254;
  t3307 = t2415*t3304;
  t3311 = t3260 + t3307;
  t3336 = t2415*t3254;
  t3345 = -1.*t1345*t3304;
  t3368 = t3336 + t3345;
  t2574 = -1.*t1214*t2556;
  t2633 = t2598*t2628;
  t2639 = t2574 + t2633;
  t2686 = t2598*t2556;
  t2698 = t1214*t2628;
  t2721 = t2686 + t2698;
  t3051 = -1.*t1214*t3037;
  t3136 = t2598*t3111;
  t3148 = t3051 + t3136;
  t3185 = t2598*t3037;
  t3188 = t1214*t3111;
  t3194 = t3185 + t3188;
  t3331 = -1.*t1214*t3311;
  t3396 = t2598*t3368;
  t3407 = t3331 + t3396;
  t3431 = t2598*t3311;
  t3436 = t1214*t3368;
  t3441 = t3431 + t3436;
  p_output1[0]=t2679*t2721 - 1.*t2639*t825;
  p_output1[1]=t2679*t3194 - 1.*t3148*t825;
  p_output1[2]=t2679*t3441 - 1.*t3407*t825;
  p_output1[3]=t2639*t2679 + t2721*t825;
  p_output1[4]=t2679*t3148 + t3194*t825;
  p_output1[5]=t2679*t3407 + t3441*t825;
  p_output1[6]=t1685*t2442*t2477 - 1.*t2423*t2499;
  p_output1[7]=t1873*t2442*t2477 - 1.*t2423*t2968;
  p_output1[8]=-1.*t1770*t2477 - 1.*t2423*t3292;
}



void R_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
