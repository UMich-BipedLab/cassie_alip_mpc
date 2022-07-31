/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToe_src.h"

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
  double t16;
  double t1261;
  double t1418;
  double t1648;
  double t1842;
  double t1861;
  double t1936;
  double t1871;
  double t2065;
  double t234;
  double t481;
  double t651;
  double t803;
  double t1883;
  double t2088;
  double t2095;
  double t2157;
  double t2265;
  double t2293;
  double t190;
  double t2473;
  double t2549;
  double t2551;
  double t2580;
  double t2613;
  double t2616;
  double t2650;
  double t2768;
  double t2835;
  double t2857;
  double t2976;
  double t3025;
  double t3027;
  double t3068;
  double t3123;
  double t3128;
  double t3182;
  double t3417;
  double t3422;
  double t3469;
  double t3745;
  double t3850;
  double t3876;
  double t3985;
  double t3993;
  double t4007;
  double t4081;
  double t4188;
  double t4189;
  double t4232;
  double t4546;
  double t4650;
  double t4676;
  double t4837;
  double t4839;
  double t4851;
  double t4985;
  double t5165;
  double t5167;
  double t5176;
  double t5235;
  double t5274;
  double t5295;
  double t5369;
  double t5370;
  double t5371;
  double t5393;
  double t5512;
  double t5540;
  double t5576;
  double t5714;
  double t5715;
  double t5748;
  double t727;
  double t1104;
  double t1135;
  double t1760;
  double t1854;
  double t1859;
  double t2122;
  double t2124;
  double t2149;
  double t2374;
  double t2397;
  double t2448;
  double t6329;
  double t6441;
  double t6442;
  double t6565;
  double t6573;
  double t6607;
  double t2630;
  double t2713;
  double t2750;
  double t6669;
  double t6694;
  double t6722;
  double t2911;
  double t2915;
  double t2927;
  double t3159;
  double t3374;
  double t3382;
  double t6806;
  double t6814;
  double t6837;
  double t6947;
  double t6984;
  double t6991;
  double t3472;
  double t3621;
  double t3626;
  double t4045;
  double t4156;
  double t4165;
  double t7073;
  double t7091;
  double t7124;
  double t7154;
  double t7180;
  double t7181;
  double t4408;
  double t4453;
  double t4492;
  double t4978;
  double t4992;
  double t5094;
  double t7244;
  double t7342;
  double t7343;
  double t7347;
  double t7358;
  double t7378;
  double t5200;
  double t5204;
  double t5216;
  double t5380;
  double t5415;
  double t5493;
  double t7456;
  double t7481;
  double t7494;
  double t7538;
  double t7573;
  double t7630;
  double t5666;
  double t5675;
  double t5712;
  double t7706;
  double t7707;
  double t7720;
  double t7731;
  double t7734;
  double t7744;
  double t8046;
  double t8057;
  double t8113;
  double t8118;
  double t8135;
  double t8156;
  double t8278;
  double t8297;
  double t8316;
  double t8358;
  double t8369;
  double t8384;
  double t8402;
  double t8432;
  double t8433;
  double t8466;
  double t8494;
  double t8514;
  double t8535;
  double t8564;
  double t8576;
  double t8598;
  double t8615;
  double t8616;
  double t8624;
  double t8638;
  double t8667;
  double t8699;
  double t8728;
  double t8739;
  double t8755;
  double t8760;
  double t8771;
  t16 = Cos(var1[3]);
  t1261 = Cos(var1[13]);
  t1418 = -1.*t1261;
  t1648 = 1. + t1418;
  t1842 = Sin(var1[13]);
  t1861 = Cos(var1[5]);
  t1936 = Sin(var1[3]);
  t1871 = Sin(var1[4]);
  t2065 = Sin(var1[5]);
  t234 = Cos(var1[14]);
  t481 = -1.*t234;
  t651 = 1. + t481;
  t803 = Sin(var1[14]);
  t1883 = t16*t1861*t1871;
  t2088 = t1936*t2065;
  t2095 = t1883 + t2088;
  t2157 = -1.*t1861*t1936;
  t2265 = t16*t1871*t2065;
  t2293 = t2157 + t2265;
  t190 = Cos(var1[4]);
  t2473 = t1842*t2095;
  t2549 = t1261*t2293;
  t2551 = t2473 + t2549;
  t2580 = Cos(var1[15]);
  t2613 = -1.*t2580;
  t2616 = 1. + t2613;
  t2650 = Sin(var1[15]);
  t2768 = t1261*t2095;
  t2835 = -1.*t1842*t2293;
  t2857 = t2768 + t2835;
  t2976 = t234*t16*t190;
  t3025 = t803*t2551;
  t3027 = t2976 + t3025;
  t3068 = Cos(var1[16]);
  t3123 = -1.*t3068;
  t3128 = 1. + t3123;
  t3182 = Sin(var1[16]);
  t3417 = t2650*t2857;
  t3422 = t2580*t3027;
  t3469 = t3417 + t3422;
  t3745 = t2580*t2857;
  t3850 = -1.*t2650*t3027;
  t3876 = t3745 + t3850;
  t3985 = Cos(var1[17]);
  t3993 = -1.*t3985;
  t4007 = 1. + t3993;
  t4081 = Sin(var1[17]);
  t4188 = -1.*t3182*t3469;
  t4189 = t3068*t3876;
  t4232 = t4188 + t4189;
  t4546 = t3068*t3469;
  t4650 = t3182*t3876;
  t4676 = t4546 + t4650;
  t4837 = Cos(var1[18]);
  t4839 = -1.*t4837;
  t4851 = 1. + t4839;
  t4985 = Sin(var1[18]);
  t5165 = t4081*t4232;
  t5167 = t3985*t4676;
  t5176 = t5165 + t5167;
  t5235 = t3985*t4232;
  t5274 = -1.*t4081*t4676;
  t5295 = t5235 + t5274;
  t5369 = Cos(var1[19]);
  t5370 = -1.*t5369;
  t5371 = 1. + t5370;
  t5393 = Sin(var1[19]);
  t5512 = -1.*t4985*t5176;
  t5540 = t4837*t5295;
  t5576 = t5512 + t5540;
  t5714 = t4837*t5176;
  t5715 = t4985*t5295;
  t5748 = t5714 + t5715;
  t727 = -0.08055*t651;
  t1104 = -0.135*t803;
  t1135 = 0. + t727 + t1104;
  t1760 = 0.07996*t1648;
  t1854 = 0.135*t1842;
  t1859 = 0. + t1760 + t1854;
  t2122 = -0.135*t1648;
  t2124 = 0.07996*t1842;
  t2149 = 0. + t2122 + t2124;
  t2374 = -0.135*t651;
  t2397 = 0.08055*t803;
  t2448 = 0. + t2374 + t2397;
  t6329 = t1861*t1936*t1871;
  t6441 = -1.*t16*t2065;
  t6442 = t6329 + t6441;
  t6565 = t16*t1861;
  t6573 = t1936*t1871*t2065;
  t6607 = t6565 + t6573;
  t2630 = -0.01004*t2616;
  t2713 = 0.08055*t2650;
  t2750 = 0. + t2630 + t2713;
  t6669 = t1842*t6442;
  t6694 = t1261*t6607;
  t6722 = t6669 + t6694;
  t2911 = -0.08055*t2616;
  t2915 = -0.01004*t2650;
  t2927 = 0. + t2911 + t2915;
  t3159 = -0.08055*t3128;
  t3374 = -0.13004*t3182;
  t3382 = 0. + t3159 + t3374;
  t6806 = t1261*t6442;
  t6814 = -1.*t1842*t6607;
  t6837 = t6806 + t6814;
  t6947 = t234*t190*t1936;
  t6984 = t803*t6722;
  t6991 = t6947 + t6984;
  t3472 = -0.13004*t3128;
  t3621 = 0.08055*t3182;
  t3626 = 0. + t3472 + t3621;
  t4045 = -0.19074*t4007;
  t4156 = 0.03315*t4081;
  t4165 = 0. + t4045 + t4156;
  t7073 = t2650*t6837;
  t7091 = t2580*t6991;
  t7124 = t7073 + t7091;
  t7154 = t2580*t6837;
  t7180 = -1.*t2650*t6991;
  t7181 = t7154 + t7180;
  t4408 = -0.03315*t4007;
  t4453 = -0.19074*t4081;
  t4492 = 0. + t4408 + t4453;
  t4978 = -0.01315*t4851;
  t4992 = -0.62554*t4985;
  t5094 = 0. + t4978 + t4992;
  t7244 = -1.*t3182*t7124;
  t7342 = t3068*t7181;
  t7343 = t7244 + t7342;
  t7347 = t3068*t7124;
  t7358 = t3182*t7181;
  t7378 = t7347 + t7358;
  t5200 = -0.62554*t4851;
  t5204 = 0.01315*t4985;
  t5216 = 0. + t5200 + t5204;
  t5380 = -1.03354*t5371;
  t5415 = 0.05315*t5393;
  t5493 = 0. + t5380 + t5415;
  t7456 = t4081*t7343;
  t7481 = t3985*t7378;
  t7494 = t7456 + t7481;
  t7538 = t3985*t7343;
  t7573 = -1.*t4081*t7378;
  t7630 = t7538 + t7573;
  t5666 = -0.05315*t5371;
  t5675 = -1.03354*t5393;
  t5712 = 0. + t5666 + t5675;
  t7706 = -1.*t4985*t7494;
  t7707 = t4837*t7630;
  t7720 = t7706 + t7707;
  t7731 = t4837*t7494;
  t7734 = t4985*t7630;
  t7744 = t7731 + t7734;
  t8046 = t190*t1861*t1842;
  t8057 = t1261*t190*t2065;
  t8113 = t8046 + t8057;
  t8118 = t1261*t190*t1861;
  t8135 = -1.*t190*t1842*t2065;
  t8156 = t8118 + t8135;
  t8278 = -1.*t234*t1871;
  t8297 = t803*t8113;
  t8316 = t8278 + t8297;
  t8358 = t2650*t8156;
  t8369 = t2580*t8316;
  t8384 = t8358 + t8369;
  t8402 = t2580*t8156;
  t8432 = -1.*t2650*t8316;
  t8433 = t8402 + t8432;
  t8466 = -1.*t3182*t8384;
  t8494 = t3068*t8433;
  t8514 = t8466 + t8494;
  t8535 = t3068*t8384;
  t8564 = t3182*t8433;
  t8576 = t8535 + t8564;
  t8598 = t4081*t8514;
  t8615 = t3985*t8576;
  t8616 = t8598 + t8615;
  t8624 = t3985*t8514;
  t8638 = -1.*t4081*t8576;
  t8667 = t8624 + t8638;
  t8699 = -1.*t4985*t8616;
  t8728 = t4837*t8667;
  t8739 = t8699 + t8728;
  t8755 = t4837*t8616;
  t8760 = t4985*t8667;
  t8771 = t8755 + t8760;
  p_output1[0]=0. + t1135*t16*t190 + t1859*t2095 + t2149*t2293 + t2448*t2551 + t2750*t2857 + t2927*t3027 + t3382*t3469 + t3626*t3876 + t4165*t4232 + t4492*t4676 + t5094*t5176 + t5216*t5295 + t5493*t5576 + t5712*t5748 - 0.02565*(t5393*t5576 + t5369*t5748) - 1.03824*(t5369*t5576 - 1.*t5393*t5748) - 0.1306*(t234*t2551 - 1.*t16*t190*t803) + var1[0];
  p_output1[1]=0. + t1135*t190*t1936 + t1859*t6442 + t2149*t6607 + t2448*t6722 + t2750*t6837 + t2927*t6991 + t3382*t7124 + t3626*t7181 + t4165*t7343 + t4492*t7378 + t5094*t7494 + t5216*t7630 + t5493*t7720 + t5712*t7744 - 0.02565*(t5393*t7720 + t5369*t7744) - 1.03824*(t5369*t7720 - 1.*t5393*t7744) - 0.1306*(t234*t6722 - 1.*t190*t1936*t803) + var1[1];
  p_output1[2]=0. - 1.*t1135*t1871 + t1859*t1861*t190 + t190*t2065*t2149 + t2448*t8113 - 0.1306*(t1871*t803 + t234*t8113) + t2750*t8156 + t2927*t8316 + t3382*t8384 + t3626*t8433 + t4165*t8514 + t4492*t8576 + t5094*t8616 + t5216*t8667 + t5493*t8739 + t5712*t8771 - 0.02565*(t5393*t8739 + t5369*t8771) - 1.03824*(t5369*t8739 - 1.*t5393*t8771) + var1[2];
}



void p_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
