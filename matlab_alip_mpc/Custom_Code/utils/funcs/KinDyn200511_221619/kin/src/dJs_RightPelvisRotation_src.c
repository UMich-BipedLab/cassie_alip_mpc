/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_RightPelvisRotation_src.h"

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
  double t67;
  double t321;
  double t1643;
  double t1889;
  double t1790;
  double t1966;
  double t2004;
  double t2012;
  double t3637;
  double t3671;
  double t2281;
  double t2320;
  double t2350;
  double t2476;
  double t3756;
  double t3761;
  double t3771;
  double t4160;
  double t4195;
  double t4203;
  double t2638;
  double t2674;
  double t2678;
  double t2692;
  double t2708;
  double t2786;
  double t2820;
  double t2894;
  double t3057;
  double t3212;
  double t3255;
  double t3276;
  double t3432;
  double t3578;
  double t3632;
  t67 = Cos(var1[3]);
  t321 = Sin(var1[3]);
  t1643 = Cos(var1[4]);
  t1889 = Sin(var1[4]);
  t1790 = -1.*var2[2]*t1643*t321;
  t1966 = -1.*var2[1]*t1889;
  t2004 = -1.*var1[1]*t1643;
  t2012 = var1[2]*t321*t1889;
  t3637 = Cos(var1[5]);
  t3671 = Sin(var1[5]);
  t2281 = var2[2]*t67*t1643;
  t2320 = var2[0]*t1889;
  t2350 = var1[0]*t1643;
  t2476 = -1.*var1[2]*t67*t1889;
  t3756 = t67*t3637*t1889;
  t3761 = t321*t3671;
  t3771 = t3756 + t3761;
  t4160 = -1.*t67*t3637;
  t4195 = -1.*t321*t1889*t3671;
  t4203 = t4160 + t4195;
  t2638 = -1.*var2[1]*t67*t1643;
  t2674 = var2[0]*t1643*t321;
  t2678 = var1[0]*t67*t1643;
  t2692 = var1[1]*t1643*t321;
  t2708 = t2678 + t2692;
  t2786 = var2[3]*t2708;
  t2820 = var1[1]*t67*t1889;
  t2894 = -1.*var1[0]*t321*t1889;
  t3057 = -1.*var2[3]*t1643*t321;
  t3212 = -1.*var2[4]*t67*t1889;
  t3255 = t3057 + t3212;
  t3276 = var2[3]*t67*t1643;
  t3432 = -1.*var2[4]*t321*t1889;
  t3578 = t3276 + t3432;
  t3632 = -1.*var2[4]*t1643;
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
  p_output1[24]=-1.*t67*var2[2] + t321*var1[2]*var2[3];
  p_output1[25]=-1.*t321*var2[2] - 1.*t67*var1[2]*var2[3];
  p_output1[26]=t67*var2[0] + t321*var2[1] + (-1.*t321*var1[0] + t67*var1[1])*var2[3];
  p_output1[27]=-1.*t67*var2[3];
  p_output1[28]=-1.*t321*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1790 + t1966 - 1.*t1643*t67*var1[2]*var2[3] + (t2004 + t2012)*var2[4];
  p_output1[31]=t2281 + t2320 - 1.*t1643*t321*var1[2]*var2[3] + (t2350 + t2476)*var2[4];
  p_output1[32]=t2638 + t2674 + t2786 + (t2820 + t2894)*var2[4];
  p_output1[33]=t3255;
  p_output1[34]=t3578;
  p_output1[35]=t3632;
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
  p_output1[78]=t1790 + t1966 + (0.07996*t4203 + 0.135*(-1.*t1889*t321*t3637 + t3671*t67) - 1.*t1643*t67*var1[2])*var2[3] + (t2004 + t2012 + 0.135*t1643*t3637*t67 + 0.07996*t1643*t3671*t67)*var2[4] + (0.07996*t3771 + 0.135*(t321*t3637 - 1.*t1889*t3671*t67))*var2[5];
  p_output1[79]=t2281 + t2320 + (0.135*t3771 + 0.07996*(-1.*t321*t3637 + t1889*t3671*t67) - 1.*t1643*t321*var1[2])*var2[3] + (t2350 + t2476 + 0.135*t1643*t321*t3637 + 0.07996*t1643*t321*t3671)*var2[4] + (0.135*t4203 + 0.07996*(t1889*t321*t3637 - 1.*t3671*t67))*var2[5];
  p_output1[80]=t2638 + t2674 + t2786 + (t2820 + t2894 - 0.135*t1889*t3637 - 0.07996*t1889*t3671)*var2[4] + (0.07996*t1643*t3637 - 0.135*t1643*t3671)*var2[5];
  p_output1[81]=t3255;
  p_output1[82]=t3578;
  p_output1[83]=t3632;
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



void dJs_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
