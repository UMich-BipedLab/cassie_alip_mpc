/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftThighJoint_src.h"

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
  double t474;
  double t144;
  double t870;
  double t469;
  double t947;
  double t2553;
  double t134;
  double t143;
  double t472;
  double t1396;
  double t1639;
  double t1744;
  double t1837;
  double t1867;
  double t1951;
  double t2215;
  double t2265;
  double t2286;
  double t2596;
  double t3146;
  double t3320;
  double t3421;
  double t3511;
  double t3516;
  double t3522;
  double t3577;
  double t3471;
  double t3485;
  double t4209;
  double t4222;
  double t4235;
  double t4187;
  double t4194;
  double t4199;
  double t4642;
  double t4644;
  double t4657;
  double t4659;
  double t4674;
  double t4677;
  double t4684;
  double t4685;
  double t4686;
  double t4440;
  double t4741;
  double t4858;
  double t4745;
  double t4795;
  double t3326;
  double t3327;
  double t3331;
  double t5057;
  double t5076;
  double t5078;
  double t5124;
  double t5130;
  double t5131;
  double t5172;
  double t5177;
  double t5181;
  double t5184;
  double t5189;
  double t5192;
  double t2326;
  double t2622;
  double t2818;
  double t4051;
  double t4075;
  double t4097;
  double t4098;
  double t4099;
  double t4102;
  double t3976;
  double t3981;
  double t4015;
  double t3619;
  double t3669;
  double t3555;
  double t3615;
  double t3798;
  double t3815;
  double t4374;
  double t4448;
  double t4450;
  double t4495;
  double t4550;
  double t4200;
  double t4246;
  double t4342;
  double t4687;
  double t4689;
  double t4695;
  double t4951;
  double t4953;
  double t4959;
  double t4964;
  double t4973;
  double t4982;
  double t4936;
  double t4938;
  double t4944;
  double t4871;
  double t4881;
  double t4860;
  double t4905;
  double t4908;
  double t3375;
  double t3487;
  double t3489;
  double t4706;
  double t4718;
  double t4732;
  double t5088;
  double t5089;
  double t5096;
  double t5713;
  double t5734;
  double t5737;
  double t5212;
  double t5221;
  double t5238;
  double t5239;
  double t5240;
  double t5250;
  double t5202;
  double t5204;
  double t5208;
  double t5114;
  double t5117;
  double t5120;
  t474 = Cos(var1[3]);
  t144 = Cos(var1[5]);
  t870 = Sin(var1[4]);
  t469 = Sin(var1[3]);
  t947 = Sin(var1[5]);
  t2553 = Cos(var1[4]);
  t134 = Cos(var1[7]);
  t143 = Cos(var1[6]);
  t472 = -1.*t144*t469;
  t1396 = t474*t870*t947;
  t1639 = t472 + t1396;
  t1744 = t143*t1639;
  t1837 = t474*t144*t870;
  t1867 = t469*t947;
  t1951 = t1837 + t1867;
  t2215 = Sin(var1[6]);
  t2265 = t1951*t2215;
  t2286 = t1744 + t2265;
  t2596 = Sin(var1[7]);
  t3146 = Sin(var1[8]);
  t3320 = Cos(var1[8]);
  t3421 = t143*t1951;
  t3511 = t144*t469;
  t3516 = -1.*t474*t870*t947;
  t3522 = t3511 + t3516;
  t3577 = -1.*t1951*t2215;
  t3471 = -1.*t1639*t2215;
  t3485 = t3421 + t3471;
  t4209 = -1.*t474*t144;
  t4222 = -1.*t469*t870*t947;
  t4235 = t4209 + t4222;
  t4187 = -1.*t144*t469*t870;
  t4194 = t474*t947;
  t4199 = t4187 + t4194;
  t4642 = t474*t144;
  t4644 = t469*t870*t947;
  t4657 = t4642 + t4644;
  t4659 = t143*t4657;
  t4674 = t144*t469*t870;
  t4677 = -1.*t474*t947;
  t4684 = t4674 + t4677;
  t4685 = t4684*t2215;
  t4686 = t4659 + t4685;
  t4440 = t143*t4235;
  t4741 = t143*t4684;
  t4858 = -1.*t4684*t2215;
  t4745 = -1.*t4657*t2215;
  t4795 = t4741 + t4745;
  t3326 = t474*t2553*t134;
  t3327 = t2286*t2596;
  t3331 = t3326 + t3327;
  t5057 = t2553*t143*t947;
  t5076 = t2553*t144*t2215;
  t5078 = t5057 + t5076;
  t5124 = t2553*t144*t143;
  t5130 = -1.*t2553*t947*t2215;
  t5131 = t5124 + t5130;
  t5172 = -1.*t2553*t143*t947;
  t5177 = -1.*t2553*t144*t2215;
  t5181 = t5172 + t5177;
  t5184 = -1.*t3320*t5181;
  t5189 = t5131*t2596*t3146;
  t5192 = t5184 + t5189;
  t2326 = t134*t2286;
  t2622 = -1.*t474*t2553*t2596;
  t2818 = t2326 + t2622;
  t4051 = -1.*t474*t134*t870;
  t4075 = t474*t2553*t143*t947;
  t4097 = t474*t2553*t144*t2215;
  t4098 = t4075 + t4097;
  t4099 = t4098*t2596;
  t4102 = t4051 + t4099;
  t3976 = t474*t2553*t144*t143;
  t3981 = -1.*t474*t2553*t947*t2215;
  t4015 = t3976 + t3981;
  t3619 = t3522*t2215;
  t3669 = t3421 + t3619;
  t3555 = t143*t3522;
  t3615 = t3555 + t3577;
  t3798 = -1.*t143*t1639;
  t3815 = t3798 + t3577;
  t4374 = -1.*t2553*t134*t469;
  t4448 = t4199*t2215;
  t4450 = t4440 + t4448;
  t4495 = t4450*t2596;
  t4550 = t4374 + t4495;
  t4200 = t143*t4199;
  t4246 = -1.*t4235*t2215;
  t4342 = t4200 + t4246;
  t4687 = t134*t4686;
  t4689 = -1.*t2553*t469*t2596;
  t4695 = t4687 + t4689;
  t4951 = -1.*t134*t469*t870;
  t4953 = t2553*t143*t469*t947;
  t4959 = t2553*t144*t469*t2215;
  t4964 = t4953 + t4959;
  t4973 = t4964*t2596;
  t4982 = t4951 + t4973;
  t4936 = t2553*t144*t143*t469;
  t4938 = -1.*t2553*t469*t947*t2215;
  t4944 = t4936 + t4938;
  t4871 = t4235*t2215;
  t4881 = t4741 + t4871;
  t4860 = t4440 + t4858;
  t4905 = -1.*t143*t4657;
  t4908 = t4905 + t4858;
  t3375 = t3320*t3331;
  t3487 = t3485*t3146;
  t3489 = t3375 + t3487;
  t4706 = t2553*t134*t469;
  t4718 = t4686*t2596;
  t4732 = t4706 + t4718;
  t5088 = t134*t5078;
  t5089 = t870*t2596;
  t5096 = t5088 + t5089;
  t5713 = t3320*t5131*t2596;
  t5734 = t5181*t3146;
  t5737 = t5713 + t5734;
  t5212 = -1.*t2553*t134;
  t5221 = -1.*t143*t870*t947;
  t5238 = -1.*t144*t870*t2215;
  t5239 = t5221 + t5238;
  t5240 = t5239*t2596;
  t5250 = t5212 + t5240;
  t5202 = -1.*t144*t143*t870;
  t5204 = t870*t947*t2215;
  t5208 = t5202 + t5204;
  t5114 = -1.*t134*t870;
  t5117 = t5078*t2596;
  t5120 = t5114 + t5117;
  p_output1[0]=(-1.*t3320*t4342 + t3146*t4550)*var2[3] + (-1.*t3320*t4015 + t3146*t4102)*var2[4] + (-1.*t3320*t3615 + t2596*t3146*t3669)*var2[5] + (t2596*t3146*t3485 - 1.*t3320*t3815)*var2[6] + t2818*t3146*var2[7] + t3489*var2[8];
  p_output1[1]=(t3146*t3331 - 1.*t3320*t3485)*var2[3] + (-1.*t3320*t4944 + t3146*t4982)*var2[4] + (-1.*t3320*t4860 + t2596*t3146*t4881)*var2[5] + (t2596*t3146*t4795 - 1.*t3320*t4908)*var2[6] + t3146*t4695*var2[7] + (t3320*t4732 + t3146*t4795)*var2[8];
  p_output1[2]=(-1.*t3320*t5208 + t3146*t5250)*var2[4] + t5192*var2[5] + t5192*var2[6] + t3146*t5096*var2[7] + (t3320*t5120 + t3146*t5131)*var2[8];
  p_output1[3]=(t3146*t4342 + t3320*t4550)*var2[3] + (t3146*t4015 + t3320*t4102)*var2[4] + (t3146*t3615 + t2596*t3320*t3669)*var2[5] + (t2596*t3320*t3485 + t3146*t3815)*var2[6] + t2818*t3320*var2[7] + (-1.*t3146*t3331 + t3320*t3485)*var2[8];
  p_output1[4]=t3489*var2[3] + (t3146*t4944 + t3320*t4982)*var2[4] + (t3146*t4860 + t2596*t3320*t4881)*var2[5] + (t2596*t3320*t4795 + t3146*t4908)*var2[6] + t3320*t4695*var2[7] + (-1.*t3146*t4732 + t3320*t4795)*var2[8];
  p_output1[5]=(t3146*t5208 + t3320*t5250)*var2[4] + t5737*var2[5] + t5737*var2[6] + t3320*t5096*var2[7] + (-1.*t3146*t5120 + t3320*t5131)*var2[8];
  p_output1[6]=(-1.*t134*t4450 + t4689)*var2[3] + (-1.*t134*t4098 - 1.*t2596*t474*t870)*var2[4] - 1.*t134*t3669*var2[5] - 1.*t134*t3485*var2[6] + t3331*var2[7];
  p_output1[7]=(-1.*t134*t2286 + t2553*t2596*t474)*var2[3] + (-1.*t134*t4964 - 1.*t2596*t469*t870)*var2[4] - 1.*t134*t4881*var2[5] - 1.*t134*t4795*var2[6] + t4732*var2[7];
  p_output1[8]=(-1.*t2553*t2596 - 1.*t134*t5239)*var2[4] - 1.*t134*t5131*var2[5] - 1.*t134*t5131*var2[6] + t5120*var2[7];
}



void dR_LeftThighJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
