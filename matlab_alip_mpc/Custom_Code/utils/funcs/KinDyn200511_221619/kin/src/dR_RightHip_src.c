/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightHip_src.h"

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
  double t198;
  double t273;
  double t689;
  double t274;
  double t1014;
  double t194;
  double t1486;
  double t1399;
  double t1460;
  double t1493;
  double t1820;
  double t1831;
  double t2810;
  double t2848;
  double t2978;
  double t3352;
  double t3375;
  double t3377;
  double t3546;
  double t3549;
  double t3550;
  double t3569;
  double t3695;
  double t3697;
  double t3705;
  double t3801;
  double t1903;
  double t2064;
  double t2179;
  double t3853;
  double t3786;
  double t2987;
  double t3022;
  double t3027;
  double t3044;
  double t3121;
  double t3431;
  double t4079;
  double t3607;
  double t3621;
  double t3641;
  double t3648;
  double t3663;
  double t4134;
  double t4141;
  double t4144;
  double t3813;
  double t3818;
  double t3819;
  double t3854;
  double t3858;
  double t3907;
  double t3911;
  double t4110;
  double t4111;
  double t4115;
  double t4120;
  double t3952;
  double t3967;
  double t3975;
  double t4047;
  double t4049;
  double t4059;
  double t4085;
  double t4103;
  double t4107;
  double t4184;
  double t4187;
  double t4197;
  t198 = Cos(var1[3]);
  t273 = Cos(var1[4]);
  t689 = Sin(var1[13]);
  t274 = Cos(var1[5]);
  t1014 = Sin(var1[5]);
  t194 = Cos(var1[13]);
  t1486 = Sin(var1[3]);
  t1399 = Sin(var1[4]);
  t1460 = t198*t274*t1399;
  t1493 = t1486*t1014;
  t1820 = t1460 + t1493;
  t1831 = t689*t1820;
  t2810 = -1.*t274*t1486;
  t2848 = t198*t1399*t1014;
  t2978 = t2810 + t2848;
  t3352 = -1.*t198*t274;
  t3375 = -1.*t1486*t1399*t1014;
  t3377 = t3352 + t3375;
  t3546 = t274*t1486*t1399;
  t3549 = -1.*t198*t1014;
  t3550 = t3546 + t3549;
  t3569 = t689*t3550;
  t3695 = t273*t274*t689;
  t3697 = t194*t273*t1014;
  t3705 = t3695 + t3697;
  t3801 = Sin(var1[14]);
  t1903 = t274*t1486;
  t2064 = -1.*t198*t1399*t1014;
  t2179 = t1903 + t2064;
  t3853 = t194*t1820;
  t3786 = Cos(var1[14]);
  t2987 = t194*t2978;
  t3022 = t1831 + t2987;
  t3027 = -1.*t274*t1486*t1399;
  t3044 = t198*t1014;
  t3121 = t3027 + t3044;
  t3431 = t689*t3377;
  t4079 = t194*t3550;
  t3607 = t198*t274;
  t3621 = t1486*t1399*t1014;
  t3641 = t3607 + t3621;
  t3648 = t194*t3641;
  t3663 = t3569 + t3648;
  t4134 = t194*t273*t274;
  t4141 = -1.*t273*t689*t1014;
  t4144 = t4134 + t4141;
  t3813 = t198*t273*t274*t689;
  t3818 = t194*t198*t273*t1014;
  t3819 = t3813 + t3818;
  t3854 = t689*t2179;
  t3858 = t3853 + t3854;
  t3907 = -1.*t689*t2978;
  t3911 = t3853 + t3907;
  t4110 = t3786*t198*t273;
  t4111 = t3801*t3022;
  t4115 = t4110 + t4111;
  t4120 = -1.*t273*t3801*t1486;
  t3952 = t689*t3121;
  t3967 = t194*t3377;
  t3975 = t3952 + t3967;
  t4047 = t273*t274*t689*t1486;
  t4049 = t194*t273*t1486*t1014;
  t4059 = t4047 + t4049;
  t4085 = t4079 + t3431;
  t4103 = -1.*t689*t3641;
  t4107 = t4079 + t4103;
  t4184 = -1.*t274*t689*t1399;
  t4187 = -1.*t194*t1399*t1014;
  t4197 = t4184 + t4187;
  p_output1[0]=(-1.*t194*t3121 + t3431)*var2[3] + (-1.*t194*t198*t273*t274 + t1014*t198*t273*t689)*var2[4] + (t1831 - 1.*t194*t2179)*var2[5] + t3022*var2[13];
  p_output1[1]=(-1.*t1820*t194 + t2978*t689)*var2[3] + (-1.*t1486*t194*t273*t274 + t1014*t1486*t273*t689)*var2[4] + (-1.*t194*t3377 + t3569)*var2[5] + t3663*var2[13];
  p_output1[2]=(t1399*t194*t274 - 1.*t1014*t1399*t689)*var2[4] + t3705*var2[5] + t3705*var2[13];
  p_output1[3]=(-1.*t1486*t273*t3786 + t3801*t3975)*var2[3] + (-1.*t1399*t198*t3786 + t3801*t3819)*var2[4] + t3801*t3858*var2[5] + t3801*t3911*var2[13] + (t3022*t3786 - 1.*t198*t273*t3801)*var2[14];
  p_output1[4]=t4115*var2[3] + (-1.*t1399*t1486*t3786 + t3801*t4059)*var2[4] + t3801*t4085*var2[5] + t3801*t4107*var2[13] + (t3663*t3786 + t4120)*var2[14];
  p_output1[5]=(-1.*t273*t3786 + t3801*t4197)*var2[4] + t3801*t4144*var2[5] + t3801*t4144*var2[13] + (t3705*t3786 + t1399*t3801)*var2[14];
  p_output1[6]=(-1.*t3786*t3975 + t4120)*var2[3] + (-1.*t1399*t198*t3801 - 1.*t3786*t3819)*var2[4] - 1.*t3786*t3858*var2[5] - 1.*t3786*t3911*var2[13] + t4115*var2[14];
  p_output1[7]=(-1.*t3022*t3786 + t198*t273*t3801)*var2[3] + (-1.*t1399*t1486*t3801 - 1.*t3786*t4059)*var2[4] - 1.*t3786*t4085*var2[5] - 1.*t3786*t4107*var2[13] + (t1486*t273*t3786 + t3663*t3801)*var2[14];
  p_output1[8]=(-1.*t273*t3801 - 1.*t3786*t4197)*var2[4] - 1.*t3786*t4144*var2[5] - 1.*t3786*t4144*var2[13] + (-1.*t1399*t3786 + t3705*t3801)*var2[14];
}



void dR_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
