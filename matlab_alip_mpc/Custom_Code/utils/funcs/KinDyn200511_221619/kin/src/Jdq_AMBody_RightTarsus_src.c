/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_RightTarsus_src.h"

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
  double t901;
  double t961;
  double t1192;
  double t3701;
  double t3305;
  double t3306;
  double t3752;
  double t4150;
  double t3430;
  double t3908;
  double t4025;
  double t3138;
  double t4375;
  double t4423;
  double t4476;
  double t783;
  double t810;
  double t872;
  double t1652;
  double t4715;
  double t4046;
  double t4566;
  double t4674;
  double t3078;
  double t4813;
  double t4841;
  double t4940;
  double t1338;
  double t117;
  double t4688;
  double t5060;
  double t5075;
  double t5170;
  double t5178;
  double t5289;
  double t5314;
  double t5386;
  double t1689;
  double t6567;
  double t6608;
  double t6686;
  double t6116;
  double t6911;
  double t6955;
  double t7543;
  double t7676;
  double t7201;
  double t7802;
  double t7807;
  double t7854;
  double t7855;
  double t7894;
  double t7896;
  double t7919;
  double t321;
  double t793;
  double t1356;
  double t1391;
  double t1440;
  double t1673;
  double t1675;
  double t1749;
  double t2229;
  double t2510;
  double t2641;
  double t5082;
  double t5089;
  double t5161;
  double t5307;
  double t5430;
  double t5497;
  double t5507;
  double t5563;
  double t5620;
  double t5671;
  double t5752;
  double t5780;
  double t5998;
  double t6057;
  double t7841;
  double t7851;
  double t7852;
  double t7895;
  double t7926;
  double t7930;
  double t7936;
  double t7969;
  double t7970;
  double t8047;
  double t8061;
  double t8085;
  double t8097;
  double t8110;
  double t8179;
  double t8180;
  double t8181;
  double t8185;
  double t8186;
  double t8195;
  double t8199;
  double t8203;
  double t8204;
  double t8244;
  double t8245;
  double t8246;
  double t8248;
  double t8251;
  double t8255;
  double t8256;
  double t8257;
  double t8266;
  double t8268;
  double t8278;
  double t8280;
  t901 = Cos(var1[14]);
  t961 = -1.*t901;
  t1192 = 0. + t961;
  t3701 = Cos(var1[17]);
  t3305 = Cos(var1[18]);
  t3306 = Sin(var1[17]);
  t3752 = Sin(var1[18]);
  t4150 = Cos(var1[16]);
  t3430 = t3305*t3306;
  t3908 = t3701*t3752;
  t4025 = 0. + t3430 + t3908;
  t3138 = Sin(var1[16]);
  t4375 = t3701*t3305;
  t4423 = -1.*t3306*t3752;
  t4476 = 0. + t4375 + t4423;
  t783 = Sin(var1[4]);
  t810 = Cos(var1[4]);
  t872 = Cos(var1[5]);
  t1652 = Cos(var1[13]);
  t4715 = Sin(var1[15]);
  t4046 = -1.*t3138*t4025;
  t4566 = t4150*t4476;
  t4674 = 0. + t4046 + t4566;
  t3078 = Cos(var1[15]);
  t4813 = t4150*t4025;
  t4841 = t3138*t4476;
  t4940 = 0. + t4813 + t4841;
  t1338 = Sin(var1[13]);
  t117 = Sin(var1[14]);
  t4688 = t3078*t4674;
  t5060 = -1.*t4715*t4940;
  t5075 = 0. + t4688 + t5060;
  t5170 = t4715*t4674;
  t5178 = t3078*t4940;
  t5289 = 0. + t5170 + t5178;
  t5314 = t117*t5075;
  t5386 = 0. + t5314;
  t1689 = Sin(var1[5]);
  t6567 = -1.*t3701*t3305;
  t6608 = t3306*t3752;
  t6686 = 0. + t6567 + t6608;
  t6116 = t3138*t4025;
  t6911 = t4150*t6686;
  t6955 = 0. + t6116 + t6911;
  t7543 = -1.*t3138*t6686;
  t7676 = 0. + t4813 + t7543;
  t7201 = -1.*t4715*t6955;
  t7802 = t3078*t7676;
  t7807 = 0. + t7201 + t7802;
  t7854 = t3078*t6955;
  t7855 = t4715*t7676;
  t7894 = 0. + t7854 + t7855;
  t7896 = t117*t7807;
  t7919 = 0. + t7896;
  t321 = 0. + t117;
  t793 = -1.*t321*t783;
  t1356 = t1192*t1338;
  t1391 = 0. + t1356;
  t1440 = t872*t1391;
  t1673 = t1652*t1192;
  t1675 = 0. + t1673;
  t1749 = t1675*t1689;
  t2229 = 0. + t1440 + t1749;
  t2510 = t810*t2229;
  t2641 = 0. + t793 + t2510;
  t5082 = t901*t5075;
  t5089 = 0. + t5082;
  t5161 = -1.*t5089*t783;
  t5307 = t1652*t5289;
  t5430 = t1338*t5386;
  t5497 = 0. + t5307 + t5430;
  t5507 = t872*t5497;
  t5563 = -1.*t1338*t5289;
  t5620 = t1652*t5386;
  t5671 = 0. + t5563 + t5620;
  t5752 = t5671*t1689;
  t5780 = 0. + t5507 + t5752;
  t5998 = t810*t5780;
  t6057 = 0. + t5161 + t5998;
  t7841 = t901*t7807;
  t7851 = 0. + t7841;
  t7852 = -1.*t7851*t783;
  t7895 = t1652*t7894;
  t7926 = t1338*t7919;
  t7930 = 0. + t7895 + t7926;
  t7936 = t872*t7930;
  t7969 = -1.*t1338*t7894;
  t7970 = t1652*t7919;
  t8047 = 0. + t7969 + t7970;
  t8061 = t8047*t1689;
  t8085 = 0. + t7936 + t8061;
  t8097 = t810*t8085;
  t8110 = 0. + t7852 + t8097;
  t8179 = t1675*t872;
  t8180 = -1.*t1391*t1689;
  t8181 = 0. + t8179 + t8180;
  t8185 = t872*t5671;
  t8186 = -1.*t5497*t1689;
  t8195 = 0. + t8185 + t8186;
  t8199 = t872*t8047;
  t8203 = -1.*t7930*t1689;
  t8204 = 0. + t8199 + t8203;
  t8244 = 0.000063*t321;
  t8245 = -0.00288*t5089;
  t8246 = 0.00113*t7851;
  t8248 = t8244 + t8245 + t8246;
  t8251 = -0.000036*t321;
  t8255 = 0.0231*t5089;
  t8256 = -0.00288*t7851;
  t8257 = t8251 + t8255 + t8256;
  t8266 = 0.0239*t321;
  t8268 = -0.000036*t5089;
  t8278 = 0.000063*t7851;
  t8280 = t8266 + t8268 + t8278;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000063*t2641 - 0.00288*t6057 + 0.00113*t8110;
  p_output1[10]=-0.000036*t2641 + 0.0231*t6057 - 0.00288*t8110;
  p_output1[11]=0.0239*t2641 - 0.000036*t6057 + 0.000063*t8110;
  p_output1[12]=0.000063*t8181 - 0.00288*t8195 + 0.00113*t8204;
  p_output1[13]=-0.000036*t8181 + 0.0231*t8195 - 0.00288*t8204;
  p_output1[14]=0.0239*t8181 - 0.000036*t8195 + 0.000063*t8204;
  p_output1[15]=t8248;
  p_output1[16]=t8257;
  p_output1[17]=t8280;
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
  p_output1[39]=t8248;
  p_output1[40]=t8257;
  p_output1[41]=t8280;
  p_output1[42]=-0.00288*t5289 + 0.00113*t7894;
  p_output1[43]=0.0231*t5289 - 0.00288*t7894;
  p_output1[44]=-0.000036*t5289 + 0.000063*t7894;
  p_output1[45]=0.000063;
  p_output1[46]=-0.000036;
  p_output1[47]=0.0239;
  p_output1[48]=0.000063;
  p_output1[49]=-0.000036;
  p_output1[50]=0.0239;
  p_output1[51]=0.000063;
  p_output1[52]=-0.000036;
  p_output1[53]=0.0239;
  p_output1[54]=0.000063;
  p_output1[55]=-0.000036;
  p_output1[56]=0.0239;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jdq_AMBody_RightTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
