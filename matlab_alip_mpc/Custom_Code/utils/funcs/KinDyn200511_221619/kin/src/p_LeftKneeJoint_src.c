/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftKneeJoint_src.h"

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
  double t654;
  double t1064;
  double t189;
  double t934;
  double t1099;
  double t1755;
  double t1779;
  double t1868;
  double t1909;
  double t2349;
  double t2581;
  double t2595;
  double t972;
  double t1490;
  double t1636;
  double t3026;
  double t3497;
  double t3584;
  double t3784;
  double t2929;
  double t2954;
  double t2972;
  double t3882;
  double t4784;
  double t4903;
  double t4987;
  double t5153;
  double t4624;
  double t4641;
  double t4703;
  double t5304;
  double t5308;
  double t5331;
  double t5424;
  double t5427;
  double t5428;
  double t5447;
  double t5515;
  double t5535;
  double t5548;
  double t5641;
  double t5675;
  double t5686;
  double t1895;
  double t1948;
  double t2143;
  double t2607;
  double t2616;
  double t2629;
  double t6072;
  double t6085;
  double t6087;
  double t6013;
  double t6036;
  double t6059;
  double t3733;
  double t3793;
  double t3836;
  double t3921;
  double t3960;
  double t3970;
  double t6092;
  double t6112;
  double t6117;
  double t4996;
  double t5155;
  double t5209;
  double t5363;
  double t5384;
  double t5413;
  double t5441;
  double t5448;
  double t5464;
  double t6150;
  double t6151;
  double t6152;
  double t6157;
  double t6158;
  double t6164;
  double t5589;
  double t5614;
  double t5623;
  double t6174;
  double t6175;
  double t6178;
  double t6184;
  double t6186;
  double t6190;
  double t6317;
  double t6323;
  double t6333;
  double t6443;
  double t6445;
  double t6481;
  double t6539;
  double t6574;
  double t6581;
  double t6598;
  double t6630;
  double t6663;
  double t6678;
  double t6688;
  double t6712;
  t654 = Cos(var1[5]);
  t1064 = Sin(var1[3]);
  t189 = Cos(var1[3]);
  t934 = Sin(var1[4]);
  t1099 = Sin(var1[5]);
  t1755 = Cos(var1[6]);
  t1779 = -1.*t1755;
  t1868 = 1. + t1779;
  t1909 = Sin(var1[6]);
  t2349 = -1.*t654*t1064;
  t2581 = t189*t934*t1099;
  t2595 = t2349 + t2581;
  t972 = t189*t654*t934;
  t1490 = t1064*t1099;
  t1636 = t972 + t1490;
  t3026 = Cos(var1[7]);
  t3497 = -1.*t3026;
  t3584 = 1. + t3497;
  t3784 = Sin(var1[7]);
  t2929 = t1755*t2595;
  t2954 = t1636*t1909;
  t2972 = t2929 + t2954;
  t3882 = Cos(var1[4]);
  t4784 = Cos(var1[8]);
  t4903 = -1.*t4784;
  t4987 = 1. + t4903;
  t5153 = Sin(var1[8]);
  t4624 = t189*t3882*t3026;
  t4641 = t2972*t3784;
  t4703 = t4624 + t4641;
  t5304 = t1755*t1636;
  t5308 = -1.*t2595*t1909;
  t5331 = t5304 + t5308;
  t5424 = Cos(var1[9]);
  t5427 = -1.*t5424;
  t5428 = 1. + t5427;
  t5447 = Sin(var1[9]);
  t5515 = t4784*t4703;
  t5535 = t5331*t5153;
  t5548 = t5515 + t5535;
  t5641 = t4784*t5331;
  t5675 = -1.*t4703*t5153;
  t5686 = t5641 + t5675;
  t1895 = 0.07996*t1868;
  t1948 = -0.135*t1909;
  t2143 = 0. + t1895 + t1948;
  t2607 = 0.135*t1868;
  t2616 = 0.07996*t1909;
  t2629 = 0. + t2607 + t2616;
  t6072 = t189*t654;
  t6085 = t1064*t934*t1099;
  t6087 = t6072 + t6085;
  t6013 = t654*t1064*t934;
  t6036 = -1.*t189*t1099;
  t6059 = t6013 + t6036;
  t3733 = 0.135*t3584;
  t3793 = 0.08055*t3784;
  t3836 = 0. + t3733 + t3793;
  t3921 = -0.08055*t3584;
  t3960 = 0.135*t3784;
  t3970 = 0. + t3921 + t3960;
  t6092 = t1755*t6087;
  t6112 = t6059*t1909;
  t6117 = t6092 + t6112;
  t4996 = -0.08055*t4987;
  t5155 = -0.01004*t5153;
  t5209 = 0. + t4996 + t5155;
  t5363 = -0.01004*t4987;
  t5384 = 0.08055*t5153;
  t5413 = 0. + t5363 + t5384;
  t5441 = -0.08055*t5428;
  t5448 = -0.13004*t5447;
  t5464 = 0. + t5441 + t5448;
  t6150 = t3882*t3026*t1064;
  t6151 = t6117*t3784;
  t6152 = t6150 + t6151;
  t6157 = t1755*t6059;
  t6158 = -1.*t6087*t1909;
  t6164 = t6157 + t6158;
  t5589 = -0.13004*t5428;
  t5614 = 0.08055*t5447;
  t5623 = 0. + t5589 + t5614;
  t6174 = t4784*t6152;
  t6175 = t6164*t5153;
  t6178 = t6174 + t6175;
  t6184 = t4784*t6164;
  t6186 = -1.*t6152*t5153;
  t6190 = t6184 + t6186;
  t6317 = t3882*t1755*t1099;
  t6323 = t3882*t654*t1909;
  t6333 = t6317 + t6323;
  t6443 = -1.*t3026*t934;
  t6445 = t6333*t3784;
  t6481 = t6443 + t6445;
  t6539 = t3882*t654*t1755;
  t6574 = -1.*t3882*t1099*t1909;
  t6581 = t6539 + t6574;
  t6598 = t4784*t6481;
  t6630 = t6581*t5153;
  t6663 = t6598 + t6630;
  t6678 = t4784*t6581;
  t6688 = -1.*t6481*t5153;
  t6712 = t6678 + t6688;
  p_output1[0]=0. + t1636*t2143 + t2595*t2629 + t2972*t3836 + 0.1305*(t2972*t3026 - 1.*t189*t3784*t3882) + t189*t3882*t3970 + t4703*t5209 + t5331*t5413 + t5464*t5548 + t5623*t5686 - 0.13004*(-1.*t5447*t5548 + t5424*t5686) - 0.08055*(t5424*t5548 + t5447*t5686) + var1[0];
  p_output1[1]=0. + t1064*t3882*t3970 + t2143*t6059 + t2629*t6087 + t3836*t6117 + 0.1305*(-1.*t1064*t3784*t3882 + t3026*t6117) + t5209*t6152 + t5413*t6164 + t5464*t6178 + t5623*t6190 - 0.13004*(-1.*t5447*t6178 + t5424*t6190) - 0.08055*(t5424*t6178 + t5447*t6190) + var1[1];
  p_output1[2]=0. + t1099*t2629*t3882 + t3836*t6333 + t5209*t6481 + t2143*t3882*t654 + t5413*t6581 + t5464*t6663 + t5623*t6712 - 0.13004*(-1.*t5447*t6663 + t5424*t6712) - 0.08055*(t5424*t6663 + t5447*t6712) - 1.*t3970*t934 + 0.1305*(t3026*t6333 + t3784*t934) + var1[2];
}



void p_LeftKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
