/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightRotationJoint_src.h"

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
  double t223;
  double t289;
  double t1030;
  double t302;
  double t1078;
  double t27;
  double t1915;
  double t1191;
  double t1518;
  double t2055;
  double t2511;
  double t2653;
  double t3179;
  double t3181;
  double t3207;
  double t3610;
  double t3637;
  double t3641;
  double t3883;
  double t3991;
  double t4001;
  double t4006;
  double t4406;
  double t4472;
  double t4478;
  double t4628;
  double t2772;
  double t2775;
  double t2864;
  double t4804;
  double t4610;
  double t3217;
  double t3284;
  double t3408;
  double t3514;
  double t3522;
  double t3648;
  double t5192;
  double t4287;
  double t4338;
  double t4339;
  double t4342;
  double t4349;
  double t5354;
  double t5366;
  double t5385;
  double t4666;
  double t4712;
  double t4714;
  double t4834;
  double t4857;
  double t4915;
  double t4917;
  double t5230;
  double t5249;
  double t5254;
  double t5269;
  double t5048;
  double t5060;
  double t5061;
  double t5164;
  double t5184;
  double t5185;
  double t5199;
  double t5208;
  double t5211;
  double t5425;
  double t5434;
  double t5439;
  t223 = Cos(var1[3]);
  t289 = Cos(var1[4]);
  t1030 = Sin(var1[13]);
  t302 = Cos(var1[5]);
  t1078 = Sin(var1[5]);
  t27 = Cos(var1[13]);
  t1915 = Sin(var1[3]);
  t1191 = Sin(var1[4]);
  t1518 = t223*t302*t1191;
  t2055 = t1915*t1078;
  t2511 = t1518 + t2055;
  t2653 = t1030*t2511;
  t3179 = -1.*t302*t1915;
  t3181 = t223*t1191*t1078;
  t3207 = t3179 + t3181;
  t3610 = -1.*t223*t302;
  t3637 = -1.*t1915*t1191*t1078;
  t3641 = t3610 + t3637;
  t3883 = t302*t1915*t1191;
  t3991 = -1.*t223*t1078;
  t4001 = t3883 + t3991;
  t4006 = t1030*t4001;
  t4406 = t289*t302*t1030;
  t4472 = t27*t289*t1078;
  t4478 = t4406 + t4472;
  t4628 = Sin(var1[14]);
  t2772 = t302*t1915;
  t2775 = -1.*t223*t1191*t1078;
  t2864 = t2772 + t2775;
  t4804 = t27*t2511;
  t4610 = Cos(var1[14]);
  t3217 = t27*t3207;
  t3284 = t2653 + t3217;
  t3408 = -1.*t302*t1915*t1191;
  t3514 = t223*t1078;
  t3522 = t3408 + t3514;
  t3648 = t1030*t3641;
  t5192 = t27*t4001;
  t4287 = t223*t302;
  t4338 = t1915*t1191*t1078;
  t4339 = t4287 + t4338;
  t4342 = t27*t4339;
  t4349 = t4006 + t4342;
  t5354 = t27*t289*t302;
  t5366 = -1.*t289*t1030*t1078;
  t5385 = t5354 + t5366;
  t4666 = t223*t289*t302*t1030;
  t4712 = t27*t223*t289*t1078;
  t4714 = t4666 + t4712;
  t4834 = t1030*t2864;
  t4857 = t4804 + t4834;
  t4915 = -1.*t1030*t3207;
  t4917 = t4804 + t4915;
  t5230 = t4610*t223*t289;
  t5249 = t4628*t3284;
  t5254 = t5230 + t5249;
  t5269 = -1.*t289*t4628*t1915;
  t5048 = t1030*t3522;
  t5060 = t27*t3641;
  t5061 = t5048 + t5060;
  t5164 = t289*t302*t1030*t1915;
  t5184 = t27*t289*t1915*t1078;
  t5185 = t5164 + t5184;
  t5199 = t5192 + t3648;
  t5208 = -1.*t1030*t4339;
  t5211 = t5192 + t5208;
  t5425 = -1.*t302*t1030*t1191;
  t5434 = -1.*t27*t1191*t1078;
  t5439 = t5425 + t5434;
  p_output1[0]=(-1.*t27*t3522 + t3648)*var2[3] + (t1030*t1078*t223*t289 - 1.*t223*t27*t289*t302)*var2[4] + (t2653 - 1.*t27*t2864)*var2[5] + t3284*var2[13];
  p_output1[1]=(-1.*t2511*t27 + t1030*t3207)*var2[3] + (t1030*t1078*t1915*t289 - 1.*t1915*t27*t289*t302)*var2[4] + (-1.*t27*t3641 + t4006)*var2[5] + t4349*var2[13];
  p_output1[2]=(-1.*t1030*t1078*t1191 + t1191*t27*t302)*var2[4] + t4478*var2[5] + t4478*var2[13];
  p_output1[3]=(-1.*t1915*t289*t4610 + t4628*t5061)*var2[3] + (-1.*t1191*t223*t4610 + t4628*t4714)*var2[4] + t4628*t4857*var2[5] + t4628*t4917*var2[13] + (t3284*t4610 - 1.*t223*t289*t4628)*var2[14];
  p_output1[4]=t5254*var2[3] + (-1.*t1191*t1915*t4610 + t4628*t5185)*var2[4] + t4628*t5199*var2[5] + t4628*t5211*var2[13] + (t4349*t4610 + t5269)*var2[14];
  p_output1[5]=(-1.*t289*t4610 + t4628*t5439)*var2[4] + t4628*t5385*var2[5] + t4628*t5385*var2[13] + (t4478*t4610 + t1191*t4628)*var2[14];
  p_output1[6]=(-1.*t4610*t5061 + t5269)*var2[3] + (-1.*t1191*t223*t4628 - 1.*t4610*t4714)*var2[4] - 1.*t4610*t4857*var2[5] - 1.*t4610*t4917*var2[13] + t5254*var2[14];
  p_output1[7]=(-1.*t3284*t4610 + t223*t289*t4628)*var2[3] + (-1.*t1191*t1915*t4628 - 1.*t4610*t5185)*var2[4] - 1.*t4610*t5199*var2[5] - 1.*t4610*t5211*var2[13] + (t1915*t289*t4610 + t4349*t4628)*var2[14];
  p_output1[8]=(-1.*t289*t4628 - 1.*t4610*t5439)*var2[4] - 1.*t4610*t5385*var2[5] - 1.*t4610*t5385*var2[13] + (-1.*t1191*t4610 + t4478*t4628)*var2[14];
}



void dR_RightRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
