/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightThigh_src.h"

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
  double t231;
  double t436;
  double t562;
  double t816;
  double t177;
  double t862;
  double t174;
  double t1108;
  double t2086;
  double t1301;
  double t1025;
  double t2036;
  double t2092;
  double t2140;
  double t2219;
  double t2248;
  double t2291;
  double t1041;
  double t2187;
  double t2504;
  double t2514;
  double t2562;
  double t2361;
  double t2793;
  double t2827;
  double t2493;
  double t2574;
  double t2609;
  double t3163;
  double t3172;
  double t3180;
  double t3207;
  double t3213;
  double t3231;
  double t3341;
  double t3566;
  double t3589;
  double t3591;
  double t3596;
  double t3660;
  double t3667;
  double t3680;
  double t3606;
  double t3018;
  double t3067;
  double t3107;
  double t3816;
  double t3829;
  double t3659;
  double t3685;
  double t3720;
  double t4091;
  double t4095;
  double t4114;
  double t4121;
  double t4122;
  double t4127;
  double t4156;
  double t4163;
  double t4172;
  double t4060;
  double t4061;
  double t4072;
  double t722;
  double t929;
  double t936;
  double t1160;
  double t1432;
  double t1632;
  double t1635;
  double t1673;
  double t1797;
  double t2323;
  double t2335;
  double t2422;
  double t2439;
  double t2474;
  double t2661;
  double t2697;
  double t2708;
  double t2742;
  double t3206;
  double t3241;
  double t3245;
  double t3277;
  double t3334;
  double t3346;
  double t3350;
  double t3356;
  double t3410;
  double t3424;
  double t3445;
  double t3457;
  double t3480;
  double t3491;
  double t3493;
  double t3499;
  double t3511;
  double t3597;
  double t3611;
  double t3615;
  double t3642;
  double t3723;
  double t3725;
  double t3735;
  double t3785;
  double t2997;
  double t3111;
  double t3132;
  double t3960;
  double t3962;
  double t3973;
  double t4051;
  double t4073;
  double t4076;
  double t4837;
  double t4842;
  double t4846;
  double t4219;
  double t4223;
  double t4238;
  double t4267;
  double t4269;
  double t4284;
  double t4305;
  double t4308;
  double t4326;
  double t4339;
  double t4352;
  double t4367;
  double t5182;
  double t5187;
  double t5242;
  double t5244;
  double t5431;
  double t5433;
  double t4427;
  double t4430;
  double t4455;
  double t5301;
  double t5318;
  double t5328;
  double t5188;
  double t5192;
  double t5211;
  double t5434;
  double t5457;
  double t5479;
  double t5352;
  double t5354;
  double t5371;
  double t5520;
  double t5523;
  double t5533;
  double t4462;
  double t4463;
  double t4466;
  double t5262;
  double t4516;
  double t4524;
  double t4525;
  double t4536;
  double t4538;
  double t4550;
  double t5245;
  double t5282;
  double t4552;
  double t4577;
  double t4586;
  double t4621;
  double t4635;
  double t4645;
  double t4651;
  double t4672;
  double t4676;
  double t5711;
  double t5712;
  double t5714;
  double t5728;
  double t5729;
  double t5799;
  double t5805;
  double t5828;
  double t5837;
  double t5841;
  double t4708;
  double t4716;
  double t4730;
  double t5950;
  double t5956;
  double t5966;
  double t5969;
  double t5976;
  double t4783;
  double t4802;
  double t4807;
  double t6758;
  double t6759;
  double t6760;
  double t6774;
  double t6776;
  double t6782;
  double t6795;
  double t6802;
  double t6805;
  double t4878;
  double t4881;
  double t4883;
  double t4928;
  double t4961;
  double t4963;
  t231 = Cos(var1[3]);
  t436 = Cos(var1[4]);
  t562 = Cos(var1[5]);
  t816 = Sin(var1[13]);
  t177 = Cos(var1[13]);
  t862 = Sin(var1[5]);
  t174 = Cos(var1[15]);
  t1108 = Sin(var1[4]);
  t2086 = Sin(var1[3]);
  t1301 = Sin(var1[14]);
  t1025 = Sin(var1[15]);
  t2036 = t231*t562*t1108;
  t2092 = t2086*t862;
  t2140 = t2036 + t2092;
  t2219 = t562*t2086;
  t2248 = -1.*t231*t1108*t862;
  t2291 = t2219 + t2248;
  t1041 = Cos(var1[14]);
  t2187 = -1.*t816*t2140;
  t2504 = -1.*t562*t2086;
  t2514 = t231*t1108*t862;
  t2562 = t2504 + t2514;
  t2361 = t177*t2140;
  t2793 = -1.*t816*t2562;
  t2827 = t2361 + t2793;
  t2493 = t816*t2140;
  t2574 = t177*t2562;
  t2609 = t2493 + t2574;
  t3163 = -1.*t562*t2086*t1108;
  t3172 = t231*t862;
  t3180 = t3163 + t3172;
  t3207 = -1.*t231*t562;
  t3213 = -1.*t2086*t1108*t862;
  t3231 = t3207 + t3213;
  t3341 = t177*t3231;
  t3566 = t562*t2086*t1108;
  t3589 = -1.*t231*t862;
  t3591 = t3566 + t3589;
  t3596 = -1.*t816*t3591;
  t3660 = t231*t562;
  t3667 = t2086*t1108*t862;
  t3680 = t3660 + t3667;
  t3606 = t177*t3591;
  t3018 = t1041*t231*t436;
  t3067 = t1301*t2609;
  t3107 = t3018 + t3067;
  t3816 = -1.*t816*t3680;
  t3829 = t3606 + t3816;
  t3659 = t816*t3591;
  t3685 = t177*t3680;
  t3720 = t3659 + t3685;
  t4091 = -1.*t436*t562*t816;
  t4095 = -1.*t177*t436*t862;
  t4114 = t4091 + t4095;
  t4121 = -1.*t174*t4114;
  t4122 = t177*t436*t562;
  t4127 = -1.*t436*t816*t862;
  t4156 = t4122 + t4127;
  t4163 = t1301*t1025*t4156;
  t4172 = t4121 + t4163;
  t4060 = t436*t562*t816;
  t4061 = t177*t436*t862;
  t4072 = t4060 + t4061;
  t722 = t177*t231*t436*t562;
  t929 = -1.*t231*t436*t816*t862;
  t936 = t722 + t929;
  t1160 = -1.*t1041*t231*t1108;
  t1432 = t231*t436*t562*t816;
  t1632 = t177*t231*t436*t862;
  t1635 = t1432 + t1632;
  t1673 = t1301*t1635;
  t1797 = t1160 + t1673;
  t2323 = t177*t2291;
  t2335 = t2187 + t2323;
  t2422 = t816*t2291;
  t2439 = t2361 + t2422;
  t2474 = -1.*t231*t436*t1301;
  t2661 = t1041*t2609;
  t2697 = t2474 + t2661;
  t2708 = -1.*t177*t2562;
  t2742 = t2187 + t2708;
  t3206 = t177*t3180;
  t3241 = -1.*t816*t3231;
  t3245 = t3206 + t3241;
  t3277 = -1.*t1041*t436*t2086;
  t3334 = t816*t3180;
  t3346 = t3334 + t3341;
  t3350 = t1301*t3346;
  t3356 = t3277 + t3350;
  t3410 = t177*t436*t562*t2086;
  t3424 = -1.*t436*t816*t2086*t862;
  t3445 = t3410 + t3424;
  t3457 = -1.*t1041*t2086*t1108;
  t3480 = t436*t562*t816*t2086;
  t3491 = t177*t436*t2086*t862;
  t3493 = t3480 + t3491;
  t3499 = t1301*t3493;
  t3511 = t3457 + t3499;
  t3597 = t3596 + t3341;
  t3611 = t816*t3231;
  t3615 = t3606 + t3611;
  t3642 = -1.*t436*t1301*t2086;
  t3723 = t1041*t3720;
  t3725 = t3642 + t3723;
  t3735 = -1.*t177*t3680;
  t3785 = t3596 + t3735;
  t2997 = t1025*t2827;
  t3111 = t174*t3107;
  t3132 = t2997 + t3111;
  t3960 = t1041*t436*t2086;
  t3962 = t1301*t3720;
  t3973 = t3960 + t3962;
  t4051 = t1301*t1108;
  t4073 = t1041*t4072;
  t4076 = t4051 + t4073;
  t4837 = t1025*t4114;
  t4842 = t174*t1301*t4156;
  t4846 = t4837 + t4842;
  t4219 = -1.*t1041*t1108;
  t4223 = t1301*t4072;
  t4238 = t4219 + t4223;
  t4267 = -1.*t177*t562*t1108;
  t4269 = t816*t1108*t862;
  t4284 = t4267 + t4269;
  t4305 = -1.*t1041*t436;
  t4308 = -1.*t562*t816*t1108;
  t4326 = -1.*t177*t1108*t862;
  t4339 = t4308 + t4326;
  t4352 = t1301*t4339;
  t4367 = t4305 + t4352;
  t5182 = -1.*t177;
  t5187 = 1. + t5182;
  t5242 = -1.*t1041;
  t5244 = 1. + t5242;
  t5431 = -1.*t174;
  t5433 = 1. + t5431;
  t4427 = t1025*t936;
  t4430 = t174*t1797;
  t4455 = t4427 + t4430;
  t5301 = -0.135*t5187;
  t5318 = 0.07996*t816;
  t5328 = 0. + t5301 + t5318;
  t5188 = 0.07996*t5187;
  t5192 = 0.135*t816;
  t5211 = 0. + t5188 + t5192;
  t5434 = -0.01004*t5433;
  t5457 = 0.08055*t1025;
  t5479 = 0. + t5434 + t5457;
  t5352 = -0.135*t5244;
  t5354 = 0.08055*t1301;
  t5371 = 0. + t5352 + t5354;
  t5520 = -0.08055*t5433;
  t5523 = -0.01004*t1025;
  t5533 = 0. + t5520 + t5523;
  t4462 = t1025*t2335;
  t4463 = t174*t1301*t2439;
  t4466 = t4462 + t4463;
  t5262 = -0.135*t1301;
  t4516 = t1025*t2742;
  t4524 = t174*t1301*t2827;
  t4525 = t4516 + t4524;
  t4536 = t174*t2827;
  t4538 = -1.*t1025*t3107;
  t4550 = t4536 + t4538;
  t5245 = -0.08055*t5244;
  t5282 = 0. + t5245 + t5262;
  t4552 = t1025*t3245;
  t4577 = t174*t3356;
  t4586 = t4552 + t4577;
  t4621 = t1025*t3445;
  t4635 = t174*t3511;
  t4645 = t4621 + t4635;
  t4651 = t1025*t3597;
  t4672 = t174*t1301*t3615;
  t4676 = t4651 + t4672;
  t5711 = -0.135*t1041;
  t5712 = -0.08055*t1301;
  t5714 = t5711 + t5712;
  t5728 = 0.08055*t1041;
  t5729 = t5728 + t5262;
  t5799 = 0.135*t177;
  t5805 = t5799 + t5318;
  t5828 = 0.07996*t177;
  t5837 = -0.135*t816;
  t5841 = t5828 + t5837;
  t4708 = t1025*t3785;
  t4716 = t174*t1301*t3829;
  t4730 = t4708 + t4716;
  t5950 = 0.08055*t174;
  t5956 = t5950 + t5523;
  t5966 = -0.01004*t174;
  t5969 = -0.08055*t1025;
  t5976 = t5966 + t5969;
  t4783 = t174*t3829;
  t4802 = -1.*t1025*t3973;
  t4807 = t4783 + t4802;
  t6758 = t5479*t4114;
  t6759 = -0.1708*t1041*t4156;
  t6760 = t5371*t4156;
  t6774 = t1301*t5533*t4156;
  t6776 = -0.08045*t4846;
  t6782 = t174*t4114;
  t6795 = -1.*t1301*t1025*t4156;
  t6802 = t6782 + t6795;
  t6805 = -0.06984*t6802;
  t4878 = t174*t4156;
  t4881 = -1.*t1025*t4238;
  t4883 = t4878 + t4881;
  t4928 = t1025*t4284;
  t4961 = t174*t4367;
  t4963 = t4928 + t4961;
  p_output1[0]=(-1.*t174*t3245 + t1025*t3356)*var2[3] + (t1025*t1797 - 1.*t174*t936)*var2[4] + (-1.*t174*t2335 + t1025*t1301*t2439)*var2[5] + (-1.*t174*t2742 + t1025*t1301*t2827)*var2[13] + t1025*t2697*var2[14] + t3132*var2[15];
  p_output1[1]=(-1.*t174*t2827 + t1025*t3107)*var2[3] + (-1.*t174*t3445 + t1025*t3511)*var2[4] + (-1.*t174*t3597 + t1025*t1301*t3615)*var2[5] + (-1.*t174*t3785 + t1025*t1301*t3829)*var2[13] + t1025*t3725*var2[14] + (t1025*t3829 + t174*t3973)*var2[15];
  p_output1[2]=(-1.*t174*t4284 + t1025*t4367)*var2[4] + t4172*var2[5] + t4172*var2[13] + t1025*t4076*var2[14] + (t1025*t4156 + t174*t4238)*var2[15];
  p_output1[3]=0;
  p_output1[4]=t4586*var2[3] + t4455*var2[4] + t4466*var2[5] + t4525*var2[13] + t174*t2697*var2[14] + t4550*var2[15];
  p_output1[5]=t3132*var2[3] + t4645*var2[4] + t4676*var2[5] + t4730*var2[13] + t174*t3725*var2[14] + t4807*var2[15];
  p_output1[6]=t4963*var2[4] + t4846*var2[5] + t4846*var2[13] + t174*t4076*var2[14] + t4883*var2[15];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1041*t3346 + t3642)*var2[3] + (-1.*t1041*t1635 - 1.*t1108*t1301*t231)*var2[4] - 1.*t1041*t2439*var2[5] - 1.*t1041*t2827*var2[13] + t3107*var2[14];
  p_output1[9]=(-1.*t1041*t2609 + t1301*t231*t436)*var2[3] + (-1.*t1108*t1301*t2086 - 1.*t1041*t3493)*var2[4] - 1.*t1041*t3615*var2[5] - 1.*t1041*t3829*var2[13] + t3973*var2[14];
  p_output1[10]=(-1.*t1041*t4339 - 1.*t1301*t436)*var2[4] - 1.*t1041*t4156*var2[5] - 1.*t1041*t4156*var2[13] + t4238*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.06984*(t174*t3245 - 1.*t1025*t3356) - 0.1708*(t1041*t3346 + t1301*t2086*t436) - 0.08045*t4586 + t3180*t5211 - 1.*t2086*t436*t5282 + t3231*t5328 + t3346*t5371 + t3245*t5479 + t3356*t5533)*var2[3] + (-0.1708*(t1041*t1635 + t1108*t1301*t231) - 0.08045*t4455 - 1.*t1108*t231*t5282 + t1635*t5371 + t1797*t5533 + t231*t436*t5211*t562 + t231*t436*t5328*t862 + t5479*t936 - 0.06984*(-1.*t1025*t1797 + t174*t936))*var2[4] + (-0.1708*t1041*t2439 - 0.06984*(t174*t2335 - 1.*t1025*t1301*t2439) - 0.08045*t4466 + t2291*t5211 + t2140*t5328 + t2439*t5371 + t2335*t5479 + t1301*t2439*t5533)*var2[5] + (-0.1708*t1041*t2827 - 0.06984*(t174*t2742 - 1.*t1025*t1301*t2827) - 0.08045*t4525 + t2827*t5371 + t2742*t5479 + t1301*t2827*t5533 + t2140*t5805 + t2562*t5841)*var2[13] + (0.06984*t1025*t2697 - 0.08045*t174*t2697 - 0.1708*(-1.*t1301*t2609 - 1.*t1041*t231*t436) + t2697*t5533 + t231*t436*t5714 + t2609*t5729)*var2[14] + (-0.06984*(-1.*t1025*t2827 - 1.*t174*t3107) - 0.08045*t4550 + t2827*t5956 + t3107*t5976)*var2[15];
  p_output1[13]=var2[1] + (-0.1708*t2697 - 0.08045*t3132 - 0.06984*t4550 + t2140*t5211 + t231*t436*t5282 + t2562*t5328 + t2609*t5371 + t2827*t5479 + t3107*t5533)*var2[3] + (-0.1708*(t1108*t1301*t2086 + t1041*t3493) - 0.06984*(t174*t3445 - 1.*t1025*t3511) - 0.08045*t4645 - 1.*t1108*t2086*t5282 + t3493*t5371 + t3445*t5479 + t3511*t5533 + t2086*t436*t5211*t562 + t2086*t436*t5328*t862)*var2[4] + (-0.1708*t1041*t3615 - 0.06984*(t174*t3597 - 1.*t1025*t1301*t3615) - 0.08045*t4676 + t3231*t5211 + t3591*t5328 + t3615*t5371 + t3597*t5479 + t1301*t3615*t5533)*var2[5] + (-0.1708*t1041*t3829 - 0.06984*(t174*t3785 - 1.*t1025*t1301*t3829) - 0.08045*t4730 + t3829*t5371 + t3785*t5479 + t1301*t3829*t5533 + t3591*t5805 + t3680*t5841)*var2[13] + (-0.1708*(t3277 - 1.*t1301*t3720) + 0.06984*t1025*t3725 - 0.08045*t174*t3725 + t3725*t5533 + t2086*t436*t5714 + t3720*t5729)*var2[14] + (-0.06984*(-1.*t1025*t3829 - 1.*t174*t3973) - 0.08045*t4807 + t3829*t5956 + t3973*t5976)*var2[15];
  p_output1[14]=var2[2] + (-0.1708*(t1041*t4339 + t1301*t436) - 0.06984*(t174*t4284 - 1.*t1025*t4367) - 0.08045*t4963 - 1.*t436*t5282 + t4339*t5371 + t4284*t5479 + t4367*t5533 - 1.*t1108*t5211*t562 - 1.*t1108*t5328*t862)*var2[4] + (t436*t5328*t562 + t6758 + t6759 + t6760 + t6774 + t6776 + t6805 - 1.*t436*t5211*t862)*var2[5] + (t436*t562*t5805 + t6758 + t6759 + t6760 + t6774 + t6776 + t6805 + t436*t5841*t862)*var2[13] + (-0.1708*(t1041*t1108 - 1.*t1301*t4072) + 0.06984*t1025*t4076 - 0.08045*t174*t4076 + t4076*t5533 - 1.*t1108*t5714 + t4072*t5729)*var2[14] + (-0.06984*(-1.*t1025*t4156 - 1.*t174*t4238) - 0.08045*t4883 + t4156*t5956 + t4238*t5976)*var2[15];
  p_output1[15]=0;
}



void dT_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
