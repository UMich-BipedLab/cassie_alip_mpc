/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftThigh_src.h"

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
  double t567;
  double t3075;
  double t230;
  double t1732;
  double t1798;
  double t4578;
  double t3104;
  double t303;
  double t1206;
  double t5132;
  double t5282;
  double t5711;
  double t5788;
  double t6117;
  double t6125;
  double t6139;
  double t6144;
  double t623;
  double t1006;
  double t1724;
  double t2292;
  double t2340;
  double t2342;
  double t2399;
  double t3058;
  double t3265;
  double t3585;
  double t3915;
  double t4756;
  double t4799;
  double t5035;
  double t5611;
  double t5795;
  double t5815;
  double t5858;
  double t5877;
  double t5957;
  double t5977;
  double t6002;
  double t6017;
  double t6022;
  double t6025;
  double t6038;
  double t6040;
  double t6098;
  double t6138;
  double t6157;
  double t6161;
  double t6163;
  double t6200;
  double t6201;
  double t6203;
  double t6210;
  double t6213;
  double t6230;
  double t6242;
  double t6332;
  double t6334;
  double t6335;
  double t6361;
  double t6362;
  double t6364;
  double t6390;
  double t6395;
  double t6397;
  double t6487;
  double t6502;
  double t6511;
  double t6521;
  double t6522;
  double t6529;
  double t6533;
  double t6538;
  double t6549;
  double t6558;
  double t6560;
  double t6562;
  t567 = Cos(var1[7]);
  t3075 = Sin(var1[4]);
  t230 = Cos(var1[4]);
  t1732 = Cos(var1[5]);
  t1798 = Sin(var1[6]);
  t4578 = Cos(var1[8]);
  t3104 = Sin(var1[7]);
  t303 = Cos(var1[6]);
  t1206 = Sin(var1[5]);
  t5132 = t4578*t3104;
  t5282 = 0. + t5132;
  t5711 = Sin(var1[8]);
  t5788 = 0. + t5711;
  t6117 = -1.*t4578;
  t6125 = 0. + t6117;
  t6139 = t3104*t5711;
  t6144 = 0. + t6139;
  t623 = -1.*t303*t567;
  t1006 = 0. + t623;
  t1724 = t1006*t1206;
  t2292 = -1.*t567*t1798;
  t2340 = 0. + t2292;
  t2342 = t1732*t2340;
  t2399 = 0. + t1724 + t2342;
  t3058 = t230*t2399;
  t3265 = 0. + t3104;
  t3585 = -1.*t3075*t3265;
  t3915 = 0. + t3058 + t3585;
  t4756 = t567*t4578;
  t4799 = 0. + t4756;
  t5035 = -1.*t4799*t3075;
  t5611 = t1798*t5282;
  t5795 = t303*t5788;
  t5815 = 0. + t5611 + t5795;
  t5858 = t1732*t5815;
  t5877 = t303*t5282;
  t5957 = -1.*t1798*t5788;
  t5977 = 0. + t5877 + t5957;
  t6002 = t1206*t5977;
  t6017 = 0. + t5858 + t6002;
  t6022 = t230*t6017;
  t6025 = 0. + t5035 + t6022;
  t6038 = t567*t5711;
  t6040 = 0. + t6038;
  t6098 = -1.*t3075*t6040;
  t6138 = -1.*t6125*t1798;
  t6157 = t303*t6144;
  t6161 = 0. + t6138 + t6157;
  t6163 = t1206*t6161;
  t6200 = t303*t6125;
  t6201 = t1798*t6144;
  t6203 = 0. + t6200 + t6201;
  t6210 = t1732*t6203;
  t6213 = 0. + t6163 + t6210;
  t6230 = t230*t6213;
  t6242 = 0. + t6098 + t6230;
  t6332 = t1732*t1006;
  t6334 = -1.*t1206*t2340;
  t6335 = 0. + t6332 + t6334;
  t6361 = -1.*t1206*t5815;
  t6362 = t1732*t5977;
  t6364 = 0. + t6361 + t6362;
  t6390 = t1732*t6161;
  t6395 = -1.*t1206*t6203;
  t6397 = 0. + t6390 + t6395;
  t6487 = 0.000284*t4799;
  t6502 = -0.0117*t3265;
  t6511 = 0.018*t6040;
  t6521 = t6487 + t6502 + t6511;
  t6522 = 0.0563*t4799;
  t6529 = -0.000019*t3265;
  t6533 = 0.000284*t6040;
  t6538 = t6522 + t6529 + t6533;
  t6549 = -0.000019*t4799;
  t6558 = 0.0498*t3265;
  t6560 = -0.0117*t6040;
  t6562 = t6549 + t6558 + t6560;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.0117*t3915 + 0.000284*t6025 + 0.018*t6242;
  p_output1[10]=-0.000019*t3915 + 0.0563*t6025 + 0.000284*t6242;
  p_output1[11]=0.0498*t3915 - 0.000019*t6025 - 0.0117*t6242;
  p_output1[12]=-0.0117*t6335 + 0.000284*t6364 + 0.018*t6397;
  p_output1[13]=-0.000019*t6335 + 0.0563*t6364 + 0.000284*t6397;
  p_output1[14]=0.0498*t6335 - 0.000019*t6364 - 0.0117*t6397;
  p_output1[15]=t6521;
  p_output1[16]=t6538;
  p_output1[17]=t6562;
  p_output1[18]=t6521;
  p_output1[19]=t6538;
  p_output1[20]=t6562;
  p_output1[21]=0.000284*t5788 + 0.018*t6125;
  p_output1[22]=0.0563*t5788 + 0.000284*t6125;
  p_output1[23]=-0.000019*t5788 - 0.0117*t6125;
  p_output1[24]=-0.0117;
  p_output1[25]=-0.000019;
  p_output1[26]=0.0498;
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



void Jdq_AMBody_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
