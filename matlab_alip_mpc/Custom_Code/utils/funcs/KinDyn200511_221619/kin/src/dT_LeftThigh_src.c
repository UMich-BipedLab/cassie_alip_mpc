/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftThigh_src.h"

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
  double t1131;
  double t1056;
  double t1155;
  double t1098;
  double t1204;
  double t1759;
  double t882;
  double t1035;
  double t1108;
  double t1251;
  double t1275;
  double t1289;
  double t1293;
  double t1455;
  double t1472;
  double t1532;
  double t1540;
  double t1556;
  double t1777;
  double t1891;
  double t1951;
  double t2005;
  double t2060;
  double t2081;
  double t2149;
  double t2182;
  double t2007;
  double t2008;
  double t2931;
  double t2933;
  double t2939;
  double t2833;
  double t2839;
  double t2845;
  double t3158;
  double t3183;
  double t3185;
  double t3208;
  double t3218;
  double t3237;
  double t3239;
  double t3249;
  double t3256;
  double t3040;
  double t3369;
  double t3484;
  double t3387;
  double t3410;
  double t1952;
  double t1964;
  double t1978;
  double t3890;
  double t3913;
  double t3925;
  double t4039;
  double t4045;
  double t4048;
  double t4112;
  double t4126;
  double t4139;
  double t4165;
  double t4183;
  double t4189;
  double t1694;
  double t1836;
  double t1867;
  double t2598;
  double t2631;
  double t2632;
  double t2660;
  double t2676;
  double t2713;
  double t2525;
  double t2556;
  double t2558;
  double t2198;
  double t2203;
  double t2171;
  double t2184;
  double t2387;
  double t2395;
  double t3016;
  double t3059;
  double t3067;
  double t3079;
  double t3098;
  double t2923;
  double t2947;
  double t2952;
  double t3268;
  double t3285;
  double t3289;
  double t3778;
  double t3781;
  double t3790;
  double t3793;
  double t3796;
  double t3797;
  double t3738;
  double t3748;
  double t3758;
  double t3573;
  double t3581;
  double t3515;
  double t3699;
  double t3700;
  double t1999;
  double t2010;
  double t2022;
  double t3314;
  double t3330;
  double t3338;
  double t3931;
  double t3984;
  double t3985;
  double t4836;
  double t4839;
  double t4843;
  double t4259;
  double t4263;
  double t4268;
  double t4270;
  double t4279;
  double t4288;
  double t4226;
  double t4245;
  double t4248;
  double t3997;
  double t3999;
  double t4001;
  double t5449;
  double t5450;
  double t5353;
  double t5354;
  double t5362;
  double t5367;
  double t5378;
  double t4336;
  double t4338;
  double t4342;
  double t5479;
  double t5521;
  double t5530;
  double t5531;
  double t5532;
  double t5536;
  double t5551;
  double t5553;
  double t5561;
  double t4348;
  double t4355;
  double t4378;
  double t5451;
  double t5471;
  double t5473;
  double t5478;
  double t5495;
  double t5232;
  double t4320;
  double t4325;
  double t4326;
  double t5719;
  double t5733;
  double t4489;
  double t4515;
  double t4532;
  double t4559;
  double t4560;
  double t4563;
  double t5215;
  double t5222;
  double t5226;
  double t5230;
  double t5239;
  double t4653;
  double t4680;
  double t4684;
  double t5577;
  double t5578;
  double t5595;
  double t5598;
  double t5602;
  double t4707;
  double t4730;
  double t4767;
  double t4625;
  double t4632;
  double t4638;
  double t5956;
  double t5963;
  double t5964;
  double t5974;
  double t5992;
  double t4777;
  double t4785;
  double t4798;
  double t6646;
  double t6650;
  double t6654;
  double t6656;
  double t6657;
  double t6659;
  double t6672;
  double t6673;
  double t6715;
  double t4936;
  double t4937;
  double t4946;
  double t4872;
  double t4878;
  double t4889;
  t1131 = Cos(var1[3]);
  t1056 = Cos(var1[5]);
  t1155 = Sin(var1[4]);
  t1098 = Sin(var1[3]);
  t1204 = Sin(var1[5]);
  t1759 = Cos(var1[4]);
  t882 = Cos(var1[7]);
  t1035 = Cos(var1[6]);
  t1108 = -1.*t1056*t1098;
  t1251 = t1131*t1155*t1204;
  t1275 = t1108 + t1251;
  t1289 = t1035*t1275;
  t1293 = t1131*t1056*t1155;
  t1455 = t1098*t1204;
  t1472 = t1293 + t1455;
  t1532 = Sin(var1[6]);
  t1540 = t1472*t1532;
  t1556 = t1289 + t1540;
  t1777 = Sin(var1[7]);
  t1891 = Sin(var1[8]);
  t1951 = Cos(var1[8]);
  t2005 = t1035*t1472;
  t2060 = t1056*t1098;
  t2081 = -1.*t1131*t1155*t1204;
  t2149 = t2060 + t2081;
  t2182 = -1.*t1472*t1532;
  t2007 = -1.*t1275*t1532;
  t2008 = t2005 + t2007;
  t2931 = -1.*t1131*t1056;
  t2933 = -1.*t1098*t1155*t1204;
  t2939 = t2931 + t2933;
  t2833 = -1.*t1056*t1098*t1155;
  t2839 = t1131*t1204;
  t2845 = t2833 + t2839;
  t3158 = t1131*t1056;
  t3183 = t1098*t1155*t1204;
  t3185 = t3158 + t3183;
  t3208 = t1035*t3185;
  t3218 = t1056*t1098*t1155;
  t3237 = -1.*t1131*t1204;
  t3239 = t3218 + t3237;
  t3249 = t3239*t1532;
  t3256 = t3208 + t3249;
  t3040 = t1035*t2939;
  t3369 = t1035*t3239;
  t3484 = -1.*t3239*t1532;
  t3387 = -1.*t3185*t1532;
  t3410 = t3369 + t3387;
  t1952 = t1131*t1759*t882;
  t1964 = t1556*t1777;
  t1978 = t1952 + t1964;
  t3890 = t1759*t1035*t1204;
  t3913 = t1759*t1056*t1532;
  t3925 = t3890 + t3913;
  t4039 = t1759*t1056*t1035;
  t4045 = -1.*t1759*t1204*t1532;
  t4048 = t4039 + t4045;
  t4112 = -1.*t1759*t1035*t1204;
  t4126 = -1.*t1759*t1056*t1532;
  t4139 = t4112 + t4126;
  t4165 = -1.*t1951*t4139;
  t4183 = t4048*t1777*t1891;
  t4189 = t4165 + t4183;
  t1694 = t882*t1556;
  t1836 = -1.*t1131*t1759*t1777;
  t1867 = t1694 + t1836;
  t2598 = -1.*t1131*t882*t1155;
  t2631 = t1131*t1759*t1035*t1204;
  t2632 = t1131*t1759*t1056*t1532;
  t2660 = t2631 + t2632;
  t2676 = t2660*t1777;
  t2713 = t2598 + t2676;
  t2525 = t1131*t1759*t1056*t1035;
  t2556 = -1.*t1131*t1759*t1204*t1532;
  t2558 = t2525 + t2556;
  t2198 = t2149*t1532;
  t2203 = t2005 + t2198;
  t2171 = t1035*t2149;
  t2184 = t2171 + t2182;
  t2387 = -1.*t1035*t1275;
  t2395 = t2387 + t2182;
  t3016 = -1.*t1759*t882*t1098;
  t3059 = t2845*t1532;
  t3067 = t3040 + t3059;
  t3079 = t3067*t1777;
  t3098 = t3016 + t3079;
  t2923 = t1035*t2845;
  t2947 = -1.*t2939*t1532;
  t2952 = t2923 + t2947;
  t3268 = t882*t3256;
  t3285 = -1.*t1759*t1098*t1777;
  t3289 = t3268 + t3285;
  t3778 = -1.*t882*t1098*t1155;
  t3781 = t1759*t1035*t1098*t1204;
  t3790 = t1759*t1056*t1098*t1532;
  t3793 = t3781 + t3790;
  t3796 = t3793*t1777;
  t3797 = t3778 + t3796;
  t3738 = t1759*t1056*t1035*t1098;
  t3748 = -1.*t1759*t1098*t1204*t1532;
  t3758 = t3738 + t3748;
  t3573 = t2939*t1532;
  t3581 = t3369 + t3573;
  t3515 = t3040 + t3484;
  t3699 = -1.*t1035*t3185;
  t3700 = t3699 + t3484;
  t1999 = t1951*t1978;
  t2010 = t2008*t1891;
  t2022 = t1999 + t2010;
  t3314 = t1759*t882*t1098;
  t3330 = t3256*t1777;
  t3338 = t3314 + t3330;
  t3931 = t882*t3925;
  t3984 = t1155*t1777;
  t3985 = t3931 + t3984;
  t4836 = t1951*t4048*t1777;
  t4839 = t4139*t1891;
  t4843 = t4836 + t4839;
  t4259 = -1.*t1759*t882;
  t4263 = -1.*t1035*t1155*t1204;
  t4268 = -1.*t1056*t1155*t1532;
  t4270 = t4263 + t4268;
  t4279 = t4270*t1777;
  t4288 = t4259 + t4279;
  t4226 = -1.*t1056*t1035*t1155;
  t4245 = t1155*t1204*t1532;
  t4248 = t4226 + t4245;
  t3997 = -1.*t882*t1155;
  t3999 = t3925*t1777;
  t4001 = t3997 + t3999;
  t5449 = -1.*t1035;
  t5450 = 1. + t5449;
  t5353 = -1.*t1951;
  t5354 = 1. + t5353;
  t5362 = -0.08055*t5354;
  t5367 = -0.01004*t1891;
  t5378 = 0. + t5362 + t5367;
  t4336 = t1951*t2203*t1777;
  t4338 = t2184*t1891;
  t4342 = t4336 + t4338;
  t5479 = 0.07996*t1532;
  t5521 = -1.*t882;
  t5530 = 1. + t5521;
  t5531 = 0.135*t5530;
  t5532 = 0.08055*t1777;
  t5536 = 0. + t5531 + t5532;
  t5551 = -0.01004*t5354;
  t5553 = 0.08055*t1891;
  t5561 = 0. + t5551 + t5553;
  t4348 = t1951*t2008*t1777;
  t4355 = t2395*t1891;
  t4378 = t4348 + t4355;
  t5451 = 0.07996*t5450;
  t5471 = -0.135*t1532;
  t5473 = 0. + t5451 + t5471;
  t5478 = 0.135*t5450;
  t5495 = 0. + t5478 + t5479;
  t5232 = 0.135*t1777;
  t4320 = t1951*t2713;
  t4325 = t2558*t1891;
  t4326 = t4320 + t4325;
  t5719 = -0.08055*t5530;
  t5733 = 0. + t5719 + t5232;
  t4489 = t1951*t3098;
  t4515 = t2952*t1891;
  t4532 = t4489 + t4515;
  t4559 = t1951*t2008;
  t4560 = -1.*t1978*t1891;
  t4563 = t4559 + t4560;
  t5215 = 0.135*t882;
  t5222 = -0.08055*t1777;
  t5226 = t5215 + t5222;
  t5230 = 0.08055*t882;
  t5239 = t5230 + t5232;
  t4653 = t1951*t3581*t1777;
  t4680 = t3515*t1891;
  t4684 = t4653 + t4680;
  t5577 = -0.135*t1035;
  t5578 = t5577 + t5479;
  t5595 = 0.07996*t1035;
  t5598 = 0.135*t1532;
  t5602 = t5595 + t5598;
  t4707 = t1951*t3410*t1777;
  t4730 = t3700*t1891;
  t4767 = t4707 + t4730;
  t4625 = t1951*t3797;
  t4632 = t3758*t1891;
  t4638 = t4625 + t4632;
  t5956 = -0.01004*t1951;
  t5963 = -0.08055*t1891;
  t5964 = t5956 + t5963;
  t5974 = 0.08055*t1951;
  t5992 = t5974 + t5367;
  t4777 = t1951*t3410;
  t4785 = -1.*t3338*t1891;
  t4798 = t4777 + t4785;
  t6646 = 0.1708*t882*t4048;
  t6650 = t4048*t5536;
  t6654 = t4048*t1777*t5378;
  t6656 = t4139*t5561;
  t6657 = -0.08045*t4843;
  t6659 = t1951*t4139;
  t6672 = -1.*t4048*t1777*t1891;
  t6673 = t6659 + t6672;
  t6715 = -0.06984*t6673;
  t4936 = t1951*t4048;
  t4937 = -1.*t4001*t1891;
  t4946 = t4936 + t4937;
  t4872 = t1951*t4288;
  t4878 = t4248*t1891;
  t4889 = t4872 + t4878;
  p_output1[0]=(-1.*t1951*t2952 + t1891*t3098)*var2[3] + (-1.*t1951*t2558 + t1891*t2713)*var2[4] + (-1.*t1951*t2184 + t1777*t1891*t2203)*var2[5] + (t1777*t1891*t2008 - 1.*t1951*t2395)*var2[6] + t1867*t1891*var2[7] + t2022*var2[8];
  p_output1[1]=(t1891*t1978 - 1.*t1951*t2008)*var2[3] + (-1.*t1951*t3758 + t1891*t3797)*var2[4] + (-1.*t1951*t3515 + t1777*t1891*t3581)*var2[5] + (t1777*t1891*t3410 - 1.*t1951*t3700)*var2[6] + t1891*t3289*var2[7] + (t1951*t3338 + t1891*t3410)*var2[8];
  p_output1[2]=(-1.*t1951*t4248 + t1891*t4288)*var2[4] + t4189*var2[5] + t4189*var2[6] + t1891*t3985*var2[7] + (t1951*t4001 + t1891*t4048)*var2[8];
  p_output1[3]=0;
  p_output1[4]=t4532*var2[3] + t4326*var2[4] + t4342*var2[5] + t4378*var2[6] + t1867*t1951*var2[7] + t4563*var2[8];
  p_output1[5]=t2022*var2[3] + t4638*var2[4] + t4684*var2[5] + t4767*var2[6] + t1951*t3289*var2[7] + t4798*var2[8];
  p_output1[6]=t4889*var2[4] + t4843*var2[5] + t4843*var2[6] + t1951*t3985*var2[7] + t4946*var2[8];
  p_output1[7]=0;
  p_output1[8]=(t3285 - 1.*t3067*t882)*var2[3] + (-1.*t1131*t1155*t1777 - 1.*t2660*t882)*var2[4] - 1.*t2203*t882*var2[5] - 1.*t2008*t882*var2[6] + t1978*var2[7];
  p_output1[9]=(t1131*t1759*t1777 - 1.*t1556*t882)*var2[3] + (-1.*t1098*t1155*t1777 - 1.*t3793*t882)*var2[4] - 1.*t3581*t882*var2[5] - 1.*t3410*t882*var2[6] + t3338*var2[7];
  p_output1[10]=(-1.*t1759*t1777 - 1.*t4270*t882)*var2[4] - 1.*t4048*t882*var2[5] - 1.*t4048*t882*var2[6] + t4001*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.06984*(t1951*t2952 - 1.*t1891*t3098) - 0.08045*t4532 + t3098*t5378 + t2845*t5473 + t2939*t5495 + t3067*t5536 + t2952*t5561 - 1.*t1098*t1759*t5733 + 0.1708*(t1098*t1759*t1777 + t3067*t882))*var2[3] + (-0.06984*(t1951*t2558 - 1.*t1891*t2713) - 0.08045*t4326 + t2713*t5378 + t1056*t1131*t1759*t5473 + t1131*t1204*t1759*t5495 + t2660*t5536 + t2558*t5561 - 1.*t1131*t1155*t5733 + 0.1708*(t1131*t1155*t1777 + t2660*t882))*var2[4] + (-0.06984*(t1951*t2184 - 1.*t1777*t1891*t2203) - 0.08045*t4342 + t1777*t2203*t5378 + t2149*t5473 + t1472*t5495 + t2203*t5536 + t2184*t5561 + 0.1708*t2203*t882)*var2[5] + (-0.06984*(-1.*t1777*t1891*t2008 + t1951*t2395) - 0.08045*t4378 + t1777*t2008*t5378 + t2008*t5536 + t2395*t5561 + t1472*t5578 + t1275*t5602 + 0.1708*t2008*t882)*var2[6] + (0.06984*t1867*t1891 - 0.08045*t1867*t1951 + t1131*t1759*t5226 + t1556*t5239 + t1867*t5378 + 0.1708*(-1.*t1556*t1777 - 1.*t1131*t1759*t882))*var2[7] + (-0.06984*(-1.*t1951*t1978 - 1.*t1891*t2008) - 0.08045*t4563 + t1978*t5964 + t2008*t5992)*var2[8];
  p_output1[13]=var2[1] + (0.1708*t1867 - 0.08045*t2022 - 0.06984*t4563 + t1978*t5378 + t1472*t5473 + t1275*t5495 + t1556*t5536 + t2008*t5561 + t1131*t1759*t5733)*var2[3] + (-0.06984*(t1951*t3758 - 1.*t1891*t3797) - 0.08045*t4638 + t3797*t5378 + t1056*t1098*t1759*t5473 + t1098*t1204*t1759*t5495 + t3793*t5536 + t3758*t5561 - 1.*t1098*t1155*t5733 + 0.1708*(t1098*t1155*t1777 + t3793*t882))*var2[4] + (-0.06984*(t1951*t3515 - 1.*t1777*t1891*t3581) - 0.08045*t4684 + t1777*t3581*t5378 + t2939*t5473 + t3239*t5495 + t3581*t5536 + t3515*t5561 + 0.1708*t3581*t882)*var2[5] + (-0.06984*(-1.*t1777*t1891*t3410 + t1951*t3700) - 0.08045*t4767 + t1777*t3410*t5378 + t3410*t5536 + t3700*t5561 + t3239*t5578 + t3185*t5602 + 0.1708*t3410*t882)*var2[6] + (0.1708*(t3016 - 1.*t1777*t3256) + 0.06984*t1891*t3289 - 0.08045*t1951*t3289 + t1098*t1759*t5226 + t3256*t5239 + t3289*t5378)*var2[7] + (-0.06984*(-1.*t1951*t3338 - 1.*t1891*t3410) - 0.08045*t4798 + t3338*t5964 + t3410*t5992)*var2[8];
  p_output1[14]=var2[2] + (-0.06984*(t1951*t4248 - 1.*t1891*t4288) - 0.08045*t4889 + t4288*t5378 - 1.*t1056*t1155*t5473 - 1.*t1155*t1204*t5495 + t4270*t5536 + t4248*t5561 - 1.*t1759*t5733 + 0.1708*(t1759*t1777 + t4270*t882))*var2[4] + (-1.*t1204*t1759*t5473 + t1056*t1759*t5495 + t6646 + t6650 + t6654 + t6656 + t6657 + t6715)*var2[5] + (t1056*t1759*t5578 + t1204*t1759*t5602 + t6646 + t6650 + t6654 + t6656 + t6657 + t6715)*var2[6] + (0.06984*t1891*t3985 - 0.08045*t1951*t3985 - 1.*t1155*t5226 + t3925*t5239 + t3985*t5378 + 0.1708*(-1.*t1777*t3925 + t1155*t882))*var2[7] + (-0.06984*(-1.*t1951*t4001 - 1.*t1891*t4048) - 0.08045*t4946 + t4001*t5964 + t4048*t5992)*var2[8];
  p_output1[15]=0;
}



void dT_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
