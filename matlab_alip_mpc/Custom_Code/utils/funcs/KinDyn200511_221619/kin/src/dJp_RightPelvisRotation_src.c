/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightPelvisRotation_src.h"

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
  double t1534;
  double t259;
  double t319;
  double t490;
  double t536;
  double t1401;
  double t265;
  double t2434;
  double t1338;
  double t1457;
  double t1501;
  double t3155;
  double t1685;
  double t2416;
  double t2424;
  double t2425;
  double t3198;
  double t3232;
  double t3421;
  double t3453;
  double t3525;
  double t3533;
  double t3875;
  double t3974;
  double t4060;
  double t4120;
  double t4121;
  double t4122;
  double t4130;
  double t4351;
  double t4354;
  double t4373;
  double t4182;
  double t5309;
  double t5310;
  double t5325;
  double t3541;
  double t3840;
  double t3850;
  double t4090;
  double t4093;
  double t4112;
  double t5345;
  double t5502;
  double t5506;
  double t5514;
  double t5372;
  double t4224;
  double t4231;
  double t4859;
  double t4942;
  double t4981;
  double t5725;
  double t5731;
  double t5744;
  double t5749;
  double t5756;
  double t1580;
  double t1900;
  double t2583;
  double t2614;
  double t2652;
  double t2756;
  double t2816;
  double t2886;
  double t2925;
  double t2931;
  double t3012;
  double t3021;
  double t3158;
  double t4489;
  double t4501;
  double t4582;
  double t4637;
  double t4725;
  double t4779;
  double t4802;
  double t5110;
  double t5170;
  double t5925;
  double t5926;
  double t5941;
  double t5957;
  double t5959;
  double t5614;
  double t6293;
  double t6297;
  double t6298;
  double t6309;
  double t6316;
  double t6328;
  double t6331;
  double t6337;
  double t5801;
  double t5813;
  double t5818;
  double t3446;
  double t3535;
  double t3540;
  double t3542;
  double t3554;
  double t3587;
  double t3615;
  double t3650;
  double t3654;
  double t5350;
  double t4336;
  double t4389;
  double t4393;
  double t4402;
  double t4412;
  double t4413;
  double t4436;
  double t4439;
  double t4474;
  double t5986;
  double t5995;
  double t6006;
  double t5342;
  double t5343;
  double t5362;
  double t5384;
  double t5388;
  double t5409;
  double t5425;
  double t6529;
  double t6541;
  double t6558;
  double t5643;
  double t5618;
  double t5634;
  double t5639;
  double t5664;
  double t5694;
  double t5696;
  double t6158;
  double t6161;
  double t6163;
  double t6164;
  double t6171;
  double t6174;
  double t6186;
  double t6193;
  double t6200;
  double t6204;
  double t6369;
  double t6370;
  double t6386;
  double t5721;
  double t5724;
  double t5765;
  double t6437;
  double t6441;
  double t6454;
  double t6458;
  double t6459;
  double t6473;
  double t6475;
  double t5523;
  double t5546;
  double t4086;
  double t4128;
  double t4142;
  double t4155;
  double t4170;
  double t4264;
  double t4284;
  double t5920;
  double t5922;
  double t5975;
  double t5448;
  double t5520;
  double t5556;
  double t5570;
  double t5571;
  double t5584;
  double t5590;
  double t6559;
  double t6564;
  double t6573;
  double t6576;
  double t6597;
  double t6629;
  double t6691;
  double t6707;
  double t6789;
  double t6918;
  double t6950;
  double t6961;
  double t6817;
  double t6837;
  double t6841;
  double t6219;
  double t6283;
  double t6361;
  t1534 = Sin(var1[3]);
  t259 = Cos(var1[4]);
  t319 = Cos(var1[13]);
  t490 = -1.*t319;
  t536 = 1. + t490;
  t1401 = Sin(var1[13]);
  t265 = Cos(var1[5]);
  t2434 = Sin(var1[5]);
  t1338 = 0.07996*t536;
  t1457 = 0.135*t1401;
  t1501 = 0. + t1338 + t1457;
  t3155 = Cos(var1[3]);
  t1685 = Sin(var1[4]);
  t2416 = -0.135*t536;
  t2424 = 0.07996*t1401;
  t2425 = 0. + t2416 + t2424;
  t3198 = -1.*t3155*t265*t1685;
  t3232 = -1.*t1534*t2434;
  t3421 = t3198 + t3232;
  t3453 = t265*t1534;
  t3525 = -1.*t3155*t1685*t2434;
  t3533 = t3453 + t3525;
  t3875 = -1.*t265*t1534*t1685;
  t3974 = t3155*t2434;
  t4060 = t3875 + t3974;
  t4120 = -1.*t3155*t265;
  t4121 = -1.*t1534*t1685*t2434;
  t4122 = t4120 + t4121;
  t4130 = -1.*t1401*t4060;
  t4351 = t3155*t265;
  t4354 = t1534*t1685*t2434;
  t4373 = t4351 + t4354;
  t4182 = t319*t4060;
  t5309 = t3155*t265*t1685;
  t5310 = t1534*t2434;
  t5325 = t5309 + t5310;
  t3541 = t319*t3533;
  t3840 = 0.135*t319;
  t3850 = t3840 + t2424;
  t4090 = 0.07996*t319;
  t4093 = -0.135*t1401;
  t4112 = t4090 + t4093;
  t5345 = -1.*t1401*t5325;
  t5502 = -1.*t265*t1534;
  t5506 = t3155*t1685*t2434;
  t5514 = t5502 + t5506;
  t5372 = t319*t5325;
  t4224 = -1.*t1401*t4122;
  t4231 = t4182 + t4224;
  t4859 = t319*t3155*t259*t265;
  t4942 = -1.*t3155*t259*t1401*t2434;
  t4981 = t4859 + t4942;
  t5725 = -1.*t3155*t259*t265*t1401;
  t5731 = -1.*t319*t3155*t259*t2434;
  t5744 = t5725 + t5731;
  t5749 = 0.09786*t5744;
  t5756 = -0.1351*t4981;
  t1580 = -1.*t259*t265*t1501*t1534;
  t1900 = -0.05485*t1534*t1685;
  t2583 = -1.*t259*t2425*t1534*t2434;
  t2614 = -1.*t259*t265*t1401*t1534;
  t2652 = -1.*t319*t259*t1534*t2434;
  t2756 = t2614 + t2652;
  t2816 = -0.1351*t2756;
  t2886 = -1.*t319*t259*t265*t1534;
  t2925 = t259*t1401*t1534*t2434;
  t2931 = t2886 + t2925;
  t3012 = 0.09786*t2931;
  t3021 = t1580 + t1900 + t2583 + t2816 + t3012;
  t3158 = 0.05485*t3155*t259;
  t4489 = t3155*t259*t265*t1501;
  t4501 = 0.05485*t3155*t1685;
  t4582 = t3155*t259*t2425*t2434;
  t4637 = t3155*t259*t265*t1401;
  t4725 = t319*t3155*t259*t2434;
  t4779 = t4637 + t4725;
  t4802 = -0.1351*t4779;
  t5110 = 0.09786*t4981;
  t5170 = t4489 + t4501 + t4582 + t4802 + t5110;
  t5925 = 0.09786*t2756;
  t5926 = t319*t259*t265*t1534;
  t5941 = -1.*t259*t1401*t1534*t2434;
  t5957 = t5926 + t5941;
  t5959 = -0.1351*t5957;
  t5614 = 0.05485*t259*t1534;
  t6293 = t265*t1401*t1685;
  t6297 = t319*t1685*t2434;
  t6298 = t6293 + t6297;
  t6309 = 0.09786*t6298;
  t6316 = -1.*t319*t265*t1685;
  t6328 = t1401*t1685*t2434;
  t6331 = t6316 + t6328;
  t6337 = -0.1351*t6331;
  t5801 = t3155*t259*t265*t2425;
  t5813 = -1.*t3155*t259*t1501*t2434;
  t5818 = t5801 + t5813 + t5749 + t5756;
  t3446 = t1501*t3421;
  t3535 = t2425*t3533;
  t3540 = t1401*t3421;
  t3542 = t3540 + t3541;
  t3554 = -0.1351*t3542;
  t3587 = t319*t3421;
  t3615 = -1.*t1401*t3533;
  t3650 = t3587 + t3615;
  t3654 = 0.09786*t3650;
  t5350 = t5345 + t3541;
  t4336 = t2425*t4060;
  t4389 = t1501*t4373;
  t4393 = t319*t4373;
  t4402 = t4130 + t4393;
  t4412 = 0.09786*t4402;
  t4413 = t1401*t4373;
  t4436 = t4182 + t4413;
  t4439 = -0.1351*t4436;
  t4474 = t4336 + t4389 + t4412 + t4439;
  t5986 = t259*t265*t2425*t1534;
  t5995 = -1.*t259*t1501*t1534*t2434;
  t6006 = t5986 + t5995 + t5925 + t5959;
  t5342 = t2425*t5325;
  t5343 = t1501*t3533;
  t5362 = 0.09786*t5350;
  t5384 = t1401*t3533;
  t5388 = t5372 + t5384;
  t5409 = -0.1351*t5388;
  t5425 = t5342 + t5343 + t5362 + t5409;
  t6529 = t265*t1534*t1685;
  t6541 = -1.*t3155*t2434;
  t6558 = t6529 + t6541;
  t5643 = t319*t4122;
  t5618 = t1501*t4060;
  t5634 = t2425*t4122;
  t5639 = t1401*t4060;
  t5664 = t5639 + t5643;
  t5694 = -0.1351*t5664;
  t5696 = 0.09786*t4231;
  t6158 = -1.*t259*t265*t1501;
  t6161 = -1.*t259*t2425*t2434;
  t6163 = -1.*t259*t265*t1401;
  t6164 = -1.*t319*t259*t2434;
  t6171 = t6163 + t6164;
  t6174 = -0.1351*t6171;
  t6186 = -1.*t319*t259*t265;
  t6193 = t259*t1401*t2434;
  t6200 = t6186 + t6193;
  t6204 = 0.09786*t6200;
  t6369 = -1.*t265*t2425*t1685;
  t6370 = t1501*t1685*t2434;
  t6386 = t6369 + t6370 + t6309 + t6337;
  t5721 = t3155*t259*t265*t3850;
  t5724 = t3155*t259*t4112*t2434;
  t5765 = t5721 + t5724 + t5749 + t5756;
  t6437 = t4112*t5325;
  t6441 = t3850*t3533;
  t6454 = -0.1351*t5350;
  t6458 = -1.*t319*t5325;
  t6459 = t6458 + t3615;
  t6473 = 0.09786*t6459;
  t6475 = t6437 + t6441 + t6454 + t6473;
  t5523 = -1.*t319*t5514;
  t5546 = t5345 + t5523;
  t4086 = t3850*t4060;
  t4128 = t4112*t4122;
  t4142 = -1.*t319*t4122;
  t4155 = t4130 + t4142;
  t4170 = 0.09786*t4155;
  t4264 = -0.1351*t4231;
  t4284 = t4086 + t4128 + t4170 + t4264;
  t5920 = t259*t265*t3850*t1534;
  t5922 = t259*t4112*t1534*t2434;
  t5975 = t5920 + t5922 + t5925 + t5959;
  t5448 = t3850*t5325;
  t5520 = t4112*t5514;
  t5556 = 0.09786*t5546;
  t5570 = -1.*t1401*t5514;
  t5571 = t5372 + t5570;
  t5584 = -0.1351*t5571;
  t5590 = t5448 + t5520 + t5556 + t5584;
  t6559 = t4112*t6558;
  t6564 = t3850*t4122;
  t6573 = -1.*t1401*t6558;
  t6576 = t6573 + t5643;
  t6597 = -0.1351*t6576;
  t6629 = -1.*t319*t6558;
  t6691 = t6629 + t4224;
  t6707 = 0.09786*t6691;
  t6789 = t6559 + t6564 + t6597 + t6707;
  t6918 = -0.135*t319;
  t6950 = -0.07996*t1401;
  t6961 = t6918 + t6950;
  t6817 = t259*t265*t4112;
  t6837 = -1.*t259*t3850*t2434;
  t6841 = t6817 + t6837 + t6174 + t6204;
  t6219 = -1.*t265*t3850*t1685;
  t6283 = -1.*t4112*t1685*t2434;
  t6361 = t6219 + t6283 + t6309 + t6337;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t3158 + t3446 + t3535 + t3554 + t3654)*var2[3] + t3021*var2[4] + t4474*var2[5] + t4284*var2[13];
  p_output1[10]=(t5614 + t5618 + t5634 + t5694 + t5696)*var2[3] + t5170*var2[4] + t5425*var2[5] + t5590*var2[13];
  p_output1[11]=0;
  p_output1[12]=t3021*var2[3] + (-1.*t1685*t2425*t2434*t3155 - 1.*t1501*t1685*t265*t3155 + t3158 - 0.1351*(-1.*t1401*t1685*t265*t3155 - 1.*t1685*t2434*t3155*t319) + 0.09786*(t1401*t1685*t2434*t3155 - 1.*t1685*t265*t3155*t319))*var2[4] + t5818*var2[5] + t5765*var2[13];
  p_output1[13]=t5170*var2[3] + (-1.*t1534*t1685*t2425*t2434 - 1.*t1501*t1534*t1685*t265 - 0.1351*(-1.*t1401*t1534*t1685*t265 - 1.*t1534*t1685*t2434*t319) + 0.09786*(t1401*t1534*t1685*t2434 - 1.*t1534*t1685*t265*t319) + t5614)*var2[4] + t6006*var2[5] + t5975*var2[13];
  p_output1[14]=(-0.05485*t1685 + t6158 + t6161 + t6174 + t6204)*var2[4] + t6386*var2[5] + t6361*var2[13];
  p_output1[15]=t4474*var2[3] + t5818*var2[4] + (t3446 + t3535 + t3554 + t3654)*var2[5] + t6475*var2[13];
  p_output1[16]=t5425*var2[3] + t6006*var2[4] + (t5618 + t5634 + t5694 + t5696)*var2[5] + t6789*var2[13];
  p_output1[17]=t6386*var2[4] + (t6158 + t6161 + t6174 + t6204)*var2[5] + t6841*var2[13];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t4284*var2[3] + t5765*var2[4] + t6475*var2[5] + (-0.1351*t5546 + t6437 + 0.09786*(t1401*t5514 + t6458) + t5514*t6961)*var2[13];
  p_output1[40]=t5590*var2[3] + t5975*var2[4] + t6789*var2[5] + (t6559 - 0.1351*(-1.*t319*t4373 + t6573) + 0.09786*(t4413 + t6629) + t4373*t6961)*var2[13];
  p_output1[41]=t6361*var2[4] + t6841*var2[5] + (t6174 + t6204 + t6817 + t2434*t259*t6961)*var2[13];
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
}



void dJp_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
