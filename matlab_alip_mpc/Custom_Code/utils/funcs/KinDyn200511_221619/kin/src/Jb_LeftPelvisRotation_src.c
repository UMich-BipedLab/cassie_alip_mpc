/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftPelvisRotation_src.h"

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
  double t3;
  double t1185;
  double t1775;
  double t1159;
  double t1982;
  double t1020;
  double t2551;
  double t1563;
  double t2095;
  double t2176;
  double t5;
  double t110;
  double t2689;
  double t2823;
  double t2826;
  double t2849;
  double t3123;
  double t3383;
  double t3499;
  double t3503;
  double t3568;
  double t3681;
  double t5686;
  double t5878;
  double t5920;
  double t5935;
  double t6016;
  double t6096;
  double t6253;
  double t6254;
  double t6392;
  double t6457;
  double t6513;
  double t6529;
  double t5456;
  double t5495;
  double t6762;
  double t6776;
  double t6817;
  double t6260;
  double t6659;
  double t6661;
  double t6680;
  double t6848;
  double t7207;
  double t7441;
  double t7443;
  double t7453;
  double t5407;
  double t5413;
  double t7544;
  double t6671;
  t3 = Cos(var1[3]);
  t1185 = Cos(var1[6]);
  t1775 = Sin(var1[5]);
  t1159 = Cos(var1[5]);
  t1982 = Sin(var1[6]);
  t1020 = Sin(var1[3]);
  t2551 = Sin(var1[4]);
  t1563 = t1159*t1185;
  t2095 = -1.*t1775*t1982;
  t2176 = 0. + t1563 + t2095;
  t5 = Cos(var1[4]);
  t110 = 0. + t5;
  t2689 = t1185*t1775;
  t2823 = t1159*t1982;
  t2826 = 0. + t2689 + t2823;
  t2849 = t2551*t2826;
  t3123 = 0. + t2849;
  t3383 = -1.*t1185*t1775;
  t3499 = -1.*t1159*t1982;
  t3503 = 0. + t3383 + t3499;
  t3568 = t2551*t2176;
  t3681 = 0. + t3568;
  t5686 = t5*t2176;
  t5878 = 0. + t5686;
  t5920 = -1.*t1185;
  t5935 = 1. + t5920;
  t6016 = 0.135*t5935;
  t6096 = 0.1351*t1185;
  t6253 = -0.0179*t1982;
  t6254 = 0. + t6016 + t6096 + t6253;
  t6392 = 0.07996*t5935;
  t6457 = 0.09786*t1185;
  t6513 = 0.00009999999999998899*t1982;
  t6529 = 0. + t6392 + t6457 + t6513;
  t5456 = t5*t2826;
  t5495 = 0. + t5456;
  t6762 = t1775*t6254;
  t6776 = t1159*t6529;
  t6817 = 0. + t6762 + t6776;
  t6260 = t1159*t6254;
  t6659 = -1.*t1775*t6529;
  t6661 = 0. + t6260 + t6659;
  t6680 = 0.05485*t2551;
  t6848 = t5*t6817;
  t7207 = 0. + t6680 + t6848;
  t7441 = -0.05485*t5;
  t7443 = t2551*t6817;
  t7453 = 0. + t7441 + t7443;
  t5407 = -1.*t2551;
  t5413 = 0. + t5407;
  t7544 = t6661*t3503;
  t6671 = -1.*t6661*t2176;
  p_output1[0]=0. + t110*t3;
  p_output1[1]=0. - 1.*t1020*t2176 + t3*t3123;
  p_output1[2]=0. - 1.*t1020*t3503 + t3*t3681;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1020*t110;
  p_output1[7]=0. + t2176*t3 + t1020*t3123;
  p_output1[8]=0. + t3*t3503 + t1020*t3681;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5413;
  p_output1[13]=t5495;
  p_output1[14]=t5878;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t5878*(t6671 - 1.*t5495*t7207 - 1.*t3123*t7453) + t5495*(t5878*t7207 + t3681*t7453 + t7544);
  p_output1[19]=t5878*(0. + t5413*t7207 + t110*t7453) + t5413*(-1.*t3503*t6661 - 1.*t5878*t7207 - 1.*t3681*t7453);
  p_output1[20]=t5495*(0. - 1.*t5413*t7207 - 1.*t110*t7453) + t5413*(t2176*t6661 + t5495*t7207 + t3123*t7453);
  p_output1[21]=t5413;
  p_output1[22]=t5495;
  p_output1[23]=t5878;
  p_output1[24]=0. + t3503*(0. + t6671 - 1.*t2826*t6817) + t2176*(0. + t2176*t6817 + t7544);
  p_output1[25]=0. - 0.05485*t3503;
  p_output1[26]=0. + 0.05485*t2176;
  p_output1[27]=0.;
  p_output1[28]=t2176;
  p_output1[29]=t3503;
  p_output1[30]=0.;
  p_output1[31]=0. + t1982*t6254 - 1.*t1185*t6529;
  p_output1[32]=0. + t1185*t6254 + t1982*t6529;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=0.;
  p_output1[37]=-0.0179;
  p_output1[38]=0.00009999999999998899;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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



void Jb_LeftPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
