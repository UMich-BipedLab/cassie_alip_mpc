/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightPelvisRotation_src.h"

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
  double t315;
  double t1195;
  double t1202;
  double t1345;
  double t1419;
  double t1864;
  double t1814;
  double t1818;
  double t2017;
  double t1841;
  double t2049;
  double t2317;
  double t2633;
  double t2734;
  double t2753;
  double t253;
  double t1418;
  double t1580;
  double t1738;
  double t2379;
  double t2434;
  double t2555;
  double t3089;
  double t3155;
  double t3193;
  double t3208;
  double t3214;
  double t3219;
  double t4402;
  double t4411;
  double t4412;
  double t3427;
  double t4594;
  double t4645;
  double t4681;
  double t2806;
  double t4434;
  double t3442;
  double t3499;
  double t5343;
  double t5345;
  double t5366;
  double t5367;
  double t5372;
  double t4791;
  double t5419;
  double t5425;
  double t5434;
  double t5030;
  double t5210;
  double t5221;
  double t5252;
  double t5288;
  double t5296;
  double t5306;
  double t5325;
  double t5333;
  t315 = Sin(var1[3]);
  t1195 = Cos(var1[13]);
  t1202 = -1.*t1195;
  t1345 = 1. + t1202;
  t1419 = Sin(var1[13]);
  t1864 = Cos(var1[3]);
  t1814 = Cos(var1[5]);
  t1818 = Sin(var1[4]);
  t2017 = Sin(var1[5]);
  t1841 = -1.*t1814*t315*t1818;
  t2049 = t1864*t2017;
  t2317 = t1841 + t2049;
  t2633 = -1.*t1864*t1814;
  t2734 = -1.*t315*t1818*t2017;
  t2753 = t2633 + t2734;
  t253 = Cos(var1[4]);
  t1418 = 0.07996*t1345;
  t1580 = 0.135*t1419;
  t1738 = 0. + t1418 + t1580;
  t2379 = -0.135*t1345;
  t2434 = 0.07996*t1419;
  t2555 = 0. + t2379 + t2434;
  t3089 = t1864*t1814*t1818;
  t3155 = t315*t2017;
  t3193 = t3089 + t3155;
  t3208 = -1.*t1814*t315;
  t3214 = t1864*t1818*t2017;
  t3219 = t3208 + t3214;
  t4402 = t1814*t315;
  t4411 = -1.*t1864*t1818*t2017;
  t4412 = t4402 + t4411;
  t3427 = t1195*t3193;
  t4594 = t1814*t315*t1818;
  t4645 = -1.*t1864*t2017;
  t4681 = t4594 + t4645;
  t2806 = t1195*t2753;
  t4434 = -1.*t1419*t3193;
  t3442 = -1.*t1419*t3219;
  t3499 = t3427 + t3442;
  t5343 = 0.135*t1195;
  t5345 = t5343 + t2434;
  t5366 = 0.07996*t1195;
  t5367 = -0.135*t1419;
  t5372 = t5366 + t5367;
  t4791 = -1.*t1419*t4681;
  t5419 = t1864*t1814;
  t5425 = t315*t1818*t2017;
  t5434 = t5419 + t5425;
  t5030 = t1195*t4681;
  t5210 = -1.*t253*t1814*t1419;
  t5221 = -1.*t1195*t253*t2017;
  t5252 = t5210 + t5221;
  t5288 = 0.09786*t5252;
  t5296 = t1195*t253*t1814;
  t5306 = -1.*t253*t1419*t2017;
  t5325 = t5296 + t5306;
  t5333 = -0.1351*t5325;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1738*t2317 + t2555*t2753 + 0.09786*(t1195*t2317 - 1.*t1419*t2753) - 0.1351*(t1419*t2317 + t2806) + 0.05485*t253*t315;
  p_output1[10]=-0.05485*t1864*t253 + t1738*t3193 + t2555*t3219 - 0.1351*(t1419*t3193 + t1195*t3219) + 0.09786*t3499;
  p_output1[11]=0;
  p_output1[12]=0.05485*t1818*t1864 + t1738*t1814*t1864*t253 - 0.1351*(t1419*t1814*t1864*t253 + t1195*t1864*t2017*t253) + 0.09786*(t1195*t1814*t1864*t253 - 1.*t1419*t1864*t2017*t253) + t1864*t2017*t253*t2555;
  p_output1[13]=0.05485*t1818*t315 + t1738*t1814*t253*t315 + t2017*t253*t2555*t315 - 0.1351*(t1419*t1814*t253*t315 + t1195*t2017*t253*t315) + 0.09786*(t1195*t1814*t253*t315 - 1.*t1419*t2017*t253*t315);
  p_output1[14]=-1.*t1738*t1814*t1818 - 0.1351*(-1.*t1419*t1814*t1818 - 1.*t1195*t1818*t2017) + 0.09786*(-1.*t1195*t1814*t1818 + t1419*t1818*t2017) + 0.05485*t253 - 1.*t1818*t2017*t2555;
  p_output1[15]=t2555*t3193 + t1738*t4412 - 0.1351*(t3427 + t1419*t4412) + 0.09786*(t1195*t4412 + t4434);
  p_output1[16]=t1738*t2753 + t2555*t4681 + 0.09786*(t2806 + t4791) - 0.1351*(t1419*t2753 + t5030);
  p_output1[17]=-1.*t1738*t2017*t253 + t1814*t253*t2555 + t5288 + t5333;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[39]=-0.1351*t3499 + 0.09786*(-1.*t1195*t3219 + t4434) + t3193*t5345 + t3219*t5372;
  p_output1[40]=t4681*t5345 + t5372*t5434 + 0.09786*(t4791 - 1.*t1195*t5434) - 0.1351*(t5030 - 1.*t1419*t5434);
  p_output1[41]=t5288 + t5333 + t1814*t253*t5345 + t2017*t253*t5372;
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



void Jp_RightPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
