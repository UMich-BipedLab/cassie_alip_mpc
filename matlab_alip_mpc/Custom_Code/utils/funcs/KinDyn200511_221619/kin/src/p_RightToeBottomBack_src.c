/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottomBack_src.h"

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
  double t124;
  double t840;
  double t894;
  double t895;
  double t970;
  double t1086;
  double t1154;
  double t1091;
  double t1162;
  double t206;
  double t265;
  double t370;
  double t526;
  double t1136;
  double t1181;
  double t1217;
  double t1309;
  double t1332;
  double t1346;
  double t180;
  double t1536;
  double t1557;
  double t1579;
  double t1598;
  double t1622;
  double t1635;
  double t1677;
  double t1736;
  double t1762;
  double t1787;
  double t1914;
  double t1941;
  double t1949;
  double t1989;
  double t2106;
  double t2159;
  double t2216;
  double t2340;
  double t2350;
  double t2386;
  double t2444;
  double t2452;
  double t2474;
  double t2500;
  double t2524;
  double t2551;
  double t2562;
  double t2612;
  double t2646;
  double t2648;
  double t2837;
  double t2893;
  double t2946;
  double t2961;
  double t2964;
  double t2969;
  double t3003;
  double t3024;
  double t3025;
  double t3037;
  double t3110;
  double t3114;
  double t3132;
  double t3168;
  double t3181;
  double t3217;
  double t3246;
  double t3270;
  double t3298;
  double t3300;
  double t3408;
  double t3444;
  double t3455;
  double t496;
  double t589;
  double t702;
  double t958;
  double t1007;
  double t1042;
  double t1229;
  double t1266;
  double t1304;
  double t1416;
  double t1479;
  double t1487;
  double t3538;
  double t3564;
  double t3610;
  double t3634;
  double t3662;
  double t3666;
  double t1645;
  double t1681;
  double t1684;
  double t3717;
  double t3722;
  double t3726;
  double t1867;
  double t1878;
  double t1890;
  double t2204;
  double t2253;
  double t2295;
  double t3770;
  double t3796;
  double t3814;
  double t3859;
  double t3866;
  double t3885;
  double t2410;
  double t2421;
  double t2427;
  double t2554;
  double t2575;
  double t2611;
  double t3897;
  double t3898;
  double t3900;
  double t3908;
  double t3918;
  double t3926;
  double t2718;
  double t2779;
  double t2806;
  double t2997;
  double t3013;
  double t3017;
  double t3944;
  double t3959;
  double t3987;
  double t3997;
  double t4017;
  double t4026;
  double t3051;
  double t3072;
  double t3076;
  double t3243;
  double t3256;
  double t3259;
  double t4048;
  double t4049;
  double t4086;
  double t4112;
  double t4120;
  double t4132;
  double t3322;
  double t3388;
  double t3396;
  double t4159;
  double t4160;
  double t4163;
  double t4185;
  double t4213;
  double t4257;
  double t4486;
  double t4488;
  double t4494;
  double t4579;
  double t4582;
  double t4614;
  double t4652;
  double t4666;
  double t4671;
  double t4693;
  double t4696;
  double t4731;
  double t4753;
  double t4764;
  double t4769;
  double t4879;
  double t4892;
  double t4893;
  double t4914;
  double t4925;
  double t4929;
  double t4984;
  double t4993;
  double t5009;
  double t5035;
  double t5052;
  double t5057;
  double t5067;
  double t5069;
  double t5084;
  double t5095;
  double t5129;
  double t5139;
  t124 = Cos(var1[3]);
  t840 = Cos(var1[13]);
  t894 = -1.*t840;
  t895 = 1. + t894;
  t970 = Sin(var1[13]);
  t1086 = Cos(var1[5]);
  t1154 = Sin(var1[3]);
  t1091 = Sin(var1[4]);
  t1162 = Sin(var1[5]);
  t206 = Cos(var1[14]);
  t265 = -1.*t206;
  t370 = 1. + t265;
  t526 = Sin(var1[14]);
  t1136 = t124*t1086*t1091;
  t1181 = t1154*t1162;
  t1217 = t1136 + t1181;
  t1309 = -1.*t1086*t1154;
  t1332 = t124*t1091*t1162;
  t1346 = t1309 + t1332;
  t180 = Cos(var1[4]);
  t1536 = t970*t1217;
  t1557 = t840*t1346;
  t1579 = t1536 + t1557;
  t1598 = Cos(var1[15]);
  t1622 = -1.*t1598;
  t1635 = 1. + t1622;
  t1677 = Sin(var1[15]);
  t1736 = t840*t1217;
  t1762 = -1.*t970*t1346;
  t1787 = t1736 + t1762;
  t1914 = t206*t124*t180;
  t1941 = t526*t1579;
  t1949 = t1914 + t1941;
  t1989 = Cos(var1[16]);
  t2106 = -1.*t1989;
  t2159 = 1. + t2106;
  t2216 = Sin(var1[16]);
  t2340 = t1677*t1787;
  t2350 = t1598*t1949;
  t2386 = t2340 + t2350;
  t2444 = t1598*t1787;
  t2452 = -1.*t1677*t1949;
  t2474 = t2444 + t2452;
  t2500 = Cos(var1[17]);
  t2524 = -1.*t2500;
  t2551 = 1. + t2524;
  t2562 = Sin(var1[17]);
  t2612 = -1.*t2216*t2386;
  t2646 = t1989*t2474;
  t2648 = t2612 + t2646;
  t2837 = t1989*t2386;
  t2893 = t2216*t2474;
  t2946 = t2837 + t2893;
  t2961 = Cos(var1[18]);
  t2964 = -1.*t2961;
  t2969 = 1. + t2964;
  t3003 = Sin(var1[18]);
  t3024 = t2562*t2648;
  t3025 = t2500*t2946;
  t3037 = t3024 + t3025;
  t3110 = t2500*t2648;
  t3114 = -1.*t2562*t2946;
  t3132 = t3110 + t3114;
  t3168 = Cos(var1[19]);
  t3181 = -1.*t3168;
  t3217 = 1. + t3181;
  t3246 = Sin(var1[19]);
  t3270 = -1.*t3003*t3037;
  t3298 = t2961*t3132;
  t3300 = t3270 + t3298;
  t3408 = t2961*t3037;
  t3444 = t3003*t3132;
  t3455 = t3408 + t3444;
  t496 = -0.08055*t370;
  t589 = -0.135*t526;
  t702 = 0. + t496 + t589;
  t958 = 0.07996*t895;
  t1007 = 0.135*t970;
  t1042 = 0. + t958 + t1007;
  t1229 = -0.135*t895;
  t1266 = 0.07996*t970;
  t1304 = 0. + t1229 + t1266;
  t1416 = -0.135*t370;
  t1479 = 0.08055*t526;
  t1487 = 0. + t1416 + t1479;
  t3538 = t1086*t1154*t1091;
  t3564 = -1.*t124*t1162;
  t3610 = t3538 + t3564;
  t3634 = t124*t1086;
  t3662 = t1154*t1091*t1162;
  t3666 = t3634 + t3662;
  t1645 = -0.01004*t1635;
  t1681 = 0.08055*t1677;
  t1684 = 0. + t1645 + t1681;
  t3717 = t970*t3610;
  t3722 = t840*t3666;
  t3726 = t3717 + t3722;
  t1867 = -0.08055*t1635;
  t1878 = -0.01004*t1677;
  t1890 = 0. + t1867 + t1878;
  t2204 = -0.08055*t2159;
  t2253 = -0.13004*t2216;
  t2295 = 0. + t2204 + t2253;
  t3770 = t840*t3610;
  t3796 = -1.*t970*t3666;
  t3814 = t3770 + t3796;
  t3859 = t206*t180*t1154;
  t3866 = t526*t3726;
  t3885 = t3859 + t3866;
  t2410 = -0.13004*t2159;
  t2421 = 0.08055*t2216;
  t2427 = 0. + t2410 + t2421;
  t2554 = -0.19074*t2551;
  t2575 = 0.03315*t2562;
  t2611 = 0. + t2554 + t2575;
  t3897 = t1677*t3814;
  t3898 = t1598*t3885;
  t3900 = t3897 + t3898;
  t3908 = t1598*t3814;
  t3918 = -1.*t1677*t3885;
  t3926 = t3908 + t3918;
  t2718 = -0.03315*t2551;
  t2779 = -0.19074*t2562;
  t2806 = 0. + t2718 + t2779;
  t2997 = -0.01315*t2969;
  t3013 = -0.62554*t3003;
  t3017 = 0. + t2997 + t3013;
  t3944 = -1.*t2216*t3900;
  t3959 = t1989*t3926;
  t3987 = t3944 + t3959;
  t3997 = t1989*t3900;
  t4017 = t2216*t3926;
  t4026 = t3997 + t4017;
  t3051 = -0.62554*t2969;
  t3072 = 0.01315*t3003;
  t3076 = 0. + t3051 + t3072;
  t3243 = -1.03354*t3217;
  t3256 = 0.05315*t3246;
  t3259 = 0. + t3243 + t3256;
  t4048 = t2562*t3987;
  t4049 = t2500*t4026;
  t4086 = t4048 + t4049;
  t4112 = t2500*t3987;
  t4120 = -1.*t2562*t4026;
  t4132 = t4112 + t4120;
  t3322 = -0.05315*t3217;
  t3388 = -1.03354*t3246;
  t3396 = 0. + t3322 + t3388;
  t4159 = -1.*t3003*t4086;
  t4160 = t2961*t4132;
  t4163 = t4159 + t4160;
  t4185 = t2961*t4086;
  t4213 = t3003*t4132;
  t4257 = t4185 + t4213;
  t4486 = t180*t1086*t970;
  t4488 = t840*t180*t1162;
  t4494 = t4486 + t4488;
  t4579 = t840*t180*t1086;
  t4582 = -1.*t180*t970*t1162;
  t4614 = t4579 + t4582;
  t4652 = -1.*t206*t1091;
  t4666 = t526*t4494;
  t4671 = t4652 + t4666;
  t4693 = t1677*t4614;
  t4696 = t1598*t4671;
  t4731 = t4693 + t4696;
  t4753 = t1598*t4614;
  t4764 = -1.*t1677*t4671;
  t4769 = t4753 + t4764;
  t4879 = -1.*t2216*t4731;
  t4892 = t1989*t4769;
  t4893 = t4879 + t4892;
  t4914 = t1989*t4731;
  t4925 = t2216*t4769;
  t4929 = t4914 + t4925;
  t4984 = t2562*t4893;
  t4993 = t2500*t4929;
  t5009 = t4984 + t4993;
  t5035 = t2500*t4893;
  t5052 = -1.*t2562*t4929;
  t5057 = t5035 + t5052;
  t5067 = -1.*t3003*t5009;
  t5069 = t2961*t5057;
  t5084 = t5067 + t5069;
  t5095 = t2961*t5009;
  t5129 = t3003*t5057;
  t5139 = t5095 + t5129;
  p_output1[0]=0. + t1042*t1217 + t1304*t1346 + t1487*t1579 + t1684*t1787 + t1890*t1949 + t2295*t2386 + t2427*t2474 + t2611*t2648 + t2806*t2946 + t3017*t3037 + t3076*t3132 + t3259*t3300 + t3396*t3455 - 0.063247*(t3246*t3300 + t3168*t3455) - 1.109926*(t3168*t3300 - 1.*t3246*t3455) - 0.1305*(t1579*t206 - 1.*t124*t180*t526) + t124*t180*t702 + var1[0];
  p_output1[1]=0. + t1042*t3610 + t1304*t3666 + t1487*t3726 + t1684*t3814 + t1890*t3885 + t2295*t3900 + t2427*t3926 + t2611*t3987 + t2806*t4026 + t3017*t4086 + t3076*t4132 + t3259*t4163 + t3396*t4257 - 0.063247*(t3246*t4163 + t3168*t4257) - 1.109926*(t3168*t4163 - 1.*t3246*t4257) - 0.1305*(t206*t3726 - 1.*t1154*t180*t526) + t1154*t180*t702 + var1[1];
  p_output1[2]=0. + t1042*t1086*t180 + t1162*t1304*t180 + t1487*t4494 + t1684*t4614 + t1890*t4671 + t2295*t4731 + t2427*t4769 + t2611*t4893 + t2806*t4929 + t3017*t5009 + t3076*t5057 + t3259*t5084 + t3396*t5139 - 0.063247*(t3246*t5084 + t3168*t5139) - 1.109926*(t3168*t5084 - 1.*t3246*t5139) - 0.1305*(t206*t4494 + t1091*t526) - 1.*t1091*t702 + var1[2];
}



void p_RightToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
