/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftToe_src.h"

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
  double t307;
  double t348;
  double t459;
  double t1705;
  double t3065;
  double t2646;
  double t2728;
  double t3088;
  double t3465;
  double t2956;
  double t3103;
  double t3129;
  double t2641;
  double t3497;
  double t3626;
  double t3697;
  double t4132;
  double t3200;
  double t3886;
  double t4080;
  double t2574;
  double t4174;
  double t4223;
  double t4245;
  double t32;
  double t811;
  double t961;
  double t2529;
  double t4773;
  double t4793;
  double t4837;
  double t4124;
  double t4361;
  double t4543;
  double t4920;
  double t78;
  double t1741;
  double t4693;
  double t5191;
  double t5735;
  double t940;
  double t6086;
  double t6098;
  double t6137;
  double t6495;
  double t6516;
  double t7387;
  double t7388;
  double t7397;
  double t7331;
  double t7399;
  double t7401;
  double t7485;
  double t7496;
  double t7896;
  double t7938;
  double t8189;
  double t7484;
  double t7506;
  double t7615;
  double t7888;
  double t8233;
  double t8235;
  double t8597;
  double t8615;
  double t8618;
  double t8718;
  double t8757;
  double t5788;
  double t5873;
  double t5996;
  double t6192;
  double t6657;
  double t6668;
  double t6916;
  double t6968;
  double t6988;
  double t7040;
  double t7060;
  double t7114;
  double t7158;
  double t7245;
  double t8465;
  double t8472;
  double t8566;
  double t8637;
  double t8758;
  double t8792;
  double t8796;
  double t8842;
  double t8874;
  double t8876;
  double t8881;
  double t8908;
  double t8910;
  double t8929;
  double t508;
  double t563;
  double t820;
  double t1001;
  double t1133;
  double t1284;
  double t1499;
  double t1561;
  double t1904;
  double t2093;
  double t2227;
  double t9119;
  double t9131;
  double t9133;
  double t9199;
  double t9200;
  double t9201;
  double t9100;
  double t9101;
  double t9105;
  double t9212;
  double t9213;
  double t9214;
  double t9216;
  double t9217;
  double t9218;
  double t9219;
  double t9220;
  double t9224;
  double t9229;
  t307 = Cos(var1[7]);
  t348 = -1.*t307;
  t459 = 0. + t348;
  t1705 = Sin(var1[4]);
  t3065 = Cos(var1[11]);
  t2646 = Cos(var1[12]);
  t2728 = Sin(var1[11]);
  t3088 = Sin(var1[12]);
  t3465 = Cos(var1[10]);
  t2956 = t2646*t2728;
  t3103 = t3065*t3088;
  t3129 = 0. + t2956 + t3103;
  t2641 = Sin(var1[10]);
  t3497 = t3065*t2646;
  t3626 = -1.*t2728*t3088;
  t3697 = 0. + t3497 + t3626;
  t4132 = Sin(var1[9]);
  t3200 = -1.*t2641*t3129;
  t3886 = t3465*t3697;
  t4080 = 0. + t3200 + t3886;
  t2574 = Cos(var1[9]);
  t4174 = t3465*t3129;
  t4223 = t2641*t3697;
  t4245 = 0. + t4174 + t4223;
  t32 = Cos(var1[4]);
  t811 = Sin(var1[5]);
  t961 = Sin(var1[6]);
  t2529 = Cos(var1[8]);
  t4773 = t4132*t4080;
  t4793 = t2574*t4245;
  t4837 = 0. + t4773 + t4793;
  t4124 = t2574*t4080;
  t4361 = -1.*t4132*t4245;
  t4543 = 0. + t4124 + t4361;
  t4920 = Sin(var1[8]);
  t78 = Cos(var1[6]);
  t1741 = Sin(var1[7]);
  t4693 = t2529*t4543;
  t5191 = -1.*t4837*t4920;
  t5735 = 0. + t4693 + t5191;
  t940 = Cos(var1[5]);
  t6086 = t2529*t4837;
  t6098 = t4543*t4920;
  t6137 = 0. + t6086 + t6098;
  t6495 = t1741*t5735;
  t6516 = 0. + t6495;
  t7387 = -1.*t3065*t2646;
  t7388 = t2728*t3088;
  t7397 = 0. + t7387 + t7388;
  t7331 = t2641*t3129;
  t7399 = t3465*t7397;
  t7401 = 0. + t7331 + t7399;
  t7485 = -1.*t2641*t7397;
  t7496 = 0. + t4174 + t7485;
  t7896 = t2574*t7401;
  t7938 = t4132*t7496;
  t8189 = 0. + t7896 + t7938;
  t7484 = -1.*t4132*t7401;
  t7506 = t2574*t7496;
  t7615 = 0. + t7484 + t7506;
  t7888 = t2529*t7615;
  t8233 = -1.*t8189*t4920;
  t8235 = 0. + t7888 + t8233;
  t8597 = t2529*t8189;
  t8615 = t7615*t4920;
  t8618 = 0. + t8597 + t8615;
  t8718 = t1741*t8235;
  t8757 = 0. + t8718;
  t5788 = t307*t5735;
  t5873 = 0. + t5788;
  t5996 = -1.*t1705*t5873;
  t6192 = -1.*t961*t6137;
  t6657 = t78*t6516;
  t6668 = 0. + t6192 + t6657;
  t6916 = t811*t6668;
  t6968 = t78*t6137;
  t6988 = t961*t6516;
  t7040 = 0. + t6968 + t6988;
  t7060 = t940*t7040;
  t7114 = 0. + t6916 + t7060;
  t7158 = t32*t7114;
  t7245 = 0. + t5996 + t7158;
  t8465 = t307*t8235;
  t8472 = 0. + t8465;
  t8566 = -1.*t1705*t8472;
  t8637 = -1.*t961*t8618;
  t8758 = t78*t8757;
  t8792 = 0. + t8637 + t8758;
  t8796 = t811*t8792;
  t8842 = t78*t8618;
  t8874 = t961*t8757;
  t8876 = 0. + t8842 + t8874;
  t8881 = t940*t8876;
  t8908 = 0. + t8796 + t8881;
  t8910 = t32*t8908;
  t8929 = 0. + t8566 + t8910;
  t508 = t78*t459;
  t563 = 0. + t508;
  t820 = t563*t811;
  t1001 = t459*t961;
  t1133 = 0. + t1001;
  t1284 = t940*t1133;
  t1499 = 0. + t820 + t1284;
  t1561 = t32*t1499;
  t1904 = 0. + t1741;
  t2093 = -1.*t1705*t1904;
  t2227 = 0. + t1561 + t2093;
  t9119 = t940*t6668;
  t9131 = -1.*t811*t7040;
  t9133 = 0. + t9119 + t9131;
  t9199 = t940*t8792;
  t9200 = -1.*t811*t8876;
  t9201 = 0. + t9199 + t9200;
  t9100 = t940*t563;
  t9101 = -1.*t811*t1133;
  t9105 = 0. + t9100 + t9101;
  t9212 = -1.e-6*t1904;
  t9213 = -0.000099*t5873;
  t9214 = 0.000287*t8472;
  t9216 = t9212 + t9213 + t9214;
  t9217 = 0.000171*t5873;
  t9218 = -0.000099*t8472;
  t9219 = t9217 + t9218;
  t9220 = 0.000449*t1904;
  t9224 = -1.e-6*t8472;
  t9229 = t9220 + t9224;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.e-6*t2227 - 0.000099*t7245 + 0.000287*t8929;
  p_output1[10]=0.000171*t7245 - 0.000099*t8929;
  p_output1[11]=0.000449*t2227 - 1.e-6*t8929;
  p_output1[12]=-1.e-6*t9105 - 0.000099*t9133 + 0.000287*t9201;
  p_output1[13]=0.000171*t9133 - 0.000099*t9201;
  p_output1[14]=0.000449*t9105 - 1.e-6*t9201;
  p_output1[15]=t9216;
  p_output1[16]=t9219;
  p_output1[17]=t9229;
  p_output1[18]=t9216;
  p_output1[19]=t9219;
  p_output1[20]=t9229;
  p_output1[21]=-0.000099*t6137 + 0.000287*t8618;
  p_output1[22]=0.000171*t6137 - 0.000099*t8618;
  p_output1[23]=-1.e-6*t8618;
  p_output1[24]=-1.e-6;
  p_output1[25]=0;
  p_output1[26]=0.000449;
  p_output1[27]=-1.e-6;
  p_output1[28]=0;
  p_output1[29]=0.000449;
  p_output1[30]=-1.e-6;
  p_output1[31]=0;
  p_output1[32]=0.000449;
  p_output1[33]=-1.e-6;
  p_output1[34]=0;
  p_output1[35]=0.000449;
  p_output1[36]=-1.e-6;
  p_output1[37]=0;
  p_output1[38]=0.000449;
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



void Jdq_AMBody_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
