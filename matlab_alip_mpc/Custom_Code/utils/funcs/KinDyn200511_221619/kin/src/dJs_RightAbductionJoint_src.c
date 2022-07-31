/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_RightAbductionJoint_src.h"

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
  double t554;
  double t1026;
  double t2191;
  double t2287;
  double t2280;
  double t2343;
  double t2581;
  double t3102;
  double t4641;
  double t4685;
  double t3443;
  double t3622;
  double t3624;
  double t3638;
  double t4845;
  double t4886;
  double t4920;
  double t5725;
  double t5858;
  double t5874;
  double t3710;
  double t3787;
  double t3799;
  double t3933;
  double t3968;
  double t4000;
  double t4016;
  double t4050;
  double t4336;
  double t4356;
  double t4423;
  double t4503;
  double t4506;
  double t4618;
  double t4638;
  t554 = Cos(var1[3]);
  t1026 = Sin(var1[3]);
  t2191 = Cos(var1[4]);
  t2287 = Sin(var1[4]);
  t2280 = -1.*var2[2]*t2191*t1026;
  t2343 = -1.*var2[1]*t2287;
  t2581 = -1.*var1[1]*t2191;
  t3102 = var1[2]*t1026*t2287;
  t4641 = Cos(var1[5]);
  t4685 = Sin(var1[5]);
  t3443 = var2[2]*t554*t2191;
  t3622 = var2[0]*t2287;
  t3624 = var1[0]*t2191;
  t3638 = -1.*var1[2]*t554*t2287;
  t4845 = t554*t4641*t2287;
  t4886 = t1026*t4685;
  t4920 = t4845 + t4886;
  t5725 = -1.*t554*t4641;
  t5858 = -1.*t1026*t2287*t4685;
  t5874 = t5725 + t5858;
  t3710 = -1.*var2[1]*t554*t2191;
  t3787 = var2[0]*t2191*t1026;
  t3799 = var1[0]*t554*t2191;
  t3933 = var1[1]*t2191*t1026;
  t3968 = t3799 + t3933;
  t4000 = var2[3]*t3968;
  t4016 = var1[1]*t554*t2287;
  t4050 = -1.*var1[0]*t1026*t2287;
  t4336 = -1.*var2[3]*t2191*t1026;
  t4356 = -1.*var2[4]*t554*t2287;
  t4423 = t4336 + t4356;
  t4503 = var2[3]*t554*t2191;
  t4506 = -1.*var2[4]*t1026*t2287;
  t4618 = t4503 + t4506;
  t4638 = -1.*var2[4]*t2191;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t554*var2[2] + t1026*var1[2]*var2[3];
  p_output1[25]=-1.*t1026*var2[2] - 1.*t554*var1[2]*var2[3];
  p_output1[26]=t554*var2[0] + t1026*var2[1] + (-1.*t1026*var1[0] + t554*var1[1])*var2[3];
  p_output1[27]=-1.*t554*var2[3];
  p_output1[28]=-1.*t1026*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2280 + t2343 - 1.*t2191*t554*var1[2]*var2[3] + (t2581 + t3102)*var2[4];
  p_output1[31]=t3443 + t3622 - 1.*t1026*t2191*var1[2]*var2[3] + (t3624 + t3638)*var2[4];
  p_output1[32]=t3710 + t3787 + t4000 + (t4016 + t4050)*var2[4];
  p_output1[33]=t4423;
  p_output1[34]=t4618;
  p_output1[35]=t4638;
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
  p_output1[78]=t2280 + t2343 + (0.135*(-1.*t1026*t2287*t4641 + t4685*t554) + 0.07996*t5874 - 1.*t2191*t554*var1[2])*var2[3] + (t2581 + t3102 + 0.135*t2191*t4641*t554 + 0.07996*t2191*t4685*t554)*var2[4] + (0.07996*t4920 + 0.135*(t1026*t4641 - 1.*t2287*t4685*t554))*var2[5];
  p_output1[79]=t3443 + t3622 + (0.135*t4920 + 0.07996*(-1.*t1026*t4641 + t2287*t4685*t554) - 1.*t1026*t2191*var1[2])*var2[3] + (t3624 + t3638 + 0.135*t1026*t2191*t4641 + 0.07996*t1026*t2191*t4685)*var2[4] + (0.07996*(t1026*t2287*t4641 - 1.*t4685*t554) + 0.135*t5874)*var2[5];
  p_output1[80]=t3710 + t3787 + t4000 + (t4016 + t4050 - 0.135*t2287*t4641 - 0.07996*t2287*t4685)*var2[4] + (0.07996*t2191*t4641 - 0.135*t2191*t4685)*var2[5];
  p_output1[81]=t4423;
  p_output1[82]=t4618;
  p_output1[83]=t4638;
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



void dJs_RightAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
