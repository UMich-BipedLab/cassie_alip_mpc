/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:28 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t527;
  double t537;
  double t1124;
  double t1182;
  double t1176;
  double t1237;
  double t1252;
  double t1271;
  double t2089;
  double t2103;
  double t1380;
  double t1435;
  double t1446;
  double t1466;
  double t2121;
  double t2122;
  double t2132;
  double t2261;
  double t2263;
  double t2269;
  double t1571;
  double t1601;
  double t1668;
  double t1705;
  double t1835;
  double t1860;
  double t1924;
  double t1934;
  double t1963;
  double t2012;
  double t2015;
  double t2036;
  double t2037;
  double t2052;
  double t2082;
  double t2598;
  double t2496;
  double t2497;
  double t2507;
  double t2613;
  double t2611;
  double t2616;
  double t2617;
  double t2665;
  double t2666;
  double t2439;
  double t2465;
  double t2466;
  double t2668;
  double t2670;
  double t2672;
  double t2674;
  double t2675;
  double t2679;
  double t2249;
  double t2250;
  double t2251;
  double t2730;
  double t2737;
  double t2739;
  double t2696;
  double t2708;
  double t2709;
  double t2715;
  double t2631;
  double t2637;
  double t2639;
  double t2858;
  double t2867;
  double t2874;
  double t2876;
  double t2888;
  double t2145;
  double t2156;
  double t2165;
  double t2815;
  double t2769;
  double t2909;
  double t2916;
  double t2919;
  double t2920;
  double t2931;
  double t2937;
  double t2942;
  double t2974;
  double t2976;
  double t2979;
  double t3180;
  double t3184;
  double t3186;
  double t3322;
  double t3323;
  double t3327;
  double t3385;
  double t3387;
  double t3394;
  double t3409;
  double t3592;
  double t3636;
  double t3122;
  double t3128;
  double t3135;
  double t2673;
  double t2680;
  double t3331;
  double t3337;
  double t3340;
  double t3900;
  double t3018;
  double t3606;
  double t3607;
  double t3958;
  double t3962;
  double t3963;
  double t3978;
  double t4022;
  double t2826;
  double t2842;
  double t3703;
  double t3709;
  double t3539;
  double t3546;
  double t3549;
  double t4271;
  double t4291;
  double t4345;
  double t4346;
  double t4292;
  double t4294;
  double t4295;
  double t3476;
  double t3477;
  double t3480;
  double t4347;
  double t4360;
  double t4373;
  double t4381;
  double t4383;
  double t4384;
  double t2763;
  double t2783;
  double t2999;
  double t3000;
  double t4379;
  double t4388;
  double t4398;
  double t3660;
  double t3663;
  double t4425;
  double t4440;
  double t4448;
  double t3027;
  double t3028;
  double t3040;
  double t3042;
  double t4307;
  double t4315;
  double t4319;
  double t4320;
  double t4321;
  double t4322;
  double t3072;
  double t3077;
  double t3081;
  double t3352;
  double t3356;
  double t3366;
  double t3093;
  double t3094;
  double t3202;
  double t3211;
  double t3874;
  double t3889;
  double t3890;
  double t4560;
  double t4567;
  double t4572;
  double t4409;
  double t4413;
  double t4416;
  double t4740;
  double t4749;
  double t4754;
  double t4763;
  double t4767;
  double t4466;
  double t2948;
  double t2959;
  double t4552;
  double t4575;
  double t2872;
  double t2891;
  double t3624;
  double t3630;
  double t3642;
  double t3653;
  double t5027;
  double t5036;
  double t5041;
  double t3298;
  double t3299;
  double t3417;
  double t3425;
  double t4705;
  double t4717;
  double t4721;
  double t5112;
  double t5114;
  double t5120;
  double t3771;
  double t3773;
  double t5097;
  double t5122;
  double t3750;
  double t3757;
  double t2813;
  double t3498;
  double t3507;
  double t4860;
  double t4862;
  double t4864;
  double t5349;
  double t3920;
  double t3927;
  double t4607;
  double t4611;
  double t4613;
  double t4458;
  double t4461;
  double t3988;
  double t3994;
  double t5149;
  double t5157;
  double t5160;
  double t5584;
  double t4029;
  double t4034;
  double t4063;
  double t4067;
  double t5642;
  double t5644;
  double t5648;
  double t4176;
  double t4183;
  double t5359;
  double t5364;
  double t5517;
  double t5520;
  double t5529;
  double t4885;
  double t4898;
  double t5657;
  double t5665;
  double t4129;
  double t4137;
  double t4095;
  double t4096;
  double t5324;
  double t5338;
  double t5341;
  double t4998;
  double t5006;
  double t5007;
  t527 = Cos(var1[3]);
  t537 = Sin(var1[3]);
  t1124 = Cos(var1[4]);
  t1182 = Sin(var1[4]);
  t1176 = -1.*var2[2]*t1124*t537;
  t1237 = -1.*var2[1]*t1182;
  t1252 = -1.*var1[1]*t1124;
  t1271 = var1[2]*t537*t1182;
  t2089 = Cos(var1[5]);
  t2103 = Sin(var1[5]);
  t1380 = var2[2]*t527*t1124;
  t1435 = var2[0]*t1182;
  t1446 = var1[0]*t1124;
  t1466 = -1.*var1[2]*t527*t1182;
  t2121 = t527*t2089*t1182;
  t2122 = t537*t2103;
  t2132 = t2121 + t2122;
  t2261 = -1.*t527*t2089;
  t2263 = -1.*t537*t1182*t2103;
  t2269 = t2261 + t2263;
  t1571 = -1.*var2[1]*t527*t1124;
  t1601 = var2[0]*t1124*t537;
  t1668 = var1[0]*t527*t1124;
  t1705 = var1[1]*t1124*t537;
  t1835 = t1668 + t1705;
  t1860 = var2[3]*t1835;
  t1924 = var1[1]*t527*t1182;
  t1934 = -1.*var1[0]*t537*t1182;
  t1963 = -1.*var2[3]*t1124*t537;
  t2012 = -1.*var2[4]*t527*t1182;
  t2015 = t1963 + t2012;
  t2036 = var2[3]*t527*t1124;
  t2037 = -1.*var2[4]*t537*t1182;
  t2052 = t2036 + t2037;
  t2082 = -1.*var2[4]*t1124;
  t2598 = Cos(var1[13]);
  t2496 = t2089*t537*t1182;
  t2497 = -1.*t527*t2103;
  t2507 = t2496 + t2497;
  t2613 = Sin(var1[13]);
  t2611 = t2598*t1124*t2089;
  t2616 = -1.*t1124*t2613*t2103;
  t2617 = t2611 + t2616;
  t2665 = -1.*t2598;
  t2666 = 1. + t2665;
  t2439 = -1.*t2089*t537;
  t2465 = t527*t1182*t2103;
  t2466 = t2439 + t2465;
  t2668 = 0.07996*t2666;
  t2670 = 0.135*t2613;
  t2672 = 0. + t2668 + t2670;
  t2674 = -0.135*t2666;
  t2675 = 0.07996*t2613;
  t2679 = 0. + t2674 + t2675;
  t2249 = -1.*t2089*t537*t1182;
  t2250 = t527*t2103;
  t2251 = t2249 + t2250;
  t2730 = t2598*t2132;
  t2737 = -1.*t2613*t2466;
  t2739 = t2730 + t2737;
  t2696 = -1.*var1[2];
  t2708 = -1.*t1124*t2089*t2672;
  t2709 = -1.*t1124*t2679*t2103;
  t2715 = 0. + t2696 + t2708 + t2709;
  t2631 = t527*t2089;
  t2637 = t537*t1182*t2103;
  t2639 = t2631 + t2637;
  t2858 = 0.135*t2598;
  t2867 = t2858 + t2675;
  t2874 = 0.07996*t2598;
  t2876 = -0.135*t2613;
  t2888 = t2874 + t2876;
  t2145 = t2089*t537;
  t2156 = -1.*t527*t1182*t2103;
  t2165 = t2145 + t2156;
  t2815 = -1.*t2613*t2507;
  t2769 = t2598*t2269;
  t2909 = -1.*t1124*t2089*t2613;
  t2916 = -1.*t2598*t1124*t2103;
  t2919 = t2909 + t2916;
  t2920 = t2672*t2507;
  t2931 = t2679*t2639;
  t2937 = 0. + var1[1] + t2920 + t2931;
  t2942 = t2919*t2937;
  t2974 = t2598*t2507;
  t2976 = -1.*t2613*t2639;
  t2979 = t2974 + t2976;
  t3180 = -1.*t2598*t2089*t1182;
  t3184 = t2613*t1182*t2103;
  t3186 = t3180 + t3184;
  t3322 = t1124*t2089*t2672;
  t3323 = t1124*t2679*t2103;
  t3327 = 0. + var1[2] + t3322 + t3323;
  t3385 = -1.*var1[0];
  t3387 = -1.*t2672*t2132;
  t3394 = -1.*t2679*t2466;
  t3409 = 0. + t3385 + t3387 + t3394;
  t3592 = -1.*t2613*t2132;
  t3636 = t2919*t3409;
  t3122 = t2598*t1124*t2089*t537;
  t3128 = -1.*t1124*t2613*t537*t2103;
  t3135 = t3122 + t3128;
  t2673 = t2672*t2132;
  t2680 = t2679*t2466;
  t3331 = t2598*t527*t1124*t2089;
  t3337 = -1.*t527*t1124*t2613*t2103;
  t3340 = t3331 + t3337;
  t3900 = 0. + var1[0] + t2673 + t2680;
  t3018 = t2815 + t2769;
  t3606 = t2598*t2165;
  t3607 = t3592 + t3606;
  t3958 = -1.*var1[1];
  t3962 = -1.*t2672*t2507;
  t3963 = -1.*t2679*t2639;
  t3978 = 0. + t3958 + t3962 + t3963;
  t4022 = 0.08055*t2617;
  t2826 = -1.*t2598*t2639;
  t2842 = t2815 + t2826;
  t3703 = -1.*t2598*t2466;
  t3709 = t3592 + t3703;
  t3539 = t2598*t2251;
  t3546 = -1.*t2613*t2269;
  t3549 = t3539 + t3546;
  t4271 = Sin(var1[14]);
  t4291 = Cos(var1[14]);
  t4345 = -1.*t4291;
  t4346 = 1. + t4345;
  t4292 = t1124*t2089*t2613;
  t4294 = t2598*t1124*t2103;
  t4295 = t4292 + t4294;
  t3476 = t2613*t2132;
  t3477 = t2598*t2466;
  t3480 = t3476 + t3477;
  t4347 = -0.08055*t4346;
  t4360 = -0.135*t4271;
  t4373 = 0. + t4347 + t4360;
  t4381 = -0.135*t4346;
  t4383 = 0.08055*t4271;
  t4384 = 0. + t4381 + t4383;
  t2763 = t2613*t2251;
  t2783 = t2763 + t2769;
  t2999 = t2613*t2165;
  t3000 = t2730 + t2999;
  t4379 = t4373*t1182;
  t4388 = -1.*t4384*t4295;
  t4398 = 0. + t2696 + t2708 + t4379 + t2709 + t4388;
  t3660 = t2613*t2269;
  t3663 = t2974 + t3660;
  t4425 = t4271*t1182;
  t4440 = t4291*t4295;
  t4448 = t4425 + t4440;
  t3027 = t2679*t2507;
  t3028 = t2672*t2269;
  t3040 = -1.*t1124*t2089*t2679;
  t3042 = t1124*t2672*t2103;
  t4307 = -1.*t1124*t4271*t537;
  t4315 = t2613*t2507;
  t4319 = t2598*t2639;
  t4320 = t4315 + t4319;
  t4321 = t4291*t4320;
  t4322 = t4307 + t4321;
  t3072 = t527*t1124*t2089*t2613;
  t3077 = t2598*t527*t1124*t2103;
  t3081 = t3072 + t3077;
  t3352 = t1124*t2089*t2613*t537;
  t3356 = t2598*t1124*t537*t2103;
  t3366 = t3352 + t3356;
  t3093 = t1124*t2089*t2672*t537;
  t3094 = t1124*t2679*t537*t2103;
  t3202 = t2089*t2672*t1182;
  t3211 = t2679*t1182*t2103;
  t3874 = -1.*t2089*t2613*t1182;
  t3889 = -1.*t2598*t1182*t2103;
  t3890 = t3874 + t3889;
  t4560 = t1124*t4373*t537;
  t4567 = t4384*t4320;
  t4572 = 0. + var1[1] + t4560 + t2920 + t2931 + t4567;
  t4409 = -1.*t527*t1124*t4271;
  t4413 = t4291*t3480;
  t4416 = t4409 + t4413;
  t4740 = -0.135*t4291;
  t4749 = -0.08055*t4271;
  t4754 = t4740 + t4749;
  t4763 = 0.08055*t4291;
  t4767 = t4763 + t4360;
  t4466 = -1.*t4291*t1124*t537;
  t2948 = -1.*t1124*t2089*t2867;
  t2959 = -1.*t1124*t2888*t2103;
  t4552 = -1.*t4384*t2617;
  t4575 = -1.*t4291*t2617*t4572;
  t2872 = t2867*t2507;
  t2891 = t2888*t2639;
  t3624 = -1.*t2679*t2132;
  t3630 = -1.*t2672*t2165;
  t3642 = t1124*t2089*t2679;
  t3653 = -1.*t1124*t2672*t2103;
  t5027 = -1.*t4373*t1182;
  t5036 = t4384*t4295;
  t5041 = 0. + var1[2] + t3322 + t5027 + t3323 + t5036;
  t3298 = -1.*t527*t1124*t2089*t2672;
  t3299 = -1.*t527*t1124*t2679*t2103;
  t3417 = -1.*t2089*t2672*t1182;
  t3425 = -1.*t2679*t1182*t2103;
  t4705 = t1124*t4271;
  t4717 = t4291*t3890;
  t4721 = t4705 + t4717;
  t5112 = -1.*t527*t1124*t4373;
  t5114 = -1.*t4384*t3480;
  t5120 = 0. + t3385 + t5112 + t3387 + t3394 + t5114;
  t3771 = t1124*t2089*t2867;
  t3773 = t1124*t2888*t2103;
  t5097 = t4384*t2617;
  t5122 = -1.*t4291*t2617*t5120;
  t3750 = -1.*t2867*t2132;
  t3757 = -1.*t2888*t2466;
  t2813 = 0.08055*t2739;
  t3498 = -1.*t2672*t2251;
  t3507 = -1.*t2679*t2269;
  t4860 = t4291*t1182;
  t4862 = -1.*t4271*t4295;
  t4864 = t4860 + t4862;
  t5349 = t1124*t4271*t537;
  t3920 = -1.*t1124*t2089*t2672*t537;
  t3927 = -1.*t1124*t2679*t537*t2103;
  t4607 = t4271*t537*t1182;
  t4611 = t4291*t3366;
  t4613 = t4607 + t4611;
  t4458 = t527*t1124*t4373;
  t4461 = t4384*t3480;
  t3988 = t527*t1124*t2089*t2672;
  t3994 = t527*t1124*t2679*t2103;
  t5149 = t527*t4271*t1182;
  t5157 = t4291*t3081;
  t5160 = t5149 + t5157;
  t5584 = 0. + var1[0] + t4458 + t2673 + t2680 + t4461;
  t4029 = -1.*t2679*t2507;
  t4034 = -1.*t2672*t2269;
  t4063 = t2679*t2132;
  t4067 = t2672*t2165;
  t5642 = -1.*t1124*t4373*t537;
  t5644 = -1.*t4384*t4320;
  t5648 = 0. + t3958 + t5642 + t3962 + t3963 + t5644;
  t4176 = t2672*t2251;
  t4183 = t2679*t2269;
  t5359 = t4291*t2783;
  t5364 = t5349 + t5359;
  t5517 = -1.*t4291*t527*t1124;
  t5520 = -1.*t4271*t3480;
  t5529 = t5517 + t5520;
  t4885 = -1.*t4271*t4320;
  t4898 = t4466 + t4885;
  t5657 = 0.08055*t2919;
  t5665 = -0.01004*t4271*t2617;
  t4129 = t2867*t2132;
  t4137 = t2888*t2466;
  t4095 = -1.*t2867*t2507;
  t4096 = -1.*t2888*t2639;
  t5324 = t4291*t527*t1124;
  t5338 = t4271*t3480;
  t5341 = t5324 + t5338;
  t4998 = t527*t1124*t4271;
  t5006 = -1.*t4291*t3480;
  t5007 = t4998 + t5006;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t527*var2[2] + t537*var1[2]*var2[3];
  p_output1[25]=-1.*t537*var2[2] - 1.*t527*var1[2]*var2[3];
  p_output1[26]=t527*var2[0] + t537*var2[1] + (-1.*t537*var1[0] + t527*var1[1])*var2[3];
  p_output1[27]=-1.*t527*var2[3];
  p_output1[28]=-1.*t537*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1176 + t1237 - 1.*t1124*t527*var1[2]*var2[3] + (t1252 + t1271)*var2[4];
  p_output1[31]=t1380 + t1435 - 1.*t1124*t537*var1[2]*var2[3] + (t1446 + t1466)*var2[4];
  p_output1[32]=t1571 + t1601 + t1860 + (t1924 + t1934)*var2[4];
  p_output1[33]=t2015;
  p_output1[34]=t2052;
  p_output1[35]=t2082;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=t1176 + t1237 + (0.135*t2251 + 0.07996*t2269 - 1.*t1124*t527*var1[2])*var2[3] + (t1252 + t1271 + 0.135*t1124*t2089*t527 + 0.07996*t1124*t2103*t527)*var2[4] + (0.07996*t2132 + 0.135*t2165)*var2[5];
  p_output1[79]=t1380 + t1435 + (0.135*t2132 + 0.07996*t2466 - 1.*t1124*t537*var1[2])*var2[3] + (t1446 + t1466 + 0.135*t1124*t2089*t537 + 0.07996*t1124*t2103*t537)*var2[4] + (0.135*t2269 + 0.07996*t2507)*var2[5];
  p_output1[80]=t1571 + t1601 + t1860 + (t1924 + t1934 - 0.135*t1182*t2089 - 0.07996*t1182*t2103)*var2[4] + (0.07996*t1124*t2089 - 0.135*t1124*t2103)*var2[5];
  p_output1[81]=t2015;
  p_output1[82]=t2052;
  p_output1[83]=t2082;
  p_output1[84]=t2617*var2[1] + (-1.*t2507*t2598 + t2613*t2639)*var2[2] + (t2617*(t2673 + t2680) + t2715*t2739 + 0.08055*t2783 + 0.135*t1124*t537)*var2[3] + (0.08055*t3081 + t2617*(t3093 + t3094) + t2715*t3135 + t2937*t3186 + t2979*(t3202 + t3211) + 0.135*t1182*t527)*var2[4] + (t2942 + 0.08055*t3000 + t2715*t3018 + t2617*(t3027 + t3028) + t2979*(t3040 + t3042))*var2[5] + (t2813 + t2715*t2842 + t2617*(t2872 + t2891) + t2942 + (t2948 + t2959)*t2979)*var2[13];
  p_output1[85]=(-1.*t1124*t2089*t2598 + t1124*t2103*t2613)*var2[0] + t2739*var2[2] + (0.08055*t3480 + t2617*(t3498 + t3507) + t3327*t3549 - 0.135*t1124*t527)*var2[3] + (t2617*(t3298 + t3299) + t3327*t3340 + 0.08055*t3366 + t3186*t3409 + t2739*(t3417 + t3425) + 0.135*t1182*t537)*var2[4] + (t3327*t3607 + t2617*(t3624 + t3630) + t3636 + t2739*(t3642 + t3653) + 0.08055*t3663)*var2[5] + (0.08055*t2979 + t3636 + t3327*t3709 + t2617*(t3750 + t3757) + t2739*(t3771 + t3773))*var2[13];
  p_output1[86]=t2979*var2[0] + (-1.*t2132*t2598 + t2466*t2613)*var2[1] + (t2739*(t3387 + t3394) + t2739*t3900 + t3549*t3978 + t2979*(t4176 + t4183))*var2[3] + (0.135*t1124 + 0.08055*t3890 + t3135*t3900 + t2739*(t3920 + t3927) + t3340*t3978 + t2979*(t3988 + t3994))*var2[4] + (t3018*t3900 + t3607*t3978 + t4022 + t2739*(t4029 + t4034) + t2979*(t4063 + t4067))*var2[5] + (t2842*t3900 + t3709*t3978 + t4022 + t2739*(t4095 + t4096) + t2979*(t4129 + t4137))*var2[13];
  p_output1[87]=t3549*var2[3] + t3340*var2[4] + t3607*var2[5] + t3709*var2[13];
  p_output1[88]=t2739*var2[3] + t3135*var2[4] + t3018*var2[5] + t2842*var2[13];
  p_output1[89]=t3186*var2[4] + t2919*var2[5] + t2919*var2[13];
  p_output1[90]=(-1.*t1182*t4271 - 1.*t4291*t4295)*var2[1] + t4322*var2[2] + (0.08055*t3549 - 1.*t4398*t4416 - 1.*t4448*(t2673 + t2680 + t4458 + t4461) - 0.01004*(t2783*t4271 + t4466))*var2[3] + (0.08055*t3340 - 1.*t4322*(t3202 + t3211 + t1124*t4373 - 1.*t3890*t4384) - 1.*t4398*t4613 - 1.*t4572*t4721 - 0.01004*(t3081*t4271 - 1.*t1182*t4291*t527) - 1.*t4448*(t3093 + t3094 + t3366*t4384 - 1.*t1182*t4373*t537))*var2[4] + (0.08055*t3607 - 0.01004*t3000*t4271 - 1.*t3663*t4291*t4398 - 1.*(t3027 + t3028 + t3663*t4384)*t4448 - 1.*t4322*(t3040 + t3042 + t4552) + t4575)*var2[5] + (0.08055*t3709 - 0.01004*t2739*t4271 - 1.*t2979*t4291*t4398 - 1.*(t2872 + t2891 + t2979*t4384)*t4448 - 1.*t4322*(t2948 + t2959 + t4552) + t4575)*var2[13] + (-0.01004*t4416 - 1.*t4322*(t1182*t4754 - 1.*t4295*t4767) - 1.*t4572*t4864 - 1.*t4398*t4898 - 1.*t4448*(t4320*t4767 + t1124*t4754*t537))*var2[14];
  p_output1[91]=t4448*var2[0] + t5007*var2[2] + (t2813 - 1.*t4448*(t3498 + t3507 - 1.*t2783*t4384 + t4560) - 0.01004*t5341 - 1.*t5041*t5364)*var2[3] + (0.08055*t3135 - 1.*(t3417 + t3425 - 1.*t1124*t4373 + t3890*t4384)*t4416 - 1.*t4721*t5120 - 1.*t5041*t5160 - 1.*t4448*(t3298 + t3299 - 1.*t3081*t4384 + t1182*t4373*t527) - 0.01004*(t3366*t4271 - 1.*t1182*t4291*t537))*var2[4] + (0.08055*t3018 - 0.01004*t3663*t4271 - 1.*(t3624 + t3630 - 1.*t3000*t4384)*t4448 - 1.*t3000*t4291*t5041 - 1.*t4416*(t3642 + t3653 + t5097) + t5122)*var2[5] + (0.08055*t2842 - 0.01004*t2979*t4271 - 1.*(t3750 + t3757 - 1.*t2739*t4384)*t4448 - 1.*t2739*t4291*t5041 - 1.*t4416*(t3771 + t3773 + t5097) + t5122)*var2[13] + (-0.01004*t4322 - 1.*t4416*(-1.*t1182*t4754 + t4295*t4767) - 1.*t4864*t5120 - 1.*t4448*(-1.*t3480*t4767 - 1.*t1124*t4754*t527) - 1.*t5041*t5529)*var2[14];
  p_output1[92]=(-1.*t4291*t4320 + t5349)*var2[0] + t4416*var2[1] + (-1.*t4416*(t3387 + t3394 + t5112 + t5114) - 1.*t4416*t5584 - 1.*t4322*(t4176 + t4183 + t2783*t4384 + t5642) - 1.*t5364*t5648)*var2[3] + (0.08055*t3186 - 0.01004*(t3890*t4271 - 1.*t1124*t4291) - 1.*t4322*(t3988 + t3994 + t3081*t4384 - 1.*t1182*t4373*t527) - 1.*t4416*(t3920 + t3927 - 1.*t3366*t4384 + t1182*t4373*t537) - 1.*t4613*t5584 - 1.*t5160*t5648)*var2[4] + (-1.*t4322*(t4063 + t4067 + t3000*t4384) - 1.*(t4029 + t4034 - 1.*t3663*t4384)*t4416 - 1.*t3663*t4291*t5584 - 1.*t3000*t4291*t5648 + t5657 + t5665)*var2[5] + (-1.*t4322*(t4129 + t4137 + t2739*t4384) - 1.*(t4095 + t4096 - 1.*t2979*t4384)*t4416 - 1.*t2979*t4291*t5584 - 1.*t2739*t4291*t5648 + t5657 + t5665)*var2[13] + (-0.01004*t4448 - 1.*t4322*(t3480*t4767 + t1124*t4754*t527) - 1.*t4416*(-1.*t4320*t4767 - 1.*t1124*t4754*t537) - 1.*t4898*t5584 - 1.*t5529*t5648)*var2[14];
  p_output1[93]=(-1.*t2783*t4291 + t4307)*var2[3] + (-1.*t3081*t4291 - 1.*t1182*t4271*t527)*var2[4] - 1.*t3000*t4291*var2[5] - 1.*t2739*t4291*var2[13] + t5341*var2[14];
  p_output1[94]=t5007*var2[3] + (-1.*t3366*t4291 - 1.*t1182*t4271*t537)*var2[4] - 1.*t3663*t4291*var2[5] - 1.*t2979*t4291*var2[13] + (t4271*t4320 + t1124*t4291*t537)*var2[14];
  p_output1[95]=(-1.*t1124*t4271 - 1.*t3890*t4291)*var2[4] - 1.*t2617*t4291*var2[5] - 1.*t2617*t4291*var2[13] + (-1.*t1182*t4291 + t4271*t4295)*var2[14];
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJs_RightThighJoint_mex.hh"

namespace SymExpression
{

void dJs_RightThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
