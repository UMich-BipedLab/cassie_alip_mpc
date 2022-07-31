/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightHip_src.h"

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
  double t91;
  double t359;
  double t1031;
  double t1213;
  double t2176;
  double t2231;
  double t2314;
  double t670;
  double t1037;
  double t1149;
  double t2347;
  double t3026;
  double t3948;
  double t2642;
  double t4063;
  double t4066;
  double t3954;
  double t4004;
  double t424;
  double t443;
  double t1499;
  double t2500;
  double t2545;
  double t2581;
  double t2700;
  double t3456;
  double t3514;
  double t3523;
  double t3524;
  double t3529;
  double t3534;
  double t3538;
  double t3571;
  double t3581;
  double t3587;
  double t3600;
  double t3677;
  double t3686;
  double t3692;
  double t3764;
  double t3769;
  double t3821;
  double t3847;
  double t3888;
  t91 = Sin(var1[14]);
  t359 = 0. + t91;
  t1031 = Cos(var1[14]);
  t1213 = Cos(var1[5]);
  t2176 = Sin(var1[13]);
  t2231 = -1.*t1031*t2176;
  t2314 = 0. + t2231;
  t670 = Cos(var1[13]);
  t1037 = -1.*t670*t1031;
  t1149 = 0. + t1037;
  t2347 = Sin(var1[5]);
  t3026 = Cos(var1[4]);
  t3948 = 0. + t1031;
  t2642 = Sin(var1[4]);
  t4063 = t2176*t91;
  t4066 = 0. + t4063;
  t3954 = t670*t91;
  t4004 = 0. + t3954;
  t424 = var2[13]*t359;
  t443 = var2[5]*t359;
  t1499 = t1149*t1213;
  t2500 = -1.*t2314*t2347;
  t2545 = 0. + t1499 + t2500;
  t2581 = var2[4]*t2545;
  t2700 = -1.*t359*t2642;
  t3456 = t1213*t2314;
  t3514 = t1149*t2347;
  t3523 = 0. + t3456 + t3514;
  t3524 = t3026*t3523;
  t3529 = 0. + t2700 + t3524;
  t3534 = var2[3]*t3529;
  t3538 = 0. + t424 + t443 + t2581 + t3534;
  t3571 = -1.*var2[14];
  t3581 = t1213*t2176;
  t3587 = t670*t2347;
  t3600 = 0. + t3581 + t3587;
  t3677 = var2[4]*t3600;
  t3686 = -1.*t670*t1213;
  t3692 = t2176*t2347;
  t3764 = 0. + t3686 + t3692;
  t3769 = t3026*t3764;
  t3821 = 0. + t3769;
  t3847 = var2[3]*t3821;
  t3888 = 0. + t3571 + t3677 + t3847;
  p_output1[0]=0. - 1.e-6*t3538 + 0.000842*t3888;
  p_output1[1]=0. + 0.00608*(0. + (0. - 1.*t2642*t3948 + t3026*(0. + t2347*t4004 + t1213*t4066))*var2[3] + (0. + t1213*t4004 - 1.*t2347*t4066)*var2[4] + t3948*var2[5] + t3948*var2[13]);
  p_output1[2]=0. + 0.00644*t3538 - 1.e-6*t3888;
}



void AMBody_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
