/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightThigh_src.h"

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
  double t1243;
  double t1333;
  double t1390;
  double t1417;
  double t1695;
  double t2481;
  double t1912;
  double t2082;
  double t2556;
  double t506;
  double t597;
  double t618;
  double t715;
  double t2113;
  double t2557;
  double t2590;
  double t3003;
  double t3038;
  double t3079;
  double t43;
  double t3283;
  double t3337;
  double t3343;
  double t3413;
  double t3476;
  double t3488;
  double t3502;
  double t3623;
  double t3635;
  double t3656;
  double t3828;
  double t3866;
  double t3893;
  double t695;
  double t1137;
  double t1150;
  double t1585;
  double t1848;
  double t1869;
  double t2963;
  double t2979;
  double t2990;
  double t3127;
  double t3141;
  double t3202;
  double t4226;
  double t4254;
  double t4269;
  double t4338;
  double t4348;
  double t4350;
  double t3501;
  double t3520;
  double t3536;
  double t4369;
  double t4375;
  double t4380;
  double t3790;
  double t3791;
  double t3793;
  double t4477;
  double t4521;
  double t4561;
  double t4717;
  double t4721;
  double t4722;
  double t4894;
  double t4914;
  double t4916;
  double t4945;
  double t4950;
  double t4952;
  double t5022;
  double t5032;
  double t5074;
  double t5287;
  double t5288;
  double t5297;
  double t5305;
  double t5329;
  double t5333;
  double t5379;
  double t5385;
  double t5390;
  double t5478;
  double t5508;
  double t5520;
  double t5572;
  double t5583;
  double t5598;
  double t5653;
  double t5662;
  double t5673;
  double t5776;
  double t5790;
  double t5803;
  double t5873;
  double t5875;
  double t5837;
  double t5842;
  double t5850;
  double t6014;
  double t6017;
  double t6020;
  double t6057;
  double t6061;
  double t6065;
  double t6034;
  double t6035;
  double t6218;
  double t6225;
  double t6228;
  double t6182;
  double t6184;
  double t6189;
  double t6356;
  double t6358;
  double t6269;
  double t6291;
  double t6320;
  double t6323;
  double t6333;
  double t6467;
  double t6471;
  double t6472;
  double t6500;
  double t6501;
  double t6477;
  double t6490;
  double t6206;
  double t6233;
  double t6234;
  double t6237;
  double t6244;
  double t6245;
  double t6247;
  double t6248;
  double t6253;
  double t6257;
  double t6261;
  double t6265;
  double t4567;
  double t4593;
  double t4598;
  double t6642;
  double t6646;
  double t6661;
  double t6666;
  double t6673;
  double t6720;
  double t6734;
  double t6739;
  double t6743;
  double t6755;
  double t6763;
  double t6800;
  double t6801;
  double t6802;
  double t6812;
  double t6821;
  double t6825;
  double t4772;
  double t4777;
  double t4792;
  double t6890;
  double t6900;
  double t6907;
  double t6909;
  double t6916;
  double t6967;
  double t6968;
  double t6970;
  double t7028;
  double t7041;
  double t7051;
  t1243 = Sin(var1[3]);
  t1333 = Cos(var1[13]);
  t1390 = -1.*t1333;
  t1417 = 1. + t1390;
  t1695 = Sin(var1[13]);
  t2481 = Cos(var1[3]);
  t1912 = Cos(var1[5]);
  t2082 = Sin(var1[4]);
  t2556 = Sin(var1[5]);
  t506 = Cos(var1[14]);
  t597 = -1.*t506;
  t618 = 1. + t597;
  t715 = Sin(var1[14]);
  t2113 = -1.*t1912*t1243*t2082;
  t2557 = t2481*t2556;
  t2590 = t2113 + t2557;
  t3003 = -1.*t2481*t1912;
  t3038 = -1.*t1243*t2082*t2556;
  t3079 = t3003 + t3038;
  t43 = Cos(var1[4]);
  t3283 = t1695*t2590;
  t3337 = t1333*t3079;
  t3343 = t3283 + t3337;
  t3413 = Cos(var1[15]);
  t3476 = -1.*t3413;
  t3488 = 1. + t3476;
  t3502 = Sin(var1[15]);
  t3623 = t1333*t2590;
  t3635 = -1.*t1695*t3079;
  t3656 = t3623 + t3635;
  t3828 = -1.*t506*t43*t1243;
  t3866 = t715*t3343;
  t3893 = t3828 + t3866;
  t695 = -0.08055*t618;
  t1137 = -0.135*t715;
  t1150 = 0. + t695 + t1137;
  t1585 = 0.07996*t1417;
  t1848 = 0.135*t1695;
  t1869 = 0. + t1585 + t1848;
  t2963 = -0.135*t1417;
  t2979 = 0.07996*t1695;
  t2990 = 0. + t2963 + t2979;
  t3127 = -0.135*t618;
  t3141 = 0.08055*t715;
  t3202 = 0. + t3127 + t3141;
  t4226 = t2481*t1912*t2082;
  t4254 = t1243*t2556;
  t4269 = t4226 + t4254;
  t4338 = -1.*t1912*t1243;
  t4348 = t2481*t2082*t2556;
  t4350 = t4338 + t4348;
  t3501 = -0.01004*t3488;
  t3520 = 0.08055*t3502;
  t3536 = 0. + t3501 + t3520;
  t4369 = t1695*t4269;
  t4375 = t1333*t4350;
  t4380 = t4369 + t4375;
  t3790 = -0.08055*t3488;
  t3791 = -0.01004*t3502;
  t3793 = 0. + t3790 + t3791;
  t4477 = t1333*t4269;
  t4521 = -1.*t1695*t4350;
  t4561 = t4477 + t4521;
  t4717 = t506*t2481*t43;
  t4721 = t715*t4380;
  t4722 = t4717 + t4721;
  t4894 = t2481*t43*t1912*t1695;
  t4914 = t1333*t2481*t43*t2556;
  t4916 = t4894 + t4914;
  t4945 = t1333*t2481*t43*t1912;
  t4950 = -1.*t2481*t43*t1695*t2556;
  t4952 = t4945 + t4950;
  t5022 = -1.*t506*t2481*t2082;
  t5032 = t715*t4916;
  t5074 = t5022 + t5032;
  t5287 = t43*t1912*t1695*t1243;
  t5288 = t1333*t43*t1243*t2556;
  t5297 = t5287 + t5288;
  t5305 = t1333*t43*t1912*t1243;
  t5329 = -1.*t43*t1695*t1243*t2556;
  t5333 = t5305 + t5329;
  t5379 = -1.*t506*t1243*t2082;
  t5385 = t715*t5297;
  t5390 = t5379 + t5385;
  t5478 = -1.*t1912*t1695*t2082;
  t5508 = -1.*t1333*t2082*t2556;
  t5520 = t5478 + t5508;
  t5572 = -1.*t1333*t1912*t2082;
  t5583 = t1695*t2082*t2556;
  t5598 = t5572 + t5583;
  t5653 = -1.*t506*t43;
  t5662 = t715*t5520;
  t5673 = t5653 + t5662;
  t5776 = t1912*t1243;
  t5790 = -1.*t2481*t2082*t2556;
  t5803 = t5776 + t5790;
  t5873 = t1695*t5803;
  t5875 = t4477 + t5873;
  t5837 = -1.*t1695*t4269;
  t5842 = t1333*t5803;
  t5850 = t5837 + t5842;
  t6014 = t1912*t1243*t2082;
  t6017 = -1.*t2481*t2556;
  t6020 = t6014 + t6017;
  t6057 = t1333*t6020;
  t6061 = t1695*t3079;
  t6065 = t6057 + t6061;
  t6034 = -1.*t1695*t6020;
  t6035 = t6034 + t3337;
  t6218 = t1333*t43*t1912;
  t6225 = -1.*t43*t1695*t2556;
  t6228 = t6218 + t6225;
  t6182 = -1.*t43*t1912*t1695;
  t6184 = -1.*t1333*t43*t2556;
  t6189 = t6182 + t6184;
  t6356 = -1.*t1333*t4350;
  t6358 = t5837 + t6356;
  t6269 = 0.135*t1333;
  t6291 = t6269 + t2979;
  t6320 = 0.07996*t1333;
  t6323 = -0.135*t1695;
  t6333 = t6320 + t6323;
  t6467 = t2481*t1912;
  t6471 = t1243*t2082*t2556;
  t6472 = t6467 + t6471;
  t6500 = -1.*t1695*t6472;
  t6501 = t6057 + t6500;
  t6477 = -1.*t1333*t6472;
  t6490 = t6034 + t6477;
  t6206 = t3536*t6189;
  t6233 = -0.1708*t506*t6228;
  t6234 = t3202*t6228;
  t6237 = t715*t3793*t6228;
  t6244 = t3502*t6189;
  t6245 = t3413*t715*t6228;
  t6247 = t6244 + t6245;
  t6248 = -0.08045*t6247;
  t6253 = t3413*t6189;
  t6257 = -1.*t715*t3502*t6228;
  t6261 = t6253 + t6257;
  t6265 = -0.06984*t6261;
  t4567 = -1.*t2481*t43*t715;
  t4593 = t506*t4380;
  t4598 = t4567 + t4593;
  t6642 = -0.135*t506;
  t6646 = -0.08055*t715;
  t6661 = t6642 + t6646;
  t6666 = 0.08055*t506;
  t6673 = t6666 + t1137;
  t6720 = t1695*t6020;
  t6734 = t1333*t6472;
  t6739 = t6720 + t6734;
  t6743 = -1.*t43*t715*t1243;
  t6755 = t506*t6739;
  t6763 = t6743 + t6755;
  t6800 = t43*t1912*t1695;
  t6801 = t1333*t43*t2556;
  t6802 = t6800 + t6801;
  t6812 = t715*t2082;
  t6821 = t506*t6802;
  t6825 = t6812 + t6821;
  t4772 = t3413*t4561;
  t4777 = -1.*t3502*t4722;
  t4792 = t4772 + t4777;
  t6890 = 0.08055*t3413;
  t6900 = t6890 + t3791;
  t6907 = -0.01004*t3413;
  t6909 = -0.08055*t3502;
  t6916 = t6907 + t6909;
  t6967 = t506*t43*t1243;
  t6968 = t715*t6739;
  t6970 = t6967 + t6968;
  t7028 = -1.*t506*t2082;
  t7041 = t715*t6802;
  t7051 = t7028 + t7041;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1869*t2590 + t2990*t3079 + t3202*t3343 + t3536*t3656 + t3793*t3893 - 0.08045*(t3502*t3656 + t3413*t3893) - 0.06984*(t3413*t3656 - 1.*t3502*t3893) - 1.*t1150*t1243*t43 - 0.1708*(t3343*t506 + t1243*t43*t715);
  p_output1[10]=t1869*t4269 + t1150*t2481*t43 + t2990*t4350 + t3202*t4380 + t3536*t4561 - 0.1708*t4598 + t3793*t4722 - 0.08045*(t3502*t4561 + t3413*t4722) - 0.06984*t4792;
  p_output1[11]=0;
  p_output1[12]=-1.*t1150*t2082*t2481 + t1869*t1912*t2481*t43 + t2481*t2556*t2990*t43 + t3202*t4916 + t3536*t4952 + t3793*t5074 - 0.08045*(t3502*t4952 + t3413*t5074) - 0.06984*(t3413*t4952 - 1.*t3502*t5074) - 0.1708*(t4916*t506 + t2082*t2481*t715);
  p_output1[13]=-1.*t1150*t1243*t2082 + t1243*t1869*t1912*t43 + t1243*t2556*t2990*t43 + t3202*t5297 + t3536*t5333 + t3793*t5390 - 0.08045*(t3502*t5333 + t3413*t5390) - 0.06984*(t3413*t5333 - 1.*t3502*t5390) - 0.1708*(t506*t5297 + t1243*t2082*t715);
  p_output1[14]=-1.*t1869*t1912*t2082 - 1.*t2082*t2556*t2990 - 1.*t1150*t43 + t3202*t5520 + t3536*t5598 + t3793*t5673 - 0.08045*(t3502*t5598 + t3413*t5673) - 0.06984*(t3413*t5598 - 1.*t3502*t5673) - 0.1708*(t506*t5520 + t43*t715);
  p_output1[15]=t2990*t4269 + t1869*t5803 + t3536*t5850 + t3202*t5875 - 0.1708*t506*t5875 + t3793*t5875*t715 - 0.08045*(t3502*t5850 + t3413*t5875*t715) - 0.06984*(t3413*t5850 - 1.*t3502*t5875*t715);
  p_output1[16]=t1869*t3079 + t2990*t6020 + t3536*t6035 + t3202*t6065 - 0.1708*t506*t6065 + t3793*t6065*t715 - 0.08045*(t3502*t6035 + t3413*t6065*t715) - 0.06984*(t3413*t6035 - 1.*t3502*t6065*t715);
  p_output1[17]=-1.*t1869*t2556*t43 + t1912*t2990*t43 + t6206 + t6233 + t6234 + t6237 + t6248 + t6265;
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
  p_output1[39]=t3202*t4561 - 0.1708*t4561*t506 + t4269*t6291 + t4350*t6333 + t3536*t6358 + t3793*t4561*t715 - 0.08045*(t3502*t6358 + t3413*t4561*t715) - 0.06984*(t3413*t6358 - 1.*t3502*t4561*t715);
  p_output1[40]=t6020*t6291 + t6333*t6472 + t3536*t6490 + t3202*t6501 - 0.1708*t506*t6501 + t3793*t6501*t715 - 0.08045*(t3502*t6490 + t3413*t6501*t715) - 0.06984*(t3413*t6490 - 1.*t3502*t6501*t715);
  p_output1[41]=t6206 + t6233 + t6234 + t6237 + t6248 + t6265 + t1912*t43*t6291 + t2556*t43*t6333;
  p_output1[42]=-0.08045*t3413*t4598 + 0.06984*t3502*t4598 + t3793*t4598 + t2481*t43*t6661 + t4380*t6673 - 0.1708*(-1.*t2481*t43*t506 - 1.*t4380*t715);
  p_output1[43]=t1243*t43*t6661 + t6673*t6739 - 0.08045*t3413*t6763 + 0.06984*t3502*t6763 + t3793*t6763 - 0.1708*(t3828 - 1.*t6739*t715);
  p_output1[44]=-1.*t2082*t6661 + t6673*t6802 - 0.08045*t3413*t6825 + 0.06984*t3502*t6825 + t3793*t6825 - 0.1708*(t2082*t506 - 1.*t6802*t715);
  p_output1[45]=-0.06984*(-1.*t3502*t4561 - 1.*t3413*t4722) - 0.08045*t4792 + t4561*t6900 + t4722*t6916;
  p_output1[46]=t6501*t6900 + t6916*t6970 - 0.06984*(-1.*t3502*t6501 - 1.*t3413*t6970) - 0.08045*(t3413*t6501 - 1.*t3502*t6970);
  p_output1[47]=t6228*t6900 + t6916*t7051 - 0.06984*(-1.*t3502*t6228 - 1.*t3413*t7051) - 0.08045*(t3413*t6228 - 1.*t3502*t7051);
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



void Jp_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
