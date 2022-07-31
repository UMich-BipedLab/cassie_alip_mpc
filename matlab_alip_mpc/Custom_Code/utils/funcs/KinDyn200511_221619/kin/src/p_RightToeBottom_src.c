/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t180;
  double t626;
  double t633;
  double t634;
  double t639;
  double t709;
  double t769;
  double t717;
  double t773;
  double t210;
  double t286;
  double t392;
  double t508;
  double t738;
  double t820;
  double t831;
  double t1012;
  double t1036;
  double t1071;
  double t203;
  double t1182;
  double t1193;
  double t1234;
  double t1284;
  double t1304;
  double t1309;
  double t1384;
  double t1501;
  double t1545;
  double t1556;
  double t1806;
  double t1870;
  double t1898;
  double t1942;
  double t1943;
  double t1968;
  double t2001;
  double t2013;
  double t2015;
  double t2026;
  double t2218;
  double t2254;
  double t2258;
  double t2289;
  double t2290;
  double t2292;
  double t2332;
  double t2361;
  double t2377;
  double t2393;
  double t2494;
  double t2518;
  double t2527;
  double t2533;
  double t2538;
  double t2551;
  double t2569;
  double t2602;
  double t2618;
  double t2620;
  double t2725;
  double t2750;
  double t2798;
  double t2826;
  double t2829;
  double t2872;
  double t2888;
  double t2954;
  double t2966;
  double t2979;
  double t3039;
  double t3052;
  double t3055;
  double t475;
  double t555;
  double t561;
  double t637;
  double t671;
  double t694;
  double t884;
  double t961;
  double t999;
  double t1118;
  double t1166;
  double t1167;
  double t3194;
  double t3234;
  double t3242;
  double t3256;
  double t3276;
  double t3299;
  double t1356;
  double t1406;
  double t1408;
  double t3324;
  double t3325;
  double t3354;
  double t1770;
  double t1778;
  double t1795;
  double t1970;
  double t2003;
  double t2010;
  double t3405;
  double t3410;
  double t3432;
  double t3507;
  double t3518;
  double t3521;
  double t2145;
  double t2146;
  double t2202;
  double t2295;
  double t2335;
  double t2350;
  double t3547;
  double t3559;
  double t3569;
  double t3589;
  double t3614;
  double t3634;
  double t2444;
  double t2448;
  double t2474;
  double t2568;
  double t2591;
  double t2599;
  double t3661;
  double t3686;
  double t3718;
  double t3735;
  double t3737;
  double t3743;
  double t2679;
  double t2689;
  double t2693;
  double t2885;
  double t2946;
  double t2948;
  double t3799;
  double t3803;
  double t3814;
  double t3903;
  double t3910;
  double t3918;
  double t3018;
  double t3020;
  double t3032;
  double t3959;
  double t3962;
  double t3965;
  double t3989;
  double t3998;
  double t4021;
  double t4228;
  double t4262;
  double t4271;
  double t4292;
  double t4301;
  double t4302;
  double t4323;
  double t4327;
  double t4339;
  double t4413;
  double t4438;
  double t4442;
  double t4451;
  double t4471;
  double t4472;
  double t4484;
  double t4490;
  double t4492;
  double t4507;
  double t4511;
  double t4513;
  double t4596;
  double t4601;
  double t4608;
  double t4619;
  double t4637;
  double t4640;
  double t4666;
  double t4667;
  double t4676;
  double t4679;
  double t4683;
  double t4684;
  t180 = Cos(var1[3]);
  t626 = Cos(var1[13]);
  t633 = -1.*t626;
  t634 = 1. + t633;
  t639 = Sin(var1[13]);
  t709 = Cos(var1[5]);
  t769 = Sin(var1[3]);
  t717 = Sin(var1[4]);
  t773 = Sin(var1[5]);
  t210 = Cos(var1[14]);
  t286 = -1.*t210;
  t392 = 1. + t286;
  t508 = Sin(var1[14]);
  t738 = t180*t709*t717;
  t820 = t769*t773;
  t831 = t738 + t820;
  t1012 = -1.*t709*t769;
  t1036 = t180*t717*t773;
  t1071 = t1012 + t1036;
  t203 = Cos(var1[4]);
  t1182 = t639*t831;
  t1193 = t626*t1071;
  t1234 = t1182 + t1193;
  t1284 = Cos(var1[15]);
  t1304 = -1.*t1284;
  t1309 = 1. + t1304;
  t1384 = Sin(var1[15]);
  t1501 = t626*t831;
  t1545 = -1.*t639*t1071;
  t1556 = t1501 + t1545;
  t1806 = t210*t180*t203;
  t1870 = t508*t1234;
  t1898 = t1806 + t1870;
  t1942 = Cos(var1[16]);
  t1943 = -1.*t1942;
  t1968 = 1. + t1943;
  t2001 = Sin(var1[16]);
  t2013 = t1384*t1556;
  t2015 = t1284*t1898;
  t2026 = t2013 + t2015;
  t2218 = t1284*t1556;
  t2254 = -1.*t1384*t1898;
  t2258 = t2218 + t2254;
  t2289 = Cos(var1[17]);
  t2290 = -1.*t2289;
  t2292 = 1. + t2290;
  t2332 = Sin(var1[17]);
  t2361 = -1.*t2001*t2026;
  t2377 = t1942*t2258;
  t2393 = t2361 + t2377;
  t2494 = t1942*t2026;
  t2518 = t2001*t2258;
  t2527 = t2494 + t2518;
  t2533 = Cos(var1[18]);
  t2538 = -1.*t2533;
  t2551 = 1. + t2538;
  t2569 = Sin(var1[18]);
  t2602 = t2332*t2393;
  t2618 = t2289*t2527;
  t2620 = t2602 + t2618;
  t2725 = t2289*t2393;
  t2750 = -1.*t2332*t2527;
  t2798 = t2725 + t2750;
  t2826 = Cos(var1[19]);
  t2829 = -1.*t2826;
  t2872 = 1. + t2829;
  t2888 = Sin(var1[19]);
  t2954 = -1.*t2569*t2620;
  t2966 = t2533*t2798;
  t2979 = t2954 + t2966;
  t3039 = t2533*t2620;
  t3052 = t2569*t2798;
  t3055 = t3039 + t3052;
  t475 = -0.08055*t392;
  t555 = -0.135*t508;
  t561 = 0. + t475 + t555;
  t637 = 0.07996*t634;
  t671 = 0.135*t639;
  t694 = 0. + t637 + t671;
  t884 = -0.135*t634;
  t961 = 0.07996*t639;
  t999 = 0. + t884 + t961;
  t1118 = -0.135*t392;
  t1166 = 0.08055*t508;
  t1167 = 0. + t1118 + t1166;
  t3194 = t709*t769*t717;
  t3234 = -1.*t180*t773;
  t3242 = t3194 + t3234;
  t3256 = t180*t709;
  t3276 = t769*t717*t773;
  t3299 = t3256 + t3276;
  t1356 = -0.01004*t1309;
  t1406 = 0.08055*t1384;
  t1408 = 0. + t1356 + t1406;
  t3324 = t639*t3242;
  t3325 = t626*t3299;
  t3354 = t3324 + t3325;
  t1770 = -0.08055*t1309;
  t1778 = -0.01004*t1384;
  t1795 = 0. + t1770 + t1778;
  t1970 = -0.08055*t1968;
  t2003 = -0.13004*t2001;
  t2010 = 0. + t1970 + t2003;
  t3405 = t626*t3242;
  t3410 = -1.*t639*t3299;
  t3432 = t3405 + t3410;
  t3507 = t210*t203*t769;
  t3518 = t508*t3354;
  t3521 = t3507 + t3518;
  t2145 = -0.13004*t1968;
  t2146 = 0.08055*t2001;
  t2202 = 0. + t2145 + t2146;
  t2295 = -0.19074*t2292;
  t2335 = 0.03315*t2332;
  t2350 = 0. + t2295 + t2335;
  t3547 = t1384*t3432;
  t3559 = t1284*t3521;
  t3569 = t3547 + t3559;
  t3589 = t1284*t3432;
  t3614 = -1.*t1384*t3521;
  t3634 = t3589 + t3614;
  t2444 = -0.03315*t2292;
  t2448 = -0.19074*t2332;
  t2474 = 0. + t2444 + t2448;
  t2568 = -0.01315*t2551;
  t2591 = -0.62554*t2569;
  t2599 = 0. + t2568 + t2591;
  t3661 = -1.*t2001*t3569;
  t3686 = t1942*t3634;
  t3718 = t3661 + t3686;
  t3735 = t1942*t3569;
  t3737 = t2001*t3634;
  t3743 = t3735 + t3737;
  t2679 = -0.62554*t2551;
  t2689 = 0.01315*t2569;
  t2693 = 0. + t2679 + t2689;
  t2885 = -1.03354*t2872;
  t2946 = 0.05315*t2888;
  t2948 = 0. + t2885 + t2946;
  t3799 = t2332*t3718;
  t3803 = t2289*t3743;
  t3814 = t3799 + t3803;
  t3903 = t2289*t3718;
  t3910 = -1.*t2332*t3743;
  t3918 = t3903 + t3910;
  t3018 = -0.05315*t2872;
  t3020 = -1.03354*t2888;
  t3032 = 0. + t3018 + t3020;
  t3959 = -1.*t2569*t3814;
  t3962 = t2533*t3918;
  t3965 = t3959 + t3962;
  t3989 = t2533*t3814;
  t3998 = t2569*t3918;
  t4021 = t3989 + t3998;
  t4228 = t203*t709*t639;
  t4262 = t626*t203*t773;
  t4271 = t4228 + t4262;
  t4292 = t626*t203*t709;
  t4301 = -1.*t203*t639*t773;
  t4302 = t4292 + t4301;
  t4323 = -1.*t210*t717;
  t4327 = t508*t4271;
  t4339 = t4323 + t4327;
  t4413 = t1384*t4302;
  t4438 = t1284*t4339;
  t4442 = t4413 + t4438;
  t4451 = t1284*t4302;
  t4471 = -1.*t1384*t4339;
  t4472 = t4451 + t4471;
  t4484 = -1.*t2001*t4442;
  t4490 = t1942*t4472;
  t4492 = t4484 + t4490;
  t4507 = t1942*t4442;
  t4511 = t2001*t4472;
  t4513 = t4507 + t4511;
  t4596 = t2332*t4492;
  t4601 = t2289*t4513;
  t4608 = t4596 + t4601;
  t4619 = t2289*t4492;
  t4637 = -1.*t2332*t4513;
  t4640 = t4619 + t4637;
  t4666 = -1.*t2569*t4608;
  t4667 = t2533*t4640;
  t4676 = t4666 + t4667;
  t4679 = t2533*t4608;
  t4683 = t2569*t4640;
  t4684 = t4679 + t4683;
  p_output1[0]=0. + t1167*t1234 + t1408*t1556 + t1795*t1898 + t2010*t2026 + t2202*t2258 + t2350*t2393 + t2474*t2527 + t2599*t2620 + t2693*t2798 + t2948*t2979 + t3032*t3055 - 0.00095*(t2888*t2979 + t2826*t3055) - 1.05124*(t2826*t2979 - 1.*t2888*t3055) - 0.1305*(t1234*t210 - 1.*t180*t203*t508) + t180*t203*t561 + t694*t831 + t1071*t999 + var1[0];
  p_output1[1]=0. + t1167*t3354 + t1408*t3432 + t1795*t3521 + t2010*t3569 + t2202*t3634 + t2350*t3718 + t2474*t3743 + t2599*t3814 + t2693*t3918 + t2948*t3965 + t3032*t4021 - 0.00095*(t2888*t3965 + t2826*t4021) - 1.05124*(t2826*t3965 - 1.*t2888*t4021) + t3242*t694 + t203*t561*t769 - 0.1305*(t210*t3354 - 1.*t203*t508*t769) + t3299*t999 + var1[1];
  p_output1[2]=0. + t1167*t4271 + t1408*t4302 + t1795*t4339 + t2010*t4442 + t2202*t4472 + t2350*t4492 + t2474*t4513 + t2599*t4608 + t2693*t4640 + t2948*t4676 + t3032*t4684 - 0.00095*(t2888*t4676 + t2826*t4684) - 1.05124*(t2826*t4676 - 1.*t2888*t4684) + t203*t694*t709 - 1.*t561*t717 - 0.1305*(t210*t4271 + t508*t717) + t203*t773*t999 + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
