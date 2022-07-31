/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftHip_src.h"

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
  double t182;
  double t255;
  double t368;
  double t537;
  double t393;
  double t579;
  double t893;
  double t934;
  double t597;
  double t613;
  double t634;
  double t650;
  double t704;
  double t745;
  double t823;
  double t1207;
  double t1219;
  double t1240;
  double t1370;
  double t1412;
  double t1417;
  double t1796;
  double t1812;
  double t1832;
  double t1849;
  double t1116;
  double t1121;
  double t1164;
  double t916;
  double t1018;
  double t1077;
  double t1841;
  double t1854;
  double t1858;
  double t1885;
  double t1990;
  double t2067;
  double t161;
  double t2159;
  double t2160;
  double t2179;
  double t2734;
  double t2766;
  double t2781;
  double t2473;
  double t2479;
  double t2483;
  t182 = Cos(var1[3]);
  t255 = Sin(var1[3]);
  t368 = Cos(var1[4]);
  t537 = Sin(var1[4]);
  t393 = -1.*var1[2]*t368*t255;
  t579 = -1.*var1[1]*t537;
  t893 = Cos(var1[5]);
  t934 = Sin(var1[5]);
  t597 = var1[2]*t182*t368;
  t613 = var1[0]*t537;
  t634 = -1.*var1[1]*t182*t368;
  t650 = var1[0]*t368*t255;
  t704 = t182*t368;
  t745 = t368*t255;
  t823 = -1.*t537;
  t1207 = t893*t255*t537;
  t1219 = -1.*t182*t934;
  t1240 = t1207 + t1219;
  t1370 = t182*t893;
  t1412 = t255*t537*t934;
  t1417 = t1370 + t1412;
  t1796 = Cos(var1[6]);
  t1812 = -1.*t1796;
  t1832 = 1. + t1812;
  t1849 = Sin(var1[6]);
  t1116 = -1.*t893*t255;
  t1121 = t182*t537*t934;
  t1164 = t1116 + t1121;
  t916 = t182*t893*t537;
  t1018 = t255*t934;
  t1077 = t916 + t1018;
  t1841 = 0.07996*t1832;
  t1854 = -0.135*t1849;
  t1858 = 0. + t1841 + t1854;
  t1885 = 0.135*t1832;
  t1990 = 0.07996*t1849;
  t2067 = 0. + t1885 + t1990;
  t161 = -1.*var1[0];
  t2159 = t368*t893*t1796;
  t2160 = -1.*t368*t934*t1849;
  t2179 = t2159 + t2160;
  t2734 = t1796*t1077;
  t2766 = -1.*t1164*t1849;
  t2781 = t2734 + t2766;
  t2473 = t1796*t1240;
  t2479 = -1.*t1417*t1849;
  t2483 = t2473 + t2479;
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
  p_output1[19]=t161;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t182*var1[2];
  p_output1[25]=-1.*t255*var1[2];
  p_output1[26]=t182*var1[0] + t255*var1[1];
  p_output1[27]=-1.*t255;
  p_output1[28]=t182;
  p_output1[29]=0;
  p_output1[30]=t393 + t579;
  p_output1[31]=t597 + t613;
  p_output1[32]=t634 + t650;
  p_output1[33]=t704;
  p_output1[34]=t745;
  p_output1[35]=t823;
  p_output1[36]=-0.135*t1077 + 0.07996*t1164 + t393 + t579;
  p_output1[37]=-0.135*t1240 + 0.07996*t1417 + t597 + t613;
  p_output1[38]=t634 + t650 - 0.135*t368*t893 + 0.07996*t368*t934;
  p_output1[39]=0. + t704;
  p_output1[40]=0. + t745;
  p_output1[41]=0. + t823;
  p_output1[42]=0.08055*(t1164*t1796 + t1077*t1849) + 0.135*t182*t368 + t2179*(0. + t1240*t1858 + t1417*t2067 + var1[1]) + t2483*(0. - 1.*t1858*t368*t893 - 1.*t2067*t368*t934 - 1.*var1[2]);
  p_output1[43]=0.08055*(t1417*t1796 + t1240*t1849) + (0. + t161 - 1.*t1077*t1858 - 1.*t1164*t2067)*t2179 + 0.135*t255*t368 + t2781*(0. + t1858*t368*t893 + t2067*t368*t934 + var1[2]);
  p_output1[44]=-0.135*t537 + 0.08055*(t1849*t368*t893 + t1796*t368*t934) + t2483*(0. + t1077*t1858 + t1164*t2067 + var1[0]) + t2781*(0. - 1.*t1240*t1858 - 1.*t1417*t2067 - 1.*var1[1]);
  p_output1[45]=0. + t2734 + t2766;
  p_output1[46]=0. + t2473 + t2479;
  p_output1[47]=0. + t2159 + t2160;
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



void Js_LeftHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
