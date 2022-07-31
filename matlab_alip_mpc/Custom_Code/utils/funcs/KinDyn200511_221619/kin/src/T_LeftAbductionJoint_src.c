/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftAbductionJoint_src.h"

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
  double t2353;
  double t2568;
  double t1220;
  double t2628;
  double t2658;
  double t2920;
  double t2647;
  double t3013;
  double t2996;
  double t3006;
  double t3010;
  double t2835;
  double t2923;
  double t2949;
  double t3099;
  double t3129;
  double t3134;
  double t3082;
  double t3085;
  double t3090;
  double t3179;
  double t3180;
  double t2985;
  double t3029;
  double t3050;
  double t3158;
  double t3159;
  double t3160;
  double t3181;
  double t3182;
  double t3183;
  double t3185;
  double t3187;
  double t3190;
  double t3094;
  double t3135;
  double t3145;
  double t3166;
  double t3167;
  double t3169;
  double t3149;
  double t3150;
  double t3154;
  double t3171;
  double t3173;
  double t3174;
  t2353 = Cos(var1[4]);
  t2568 = Sin(var1[3]);
  t1220 = Cos(var1[3]);
  t2628 = Sin(var1[4]);
  t2658 = Cos(var1[5]);
  t2920 = Sin(var1[5]);
  t2647 = Cos(var1[6]);
  t3013 = Sin(var1[6]);
  t2996 = t1220*t2658*t2628;
  t3006 = t2568*t2920;
  t3010 = t2996 + t3006;
  t2835 = -1.*t2658*t2568;
  t2923 = t1220*t2628*t2920;
  t2949 = t2835 + t2923;
  t3099 = t2658*t2568*t2628;
  t3129 = -1.*t1220*t2920;
  t3134 = t3099 + t3129;
  t3082 = t1220*t2658;
  t3085 = t2568*t2628*t2920;
  t3090 = t3082 + t3085;
  t3179 = -1.*t2647;
  t3180 = 1. + t3179;
  t2985 = t2647*t2949;
  t3029 = t3010*t3013;
  t3050 = t2985 + t3029;
  t3158 = t2647*t3010;
  t3159 = -1.*t2949*t3013;
  t3160 = t3158 + t3159;
  t3181 = 0.07996*t3180;
  t3182 = -0.135*t3013;
  t3183 = 0. + t3181 + t3182;
  t3185 = 0.135*t3180;
  t3187 = 0.07996*t3013;
  t3190 = 0. + t3185 + t3187;
  t3094 = t2647*t3090;
  t3135 = t3134*t3013;
  t3145 = t3094 + t3135;
  t3166 = t2647*t3134;
  t3167 = -1.*t3090*t3013;
  t3169 = t3166 + t3167;
  t3149 = t2353*t2647*t2920;
  t3150 = t2353*t2658*t3013;
  t3154 = t3149 + t3150;
  t3171 = t2353*t2658*t2647;
  t3173 = -1.*t2353*t2920*t3013;
  t3174 = t3171 + t3173;
  p_output1[0]=t1220*t2353;
  p_output1[1]=t2353*t2568;
  p_output1[2]=-1.*t2628;
  p_output1[3]=0.;
  p_output1[4]=t3050;
  p_output1[5]=t3145;
  p_output1[6]=t3154;
  p_output1[7]=0.;
  p_output1[8]=t3160;
  p_output1[9]=t3169;
  p_output1[10]=t3174;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1220*t2353 + 0.135*t3050 + 0.07996*t3160 + t3010*t3183 + t2949*t3190 + var1[0];
  p_output1[13]=0. - 0.08055*t2353*t2568 + 0.135*t3145 + 0.07996*t3169 + t3134*t3183 + t3090*t3190 + var1[1];
  p_output1[14]=0. + 0.08055*t2628 + 0.135*t3154 + 0.07996*t3174 + t2353*t2658*t3183 + t2353*t2920*t3190 + var1[2];
  p_output1[15]=1.;
}



void T_LeftAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
