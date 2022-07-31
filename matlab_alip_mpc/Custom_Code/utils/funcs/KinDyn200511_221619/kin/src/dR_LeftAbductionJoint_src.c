/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftAbductionJoint_src.h"

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
  double t3535;
  double t2773;
  double t3324;
  double t3550;
  double t3612;
  double t3647;
  double t3642;
  double t3671;
  double t3705;
  double t3706;
  double t3711;
  double t3712;
  double t3742;
  double t3743;
  double t3744;
  double t3683;
  double t3684;
  double t3685;
  double t3776;
  double t3778;
  double t3783;
  double t3785;
  double t3834;
  double t3835;
  double t3839;
  double t3714;
  double t3716;
  double t3717;
  double t3863;
  double t3688;
  double t3690;
  double t3692;
  double t3686;
  double t3800;
  double t3801;
  double t3804;
  double t3888;
  double t3745;
  double t3749;
  double t3908;
  double t3910;
  double t3911;
  t3535 = Cos(var1[3]);
  t2773 = Cos(var1[4]);
  t3324 = Sin(var1[3]);
  t3550 = Sin(var1[4]);
  t3612 = Cos(var1[6]);
  t3647 = Cos(var1[5]);
  t3642 = Sin(var1[5]);
  t3671 = Sin(var1[6]);
  t3705 = t3535*t3647*t3550;
  t3706 = t3324*t3642;
  t3711 = t3705 + t3706;
  t3712 = t3612*t3711;
  t3742 = -1.*t3647*t3324;
  t3743 = t3535*t3550*t3642;
  t3744 = t3742 + t3743;
  t3683 = -1.*t3535*t3647;
  t3684 = -1.*t3324*t3550*t3642;
  t3685 = t3683 + t3684;
  t3776 = t3647*t3324*t3550;
  t3778 = -1.*t3535*t3642;
  t3783 = t3776 + t3778;
  t3785 = t3612*t3783;
  t3834 = t2773*t3647*t3612;
  t3835 = -1.*t2773*t3642*t3671;
  t3839 = t3834 + t3835;
  t3714 = t3647*t3324;
  t3716 = -1.*t3535*t3550*t3642;
  t3717 = t3714 + t3716;
  t3863 = -1.*t3711*t3671;
  t3688 = -1.*t3647*t3324*t3550;
  t3690 = t3535*t3642;
  t3692 = t3688 + t3690;
  t3686 = t3612*t3685;
  t3800 = t3535*t3647;
  t3801 = t3324*t3550*t3642;
  t3804 = t3800 + t3801;
  t3888 = -1.*t3783*t3671;
  t3745 = -1.*t3744*t3671;
  t3749 = t3712 + t3745;
  t3908 = -1.*t2773*t3612*t3642;
  t3910 = -1.*t2773*t3647*t3671;
  t3911 = t3908 + t3910;
  p_output1[0]=-1.*t2773*t3324*var2[3] - 1.*t3535*t3550*var2[4];
  p_output1[1]=t2773*t3535*var2[3] - 1.*t3324*t3550*var2[4];
  p_output1[2]=-1.*t2773*var2[4];
  p_output1[3]=(t3686 + t3671*t3692)*var2[3] + (t2773*t3535*t3612*t3642 + t2773*t3535*t3647*t3671)*var2[4] + (t3712 + t3671*t3717)*var2[5] + t3749*var2[6];
  p_output1[4]=(t3671*t3711 + t3612*t3744)*var2[3] + (t2773*t3324*t3612*t3642 + t2773*t3324*t3647*t3671)*var2[4] + (t3671*t3685 + t3785)*var2[5] + (t3785 - 1.*t3671*t3804)*var2[6];
  p_output1[5]=(-1.*t3550*t3612*t3642 - 1.*t3550*t3647*t3671)*var2[4] + t3839*var2[5] + t3839*var2[6];
  p_output1[6]=(-1.*t3671*t3685 + t3612*t3692)*var2[3] + (t2773*t3535*t3612*t3647 - 1.*t2773*t3535*t3642*t3671)*var2[4] + (t3612*t3717 + t3863)*var2[5] + (-1.*t3612*t3744 + t3863)*var2[6];
  p_output1[7]=t3749*var2[3] + (t2773*t3324*t3612*t3647 - 1.*t2773*t3324*t3642*t3671)*var2[4] + (t3686 + t3888)*var2[5] + (-1.*t3612*t3804 + t3888)*var2[6];
  p_output1[8]=(-1.*t3550*t3612*t3647 + t3550*t3642*t3671)*var2[4] + t3911*var2[5] + t3911*var2[6];
}



void dR_LeftAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
