/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightToe_src.h"

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
  double t639;
  double t669;
  double t708;
  double t1672;
  double t1573;
  double t1595;
  double t1681;
  double t2663;
  double t1629;
  double t2181;
  double t2574;
  double t1571;
  double t2817;
  double t2818;
  double t2849;
  double t3351;
  double t2645;
  double t2859;
  double t2887;
  double t1512;
  double t3416;
  double t3441;
  double t3596;
  double t266;
  double t492;
  double t611;
  double t918;
  double t3806;
  double t2916;
  double t3618;
  double t3717;
  double t1385;
  double t3878;
  double t3890;
  double t3911;
  double t737;
  double t23;
  double t3776;
  double t4199;
  double t4216;
  double t4602;
  double t4731;
  double t4736;
  double t5099;
  double t5110;
  double t1072;
  double t6942;
  double t6968;
  double t7053;
  double t6940;
  double t7064;
  double t7085;
  double t7329;
  double t7389;
  double t7191;
  double t7529;
  double t7678;
  double t7851;
  double t7905;
  double t7926;
  double t7848;
  double t8093;
  double t8384;
  double t8661;
  double t8691;
  double t8713;
  double t8744;
  double t8745;
  double t4359;
  double t4412;
  double t4431;
  double t4994;
  double t5163;
  double t5179;
  double t5246;
  double t5303;
  double t5370;
  double t5373;
  double t5396;
  double t5485;
  double t6399;
  double t6431;
  double t8466;
  double t8578;
  double t8603;
  double t8726;
  double t8749;
  double t8809;
  double t8819;
  double t8835;
  double t8837;
  double t8862;
  double t8870;
  double t8872;
  double t8916;
  double t8934;
  double t150;
  double t412;
  double t758;
  double t787;
  double t812;
  double t1009;
  double t1051;
  double t1110;
  double t1179;
  double t1197;
  double t1208;
  double t9163;
  double t9164;
  double t9165;
  double t9168;
  double t9171;
  double t9178;
  double t9155;
  double t9160;
  double t9161;
  double t9214;
  double t9215;
  double t9220;
  double t9221;
  double t9222;
  double t9223;
  double t9224;
  double t9226;
  double t9229;
  double t9230;
  t639 = Cos(var1[14]);
  t669 = -1.*t639;
  t708 = 0. + t669;
  t1672 = Cos(var1[18]);
  t1573 = Cos(var1[19]);
  t1595 = Sin(var1[18]);
  t1681 = Sin(var1[19]);
  t2663 = Cos(var1[17]);
  t1629 = t1573*t1595;
  t2181 = t1672*t1681;
  t2574 = 0. + t1629 + t2181;
  t1571 = Sin(var1[17]);
  t2817 = t1672*t1573;
  t2818 = -1.*t1595*t1681;
  t2849 = 0. + t2817 + t2818;
  t3351 = Cos(var1[16]);
  t2645 = -1.*t1571*t2574;
  t2859 = t2663*t2849;
  t2887 = 0. + t2645 + t2859;
  t1512 = Sin(var1[16]);
  t3416 = t2663*t2574;
  t3441 = t1571*t2849;
  t3596 = 0. + t3416 + t3441;
  t266 = Sin(var1[4]);
  t492 = Cos(var1[4]);
  t611 = Cos(var1[5]);
  t918 = Cos(var1[13]);
  t3806 = Cos(var1[15]);
  t2916 = t1512*t2887;
  t3618 = t3351*t3596;
  t3717 = 0. + t2916 + t3618;
  t1385 = Sin(var1[15]);
  t3878 = t3351*t2887;
  t3890 = -1.*t1512*t3596;
  t3911 = 0. + t3878 + t3890;
  t737 = Sin(var1[13]);
  t23 = Sin(var1[14]);
  t3776 = -1.*t1385*t3717;
  t4199 = t3806*t3911;
  t4216 = 0. + t3776 + t4199;
  t4602 = t3806*t3717;
  t4731 = t1385*t3911;
  t4736 = 0. + t4602 + t4731;
  t5099 = t23*t4216;
  t5110 = 0. + t5099;
  t1072 = Sin(var1[5]);
  t6942 = -1.*t1672*t1573;
  t6968 = t1595*t1681;
  t7053 = 0. + t6942 + t6968;
  t6940 = t1571*t2574;
  t7064 = t2663*t7053;
  t7085 = 0. + t6940 + t7064;
  t7329 = -1.*t1571*t7053;
  t7389 = 0. + t3416 + t7329;
  t7191 = -1.*t1512*t7085;
  t7529 = t3351*t7389;
  t7678 = 0. + t7191 + t7529;
  t7851 = t3351*t7085;
  t7905 = t1512*t7389;
  t7926 = 0. + t7851 + t7905;
  t7848 = t3806*t7678;
  t8093 = -1.*t1385*t7926;
  t8384 = 0. + t7848 + t8093;
  t8661 = t1385*t7678;
  t8691 = t3806*t7926;
  t8713 = 0. + t8661 + t8691;
  t8744 = t23*t8384;
  t8745 = 0. + t8744;
  t4359 = t639*t4216;
  t4412 = 0. + t4359;
  t4431 = -1.*t4412*t266;
  t4994 = t918*t4736;
  t5163 = t737*t5110;
  t5179 = 0. + t4994 + t5163;
  t5246 = t611*t5179;
  t5303 = -1.*t737*t4736;
  t5370 = t918*t5110;
  t5373 = 0. + t5303 + t5370;
  t5396 = t5373*t1072;
  t5485 = 0. + t5246 + t5396;
  t6399 = t492*t5485;
  t6431 = 0. + t4431 + t6399;
  t8466 = t639*t8384;
  t8578 = 0. + t8466;
  t8603 = -1.*t8578*t266;
  t8726 = t918*t8713;
  t8749 = t737*t8745;
  t8809 = 0. + t8726 + t8749;
  t8819 = t611*t8809;
  t8835 = -1.*t737*t8713;
  t8837 = t918*t8745;
  t8862 = 0. + t8835 + t8837;
  t8870 = t8862*t1072;
  t8872 = 0. + t8819 + t8870;
  t8916 = t492*t8872;
  t8934 = 0. + t8603 + t8916;
  t150 = 0. + t23;
  t412 = -1.*t150*t266;
  t758 = t708*t737;
  t787 = 0. + t758;
  t812 = t611*t787;
  t1009 = t918*t708;
  t1051 = 0. + t1009;
  t1110 = t1051*t1072;
  t1179 = 0. + t812 + t1110;
  t1197 = t492*t1179;
  t1208 = 0. + t412 + t1197;
  t9163 = t611*t5373;
  t9164 = -1.*t5179*t1072;
  t9165 = 0. + t9163 + t9164;
  t9168 = t611*t8862;
  t9171 = -1.*t8809*t1072;
  t9178 = 0. + t9168 + t9171;
  t9155 = t1051*t611;
  t9160 = -1.*t787*t1072;
  t9161 = 0. + t9155 + t9160;
  t9214 = 1.e-6*t150;
  t9215 = -0.000099*t4412;
  t9220 = 0.000287*t8578;
  t9221 = t9214 + t9215 + t9220;
  t9222 = 0.000171*t4412;
  t9223 = -0.000099*t8578;
  t9224 = t9222 + t9223;
  t9226 = 0.000449*t150;
  t9229 = 1.e-6*t8578;
  t9230 = t9226 + t9229;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=1.e-6*t1208 - 0.000099*t6431 + 0.000287*t8934;
  p_output1[10]=0.000171*t6431 - 0.000099*t8934;
  p_output1[11]=0.000449*t1208 + 1.e-6*t8934;
  p_output1[12]=1.e-6*t9161 - 0.000099*t9165 + 0.000287*t9178;
  p_output1[13]=0.000171*t9165 - 0.000099*t9178;
  p_output1[14]=0.000449*t9161 + 1.e-6*t9178;
  p_output1[15]=t9221;
  p_output1[16]=t9224;
  p_output1[17]=t9230;
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
  p_output1[39]=t9221;
  p_output1[40]=t9224;
  p_output1[41]=t9230;
  p_output1[42]=-0.000099*t4736 + 0.000287*t8713;
  p_output1[43]=0.000171*t4736 - 0.000099*t8713;
  p_output1[44]=1.e-6*t8713;
  p_output1[45]=1.e-6;
  p_output1[46]=0;
  p_output1[47]=0.000449;
  p_output1[48]=1.e-6;
  p_output1[49]=0;
  p_output1[50]=0.000449;
  p_output1[51]=1.e-6;
  p_output1[52]=0;
  p_output1[53]=0.000449;
  p_output1[54]=1.e-6;
  p_output1[55]=0;
  p_output1[56]=0.000449;
  p_output1[57]=1.e-6;
  p_output1[58]=0;
  p_output1[59]=0.000449;
}



void Jdq_AMBody_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
