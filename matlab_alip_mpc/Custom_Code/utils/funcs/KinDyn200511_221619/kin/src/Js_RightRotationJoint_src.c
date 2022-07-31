/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightRotationJoint_src.h"

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
  double t95;
  double t134;
  double t439;
  double t572;
  double t545;
  double t580;
  double t958;
  double t998;
  double t606;
  double t631;
  double t734;
  double t741;
  double t805;
  double t832;
  double t892;
  double t969;
  double t1012;
  double t1066;
  double t1110;
  double t1128;
  double t1155;
  double t1767;
  double t1725;
  double t1206;
  double t1218;
  double t1220;
  double t1859;
  double t1933;
  double t1296;
  double t1303;
  double t1343;
  double t1971;
  double t1987;
  double t1989;
  double t2035;
  double t2055;
  double t2064;
  double t1801;
  double t1835;
  double t1853;
  double t67;
  double t2377;
  double t2386;
  double t2388;
  double t2216;
  double t2244;
  double t2271;
  t95 = Cos(var1[3]);
  t134 = Sin(var1[3]);
  t439 = Cos(var1[4]);
  t572 = Sin(var1[4]);
  t545 = -1.*var1[2]*t439*t134;
  t580 = -1.*var1[1]*t572;
  t958 = Cos(var1[5]);
  t998 = Sin(var1[5]);
  t606 = var1[2]*t95*t439;
  t631 = var1[0]*t572;
  t734 = -1.*var1[1]*t95*t439;
  t741 = var1[0]*t439*t134;
  t805 = t95*t439;
  t832 = t439*t134;
  t892 = -1.*t572;
  t969 = t95*t958*t572;
  t1012 = t134*t998;
  t1066 = t969 + t1012;
  t1110 = -1.*t958*t134;
  t1128 = t95*t572*t998;
  t1155 = t1110 + t1128;
  t1767 = Cos(var1[13]);
  t1725 = Sin(var1[13]);
  t1206 = t958*t134*t572;
  t1218 = -1.*t95*t998;
  t1220 = t1206 + t1218;
  t1859 = -1.*t1767;
  t1933 = 1. + t1859;
  t1296 = t95*t958;
  t1303 = t134*t572*t998;
  t1343 = t1296 + t1303;
  t1971 = 0.07996*t1933;
  t1987 = 0.135*t1725;
  t1989 = 0. + t1971 + t1987;
  t2035 = -0.135*t1933;
  t2055 = 0.07996*t1725;
  t2064 = 0. + t2035 + t2055;
  t1801 = t1767*t439*t958;
  t1835 = -1.*t439*t1725*t998;
  t1853 = t1801 + t1835;
  t67 = -1.*var1[0];
  t2377 = t1767*t1066;
  t2386 = -1.*t1725*t1155;
  t2388 = t2377 + t2386;
  t2216 = t1767*t1220;
  t2244 = -1.*t1725*t1343;
  t2271 = t2216 + t2244;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t67;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t95*var1[2];
  p_output1[25]=-1.*t134*var1[2];
  p_output1[26]=t95*var1[0] + t134*var1[1];
  p_output1[27]=-1.*t134;
  p_output1[28]=t95;
  p_output1[29]=0;
  p_output1[30]=t545 + t580;
  p_output1[31]=t606 + t631;
  p_output1[32]=t734 + t741;
  p_output1[33]=t805;
  p_output1[34]=t832;
  p_output1[35]=t892;
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
  p_output1[78]=0.135*t1066 + 0.07996*t1155 + t545 + t580;
  p_output1[79]=0.135*t1220 + 0.07996*t1343 + t606 + t631;
  p_output1[80]=t734 + t741 + 0.135*t439*t958 + 0.07996*t439*t998;
  p_output1[81]=0. + t805;
  p_output1[82]=0. + t832;
  p_output1[83]=0. + t892;
  p_output1[84]=0.08055*(t1066*t1725 + t1155*t1767) - 0.135*t439*t95 + t1853*(0. + t1220*t1989 + t1343*t2064 + var1[1]) + t2271*(0. - 1.*t1989*t439*t958 - 1.*t2064*t439*t998 - 1.*var1[2]);
  p_output1[85]=0.08055*(t1220*t1725 + t1343*t1767) - 0.135*t134*t439 + t1853*(0. - 1.*t1066*t1989 - 1.*t1155*t2064 + t67) + t2388*(0. + t1989*t439*t958 + t2064*t439*t998 + var1[2]);
  p_output1[86]=0.135*t572 + 0.08055*(t1725*t439*t958 + t1767*t439*t998) + t2271*(0. + t1066*t1989 + t1155*t2064 + var1[0]) + t2388*(0. - 1.*t1220*t1989 - 1.*t1343*t2064 - 1.*var1[1]);
  p_output1[87]=0. + t2377 + t2386;
  p_output1[88]=0. + t2216 + t2244;
  p_output1[89]=0. + t1801 + t1835;
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



void Js_RightRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
