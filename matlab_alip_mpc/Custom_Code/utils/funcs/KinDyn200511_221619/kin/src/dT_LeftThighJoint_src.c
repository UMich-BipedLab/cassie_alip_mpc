/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftThighJoint_src.h"

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
  double t312;
  double t110;
  double t354;
  double t254;
  double t365;
  double t706;
  double t71;
  double t80;
  double t305;
  double t369;
  double t382;
  double t387;
  double t453;
  double t455;
  double t481;
  double t658;
  double t660;
  double t697;
  double t714;
  double t844;
  double t914;
  double t1078;
  double t1361;
  double t1403;
  double t1451;
  double t1497;
  double t1198;
  double t1248;
  double t2136;
  double t2141;
  double t2158;
  double t2085;
  double t2088;
  double t2104;
  double t2384;
  double t2385;
  double t2387;
  double t2398;
  double t2416;
  double t2424;
  double t2443;
  double t2472;
  double t2485;
  double t2206;
  double t2661;
  double t2743;
  double t2662;
  double t2681;
  double t952;
  double t1028;
  double t1034;
  double t3001;
  double t3011;
  double t3028;
  double t3120;
  double t3122;
  double t3132;
  double t3152;
  double t3156;
  double t3158;
  double t3161;
  double t3165;
  double t3170;
  double t699;
  double t784;
  double t787;
  double t1855;
  double t1878;
  double t1884;
  double t1889;
  double t1893;
  double t1946;
  double t1789;
  double t1808;
  double t1809;
  double t1541;
  double t1552;
  double t1458;
  double t1512;
  double t1641;
  double t1712;
  double t2199;
  double t2214;
  double t2222;
  double t2226;
  double t2254;
  double t2123;
  double t2170;
  double t2182;
  double t2538;
  double t2564;
  double t2573;
  double t2895;
  double t2897;
  double t2898;
  double t2900;
  double t2902;
  double t2906;
  double t2862;
  double t2883;
  double t2884;
  double t2779;
  double t2781;
  double t2744;
  double t2816;
  double t2830;
  double t1073;
  double t1255;
  double t1302;
  double t2620;
  double t2644;
  double t2647;
  double t3039;
  double t3061;
  double t3062;
  double t3636;
  double t3654;
  double t3655;
  double t3247;
  double t3280;
  double t3287;
  double t3302;
  double t3323;
  double t3347;
  double t3201;
  double t3218;
  double t3231;
  double t3078;
  double t3092;
  double t3106;
  double t4343;
  double t4358;
  double t4191;
  double t4192;
  double t4194;
  double t4209;
  double t4216;
  double t3393;
  double t3409;
  double t3410;
  double t4427;
  double t4461;
  double t4463;
  double t4470;
  double t4485;
  double t4486;
  double t4556;
  double t4557;
  double t4563;
  double t3430;
  double t3434;
  double t3439;
  double t4362;
  double t4374;
  double t4378;
  double t4392;
  double t4429;
  double t4115;
  double t3379;
  double t3385;
  double t3386;
  double t4860;
  double t4865;
  double t3444;
  double t3446;
  double t3449;
  double t3471;
  double t3479;
  double t3480;
  double t4098;
  double t4102;
  double t4110;
  double t4114;
  double t4129;
  double t3526;
  double t3527;
  double t3541;
  double t4599;
  double t4625;
  double t4642;
  double t4657;
  double t4674;
  double t3558;
  double t3575;
  double t3576;
  double t3509;
  double t3511;
  double t3516;
  double t5130;
  double t5135;
  double t5197;
  double t5212;
  double t5238;
  double t3587;
  double t3594;
  double t3615;
  double t6366;
  double t6367;
  double t6376;
  double t6386;
  double t6393;
  double t6400;
  double t6452;
  double t6460;
  double t6476;
  double t3691;
  double t3697;
  double t3730;
  double t3666;
  double t3669;
  double t3672;
  t312 = Cos(var1[3]);
  t110 = Cos(var1[5]);
  t354 = Sin(var1[4]);
  t254 = Sin(var1[3]);
  t365 = Sin(var1[5]);
  t706 = Cos(var1[4]);
  t71 = Cos(var1[7]);
  t80 = Cos(var1[6]);
  t305 = -1.*t110*t254;
  t369 = t312*t354*t365;
  t382 = t305 + t369;
  t387 = t80*t382;
  t453 = t312*t110*t354;
  t455 = t254*t365;
  t481 = t453 + t455;
  t658 = Sin(var1[6]);
  t660 = t481*t658;
  t697 = t387 + t660;
  t714 = Sin(var1[7]);
  t844 = Sin(var1[8]);
  t914 = Cos(var1[8]);
  t1078 = t80*t481;
  t1361 = t110*t254;
  t1403 = -1.*t312*t354*t365;
  t1451 = t1361 + t1403;
  t1497 = -1.*t481*t658;
  t1198 = -1.*t382*t658;
  t1248 = t1078 + t1198;
  t2136 = -1.*t312*t110;
  t2141 = -1.*t254*t354*t365;
  t2158 = t2136 + t2141;
  t2085 = -1.*t110*t254*t354;
  t2088 = t312*t365;
  t2104 = t2085 + t2088;
  t2384 = t312*t110;
  t2385 = t254*t354*t365;
  t2387 = t2384 + t2385;
  t2398 = t80*t2387;
  t2416 = t110*t254*t354;
  t2424 = -1.*t312*t365;
  t2443 = t2416 + t2424;
  t2472 = t2443*t658;
  t2485 = t2398 + t2472;
  t2206 = t80*t2158;
  t2661 = t80*t2443;
  t2743 = -1.*t2443*t658;
  t2662 = -1.*t2387*t658;
  t2681 = t2661 + t2662;
  t952 = t312*t706*t71;
  t1028 = t697*t714;
  t1034 = t952 + t1028;
  t3001 = t706*t80*t365;
  t3011 = t706*t110*t658;
  t3028 = t3001 + t3011;
  t3120 = t706*t110*t80;
  t3122 = -1.*t706*t365*t658;
  t3132 = t3120 + t3122;
  t3152 = -1.*t706*t80*t365;
  t3156 = -1.*t706*t110*t658;
  t3158 = t3152 + t3156;
  t3161 = -1.*t914*t3158;
  t3165 = t3132*t714*t844;
  t3170 = t3161 + t3165;
  t699 = t71*t697;
  t784 = -1.*t312*t706*t714;
  t787 = t699 + t784;
  t1855 = -1.*t312*t71*t354;
  t1878 = t312*t706*t80*t365;
  t1884 = t312*t706*t110*t658;
  t1889 = t1878 + t1884;
  t1893 = t1889*t714;
  t1946 = t1855 + t1893;
  t1789 = t312*t706*t110*t80;
  t1808 = -1.*t312*t706*t365*t658;
  t1809 = t1789 + t1808;
  t1541 = t1451*t658;
  t1552 = t1078 + t1541;
  t1458 = t80*t1451;
  t1512 = t1458 + t1497;
  t1641 = -1.*t80*t382;
  t1712 = t1641 + t1497;
  t2199 = -1.*t706*t71*t254;
  t2214 = t2104*t658;
  t2222 = t2206 + t2214;
  t2226 = t2222*t714;
  t2254 = t2199 + t2226;
  t2123 = t80*t2104;
  t2170 = -1.*t2158*t658;
  t2182 = t2123 + t2170;
  t2538 = t71*t2485;
  t2564 = -1.*t706*t254*t714;
  t2573 = t2538 + t2564;
  t2895 = -1.*t71*t254*t354;
  t2897 = t706*t80*t254*t365;
  t2898 = t706*t110*t254*t658;
  t2900 = t2897 + t2898;
  t2902 = t2900*t714;
  t2906 = t2895 + t2902;
  t2862 = t706*t110*t80*t254;
  t2883 = -1.*t706*t254*t365*t658;
  t2884 = t2862 + t2883;
  t2779 = t2158*t658;
  t2781 = t2661 + t2779;
  t2744 = t2206 + t2743;
  t2816 = -1.*t80*t2387;
  t2830 = t2816 + t2743;
  t1073 = t914*t1034;
  t1255 = t1248*t844;
  t1302 = t1073 + t1255;
  t2620 = t706*t71*t254;
  t2644 = t2485*t714;
  t2647 = t2620 + t2644;
  t3039 = t71*t3028;
  t3061 = t354*t714;
  t3062 = t3039 + t3061;
  t3636 = t914*t3132*t714;
  t3654 = t3158*t844;
  t3655 = t3636 + t3654;
  t3247 = -1.*t706*t71;
  t3280 = -1.*t80*t354*t365;
  t3287 = -1.*t110*t354*t658;
  t3302 = t3280 + t3287;
  t3323 = t3302*t714;
  t3347 = t3247 + t3323;
  t3201 = -1.*t110*t80*t354;
  t3218 = t354*t365*t658;
  t3231 = t3201 + t3218;
  t3078 = -1.*t71*t354;
  t3092 = t3028*t714;
  t3106 = t3078 + t3092;
  t4343 = -1.*t80;
  t4358 = 1. + t4343;
  t4191 = -1.*t914;
  t4192 = 1. + t4191;
  t4194 = -0.08055*t4192;
  t4209 = -0.01004*t844;
  t4216 = 0. + t4194 + t4209;
  t3393 = t914*t1552*t714;
  t3409 = t1512*t844;
  t3410 = t3393 + t3409;
  t4427 = 0.07996*t658;
  t4461 = -1.*t71;
  t4463 = 1. + t4461;
  t4470 = 0.135*t4463;
  t4485 = 0.08055*t714;
  t4486 = 0. + t4470 + t4485;
  t4556 = -0.01004*t4192;
  t4557 = 0.08055*t844;
  t4563 = 0. + t4556 + t4557;
  t3430 = t914*t1248*t714;
  t3434 = t1712*t844;
  t3439 = t3430 + t3434;
  t4362 = 0.07996*t4358;
  t4374 = -0.135*t658;
  t4378 = 0. + t4362 + t4374;
  t4392 = 0.135*t4358;
  t4429 = 0. + t4392 + t4427;
  t4115 = 0.135*t714;
  t3379 = t914*t1946;
  t3385 = t1809*t844;
  t3386 = t3379 + t3385;
  t4860 = -0.08055*t4463;
  t4865 = 0. + t4860 + t4115;
  t3444 = t914*t2254;
  t3446 = t2182*t844;
  t3449 = t3444 + t3446;
  t3471 = t914*t1248;
  t3479 = -1.*t1034*t844;
  t3480 = t3471 + t3479;
  t4098 = 0.135*t71;
  t4102 = -0.08055*t714;
  t4110 = t4098 + t4102;
  t4114 = 0.08055*t71;
  t4129 = t4114 + t4115;
  t3526 = t914*t2781*t714;
  t3527 = t2744*t844;
  t3541 = t3526 + t3527;
  t4599 = -0.135*t80;
  t4625 = t4599 + t4427;
  t4642 = 0.07996*t80;
  t4657 = 0.135*t658;
  t4674 = t4642 + t4657;
  t3558 = t914*t2681*t714;
  t3575 = t2830*t844;
  t3576 = t3558 + t3575;
  t3509 = t914*t2906;
  t3511 = t2884*t844;
  t3516 = t3509 + t3511;
  t5130 = -0.01004*t914;
  t5135 = -0.08055*t844;
  t5197 = t5130 + t5135;
  t5212 = 0.08055*t914;
  t5238 = t5212 + t4209;
  t3587 = t914*t2681;
  t3594 = -1.*t2647*t844;
  t3615 = t3587 + t3594;
  t6366 = 0.135*t71*t3132;
  t6367 = t3132*t4486;
  t6376 = t3132*t714*t4216;
  t6386 = t3158*t4563;
  t6393 = -0.08055*t3655;
  t6400 = t914*t3158;
  t6452 = -1.*t3132*t714*t844;
  t6460 = t6400 + t6452;
  t6476 = -0.01004*t6460;
  t3691 = t914*t3132;
  t3697 = -1.*t3106*t844;
  t3730 = t3691 + t3697;
  t3666 = t914*t3347;
  t3669 = t3231*t844;
  t3672 = t3666 + t3669;
  p_output1[0]=(t2254*t844 - 1.*t2182*t914)*var2[3] + (t1946*t844 - 1.*t1809*t914)*var2[4] + (t1552*t714*t844 - 1.*t1512*t914)*var2[5] + (t1248*t714*t844 - 1.*t1712*t914)*var2[6] + t787*t844*var2[7] + t1302*var2[8];
  p_output1[1]=(t1034*t844 - 1.*t1248*t914)*var2[3] + (t2906*t844 - 1.*t2884*t914)*var2[4] + (t2781*t714*t844 - 1.*t2744*t914)*var2[5] + (t2681*t714*t844 - 1.*t2830*t914)*var2[6] + t2573*t844*var2[7] + (t2681*t844 + t2647*t914)*var2[8];
  p_output1[2]=(t3347*t844 - 1.*t3231*t914)*var2[4] + t3170*var2[5] + t3170*var2[6] + t3062*t844*var2[7] + (t3132*t844 + t3106*t914)*var2[8];
  p_output1[3]=0;
  p_output1[4]=t3449*var2[3] + t3386*var2[4] + t3410*var2[5] + t3439*var2[6] + t787*t914*var2[7] + t3480*var2[8];
  p_output1[5]=t1302*var2[3] + t3516*var2[4] + t3541*var2[5] + t3576*var2[6] + t2573*t914*var2[7] + t3615*var2[8];
  p_output1[6]=t3672*var2[4] + t3655*var2[5] + t3655*var2[6] + t3062*t914*var2[7] + t3730*var2[8];
  p_output1[7]=0;
  p_output1[8]=(t2564 - 1.*t2222*t71)*var2[3] + (-1.*t1889*t71 - 1.*t312*t354*t714)*var2[4] - 1.*t1552*t71*var2[5] - 1.*t1248*t71*var2[6] + t1034*var2[7];
  p_output1[9]=(-1.*t697*t71 + t312*t706*t714)*var2[3] + (-1.*t2900*t71 - 1.*t254*t354*t714)*var2[4] - 1.*t2781*t71*var2[5] - 1.*t2681*t71*var2[6] + t2647*var2[7];
  p_output1[10]=(-1.*t3302*t71 - 1.*t706*t714)*var2[4] - 1.*t3132*t71*var2[5] - 1.*t3132*t71*var2[6] + t3106*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t3449 + t2254*t4216 + t2104*t4378 + t2158*t4429 + t2222*t4486 + t2182*t4563 - 1.*t254*t4865*t706 + 0.135*(t2222*t71 + t254*t706*t714) - 0.01004*(-1.*t2254*t844 + t2182*t914))*var2[3] + (-0.08055*t3386 + t1946*t4216 + t1889*t4486 + t1809*t4563 - 1.*t312*t354*t4865 + t110*t312*t4378*t706 + t312*t365*t4429*t706 + 0.135*(t1889*t71 + t312*t354*t714) - 0.01004*(-1.*t1946*t844 + t1809*t914))*var2[4] + (-0.08055*t3410 + t1451*t4378 + t1552*t4486 + t1512*t4563 + t4429*t481 + 0.135*t1552*t71 + t1552*t4216*t714 - 0.01004*(-1.*t1552*t714*t844 + t1512*t914))*var2[5] + (-0.08055*t3439 + t1248*t4486 + t1712*t4563 + t382*t4674 + t4625*t481 + 0.135*t1248*t71 + t1248*t4216*t714 - 0.01004*(-1.*t1248*t714*t844 + t1712*t914))*var2[6] + (t4129*t697 + t312*t4110*t706 + 0.135*(-1.*t312*t706*t71 - 1.*t697*t714) + t4216*t787 + 0.01004*t787*t844 - 0.08055*t787*t914)*var2[7] + (-0.08055*t3480 + t1034*t5197 + t1248*t5238 - 0.01004*(-1.*t1248*t844 - 1.*t1034*t914))*var2[8];
  p_output1[13]=var2[1] + (-0.08055*t1302 - 0.01004*t3480 + t1034*t4216 + t382*t4429 + t1248*t4563 + t4378*t481 + t4486*t697 + t312*t4865*t706 + 0.135*t787)*var2[3] + (-0.08055*t3516 + t2906*t4216 + t2900*t4486 + t2884*t4563 - 1.*t254*t354*t4865 + t110*t254*t4378*t706 + t254*t365*t4429*t706 + 0.135*(t2900*t71 + t254*t354*t714) - 0.01004*(-1.*t2906*t844 + t2884*t914))*var2[4] + (-0.08055*t3541 + t2158*t4378 + t2443*t4429 + t2781*t4486 + t2744*t4563 + 0.135*t2781*t71 + t2781*t4216*t714 - 0.01004*(-1.*t2781*t714*t844 + t2744*t914))*var2[5] + (-0.08055*t3576 + t2681*t4486 + t2830*t4563 + t2443*t4625 + t2387*t4674 + 0.135*t2681*t71 + t2681*t4216*t714 - 0.01004*(-1.*t2681*t714*t844 + t2830*t914))*var2[6] + (t2485*t4129 + t2573*t4216 + t254*t4110*t706 + 0.135*(t2199 - 1.*t2485*t714) + 0.01004*t2573*t844 - 0.08055*t2573*t914)*var2[7] + (-0.08055*t3615 + t2647*t5197 + t2681*t5238 - 0.01004*(-1.*t2681*t844 - 1.*t2647*t914))*var2[8];
  p_output1[14]=var2[2] + (-0.08055*t3672 + t3347*t4216 - 1.*t110*t354*t4378 - 1.*t354*t365*t4429 + t3302*t4486 + t3231*t4563 - 1.*t4865*t706 + 0.135*(t3302*t71 + t706*t714) - 0.01004*(-1.*t3347*t844 + t3231*t914))*var2[4] + (t6366 + t6367 + t6376 + t6386 + t6393 + t6476 - 1.*t365*t4378*t706 + t110*t4429*t706)*var2[5] + (t6366 + t6367 + t6376 + t6386 + t6393 + t6476 + t110*t4625*t706 + t365*t4674*t706)*var2[6] + (-1.*t354*t4110 + t3028*t4129 + t3062*t4216 + 0.135*(t354*t71 - 1.*t3028*t714) + 0.01004*t3062*t844 - 0.08055*t3062*t914)*var2[7] + (-0.08055*t3730 + t3106*t5197 + t3132*t5238 - 0.01004*(-1.*t3132*t844 - 1.*t3106*t914))*var2[8];
  p_output1[15]=0;
}



void dT_LeftThighJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
