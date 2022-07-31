/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_LeftPelvisRotation_src.h"

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
  double t505;
  double t874;
  double t2418;
  double t2452;
  double t2434;
  double t2512;
  double t2570;
  double t2628;
  double t4361;
  double t4410;
  double t3173;
  double t3297;
  double t3424;
  double t3594;
  double t4464;
  double t4471;
  double t4507;
  double t4917;
  double t4939;
  double t4952;
  double t3666;
  double t3672;
  double t3690;
  double t3711;
  double t3738;
  double t3743;
  double t3765;
  double t3813;
  double t3977;
  double t4029;
  double t4049;
  double t4062;
  double t4079;
  double t4142;
  double t4291;
  t505 = Cos(var1[3]);
  t874 = Sin(var1[3]);
  t2418 = Cos(var1[4]);
  t2452 = Sin(var1[4]);
  t2434 = -1.*var2[2]*t2418*t874;
  t2512 = -1.*var2[1]*t2452;
  t2570 = -1.*var1[1]*t2418;
  t2628 = var1[2]*t874*t2452;
  t4361 = Cos(var1[5]);
  t4410 = Sin(var1[5]);
  t3173 = var2[2]*t505*t2418;
  t3297 = var2[0]*t2452;
  t3424 = var1[0]*t2418;
  t3594 = -1.*var1[2]*t505*t2452;
  t4464 = t505*t4361*t2452;
  t4471 = t874*t4410;
  t4507 = t4464 + t4471;
  t4917 = -1.*t505*t4361;
  t4939 = -1.*t874*t2452*t4410;
  t4952 = t4917 + t4939;
  t3666 = -1.*var2[1]*t505*t2418;
  t3672 = var2[0]*t2418*t874;
  t3690 = var1[0]*t505*t2418;
  t3711 = var1[1]*t2418*t874;
  t3738 = t3690 + t3711;
  t3743 = var2[3]*t3738;
  t3765 = var1[1]*t505*t2452;
  t3813 = -1.*var1[0]*t874*t2452;
  t3977 = -1.*var2[3]*t2418*t874;
  t4029 = -1.*var2[4]*t505*t2452;
  t4049 = t3977 + t4029;
  t4062 = var2[3]*t505*t2418;
  t4079 = -1.*var2[4]*t874*t2452;
  t4142 = t4062 + t4079;
  t4291 = -1.*var2[4]*t2418;
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
  p_output1[24]=-1.*t505*var2[2] + t874*var1[2]*var2[3];
  p_output1[25]=-1.*t874*var2[2] - 1.*t505*var1[2]*var2[3];
  p_output1[26]=t505*var2[0] + t874*var2[1] + (-1.*t874*var1[0] + t505*var1[1])*var2[3];
  p_output1[27]=-1.*t505*var2[3];
  p_output1[28]=-1.*t874*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2434 + t2512 - 1.*t2418*t505*var1[2]*var2[3] + (t2570 + t2628)*var2[4];
  p_output1[31]=t3173 + t3297 - 1.*t2418*t874*var1[2]*var2[3] + (t3424 + t3594)*var2[4];
  p_output1[32]=t3666 + t3672 + t3743 + (t3765 + t3813)*var2[4];
  p_output1[33]=t4049;
  p_output1[34]=t4142;
  p_output1[35]=t4291;
  p_output1[36]=t2434 + t2512 + (0.07996*t4952 - 0.135*(t4410*t505 - 1.*t2452*t4361*t874) - 1.*t2418*t505*var1[2])*var2[3] + (t2570 + t2628 - 0.135*t2418*t4361*t505 + 0.07996*t2418*t4410*t505)*var2[4] + (0.07996*t4507 - 0.135*(-1.*t2452*t4410*t505 + t4361*t874))*var2[5];
  p_output1[37]=t3173 + t3297 + (-0.135*t4507 + 0.07996*(t2452*t4410*t505 - 1.*t4361*t874) - 1.*t2418*t874*var1[2])*var2[3] + (t3424 + t3594 - 0.135*t2418*t4361*t874 + 0.07996*t2418*t4410*t874)*var2[4] + (-0.135*t4952 + 0.07996*(-1.*t4410*t505 + t2452*t4361*t874))*var2[5];
  p_output1[38]=t3666 + t3672 + t3743 + (t3765 + t3813 + 0.135*t2452*t4361 - 0.07996*t2452*t4410)*var2[4] + (0.07996*t2418*t4361 + 0.135*t2418*t4410)*var2[5];
  p_output1[39]=t4049;
  p_output1[40]=t4142;
  p_output1[41]=t4291;
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



void dJs_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
