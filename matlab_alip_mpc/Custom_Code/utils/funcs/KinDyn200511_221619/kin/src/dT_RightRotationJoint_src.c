/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightRotationJoint_src.h"

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
  double t189;
  double t242;
  double t485;
  double t248;
  double t494;
  double t152;
  double t719;
  double t600;
  double t661;
  double t742;
  double t810;
  double t852;
  double t1269;
  double t1276;
  double t1313;
  double t1588;
  double t1610;
  double t1657;
  double t2102;
  double t2159;
  double t2242;
  double t2267;
  double t2604;
  double t2636;
  double t2695;
  double t2877;
  double t932;
  double t1085;
  double t1130;
  double t3098;
  double t2839;
  double t1381;
  double t1403;
  double t1451;
  double t1501;
  double t1511;
  double t1667;
  double t3614;
  double t2403;
  double t2411;
  double t2446;
  double t2455;
  double t2460;
  double t3766;
  double t3784;
  double t3789;
  double t2878;
  double t2880;
  double t2897;
  double t3167;
  double t3172;
  double t3190;
  double t3233;
  double t3675;
  double t3678;
  double t3686;
  double t3720;
  double t3396;
  double t3408;
  double t3432;
  double t3486;
  double t3487;
  double t3530;
  double t3619;
  double t3643;
  double t3668;
  double t3899;
  double t3910;
  double t3923;
  double t4696;
  double t4697;
  double t4745;
  double t4759;
  double t2845;
  double t2911;
  double t2989;
  double t4788;
  double t4789;
  double t4791;
  double t4714;
  double t4718;
  double t4730;
  double t4814;
  double t4820;
  double t4828;
  double t4984;
  double t4761;
  double t3267;
  double t3273;
  double t3284;
  double t4760;
  double t4762;
  double t3335;
  double t3452;
  double t3472;
  double t3485;
  double t3532;
  double t3535;
  double t5158;
  double t5164;
  double t5185;
  double t5187;
  double t5190;
  double t5671;
  double t5254;
  double t5257;
  double t5259;
  double t5312;
  double t5339;
  double t3735;
  double t3744;
  double t5938;
  double t5939;
  double t5946;
  double t5948;
  double t5954;
  double t5957;
  double t5958;
  double t3847;
  double t3851;
  double t3854;
  double t3888;
  double t3937;
  double t3946;
  t189 = Cos(var1[3]);
  t242 = Cos(var1[4]);
  t485 = Sin(var1[13]);
  t248 = Cos(var1[5]);
  t494 = Sin(var1[5]);
  t152 = Cos(var1[13]);
  t719 = Sin(var1[3]);
  t600 = Sin(var1[4]);
  t661 = t189*t248*t600;
  t742 = t719*t494;
  t810 = t661 + t742;
  t852 = t485*t810;
  t1269 = -1.*t248*t719;
  t1276 = t189*t600*t494;
  t1313 = t1269 + t1276;
  t1588 = -1.*t189*t248;
  t1610 = -1.*t719*t600*t494;
  t1657 = t1588 + t1610;
  t2102 = t248*t719*t600;
  t2159 = -1.*t189*t494;
  t2242 = t2102 + t2159;
  t2267 = t485*t2242;
  t2604 = t242*t248*t485;
  t2636 = t152*t242*t494;
  t2695 = t2604 + t2636;
  t2877 = Sin(var1[14]);
  t932 = t248*t719;
  t1085 = -1.*t189*t600*t494;
  t1130 = t932 + t1085;
  t3098 = t152*t810;
  t2839 = Cos(var1[14]);
  t1381 = t152*t1313;
  t1403 = t852 + t1381;
  t1451 = -1.*t248*t719*t600;
  t1501 = t189*t494;
  t1511 = t1451 + t1501;
  t1667 = t485*t1657;
  t3614 = t152*t2242;
  t2403 = t189*t248;
  t2411 = t719*t600*t494;
  t2446 = t2403 + t2411;
  t2455 = t152*t2446;
  t2460 = t2267 + t2455;
  t3766 = t152*t242*t248;
  t3784 = -1.*t242*t485*t494;
  t3789 = t3766 + t3784;
  t2878 = t189*t242*t248*t485;
  t2880 = t152*t189*t242*t494;
  t2897 = t2878 + t2880;
  t3167 = t485*t1130;
  t3172 = t3098 + t3167;
  t3190 = -1.*t485*t1313;
  t3233 = t3098 + t3190;
  t3675 = t2839*t189*t242;
  t3678 = t2877*t1403;
  t3686 = t3675 + t3678;
  t3720 = -1.*t242*t2877*t719;
  t3396 = t485*t1511;
  t3408 = t152*t1657;
  t3432 = t3396 + t3408;
  t3486 = t242*t248*t485*t719;
  t3487 = t152*t242*t719*t494;
  t3530 = t3486 + t3487;
  t3619 = t3614 + t1667;
  t3643 = -1.*t485*t2446;
  t3668 = t3614 + t3643;
  t3899 = -1.*t248*t485*t600;
  t3910 = -1.*t152*t600*t494;
  t3923 = t3899 + t3910;
  t4696 = -1.*t152;
  t4697 = 1. + t4696;
  t4745 = -1.*t2839;
  t4759 = 1. + t4745;
  t2845 = -1.*t2839*t189*t600;
  t2911 = t2877*t2897;
  t2989 = t2845 + t2911;
  t4788 = -0.135*t4697;
  t4789 = 0.07996*t485;
  t4791 = 0. + t4788 + t4789;
  t4714 = 0.07996*t4697;
  t4718 = 0.135*t485;
  t4730 = 0. + t4714 + t4718;
  t4814 = -0.135*t4759;
  t4820 = 0.08055*t2877;
  t4828 = 0. + t4814 + t4820;
  t4984 = -1.*t485*t810;
  t4761 = -0.135*t2877;
  t3267 = -1.*t189*t242*t2877;
  t3273 = t2839*t1403;
  t3284 = t3267 + t3273;
  t4760 = -0.08055*t4759;
  t4762 = 0. + t4760 + t4761;
  t3335 = -1.*t2839*t242*t719;
  t3452 = t2877*t3432;
  t3472 = t3335 + t3452;
  t3485 = -1.*t2839*t719*t600;
  t3532 = t2877*t3530;
  t3535 = t3485 + t3532;
  t5158 = 0.135*t152;
  t5164 = t5158 + t4789;
  t5185 = 0.07996*t152;
  t5187 = -0.135*t485;
  t5190 = t5185 + t5187;
  t5671 = -1.*t485*t2242;
  t5254 = -0.135*t2839;
  t5257 = -0.08055*t2877;
  t5259 = t5254 + t5257;
  t5312 = 0.08055*t2839;
  t5339 = t5312 + t4761;
  t3735 = t2839*t2460;
  t3744 = t3720 + t3735;
  t5938 = -1.*t242*t248*t485;
  t5939 = -1.*t152*t242*t494;
  t5946 = t5938 + t5939;
  t5948 = -0.01004*t5946;
  t5954 = -0.135*t2839*t3789;
  t5957 = t4828*t3789;
  t5958 = -0.08055*t2877*t3789;
  t3847 = t2877*t600;
  t3851 = t2839*t2695;
  t3854 = t3847 + t3851;
  t3888 = -1.*t2839*t242;
  t3937 = t2877*t3923;
  t3946 = t3888 + t3937;
  p_output1[0]=(-1.*t1511*t152 + t1667)*var2[3] + (-1.*t152*t189*t242*t248 + t189*t242*t485*t494)*var2[4] + (-1.*t1130*t152 + t852)*var2[5] + t1403*var2[13];
  p_output1[1]=(t1313*t485 - 1.*t152*t810)*var2[3] + (-1.*t152*t242*t248*t719 + t242*t485*t494*t719)*var2[4] + (-1.*t152*t1657 + t2267)*var2[5] + t2460*var2[13];
  p_output1[2]=(t152*t248*t600 - 1.*t485*t494*t600)*var2[4] + t2695*var2[5] + t2695*var2[13];
  p_output1[3]=0;
  p_output1[4]=t3472*var2[3] + t2989*var2[4] + t2877*t3172*var2[5] + t2877*t3233*var2[13] + t3284*var2[14];
  p_output1[5]=t3686*var2[3] + t3535*var2[4] + t2877*t3619*var2[5] + t2877*t3668*var2[13] + t3744*var2[14];
  p_output1[6]=t3946*var2[4] + t2877*t3789*var2[5] + t2877*t3789*var2[13] + t3854*var2[14];
  p_output1[7]=0;
  p_output1[8]=(-1.*t2839*t3432 + t3720)*var2[3] + (-1.*t2839*t2897 - 1.*t189*t2877*t600)*var2[4] - 1.*t2839*t3172*var2[5] - 1.*t2839*t3233*var2[13] + t3686*var2[14];
  p_output1[9]=(-1.*t1403*t2839 + t189*t242*t2877)*var2[3] + (-1.*t2839*t3530 - 1.*t2877*t600*t719)*var2[4] - 1.*t2839*t3619*var2[5] - 1.*t2839*t3668*var2[13] + (t2460*t2877 + t242*t2839*t719)*var2[14];
  p_output1[10]=(-1.*t242*t2877 - 1.*t2839*t3923)*var2[4] - 1.*t2839*t3789*var2[5] - 1.*t2839*t3789*var2[13] + (t2695*t2877 - 1.*t2839*t600)*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t3472 + t1511*t4730 + t1657*t4791 + t3432*t4828 - 0.01004*(t1511*t152 - 1.*t1657*t485) - 1.*t242*t4762*t719 - 0.135*(t2839*t3432 + t242*t2877*t719))*var2[3] + (-0.08055*t2989 + t189*t242*t248*t4730 + t2897*t4828 + t189*t242*t4791*t494 - 0.01004*(t152*t189*t242*t248 - 1.*t189*t242*t485*t494) - 1.*t189*t4762*t600 - 0.135*(t2839*t2897 + t189*t2877*t600))*var2[4] + (-0.135*t2839*t3172 - 0.08055*t2877*t3172 + t1130*t4730 + t3172*t4828 - 0.01004*(t1130*t152 + t4984) + t4791*t810)*var2[5] + (-0.135*t2839*t3233 - 0.08055*t2877*t3233 + t3233*t4828 - 0.01004*(-1.*t1313*t152 + t4984) + t1313*t5190 + t5164*t810)*var2[13] + (-0.135*(-1.*t189*t242*t2839 - 1.*t1403*t2877) - 0.08055*t3284 + t189*t242*t5259 + t1403*t5339)*var2[14];
  p_output1[13]=var2[1] + (-0.01004*t3233 - 0.135*t3284 - 0.08055*t3686 + t189*t242*t4762 + t1313*t4791 + t1403*t4828 + t4730*t810)*var2[3] + (-0.08055*t3535 + t3530*t4828 + t242*t248*t4730*t719 + t242*t4791*t494*t719 - 1.*t4762*t600*t719 - 0.01004*(t152*t242*t248*t719 - 1.*t242*t485*t494*t719) - 0.135*(t2839*t3530 + t2877*t600*t719))*var2[4] + (-0.135*t2839*t3619 - 0.08055*t2877*t3619 + t1657*t4730 + t2242*t4791 + t3619*t4828 - 0.01004*(t3408 + t5671))*var2[5] + (-0.135*t2839*t3668 - 0.08055*t2877*t3668 + t3668*t4828 + t2242*t5164 + t2446*t5190 - 0.01004*(-1.*t152*t2446 + t5671))*var2[13] + (-0.135*(-1.*t2460*t2877 + t3335) - 0.08055*t3744 + t2460*t5339 + t242*t5259*t719)*var2[14];
  p_output1[14]=var2[2] + (-0.135*(t242*t2877 + t2839*t3923) - 0.08055*t3946 - 1.*t242*t4762 + t3923*t4828 - 1.*t248*t4730*t600 - 1.*t4791*t494*t600 - 0.01004*(-1.*t152*t248*t600 + t485*t494*t600))*var2[4] + (t242*t248*t4791 - 1.*t242*t4730*t494 + t5948 + t5954 + t5957 + t5958)*var2[5] + (t242*t248*t5164 + t242*t494*t5190 + t5948 + t5954 + t5957 + t5958)*var2[13] + (-0.08055*t3854 + t2695*t5339 - 1.*t5259*t600 - 0.135*(-1.*t2695*t2877 + t2839*t600))*var2[14];
  p_output1[15]=0;
}



void dT_RightRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
