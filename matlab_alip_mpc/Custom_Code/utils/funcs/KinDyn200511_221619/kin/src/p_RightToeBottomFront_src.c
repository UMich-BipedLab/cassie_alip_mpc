/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottomFront_src.h"

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
  double t30;
  double t602;
  double t620;
  double t664;
  double t765;
  double t775;
  double t813;
  double t779;
  double t815;
  double t155;
  double t162;
  double t214;
  double t373;
  double t791;
  double t822;
  double t852;
  double t950;
  double t974;
  double t996;
  double t136;
  double t1150;
  double t1173;
  double t1174;
  double t1204;
  double t1219;
  double t1227;
  double t1318;
  double t1358;
  double t1367;
  double t1371;
  double t1613;
  double t1616;
  double t1622;
  double t1657;
  double t1662;
  double t1694;
  double t1790;
  double t1848;
  double t1864;
  double t1865;
  double t1891;
  double t1906;
  double t1911;
  double t2030;
  double t2031;
  double t2042;
  double t2090;
  double t2121;
  double t2125;
  double t2133;
  double t2278;
  double t2299;
  double t2316;
  double t2381;
  double t2395;
  double t2421;
  double t2469;
  double t2581;
  double t2591;
  double t2596;
  double t2689;
  double t2707;
  double t2709;
  double t2760;
  double t2834;
  double t2912;
  double t2918;
  double t2943;
  double t2956;
  double t2991;
  double t3079;
  double t3084;
  double t3085;
  double t312;
  double t405;
  double t442;
  double t717;
  double t767;
  double t772;
  double t909;
  double t924;
  double t933;
  double t1120;
  double t1128;
  double t1132;
  double t3334;
  double t3343;
  double t3359;
  double t3370;
  double t3373;
  double t3374;
  double t1304;
  double t1323;
  double t1339;
  double t3417;
  double t3419;
  double t3443;
  double t1531;
  double t1560;
  double t1591;
  double t1726;
  double t1826;
  double t1846;
  double t3470;
  double t3487;
  double t3490;
  double t3542;
  double t3567;
  double t3573;
  double t1882;
  double t1883;
  double t1886;
  double t2089;
  double t2111;
  double t2113;
  double t3618;
  double t3633;
  double t3634;
  double t3636;
  double t3647;
  double t3661;
  double t2184;
  double t2226;
  double t2241;
  double t2448;
  double t2492;
  double t2546;
  double t3678;
  double t3688;
  double t3706;
  double t3723;
  double t3734;
  double t3736;
  double t2636;
  double t2637;
  double t2654;
  double t2916;
  double t2930;
  double t2934;
  double t3787;
  double t3809;
  double t3825;
  double t3827;
  double t3845;
  double t3894;
  double t3041;
  double t3052;
  double t3068;
  double t3917;
  double t3931;
  double t3937;
  double t3953;
  double t3955;
  double t4028;
  double t4219;
  double t4224;
  double t4232;
  double t4270;
  double t4293;
  double t4309;
  double t4367;
  double t4368;
  double t4397;
  double t4405;
  double t4410;
  double t4439;
  double t4445;
  double t4452;
  double t4457;
  double t4481;
  double t4524;
  double t4539;
  double t4544;
  double t4552;
  double t4553;
  double t4564;
  double t4569;
  double t4575;
  double t4589;
  double t4602;
  double t4604;
  double t4618;
  double t4624;
  double t4655;
  double t4661;
  double t4663;
  double t4674;
  t30 = Cos(var1[3]);
  t602 = Cos(var1[13]);
  t620 = -1.*t602;
  t664 = 1. + t620;
  t765 = Sin(var1[13]);
  t775 = Cos(var1[5]);
  t813 = Sin(var1[3]);
  t779 = Sin(var1[4]);
  t815 = Sin(var1[5]);
  t155 = Cos(var1[14]);
  t162 = -1.*t155;
  t214 = 1. + t162;
  t373 = Sin(var1[14]);
  t791 = t30*t775*t779;
  t822 = t813*t815;
  t852 = t791 + t822;
  t950 = -1.*t775*t813;
  t974 = t30*t779*t815;
  t996 = t950 + t974;
  t136 = Cos(var1[4]);
  t1150 = t765*t852;
  t1173 = t602*t996;
  t1174 = t1150 + t1173;
  t1204 = Cos(var1[15]);
  t1219 = -1.*t1204;
  t1227 = 1. + t1219;
  t1318 = Sin(var1[15]);
  t1358 = t602*t852;
  t1367 = -1.*t765*t996;
  t1371 = t1358 + t1367;
  t1613 = t155*t30*t136;
  t1616 = t373*t1174;
  t1622 = t1613 + t1616;
  t1657 = Cos(var1[16]);
  t1662 = -1.*t1657;
  t1694 = 1. + t1662;
  t1790 = Sin(var1[16]);
  t1848 = t1318*t1371;
  t1864 = t1204*t1622;
  t1865 = t1848 + t1864;
  t1891 = t1204*t1371;
  t1906 = -1.*t1318*t1622;
  t1911 = t1891 + t1906;
  t2030 = Cos(var1[17]);
  t2031 = -1.*t2030;
  t2042 = 1. + t2031;
  t2090 = Sin(var1[17]);
  t2121 = -1.*t1790*t1865;
  t2125 = t1657*t1911;
  t2133 = t2121 + t2125;
  t2278 = t1657*t1865;
  t2299 = t1790*t1911;
  t2316 = t2278 + t2299;
  t2381 = Cos(var1[18]);
  t2395 = -1.*t2381;
  t2421 = 1. + t2395;
  t2469 = Sin(var1[18]);
  t2581 = t2090*t2133;
  t2591 = t2030*t2316;
  t2596 = t2581 + t2591;
  t2689 = t2030*t2133;
  t2707 = -1.*t2090*t2316;
  t2709 = t2689 + t2707;
  t2760 = Cos(var1[19]);
  t2834 = -1.*t2760;
  t2912 = 1. + t2834;
  t2918 = Sin(var1[19]);
  t2943 = -1.*t2469*t2596;
  t2956 = t2381*t2709;
  t2991 = t2943 + t2956;
  t3079 = t2381*t2596;
  t3084 = t2469*t2709;
  t3085 = t3079 + t3084;
  t312 = -0.08055*t214;
  t405 = -0.135*t373;
  t442 = 0. + t312 + t405;
  t717 = 0.07996*t664;
  t767 = 0.135*t765;
  t772 = 0. + t717 + t767;
  t909 = -0.135*t664;
  t924 = 0.07996*t765;
  t933 = 0. + t909 + t924;
  t1120 = -0.135*t214;
  t1128 = 0.08055*t373;
  t1132 = 0. + t1120 + t1128;
  t3334 = t775*t813*t779;
  t3343 = -1.*t30*t815;
  t3359 = t3334 + t3343;
  t3370 = t30*t775;
  t3373 = t813*t779*t815;
  t3374 = t3370 + t3373;
  t1304 = -0.01004*t1227;
  t1323 = 0.08055*t1318;
  t1339 = 0. + t1304 + t1323;
  t3417 = t765*t3359;
  t3419 = t602*t3374;
  t3443 = t3417 + t3419;
  t1531 = -0.08055*t1227;
  t1560 = -0.01004*t1318;
  t1591 = 0. + t1531 + t1560;
  t1726 = -0.08055*t1694;
  t1826 = -0.13004*t1790;
  t1846 = 0. + t1726 + t1826;
  t3470 = t602*t3359;
  t3487 = -1.*t765*t3374;
  t3490 = t3470 + t3487;
  t3542 = t155*t136*t813;
  t3567 = t373*t3443;
  t3573 = t3542 + t3567;
  t1882 = -0.13004*t1694;
  t1883 = 0.08055*t1790;
  t1886 = 0. + t1882 + t1883;
  t2089 = -0.19074*t2042;
  t2111 = 0.03315*t2090;
  t2113 = 0. + t2089 + t2111;
  t3618 = t1318*t3490;
  t3633 = t1204*t3573;
  t3634 = t3618 + t3633;
  t3636 = t1204*t3490;
  t3647 = -1.*t1318*t3573;
  t3661 = t3636 + t3647;
  t2184 = -0.03315*t2042;
  t2226 = -0.19074*t2090;
  t2241 = 0. + t2184 + t2226;
  t2448 = -0.01315*t2421;
  t2492 = -0.62554*t2469;
  t2546 = 0. + t2448 + t2492;
  t3678 = -1.*t1790*t3634;
  t3688 = t1657*t3661;
  t3706 = t3678 + t3688;
  t3723 = t1657*t3634;
  t3734 = t1790*t3661;
  t3736 = t3723 + t3734;
  t2636 = -0.62554*t2421;
  t2637 = 0.01315*t2469;
  t2654 = 0. + t2636 + t2637;
  t2916 = -1.03354*t2912;
  t2930 = 0.05315*t2918;
  t2934 = 0. + t2916 + t2930;
  t3787 = t2090*t3706;
  t3809 = t2030*t3736;
  t3825 = t3787 + t3809;
  t3827 = t2030*t3706;
  t3845 = -1.*t2090*t3736;
  t3894 = t3827 + t3845;
  t3041 = -0.05315*t2912;
  t3052 = -1.03354*t2918;
  t3068 = 0. + t3041 + t3052;
  t3917 = -1.*t2469*t3825;
  t3931 = t2381*t3894;
  t3937 = t3917 + t3931;
  t3953 = t2381*t3825;
  t3955 = t2469*t3894;
  t4028 = t3953 + t3955;
  t4219 = t136*t775*t765;
  t4224 = t602*t136*t815;
  t4232 = t4219 + t4224;
  t4270 = t602*t136*t775;
  t4293 = -1.*t136*t765*t815;
  t4309 = t4270 + t4293;
  t4367 = -1.*t155*t779;
  t4368 = t373*t4232;
  t4397 = t4367 + t4368;
  t4405 = t1318*t4309;
  t4410 = t1204*t4397;
  t4439 = t4405 + t4410;
  t4445 = t1204*t4309;
  t4452 = -1.*t1318*t4397;
  t4457 = t4445 + t4452;
  t4481 = -1.*t1790*t4439;
  t4524 = t1657*t4457;
  t4539 = t4481 + t4524;
  t4544 = t1657*t4439;
  t4552 = t1790*t4457;
  t4553 = t4544 + t4552;
  t4564 = t2090*t4539;
  t4569 = t2030*t4553;
  t4575 = t4564 + t4569;
  t4589 = t2030*t4539;
  t4602 = -1.*t2090*t4553;
  t4604 = t4589 + t4602;
  t4618 = -1.*t2469*t4575;
  t4624 = t2381*t4604;
  t4655 = t4618 + t4624;
  t4661 = t2381*t4575;
  t4663 = t2469*t4604;
  t4674 = t4661 + t4663;
  p_output1[0]=0. + t1132*t1174 + t1339*t1371 + t1591*t1622 + t1846*t1865 + t1886*t1911 + t2113*t2133 + t2241*t2316 + t2546*t2596 + t2654*t2709 + t2934*t2991 + t3068*t3085 + 0.046027*(t2918*t2991 + t2760*t3085) - 0.979698*(t2760*t2991 - 1.*t2918*t3085) - 0.1305*(t1174*t155 - 1.*t136*t30*t373) + t136*t30*t442 + t772*t852 + t933*t996 + var1[0];
  p_output1[1]=0. + t1132*t3443 + t1339*t3490 + t1591*t3573 + t1846*t3634 + t1886*t3661 + t2113*t3706 + t2241*t3736 + t2546*t3825 + t2654*t3894 + t2934*t3937 + t3068*t4028 + 0.046027*(t2918*t3937 + t2760*t4028) - 0.979698*(t2760*t3937 - 1.*t2918*t4028) + t3359*t772 + t136*t442*t813 - 0.1305*(t155*t3443 - 1.*t136*t373*t813) + t3374*t933 + var1[1];
  p_output1[2]=0. + t1132*t4232 + t1339*t4309 + t1591*t4397 + t1846*t4439 + t1886*t4457 + t2113*t4539 + t2241*t4553 + t2546*t4575 + t2654*t4604 + t2934*t4655 + t3068*t4674 + 0.046027*(t2918*t4655 + t2760*t4674) - 0.979698*(t2760*t4655 - 1.*t2918*t4674) + t136*t772*t775 - 1.*t442*t779 - 0.1305*(t155*t4232 + t373*t779) + t136*t815*t933 + var1[2];
}



void p_RightToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
