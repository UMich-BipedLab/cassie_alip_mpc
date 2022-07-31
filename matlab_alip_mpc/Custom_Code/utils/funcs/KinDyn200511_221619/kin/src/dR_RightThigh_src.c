/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightThigh_src.h"

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
  double t469;
  double t472;
  double t726;
  double t780;
  double t445;
  double t784;
  double t168;
  double t1512;
  double t2613;
  double t1617;
  double t1309;
  double t2566;
  double t2772;
  double t2790;
  double t2929;
  double t2995;
  double t3042;
  double t1436;
  double t2872;
  double t4605;
  double t4828;
  double t4925;
  double t3237;
  double t5126;
  double t5146;
  double t4536;
  double t4961;
  double t4963;
  double t5540;
  double t5592;
  double t5595;
  double t5630;
  double t5661;
  double t5667;
  double t5828;
  double t6065;
  double t6073;
  double t6086;
  double t6088;
  double t6154;
  double t6171;
  double t6180;
  double t6104;
  double t5457;
  double t5506;
  double t5511;
  double t6267;
  double t6280;
  double t6149;
  double t6187;
  double t6188;
  double t6370;
  double t6381;
  double t6384;
  double t6390;
  double t6393;
  double t6395;
  double t6398;
  double t6412;
  double t6421;
  double t6343;
  double t6345;
  double t6353;
  double t764;
  double t861;
  double t1174;
  double t1519;
  double t1637;
  double t1877;
  double t1925;
  double t2071;
  double t2122;
  double t3076;
  double t3154;
  double t3584;
  double t3906;
  double t4366;
  double t4964;
  double t5059;
  double t5087;
  double t5095;
  double t5596;
  double t5676;
  double t5680;
  double t5769;
  double t5791;
  double t5837;
  double t5841;
  double t5845;
  double t5905;
  double t5919;
  double t5928;
  double t5958;
  double t6007;
  double t6008;
  double t6009;
  double t6029;
  double t6035;
  double t6097;
  double t6108;
  double t6109;
  double t6140;
  double t6194;
  double t6216;
  double t6230;
  double t6232;
  double t5332;
  double t5512;
  double t5517;
  double t6310;
  double t6311;
  double t6318;
  double t6339;
  double t6359;
  double t6362;
  double t6809;
  double t6812;
  double t6824;
  double t6448;
  double t6454;
  double t6458;
  double t6488;
  double t6496;
  double t6499;
  double t6506;
  double t6508;
  double t6512;
  double t6515;
  double t6529;
  double t6533;
  t469 = Cos(var1[3]);
  t472 = Cos(var1[4]);
  t726 = Cos(var1[5]);
  t780 = Sin(var1[13]);
  t445 = Cos(var1[13]);
  t784 = Sin(var1[5]);
  t168 = Cos(var1[15]);
  t1512 = Sin(var1[4]);
  t2613 = Sin(var1[3]);
  t1617 = Sin(var1[14]);
  t1309 = Sin(var1[15]);
  t2566 = t469*t726*t1512;
  t2772 = t2613*t784;
  t2790 = t2566 + t2772;
  t2929 = t726*t2613;
  t2995 = -1.*t469*t1512*t784;
  t3042 = t2929 + t2995;
  t1436 = Cos(var1[14]);
  t2872 = -1.*t780*t2790;
  t4605 = -1.*t726*t2613;
  t4828 = t469*t1512*t784;
  t4925 = t4605 + t4828;
  t3237 = t445*t2790;
  t5126 = -1.*t780*t4925;
  t5146 = t3237 + t5126;
  t4536 = t780*t2790;
  t4961 = t445*t4925;
  t4963 = t4536 + t4961;
  t5540 = -1.*t726*t2613*t1512;
  t5592 = t469*t784;
  t5595 = t5540 + t5592;
  t5630 = -1.*t469*t726;
  t5661 = -1.*t2613*t1512*t784;
  t5667 = t5630 + t5661;
  t5828 = t445*t5667;
  t6065 = t726*t2613*t1512;
  t6073 = -1.*t469*t784;
  t6086 = t6065 + t6073;
  t6088 = -1.*t780*t6086;
  t6154 = t469*t726;
  t6171 = t2613*t1512*t784;
  t6180 = t6154 + t6171;
  t6104 = t445*t6086;
  t5457 = t1436*t469*t472;
  t5506 = t1617*t4963;
  t5511 = t5457 + t5506;
  t6267 = -1.*t780*t6180;
  t6280 = t6104 + t6267;
  t6149 = t780*t6086;
  t6187 = t445*t6180;
  t6188 = t6149 + t6187;
  t6370 = -1.*t472*t726*t780;
  t6381 = -1.*t445*t472*t784;
  t6384 = t6370 + t6381;
  t6390 = -1.*t168*t6384;
  t6393 = t445*t472*t726;
  t6395 = -1.*t472*t780*t784;
  t6398 = t6393 + t6395;
  t6412 = t1617*t1309*t6398;
  t6421 = t6390 + t6412;
  t6343 = t472*t726*t780;
  t6345 = t445*t472*t784;
  t6353 = t6343 + t6345;
  t764 = t445*t469*t472*t726;
  t861 = -1.*t469*t472*t780*t784;
  t1174 = t764 + t861;
  t1519 = -1.*t1436*t469*t1512;
  t1637 = t469*t472*t726*t780;
  t1877 = t445*t469*t472*t784;
  t1925 = t1637 + t1877;
  t2071 = t1617*t1925;
  t2122 = t1519 + t2071;
  t3076 = t445*t3042;
  t3154 = t2872 + t3076;
  t3584 = t780*t3042;
  t3906 = t3237 + t3584;
  t4366 = -1.*t469*t472*t1617;
  t4964 = t1436*t4963;
  t5059 = t4366 + t4964;
  t5087 = -1.*t445*t4925;
  t5095 = t2872 + t5087;
  t5596 = t445*t5595;
  t5676 = -1.*t780*t5667;
  t5680 = t5596 + t5676;
  t5769 = -1.*t1436*t472*t2613;
  t5791 = t780*t5595;
  t5837 = t5791 + t5828;
  t5841 = t1617*t5837;
  t5845 = t5769 + t5841;
  t5905 = t445*t472*t726*t2613;
  t5919 = -1.*t472*t780*t2613*t784;
  t5928 = t5905 + t5919;
  t5958 = -1.*t1436*t2613*t1512;
  t6007 = t472*t726*t780*t2613;
  t6008 = t445*t472*t2613*t784;
  t6009 = t6007 + t6008;
  t6029 = t1617*t6009;
  t6035 = t5958 + t6029;
  t6097 = t6088 + t5828;
  t6108 = t780*t5667;
  t6109 = t6104 + t6108;
  t6140 = -1.*t472*t1617*t2613;
  t6194 = t1436*t6188;
  t6216 = t6140 + t6194;
  t6230 = -1.*t445*t6180;
  t6232 = t6088 + t6230;
  t5332 = t1309*t5146;
  t5512 = t168*t5511;
  t5517 = t5332 + t5512;
  t6310 = t1436*t472*t2613;
  t6311 = t1617*t6188;
  t6318 = t6310 + t6311;
  t6339 = t1617*t1512;
  t6359 = t1436*t6353;
  t6362 = t6339 + t6359;
  t6809 = t1309*t6384;
  t6812 = t168*t1617*t6398;
  t6824 = t6809 + t6812;
  t6448 = -1.*t1436*t1512;
  t6454 = t1617*t6353;
  t6458 = t6448 + t6454;
  t6488 = -1.*t445*t726*t1512;
  t6496 = t780*t1512*t784;
  t6499 = t6488 + t6496;
  t6506 = -1.*t1436*t472;
  t6508 = -1.*t726*t780*t1512;
  t6512 = -1.*t445*t1512*t784;
  t6515 = t6508 + t6512;
  t6529 = t1617*t6515;
  t6533 = t6506 + t6529;
  p_output1[0]=(-1.*t168*t5680 + t1309*t5845)*var2[3] + (-1.*t1174*t168 + t1309*t2122)*var2[4] + (-1.*t168*t3154 + t1309*t1617*t3906)*var2[5] + (-1.*t168*t5095 + t1309*t1617*t5146)*var2[13] + t1309*t5059*var2[14] + t5517*var2[15];
  p_output1[1]=(-1.*t168*t5146 + t1309*t5511)*var2[3] + (-1.*t168*t5928 + t1309*t6035)*var2[4] + (-1.*t168*t6097 + t1309*t1617*t6109)*var2[5] + (-1.*t168*t6232 + t1309*t1617*t6280)*var2[13] + t1309*t6216*var2[14] + (t1309*t6280 + t168*t6318)*var2[15];
  p_output1[2]=(-1.*t168*t6499 + t1309*t6533)*var2[4] + t6421*var2[5] + t6421*var2[13] + t1309*t6362*var2[14] + (t1309*t6398 + t168*t6458)*var2[15];
  p_output1[3]=(t1309*t5680 + t168*t5845)*var2[3] + (t1174*t1309 + t168*t2122)*var2[4] + (t1309*t3154 + t1617*t168*t3906)*var2[5] + (t1309*t5095 + t1617*t168*t5146)*var2[13] + t168*t5059*var2[14] + (t168*t5146 - 1.*t1309*t5511)*var2[15];
  p_output1[4]=t5517*var2[3] + (t1309*t5928 + t168*t6035)*var2[4] + (t1309*t6097 + t1617*t168*t6109)*var2[5] + (t1309*t6232 + t1617*t168*t6280)*var2[13] + t168*t6216*var2[14] + (t168*t6280 - 1.*t1309*t6318)*var2[15];
  p_output1[5]=(t1309*t6499 + t168*t6533)*var2[4] + t6824*var2[5] + t6824*var2[13] + t168*t6362*var2[14] + (t168*t6398 - 1.*t1309*t6458)*var2[15];
  p_output1[6]=(-1.*t1436*t5837 + t6140)*var2[3] + (-1.*t1436*t1925 - 1.*t1512*t1617*t469)*var2[4] - 1.*t1436*t3906*var2[5] - 1.*t1436*t5146*var2[13] + t5511*var2[14];
  p_output1[7]=(t1617*t469*t472 - 1.*t1436*t4963)*var2[3] + (-1.*t1512*t1617*t2613 - 1.*t1436*t6009)*var2[4] - 1.*t1436*t6109*var2[5] - 1.*t1436*t6280*var2[13] + t6318*var2[14];
  p_output1[8]=(-1.*t1617*t472 - 1.*t1436*t6515)*var2[4] - 1.*t1436*t6398*var2[5] - 1.*t1436*t6398*var2[13] + t6458*var2[14];
}



void dR_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
