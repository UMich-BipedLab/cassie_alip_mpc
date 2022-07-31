/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightKnee_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t888;
  double t2079;
  double t2185;
  double t2193;
  double t2214;
  double t2300;
  double t2501;
  double t2364;
  double t2755;
  double t1500;
  double t1508;
  double t1610;
  double t1960;
  double t2393;
  double t2779;
  double t2783;
  double t3077;
  double t3210;
  double t3300;
  double t998;
  double t3519;
  double t3523;
  double t3570;
  double t3806;
  double t3861;
  double t3892;
  double t3939;
  double t4225;
  double t4268;
  double t4280;
  double t4776;
  double t4830;
  double t4835;
  double t4931;
  double t5117;
  double t5118;
  double t5290;
  double t5372;
  double t5491;
  double t5564;
  double t5887;
  double t5973;
  double t5975;
  double t1752;
  double t1970;
  double t2052;
  double t2207;
  double t2255;
  double t2288;
  double t2873;
  double t2944;
  double t3003;
  double t3394;
  double t3444;
  double t3450;
  double t6814;
  double t6976;
  double t7038;
  double t7121;
  double t7142;
  double t7146;
  double t3930;
  double t3954;
  double t4224;
  double t7179;
  double t7182;
  double t7201;
  double t4638;
  double t4652;
  double t4693;
  double t5202;
  double t5326;
  double t5358;
  double t7304;
  double t7365;
  double t7401;
  double t7643;
  double t7644;
  double t7648;
  double t5574;
  double t5609;
  double t5824;
  double t7691;
  double t7755;
  double t7762;
  double t7846;
  double t7883;
  double t7885;
  double t7989;
  double t8013;
  double t8016;
  double t8037;
  double t8051;
  double t8054;
  double t8133;
  double t8139;
  double t8141;
  double t8145;
  double t8157;
  double t8167;
  double t8182;
  double t8183;
  double t8190;
  t888 = Cos(var1[3]);
  t2079 = Cos(var1[13]);
  t2185 = -1.*t2079;
  t2193 = 1. + t2185;
  t2214 = Sin(var1[13]);
  t2300 = Cos(var1[5]);
  t2501 = Sin(var1[3]);
  t2364 = Sin(var1[4]);
  t2755 = Sin(var1[5]);
  t1500 = Cos(var1[14]);
  t1508 = -1.*t1500;
  t1610 = 1. + t1508;
  t1960 = Sin(var1[14]);
  t2393 = t888*t2300*t2364;
  t2779 = t2501*t2755;
  t2783 = t2393 + t2779;
  t3077 = -1.*t2300*t2501;
  t3210 = t888*t2364*t2755;
  t3300 = t3077 + t3210;
  t998 = Cos(var1[4]);
  t3519 = t2214*t2783;
  t3523 = t2079*t3300;
  t3570 = t3519 + t3523;
  t3806 = Cos(var1[15]);
  t3861 = -1.*t3806;
  t3892 = 1. + t3861;
  t3939 = Sin(var1[15]);
  t4225 = t2079*t2783;
  t4268 = -1.*t2214*t3300;
  t4280 = t4225 + t4268;
  t4776 = t1500*t888*t998;
  t4830 = t1960*t3570;
  t4835 = t4776 + t4830;
  t4931 = Cos(var1[16]);
  t5117 = -1.*t4931;
  t5118 = 1. + t5117;
  t5290 = Sin(var1[16]);
  t5372 = t3939*t4280;
  t5491 = t3806*t4835;
  t5564 = t5372 + t5491;
  t5887 = t3806*t4280;
  t5973 = -1.*t3939*t4835;
  t5975 = t5887 + t5973;
  t1752 = -0.08055*t1610;
  t1970 = -0.135*t1960;
  t2052 = 0. + t1752 + t1970;
  t2207 = 0.07996*t2193;
  t2255 = 0.135*t2214;
  t2288 = 0. + t2207 + t2255;
  t2873 = -0.135*t2193;
  t2944 = 0.07996*t2214;
  t3003 = 0. + t2873 + t2944;
  t3394 = -0.135*t1610;
  t3444 = 0.08055*t1960;
  t3450 = 0. + t3394 + t3444;
  t6814 = t2300*t2501*t2364;
  t6976 = -1.*t888*t2755;
  t7038 = t6814 + t6976;
  t7121 = t888*t2300;
  t7142 = t2501*t2364*t2755;
  t7146 = t7121 + t7142;
  t3930 = -0.01004*t3892;
  t3954 = 0.08055*t3939;
  t4224 = 0. + t3930 + t3954;
  t7179 = t2214*t7038;
  t7182 = t2079*t7146;
  t7201 = t7179 + t7182;
  t4638 = -0.08055*t3892;
  t4652 = -0.01004*t3939;
  t4693 = 0. + t4638 + t4652;
  t5202 = -0.08055*t5118;
  t5326 = -0.13004*t5290;
  t5358 = 0. + t5202 + t5326;
  t7304 = t2079*t7038;
  t7365 = -1.*t2214*t7146;
  t7401 = t7304 + t7365;
  t7643 = t1500*t998*t2501;
  t7644 = t1960*t7201;
  t7648 = t7643 + t7644;
  t5574 = -0.13004*t5118;
  t5609 = 0.08055*t5290;
  t5824 = 0. + t5574 + t5609;
  t7691 = t3939*t7401;
  t7755 = t3806*t7648;
  t7762 = t7691 + t7755;
  t7846 = t3806*t7401;
  t7883 = -1.*t3939*t7648;
  t7885 = t7846 + t7883;
  t7989 = t998*t2300*t2214;
  t8013 = t2079*t998*t2755;
  t8016 = t7989 + t8013;
  t8037 = t2079*t998*t2300;
  t8051 = -1.*t998*t2214*t2755;
  t8054 = t8037 + t8051;
  t8133 = -1.*t1500*t2364;
  t8139 = t1960*t8016;
  t8141 = t8133 + t8139;
  t8145 = t3939*t8054;
  t8157 = t3806*t8141;
  t8167 = t8145 + t8157;
  t8182 = t3806*t8054;
  t8183 = -1.*t3939*t8141;
  t8190 = t8182 + t8183;
  p_output1[0]=0. + t2288*t2783 + t3003*t3300 + t3450*t3570 + t4224*t4280 + t4693*t4835 + t5358*t5564 + t5824*t5975 - 0.15304*(-1.*t5290*t5564 + t4931*t5975) - 0.04845*(t4931*t5564 + t5290*t5975) + t2052*t888*t998 - 0.1327*(t1500*t3570 - 1.*t1960*t888*t998) + var1[0];
  p_output1[1]=0. + t2288*t7038 + t3003*t7146 + t3450*t7201 + t4224*t7401 + t4693*t7648 + t5358*t7762 + t5824*t7885 - 0.15304*(-1.*t5290*t7762 + t4931*t7885) - 0.04845*(t4931*t7762 + t5290*t7885) + t2052*t2501*t998 - 0.1327*(t1500*t7201 - 1.*t1960*t2501*t998) + var1[1];
  p_output1[2]=0. - 1.*t2052*t2364 + t3450*t8016 - 0.1327*(t1960*t2364 + t1500*t8016) + t4224*t8054 + t4693*t8141 + t5358*t8167 + t5824*t8190 - 0.15304*(-1.*t5290*t8167 + t4931*t8190) - 0.04845*(t4931*t8167 + t5290*t8190) + t2288*t2300*t998 + t2755*t3003*t998 + var1[2];
}



void p_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
