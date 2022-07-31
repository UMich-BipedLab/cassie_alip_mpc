/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftRotationJoint_src.h"

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
  double t170;
  double t222;
  double t231;
  double t227;
  double t381;
  double t1042;
  double t437;
  double t393;
  double t1745;
  double t1771;
  double t2009;
  double t2032;
  double t2888;
  double t2892;
  double t2910;
  double t3762;
  double t4401;
  double t4442;
  double t4500;
  double t2333;
  double t2504;
  double t2510;
  double t5005;
  double t5006;
  double t5020;
  double t581;
  double t1239;
  double t1437;
  double t5072;
  double t5108;
  double t2583;
  double t2633;
  double t5132;
  double t2687;
  double t2723;
  double t2784;
  double t2926;
  double t5445;
  double t4631;
  double t4640;
  double t4643;
  double t4700;
  double t4752;
  double t5579;
  double t5582;
  double t5597;
  double t5085;
  double t5094;
  double t5121;
  double t5122;
  double t5362;
  double t5370;
  double t5382;
  double t5509;
  double t5232;
  double t5265;
  double t5311;
  double t5571;
  double t5572;
  double t5575;
  double t5454;
  double t5473;
  double t5478;
  double t5541;
  double t5542;
  double t5548;
  double t5628;
  double t5629;
  double t5631;
  double t5803;
  double t5808;
  double t5817;
  double t5825;
  double t5836;
  double t5837;
  double t5841;
  double t5842;
  double t5843;
  double t5809;
  double t5810;
  double t5811;
  double t5814;
  double t5819;
  double t5218;
  double t5319;
  double t5334;
  double t5894;
  double t5895;
  double t5896;
  double t5359;
  double t5390;
  double t5400;
  double t5153;
  double t5163;
  double t5170;
  double t5850;
  double t5851;
  double t5853;
  double t5854;
  double t5856;
  double t5953;
  double t5536;
  double t5552;
  double t5562;
  double t5931;
  double t5932;
  double t5934;
  double t5938;
  double t5940;
  double t5494;
  double t5517;
  double t6039;
  double t6040;
  double t6042;
  double t6043;
  double t6044;
  double t6045;
  double t6046;
  double t5620;
  double t5621;
  double t5622;
  double t5625;
  double t5640;
  double t5641;
  t170 = Cos(var1[3]);
  t222 = Cos(var1[4]);
  t231 = Cos(var1[6]);
  t227 = Cos(var1[5]);
  t381 = Sin(var1[5]);
  t1042 = Sin(var1[4]);
  t437 = Sin(var1[3]);
  t393 = Sin(var1[6]);
  t1745 = t170*t227*t1042;
  t1771 = t437*t381;
  t2009 = t1745 + t1771;
  t2032 = t2009*t393;
  t2888 = -1.*t170*t227;
  t2892 = -1.*t437*t1042*t381;
  t2910 = t2888 + t2892;
  t3762 = t227*t437*t1042;
  t4401 = -1.*t170*t381;
  t4442 = t3762 + t4401;
  t4500 = t4442*t393;
  t2333 = -1.*t227*t437;
  t2504 = t170*t1042*t381;
  t2510 = t2333 + t2504;
  t5005 = t222*t231*t381;
  t5006 = t222*t227*t393;
  t5020 = t5005 + t5006;
  t581 = t227*t437;
  t1239 = -1.*t170*t1042*t381;
  t1437 = t581 + t1239;
  t5072 = t231*t2009;
  t5108 = Sin(var1[7]);
  t2583 = t231*t2510;
  t2633 = t2583 + t2032;
  t5132 = Cos(var1[7]);
  t2687 = -1.*t227*t437*t1042;
  t2723 = t170*t381;
  t2784 = t2687 + t2723;
  t2926 = t2910*t393;
  t5445 = t231*t4442;
  t4631 = t170*t227;
  t4640 = t437*t1042*t381;
  t4643 = t4631 + t4640;
  t4700 = t231*t4643;
  t4752 = t4700 + t4500;
  t5579 = t222*t227*t231;
  t5582 = -1.*t222*t381*t393;
  t5597 = t5579 + t5582;
  t5085 = t1437*t393;
  t5094 = t5072 + t5085;
  t5121 = -1.*t2510*t393;
  t5122 = t5072 + t5121;
  t5362 = t231*t2910;
  t5370 = t2784*t393;
  t5382 = t5362 + t5370;
  t5509 = -1.*t222*t437*t5108;
  t5232 = t170*t222*t231*t381;
  t5265 = t170*t222*t227*t393;
  t5311 = t5232 + t5265;
  t5571 = t170*t222*t5132;
  t5572 = t2633*t5108;
  t5575 = t5571 + t5572;
  t5454 = t5445 + t2926;
  t5473 = -1.*t4643*t393;
  t5478 = t5445 + t5473;
  t5541 = t222*t231*t437*t381;
  t5542 = t222*t227*t437*t393;
  t5548 = t5541 + t5542;
  t5628 = -1.*t231*t1042*t381;
  t5629 = -1.*t227*t1042*t393;
  t5631 = t5628 + t5629;
  t5803 = -1.*t231;
  t5808 = 1. + t5803;
  t5817 = 0.07996*t393;
  t5825 = -1.*t2009*t393;
  t5836 = -1.*t5132;
  t5837 = 1. + t5836;
  t5841 = 0.135*t5837;
  t5842 = 0.08055*t5108;
  t5843 = 0. + t5841 + t5842;
  t5809 = 0.07996*t5808;
  t5810 = -0.135*t393;
  t5811 = 0. + t5809 + t5810;
  t5814 = 0.135*t5808;
  t5819 = 0. + t5814 + t5817;
  t5218 = -1.*t170*t5132*t1042;
  t5319 = t5311*t5108;
  t5334 = t5218 + t5319;
  t5894 = -0.08055*t5837;
  t5895 = 0.135*t5108;
  t5896 = 0. + t5894 + t5895;
  t5359 = -1.*t222*t5132*t437;
  t5390 = t5382*t5108;
  t5400 = t5359 + t5390;
  t5153 = t5132*t2633;
  t5163 = -1.*t170*t222*t5108;
  t5170 = t5153 + t5163;
  t5850 = -0.135*t231;
  t5851 = t5850 + t5817;
  t5853 = 0.07996*t231;
  t5854 = 0.135*t393;
  t5856 = t5853 + t5854;
  t5953 = -1.*t4442*t393;
  t5536 = -1.*t5132*t437*t1042;
  t5552 = t5548*t5108;
  t5562 = t5536 + t5552;
  t5931 = 0.135*t5132;
  t5932 = -0.08055*t5108;
  t5934 = t5931 + t5932;
  t5938 = 0.08055*t5132;
  t5940 = t5938 + t5895;
  t5494 = t5132*t4752;
  t5517 = t5494 + t5509;
  t6039 = -1.*t222*t231*t381;
  t6040 = -1.*t222*t227*t393;
  t6042 = t6039 + t6040;
  t6043 = -0.01004*t6042;
  t6044 = 0.135*t5132*t5597;
  t6045 = t5597*t5843;
  t6046 = -0.08055*t5597*t5108;
  t5620 = t5132*t5020;
  t5621 = t1042*t5108;
  t5622 = t5620 + t5621;
  t5625 = -1.*t222*t5132;
  t5640 = t5631*t5108;
  t5641 = t5625 + t5640;
  p_output1[0]=(-1.*t231*t2784 + t2926)*var2[3] + (-1.*t170*t222*t227*t231 + t170*t222*t381*t393)*var2[4] + (t2032 - 1.*t1437*t231)*var2[5] + t2633*var2[6];
  p_output1[1]=(-1.*t2009*t231 + t2510*t393)*var2[3] + (-1.*t222*t227*t231*t437 + t222*t381*t393*t437)*var2[4] + (-1.*t231*t2910 + t4500)*var2[5] + t4752*var2[6];
  p_output1[2]=(t1042*t227*t231 - 1.*t1042*t381*t393)*var2[4] + t5020*var2[5] + t5020*var2[6];
  p_output1[3]=0;
  p_output1[4]=t5400*var2[3] + t5334*var2[4] + t5094*t5108*var2[5] + t5108*t5122*var2[6] + t5170*var2[7];
  p_output1[5]=t5575*var2[3] + t5562*var2[4] + t5108*t5454*var2[5] + t5108*t5478*var2[6] + t5517*var2[7];
  p_output1[6]=t5641*var2[4] + t5108*t5597*var2[5] + t5108*t5597*var2[6] + t5622*var2[7];
  p_output1[7]=0;
  p_output1[8]=(-1.*t5132*t5382 + t5509)*var2[3] + (-1.*t1042*t170*t5108 - 1.*t5132*t5311)*var2[4] - 1.*t5094*t5132*var2[5] - 1.*t5122*t5132*var2[6] + t5575*var2[7];
  p_output1[9]=(t170*t222*t5108 - 1.*t2633*t5132)*var2[3] + (-1.*t1042*t437*t5108 - 1.*t5132*t5548)*var2[4] - 1.*t5132*t5454*var2[5] - 1.*t5132*t5478*var2[6] + (t4752*t5108 + t222*t437*t5132)*var2[7];
  p_output1[10]=(-1.*t222*t5108 - 1.*t5132*t5631)*var2[4] - 1.*t5132*t5597*var2[5] - 1.*t5132*t5597*var2[6] + (t5020*t5108 - 1.*t1042*t5132)*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.01004*(t231*t2784 - 1.*t2910*t393) + 0.135*(t222*t437*t5108 + t5132*t5382) - 0.08055*t5400 + t2784*t5811 + t2910*t5819 + t5382*t5843 - 1.*t222*t437*t5896)*var2[3] + (-0.01004*(t170*t222*t227*t231 - 1.*t170*t222*t381*t393) + 0.135*(t1042*t170*t5108 + t5132*t5311) - 0.08055*t5334 + t170*t222*t227*t5811 + t170*t222*t381*t5819 + t5311*t5843 - 1.*t1042*t170*t5896)*var2[4] + (-0.08055*t5094*t5108 + 0.135*t5094*t5132 + t1437*t5811 + t2009*t5819 - 0.01004*(t1437*t231 + t5825) + t5094*t5843)*var2[5] + (-0.08055*t5108*t5122 + 0.135*t5122*t5132 - 0.01004*(-1.*t231*t2510 + t5825) + t5122*t5843 + t2009*t5851 + t2510*t5856)*var2[6] + (0.135*(-1.*t2633*t5108 - 1.*t170*t222*t5132) - 0.08055*t5170 + t170*t222*t5934 + t2633*t5940)*var2[7];
  p_output1[13]=var2[1] + (-0.01004*t5122 + 0.135*t5170 - 0.08055*t5575 + t2009*t5811 + t2510*t5819 + t2633*t5843 + t170*t222*t5896)*var2[3] + (-0.01004*(t222*t227*t231*t437 - 1.*t222*t381*t393*t437) + 0.135*(t1042*t437*t5108 + t5132*t5548) - 0.08055*t5562 + t222*t227*t437*t5811 + t222*t381*t437*t5819 + t5548*t5843 - 1.*t1042*t437*t5896)*var2[4] + (-0.08055*t5108*t5454 + 0.135*t5132*t5454 + t2910*t5811 + t4442*t5819 + t5454*t5843 - 0.01004*(t5362 + t5953))*var2[5] + (-0.08055*t5108*t5478 + 0.135*t5132*t5478 + t5478*t5843 + t4442*t5851 + t4643*t5856 - 0.01004*(-1.*t231*t4643 + t5953))*var2[6] + (0.135*(-1.*t4752*t5108 + t5359) - 0.08055*t5517 + t222*t437*t5934 + t4752*t5940)*var2[7];
  p_output1[14]=var2[2] + (-0.01004*(-1.*t1042*t227*t231 + t1042*t381*t393) + 0.135*(t222*t5108 + t5132*t5631) - 0.08055*t5641 - 1.*t1042*t227*t5811 - 1.*t1042*t381*t5819 + t5631*t5843 - 1.*t222*t5896)*var2[4] + (-1.*t222*t381*t5811 + t222*t227*t5819 + t6043 + t6044 + t6045 + t6046)*var2[5] + (t222*t227*t5851 + t222*t381*t5856 + t6043 + t6044 + t6045 + t6046)*var2[6] + (0.135*(-1.*t5020*t5108 + t1042*t5132) - 0.08055*t5622 - 1.*t1042*t5934 + t5020*t5940)*var2[7];
  p_output1[15]=0;
}



void dT_LeftRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
