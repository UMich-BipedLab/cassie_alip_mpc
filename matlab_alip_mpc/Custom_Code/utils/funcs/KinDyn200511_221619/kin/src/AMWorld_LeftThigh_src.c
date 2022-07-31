/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftThigh_src.h"

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
  double t617;
  double t125;
  double t669;
  double t303;
  double t740;
  double t63;
  double t21;
  double t1568;
  double t2342;
  double t3292;
  double t2056;
  double t2640;
  double t2741;
  double t2990;
  double t3051;
  double t5879;
  double t5889;
  double t6002;
  double t6144;
  double t6161;
  double t6195;
  double t6242;
  double t6247;
  double t6257;
  double t6261;
  double t6279;
  double t6307;
  double t6318;
  double t6522;
  double t6529;
  double t6491;
  double t6509;
  double t6558;
  double t6560;
  double t6549;
  double t6568;
  double t6594;
  double t6600;
  double t6605;
  double t6611;
  double t443;
  double t789;
  double t790;
  double t909;
  double t1224;
  double t1356;
  double t1566;
  double t1591;
  double t1872;
  double t2859;
  double t3070;
  double t3264;
  double t3291;
  double t3452;
  double t3497;
  double t4311;
  double t4756;
  double t5358;
  double t5477;
  double t5643;
  double t5711;
  double t5795;
  double t5858;
  double t6022;
  double t6139;
  double t6163;
  double t6262;
  double t6335;
  double t6356;
  double t6366;
  double t6390;
  double t6397;
  double t6398;
  double t6428;
  double t6445;
  double t6477;
  double t6482;
  double t6485;
  double t6521;
  double t6533;
  double t6538;
  double t6598;
  double t6620;
  double t6629;
  double t6648;
  double t6673;
  double t6678;
  double t6705;
  double t6731;
  double t6737;
  double t6739;
  double t6751;
  double t6755;
  double t6788;
  double t6791;
  double t6840;
  double t6768;
  double t6772;
  double t6773;
  double t5877;
  double t6487;
  double t6761;
  double t6763;
  double t6969;
  double t6973;
  double t6974;
  double t6991;
  double t6993;
  double t6995;
  double t6996;
  double t7004;
  double t7006;
  double t6856;
  double t6860;
  double t6864;
  double t6867;
  double t7056;
  double t7063;
  double t7070;
  double t7028;
  double t7040;
  double t7041;
  double t6899;
  double t6918;
  double t6956;
  double t6960;
  double t7129;
  double t7130;
  double t7133;
  double t7153;
  double t7154;
  double t7158;
  double t7140;
  double t7142;
  double t7145;
  t617 = Cos(var1[3]);
  t125 = Cos(var1[5]);
  t669 = Sin(var1[4]);
  t303 = Sin(var1[3]);
  t740 = Sin(var1[5]);
  t63 = Cos(var1[6]);
  t21 = Cos(var1[7]);
  t1568 = Sin(var1[6]);
  t2342 = Sin(var1[7]);
  t3292 = 0. + t2342;
  t2056 = Cos(var1[4]);
  t2640 = -1.*t63*t21;
  t2741 = 0. + t2640;
  t2990 = -1.*t21*t1568;
  t3051 = 0. + t2990;
  t5879 = Cos(var1[8]);
  t5889 = t21*t5879;
  t6002 = 0. + t5889;
  t6144 = Sin(var1[8]);
  t6161 = 0. + t6144;
  t6195 = t5879*t2342;
  t6242 = 0. + t6195;
  t6247 = t1568*t6242;
  t6257 = t63*t6161;
  t6261 = 0. + t6247 + t6257;
  t6279 = t63*t6242;
  t6307 = -1.*t1568*t6161;
  t6318 = 0. + t6279 + t6307;
  t6522 = t21*t6144;
  t6529 = 0. + t6522;
  t6491 = -1.*t5879;
  t6509 = 0. + t6491;
  t6558 = t2342*t6144;
  t6560 = 0. + t6558;
  t6549 = -1.*t6509*t1568;
  t6568 = t63*t6560;
  t6594 = 0. + t6549 + t6568;
  t6600 = t63*t6509;
  t6605 = t1568*t6560;
  t6611 = 0. + t6600 + t6605;
  t443 = -1.*t125*t303;
  t789 = t617*t669*t740;
  t790 = t443 + t789;
  t909 = t63*t790;
  t1224 = t617*t125*t669;
  t1356 = t303*t740;
  t1566 = t1224 + t1356;
  t1591 = t1566*t1568;
  t1872 = t909 + t1591;
  t2859 = t125*t2741;
  t3070 = -1.*t740*t3051;
  t3264 = 0. + t2859 + t3070;
  t3291 = var2[4]*t3264;
  t3452 = var2[5]*t3292;
  t3497 = var2[6]*t3292;
  t4311 = t2741*t740;
  t4756 = t125*t3051;
  t5358 = 0. + t4311 + t4756;
  t5477 = t2056*t5358;
  t5643 = -1.*t669*t3292;
  t5711 = 0. + t5477 + t5643;
  t5795 = var2[3]*t5711;
  t5858 = 0. + var2[8] + t3291 + t3452 + t3497 + t5795;
  t6022 = var2[5]*t6002;
  t6139 = var2[6]*t6002;
  t6163 = var2[7]*t6161;
  t6262 = -1.*t740*t6261;
  t6335 = t125*t6318;
  t6356 = 0. + t6262 + t6335;
  t6366 = var2[4]*t6356;
  t6390 = -1.*t6002*t669;
  t6397 = t125*t6261;
  t6398 = t740*t6318;
  t6428 = 0. + t6397 + t6398;
  t6445 = t2056*t6428;
  t6477 = 0. + t6390 + t6445;
  t6482 = var2[3]*t6477;
  t6485 = 0. + t6022 + t6139 + t6163 + t6366 + t6482;
  t6521 = var2[7]*t6509;
  t6533 = var2[5]*t6529;
  t6538 = var2[6]*t6529;
  t6598 = t125*t6594;
  t6620 = -1.*t740*t6611;
  t6629 = 0. + t6598 + t6620;
  t6648 = var2[4]*t6629;
  t6673 = -1.*t669*t6529;
  t6678 = t740*t6594;
  t6705 = t125*t6611;
  t6731 = 0. + t6678 + t6705;
  t6737 = t2056*t6731;
  t6739 = 0. + t6673 + t6737;
  t6751 = var2[3]*t6739;
  t6755 = 0. + t6521 + t6533 + t6538 + t6648 + t6751;
  t6788 = t63*t1566;
  t6791 = -1.*t790*t1568;
  t6840 = t6788 + t6791;
  t6768 = t617*t2056*t21;
  t6772 = t1872*t2342;
  t6773 = t6768 + t6772;
  t5877 = 0.0498*t5858;
  t6487 = -0.000019*t6485;
  t6761 = -0.0117*t6755;
  t6763 = t5877 + t6487 + t6761;
  t6969 = t617*t125;
  t6973 = t303*t669*t740;
  t6974 = t6969 + t6973;
  t6991 = t63*t6974;
  t6993 = t125*t303*t669;
  t6995 = -1.*t617*t740;
  t6996 = t6993 + t6995;
  t7004 = t6996*t1568;
  t7006 = t6991 + t7004;
  t6856 = -0.000019*t5858;
  t6860 = 0.0563*t6485;
  t6864 = 0.000284*t6755;
  t6867 = t6856 + t6860 + t6864;
  t7056 = t63*t6996;
  t7063 = -1.*t6974*t1568;
  t7070 = t7056 + t7063;
  t7028 = t2056*t21*t303;
  t7040 = t7006*t2342;
  t7041 = t7028 + t7040;
  t6899 = -0.0117*t5858;
  t6918 = 0.000284*t6485;
  t6956 = 0.018*t6755;
  t6960 = t6899 + t6918 + t6956;
  t7129 = t2056*t63*t740;
  t7130 = t2056*t125*t1568;
  t7133 = t7129 + t7130;
  t7153 = t2056*t125*t63;
  t7154 = -1.*t2056*t740*t1568;
  t7158 = t7153 + t7154;
  t7140 = -1.*t21*t669;
  t7142 = t7133*t2342;
  t7145 = t7140 + t7142;
  p_output1[0]=(-1.*t1872*t21 + t2056*t2342*t617)*t6763 + (t5879*t6773 + t6144*t6840)*t6867 + (t6144*t6773 - 1.*t5879*t6840)*t6960;
  p_output1[1]=t6763*(t2056*t2342*t303 - 1.*t21*t7006) + t6960*(t6144*t7041 - 1.*t5879*t7070) + t6867*(t5879*t7041 + t6144*t7070);
  p_output1[2]=t6763*(-1.*t2342*t669 - 1.*t21*t7133) + t6960*(t6144*t7145 - 1.*t5879*t7158) + t6867*(t5879*t7145 + t6144*t7158);
}



void AMWorld_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
