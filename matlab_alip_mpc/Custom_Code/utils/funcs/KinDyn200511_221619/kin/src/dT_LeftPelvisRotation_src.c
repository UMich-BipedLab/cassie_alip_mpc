/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_LeftPelvisRotation_src.h"

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
  double t620;
  double t144;
  double t281;
  double t682;
  double t1655;
  double t1820;
  double t1705;
  double t1911;
  double t3665;
  double t3711;
  double t3797;
  double t3832;
  double t4618;
  double t4741;
  double t4744;
  double t2213;
  double t2222;
  double t2390;
  double t5114;
  double t5139;
  double t5146;
  double t5152;
  double t5683;
  double t5760;
  double t5802;
  double t4062;
  double t4093;
  double t4378;
  double t6196;
  double t2650;
  double t2686;
  double t3041;
  double t2432;
  double t5457;
  double t5580;
  double t5610;
  double t6762;
  double t4746;
  double t4773;
  double t7194;
  double t7360;
  double t7362;
  double t7664;
  double t7668;
  double t1759;
  double t2110;
  double t2116;
  double t5881;
  double t5938;
  double t6048;
  double t7669;
  double t7672;
  double t7675;
  double t7678;
  double t7680;
  double t7854;
  double t6162;
  double t6197;
  double t4437;
  double t4473;
  double t6301;
  double t6491;
  double t3301;
  double t3497;
  double t6507;
  double t6547;
  double t6556;
  double t4788;
  double t4801;
  double t4826;
  double t6618;
  double t6632;
  double t6679;
  double t4898;
  double t4994;
  double t5059;
  double t6786;
  double t5180;
  double t5405;
  double t8414;
  double t8492;
  double t8687;
  double t8712;
  double t8715;
  double t7018;
  double t7035;
  double t5636;
  double t5637;
  double t9319;
  double t9320;
  double t5651;
  double t5658;
  double t5661;
  double t7542;
  double t7587;
  double t7591;
  t620 = Cos(var1[3]);
  t144 = Cos(var1[4]);
  t281 = Sin(var1[3]);
  t682 = Sin(var1[4]);
  t1655 = Cos(var1[6]);
  t1820 = Cos(var1[5]);
  t1705 = Sin(var1[5]);
  t1911 = Sin(var1[6]);
  t3665 = t620*t1820*t682;
  t3711 = t281*t1705;
  t3797 = t3665 + t3711;
  t3832 = t1655*t3797;
  t4618 = -1.*t1820*t281;
  t4741 = t620*t682*t1705;
  t4744 = t4618 + t4741;
  t2213 = -1.*t620*t1820;
  t2222 = -1.*t281*t682*t1705;
  t2390 = t2213 + t2222;
  t5114 = t1820*t281*t682;
  t5139 = -1.*t620*t1705;
  t5146 = t5114 + t5139;
  t5152 = t1655*t5146;
  t5683 = t144*t1820*t1655;
  t5760 = -1.*t144*t1705*t1911;
  t5802 = t5683 + t5760;
  t4062 = t1820*t281;
  t4093 = -1.*t620*t682*t1705;
  t4378 = t4062 + t4093;
  t6196 = -1.*t3797*t1911;
  t2650 = -1.*t1820*t281*t682;
  t2686 = t620*t1705;
  t3041 = t2650 + t2686;
  t2432 = t1655*t2390;
  t5457 = t620*t1820;
  t5580 = t281*t682*t1705;
  t5610 = t5457 + t5580;
  t6762 = -1.*t5146*t1911;
  t4746 = -1.*t4744*t1911;
  t4773 = t3832 + t4746;
  t7194 = -1.*t144*t1655*t1705;
  t7360 = -1.*t144*t1820*t1911;
  t7362 = t7194 + t7360;
  t7664 = -1.*t1655;
  t7668 = 1. + t7664;
  t1759 = t620*t144*t1655*t1705;
  t2110 = t620*t144*t1820*t1911;
  t2116 = t1759 + t2110;
  t5881 = t620*t144*t1820*t1655;
  t5938 = -1.*t620*t144*t1705*t1911;
  t6048 = t5881 + t5938;
  t7669 = 0.07996*t7668;
  t7672 = -0.135*t1911;
  t7675 = 0. + t7669 + t7672;
  t7678 = 0.135*t7668;
  t7680 = 0.07996*t1911;
  t7854 = 0. + t7678 + t7680;
  t6162 = t1655*t4378;
  t6197 = t6162 + t6196;
  t4437 = t4378*t1911;
  t4473 = t3832 + t4437;
  t6301 = -1.*t1655*t4744;
  t6491 = t6301 + t6196;
  t3301 = t3041*t1911;
  t3497 = t2432 + t3301;
  t6507 = t1655*t3041;
  t6547 = -1.*t2390*t1911;
  t6556 = t6507 + t6547;
  t4788 = t144*t1655*t281*t1705;
  t4801 = t144*t1820*t281*t1911;
  t4826 = t4788 + t4801;
  t6618 = t144*t1820*t1655*t281;
  t6632 = -1.*t144*t281*t1705*t1911;
  t6679 = t6618 + t6632;
  t4898 = t1655*t4744;
  t4994 = t3797*t1911;
  t5059 = t4898 + t4994;
  t6786 = t2432 + t6762;
  t5180 = t2390*t1911;
  t5405 = t5152 + t5180;
  t8414 = -0.135*t1655;
  t8492 = t8414 + t7680;
  t8687 = 0.07996*t1655;
  t8712 = 0.135*t1911;
  t8715 = t8687 + t8712;
  t7018 = -1.*t1655*t5610;
  t7035 = t7018 + t6762;
  t5636 = -1.*t5610*t1911;
  t5637 = t5152 + t5636;
  t9319 = 0.09786*t7362;
  t9320 = 0.1351*t5802;
  t5651 = -1.*t1655*t682*t1705;
  t5658 = -1.*t1820*t682*t1911;
  t5661 = t5651 + t5658;
  t7542 = -1.*t1820*t1655*t682;
  t7587 = t682*t1705*t1911;
  t7591 = t7542 + t7587;
  p_output1[0]=-1.*t144*t281*var2[3] - 1.*t620*t682*var2[4];
  p_output1[1]=t144*t620*var2[3] - 1.*t281*t682*var2[4];
  p_output1[2]=-1.*t144*var2[4];
  p_output1[3]=0;
  p_output1[4]=t3497*var2[3] + t2116*var2[4] + t4473*var2[5] + t4773*var2[6];
  p_output1[5]=t5059*var2[3] + t4826*var2[4] + t5405*var2[5] + t5637*var2[6];
  p_output1[6]=t5661*var2[4] + t5802*var2[5] + t5802*var2[6];
  p_output1[7]=0;
  p_output1[8]=t6556*var2[3] + t6048*var2[4] + t6197*var2[5] + t6491*var2[6];
  p_output1[9]=t4773*var2[3] + t6679*var2[4] + t6786*var2[5] + t7035*var2[6];
  p_output1[10]=t7591*var2[4] + t7362*var2[5] + t7362*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.05485*t144*t281 + 0.1351*t3497 + 0.09786*t6556 + t3041*t7675 + t2390*t7854)*var2[3] + (0.1351*t2116 + 0.09786*t6048 + 0.05485*t620*t682 + t144*t1820*t620*t7675 + t144*t1705*t620*t7854)*var2[4] + (0.1351*t4473 + 0.09786*t6197 + t4378*t7675 + t3797*t7854)*var2[5] + (0.1351*t4773 + 0.09786*t6491 + t3797*t8492 + t4744*t8715)*var2[6];
  p_output1[13]=var2[1] + (0.09786*t4773 + 0.1351*t5059 - 0.05485*t144*t620 + t3797*t7675 + t4744*t7854)*var2[3] + (0.1351*t4826 + 0.09786*t6679 + 0.05485*t281*t682 + t144*t1820*t281*t7675 + t144*t1705*t281*t7854)*var2[4] + (0.1351*t5405 + 0.09786*t6786 + t2390*t7675 + t5146*t7854)*var2[5] + (0.1351*t5637 + 0.09786*t7035 + t5146*t8492 + t5610*t8715)*var2[6];
  p_output1[14]=var2[2] + (0.05485*t144 + 0.1351*t5661 + 0.09786*t7591 - 1.*t1820*t682*t7675 - 1.*t1705*t682*t7854)*var2[4] + (-1.*t144*t1705*t7675 + t144*t1820*t7854 + t9319 + t9320)*var2[5] + (t144*t1820*t8492 + t144*t1705*t8715 + t9319 + t9320)*var2[6];
  p_output1[15]=0;
}



void dT_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
