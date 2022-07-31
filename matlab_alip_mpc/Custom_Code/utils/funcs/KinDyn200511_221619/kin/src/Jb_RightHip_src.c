/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightHip_src.h"

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
  double t419;
  double t258;
  double t292;
  double t463;
  double t138;
  double t1758;
  double t756;
  double t957;
  double t1822;
  double t1880;
  double t1763;
  double t1773;
  double t1962;
  double t2047;
  double t2751;
  double t2766;
  double t2681;
  double t2689;
  double t353;
  double t485;
  double t602;
  double t1372;
  double t1384;
  double t1389;
  double t1403;
  double t1485;
  double t1788;
  double t1886;
  double t1940;
  double t2020;
  double t2059;
  double t2159;
  double t2194;
  double t2241;
  double t2319;
  double t2560;
  double t2706;
  double t2769;
  double t2773;
  double t2849;
  double t2878;
  double t2948;
  double t2949;
  double t3063;
  double t3110;
  double t3112;
  double t4077;
  double t4256;
  double t4287;
  double t4365;
  double t4409;
  double t4617;
  double t4656;
  double t4659;
  double t4696;
  double t4698;
  double t4320;
  double t4322;
  double t4344;
  double t4764;
  double t4788;
  double t4825;
  double t4827;
  double t4870;
  double t4611;
  double t4699;
  double t4724;
  double t4743;
  double t4980;
  double t4991;
  double t5003;
  double t5177;
  double t5255;
  double t5256;
  double t4761;
  double t4922;
  double t4958;
  double t5051;
  double t5284;
  double t5313;
  double t5355;
  double t5370;
  double t5484;
  double t4030;
  double t4057;
  double t4967;
  double t5547;
  double t5800;
  double t5668;
  double t6047;
  double t6162;
  double t6323;
  double t6498;
  t419 = Cos(var1[13]);
  t258 = Cos(var1[5]);
  t292 = Sin(var1[13]);
  t463 = Sin(var1[5]);
  t138 = Sin(var1[3]);
  t1758 = Sin(var1[14]);
  t756 = Cos(var1[3]);
  t957 = Sin(var1[4]);
  t1822 = t292*t1758;
  t1880 = 0. + t1822;
  t1763 = t419*t1758;
  t1773 = 0. + t1763;
  t1962 = Cos(var1[14]);
  t2047 = Cos(var1[4]);
  t2751 = -1.*t1962*t292;
  t2766 = 0. + t2751;
  t2681 = -1.*t419*t1962;
  t2689 = 0. + t2681;
  t353 = t258*t292;
  t485 = t419*t463;
  t602 = 0. + t353 + t485;
  t1372 = -1.*t419*t258;
  t1384 = t292*t463;
  t1389 = 0. + t1372 + t1384;
  t1403 = t957*t1389;
  t1485 = 0. + t1403;
  t1788 = t258*t1773;
  t1886 = -1.*t1880*t463;
  t1940 = 0. + t1788 + t1886;
  t2020 = 0. + t1962;
  t2059 = t2020*t2047;
  t2159 = t258*t1880;
  t2194 = t1773*t463;
  t2241 = 0. + t2159 + t2194;
  t2319 = t957*t2241;
  t2560 = 0. + t2059 + t2319;
  t2706 = t2689*t258;
  t2769 = -1.*t2766*t463;
  t2773 = 0. + t2706 + t2769;
  t2849 = 0. + t1758;
  t2878 = t2047*t2849;
  t2948 = t258*t2766;
  t2949 = t2689*t463;
  t3063 = 0. + t2948 + t2949;
  t3110 = t957*t3063;
  t3112 = 0. + t2878 + t3110;
  t4077 = -1.*t2020*t957;
  t4256 = t2047*t2241;
  t4287 = 0. + t4077 + t4256;
  t4365 = -1.*t419;
  t4409 = 1. + t4365;
  t4617 = -1.*t1962;
  t4656 = 1. + t4617;
  t4659 = -0.135*t4656;
  t4696 = -0.135*t1962;
  t4698 = 0. + t4659 + t4696;
  t4320 = -1.*t2849*t957;
  t4322 = t2047*t3063;
  t4344 = 0. + t4320 + t4322;
  t4764 = 0.07996*t4409;
  t4788 = 0.04566*t419;
  t4825 = 0.135*t292;
  t4827 = t4698*t292;
  t4870 = 0. + t4764 + t4788 + t4825 + t4827;
  t4611 = -0.135*t4409;
  t4699 = t419*t4698;
  t4724 = 0.034300000000000004*t292;
  t4743 = 0. + t4611 + t4699 + t4724;
  t4980 = -0.08055*t4656;
  t4991 = -0.08055*t1962;
  t5003 = 0. + t4980 + t4991;
  t5177 = t258*t4870;
  t5255 = t4743*t463;
  t5256 = 0. + t5177 + t5255;
  t4761 = t258*t4743;
  t4922 = -1.*t4870*t463;
  t4958 = 0. + t4761 + t4922;
  t5051 = -1.*t5003*t957;
  t5284 = t2047*t5256;
  t5313 = 0. + t5051 + t5284;
  t5355 = t5003*t2047;
  t5370 = t957*t5256;
  t5484 = 0. + t5355 + t5370;
  t4030 = t2047*t1389;
  t4057 = 0. + t4030;
  t4967 = t4958*t2773;
  t5547 = -1.*t4958*t1940;
  t5800 = t602*t4958;
  t5668 = -1.*t4958*t2773;
  t6047 = -1.*t602*t4958;
  t6162 = t4958*t1940;
  t6323 = t5003*t2849;
  t6498 = -1.*t5003*t2020;
  p_output1[0]=0. - 1.*t138*t602 + t1485*t756;
  p_output1[1]=0. - 1.*t138*t1940 + t2560*t756;
  p_output1[2]=0. - 1.*t138*t2773 + t3112*t756;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t138*t1485 + t602*t756;
  p_output1[7]=0. + t138*t2560 + t1940*t756;
  p_output1[8]=0. + t138*t3112 + t2773*t756;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4057;
  p_output1[13]=t4287;
  p_output1[14]=t4344;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4287*(t4967 + t4344*t5313 + t3112*t5484) + t4344*(-1.*t4287*t5313 - 1.*t2560*t5484 + t5547);
  p_output1[19]=t4057*(-1.*t4344*t5313 - 1.*t3112*t5484 + t5668) + t4344*(t4057*t5313 + t1485*t5484 + t5800);
  p_output1[20]=t4287*(-1.*t4057*t5313 - 1.*t1485*t5484 + t6047) + t4057*(t4287*t5313 + t2560*t5484 + t6162);
  p_output1[21]=t4057;
  p_output1[22]=t4287;
  p_output1[23]=t4344;
  p_output1[24]=0. + t1940*(t4967 + t3063*t5256 + t6323) + t2773*(-1.*t2241*t5256 + t5547 + t6498);
  p_output1[25]=t2773*(0. + t1389*t5256 + t5800) + (-1.*t2849*t5003 - 1.*t3063*t5256 + t5668)*t602;
  p_output1[26]=t1940*(0. - 1.*t1389*t5256 + t6047) + t602*(t2020*t5003 + t2241*t5256 + t6162);
  p_output1[27]=t602;
  p_output1[28]=t1940;
  p_output1[29]=t2773;
  p_output1[30]=0. + t2020*(t2689*t4743 + t2766*t4870 + t6323) + t2849*(-1.*t1773*t4743 - 1.*t1880*t4870 + t6498);
  p_output1[31]=0. + t2849*(0. + t292*t4743 - 1.*t419*t4870);
  p_output1[32]=0. + t2020*(0. - 1.*t292*t4743 + t419*t4870);
  p_output1[33]=0.;
  p_output1[34]=t2020;
  p_output1[35]=t2849;
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
  p_output1[78]=-0.135 + t1962*(0. - 1.*t1962*t4698 + t1758*t5003) + t1758*(0. - 1.*t1758*t4698 - 1.*t1962*t5003);
  p_output1[79]=0. + 0.034300000000000004*t1758;
  p_output1[80]=0. - 0.034300000000000004*t1962;
  p_output1[81]=0.;
  p_output1[82]=t2020;
  p_output1[83]=t2849;
  p_output1[84]=0.;
  p_output1[85]=0.;
  p_output1[86]=0.;
  p_output1[87]=-1.;
  p_output1[88]=0.;
  p_output1[89]=0.;
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



void Jb_RightHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
