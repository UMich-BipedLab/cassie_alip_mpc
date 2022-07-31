/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottomBack_src.h"

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
  double t216;
  double t310;
  double t213;
  double t252;
  double t395;
  double t564;
  double t613;
  double t642;
  double t677;
  double t748;
  double t759;
  double t944;
  double t256;
  double t450;
  double t545;
  double t1149;
  double t1152;
  double t1195;
  double t1218;
  double t1104;
  double t1129;
  double t1141;
  double t1336;
  double t1816;
  double t1837;
  double t1892;
  double t1941;
  double t1764;
  double t1781;
  double t1804;
  double t2003;
  double t2045;
  double t2064;
  double t2222;
  double t2223;
  double t2240;
  double t2275;
  double t2286;
  double t2295;
  double t2322;
  double t2358;
  double t2361;
  double t2366;
  double t2460;
  double t2495;
  double t2515;
  double t2546;
  double t2649;
  double t2650;
  double t2651;
  double t2726;
  double t2757;
  double t2764;
  double t2782;
  double t2830;
  double t2839;
  double t2847;
  double t2897;
  double t2901;
  double t2903;
  double t2951;
  double t2960;
  double t2970;
  double t2976;
  double t3004;
  double t3012;
  double t3024;
  double t3067;
  double t3076;
  double t3077;
  double t3270;
  double t3294;
  double t3317;
  double t651;
  double t730;
  double t736;
  double t961;
  double t1023;
  double t1039;
  double t3522;
  double t3548;
  double t3561;
  double t3445;
  double t3471;
  double t3501;
  double t1208;
  double t1245;
  double t1250;
  double t1343;
  double t1388;
  double t1390;
  double t3583;
  double t3586;
  double t3591;
  double t1911;
  double t1954;
  double t1961;
  double t2067;
  double t2095;
  double t2131;
  double t2243;
  double t2276;
  double t2284;
  double t3690;
  double t3704;
  double t3710;
  double t3750;
  double t3758;
  double t3771;
  double t2354;
  double t2355;
  double t2357;
  double t2522;
  double t2605;
  double t2632;
  double t3804;
  double t3806;
  double t3821;
  double t3881;
  double t3893;
  double t3897;
  double t2658;
  double t2665;
  double t2718;
  double t2842;
  double t2849;
  double t2879;
  double t3907;
  double t3908;
  double t3918;
  double t3970;
  double t3986;
  double t3998;
  double t2936;
  double t2942;
  double t2950;
  double t3017;
  double t3027;
  double t3039;
  double t4030;
  double t4037;
  double t4046;
  double t4065;
  double t4072;
  double t4079;
  double t3157;
  double t3195;
  double t3207;
  double t4093;
  double t4103;
  double t4134;
  double t4155;
  double t4183;
  double t4207;
  double t4339;
  double t4340;
  double t4343;
  double t4494;
  double t4535;
  double t4538;
  double t4557;
  double t4563;
  double t4591;
  double t4607;
  double t4627;
  double t4633;
  double t4678;
  double t4687;
  double t4692;
  double t4701;
  double t4703;
  double t4704;
  double t4713;
  double t4720;
  double t4724;
  double t4742;
  double t4744;
  double t4760;
  double t4785;
  double t4787;
  double t4788;
  double t4830;
  double t4847;
  double t4861;
  double t4889;
  double t4897;
  double t4904;
  t216 = Cos(var1[5]);
  t310 = Sin(var1[3]);
  t213 = Cos(var1[3]);
  t252 = Sin(var1[4]);
  t395 = Sin(var1[5]);
  t564 = Cos(var1[6]);
  t613 = -1.*t564;
  t642 = 1. + t613;
  t677 = Sin(var1[6]);
  t748 = -1.*t216*t310;
  t759 = t213*t252*t395;
  t944 = t748 + t759;
  t256 = t213*t216*t252;
  t450 = t310*t395;
  t545 = t256 + t450;
  t1149 = Cos(var1[7]);
  t1152 = -1.*t1149;
  t1195 = 1. + t1152;
  t1218 = Sin(var1[7]);
  t1104 = t564*t944;
  t1129 = t545*t677;
  t1141 = t1104 + t1129;
  t1336 = Cos(var1[4]);
  t1816 = Cos(var1[8]);
  t1837 = -1.*t1816;
  t1892 = 1. + t1837;
  t1941 = Sin(var1[8]);
  t1764 = t213*t1336*t1149;
  t1781 = t1141*t1218;
  t1804 = t1764 + t1781;
  t2003 = t564*t545;
  t2045 = -1.*t944*t677;
  t2064 = t2003 + t2045;
  t2222 = Cos(var1[9]);
  t2223 = -1.*t2222;
  t2240 = 1. + t2223;
  t2275 = Sin(var1[9]);
  t2286 = t1816*t1804;
  t2295 = t2064*t1941;
  t2322 = t2286 + t2295;
  t2358 = t1816*t2064;
  t2361 = -1.*t1804*t1941;
  t2366 = t2358 + t2361;
  t2460 = Cos(var1[10]);
  t2495 = -1.*t2460;
  t2515 = 1. + t2495;
  t2546 = Sin(var1[10]);
  t2649 = -1.*t2275*t2322;
  t2650 = t2222*t2366;
  t2651 = t2649 + t2650;
  t2726 = t2222*t2322;
  t2757 = t2275*t2366;
  t2764 = t2726 + t2757;
  t2782 = Cos(var1[11]);
  t2830 = -1.*t2782;
  t2839 = 1. + t2830;
  t2847 = Sin(var1[11]);
  t2897 = t2546*t2651;
  t2901 = t2460*t2764;
  t2903 = t2897 + t2901;
  t2951 = t2460*t2651;
  t2960 = -1.*t2546*t2764;
  t2970 = t2951 + t2960;
  t2976 = Cos(var1[12]);
  t3004 = -1.*t2976;
  t3012 = 1. + t3004;
  t3024 = Sin(var1[12]);
  t3067 = -1.*t2847*t2903;
  t3076 = t2782*t2970;
  t3077 = t3067 + t3076;
  t3270 = t2782*t2903;
  t3294 = t2847*t2970;
  t3317 = t3270 + t3294;
  t651 = 0.07996*t642;
  t730 = -0.135*t677;
  t736 = 0. + t651 + t730;
  t961 = 0.135*t642;
  t1023 = 0.07996*t677;
  t1039 = 0. + t961 + t1023;
  t3522 = t213*t216;
  t3548 = t310*t252*t395;
  t3561 = t3522 + t3548;
  t3445 = t216*t310*t252;
  t3471 = -1.*t213*t395;
  t3501 = t3445 + t3471;
  t1208 = 0.135*t1195;
  t1245 = 0.08055*t1218;
  t1250 = 0. + t1208 + t1245;
  t1343 = -0.08055*t1195;
  t1388 = 0.135*t1218;
  t1390 = 0. + t1343 + t1388;
  t3583 = t564*t3561;
  t3586 = t3501*t677;
  t3591 = t3583 + t3586;
  t1911 = -0.08055*t1892;
  t1954 = -0.01004*t1941;
  t1961 = 0. + t1911 + t1954;
  t2067 = -0.01004*t1892;
  t2095 = 0.08055*t1941;
  t2131 = 0. + t2067 + t2095;
  t2243 = -0.08055*t2240;
  t2276 = -0.13004*t2275;
  t2284 = 0. + t2243 + t2276;
  t3690 = t1336*t1149*t310;
  t3704 = t3591*t1218;
  t3710 = t3690 + t3704;
  t3750 = t564*t3501;
  t3758 = -1.*t3561*t677;
  t3771 = t3750 + t3758;
  t2354 = -0.13004*t2240;
  t2355 = 0.08055*t2275;
  t2357 = 0. + t2354 + t2355;
  t2522 = -0.19074*t2515;
  t2605 = 0.03315*t2546;
  t2632 = 0. + t2522 + t2605;
  t3804 = t1816*t3710;
  t3806 = t3771*t1941;
  t3821 = t3804 + t3806;
  t3881 = t1816*t3771;
  t3893 = -1.*t3710*t1941;
  t3897 = t3881 + t3893;
  t2658 = -0.03315*t2515;
  t2665 = -0.19074*t2546;
  t2718 = 0. + t2658 + t2665;
  t2842 = -0.01315*t2839;
  t2849 = -0.62554*t2847;
  t2879 = 0. + t2842 + t2849;
  t3907 = -1.*t2275*t3821;
  t3908 = t2222*t3897;
  t3918 = t3907 + t3908;
  t3970 = t2222*t3821;
  t3986 = t2275*t3897;
  t3998 = t3970 + t3986;
  t2936 = -0.62554*t2839;
  t2942 = 0.01315*t2847;
  t2950 = 0. + t2936 + t2942;
  t3017 = -1.03354*t3012;
  t3027 = 0.05315*t3024;
  t3039 = 0. + t3017 + t3027;
  t4030 = t2546*t3918;
  t4037 = t2460*t3998;
  t4046 = t4030 + t4037;
  t4065 = t2460*t3918;
  t4072 = -1.*t2546*t3998;
  t4079 = t4065 + t4072;
  t3157 = -0.05315*t3012;
  t3195 = -1.03354*t3024;
  t3207 = 0. + t3157 + t3195;
  t4093 = -1.*t2847*t4046;
  t4103 = t2782*t4079;
  t4134 = t4093 + t4103;
  t4155 = t2782*t4046;
  t4183 = t2847*t4079;
  t4207 = t4155 + t4183;
  t4339 = t1336*t564*t395;
  t4340 = t1336*t216*t677;
  t4343 = t4339 + t4340;
  t4494 = -1.*t1149*t252;
  t4535 = t4343*t1218;
  t4538 = t4494 + t4535;
  t4557 = t1336*t216*t564;
  t4563 = -1.*t1336*t395*t677;
  t4591 = t4557 + t4563;
  t4607 = t1816*t4538;
  t4627 = t4591*t1941;
  t4633 = t4607 + t4627;
  t4678 = t1816*t4591;
  t4687 = -1.*t4538*t1941;
  t4692 = t4678 + t4687;
  t4701 = -1.*t2275*t4633;
  t4703 = t2222*t4692;
  t4704 = t4701 + t4703;
  t4713 = t2222*t4633;
  t4720 = t2275*t4692;
  t4724 = t4713 + t4720;
  t4742 = t2546*t4704;
  t4744 = t2460*t4724;
  t4760 = t4742 + t4744;
  t4785 = t2460*t4704;
  t4787 = -1.*t2546*t4724;
  t4788 = t4785 + t4787;
  t4830 = -1.*t2847*t4760;
  t4847 = t2782*t4788;
  t4861 = t4830 + t4847;
  t4889 = t2782*t4760;
  t4897 = t2847*t4788;
  t4904 = t4889 + t4897;
  p_output1[0]=0. + t1141*t1250 + t1804*t1961 + t1336*t1390*t213 + 0.1305*(t1141*t1149 - 1.*t1218*t1336*t213) + t2064*t2131 + t2284*t2322 + t2357*t2366 + t2632*t2651 + t2718*t2764 + t2879*t2903 + t2950*t2970 + t3039*t3077 + t3207*t3317 - 0.063247*(t3024*t3077 + t2976*t3317) - 1.109926*(t2976*t3077 - 1.*t3024*t3317) + t545*t736 + t1039*t944 + var1[0];
  p_output1[1]=0. + t1336*t1390*t310 + t1039*t3561 + t1250*t3591 + 0.1305*(-1.*t1218*t1336*t310 + t1149*t3591) + t1961*t3710 + t2131*t3771 + t2284*t3821 + t2357*t3897 + t2632*t3918 + t2718*t3998 + t2879*t4046 + t2950*t4079 + t3039*t4134 + t3207*t4207 - 0.063247*(t3024*t4134 + t2976*t4207) - 1.109926*(t2976*t4134 - 1.*t3024*t4207) + t3501*t736 + var1[1];
  p_output1[2]=0. - 1.*t1390*t252 + t1039*t1336*t395 + t1250*t4343 + 0.1305*(t1218*t252 + t1149*t4343) + t1961*t4538 + t2131*t4591 + t2284*t4633 + t2357*t4692 + t2632*t4704 + t2718*t4724 + t2879*t4760 + t2950*t4788 + t3039*t4861 + t3207*t4904 - 0.063247*(t3024*t4861 + t2976*t4904) - 1.109926*(t2976*t4861 - 1.*t3024*t4904) + t1336*t216*t736 + var1[2];
}



void p_LeftToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
