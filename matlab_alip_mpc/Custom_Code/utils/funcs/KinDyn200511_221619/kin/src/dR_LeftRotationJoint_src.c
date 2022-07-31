/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftRotationJoint_src.h"

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
  double t220;
  double t462;
  double t659;
  double t636;
  double t915;
  double t1364;
  double t1170;
  double t920;
  double t2277;
  double t2540;
  double t2542;
  double t2550;
  double t4262;
  double t4271;
  double t4408;
  double t5006;
  double t5095;
  double t5334;
  double t5480;
  double t2677;
  double t3023;
  double t3025;
  double t5709;
  double t5724;
  double t5725;
  double t1226;
  double t1768;
  double t1786;
  double t5770;
  double t5784;
  double t3040;
  double t3505;
  double t5841;
  double t3573;
  double t3614;
  double t3864;
  double t4428;
  double t5913;
  double t5571;
  double t5608;
  double t5645;
  double t5646;
  double t5650;
  double t5961;
  double t5962;
  double t5963;
  double t5771;
  double t5777;
  double t5829;
  double t5832;
  double t5894;
  double t5897;
  double t5898;
  double t5931;
  double t5860;
  double t5874;
  double t5875;
  double t5950;
  double t5951;
  double t5952;
  double t5914;
  double t5922;
  double t5927;
  double t5943;
  double t5944;
  double t5945;
  double t5977;
  double t5978;
  double t5979;
  t220 = Cos(var1[3]);
  t462 = Cos(var1[4]);
  t659 = Cos(var1[6]);
  t636 = Cos(var1[5]);
  t915 = Sin(var1[5]);
  t1364 = Sin(var1[4]);
  t1170 = Sin(var1[3]);
  t920 = Sin(var1[6]);
  t2277 = t220*t636*t1364;
  t2540 = t1170*t915;
  t2542 = t2277 + t2540;
  t2550 = t2542*t920;
  t4262 = -1.*t220*t636;
  t4271 = -1.*t1170*t1364*t915;
  t4408 = t4262 + t4271;
  t5006 = t636*t1170*t1364;
  t5095 = -1.*t220*t915;
  t5334 = t5006 + t5095;
  t5480 = t5334*t920;
  t2677 = -1.*t636*t1170;
  t3023 = t220*t1364*t915;
  t3025 = t2677 + t3023;
  t5709 = t462*t659*t915;
  t5724 = t462*t636*t920;
  t5725 = t5709 + t5724;
  t1226 = t636*t1170;
  t1768 = -1.*t220*t1364*t915;
  t1786 = t1226 + t1768;
  t5770 = t659*t2542;
  t5784 = Sin(var1[7]);
  t3040 = t659*t3025;
  t3505 = t3040 + t2550;
  t5841 = Cos(var1[7]);
  t3573 = -1.*t636*t1170*t1364;
  t3614 = t220*t915;
  t3864 = t3573 + t3614;
  t4428 = t4408*t920;
  t5913 = t659*t5334;
  t5571 = t220*t636;
  t5608 = t1170*t1364*t915;
  t5645 = t5571 + t5608;
  t5646 = t659*t5645;
  t5650 = t5646 + t5480;
  t5961 = t462*t636*t659;
  t5962 = -1.*t462*t915*t920;
  t5963 = t5961 + t5962;
  t5771 = t1786*t920;
  t5777 = t5770 + t5771;
  t5829 = -1.*t3025*t920;
  t5832 = t5770 + t5829;
  t5894 = t659*t4408;
  t5897 = t3864*t920;
  t5898 = t5894 + t5897;
  t5931 = -1.*t462*t1170*t5784;
  t5860 = t220*t462*t659*t915;
  t5874 = t220*t462*t636*t920;
  t5875 = t5860 + t5874;
  t5950 = t220*t462*t5841;
  t5951 = t3505*t5784;
  t5952 = t5950 + t5951;
  t5914 = t5913 + t4428;
  t5922 = -1.*t5645*t920;
  t5927 = t5913 + t5922;
  t5943 = t462*t659*t1170*t915;
  t5944 = t462*t636*t1170*t920;
  t5945 = t5943 + t5944;
  t5977 = -1.*t659*t1364*t915;
  t5978 = -1.*t636*t1364*t920;
  t5979 = t5977 + t5978;
  p_output1[0]=(t4428 - 1.*t3864*t659)*var2[3] + (-1.*t220*t462*t636*t659 + t220*t462*t915*t920)*var2[4] + (t2550 - 1.*t1786*t659)*var2[5] + t3505*var2[6];
  p_output1[1]=(-1.*t2542*t659 + t3025*t920)*var2[3] + (-1.*t1170*t462*t636*t659 + t1170*t462*t915*t920)*var2[4] + (t5480 - 1.*t4408*t659)*var2[5] + t5650*var2[6];
  p_output1[2]=(t1364*t636*t659 - 1.*t1364*t915*t920)*var2[4] + t5725*var2[5] + t5725*var2[6];
  p_output1[3]=(-1.*t1170*t462*t5841 + t5784*t5898)*var2[3] + (-1.*t1364*t220*t5841 + t5784*t5875)*var2[4] + t5777*t5784*var2[5] + t5784*t5832*var2[6] + (-1.*t220*t462*t5784 + t3505*t5841)*var2[7];
  p_output1[4]=t5952*var2[3] + (-1.*t1170*t1364*t5841 + t5784*t5945)*var2[4] + t5784*t5914*var2[5] + t5784*t5927*var2[6] + (t5650*t5841 + t5931)*var2[7];
  p_output1[5]=(-1.*t462*t5841 + t5784*t5979)*var2[4] + t5784*t5963*var2[5] + t5784*t5963*var2[6] + (t1364*t5784 + t5725*t5841)*var2[7];
  p_output1[6]=(-1.*t5841*t5898 + t5931)*var2[3] + (-1.*t1364*t220*t5784 - 1.*t5841*t5875)*var2[4] - 1.*t5777*t5841*var2[5] - 1.*t5832*t5841*var2[6] + t5952*var2[7];
  p_output1[7]=(t220*t462*t5784 - 1.*t3505*t5841)*var2[3] + (-1.*t1170*t1364*t5784 - 1.*t5841*t5945)*var2[4] - 1.*t5841*t5914*var2[5] - 1.*t5841*t5927*var2[6] + (t5650*t5784 + t1170*t462*t5841)*var2[7];
  p_output1[8]=(-1.*t462*t5784 - 1.*t5841*t5979)*var2[4] - 1.*t5841*t5963*var2[5] - 1.*t5841*t5963*var2[6] + (t5725*t5784 - 1.*t1364*t5841)*var2[7];
}



void dR_LeftRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
