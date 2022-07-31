/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftAbductionJoint_src.h"

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
  double t1877;
  double t1886;
  double t1868;
  double t1901;
  double t1865;
  double t1969;
  double t1881;
  double t1914;
  double t1962;
  double t268;
  double t823;
  double t1977;
  double t1986;
  double t1989;
  double t1992;
  double t1998;
  double t2012;
  double t2018;
  double t2019;
  double t2050;
  double t2063;
  double t2148;
  double t2149;
  double t2150;
  double t2151;
  double t2172;
  double t2195;
  double t2197;
  double t2153;
  double t2159;
  double t2162;
  double t2144;
  double t2145;
  double t2208;
  double t2209;
  double t2218;
  double t2164;
  double t2200;
  double t2203;
  double t2206;
  double t2222;
  double t2227;
  double t2236;
  double t2240;
  double t2245;
  double t2133;
  double t2137;
  double t2204;
  double t2260;
  t182 = Cos(var1[3]);
  t1877 = Cos(var1[6]);
  t1886 = Sin(var1[5]);
  t1868 = Cos(var1[5]);
  t1901 = Sin(var1[6]);
  t1865 = Sin(var1[3]);
  t1969 = Sin(var1[4]);
  t1881 = t1868*t1877;
  t1914 = -1.*t1886*t1901;
  t1962 = 0. + t1881 + t1914;
  t268 = Cos(var1[4]);
  t823 = 0. + t268;
  t1977 = t1877*t1886;
  t1986 = t1868*t1901;
  t1989 = 0. + t1977 + t1986;
  t1992 = t1969*t1989;
  t1998 = 0. + t1992;
  t2012 = -1.*t1877*t1886;
  t2018 = -1.*t1868*t1901;
  t2019 = 0. + t2012 + t2018;
  t2050 = t1969*t1962;
  t2063 = 0. + t2050;
  t2148 = t268*t1962;
  t2149 = 0. + t2148;
  t2150 = -1.*t1877;
  t2151 = 1. + t2150;
  t2172 = 0.07996*t2151;
  t2195 = 0.07996*t1877;
  t2197 = 0. + t2172 + t2195;
  t2153 = 0.135*t2151;
  t2159 = 0.135*t1877;
  t2162 = 0. + t2153 + t2159;
  t2144 = t268*t1989;
  t2145 = 0. + t2144;
  t2208 = t1868*t2197;
  t2209 = t2162*t1886;
  t2218 = 0. + t2208 + t2209;
  t2164 = t1868*t2162;
  t2200 = -1.*t2197*t1886;
  t2203 = 0. + t2164 + t2200;
  t2206 = 0.08055*t1969;
  t2222 = t268*t2218;
  t2227 = 0. + t2206 + t2222;
  t2236 = -0.08055*t268;
  t2240 = t1969*t2218;
  t2245 = 0. + t2236 + t2240;
  t2133 = -1.*t1969;
  t2137 = 0. + t2133;
  t2204 = -1.*t2203*t1962;
  t2260 = t2203*t2019;
  p_output1[0]=0. + t182*t823;
  p_output1[1]=0. - 1.*t1865*t1962 + t182*t1998;
  p_output1[2]=0. - 1.*t1865*t2019 + t182*t2063;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1865*t823;
  p_output1[7]=0. + t182*t1962 + t1865*t1998;
  p_output1[8]=0. + t182*t2019 + t1865*t2063;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2137;
  p_output1[13]=t2145;
  p_output1[14]=t2149;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t2149*(t2204 - 1.*t2145*t2227 - 1.*t1998*t2245) + t2145*(t2149*t2227 + t2063*t2245 + t2260);
  p_output1[19]=t2137*(-1.*t2019*t2203 - 1.*t2149*t2227 - 1.*t2063*t2245) + t2149*(0. + t2137*t2227 + t2245*t823);
  p_output1[20]=t2137*(t1962*t2203 + t2145*t2227 + t1998*t2245) + t2145*(0. - 1.*t2137*t2227 - 1.*t2245*t823);
  p_output1[21]=t2137;
  p_output1[22]=t2145;
  p_output1[23]=t2149;
  p_output1[24]=0. + t2019*(0. + t2204 - 1.*t1989*t2218) + t1962*(0. + t1962*t2218 + t2260);
  p_output1[25]=0. - 0.08055*t2019;
  p_output1[26]=0. + 0.08055*t1962;
  p_output1[27]=0.;
  p_output1[28]=t1962;
  p_output1[29]=t2019;
  p_output1[30]=0.;
  p_output1[31]=0. + t1901*t2162 - 1.*t1877*t2197;
  p_output1[32]=0. + t1877*t2162 + t1901*t2197;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=0.;
  p_output1[37]=0.;
  p_output1[38]=0.;
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



void Jb_LeftAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
