/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftHip_src.h"

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
  double t459;
  double t108;
  double t136;
  double t503;
  double t98;
  double t1111;
  double t812;
  double t815;
  double t1168;
  double t1184;
  double t1375;
  double t1384;
  double t1758;
  double t2127;
  double t2202;
  double t2206;
  double t2251;
  double t1702;
  double t320;
  double t598;
  double t715;
  double t854;
  double t865;
  double t921;
  double t945;
  double t952;
  double t1274;
  double t1485;
  double t1507;
  double t1835;
  double t1867;
  double t1889;
  double t1942;
  double t2009;
  double t2013;
  double t2056;
  double t2203;
  double t2286;
  double t2308;
  double t2343;
  double t2348;
  double t2384;
  double t2401;
  double t2459;
  double t2476;
  double t2491;
  double t3559;
  double t3620;
  double t3625;
  double t3634;
  double t3917;
  double t3938;
  double t3961;
  double t3624;
  double t3981;
  double t3999;
  double t4057;
  double t4127;
  double t4152;
  double t4178;
  double t4194;
  double t4223;
  double t4349;
  double t4405;
  double t4409;
  double t4620;
  double t4642;
  double t4649;
  double t3377;
  double t3477;
  double t3549;
  double t3080;
  double t3196;
  double t3264;
  double t4078;
  double t4319;
  double t4331;
  double t4872;
  double t4883;
  double t4896;
  double t4567;
  double t4651;
  double t4673;
  double t3045;
  double t3057;
  double t4340;
  double t5098;
  double t5348;
  double t5399;
  double t5643;
  double t5879;
  double t6000;
  double t6094;
  t459 = Cos(var1[5]);
  t108 = Cos(var1[6]);
  t136 = Sin(var1[5]);
  t503 = Sin(var1[6]);
  t98 = Sin(var1[3]);
  t1111 = Sin(var1[7]);
  t812 = Cos(var1[3]);
  t815 = Sin(var1[4]);
  t1168 = t108*t1111;
  t1184 = 0. + t1168;
  t1375 = t503*t1111;
  t1384 = 0. + t1375;
  t1758 = Cos(var1[7]);
  t2127 = -1.*t108*t1758;
  t2202 = 0. + t2127;
  t2206 = -1.*t1758*t503;
  t2251 = 0. + t2206;
  t1702 = Cos(var1[4]);
  t320 = t108*t136;
  t598 = t459*t503;
  t715 = 0. + t320 + t598;
  t854 = -1.*t459*t108;
  t865 = t136*t503;
  t921 = 0. + t854 + t865;
  t945 = t815*t921;
  t952 = 0. + t945;
  t1274 = t459*t1184;
  t1485 = -1.*t136*t1384;
  t1507 = 0. + t1274 + t1485;
  t1835 = 0. + t1758;
  t1867 = t1702*t1835;
  t1889 = t136*t1184;
  t1942 = t459*t1384;
  t2009 = 0. + t1889 + t1942;
  t2013 = t815*t2009;
  t2056 = 0. + t1867 + t2013;
  t2203 = t459*t2202;
  t2286 = -1.*t136*t2251;
  t2308 = 0. + t2203 + t2286;
  t2343 = t2202*t136;
  t2348 = t459*t2251;
  t2384 = 0. + t2343 + t2348;
  t2401 = t815*t2384;
  t2459 = 0. + t1111;
  t2476 = t1702*t2459;
  t2491 = 0. + t2401 + t2476;
  t3559 = -1.*t108;
  t3620 = 1. + t3559;
  t3625 = -1.*t1758;
  t3634 = 1. + t3625;
  t3917 = 0.135*t3634;
  t3938 = 0.135*t1758;
  t3961 = 0. + t3917 + t3938;
  t3624 = 0.135*t3620;
  t3981 = t108*t3961;
  t3999 = 0.034300000000000004*t503;
  t4057 = 0. + t3624 + t3981 + t3999;
  t4127 = 0.07996*t3620;
  t4152 = 0.04566*t108;
  t4178 = -0.135*t503;
  t4194 = t3961*t503;
  t4223 = 0. + t4127 + t4152 + t4178 + t4194;
  t4349 = -0.08055*t3634;
  t4405 = -0.08055*t1758;
  t4409 = 0. + t4349 + t4405;
  t4620 = t136*t4057;
  t4642 = t459*t4223;
  t4649 = 0. + t4620 + t4642;
  t3377 = t1702*t2384;
  t3477 = -1.*t815*t2459;
  t3549 = 0. + t3377 + t3477;
  t3080 = -1.*t1835*t815;
  t3196 = t1702*t2009;
  t3264 = 0. + t3080 + t3196;
  t4078 = t459*t4057;
  t4319 = -1.*t136*t4223;
  t4331 = 0. + t4078 + t4319;
  t4872 = -1.*t4409*t815;
  t4883 = t1702*t4649;
  t4896 = 0. + t4872 + t4883;
  t4567 = t1702*t4409;
  t4651 = t815*t4649;
  t4673 = 0. + t4567 + t4651;
  t3045 = t1702*t921;
  t3057 = 0. + t3045;
  t4340 = t4331*t2308;
  t5098 = -1.*t4331*t1507;
  t5348 = t715*t4331;
  t5399 = -1.*t4331*t2308;
  t5643 = -1.*t715*t4331;
  t5879 = t4331*t1507;
  t6000 = t4409*t2459;
  t6094 = -1.*t4409*t1835;
  p_output1[0]=0. + t812*t952 - 1.*t715*t98;
  p_output1[1]=0. + t2056*t812 - 1.*t1507*t98;
  p_output1[2]=0. + t2491*t812 - 1.*t2308*t98;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t715*t812 + t952*t98;
  p_output1[7]=0. + t1507*t812 + t2056*t98;
  p_output1[8]=0. + t2308*t812 + t2491*t98;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3057;
  p_output1[13]=t3264;
  p_output1[14]=t3549;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3264*(t4340 + t2491*t4673 + t3549*t4896) + t3549*(-1.*t2056*t4673 - 1.*t3264*t4896 + t5098);
  p_output1[19]=t3057*(-1.*t2491*t4673 - 1.*t3549*t4896 + t5399) + t3549*(t3057*t4896 + t5348 + t4673*t952);
  p_output1[20]=t3057*(t2056*t4673 + t3264*t4896 + t5879) + t3264*(-1.*t3057*t4896 + t5643 - 1.*t4673*t952);
  p_output1[21]=t3057;
  p_output1[22]=t3264;
  p_output1[23]=t3549;
  p_output1[24]=0. + t1507*(t4340 + t2384*t4649 + t6000) + t2308*(-1.*t2009*t4649 + t5098 + t6094);
  p_output1[25]=(-1.*t2459*t4409 - 1.*t2384*t4649 + t5399)*t715 + t2308*(0. + t5348 + t4649*t921);
  p_output1[26]=(t1835*t4409 + t2009*t4649 + t5879)*t715 + t1507*(0. + t5643 - 1.*t4649*t921);
  p_output1[27]=t715;
  p_output1[28]=t1507;
  p_output1[29]=t2308;
  p_output1[30]=0. + t1835*(t2202*t4057 + t2251*t4223 + t6000) + t2459*(-1.*t1184*t4057 - 1.*t1384*t4223 + t6094);
  p_output1[31]=0. + t2459*(0. - 1.*t108*t4223 + t4057*t503);
  p_output1[32]=0. + t1835*(0. + t108*t4223 - 1.*t4057*t503);
  p_output1[33]=0.;
  p_output1[34]=t1835;
  p_output1[35]=t2459;
  p_output1[36]=0.135 + t1758*(0. - 1.*t1758*t3961 + t1111*t4409) + t1111*(0. - 1.*t1111*t3961 - 1.*t1758*t4409);
  p_output1[37]=0. + 0.034300000000000004*t1111;
  p_output1[38]=0. - 0.034300000000000004*t1758;
  p_output1[39]=0.;
  p_output1[40]=t1835;
  p_output1[41]=t2459;
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=-1.;
  p_output1[46]=0.;
  p_output1[47]=0.;
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



void Jb_LeftHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
