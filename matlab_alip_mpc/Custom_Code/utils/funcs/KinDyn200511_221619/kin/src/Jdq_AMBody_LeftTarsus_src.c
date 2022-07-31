/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftTarsus_src.h"

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
  double t353;
  double t400;
  double t438;
  double t1402;
  double t3274;
  double t3178;
  double t3239;
  double t3275;
  double t3624;
  double t3270;
  double t3375;
  double t3418;
  double t2960;
  double t3635;
  double t3685;
  double t3734;
  double t251;
  double t760;
  double t1047;
  double t2643;
  double t4150;
  double t4158;
  double t4245;
  double t3491;
  double t4005;
  double t4009;
  double t4734;
  double t310;
  double t1550;
  double t4146;
  double t4745;
  double t4755;
  double t921;
  double t5288;
  double t5300;
  double t5382;
  double t5606;
  double t5836;
  double t6939;
  double t6946;
  double t6964;
  double t7092;
  double t7108;
  double t7163;
  double t6979;
  double t7001;
  double t7072;
  double t7214;
  double t7240;
  double t7299;
  double t7300;
  double t7311;
  double t7390;
  double t7393;
  double t665;
  double t703;
  double t866;
  double t1123;
  double t1145;
  double t1156;
  double t1306;
  double t1397;
  double t1610;
  double t1820;
  double t2169;
  double t4975;
  double t5170;
  double t5258;
  double t5524;
  double t5967;
  double t5971;
  double t5984;
  double t5989;
  double t6195;
  double t6246;
  double t6310;
  double t6366;
  double t6682;
  double t6794;
  double t7247;
  double t7256;
  double t7270;
  double t7322;
  double t7409;
  double t7503;
  double t7505;
  double t7508;
  double t7543;
  double t7544;
  double t7555;
  double t7564;
  double t7567;
  double t7571;
  double t7689;
  double t7694;
  double t7703;
  double t7705;
  double t7706;
  double t7708;
  double t7721;
  double t7722;
  double t7724;
  double t7775;
  double t7778;
  double t7784;
  double t7785;
  double t7786;
  double t7787;
  double t7788;
  double t7789;
  double t7790;
  double t7791;
  double t7792;
  double t7795;
  t353 = Cos(var1[7]);
  t400 = -1.*t353;
  t438 = 0. + t400;
  t1402 = Sin(var1[4]);
  t3274 = Cos(var1[10]);
  t3178 = Cos(var1[11]);
  t3239 = Sin(var1[10]);
  t3275 = Sin(var1[11]);
  t3624 = Cos(var1[9]);
  t3270 = t3178*t3239;
  t3375 = t3274*t3275;
  t3418 = 0. + t3270 + t3375;
  t2960 = Sin(var1[9]);
  t3635 = t3274*t3178;
  t3685 = -1.*t3239*t3275;
  t3734 = 0. + t3635 + t3685;
  t251 = Cos(var1[4]);
  t760 = Sin(var1[5]);
  t1047 = Sin(var1[6]);
  t2643 = Cos(var1[8]);
  t4150 = t3624*t3418;
  t4158 = t2960*t3734;
  t4245 = 0. + t4150 + t4158;
  t3491 = -1.*t2960*t3418;
  t4005 = t3624*t3734;
  t4009 = 0. + t3491 + t4005;
  t4734 = Sin(var1[8]);
  t310 = Cos(var1[6]);
  t1550 = Sin(var1[7]);
  t4146 = t2643*t4009;
  t4745 = -1.*t4245*t4734;
  t4755 = 0. + t4146 + t4745;
  t921 = Cos(var1[5]);
  t5288 = t2643*t4245;
  t5300 = t4009*t4734;
  t5382 = 0. + t5288 + t5300;
  t5606 = t1550*t4755;
  t5836 = 0. + t5606;
  t6939 = -1.*t3274*t3178;
  t6946 = t3239*t3275;
  t6964 = 0. + t6939 + t6946;
  t7092 = t2960*t3418;
  t7108 = t3624*t6964;
  t7163 = 0. + t7092 + t7108;
  t6979 = -1.*t2960*t6964;
  t7001 = 0. + t4150 + t6979;
  t7072 = t2643*t7001;
  t7214 = -1.*t7163*t4734;
  t7240 = 0. + t7072 + t7214;
  t7299 = t2643*t7163;
  t7300 = t7001*t4734;
  t7311 = 0. + t7299 + t7300;
  t7390 = t1550*t7240;
  t7393 = 0. + t7390;
  t665 = t310*t438;
  t703 = 0. + t665;
  t866 = t703*t760;
  t1123 = t438*t1047;
  t1145 = 0. + t1123;
  t1156 = t921*t1145;
  t1306 = 0. + t866 + t1156;
  t1397 = t251*t1306;
  t1610 = 0. + t1550;
  t1820 = -1.*t1402*t1610;
  t2169 = 0. + t1397 + t1820;
  t4975 = t353*t4755;
  t5170 = 0. + t4975;
  t5258 = -1.*t1402*t5170;
  t5524 = -1.*t1047*t5382;
  t5967 = t310*t5836;
  t5971 = 0. + t5524 + t5967;
  t5984 = t760*t5971;
  t5989 = t310*t5382;
  t6195 = t1047*t5836;
  t6246 = 0. + t5989 + t6195;
  t6310 = t921*t6246;
  t6366 = 0. + t5984 + t6310;
  t6682 = t251*t6366;
  t6794 = 0. + t5258 + t6682;
  t7247 = t353*t7240;
  t7256 = 0. + t7247;
  t7270 = -1.*t1402*t7256;
  t7322 = -1.*t1047*t7311;
  t7409 = t310*t7393;
  t7503 = 0. + t7322 + t7409;
  t7505 = t760*t7503;
  t7508 = t310*t7311;
  t7543 = t1047*t7393;
  t7544 = 0. + t7508 + t7543;
  t7555 = t921*t7544;
  t7564 = 0. + t7505 + t7555;
  t7567 = t251*t7564;
  t7571 = 0. + t7270 + t7567;
  t7689 = t921*t703;
  t7694 = -1.*t760*t1145;
  t7703 = 0. + t7689 + t7694;
  t7705 = t921*t5971;
  t7706 = -1.*t760*t6246;
  t7708 = 0. + t7705 + t7706;
  t7721 = t921*t7503;
  t7722 = -1.*t760*t7544;
  t7724 = 0. + t7721 + t7722;
  t7775 = -0.000063*t1610;
  t7778 = -0.00288*t5170;
  t7784 = 0.00113*t7256;
  t7785 = t7775 + t7778 + t7784;
  t7786 = 0.000036*t1610;
  t7787 = 0.0231*t5170;
  t7788 = -0.00288*t7256;
  t7789 = t7786 + t7787 + t7788;
  t7790 = 0.0239*t1610;
  t7791 = 0.000036*t5170;
  t7792 = -0.000063*t7256;
  t7795 = t7790 + t7791 + t7792;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.000063*t2169 - 0.00288*t6794 + 0.00113*t7571;
  p_output1[10]=0.000036*t2169 + 0.0231*t6794 - 0.00288*t7571;
  p_output1[11]=0.0239*t2169 + 0.000036*t6794 - 0.000063*t7571;
  p_output1[12]=-0.000063*t7703 - 0.00288*t7708 + 0.00113*t7724;
  p_output1[13]=0.000036*t7703 + 0.0231*t7708 - 0.00288*t7724;
  p_output1[14]=0.0239*t7703 + 0.000036*t7708 - 0.000063*t7724;
  p_output1[15]=t7785;
  p_output1[16]=t7789;
  p_output1[17]=t7795;
  p_output1[18]=t7785;
  p_output1[19]=t7789;
  p_output1[20]=t7795;
  p_output1[21]=-0.00288*t5382 + 0.00113*t7311;
  p_output1[22]=0.0231*t5382 - 0.00288*t7311;
  p_output1[23]=0.000036*t5382 - 0.000063*t7311;
  p_output1[24]=-0.000063;
  p_output1[25]=0.000036;
  p_output1[26]=0.0239;
  p_output1[27]=-0.000063;
  p_output1[28]=0.000036;
  p_output1[29]=0.0239;
  p_output1[30]=-0.000063;
  p_output1[31]=0.000036;
  p_output1[32]=0.0239;
  p_output1[33]=-0.000063;
  p_output1[34]=0.000036;
  p_output1[35]=0.0239;
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



void Jdq_AMBody_LeftTarsus_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
