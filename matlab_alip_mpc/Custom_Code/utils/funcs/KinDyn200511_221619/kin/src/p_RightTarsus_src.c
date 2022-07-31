/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightTarsus_src.h"

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
  double t330;
  double t1431;
  double t1442;
  double t1476;
  double t1539;
  double t1891;
  double t2100;
  double t1986;
  double t2117;
  double t777;
  double t855;
  double t916;
  double t995;
  double t2085;
  double t2169;
  double t2201;
  double t2434;
  double t2518;
  double t2560;
  double t539;
  double t2706;
  double t2728;
  double t2745;
  double t3043;
  double t3058;
  double t3082;
  double t3123;
  double t3179;
  double t3204;
  double t3245;
  double t3664;
  double t3681;
  double t3692;
  double t3818;
  double t3821;
  double t3848;
  double t4166;
  double t4252;
  double t4464;
  double t4507;
  double t4771;
  double t4778;
  double t4784;
  double t4795;
  double t4839;
  double t4887;
  double t4949;
  double t5087;
  double t5254;
  double t5407;
  double t5646;
  double t5654;
  double t5732;
  double t5757;
  double t5868;
  double t5958;
  double t6187;
  double t6269;
  double t6325;
  double t6347;
  double t6492;
  double t6499;
  double t6501;
  double t931;
  double t1001;
  double t1218;
  double t1501;
  double t1732;
  double t1819;
  double t2272;
  double t2385;
  double t2396;
  double t2584;
  double t2612;
  double t2642;
  double t6955;
  double t6957;
  double t7021;
  double t7054;
  double t7066;
  double t7078;
  double t3091;
  double t3154;
  double t3156;
  double t7114;
  double t7252;
  double t7263;
  double t3577;
  double t3604;
  double t3656;
  double t4041;
  double t4171;
  double t4207;
  double t7276;
  double t7298;
  double t7306;
  double t7399;
  double t7403;
  double t7410;
  double t4681;
  double t4732;
  double t4736;
  double t4901;
  double t5034;
  double t5064;
  double t7416;
  double t7431;
  double t7438;
  double t7453;
  double t7479;
  double t7499;
  double t5508;
  double t5544;
  double t5563;
  double t6090;
  double t6225;
  double t6265;
  double t7546;
  double t7557;
  double t7585;
  double t7618;
  double t7639;
  double t7647;
  double t6356;
  double t6381;
  double t6489;
  double t7661;
  double t7662;
  double t7663;
  double t7719;
  double t7720;
  double t7734;
  double t7873;
  double t7884;
  double t7900;
  double t7906;
  double t7913;
  double t7916;
  double t7950;
  double t7951;
  double t7954;
  double t7982;
  double t7993;
  double t7997;
  double t8000;
  double t8006;
  double t8015;
  double t8031;
  double t8032;
  double t8039;
  double t8051;
  double t8052;
  double t8057;
  double t8063;
  double t8064;
  double t8071;
  double t8076;
  double t8079;
  double t8084;
  t330 = Cos(var1[3]);
  t1431 = Cos(var1[13]);
  t1442 = -1.*t1431;
  t1476 = 1. + t1442;
  t1539 = Sin(var1[13]);
  t1891 = Cos(var1[5]);
  t2100 = Sin(var1[3]);
  t1986 = Sin(var1[4]);
  t2117 = Sin(var1[5]);
  t777 = Cos(var1[14]);
  t855 = -1.*t777;
  t916 = 1. + t855;
  t995 = Sin(var1[14]);
  t2085 = t330*t1891*t1986;
  t2169 = t2100*t2117;
  t2201 = t2085 + t2169;
  t2434 = -1.*t1891*t2100;
  t2518 = t330*t1986*t2117;
  t2560 = t2434 + t2518;
  t539 = Cos(var1[4]);
  t2706 = t1539*t2201;
  t2728 = t1431*t2560;
  t2745 = t2706 + t2728;
  t3043 = Cos(var1[15]);
  t3058 = -1.*t3043;
  t3082 = 1. + t3058;
  t3123 = Sin(var1[15]);
  t3179 = t1431*t2201;
  t3204 = -1.*t1539*t2560;
  t3245 = t3179 + t3204;
  t3664 = t777*t330*t539;
  t3681 = t995*t2745;
  t3692 = t3664 + t3681;
  t3818 = Cos(var1[16]);
  t3821 = -1.*t3818;
  t3848 = 1. + t3821;
  t4166 = Sin(var1[16]);
  t4252 = t3123*t3245;
  t4464 = t3043*t3692;
  t4507 = t4252 + t4464;
  t4771 = t3043*t3245;
  t4778 = -1.*t3123*t3692;
  t4784 = t4771 + t4778;
  t4795 = Cos(var1[17]);
  t4839 = -1.*t4795;
  t4887 = 1. + t4839;
  t4949 = Sin(var1[17]);
  t5087 = -1.*t4166*t4507;
  t5254 = t3818*t4784;
  t5407 = t5087 + t5254;
  t5646 = t3818*t4507;
  t5654 = t4166*t4784;
  t5732 = t5646 + t5654;
  t5757 = Cos(var1[18]);
  t5868 = -1.*t5757;
  t5958 = 1. + t5868;
  t6187 = Sin(var1[18]);
  t6269 = t4949*t5407;
  t6325 = t4795*t5732;
  t6347 = t6269 + t6325;
  t6492 = t4795*t5407;
  t6499 = -1.*t4949*t5732;
  t6501 = t6492 + t6499;
  t931 = -0.08055*t916;
  t1001 = -0.135*t995;
  t1218 = 0. + t931 + t1001;
  t1501 = 0.07996*t1476;
  t1732 = 0.135*t1539;
  t1819 = 0. + t1501 + t1732;
  t2272 = -0.135*t1476;
  t2385 = 0.07996*t1539;
  t2396 = 0. + t2272 + t2385;
  t2584 = -0.135*t916;
  t2612 = 0.08055*t995;
  t2642 = 0. + t2584 + t2612;
  t6955 = t1891*t2100*t1986;
  t6957 = -1.*t330*t2117;
  t7021 = t6955 + t6957;
  t7054 = t330*t1891;
  t7066 = t2100*t1986*t2117;
  t7078 = t7054 + t7066;
  t3091 = -0.01004*t3082;
  t3154 = 0.08055*t3123;
  t3156 = 0. + t3091 + t3154;
  t7114 = t1539*t7021;
  t7252 = t1431*t7078;
  t7263 = t7114 + t7252;
  t3577 = -0.08055*t3082;
  t3604 = -0.01004*t3123;
  t3656 = 0. + t3577 + t3604;
  t4041 = -0.08055*t3848;
  t4171 = -0.13004*t4166;
  t4207 = 0. + t4041 + t4171;
  t7276 = t1431*t7021;
  t7298 = -1.*t1539*t7078;
  t7306 = t7276 + t7298;
  t7399 = t777*t539*t2100;
  t7403 = t995*t7263;
  t7410 = t7399 + t7403;
  t4681 = -0.13004*t3848;
  t4732 = 0.08055*t4166;
  t4736 = 0. + t4681 + t4732;
  t4901 = -0.19074*t4887;
  t5034 = 0.03315*t4949;
  t5064 = 0. + t4901 + t5034;
  t7416 = t3123*t7306;
  t7431 = t3043*t7410;
  t7438 = t7416 + t7431;
  t7453 = t3043*t7306;
  t7479 = -1.*t3123*t7410;
  t7499 = t7453 + t7479;
  t5508 = -0.03315*t4887;
  t5544 = -0.19074*t4949;
  t5563 = 0. + t5508 + t5544;
  t6090 = -0.01315*t5958;
  t6225 = -0.62554*t6187;
  t6265 = 0. + t6090 + t6225;
  t7546 = -1.*t4166*t7438;
  t7557 = t3818*t7499;
  t7585 = t7546 + t7557;
  t7618 = t3818*t7438;
  t7639 = t4166*t7499;
  t7647 = t7618 + t7639;
  t6356 = -0.62554*t5958;
  t6381 = 0.01315*t6187;
  t6489 = 0. + t6356 + t6381;
  t7661 = t4949*t7585;
  t7662 = t4795*t7647;
  t7663 = t7661 + t7662;
  t7719 = t4795*t7585;
  t7720 = -1.*t4949*t7647;
  t7734 = t7719 + t7720;
  t7873 = t539*t1891*t1539;
  t7884 = t1431*t539*t2117;
  t7900 = t7873 + t7884;
  t7906 = t1431*t539*t1891;
  t7913 = -1.*t539*t1539*t2117;
  t7916 = t7906 + t7913;
  t7950 = -1.*t777*t1986;
  t7951 = t995*t7900;
  t7954 = t7950 + t7951;
  t7982 = t3123*t7916;
  t7993 = t3043*t7954;
  t7997 = t7982 + t7993;
  t8000 = t3043*t7916;
  t8006 = -1.*t3123*t7954;
  t8015 = t8000 + t8006;
  t8031 = -1.*t4166*t7997;
  t8032 = t3818*t8015;
  t8039 = t8031 + t8032;
  t8051 = t3818*t7997;
  t8052 = t4166*t8015;
  t8057 = t8051 + t8052;
  t8063 = t4949*t8039;
  t8064 = t4795*t8057;
  t8071 = t8063 + t8064;
  t8076 = t4795*t8039;
  t8079 = -1.*t4949*t8057;
  t8084 = t8076 + t8079;
  p_output1[0]=0. + t1819*t2201 + t2396*t2560 + t2642*t2745 + t3156*t3245 + t3656*t3692 + t4207*t4507 + t4736*t4784 + t1218*t330*t539 + t5064*t5407 + t5563*t5732 + t6265*t6347 + t6489*t6501 - 0.73604*(-1.*t6187*t6347 + t5757*t6501) - 0.04375*(t5757*t6347 + t6187*t6501) - 0.1318*(t2745*t777 - 1.*t330*t539*t995) + var1[0];
  p_output1[1]=0. + t1218*t2100*t539 + t1819*t7021 + t2396*t7078 + t2642*t7263 + t3156*t7306 + t3656*t7410 + t4207*t7438 + t4736*t7499 + t5064*t7585 + t5563*t7647 + t6265*t7663 + t6489*t7734 - 0.73604*(-1.*t6187*t7663 + t5757*t7734) - 0.04375*(t5757*t7663 + t6187*t7734) - 0.1318*(t7263*t777 - 1.*t2100*t539*t995) + var1[1];
  p_output1[2]=0. - 1.*t1218*t1986 + t1819*t1891*t539 + t2117*t2396*t539 + t2642*t7900 + t3156*t7916 + t3656*t7954 + t4207*t7997 + t4736*t8015 + t5064*t8039 + t5563*t8057 + t6265*t8071 + t6489*t8084 - 0.73604*(-1.*t6187*t8071 + t5757*t8084) - 0.04375*(t5757*t8071 + t6187*t8084) - 0.1318*(t777*t7900 + t1986*t995) + var1[2];
}



void p_RightTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
