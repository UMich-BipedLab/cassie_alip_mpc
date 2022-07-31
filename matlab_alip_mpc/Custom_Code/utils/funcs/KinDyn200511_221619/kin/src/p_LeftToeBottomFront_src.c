/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottomFront_src.h"

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
  double t108;
  double t331;
  double t79;
  double t124;
  double t428;
  double t602;
  double t680;
  double t681;
  double t821;
  double t921;
  double t928;
  double t963;
  double t190;
  double t466;
  double t546;
  double t1210;
  double t1226;
  double t1239;
  double t1296;
  double t1143;
  double t1190;
  double t1201;
  double t1446;
  double t1810;
  double t1822;
  double t1847;
  double t1871;
  double t1751;
  double t1767;
  double t1800;
  double t2042;
  double t2086;
  double t2132;
  double t2223;
  double t2231;
  double t2285;
  double t2323;
  double t2365;
  double t2374;
  double t2376;
  double t2422;
  double t2450;
  double t2501;
  double t2544;
  double t2561;
  double t2564;
  double t2632;
  double t2695;
  double t2729;
  double t2730;
  double t2883;
  double t2890;
  double t2920;
  double t2939;
  double t2940;
  double t2943;
  double t2963;
  double t2988;
  double t3011;
  double t3022;
  double t3071;
  double t3132;
  double t3174;
  double t3182;
  double t3220;
  double t3233;
  double t3242;
  double t3284;
  double t3308;
  double t3313;
  double t3362;
  double t3388;
  double t3402;
  double t790;
  double t847;
  double t855;
  double t967;
  double t975;
  double t1050;
  double t3722;
  double t3726;
  double t3735;
  double t3672;
  double t3689;
  double t3690;
  double t1264;
  double t1314;
  double t1398;
  double t1491;
  double t1493;
  double t1509;
  double t3774;
  double t3781;
  double t3788;
  double t1851;
  double t1916;
  double t1986;
  double t2163;
  double t2193;
  double t2201;
  double t2315;
  double t2329;
  double t2331;
  double t3869;
  double t3871;
  double t3884;
  double t3894;
  double t3903;
  double t3905;
  double t2383;
  double t2394;
  double t2399;
  double t2619;
  double t2680;
  double t2686;
  double t3922;
  double t3926;
  double t3972;
  double t3991;
  double t4006;
  double t4017;
  double t2780;
  double t2787;
  double t2827;
  double t2955;
  double t2970;
  double t2985;
  double t4082;
  double t4142;
  double t4169;
  double t4185;
  double t4191;
  double t4207;
  double t3044;
  double t3052;
  double t3061;
  double t3240;
  double t3272;
  double t3273;
  double t4220;
  double t4256;
  double t4271;
  double t4348;
  double t4353;
  double t4373;
  double t3323;
  double t3341;
  double t3360;
  double t4377;
  double t4391;
  double t4395;
  double t4405;
  double t4415;
  double t4427;
  double t4629;
  double t4667;
  double t4674;
  double t4731;
  double t4733;
  double t4742;
  double t4793;
  double t4794;
  double t4795;
  double t4836;
  double t4860;
  double t4878;
  double t4903;
  double t4904;
  double t4905;
  double t4925;
  double t4933;
  double t4938;
  double t4941;
  double t4969;
  double t4972;
  double t5026;
  double t5031;
  double t5033;
  double t5060;
  double t5068;
  double t5071;
  double t5088;
  double t5109;
  double t5120;
  double t5134;
  double t5140;
  double t5181;
  t108 = Cos(var1[5]);
  t331 = Sin(var1[3]);
  t79 = Cos(var1[3]);
  t124 = Sin(var1[4]);
  t428 = Sin(var1[5]);
  t602 = Cos(var1[6]);
  t680 = -1.*t602;
  t681 = 1. + t680;
  t821 = Sin(var1[6]);
  t921 = -1.*t108*t331;
  t928 = t79*t124*t428;
  t963 = t921 + t928;
  t190 = t79*t108*t124;
  t466 = t331*t428;
  t546 = t190 + t466;
  t1210 = Cos(var1[7]);
  t1226 = -1.*t1210;
  t1239 = 1. + t1226;
  t1296 = Sin(var1[7]);
  t1143 = t602*t963;
  t1190 = t546*t821;
  t1201 = t1143 + t1190;
  t1446 = Cos(var1[4]);
  t1810 = Cos(var1[8]);
  t1822 = -1.*t1810;
  t1847 = 1. + t1822;
  t1871 = Sin(var1[8]);
  t1751 = t79*t1446*t1210;
  t1767 = t1201*t1296;
  t1800 = t1751 + t1767;
  t2042 = t602*t546;
  t2086 = -1.*t963*t821;
  t2132 = t2042 + t2086;
  t2223 = Cos(var1[9]);
  t2231 = -1.*t2223;
  t2285 = 1. + t2231;
  t2323 = Sin(var1[9]);
  t2365 = t1810*t1800;
  t2374 = t2132*t1871;
  t2376 = t2365 + t2374;
  t2422 = t1810*t2132;
  t2450 = -1.*t1800*t1871;
  t2501 = t2422 + t2450;
  t2544 = Cos(var1[10]);
  t2561 = -1.*t2544;
  t2564 = 1. + t2561;
  t2632 = Sin(var1[10]);
  t2695 = -1.*t2323*t2376;
  t2729 = t2223*t2501;
  t2730 = t2695 + t2729;
  t2883 = t2223*t2376;
  t2890 = t2323*t2501;
  t2920 = t2883 + t2890;
  t2939 = Cos(var1[11]);
  t2940 = -1.*t2939;
  t2943 = 1. + t2940;
  t2963 = Sin(var1[11]);
  t2988 = t2632*t2730;
  t3011 = t2544*t2920;
  t3022 = t2988 + t3011;
  t3071 = t2544*t2730;
  t3132 = -1.*t2632*t2920;
  t3174 = t3071 + t3132;
  t3182 = Cos(var1[12]);
  t3220 = -1.*t3182;
  t3233 = 1. + t3220;
  t3242 = Sin(var1[12]);
  t3284 = -1.*t2963*t3022;
  t3308 = t2939*t3174;
  t3313 = t3284 + t3308;
  t3362 = t2939*t3022;
  t3388 = t2963*t3174;
  t3402 = t3362 + t3388;
  t790 = 0.07996*t681;
  t847 = -0.135*t821;
  t855 = 0. + t790 + t847;
  t967 = 0.135*t681;
  t975 = 0.07996*t821;
  t1050 = 0. + t967 + t975;
  t3722 = t79*t108;
  t3726 = t331*t124*t428;
  t3735 = t3722 + t3726;
  t3672 = t108*t331*t124;
  t3689 = -1.*t79*t428;
  t3690 = t3672 + t3689;
  t1264 = 0.135*t1239;
  t1314 = 0.08055*t1296;
  t1398 = 0. + t1264 + t1314;
  t1491 = -0.08055*t1239;
  t1493 = 0.135*t1296;
  t1509 = 0. + t1491 + t1493;
  t3774 = t602*t3735;
  t3781 = t3690*t821;
  t3788 = t3774 + t3781;
  t1851 = -0.08055*t1847;
  t1916 = -0.01004*t1871;
  t1986 = 0. + t1851 + t1916;
  t2163 = -0.01004*t1847;
  t2193 = 0.08055*t1871;
  t2201 = 0. + t2163 + t2193;
  t2315 = -0.08055*t2285;
  t2329 = -0.13004*t2323;
  t2331 = 0. + t2315 + t2329;
  t3869 = t1446*t1210*t331;
  t3871 = t3788*t1296;
  t3884 = t3869 + t3871;
  t3894 = t602*t3690;
  t3903 = -1.*t3735*t821;
  t3905 = t3894 + t3903;
  t2383 = -0.13004*t2285;
  t2394 = 0.08055*t2323;
  t2399 = 0. + t2383 + t2394;
  t2619 = -0.19074*t2564;
  t2680 = 0.03315*t2632;
  t2686 = 0. + t2619 + t2680;
  t3922 = t1810*t3884;
  t3926 = t3905*t1871;
  t3972 = t3922 + t3926;
  t3991 = t1810*t3905;
  t4006 = -1.*t3884*t1871;
  t4017 = t3991 + t4006;
  t2780 = -0.03315*t2564;
  t2787 = -0.19074*t2632;
  t2827 = 0. + t2780 + t2787;
  t2955 = -0.01315*t2943;
  t2970 = -0.62554*t2963;
  t2985 = 0. + t2955 + t2970;
  t4082 = -1.*t2323*t3972;
  t4142 = t2223*t4017;
  t4169 = t4082 + t4142;
  t4185 = t2223*t3972;
  t4191 = t2323*t4017;
  t4207 = t4185 + t4191;
  t3044 = -0.62554*t2943;
  t3052 = 0.01315*t2963;
  t3061 = 0. + t3044 + t3052;
  t3240 = -1.03354*t3233;
  t3272 = 0.05315*t3242;
  t3273 = 0. + t3240 + t3272;
  t4220 = t2632*t4169;
  t4256 = t2544*t4207;
  t4271 = t4220 + t4256;
  t4348 = t2544*t4169;
  t4353 = -1.*t2632*t4207;
  t4373 = t4348 + t4353;
  t3323 = -0.05315*t3233;
  t3341 = -1.03354*t3242;
  t3360 = 0. + t3323 + t3341;
  t4377 = -1.*t2963*t4271;
  t4391 = t2939*t4373;
  t4395 = t4377 + t4391;
  t4405 = t2939*t4271;
  t4415 = t2963*t4373;
  t4427 = t4405 + t4415;
  t4629 = t1446*t602*t428;
  t4667 = t1446*t108*t821;
  t4674 = t4629 + t4667;
  t4731 = -1.*t1210*t124;
  t4733 = t4674*t1296;
  t4742 = t4731 + t4733;
  t4793 = t1446*t108*t602;
  t4794 = -1.*t1446*t428*t821;
  t4795 = t4793 + t4794;
  t4836 = t1810*t4742;
  t4860 = t4795*t1871;
  t4878 = t4836 + t4860;
  t4903 = t1810*t4795;
  t4904 = -1.*t4742*t1871;
  t4905 = t4903 + t4904;
  t4925 = -1.*t2323*t4878;
  t4933 = t2223*t4905;
  t4938 = t4925 + t4933;
  t4941 = t2223*t4878;
  t4969 = t2323*t4905;
  t4972 = t4941 + t4969;
  t5026 = t2632*t4938;
  t5031 = t2544*t4972;
  t5033 = t5026 + t5031;
  t5060 = t2544*t4938;
  t5068 = -1.*t2632*t4972;
  t5071 = t5060 + t5068;
  t5088 = -1.*t2963*t5033;
  t5109 = t2939*t5071;
  t5120 = t5088 + t5109;
  t5134 = t2939*t5033;
  t5140 = t2963*t5071;
  t5181 = t5134 + t5140;
  p_output1[0]=0. + t1201*t1398 + t1800*t1986 + t2132*t2201 + t2331*t2376 + t2399*t2501 + t2686*t2730 + t2827*t2920 + t2985*t3022 + t3061*t3174 + t3273*t3313 + t3360*t3402 + 0.046027*(t3242*t3313 + t3182*t3402) - 0.979698*(t3182*t3313 - 1.*t3242*t3402) + t1446*t1509*t79 + 0.1305*(t1201*t1210 - 1.*t1296*t1446*t79) + t546*t855 + t1050*t963 + var1[0];
  p_output1[1]=0. + t1446*t1509*t331 + t1050*t3735 + t1398*t3788 + 0.1305*(-1.*t1296*t1446*t331 + t1210*t3788) + t1986*t3884 + t2201*t3905 + t2331*t3972 + t2399*t4017 + t2686*t4169 + t2827*t4207 + t2985*t4271 + t3061*t4373 + t3273*t4395 + t3360*t4427 + 0.046027*(t3242*t4395 + t3182*t4427) - 0.979698*(t3182*t4395 - 1.*t3242*t4427) + t3690*t855 + var1[1];
  p_output1[2]=0. - 1.*t124*t1509 + t1050*t1446*t428 + t1398*t4674 + 0.1305*(t124*t1296 + t1210*t4674) + t1986*t4742 + t2201*t4795 + t2331*t4878 + t2399*t4905 + t2686*t4938 + t2827*t4972 + t2985*t5033 + t3061*t5071 + t3273*t5120 + t3360*t5181 + 0.046027*(t3242*t5120 + t3182*t5181) - 0.979698*(t3182*t5120 - 1.*t3242*t5181) + t108*t1446*t855 + var1[2];
}



void p_LeftToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
