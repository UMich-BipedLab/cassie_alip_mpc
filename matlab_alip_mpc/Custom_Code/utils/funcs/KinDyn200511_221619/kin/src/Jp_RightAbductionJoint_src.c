/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightAbductionJoint_src.h"

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
  double t513;
  double t1090;
  double t1208;
  double t1450;
  double t1706;
  double t2238;
  double t2087;
  double t2114;
  double t2255;
  double t2205;
  double t2281;
  double t2310;
  double t2486;
  double t2585;
  double t2588;
  double t467;
  double t1622;
  double t1916;
  double t2071;
  double t2382;
  double t2423;
  double t2481;
  double t3282;
  double t3380;
  double t3407;
  double t3779;
  double t3786;
  double t3794;
  double t6408;
  double t6821;
  double t6926;
  double t3983;
  double t7431;
  double t7450;
  double t7492;
  double t2701;
  double t7071;
  double t4009;
  double t4028;
  double t8061;
  double t8064;
  double t8282;
  double t8318;
  double t8338;
  double t7674;
  double t8488;
  double t8547;
  double t8551;
  double t7728;
  double t7803;
  double t7807;
  double t7833;
  double t7846;
  double t7873;
  double t7936;
  double t7976;
  double t8008;
  t513 = Sin(var1[3]);
  t1090 = Cos(var1[13]);
  t1208 = -1.*t1090;
  t1450 = 1. + t1208;
  t1706 = Sin(var1[13]);
  t2238 = Cos(var1[3]);
  t2087 = Cos(var1[5]);
  t2114 = Sin(var1[4]);
  t2255 = Sin(var1[5]);
  t2205 = -1.*t2087*t513*t2114;
  t2281 = t2238*t2255;
  t2310 = t2205 + t2281;
  t2486 = -1.*t2238*t2087;
  t2585 = -1.*t513*t2114*t2255;
  t2588 = t2486 + t2585;
  t467 = Cos(var1[4]);
  t1622 = 0.07996*t1450;
  t1916 = 0.135*t1706;
  t2071 = 0. + t1622 + t1916;
  t2382 = -0.135*t1450;
  t2423 = 0.07996*t1706;
  t2481 = 0. + t2382 + t2423;
  t3282 = t2238*t2087*t2114;
  t3380 = t513*t2255;
  t3407 = t3282 + t3380;
  t3779 = -1.*t2087*t513;
  t3786 = t2238*t2114*t2255;
  t3794 = t3779 + t3786;
  t6408 = t2087*t513;
  t6821 = -1.*t2238*t2114*t2255;
  t6926 = t6408 + t6821;
  t3983 = t1090*t3407;
  t7431 = t2087*t513*t2114;
  t7450 = -1.*t2238*t2255;
  t7492 = t7431 + t7450;
  t2701 = t1090*t2588;
  t7071 = -1.*t1706*t3407;
  t4009 = -1.*t1706*t3794;
  t4028 = t3983 + t4009;
  t8061 = 0.135*t1090;
  t8064 = t8061 + t2423;
  t8282 = 0.07996*t1090;
  t8318 = -0.135*t1706;
  t8338 = t8282 + t8318;
  t7674 = -1.*t1706*t7492;
  t8488 = t2238*t2087;
  t8547 = t513*t2114*t2255;
  t8551 = t8488 + t8547;
  t7728 = t1090*t7492;
  t7803 = -1.*t467*t2087*t1706;
  t7807 = -1.*t1090*t467*t2255;
  t7833 = t7803 + t7807;
  t7846 = 0.07996*t7833;
  t7873 = t1090*t467*t2087;
  t7936 = -1.*t467*t1706*t2255;
  t7976 = t7873 + t7936;
  t8008 = -0.135*t7976;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2071*t2310 + t2481*t2588 + 0.07996*(t1090*t2310 - 1.*t1706*t2588) - 0.135*(t1706*t2310 + t2701) + 0.08055*t467*t513;
  p_output1[10]=t2071*t3407 + t2481*t3794 - 0.135*(t1706*t3407 + t1090*t3794) + 0.07996*t4028 - 0.08055*t2238*t467;
  p_output1[11]=0;
  p_output1[12]=0.08055*t2114*t2238 + t2071*t2087*t2238*t467 + t2238*t2255*t2481*t467 - 0.135*(t1706*t2087*t2238*t467 + t1090*t2238*t2255*t467) + 0.07996*(t1090*t2087*t2238*t467 - 1.*t1706*t2238*t2255*t467);
  p_output1[13]=0.08055*t2114*t513 + t2071*t2087*t467*t513 + t2255*t2481*t467*t513 - 0.135*(t1706*t2087*t467*t513 + t1090*t2255*t467*t513) + 0.07996*(t1090*t2087*t467*t513 - 1.*t1706*t2255*t467*t513);
  p_output1[14]=-1.*t2071*t2087*t2114 - 0.135*(-1.*t1706*t2087*t2114 - 1.*t1090*t2114*t2255) + 0.07996*(-1.*t1090*t2087*t2114 + t1706*t2114*t2255) - 1.*t2114*t2255*t2481 + 0.08055*t467;
  p_output1[15]=t2481*t3407 + t2071*t6926 - 0.135*(t3983 + t1706*t6926) + 0.07996*(t1090*t6926 + t7071);
  p_output1[16]=t2071*t2588 + t2481*t7492 + 0.07996*(t2701 + t7674) - 0.135*(t1706*t2588 + t7728);
  p_output1[17]=-1.*t2071*t2255*t467 + t2087*t2481*t467 + t7846 + t8008;
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
  p_output1[39]=-0.135*t4028 + 0.07996*(-1.*t1090*t3794 + t7071) + t3407*t8064 + t3794*t8338;
  p_output1[40]=t7492*t8064 + t8338*t8551 + 0.07996*(t7674 - 1.*t1090*t8551) - 0.135*(t7728 - 1.*t1706*t8551);
  p_output1[41]=t7846 + t8008 + t2087*t467*t8064 + t2255*t467*t8338;
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



void Jp_RightAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
