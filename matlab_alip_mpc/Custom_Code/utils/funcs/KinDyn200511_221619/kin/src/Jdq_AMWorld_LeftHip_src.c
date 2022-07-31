/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_LeftHip_src.h"

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
  double t224;
  double t877;
  double t209;
  double t428;
  double t911;
  double t194;
  double t1484;
  double t1674;
  double t2032;
  double t1324;
  double t1428;
  double t1432;
  double t718;
  double t1108;
  double t1206;
  double t2488;
  double t1685;
  double t1692;
  double t1700;
  double t1810;
  double t1815;
  double t2038;
  double t2050;
  double t2376;
  double t2396;
  double t2439;
  double t2441;
  double t2481;
  double t2487;
  double t2741;
  double t3070;
  double t3078;
  double t3234;
  double t3269;
  double t3335;
  double t1822;
  double t3082;
  double t3137;
  double t4702;
  double t4741;
  double t4773;
  double t4578;
  double t4587;
  double t4589;
  double t3677;
  double t3679;
  double t3695;
  double t4928;
  double t4949;
  double t5126;
  double t3922;
  double t4062;
  double t4080;
  double t4100;
  double t4103;
  double t4205;
  double t4249;
  double t4384;
  double t4440;
  double t4508;
  double t4525;
  double t5440;
  double t5457;
  double t5504;
  double t1312;
  double t1603;
  double t1614;
  double t5681;
  double t5689;
  double t5709;
  double t5715;
  double t5718;
  double t5730;
  double t3447;
  double t3527;
  double t3538;
  double t3820;
  double t3832;
  double t3874;
  double t4595;
  double t4780;
  double t4786;
  double t5713;
  double t5734;
  double t5737;
  double t5744;
  double t5756;
  double t5761;
  double t5191;
  double t5209;
  double t5215;
  double t5244;
  double t5259;
  double t5262;
  double t5796;
  double t5812;
  double t5836;
  double t5283;
  double t5349;
  double t5364;
  double t5511;
  double t5515;
  double t5533;
  double t5546;
  double t5583;
  double t5628;
  double t5939;
  double t5953;
  double t5954;
  double t5965;
  double t5966;
  double t5998;
  double t5999;
  double t6001;
  double t6024;
  double t6027;
  double t6042;
  double t6045;
  t224 = Cos(var1[5]);
  t877 = Sin(var1[3]);
  t209 = Cos(var1[3]);
  t428 = Sin(var1[4]);
  t911 = Sin(var1[5]);
  t194 = Cos(var1[6]);
  t1484 = Sin(var1[6]);
  t1674 = Cos(var1[4]);
  t2032 = Cos(var1[7]);
  t1324 = -1.*t224*t877;
  t1428 = t209*t428*t911;
  t1432 = t1324 + t1428;
  t718 = t209*t224*t428;
  t1108 = t877*t911;
  t1206 = t718 + t1108;
  t2488 = Sin(var1[7]);
  t1685 = -1.*t224*t194;
  t1692 = t911*t1484;
  t1700 = 0. + t1685 + t1692;
  t1810 = t1674*t1700;
  t1815 = 0. + t1810;
  t2038 = -1.*t194*t2032;
  t2050 = 0. + t2038;
  t2376 = t2050*t911;
  t2396 = -1.*t2032*t1484;
  t2439 = 0. + t2396;
  t2441 = t224*t2439;
  t2481 = 0. + t2376 + t2441;
  t2487 = t1674*t2481;
  t2741 = 0. + t2488;
  t3070 = -1.*t428*t2741;
  t3078 = 0. + t2487 + t3070;
  t3234 = t194*t1432;
  t3269 = t1206*t1484;
  t3335 = t3234 + t3269;
  t1822 = 0.000842*t1815;
  t3082 = -1.e-6*t3078;
  t3137 = t1822 + t3082;
  t4702 = t209*t224;
  t4741 = t877*t428*t911;
  t4773 = t4702 + t4741;
  t4578 = t224*t877*t428;
  t4587 = -1.*t209*t911;
  t4589 = t4578 + t4587;
  t3677 = -1.e-6*t1815;
  t3679 = 0.00644*t3078;
  t3695 = t3677 + t3679;
  t4928 = t194*t4773;
  t4949 = t4589*t1484;
  t5126 = t4928 + t4949;
  t3922 = 0. + t2032;
  t4062 = -1.*t3922*t428;
  t4080 = t194*t2488;
  t4100 = 0. + t4080;
  t4103 = t911*t4100;
  t4205 = t1484*t2488;
  t4249 = 0. + t4205;
  t4384 = t224*t4249;
  t4440 = 0. + t4103 + t4384;
  t4508 = t1674*t4440;
  t4525 = 0. + t4062 + t4508;
  t5440 = t1674*t194*t911;
  t5457 = t1674*t224*t1484;
  t5504 = t5440 + t5457;
  t1312 = -1.*t194*t1206;
  t1603 = t1432*t1484;
  t1614 = t1312 + t1603;
  t5681 = t194*t911;
  t5689 = t224*t1484;
  t5709 = 0. + t5681 + t5689;
  t5715 = t224*t2050;
  t5718 = -1.*t911*t2439;
  t5730 = 0. + t5715 + t5718;
  t3447 = -1.*t2032*t3335;
  t3527 = t209*t1674*t2488;
  t3538 = t3447 + t3527;
  t3820 = t209*t1674*t2032;
  t3832 = t3335*t2488;
  t3874 = t3820 + t3832;
  t4595 = -1.*t194*t4589;
  t4780 = t4773*t1484;
  t4786 = t4595 + t4780;
  t5713 = 0.000842*t5709;
  t5734 = -1.e-6*t5730;
  t5737 = t5713 + t5734;
  t5744 = -1.e-6*t5709;
  t5756 = 0.00644*t5730;
  t5761 = t5744 + t5756;
  t5191 = -1.*t2032*t5126;
  t5209 = t1674*t877*t2488;
  t5215 = t5191 + t5209;
  t5244 = t1674*t2032*t877;
  t5259 = t5126*t2488;
  t5262 = t5244 + t5259;
  t5796 = t224*t4100;
  t5812 = -1.*t911*t4249;
  t5836 = 0. + t5796 + t5812;
  t5283 = -1.*t1674*t224*t194;
  t5349 = t1674*t911*t1484;
  t5364 = t5283 + t5349;
  t5511 = -1.*t2032*t5504;
  t5515 = -1.*t428*t2488;
  t5533 = t5511 + t5515;
  t5546 = -1.*t2032*t428;
  t5583 = t5504*t2488;
  t5628 = t5546 + t5583;
  t5939 = -1.e-6*t1614*t2741;
  t5953 = 0.00644*t2741*t3538;
  t5954 = 0.00608*t3922*t3874;
  t5965 = t5939 + t5953 + t5954;
  t5966 = -1.e-6*t4786*t2741;
  t5998 = 0.00644*t2741*t5215;
  t5999 = 0.00608*t3922*t5262;
  t6001 = t5966 + t5998 + t5999;
  t6024 = -1.e-6*t5364*t2741;
  t6027 = 0.00644*t2741*t5533;
  t6042 = 0.00608*t3922*t5628;
  t6045 = t6024 + t6027 + t6042;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1614*t3137 + t3538*t3695 + 0.00608*t3874*t4525;
  p_output1[10]=t3137*t4786 + t3695*t5215 + 0.00608*t4525*t5262;
  p_output1[11]=t3137*t5364 + t3695*t5533 + 0.00608*t4525*t5628;
  p_output1[12]=t1614*t5737 + t3538*t5761 + 0.00608*t3874*t5836;
  p_output1[13]=t4786*t5737 + t5215*t5761 + 0.00608*t5262*t5836;
  p_output1[14]=t5364*t5737 + t5533*t5761 + 0.00608*t5628*t5836;
  p_output1[15]=t5965;
  p_output1[16]=t6001;
  p_output1[17]=t6045;
  p_output1[18]=t5965;
  p_output1[19]=t6001;
  p_output1[20]=t6045;
  p_output1[21]=-0.000842*t1614 + 1.e-6*t3538;
  p_output1[22]=-0.000842*t4786 + 1.e-6*t5215;
  p_output1[23]=-0.000842*t5364 + 1.e-6*t5533;
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



void Jdq_AMWorld_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
