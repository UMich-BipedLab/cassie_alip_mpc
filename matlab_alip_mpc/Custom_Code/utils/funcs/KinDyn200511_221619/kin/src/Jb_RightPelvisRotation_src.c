/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightPelvisRotation_src.h"

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
  double t51;
  double t1300;
  double t1422;
  double t637;
  double t1470;
  double t286;
  double t1821;
  double t1338;
  double t1546;
  double t1570;
  double t114;
  double t128;
  double t1930;
  double t2113;
  double t2386;
  double t2432;
  double t2472;
  double t2781;
  double t2816;
  double t2826;
  double t2837;
  double t2838;
  double t3620;
  double t3650;
  double t3662;
  double t3663;
  double t3587;
  double t3609;
  double t4086;
  double t4093;
  double t4268;
  double t4284;
  double t3671;
  double t3672;
  double t3840;
  double t3906;
  double t4402;
  double t4412;
  double t4413;
  double t4044;
  double t4312;
  double t4354;
  double t4393;
  double t4439;
  double t4474;
  double t4487;
  double t4489;
  double t4490;
  double t3547;
  double t3554;
  double t4725;
  double t4389;
  t51 = Cos(var1[3]);
  t1300 = Cos(var1[5]);
  t1422 = Sin(var1[13]);
  t637 = Cos(var1[13]);
  t1470 = Sin(var1[5]);
  t286 = Sin(var1[3]);
  t1821 = Sin(var1[4]);
  t1338 = t637*t1300;
  t1546 = -1.*t1422*t1470;
  t1570 = 0. + t1338 + t1546;
  t114 = Cos(var1[4]);
  t128 = 0. + t114;
  t1930 = t1300*t1422;
  t2113 = t637*t1470;
  t2386 = 0. + t1930 + t2113;
  t2432 = t1821*t2386;
  t2472 = 0. + t2432;
  t2781 = -1.*t1300*t1422;
  t2816 = -1.*t637*t1470;
  t2826 = 0. + t2781 + t2816;
  t2837 = t1821*t1570;
  t2838 = 0. + t2837;
  t3620 = t114*t1570;
  t3650 = 0. + t3620;
  t3662 = -1.*t637;
  t3663 = 1. + t3662;
  t3587 = t114*t2386;
  t3609 = 0. + t3587;
  t4086 = 0.07996*t3663;
  t4093 = 0.09786*t637;
  t4268 = -0.00009999999999998899*t1422;
  t4284 = 0. + t4086 + t4093 + t4268;
  t3671 = -0.135*t3663;
  t3672 = -0.1351*t637;
  t3840 = -0.0179*t1422;
  t3906 = 0. + t3671 + t3672 + t3840;
  t4402 = t1300*t4284;
  t4412 = t3906*t1470;
  t4413 = 0. + t4402 + t4412;
  t4044 = t1300*t3906;
  t4312 = -1.*t4284*t1470;
  t4354 = 0. + t4044 + t4312;
  t4393 = 0.05485*t1821;
  t4439 = t114*t4413;
  t4474 = 0. + t4393 + t4439;
  t4487 = -0.05485*t114;
  t4489 = t1821*t4413;
  t4490 = 0. + t4487 + t4489;
  t3547 = -1.*t1821;
  t3554 = 0. + t3547;
  t4725 = t2826*t4354;
  t4389 = -1.*t4354*t1570;
  p_output1[0]=0. + t128*t51;
  p_output1[1]=0. - 1.*t1570*t286 + t2472*t51;
  p_output1[2]=0. - 1.*t2826*t286 + t2838*t51;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t128*t286;
  p_output1[7]=0. + t2472*t286 + t1570*t51;
  p_output1[8]=0. + t2838*t286 + t2826*t51;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3554;
  p_output1[13]=t3609;
  p_output1[14]=t3650;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t3650*(t4389 - 1.*t3609*t4474 - 1.*t2472*t4490) + t3609*(t3650*t4474 + t2838*t4490 + t4725);
  p_output1[19]=t3650*(0. + t3554*t4474 + t128*t4490) + t3554*(-1.*t2826*t4354 - 1.*t3650*t4474 - 1.*t2838*t4490);
  p_output1[20]=t3609*(0. - 1.*t3554*t4474 - 1.*t128*t4490) + t3554*(t1570*t4354 + t3609*t4474 + t2472*t4490);
  p_output1[21]=t3554;
  p_output1[22]=t3609;
  p_output1[23]=t3650;
  p_output1[24]=0. + t2826*(0. + t4389 - 1.*t2386*t4413) + t1570*(0. + t1570*t4413 + t4725);
  p_output1[25]=0. - 0.05485*t2826;
  p_output1[26]=0. + 0.05485*t1570;
  p_output1[27]=0.;
  p_output1[28]=t1570;
  p_output1[29]=t2826;
  p_output1[30]=0.;
  p_output1[31]=0. + t1422*t3906 - 1.*t4284*t637;
  p_output1[32]=0. + t1422*t4284 + t3906*t637;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0.;
  p_output1[79]=-0.0179;
  p_output1[80]=-0.00009999999999998899;
  p_output1[81]=1.;
  p_output1[82]=0.;
  p_output1[83]=0.;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_RightPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
