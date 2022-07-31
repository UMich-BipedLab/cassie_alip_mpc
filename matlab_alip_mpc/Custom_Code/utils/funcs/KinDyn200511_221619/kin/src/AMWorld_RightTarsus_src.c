/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightTarsus_src.h"

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
  double t502;
  double t1282;
  double t1505;
  double t1467;
  double t1673;
  double t955;
  double t2671;
  double t2228;
  double t1093;
  double t3078;
  double t3298;
  double t1166;
  double t901;
  double t3799;
  double t4016;
  double t3587;
  double t3707;
  double t5379;
  double t5059;
  double t5178;
  double t5430;
  double t5658;
  double t5307;
  double t5507;
  double t5566;
  double t4873;
  double t5739;
  double t5752;
  double t5780;
  double t6084;
  double t5574;
  double t6048;
  double t6051;
  double t4841;
  double t6441;
  double t6608;
  double t7061;
  double t7676;
  double t7855;
  double t7919;
  double t7926;
  double t7970;
  double t6057;
  double t7124;
  double t7160;
  double t8156;
  double t8157;
  double t8185;
  double t8198;
  double t8204;
  double t8110;
  double t8164;
  double t8175;
  double t8268;
  double t8278;
  double t8280;
  double t8267;
  double t8282;
  double t8287;
  double t8291;
  double t8294;
  double t8303;
  double t8315;
  double t8320;
  double t8321;
  double t8325;
  double t8289;
  double t8297;
  double t8300;
  double t8332;
  double t8333;
  double t8352;
  double t8363;
  double t8365;
  double t8331;
  double t8338;
  double t8345;
  double t2720;
  double t2927;
  double t3725;
  double t4053;
  double t4265;
  double t4271;
  double t4375;
  double t4422;
  double t4435;
  double t4674;
  double t4697;
  double t4721;
  double t4734;
  double t4792;
  double t7453;
  double t8047;
  double t8085;
  double t8182;
  double t8212;
  double t8215;
  double t8220;
  double t8221;
  double t8228;
  double t8235;
  double t8236;
  double t8244;
  double t8245;
  double t8251;
  double t8255;
  double t8302;
  double t8328;
  double t8329;
  double t8348;
  double t8368;
  double t8369;
  double t8373;
  double t8377;
  double t8385;
  double t8387;
  double t8390;
  double t8391;
  double t8395;
  double t8406;
  double t8409;
  double t1500;
  double t1745;
  double t1855;
  double t2229;
  double t2294;
  double t2325;
  double t2085;
  double t2420;
  double t2510;
  double t8453;
  double t8458;
  double t8461;
  double t8467;
  double t8468;
  double t8472;
  double t8466;
  double t8478;
  double t8479;
  double t8497;
  double t8500;
  double t8514;
  double t8485;
  double t8520;
  double t8523;
  double t8541;
  double t8546;
  double t8556;
  double t8528;
  double t8559;
  double t8562;
  double t8567;
  double t8583;
  double t8586;
  double t4798;
  double t8257;
  double t8413;
  double t8416;
  double t8426;
  double t8427;
  double t8433;
  double t8438;
  double t8631;
  double t8633;
  double t8643;
  double t8656;
  double t8657;
  double t8658;
  double t8649;
  double t8659;
  double t8666;
  double t8674;
  double t8676;
  double t8682;
  double t8691;
  double t8700;
  double t8703;
  double t8688;
  double t8704;
  double t8707;
  double t8713;
  double t8714;
  double t8715;
  double t8710;
  double t8717;
  double t8720;
  double t8723;
  double t8725;
  double t8726;
  double t8602;
  double t8605;
  double t8607;
  double t8609;
  double t8721;
  double t8728;
  double t8730;
  double t8735;
  double t8736;
  double t8737;
  double t8771;
  double t8772;
  double t8773;
  double t8780;
  double t8783;
  double t8784;
  double t8787;
  double t8788;
  double t8789;
  double t8786;
  double t8791;
  double t8793;
  double t8797;
  double t8798;
  double t8799;
  double t8796;
  double t8801;
  double t8803;
  double t8807;
  double t8808;
  double t8810;
  double t8804;
  double t8811;
  double t8813;
  double t8815;
  double t8819;
  double t8820;
  t502 = Cos(var1[3]);
  t1282 = Cos(var1[5]);
  t1505 = Sin(var1[3]);
  t1467 = Sin(var1[4]);
  t1673 = Sin(var1[5]);
  t955 = Sin(var1[14]);
  t2671 = 0. + t955;
  t2228 = Cos(var1[13]);
  t1093 = Cos(var1[14]);
  t3078 = -1.*t1093;
  t3298 = 0. + t3078;
  t1166 = Sin(var1[13]);
  t901 = Cos(var1[4]);
  t3799 = t3298*t1166;
  t4016 = 0. + t3799;
  t3587 = t2228*t3298;
  t3707 = 0. + t3587;
  t5379 = Cos(var1[17]);
  t5059 = Cos(var1[18]);
  t5178 = Sin(var1[17]);
  t5430 = Sin(var1[18]);
  t5658 = Cos(var1[16]);
  t5307 = t5059*t5178;
  t5507 = t5379*t5430;
  t5566 = 0. + t5307 + t5507;
  t4873 = Sin(var1[16]);
  t5739 = t5379*t5059;
  t5752 = -1.*t5178*t5430;
  t5780 = 0. + t5739 + t5752;
  t6084 = Cos(var1[15]);
  t5574 = -1.*t4873*t5566;
  t6048 = t5658*t5780;
  t6051 = 0. + t5574 + t6048;
  t4841 = Sin(var1[15]);
  t6441 = t5658*t5566;
  t6608 = t4873*t5780;
  t7061 = 0. + t6441 + t6608;
  t7676 = t6084*t6051;
  t7855 = -1.*t4841*t7061;
  t7919 = 0. + t7676 + t7855;
  t7926 = t1093*t7919;
  t7970 = 0. + t7926;
  t6057 = t4841*t6051;
  t7124 = t6084*t7061;
  t7160 = 0. + t6057 + t7124;
  t8156 = t955*t7919;
  t8157 = 0. + t8156;
  t8185 = t2228*t7160;
  t8198 = t1166*t8157;
  t8204 = 0. + t8185 + t8198;
  t8110 = -1.*t1166*t7160;
  t8164 = t2228*t8157;
  t8175 = 0. + t8110 + t8164;
  t8268 = -1.*t5379*t5059;
  t8278 = t5178*t5430;
  t8280 = 0. + t8268 + t8278;
  t8267 = t4873*t5566;
  t8282 = t5658*t8280;
  t8287 = 0. + t8267 + t8282;
  t8291 = -1.*t4873*t8280;
  t8294 = 0. + t6441 + t8291;
  t8303 = -1.*t4841*t8287;
  t8315 = t6084*t8294;
  t8320 = 0. + t8303 + t8315;
  t8321 = t1093*t8320;
  t8325 = 0. + t8321;
  t8289 = t6084*t8287;
  t8297 = t4841*t8294;
  t8300 = 0. + t8289 + t8297;
  t8332 = t955*t8320;
  t8333 = 0. + t8332;
  t8352 = t2228*t8300;
  t8363 = t1166*t8333;
  t8365 = 0. + t8352 + t8363;
  t8331 = -1.*t1166*t8300;
  t8338 = t2228*t8333;
  t8345 = 0. + t8331 + t8338;
  t2720 = var2[13]*t2671;
  t2927 = var2[5]*t2671;
  t3725 = t3707*t1282;
  t4053 = -1.*t4016*t1673;
  t4265 = 0. + t3725 + t4053;
  t4271 = var2[4]*t4265;
  t4375 = -1.*t2671*t1467;
  t4422 = t1282*t4016;
  t4435 = t3707*t1673;
  t4674 = 0. + t4422 + t4435;
  t4697 = t901*t4674;
  t4721 = 0. + t4375 + t4697;
  t4734 = var2[3]*t4721;
  t4792 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + t2720 + t2927 + t4271 + t4734;
  t7453 = var2[14]*t7160;
  t8047 = var2[13]*t7970;
  t8085 = var2[5]*t7970;
  t8182 = t1282*t8175;
  t8212 = -1.*t8204*t1673;
  t8215 = 0. + t8182 + t8212;
  t8220 = var2[4]*t8215;
  t8221 = -1.*t7970*t1467;
  t8228 = t1282*t8204;
  t8235 = t8175*t1673;
  t8236 = 0. + t8228 + t8235;
  t8244 = t901*t8236;
  t8245 = 0. + t8221 + t8244;
  t8251 = var2[3]*t8245;
  t8255 = 0. + t7453 + t8047 + t8085 + t8220 + t8251;
  t8302 = var2[14]*t8300;
  t8328 = var2[13]*t8325;
  t8329 = var2[5]*t8325;
  t8348 = t1282*t8345;
  t8368 = -1.*t8365*t1673;
  t8369 = 0. + t8348 + t8368;
  t8373 = var2[4]*t8369;
  t8377 = -1.*t8325*t1467;
  t8385 = t1282*t8365;
  t8387 = t8345*t1673;
  t8390 = 0. + t8385 + t8387;
  t8391 = t901*t8390;
  t8395 = 0. + t8377 + t8391;
  t8406 = var2[3]*t8395;
  t8409 = 0. + t8302 + t8328 + t8329 + t8373 + t8406;
  t1500 = t502*t1282*t1467;
  t1745 = t1505*t1673;
  t1855 = t1500 + t1745;
  t2229 = -1.*t1282*t1505;
  t2294 = t502*t1467*t1673;
  t2325 = t2229 + t2294;
  t2085 = t1166*t1855;
  t2420 = t2228*t2325;
  t2510 = t2085 + t2420;
  t8453 = t2228*t1855;
  t8458 = -1.*t1166*t2325;
  t8461 = t8453 + t8458;
  t8467 = t1093*t502*t901;
  t8468 = t955*t2510;
  t8472 = t8467 + t8468;
  t8466 = t4841*t8461;
  t8478 = t6084*t8472;
  t8479 = t8466 + t8478;
  t8497 = t6084*t8461;
  t8500 = -1.*t4841*t8472;
  t8514 = t8497 + t8500;
  t8485 = -1.*t4873*t8479;
  t8520 = t5658*t8514;
  t8523 = t8485 + t8520;
  t8541 = t5658*t8479;
  t8546 = t4873*t8514;
  t8556 = t8541 + t8546;
  t8528 = t5178*t8523;
  t8559 = t5379*t8556;
  t8562 = t8528 + t8559;
  t8567 = t5379*t8523;
  t8583 = -1.*t5178*t8556;
  t8586 = t8567 + t8583;
  t4798 = 0.0239*t4792;
  t8257 = -0.000036*t8255;
  t8413 = 0.000063*t8409;
  t8416 = t4798 + t8257 + t8413;
  t8426 = 0.000063*t4792;
  t8427 = -0.00288*t8255;
  t8433 = 0.00113*t8409;
  t8438 = t8426 + t8427 + t8433;
  t8631 = t1282*t1505*t1467;
  t8633 = -1.*t502*t1673;
  t8643 = t8631 + t8633;
  t8656 = t502*t1282;
  t8657 = t1505*t1467*t1673;
  t8658 = t8656 + t8657;
  t8649 = t1166*t8643;
  t8659 = t2228*t8658;
  t8666 = t8649 + t8659;
  t8674 = t2228*t8643;
  t8676 = -1.*t1166*t8658;
  t8682 = t8674 + t8676;
  t8691 = t1093*t901*t1505;
  t8700 = t955*t8666;
  t8703 = t8691 + t8700;
  t8688 = t4841*t8682;
  t8704 = t6084*t8703;
  t8707 = t8688 + t8704;
  t8713 = t6084*t8682;
  t8714 = -1.*t4841*t8703;
  t8715 = t8713 + t8714;
  t8710 = -1.*t4873*t8707;
  t8717 = t5658*t8715;
  t8720 = t8710 + t8717;
  t8723 = t5658*t8707;
  t8725 = t4873*t8715;
  t8726 = t8723 + t8725;
  t8602 = -0.000036*t4792;
  t8605 = 0.0231*t8255;
  t8607 = -0.00288*t8409;
  t8609 = t8602 + t8605 + t8607;
  t8721 = t5178*t8720;
  t8728 = t5379*t8726;
  t8730 = t8721 + t8728;
  t8735 = t5379*t8720;
  t8736 = -1.*t5178*t8726;
  t8737 = t8735 + t8736;
  t8771 = t901*t1282*t1166;
  t8772 = t2228*t901*t1673;
  t8773 = t8771 + t8772;
  t8780 = t2228*t901*t1282;
  t8783 = -1.*t901*t1166*t1673;
  t8784 = t8780 + t8783;
  t8787 = -1.*t1093*t1467;
  t8788 = t955*t8773;
  t8789 = t8787 + t8788;
  t8786 = t4841*t8784;
  t8791 = t6084*t8789;
  t8793 = t8786 + t8791;
  t8797 = t6084*t8784;
  t8798 = -1.*t4841*t8789;
  t8799 = t8797 + t8798;
  t8796 = -1.*t4873*t8793;
  t8801 = t5658*t8799;
  t8803 = t8796 + t8801;
  t8807 = t5658*t8793;
  t8808 = t4873*t8799;
  t8810 = t8807 + t8808;
  t8804 = t5178*t8803;
  t8811 = t5379*t8810;
  t8813 = t8804 + t8811;
  t8815 = t5379*t8803;
  t8819 = -1.*t5178*t8810;
  t8820 = t8815 + t8819;
  p_output1[0]=t8438*(t5430*t8562 - 1.*t5059*t8586) + (t5059*t8562 + t5430*t8586)*t8609 + t8416*(-1.*t1093*t2510 + t502*t901*t955);
  p_output1[1]=t8438*(t5430*t8730 - 1.*t5059*t8737) + t8609*(t5059*t8730 + t5430*t8737) + t8416*(-1.*t1093*t8666 + t1505*t901*t955);
  p_output1[2]=t8438*(t5430*t8813 - 1.*t5059*t8820) + t8609*(t5059*t8813 + t5430*t8820) + t8416*(-1.*t1093*t8773 - 1.*t1467*t955);
}



void AMWorld_RightTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
