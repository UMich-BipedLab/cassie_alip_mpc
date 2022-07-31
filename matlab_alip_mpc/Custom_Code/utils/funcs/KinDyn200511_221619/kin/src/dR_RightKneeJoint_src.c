/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightKneeJoint_src.h"

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
  double t226;
  double t230;
  double t294;
  double t304;
  double t223;
  double t324;
  double t568;
  double t298;
  double t355;
  double t439;
  double t117;
  double t586;
  double t676;
  double t787;
  double t836;
  double t889;
  double t958;
  double t984;
  double t1018;
  double t1078;
  double t4;
  double t1515;
  double t1503;
  double t1542;
  double t1604;
  double t1683;
  double t1768;
  double t1861;
  double t1241;
  double t1653;
  double t1894;
  double t1920;
  double t1989;
  double t2012;
  double t2054;
  double t2470;
  double t2471;
  double t2476;
  double t2508;
  double t2527;
  double t2587;
  double t2588;
  double t2594;
  double t2686;
  double t3180;
  double t3249;
  double t3642;
  double t3704;
  double t4250;
  double t4372;
  double t4400;
  double t4506;
  double t4515;
  double t4517;
  double t4527;
  double t4677;
  double t4689;
  double t4691;
  double t4711;
  double t4726;
  double t4795;
  double t4694;
  double t4811;
  double t4813;
  double t4820;
  double t4885;
  double t4903;
  double t4904;
  double t4910;
  double t4923;
  double t5125;
  double t5137;
  double t5139;
  double t5142;
  double t5151;
  double t5154;
  double t5192;
  double t5212;
  double t5214;
  double t5280;
  double t5282;
  double t5318;
  double t5324;
  double t5328;
  double t5358;
  double t5366;
  double t5379;
  double t5465;
  double t5468;
  double t5469;
  double t5476;
  double t5479;
  double t5480;
  double t5489;
  double t5490;
  double t5491;
  double t5504;
  double t5505;
  double t5512;
  double t5518;
  double t4549;
  double t4606;
  double t4636;
  double t5613;
  double t5618;
  double t5621;
  double t5650;
  double t5652;
  double t5657;
  double t5665;
  double t5746;
  double t5748;
  double t5756;
  double t5764;
  double t5766;
  double t5767;
  double t5805;
  double t5806;
  double t5823;
  double t5841;
  double t5854;
  double t5860;
  double t5832;
  double t5863;
  double t5874;
  double t5878;
  double t5879;
  double t5891;
  double t5892;
  double t5903;
  double t5906;
  double t5931;
  double t5933;
  double t5938;
  double t5953;
  double t5958;
  double t5959;
  double t5962;
  double t6010;
  double t6012;
  double t6013;
  double t6020;
  double t6021;
  double t6034;
  double t6040;
  double t6045;
  double t6050;
  double t531;
  double t1149;
  double t1177;
  double t1310;
  double t1319;
  double t1427;
  double t1950;
  double t2205;
  double t2275;
  double t2287;
  double t2291;
  double t2370;
  double t3468;
  double t3718;
  double t3792;
  double t3991;
  double t4038;
  double t4058;
  double t4237;
  double t4412;
  double t4434;
  double t6164;
  double t4819;
  double t4969;
  double t4992;
  double t5007;
  double t5055;
  double t5060;
  double t5141;
  double t5226;
  double t5227;
  double t5241;
  double t5256;
  double t5264;
  double t5355;
  double t5380;
  double t5396;
  double t5400;
  double t5426;
  double t5438;
  double t5508;
  double t5519;
  double t5524;
  double t5534;
  double t5535;
  double t5549;
  double t4638;
  double t4644;
  double t5611;
  double t5626;
  double t5629;
  double t5719;
  double t5721;
  double t5723;
  double t6316;
  double t6382;
  double t6383;
  double t6386;
  double t5925;
  double t5939;
  double t5942;
  double t5978;
  double t5979;
  double t5990;
  double t6419;
  double t6014;
  double t6054;
  double t6057;
  double t6065;
  double t6066;
  double t6067;
  t226 = Cos(var1[3]);
  t230 = Cos(var1[4]);
  t294 = Cos(var1[5]);
  t304 = Sin(var1[13]);
  t223 = Cos(var1[13]);
  t324 = Sin(var1[5]);
  t568 = Cos(var1[15]);
  t298 = t223*t226*t230*t294;
  t355 = -1.*t226*t230*t304*t324;
  t439 = t298 + t355;
  t117 = Sin(var1[15]);
  t586 = Cos(var1[14]);
  t676 = Sin(var1[4]);
  t787 = -1.*t586*t226*t676;
  t836 = Sin(var1[14]);
  t889 = t226*t230*t294*t304;
  t958 = t223*t226*t230*t324;
  t984 = t889 + t958;
  t1018 = t836*t984;
  t1078 = t787 + t1018;
  t4 = Sin(var1[16]);
  t1515 = Sin(var1[3]);
  t1503 = t226*t294*t676;
  t1542 = t1515*t324;
  t1604 = t1503 + t1542;
  t1683 = t294*t1515;
  t1768 = -1.*t226*t676*t324;
  t1861 = t1683 + t1768;
  t1241 = Cos(var1[16]);
  t1653 = -1.*t304*t1604;
  t1894 = t223*t1861;
  t1920 = t1653 + t1894;
  t1989 = t223*t1604;
  t2012 = t304*t1861;
  t2054 = t1989 + t2012;
  t2470 = -1.*t226*t230*t836;
  t2471 = t304*t1604;
  t2476 = -1.*t294*t1515;
  t2508 = t226*t676*t324;
  t2527 = t2476 + t2508;
  t2587 = t223*t2527;
  t2588 = t2471 + t2587;
  t2594 = t586*t2588;
  t2686 = t2470 + t2594;
  t3180 = -1.*t223*t2527;
  t3249 = t1653 + t3180;
  t3642 = -1.*t304*t2527;
  t3704 = t1989 + t3642;
  t4250 = t586*t226*t230;
  t4372 = t836*t2588;
  t4400 = t4250 + t4372;
  t4506 = t568*t3704;
  t4515 = -1.*t117*t4400;
  t4517 = t4506 + t4515;
  t4527 = t4*t4517;
  t4677 = -1.*t294*t1515*t676;
  t4689 = t226*t324;
  t4691 = t4677 + t4689;
  t4711 = -1.*t226*t294;
  t4726 = -1.*t1515*t676*t324;
  t4795 = t4711 + t4726;
  t4694 = t223*t4691;
  t4811 = -1.*t304*t4795;
  t4813 = t4694 + t4811;
  t4820 = -1.*t586*t230*t1515;
  t4885 = t304*t4691;
  t4903 = t223*t4795;
  t4904 = t4885 + t4903;
  t4910 = t836*t4904;
  t4923 = t4820 + t4910;
  t5125 = t223*t230*t294*t1515;
  t5137 = -1.*t230*t304*t1515*t324;
  t5139 = t5125 + t5137;
  t5142 = -1.*t586*t1515*t676;
  t5151 = t230*t294*t304*t1515;
  t5154 = t223*t230*t1515*t324;
  t5192 = t5151 + t5154;
  t5212 = t836*t5192;
  t5214 = t5142 + t5212;
  t5280 = t294*t1515*t676;
  t5282 = -1.*t226*t324;
  t5318 = t5280 + t5282;
  t5324 = -1.*t304*t5318;
  t5328 = t5324 + t4903;
  t5358 = t223*t5318;
  t5366 = t304*t4795;
  t5379 = t5358 + t5366;
  t5465 = -1.*t230*t836*t1515;
  t5468 = t304*t5318;
  t5469 = t226*t294;
  t5476 = t1515*t676*t324;
  t5479 = t5469 + t5476;
  t5480 = t223*t5479;
  t5489 = t5468 + t5480;
  t5490 = t586*t5489;
  t5491 = t5465 + t5490;
  t5504 = -1.*t223*t5479;
  t5505 = t5324 + t5504;
  t5512 = -1.*t304*t5479;
  t5518 = t5358 + t5512;
  t4549 = t117*t3704;
  t4606 = t568*t4400;
  t4636 = t4549 + t4606;
  t5613 = t586*t230*t1515;
  t5618 = t836*t5489;
  t5621 = t5613 + t5618;
  t5650 = t568*t5518;
  t5652 = -1.*t117*t5621;
  t5657 = t5650 + t5652;
  t5665 = t4*t5657;
  t5746 = t836*t676;
  t5748 = t230*t294*t304;
  t5756 = t223*t230*t324;
  t5764 = t5748 + t5756;
  t5766 = t586*t5764;
  t5767 = t5746 + t5766;
  t5805 = -1.*t230*t294*t304;
  t5806 = -1.*t223*t230*t324;
  t5823 = t5805 + t5806;
  t5841 = t223*t230*t294;
  t5854 = -1.*t230*t304*t324;
  t5860 = t5841 + t5854;
  t5832 = t117*t5823;
  t5863 = t568*t836*t5860;
  t5874 = t5832 + t5863;
  t5878 = t4*t5874;
  t5879 = t568*t5823;
  t5891 = -1.*t836*t117*t5860;
  t5892 = t5879 + t5891;
  t5903 = -1.*t1241*t5892;
  t5906 = t5878 + t5903;
  t5931 = -1.*t586*t676;
  t5933 = t836*t5764;
  t5938 = t5931 + t5933;
  t5953 = t568*t5860;
  t5958 = -1.*t117*t5938;
  t5959 = t5953 + t5958;
  t5962 = t4*t5959;
  t6010 = -1.*t223*t294*t676;
  t6012 = t304*t676*t324;
  t6013 = t6010 + t6012;
  t6020 = -1.*t586*t230;
  t6021 = -1.*t294*t304*t676;
  t6034 = -1.*t223*t676*t324;
  t6040 = t6021 + t6034;
  t6045 = t836*t6040;
  t6050 = t6020 + t6045;
  t531 = t117*t439;
  t1149 = t568*t1078;
  t1177 = t531 + t1149;
  t1310 = t568*t439;
  t1319 = -1.*t117*t1078;
  t1427 = t1310 + t1319;
  t1950 = t117*t1920;
  t2205 = t568*t836*t2054;
  t2275 = t1950 + t2205;
  t2287 = t568*t1920;
  t2291 = -1.*t836*t117*t2054;
  t2370 = t2287 + t2291;
  t3468 = t117*t3249;
  t3718 = t568*t836*t3704;
  t3792 = t3468 + t3718;
  t3991 = t568*t3249;
  t4038 = -1.*t836*t117*t3704;
  t4058 = t3991 + t4038;
  t4237 = -1.*t117*t3704;
  t4412 = -1.*t568*t4400;
  t4434 = t4237 + t4412;
  t6164 = t1241*t4517;
  t4819 = t117*t4813;
  t4969 = t568*t4923;
  t4992 = t4819 + t4969;
  t5007 = t568*t4813;
  t5055 = -1.*t117*t4923;
  t5060 = t5007 + t5055;
  t5141 = t117*t5139;
  t5226 = t568*t5214;
  t5227 = t5141 + t5226;
  t5241 = t568*t5139;
  t5256 = -1.*t117*t5214;
  t5264 = t5241 + t5256;
  t5355 = t117*t5328;
  t5380 = t568*t836*t5379;
  t5396 = t5355 + t5380;
  t5400 = t568*t5328;
  t5426 = -1.*t836*t117*t5379;
  t5438 = t5400 + t5426;
  t5508 = t117*t5505;
  t5519 = t568*t836*t5518;
  t5524 = t5508 + t5519;
  t5534 = t568*t5505;
  t5535 = -1.*t836*t117*t5518;
  t5549 = t5534 + t5535;
  t4638 = t1241*t4636;
  t4644 = t4638 + t4527;
  t5611 = -1.*t117*t5518;
  t5626 = -1.*t568*t5621;
  t5629 = t5611 + t5626;
  t5719 = t117*t5518;
  t5721 = t568*t5621;
  t5723 = t5719 + t5721;
  t6316 = t1241*t5657;
  t6382 = t1241*t5874;
  t6383 = t4*t5892;
  t6386 = t6382 + t6383;
  t5925 = -1.*t117*t5860;
  t5939 = -1.*t568*t5938;
  t5942 = t5925 + t5939;
  t5978 = t117*t5860;
  t5979 = t568*t5938;
  t5990 = t5978 + t5979;
  t6419 = t1241*t5959;
  t6014 = t117*t6013;
  t6054 = t568*t6050;
  t6057 = t6014 + t6054;
  t6065 = t568*t6013;
  t6066 = -1.*t117*t6050;
  t6067 = t6065 + t6066;
  p_output1[0]=(t4*t4992 - 1.*t1241*t5060)*var2[3] + (-1.*t1241*t1427 + t1177*t4)*var2[4] + (-1.*t1241*t2370 + t2275*t4)*var2[5] + (t3792*t4 - 1.*t1241*t4058)*var2[13] + (t117*t1241*t2686 + t2686*t4*t568)*var2[14] + (-1.*t1241*t4434 + t4527)*var2[15] + t4644*var2[16];
  p_output1[1]=(-1.*t1241*t4517 + t4*t4636)*var2[3] + (t4*t5227 - 1.*t1241*t5264)*var2[4] + (t4*t5396 - 1.*t1241*t5438)*var2[5] + (t4*t5524 - 1.*t1241*t5549)*var2[13] + (t117*t1241*t5491 + t4*t5491*t568)*var2[14] + (-1.*t1241*t5629 + t5665)*var2[15] + (t5665 + t1241*t5723)*var2[16];
  p_output1[2]=(t4*t6057 - 1.*t1241*t6067)*var2[4] + t5906*var2[5] + t5906*var2[13] + (t117*t1241*t5767 + t4*t568*t5767)*var2[14] + (-1.*t1241*t5942 + t5962)*var2[15] + (t5962 + t1241*t5990)*var2[16];
  p_output1[3]=(t1241*t4992 + t4*t5060)*var2[3] + (t1177*t1241 + t1427*t4)*var2[4] + (t1241*t2275 + t2370*t4)*var2[5] + (t1241*t3792 + t4*t4058)*var2[13] + (-1.*t117*t2686*t4 + t1241*t2686*t568)*var2[14] + (t4*t4434 + t6164)*var2[15] + (-1.*t4*t4636 + t6164)*var2[16];
  p_output1[4]=t4644*var2[3] + (t1241*t5227 + t4*t5264)*var2[4] + (t1241*t5396 + t4*t5438)*var2[5] + (t1241*t5524 + t4*t5549)*var2[13] + (-1.*t117*t4*t5491 + t1241*t5491*t568)*var2[14] + (t4*t5629 + t6316)*var2[15] + (-1.*t4*t5723 + t6316)*var2[16];
  p_output1[5]=(t1241*t6057 + t4*t6067)*var2[4] + t6386*var2[5] + t6386*var2[13] + (-1.*t117*t4*t5767 + t1241*t568*t5767)*var2[14] + (t4*t5942 + t6419)*var2[15] + (-1.*t4*t5990 + t6419)*var2[16];
  p_output1[6]=(t5465 - 1.*t4904*t586)*var2[3] + (-1.*t226*t676*t836 - 1.*t586*t984)*var2[4] - 1.*t2054*t586*var2[5] - 1.*t3704*t586*var2[13] + t4400*var2[14];
  p_output1[7]=(-1.*t2588*t586 + t226*t230*t836)*var2[3] + (-1.*t5192*t586 - 1.*t1515*t676*t836)*var2[4] - 1.*t5379*t586*var2[5] - 1.*t5518*t586*var2[13] + t5621*var2[14];
  p_output1[8]=(-1.*t586*t6040 - 1.*t230*t836)*var2[4] - 1.*t586*t5860*var2[5] - 1.*t586*t5860*var2[13] + t5938*var2[14];
}



void dR_RightKneeJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
