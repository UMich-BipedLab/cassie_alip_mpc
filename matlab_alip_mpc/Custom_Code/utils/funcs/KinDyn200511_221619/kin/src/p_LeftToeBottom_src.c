/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t106;
  double t234;
  double t39;
  double t145;
  double t340;
  double t654;
  double t819;
  double t885;
  double t955;
  double t1126;
  double t1257;
  double t1335;
  double t197;
  double t380;
  double t624;
  double t1547;
  double t1593;
  double t1737;
  double t1834;
  double t1511;
  double t1532;
  double t1539;
  double t1946;
  double t2283;
  double t2284;
  double t2362;
  double t2436;
  double t2179;
  double t2190;
  double t2255;
  double t2599;
  double t2630;
  double t2649;
  double t2908;
  double t2910;
  double t2930;
  double t2972;
  double t3035;
  double t3066;
  double t3069;
  double t3230;
  double t3250;
  double t3293;
  double t3370;
  double t3380;
  double t3427;
  double t3448;
  double t3526;
  double t3534;
  double t3542;
  double t3707;
  double t3709;
  double t3746;
  double t3853;
  double t3911;
  double t3967;
  double t3978;
  double t4212;
  double t4351;
  double t4522;
  double t4620;
  double t4621;
  double t4691;
  double t4744;
  double t4771;
  double t4823;
  double t4861;
  double t5039;
  double t5073;
  double t5137;
  double t5365;
  double t5407;
  double t5472;
  double t927;
  double t991;
  double t1056;
  double t1351;
  double t1455;
  double t1458;
  double t5832;
  double t5900;
  double t5901;
  double t5795;
  double t5802;
  double t5820;
  double t1774;
  double t1906;
  double t1909;
  double t1954;
  double t1982;
  double t2092;
  double t5974;
  double t5975;
  double t6010;
  double t2421;
  double t2506;
  double t2513;
  double t2734;
  double t2855;
  double t2890;
  double t2941;
  double t3015;
  double t3026;
  double t6354;
  double t6368;
  double t6412;
  double t6553;
  double t6679;
  double t6728;
  double t3142;
  double t3150;
  double t3223;
  double t3431;
  double t3514;
  double t3518;
  double t6754;
  double t6760;
  double t6784;
  double t6843;
  double t6845;
  double t6852;
  double t3632;
  double t3662;
  double t3706;
  double t3976;
  double t4018;
  double t4125;
  double t6880;
  double t6884;
  double t6916;
  double t6943;
  double t6946;
  double t6951;
  double t4593;
  double t4611;
  double t4616;
  double t4837;
  double t4862;
  double t4896;
  double t6961;
  double t6996;
  double t7001;
  double t7021;
  double t7028;
  double t7071;
  double t5259;
  double t5332;
  double t5346;
  double t7088;
  double t7091;
  double t7100;
  double t7116;
  double t7134;
  double t7138;
  double t7348;
  double t7370;
  double t7373;
  double t7547;
  double t7581;
  double t7590;
  double t7644;
  double t7692;
  double t7712;
  double t7722;
  double t7725;
  double t7730;
  double t7740;
  double t7742;
  double t7763;
  double t7780;
  double t7794;
  double t7813;
  double t7838;
  double t7855;
  double t7859;
  double t7907;
  double t7908;
  double t7910;
  double t7940;
  double t7964;
  double t7966;
  double t7978;
  double t7987;
  double t8003;
  double t8041;
  double t8057;
  double t8078;
  t106 = Cos(var1[5]);
  t234 = Sin(var1[3]);
  t39 = Cos(var1[3]);
  t145 = Sin(var1[4]);
  t340 = Sin(var1[5]);
  t654 = Cos(var1[6]);
  t819 = -1.*t654;
  t885 = 1. + t819;
  t955 = Sin(var1[6]);
  t1126 = -1.*t106*t234;
  t1257 = t39*t145*t340;
  t1335 = t1126 + t1257;
  t197 = t39*t106*t145;
  t380 = t234*t340;
  t624 = t197 + t380;
  t1547 = Cos(var1[7]);
  t1593 = -1.*t1547;
  t1737 = 1. + t1593;
  t1834 = Sin(var1[7]);
  t1511 = t654*t1335;
  t1532 = t624*t955;
  t1539 = t1511 + t1532;
  t1946 = Cos(var1[4]);
  t2283 = Cos(var1[8]);
  t2284 = -1.*t2283;
  t2362 = 1. + t2284;
  t2436 = Sin(var1[8]);
  t2179 = t39*t1946*t1547;
  t2190 = t1539*t1834;
  t2255 = t2179 + t2190;
  t2599 = t654*t624;
  t2630 = -1.*t1335*t955;
  t2649 = t2599 + t2630;
  t2908 = Cos(var1[9]);
  t2910 = -1.*t2908;
  t2930 = 1. + t2910;
  t2972 = Sin(var1[9]);
  t3035 = t2283*t2255;
  t3066 = t2649*t2436;
  t3069 = t3035 + t3066;
  t3230 = t2283*t2649;
  t3250 = -1.*t2255*t2436;
  t3293 = t3230 + t3250;
  t3370 = Cos(var1[10]);
  t3380 = -1.*t3370;
  t3427 = 1. + t3380;
  t3448 = Sin(var1[10]);
  t3526 = -1.*t2972*t3069;
  t3534 = t2908*t3293;
  t3542 = t3526 + t3534;
  t3707 = t2908*t3069;
  t3709 = t2972*t3293;
  t3746 = t3707 + t3709;
  t3853 = Cos(var1[11]);
  t3911 = -1.*t3853;
  t3967 = 1. + t3911;
  t3978 = Sin(var1[11]);
  t4212 = t3448*t3542;
  t4351 = t3370*t3746;
  t4522 = t4212 + t4351;
  t4620 = t3370*t3542;
  t4621 = -1.*t3448*t3746;
  t4691 = t4620 + t4621;
  t4744 = Cos(var1[12]);
  t4771 = -1.*t4744;
  t4823 = 1. + t4771;
  t4861 = Sin(var1[12]);
  t5039 = -1.*t3978*t4522;
  t5073 = t3853*t4691;
  t5137 = t5039 + t5073;
  t5365 = t3853*t4522;
  t5407 = t3978*t4691;
  t5472 = t5365 + t5407;
  t927 = 0.07996*t885;
  t991 = -0.135*t955;
  t1056 = 0. + t927 + t991;
  t1351 = 0.135*t885;
  t1455 = 0.07996*t955;
  t1458 = 0. + t1351 + t1455;
  t5832 = t39*t106;
  t5900 = t234*t145*t340;
  t5901 = t5832 + t5900;
  t5795 = t106*t234*t145;
  t5802 = -1.*t39*t340;
  t5820 = t5795 + t5802;
  t1774 = 0.135*t1737;
  t1906 = 0.08055*t1834;
  t1909 = 0. + t1774 + t1906;
  t1954 = -0.08055*t1737;
  t1982 = 0.135*t1834;
  t2092 = 0. + t1954 + t1982;
  t5974 = t654*t5901;
  t5975 = t5820*t955;
  t6010 = t5974 + t5975;
  t2421 = -0.08055*t2362;
  t2506 = -0.01004*t2436;
  t2513 = 0. + t2421 + t2506;
  t2734 = -0.01004*t2362;
  t2855 = 0.08055*t2436;
  t2890 = 0. + t2734 + t2855;
  t2941 = -0.08055*t2930;
  t3015 = -0.13004*t2972;
  t3026 = 0. + t2941 + t3015;
  t6354 = t1946*t1547*t234;
  t6368 = t6010*t1834;
  t6412 = t6354 + t6368;
  t6553 = t654*t5820;
  t6679 = -1.*t5901*t955;
  t6728 = t6553 + t6679;
  t3142 = -0.13004*t2930;
  t3150 = 0.08055*t2972;
  t3223 = 0. + t3142 + t3150;
  t3431 = -0.19074*t3427;
  t3514 = 0.03315*t3448;
  t3518 = 0. + t3431 + t3514;
  t6754 = t2283*t6412;
  t6760 = t6728*t2436;
  t6784 = t6754 + t6760;
  t6843 = t2283*t6728;
  t6845 = -1.*t6412*t2436;
  t6852 = t6843 + t6845;
  t3632 = -0.03315*t3427;
  t3662 = -0.19074*t3448;
  t3706 = 0. + t3632 + t3662;
  t3976 = -0.01315*t3967;
  t4018 = -0.62554*t3978;
  t4125 = 0. + t3976 + t4018;
  t6880 = -1.*t2972*t6784;
  t6884 = t2908*t6852;
  t6916 = t6880 + t6884;
  t6943 = t2908*t6784;
  t6946 = t2972*t6852;
  t6951 = t6943 + t6946;
  t4593 = -0.62554*t3967;
  t4611 = 0.01315*t3978;
  t4616 = 0. + t4593 + t4611;
  t4837 = -1.03354*t4823;
  t4862 = 0.05315*t4861;
  t4896 = 0. + t4837 + t4862;
  t6961 = t3448*t6916;
  t6996 = t3370*t6951;
  t7001 = t6961 + t6996;
  t7021 = t3370*t6916;
  t7028 = -1.*t3448*t6951;
  t7071 = t7021 + t7028;
  t5259 = -0.05315*t4823;
  t5332 = -1.03354*t4861;
  t5346 = 0. + t5259 + t5332;
  t7088 = -1.*t3978*t7001;
  t7091 = t3853*t7071;
  t7100 = t7088 + t7091;
  t7116 = t3853*t7001;
  t7134 = t3978*t7071;
  t7138 = t7116 + t7134;
  t7348 = t1946*t654*t340;
  t7370 = t1946*t106*t955;
  t7373 = t7348 + t7370;
  t7547 = -1.*t1547*t145;
  t7581 = t7373*t1834;
  t7590 = t7547 + t7581;
  t7644 = t1946*t106*t654;
  t7692 = -1.*t1946*t340*t955;
  t7712 = t7644 + t7692;
  t7722 = t2283*t7590;
  t7725 = t7712*t2436;
  t7730 = t7722 + t7725;
  t7740 = t2283*t7712;
  t7742 = -1.*t7590*t2436;
  t7763 = t7740 + t7742;
  t7780 = -1.*t2972*t7730;
  t7794 = t2908*t7763;
  t7813 = t7780 + t7794;
  t7838 = t2908*t7730;
  t7855 = t2972*t7763;
  t7859 = t7838 + t7855;
  t7907 = t3448*t7813;
  t7908 = t3370*t7859;
  t7910 = t7907 + t7908;
  t7940 = t3370*t7813;
  t7964 = -1.*t3448*t7859;
  t7966 = t7940 + t7964;
  t7978 = -1.*t3978*t7910;
  t7987 = t3853*t7966;
  t8003 = t7978 + t7987;
  t8041 = t3853*t7910;
  t8057 = t3978*t7966;
  t8078 = t8041 + t8057;
  p_output1[0]=0. + t1335*t1458 + t1539*t1909 + t2255*t2513 + t2649*t2890 + t3026*t3069 + t3223*t3293 + t3518*t3542 + t3706*t3746 + t1946*t2092*t39 + 0.1305*(t1539*t1547 - 1.*t1834*t1946*t39) + t4125*t4522 + t4616*t4691 + t4896*t5137 + t5346*t5472 - 0.00095*(t4861*t5137 + t4744*t5472) - 1.05124*(t4744*t5137 - 1.*t4861*t5472) + t1056*t624 + var1[0];
  p_output1[1]=0. + t1946*t2092*t234 + t1056*t5820 + t1458*t5901 + t1909*t6010 + 0.1305*(-1.*t1834*t1946*t234 + t1547*t6010) + t2513*t6412 + t2890*t6728 + t3026*t6784 + t3223*t6852 + t3518*t6916 + t3706*t6951 + t4125*t7001 + t4616*t7071 + t4896*t7100 + t5346*t7138 - 0.00095*(t4861*t7100 + t4744*t7138) - 1.05124*(t4744*t7100 - 1.*t4861*t7138) + var1[1];
  p_output1[2]=0. + t1056*t106*t1946 - 1.*t145*t2092 + t1458*t1946*t340 + t1909*t7373 + 0.1305*(t145*t1834 + t1547*t7373) + t2513*t7590 + t2890*t7712 + t3026*t7730 + t3223*t7763 + t3518*t7813 + t3706*t7859 + t4125*t7910 + t4616*t7966 + t4896*t8003 + t5346*t8078 - 0.00095*(t4861*t8003 + t4744*t8078) - 1.05124*(t4744*t8003 - 1.*t4861*t8078) + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
