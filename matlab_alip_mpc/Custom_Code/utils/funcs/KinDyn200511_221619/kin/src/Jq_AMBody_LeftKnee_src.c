/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_LeftKnee_src.h"

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
  double t275;
  double t289;
  double t290;
  double t717;
  double t19;
  double t497;
  double t533;
  double t1836;
  double t1150;
  double t1331;
  double t1896;
  double t267;
  double t794;
  double t1483;
  double t1915;
  double t1936;
  double t520;
  double t2517;
  double t2518;
  double t2573;
  double t2600;
  double t2667;
  double t3706;
  double t3763;
  double t3921;
  double t4555;
  double t4595;
  double t330;
  double t366;
  double t498;
  double t539;
  double t566;
  double t601;
  double t610;
  double t661;
  double t811;
  double t936;
  double t1101;
  double t1969;
  double t2048;
  double t2337;
  double t2589;
  double t2758;
  double t2795;
  double t2907;
  double t3014;
  double t3023;
  double t3225;
  double t3285;
  double t3395;
  double t3492;
  double t3546;
  double t4026;
  double t4089;
  double t4211;
  double t4445;
  double t4637;
  double t4660;
  double t4661;
  double t4687;
  double t4712;
  double t4717;
  double t4882;
  double t4908;
  double t4990;
  double t5027;
  double t6052;
  double t6152;
  double t6175;
  double t6177;
  double t6193;
  double t6204;
  double t6234;
  double t6417;
  double t6468;
  double t6483;
  double t6513;
  double t6518;
  double t6522;
  double t6526;
  double t6546;
  double t6587;
  double t6633;
  double t6705;
  double t6952;
  double t7027;
  double t7056;
  double t7080;
  double t7171;
  double t7211;
  double t7228;
  double t7309;
  double t7321;
  double t7573;
  double t7584;
  double t7586;
  double t7595;
  double t7712;
  double t7735;
  double t7738;
  double t7739;
  double t7514;
  double t7528;
  double t7534;
  double t7536;
  double t7537;
  double t7538;
  double t7541;
  double t7561;
  double t7563;
  double t7574;
  double t7629;
  double t7630;
  double t7632;
  double t7665;
  double t7666;
  double t7672;
  double t7676;
  double t7677;
  double t7726;
  double t7743;
  double t7745;
  double t7754;
  double t7759;
  double t7762;
  double t7767;
  double t7768;
  double t7769;
  double t7813;
  double t7834;
  double t7845;
  double t7852;
  double t7855;
  double t7856;
  double t7871;
  double t7873;
  double t7874;
  double t7883;
  double t7884;
  double t7885;
  double t7894;
  double t7897;
  double t7899;
  double t7900;
  double t7901;
  double t7903;
  double t7908;
  double t7910;
  double t7913;
  double t7914;
  double t7922;
  double t7925;
  double t7931;
  double t7940;
  double t7945;
  double t7967;
  double t7971;
  double t7985;
  double t7988;
  double t7999;
  double t8005;
  double t8008;
  double t8021;
  double t8022;
  double t8042;
  double t8044;
  double t8061;
  double t8062;
  double t8067;
  double t8076;
  double t8143;
  double t8179;
  double t8181;
  double t8189;
  double t8203;
  double t8208;
  double t8210;
  double t8212;
  double t8232;
  double t8239;
  double t8331;
  double t8379;
  double t8380;
  double t8388;
  double t8418;
  double t8420;
  double t8424;
  double t8183;
  double t8185;
  double t8190;
  double t8211;
  double t8244;
  double t8246;
  double t8250;
  double t8272;
  double t8278;
  double t8279;
  double t8280;
  double t8293;
  double t8306;
  double t8321;
  double t8323;
  double t8339;
  double t8340;
  double t8341;
  double t8400;
  double t8447;
  double t8462;
  double t8464;
  double t8469;
  double t8478;
  double t8479;
  double t8490;
  double t8526;
  double t8530;
  double t8531;
  double t8532;
  double t8326;
  double t8536;
  double t8542;
  double t8544;
  double t8547;
  double t8549;
  double t8552;
  double t8553;
  double t8555;
  t275 = Cos(var1[7]);
  t289 = -1.*t275;
  t290 = 0. + t289;
  t717 = Cos(var1[4]);
  t19 = Sin(var1[4]);
  t497 = Sin(var1[5]);
  t533 = Sin(var1[6]);
  t1836 = Cos(var1[9]);
  t1150 = Cos(var1[8]);
  t1331 = Sin(var1[9]);
  t1896 = Sin(var1[8]);
  t267 = Cos(var1[6]);
  t794 = Sin(var1[7]);
  t1483 = t1150*t1331;
  t1915 = t1836*t1896;
  t1936 = 0. + t1483 + t1915;
  t520 = Cos(var1[5]);
  t2517 = -1.*t1836*t1150;
  t2518 = t1331*t1896;
  t2573 = 0. + t2517 + t2518;
  t2600 = t794*t1936;
  t2667 = 0. + t2600;
  t3706 = t1836*t1150;
  t3763 = -1.*t1331*t1896;
  t3921 = 0. + t3706 + t3763;
  t4555 = t794*t3921;
  t4595 = 0. + t4555;
  t330 = t267*t290;
  t366 = 0. + t330;
  t498 = t366*t497;
  t539 = t290*t533;
  t566 = 0. + t539;
  t601 = t520*t566;
  t610 = 0. + t498 + t601;
  t661 = -1.*t19*t610;
  t811 = 0. + t794;
  t936 = -1.*t717*t811;
  t1101 = t661 + t936;
  t1969 = t275*t1936;
  t2048 = 0. + t1969;
  t2337 = -1.*t717*t2048;
  t2589 = -1.*t533*t2573;
  t2758 = t267*t2667;
  t2795 = 0. + t2589 + t2758;
  t2907 = t497*t2795;
  t3014 = t267*t2573;
  t3023 = t533*t2667;
  t3225 = 0. + t3014 + t3023;
  t3285 = t520*t3225;
  t3395 = 0. + t2907 + t3285;
  t3492 = -1.*t19*t3395;
  t3546 = t2337 + t3492;
  t4026 = t275*t3921;
  t4089 = 0. + t4026;
  t4211 = -1.*t717*t4089;
  t4445 = -1.*t533*t1936;
  t4637 = t267*t4595;
  t4660 = 0. + t4445 + t4637;
  t4661 = t497*t4660;
  t4687 = t267*t1936;
  t4712 = t533*t4595;
  t4717 = 0. + t4687 + t4712;
  t4882 = t520*t4717;
  t4908 = 0. + t4661 + t4882;
  t4990 = -1.*t19*t4908;
  t5027 = t4211 + t4990;
  t6052 = -1.*t366*t497;
  t6152 = -1.*t520*t566;
  t6175 = t6052 + t6152;
  t6177 = var2[4]*t6175;
  t6193 = t520*t366;
  t6204 = -1.*t497*t566;
  t6234 = t6193 + t6204;
  t6417 = var2[3]*t717*t6234;
  t6468 = t6177 + t6417;
  t6483 = -1.*t497*t2795;
  t6513 = -1.*t520*t3225;
  t6518 = t6483 + t6513;
  t6522 = var2[4]*t6518;
  t6526 = t520*t2795;
  t6546 = -1.*t497*t3225;
  t6587 = t6526 + t6546;
  t6633 = var2[3]*t717*t6587;
  t6705 = t6522 + t6633;
  t6952 = -1.*t497*t4660;
  t7027 = -1.*t520*t4717;
  t7056 = t6952 + t7027;
  t7080 = var2[4]*t7056;
  t7171 = t520*t4660;
  t7211 = -1.*t497*t4717;
  t7228 = t7171 + t7211;
  t7309 = var2[3]*t717*t7228;
  t7321 = t7080 + t7309;
  t7573 = t2589 + t2758;
  t7584 = -1.*t267*t2573;
  t7586 = -1.*t533*t2667;
  t7595 = t7584 + t7586;
  t7712 = t4445 + t4637;
  t7735 = -1.*t267*t1936;
  t7738 = -1.*t533*t4595;
  t7739 = t7735 + t7738;
  t7514 = -1.*t267*t290*t497;
  t7528 = -1.*t520*t290*t533;
  t7534 = t7514 + t7528;
  t7536 = var2[4]*t7534;
  t7537 = t520*t267*t290;
  t7538 = -1.*t290*t497*t533;
  t7541 = t7537 + t7538;
  t7561 = var2[3]*t717*t7541;
  t7563 = t7536 + t7561;
  t7574 = -1.*t497*t7573;
  t7629 = t520*t7595;
  t7630 = t7574 + t7629;
  t7632 = var2[4]*t7630;
  t7665 = t520*t7573;
  t7666 = t497*t7595;
  t7672 = t7665 + t7666;
  t7676 = var2[3]*t717*t7672;
  t7677 = t7632 + t7676;
  t7726 = -1.*t497*t7712;
  t7743 = t520*t7739;
  t7745 = t7726 + t7743;
  t7754 = var2[4]*t7745;
  t7759 = t520*t7712;
  t7762 = t497*t7739;
  t7767 = t7759 + t7762;
  t7768 = var2[3]*t717*t7767;
  t7769 = t7754 + t7768;
  t7813 = var2[5]*t275;
  t7834 = var2[6]*t275;
  t7845 = t520*t267*t794;
  t7852 = -1.*t497*t533*t794;
  t7855 = t7845 + t7852;
  t7856 = var2[4]*t7855;
  t7871 = -1.*t275*t19;
  t7873 = t267*t497*t794;
  t7874 = t520*t533*t794;
  t7883 = t7873 + t7874;
  t7884 = t717*t7883;
  t7885 = t7871 + t7884;
  t7894 = var2[3]*t7885;
  t7897 = t7813 + t7834 + t7856 + t7894;
  t7899 = -1.*var2[5]*t794*t1936;
  t7900 = -1.*var2[6]*t794*t1936;
  t7901 = t520*t267*t275*t1936;
  t7903 = -1.*t275*t497*t533*t1936;
  t7908 = t7901 + t7903;
  t7910 = var2[4]*t7908;
  t7913 = t19*t794*t1936;
  t7914 = t267*t275*t497*t1936;
  t7922 = t520*t275*t533*t1936;
  t7925 = t7914 + t7922;
  t7931 = t717*t7925;
  t7940 = t7913 + t7931;
  t7945 = var2[3]*t7940;
  t7967 = t7899 + t7900 + t7910 + t7945;
  t7971 = -1.*var2[5]*t794*t3921;
  t7985 = -1.*var2[6]*t794*t3921;
  t7988 = t520*t267*t275*t3921;
  t7999 = -1.*t275*t497*t533*t3921;
  t8005 = t7988 + t7999;
  t8008 = var2[4]*t8005;
  t8021 = t19*t794*t3921;
  t8022 = t267*t275*t497*t3921;
  t8042 = t520*t275*t533*t3921;
  t8044 = t8022 + t8042;
  t8061 = t717*t8044;
  t8062 = t8021 + t8061;
  t8067 = var2[3]*t8062;
  t8076 = t7971 + t7985 + t8008 + t8067;
  t8143 = -1.*t1150*t1331;
  t8179 = -1.*t1836*t1896;
  t8181 = t8143 + t8179;
  t8189 = t3706 + t3763;
  t8203 = t533*t794*t8181;
  t8208 = t267*t8189;
  t8210 = t8203 + t8208;
  t8212 = t267*t794*t8181;
  t8232 = -1.*t533*t8189;
  t8239 = t8212 + t8232;
  t8331 = t1483 + t1915;
  t8379 = -1.*t533*t8331;
  t8380 = t267*t794*t8189;
  t8388 = t8379 + t8380;
  t8418 = t267*t8331;
  t8420 = t533*t794*t8189;
  t8424 = t8418 + t8420;
  t8183 = var2[5]*t275*t8181;
  t8185 = var2[6]*t275*t8181;
  t8190 = var2[7]*t8189;
  t8211 = -1.*t497*t8210;
  t8244 = t520*t8239;
  t8246 = t8211 + t8244;
  t8250 = var2[4]*t8246;
  t8272 = -1.*t275*t19*t8181;
  t8278 = t520*t8210;
  t8279 = t497*t8239;
  t8280 = t8278 + t8279;
  t8293 = t717*t8280;
  t8306 = t8272 + t8293;
  t8321 = var2[3]*t8306;
  t8323 = t8183 + t8185 + t8190 + t8250 + t8321;
  t8339 = var2[7]*t8331;
  t8340 = var2[5]*t275*t8189;
  t8341 = var2[6]*t275*t8189;
  t8400 = t520*t8388;
  t8447 = -1.*t497*t8424;
  t8462 = t8400 + t8447;
  t8464 = var2[4]*t8462;
  t8469 = -1.*t275*t19*t8189;
  t8478 = t497*t8388;
  t8479 = t520*t8424;
  t8490 = t8478 + t8479;
  t8526 = t717*t8490;
  t8530 = t8469 + t8526;
  t8531 = var2[3]*t8530;
  t8532 = t8339 + t8340 + t8341 + t8464 + t8531;
  t8326 = 0.000956*t8323;
  t8536 = 0.00216*t8532;
  t8542 = t8326 + t8536;
  t8544 = 0.00144*t8323;
  t8547 = 0.000956*t8532;
  t8549 = t8544 + t8547;
  t8552 = 1.e-6*t8323;
  t8553 = 3.e-6*t8532;
  t8555 = t8552 + t8553;
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
  p_output1[12]=3.e-6*t1101*var2[3] + 0.00216*t3546*var2[3] + 0.000956*t5027*var2[3];
  p_output1[13]=1.e-6*t1101*var2[3] + 0.000956*t3546*var2[3] + 0.00144*t5027*var2[3];
  p_output1[14]=0.00334*t1101*var2[3] + 3.e-6*t3546*var2[3] + 1.e-6*t5027*var2[3];
  p_output1[15]=3.e-6*t6468 + 0.00216*t6705 + 0.000956*t7321;
  p_output1[16]=1.e-6*t6468 + 0.000956*t6705 + 0.00144*t7321;
  p_output1[17]=0.00334*t6468 + 3.e-6*t6705 + 1.e-6*t7321;
  p_output1[18]=3.e-6*t7563 + 0.00216*t7677 + 0.000956*t7769;
  p_output1[19]=1.e-6*t7563 + 0.000956*t7677 + 0.00144*t7769;
  p_output1[20]=0.00334*t7563 + 3.e-6*t7677 + 1.e-6*t7769;
  p_output1[21]=3.e-6*t7897 + 0.00216*t7967 + 0.000956*t8076;
  p_output1[22]=1.e-6*t7897 + 0.000956*t7967 + 0.00144*t8076;
  p_output1[23]=0.00334*t7897 + 3.e-6*t7967 + 1.e-6*t8076;
  p_output1[24]=t8542;
  p_output1[25]=t8549;
  p_output1[26]=t8555;
  p_output1[27]=t8542;
  p_output1[28]=t8549;
  p_output1[29]=t8555;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
}



void Jq_AMBody_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
