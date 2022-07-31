/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightThigh_src.h"

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
  double t232;
  double t1397;
  double t1886;
  double t1434;
  double t2321;
  double t1199;
  double t3769;
  double t3118;
  double t1244;
  double t1283;
  double t507;
  double t5024;
  double t5091;
  double t4803;
  double t4819;
  double t7063;
  double t7082;
  double t7098;
  double t7181;
  double t7184;
  double t7219;
  double t7221;
  double t7242;
  double t7277;
  double t7282;
  double t7222;
  double t7228;
  double t7230;
  double t7410;
  double t7411;
  double t7384;
  double t7394;
  double t7454;
  double t7457;
  double t7481;
  double t7487;
  double t7491;
  double t7428;
  double t7471;
  double t7475;
  double t3859;
  double t4423;
  double t4868;
  double t5284;
  double t5549;
  double t5620;
  double t5744;
  double t5888;
  double t6106;
  double t6177;
  double t6464;
  double t6814;
  double t6823;
  double t6856;
  double t7115;
  double t7165;
  double t7205;
  double t7241;
  double t7283;
  double t7288;
  double t7312;
  double t7315;
  double t7318;
  double t7324;
  double t7326;
  double t7334;
  double t7343;
  double t7365;
  double t7378;
  double t7395;
  double t7413;
  double t7421;
  double t7478;
  double t7494;
  double t7500;
  double t7504;
  double t7506;
  double t7509;
  double t7510;
  double t7514;
  double t7519;
  double t7539;
  double t7546;
  double t7549;
  double t1481;
  double t2705;
  double t2711;
  double t3164;
  double t3274;
  double t3515;
  double t2969;
  double t3520;
  double t3555;
  double t7589;
  double t7590;
  double t7596;
  double t7610;
  double t7615;
  double t7620;
  double t7054;
  double t7382;
  double t7551;
  double t7552;
  double t7557;
  double t7562;
  double t7566;
  double t7582;
  double t7719;
  double t7726;
  double t7731;
  double t7740;
  double t7748;
  double t7749;
  double t7732;
  double t7753;
  double t7756;
  double t7662;
  double t7666;
  double t7669;
  double t7677;
  double t7767;
  double t7769;
  double t7777;
  double t7798;
  double t7802;
  double t7804;
  double t7885;
  double t7887;
  double t7888;
  double t7874;
  double t7875;
  double t7878;
  double t7884;
  double t7891;
  double t7894;
  t232 = Cos(var1[3]);
  t1397 = Cos(var1[5]);
  t1886 = Sin(var1[3]);
  t1434 = Sin(var1[4]);
  t2321 = Sin(var1[5]);
  t1199 = Sin(var1[14]);
  t3769 = 0. + t1199;
  t3118 = Cos(var1[13]);
  t1244 = Cos(var1[14]);
  t1283 = Sin(var1[13]);
  t507 = Cos(var1[4]);
  t5024 = -1.*t1244*t1283;
  t5091 = 0. + t5024;
  t4803 = -1.*t3118*t1244;
  t4819 = 0. + t4803;
  t7063 = Cos(var1[15]);
  t7082 = t1244*t7063;
  t7098 = 0. + t7082;
  t7181 = Sin(var1[15]);
  t7184 = 0. + t7181;
  t7219 = t7063*t1199;
  t7221 = 0. + t7219;
  t7242 = t1283*t7221;
  t7277 = t3118*t7184;
  t7282 = 0. + t7242 + t7277;
  t7222 = t3118*t7221;
  t7228 = -1.*t1283*t7184;
  t7230 = 0. + t7222 + t7228;
  t7410 = t1244*t7181;
  t7411 = 0. + t7410;
  t7384 = -1.*t7063;
  t7394 = 0. + t7384;
  t7454 = t1199*t7181;
  t7457 = 0. + t7454;
  t7481 = t3118*t7394;
  t7487 = t1283*t7457;
  t7491 = 0. + t7481 + t7487;
  t7428 = -1.*t7394*t1283;
  t7471 = t3118*t7457;
  t7475 = 0. + t7428 + t7471;
  t3859 = var2[13]*t3769;
  t4423 = var2[5]*t3769;
  t4868 = t4819*t1397;
  t5284 = -1.*t5091*t2321;
  t5549 = 0. + t4868 + t5284;
  t5620 = var2[4]*t5549;
  t5744 = -1.*t3769*t1434;
  t5888 = t1397*t5091;
  t6106 = t4819*t2321;
  t6177 = 0. + t5888 + t6106;
  t6464 = t507*t6177;
  t6814 = 0. + t5744 + t6464;
  t6823 = var2[3]*t6814;
  t6856 = 0. + var2[15] + t3859 + t4423 + t5620 + t6823;
  t7115 = var2[13]*t7098;
  t7165 = var2[5]*t7098;
  t7205 = var2[14]*t7184;
  t7241 = t1397*t7230;
  t7283 = -1.*t7282*t2321;
  t7288 = 0. + t7241 + t7283;
  t7312 = var2[4]*t7288;
  t7315 = -1.*t7098*t1434;
  t7318 = t1397*t7282;
  t7324 = t7230*t2321;
  t7326 = 0. + t7318 + t7324;
  t7334 = t507*t7326;
  t7343 = 0. + t7315 + t7334;
  t7365 = var2[3]*t7343;
  t7378 = 0. + t7115 + t7165 + t7205 + t7312 + t7365;
  t7395 = var2[14]*t7394;
  t7413 = var2[13]*t7411;
  t7421 = var2[5]*t7411;
  t7478 = t1397*t7475;
  t7494 = -1.*t7491*t2321;
  t7500 = 0. + t7478 + t7494;
  t7504 = var2[4]*t7500;
  t7506 = -1.*t7411*t1434;
  t7509 = t1397*t7491;
  t7510 = t7475*t2321;
  t7514 = 0. + t7509 + t7510;
  t7519 = t507*t7514;
  t7539 = 0. + t7506 + t7519;
  t7546 = var2[3]*t7539;
  t7549 = 0. + t7395 + t7413 + t7421 + t7504 + t7546;
  t1481 = t232*t1397*t1434;
  t2705 = t1886*t2321;
  t2711 = t1481 + t2705;
  t3164 = -1.*t1397*t1886;
  t3274 = t232*t1434*t2321;
  t3515 = t3164 + t3274;
  t2969 = t1283*t2711;
  t3520 = t3118*t3515;
  t3555 = t2969 + t3520;
  t7589 = t3118*t2711;
  t7590 = -1.*t1283*t3515;
  t7596 = t7589 + t7590;
  t7610 = t1244*t232*t507;
  t7615 = t1199*t3555;
  t7620 = t7610 + t7615;
  t7054 = 0.0498*t6856;
  t7382 = 0.000019*t7378;
  t7551 = 0.0117*t7549;
  t7552 = t7054 + t7382 + t7551;
  t7557 = 0.000019*t6856;
  t7562 = 0.0563*t7378;
  t7566 = 0.000284*t7549;
  t7582 = t7557 + t7562 + t7566;
  t7719 = t1397*t1886*t1434;
  t7726 = -1.*t232*t2321;
  t7731 = t7719 + t7726;
  t7740 = t232*t1397;
  t7748 = t1886*t1434*t2321;
  t7749 = t7740 + t7748;
  t7732 = t1283*t7731;
  t7753 = t3118*t7749;
  t7756 = t7732 + t7753;
  t7662 = 0.0117*t6856;
  t7666 = 0.000284*t7378;
  t7669 = 0.018*t7549;
  t7677 = t7662 + t7666 + t7669;
  t7767 = t3118*t7731;
  t7769 = -1.*t1283*t7749;
  t7777 = t7767 + t7769;
  t7798 = t1244*t507*t1886;
  t7802 = t1199*t7756;
  t7804 = t7798 + t7802;
  t7885 = t507*t1397*t1283;
  t7887 = t3118*t507*t2321;
  t7888 = t7885 + t7887;
  t7874 = t3118*t507*t1397;
  t7875 = -1.*t507*t1283*t2321;
  t7878 = t7874 + t7875;
  t7884 = -1.*t1244*t1434;
  t7891 = t1199*t7888;
  t7894 = t7884 + t7891;
  p_output1[0]=(-1.*t1244*t3555 + t1199*t232*t507)*t7552 + t7582*(t7181*t7596 + t7063*t7620) + (-1.*t7063*t7596 + t7181*t7620)*t7677;
  p_output1[1]=t7552*(t1199*t1886*t507 - 1.*t1244*t7756) + t7582*(t7181*t7777 + t7063*t7804) + t7677*(-1.*t7063*t7777 + t7181*t7804);
  p_output1[2]=t7552*(-1.*t1199*t1434 - 1.*t1244*t7888) + t7582*(t7181*t7878 + t7063*t7894) + t7677*(-1.*t7063*t7878 + t7181*t7894);
}



void AMWorld_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
