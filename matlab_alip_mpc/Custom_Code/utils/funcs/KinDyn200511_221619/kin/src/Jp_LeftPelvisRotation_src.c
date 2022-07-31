/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftPelvisRotation_src.h"

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
  double t237;
  double t1061;
  double t828;
  double t887;
  double t1071;
  double t2113;
  double t2117;
  double t2640;
  double t2953;
  double t4841;
  double t5523;
  double t6815;
  double t938;
  double t1259;
  double t1744;
  double t199;
  double t2731;
  double t3080;
  double t3528;
  double t6990;
  double t7024;
  double t7418;
  double t8623;
  double t8630;
  double t8677;
  double t8526;
  double t8576;
  double t8581;
  double t9023;
  double t9038;
  double t9039;
  double t8760;
  double t7906;
  double t9110;
  double t9111;
  double t9113;
  double t9057;
  double t8761;
  double t8791;
  double t9147;
  double t9148;
  double t9150;
  double t9153;
  double t9154;
  double t9165;
  double t9166;
  double t9168;
  double t9118;
  double t9122;
  double t9137;
  double t9138;
  double t9139;
  double t9140;
  double t9141;
  double t9142;
  double t9143;
  double t9144;
  t237 = Sin(var1[3]);
  t1061 = Cos(var1[3]);
  t828 = Cos(var1[5]);
  t887 = Sin(var1[4]);
  t1071 = Sin(var1[5]);
  t2113 = Cos(var1[6]);
  t2117 = -1.*t2113;
  t2640 = 1. + t2117;
  t2953 = Sin(var1[6]);
  t4841 = -1.*t1061*t828;
  t5523 = -1.*t237*t887*t1071;
  t6815 = t4841 + t5523;
  t938 = -1.*t828*t237*t887;
  t1259 = t1061*t1071;
  t1744 = t938 + t1259;
  t199 = Cos(var1[4]);
  t2731 = 0.07996*t2640;
  t3080 = -0.135*t2953;
  t3528 = 0. + t2731 + t3080;
  t6990 = 0.135*t2640;
  t7024 = 0.07996*t2953;
  t7418 = 0. + t6990 + t7024;
  t8623 = -1.*t828*t237;
  t8630 = t1061*t887*t1071;
  t8677 = t8623 + t8630;
  t8526 = t1061*t828*t887;
  t8576 = t237*t1071;
  t8581 = t8526 + t8576;
  t9023 = t828*t237;
  t9038 = -1.*t1061*t887*t1071;
  t9039 = t9023 + t9038;
  t8760 = t2113*t8581;
  t7906 = t2113*t6815;
  t9110 = t828*t237*t887;
  t9111 = -1.*t1061*t1071;
  t9113 = t9110 + t9111;
  t9057 = -1.*t8581*t2953;
  t8761 = -1.*t8677*t2953;
  t8791 = t8760 + t8761;
  t9147 = -0.135*t2113;
  t9148 = t9147 + t7024;
  t9150 = 0.07996*t2113;
  t9153 = 0.135*t2953;
  t9154 = t9150 + t9153;
  t9165 = t1061*t828;
  t9166 = t237*t887*t1071;
  t9168 = t9165 + t9166;
  t9118 = -1.*t9113*t2953;
  t9122 = t2113*t9113;
  t9137 = -1.*t199*t2113*t1071;
  t9138 = -1.*t199*t828*t2953;
  t9139 = t9137 + t9138;
  t9140 = 0.09786*t9139;
  t9141 = t199*t828*t2113;
  t9142 = -1.*t199*t1071*t2953;
  t9143 = t9141 + t9142;
  t9144 = 0.1351*t9143;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.05485*t199*t237 + t1744*t3528 + 0.09786*(t1744*t2113 - 1.*t2953*t6815) + t6815*t7418 + 0.1351*(t1744*t2953 + t7906);
  p_output1[10]=-0.05485*t1061*t199 + t3528*t8581 + t7418*t8677 + 0.1351*(t2953*t8581 + t2113*t8677) + 0.09786*t8791;
  p_output1[11]=0;
  p_output1[12]=t1061*t1071*t199*t7418 + t1061*t199*t3528*t828 + 0.09786*(-1.*t1061*t1071*t199*t2953 + t1061*t199*t2113*t828) + 0.1351*(t1061*t1071*t199*t2113 + t1061*t199*t2953*t828) + 0.05485*t1061*t887;
  p_output1[13]=t1071*t199*t237*t7418 + t199*t237*t3528*t828 + 0.09786*(-1.*t1071*t199*t237*t2953 + t199*t2113*t237*t828) + 0.1351*(t1071*t199*t2113*t237 + t199*t237*t2953*t828) + 0.05485*t237*t887;
  p_output1[14]=0.05485*t199 - 1.*t1071*t7418*t887 - 1.*t3528*t828*t887 + 0.09786*(t1071*t2953*t887 - 1.*t2113*t828*t887) + 0.1351*(-1.*t1071*t2113*t887 - 1.*t2953*t828*t887);
  p_output1[15]=t7418*t8581 + t3528*t9039 + 0.1351*(t8760 + t2953*t9039) + 0.09786*(t2113*t9039 + t9057);
  p_output1[16]=t3528*t6815 + t7418*t9113 + 0.09786*(t7906 + t9118) + 0.1351*(t2953*t6815 + t9122);
  p_output1[17]=-1.*t1071*t199*t3528 + t199*t7418*t828 + t9140 + t9144;
  p_output1[18]=0.1351*t8791 + 0.09786*(-1.*t2113*t8677 + t9057) + t8581*t9148 + t8677*t9154;
  p_output1[19]=t9113*t9148 + t9154*t9168 + 0.09786*(t9118 - 1.*t2113*t9168) + 0.1351*(t9122 - 1.*t2953*t9168);
  p_output1[20]=t9140 + t9144 + t199*t828*t9148 + t1071*t199*t9154;
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



void Jp_LeftPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
