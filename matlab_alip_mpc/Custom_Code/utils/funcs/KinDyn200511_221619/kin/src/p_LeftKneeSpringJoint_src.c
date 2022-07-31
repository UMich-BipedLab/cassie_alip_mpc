/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftKneeSpringJoint_src.h"

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
  double t445;
  double t1335;
  double t412;
  double t665;
  double t1484;
  double t1973;
  double t2162;
  double t2224;
  double t2370;
  double t2934;
  double t2991;
  double t2992;
  double t748;
  double t1551;
  double t1559;
  double t3611;
  double t3841;
  double t3957;
  double t4231;
  double t3301;
  double t3532;
  double t3599;
  double t4515;
  double t5629;
  double t5679;
  double t5836;
  double t6018;
  double t5343;
  double t5522;
  double t5575;
  double t6178;
  double t6333;
  double t6349;
  double t6737;
  double t6794;
  double t6934;
  double t6943;
  double t6948;
  double t6953;
  double t6964;
  double t7026;
  double t7047;
  double t7050;
  double t7083;
  double t7120;
  double t7128;
  double t7147;
  double t7196;
  double t7203;
  double t7207;
  double t7217;
  double t7224;
  double t7267;
  double t2227;
  double t2592;
  double t2615;
  double t3004;
  double t3214;
  double t3224;
  double t7480;
  double t7481;
  double t7485;
  double t7432;
  double t7434;
  double t7446;
  double t3965;
  double t4255;
  double t4401;
  double t4532;
  double t4556;
  double t4606;
  double t7493;
  double t7495;
  double t7505;
  double t5946;
  double t6122;
  double t6128;
  double t6351;
  double t6419;
  double t6545;
  double t6935;
  double t6944;
  double t6946;
  double t7517;
  double t7521;
  double t7522;
  double t7524;
  double t7525;
  double t7527;
  double t6992;
  double t7002;
  double t7004;
  double t7130;
  double t7164;
  double t7191;
  double t7542;
  double t7547;
  double t7548;
  double t7564;
  double t7567;
  double t7568;
  double t7210;
  double t7213;
  double t7214;
  double t7572;
  double t7573;
  double t7585;
  double t7602;
  double t7606;
  double t7611;
  double t7664;
  double t7666;
  double t7671;
  double t7701;
  double t7703;
  double t7705;
  double t7714;
  double t7715;
  double t7717;
  double t7719;
  double t7721;
  double t7722;
  double t7725;
  double t7726;
  double t7728;
  double t7733;
  double t7735;
  double t7736;
  double t7743;
  double t7747;
  double t7752;
  t445 = Cos(var1[5]);
  t1335 = Sin(var1[3]);
  t412 = Cos(var1[3]);
  t665 = Sin(var1[4]);
  t1484 = Sin(var1[5]);
  t1973 = Cos(var1[6]);
  t2162 = -1.*t1973;
  t2224 = 1. + t2162;
  t2370 = Sin(var1[6]);
  t2934 = -1.*t445*t1335;
  t2991 = t412*t665*t1484;
  t2992 = t2934 + t2991;
  t748 = t412*t445*t665;
  t1551 = t1335*t1484;
  t1559 = t748 + t1551;
  t3611 = Cos(var1[7]);
  t3841 = -1.*t3611;
  t3957 = 1. + t3841;
  t4231 = Sin(var1[7]);
  t3301 = t1973*t2992;
  t3532 = t1559*t2370;
  t3599 = t3301 + t3532;
  t4515 = Cos(var1[4]);
  t5629 = Cos(var1[8]);
  t5679 = -1.*t5629;
  t5836 = 1. + t5679;
  t6018 = Sin(var1[8]);
  t5343 = t412*t4515*t3611;
  t5522 = t3599*t4231;
  t5575 = t5343 + t5522;
  t6178 = t1973*t1559;
  t6333 = -1.*t2992*t2370;
  t6349 = t6178 + t6333;
  t6737 = Cos(var1[9]);
  t6794 = -1.*t6737;
  t6934 = 1. + t6794;
  t6943 = Sin(var1[9]);
  t6948 = t5629*t5575;
  t6953 = t6349*t6018;
  t6964 = t6948 + t6953;
  t7026 = t5629*t6349;
  t7047 = -1.*t5575*t6018;
  t7050 = t7026 + t7047;
  t7083 = Cos(var1[10]);
  t7120 = -1.*t7083;
  t7128 = 1. + t7120;
  t7147 = Sin(var1[10]);
  t7196 = -1.*t6943*t6964;
  t7203 = t6737*t7050;
  t7207 = t7196 + t7203;
  t7217 = t6737*t6964;
  t7224 = t6943*t7050;
  t7267 = t7217 + t7224;
  t2227 = 0.07996*t2224;
  t2592 = -0.135*t2370;
  t2615 = 0. + t2227 + t2592;
  t3004 = 0.135*t2224;
  t3214 = 0.07996*t2370;
  t3224 = 0. + t3004 + t3214;
  t7480 = t412*t445;
  t7481 = t1335*t665*t1484;
  t7485 = t7480 + t7481;
  t7432 = t445*t1335*t665;
  t7434 = -1.*t412*t1484;
  t7446 = t7432 + t7434;
  t3965 = 0.135*t3957;
  t4255 = 0.08055*t4231;
  t4401 = 0. + t3965 + t4255;
  t4532 = -0.08055*t3957;
  t4556 = 0.135*t4231;
  t4606 = 0. + t4532 + t4556;
  t7493 = t1973*t7485;
  t7495 = t7446*t2370;
  t7505 = t7493 + t7495;
  t5946 = -0.08055*t5836;
  t6122 = -0.01004*t6018;
  t6128 = 0. + t5946 + t6122;
  t6351 = -0.01004*t5836;
  t6419 = 0.08055*t6018;
  t6545 = 0. + t6351 + t6419;
  t6935 = -0.08055*t6934;
  t6944 = -0.13004*t6943;
  t6946 = 0. + t6935 + t6944;
  t7517 = t4515*t3611*t1335;
  t7521 = t7505*t4231;
  t7522 = t7517 + t7521;
  t7524 = t1973*t7446;
  t7525 = -1.*t7485*t2370;
  t7527 = t7524 + t7525;
  t6992 = -0.13004*t6934;
  t7002 = 0.08055*t6943;
  t7004 = 0. + t6992 + t7002;
  t7130 = -0.19074*t7128;
  t7164 = 0.03315*t7147;
  t7191 = 0. + t7130 + t7164;
  t7542 = t5629*t7522;
  t7547 = t7527*t6018;
  t7548 = t7542 + t7547;
  t7564 = t5629*t7527;
  t7567 = -1.*t7522*t6018;
  t7568 = t7564 + t7567;
  t7210 = -0.03315*t7128;
  t7213 = -0.19074*t7147;
  t7214 = 0. + t7210 + t7213;
  t7572 = -1.*t6943*t7548;
  t7573 = t6737*t7568;
  t7585 = t7572 + t7573;
  t7602 = t6737*t7548;
  t7606 = t6943*t7568;
  t7611 = t7602 + t7606;
  t7664 = t4515*t1973*t1484;
  t7666 = t4515*t445*t2370;
  t7671 = t7664 + t7666;
  t7701 = -1.*t3611*t665;
  t7703 = t7671*t4231;
  t7705 = t7701 + t7703;
  t7714 = t4515*t445*t1973;
  t7715 = -1.*t4515*t1484*t2370;
  t7717 = t7714 + t7715;
  t7719 = t5629*t7705;
  t7721 = t7717*t6018;
  t7722 = t7719 + t7721;
  t7725 = t5629*t7717;
  t7726 = -1.*t7705*t6018;
  t7728 = t7725 + t7726;
  t7733 = -1.*t6943*t7722;
  t7735 = t6737*t7728;
  t7736 = t7733 + t7735;
  t7743 = t6737*t7722;
  t7747 = t6943*t7728;
  t7752 = t7743 + t7747;
  p_output1[0]=0. + t1559*t2615 + t2992*t3224 + t3599*t4401 + 0.1305*(t3599*t3611 - 1.*t412*t4231*t4515) + t412*t4515*t4606 + t5575*t6128 + t6349*t6545 + t6946*t6964 + t7004*t7050 + t7191*t7207 + t7214*t7267 - 0.03315*(t7147*t7207 + t7083*t7267) - 0.19074*(t7083*t7207 - 1.*t7147*t7267) + var1[0];
  p_output1[1]=0. + t1335*t4515*t4606 + t2615*t7446 + t3224*t7485 + t4401*t7505 + 0.1305*(-1.*t1335*t4231*t4515 + t3611*t7505) + t6128*t7522 + t6545*t7527 + t6946*t7548 + t7004*t7568 + t7191*t7585 + t7214*t7611 - 0.03315*(t7147*t7585 + t7083*t7611) - 0.19074*(t7083*t7585 - 1.*t7147*t7611) + var1[1];
  p_output1[2]=0. + t1484*t3224*t4515 + t2615*t445*t4515 - 1.*t4606*t665 + t4401*t7671 + 0.1305*(t4231*t665 + t3611*t7671) + t6128*t7705 + t6545*t7717 + t6946*t7722 + t7004*t7728 + t7191*t7736 + t7214*t7752 - 0.03315*(t7147*t7736 + t7083*t7752) - 0.19074*(t7083*t7736 - 1.*t7147*t7752) + var1[2];
}



void p_LeftKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
