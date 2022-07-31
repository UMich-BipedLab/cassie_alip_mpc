/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftHip_src.h"

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
  double t633;
  double t125;
  double t143;
  double t234;
  double t648;
  double t1151;
  double t1180;
  double t1465;
  double t1499;
  double t443;
  double t1143;
  double t1150;
  double t1798;
  double t2066;
  double t2140;
  double t2969;
  double t3971;
  double t4087;
  double t4113;
  double t2631;
  double t2690;
  double t2954;
  double t5249;
  double t1471;
  double t1634;
  double t1732;
  double t2153;
  double t2208;
  double t2218;
  double t7420;
  double t7618;
  double t7910;
  double t9453;
  double t9498;
  double t9506;
  double t4108;
  double t4178;
  double t4661;
  double t5267;
  double t5324;
  double t5448;
  double t9559;
  double t9560;
  double t9563;
  double t9658;
  double t9659;
  double t9660;
  double t9682;
  double t9683;
  double t9685;
  double t9703;
  double t9705;
  double t9706;
  double t9718;
  double t9719;
  double t9720;
  double t9529;
  double t9731;
  double t9732;
  double t9741;
  double t9742;
  double t9743;
  double t9749;
  double t9750;
  double t9751;
  double t9768;
  double t9769;
  double t9770;
  double t9728;
  double t9532;
  double t9538;
  double t9777;
  double t9779;
  double t9786;
  double t9787;
  double t9788;
  double t9799;
  double t9801;
  double t9802;
  double t9746;
  double t9808;
  double t9809;
  double t9764;
  double t9765;
  double t9766;
  double t9767;
  double t9771;
  double t9772;
  double t9773;
  double t9587;
  double t9606;
  double t9618;
  double t9820;
  double t9821;
  double t9822;
  double t9824;
  double t9826;
  double t9836;
  double t9837;
  double t9839;
  double t6343;
  double t9854;
  double t9855;
  double t9856;
  t633 = Cos(var1[3]);
  t125 = Cos(var1[5]);
  t143 = Sin(var1[3]);
  t234 = Sin(var1[4]);
  t648 = Sin(var1[5]);
  t1151 = Cos(var1[6]);
  t1180 = -1.*t1151;
  t1465 = 1. + t1180;
  t1499 = Sin(var1[6]);
  t443 = -1.*t125*t143*t234;
  t1143 = t633*t648;
  t1150 = t443 + t1143;
  t1798 = -1.*t633*t125;
  t2066 = -1.*t143*t234*t648;
  t2140 = t1798 + t2066;
  t2969 = Cos(var1[7]);
  t3971 = -1.*t2969;
  t4087 = 1. + t3971;
  t4113 = Sin(var1[7]);
  t2631 = t1151*t2140;
  t2690 = t1150*t1499;
  t2954 = t2631 + t2690;
  t5249 = Cos(var1[4]);
  t1471 = 0.07996*t1465;
  t1634 = -0.135*t1499;
  t1732 = 0. + t1471 + t1634;
  t2153 = 0.135*t1465;
  t2208 = 0.07996*t1499;
  t2218 = 0. + t2153 + t2208;
  t7420 = t633*t125*t234;
  t7618 = t143*t648;
  t7910 = t7420 + t7618;
  t9453 = -1.*t125*t143;
  t9498 = t633*t234*t648;
  t9506 = t9453 + t9498;
  t4108 = 0.135*t4087;
  t4178 = 0.08055*t4113;
  t4661 = 0. + t4108 + t4178;
  t5267 = -0.08055*t4087;
  t5324 = 0.135*t4113;
  t5448 = 0. + t5267 + t5324;
  t9559 = t1151*t9506;
  t9560 = t7910*t1499;
  t9563 = t9559 + t9560;
  t9658 = t633*t5249*t1151*t648;
  t9659 = t633*t5249*t125*t1499;
  t9660 = t9658 + t9659;
  t9682 = t5249*t1151*t143*t648;
  t9683 = t5249*t125*t143*t1499;
  t9685 = t9682 + t9683;
  t9703 = -1.*t1151*t234*t648;
  t9705 = -1.*t125*t234*t1499;
  t9706 = t9703 + t9705;
  t9718 = t125*t143;
  t9719 = -1.*t633*t234*t648;
  t9720 = t9718 + t9719;
  t9529 = t1151*t7910;
  t9731 = t9720*t1499;
  t9732 = t9529 + t9731;
  t9741 = t125*t143*t234;
  t9742 = -1.*t633*t648;
  t9743 = t9741 + t9742;
  t9749 = t1151*t9743;
  t9750 = t2140*t1499;
  t9751 = t9749 + t9750;
  t9768 = t5249*t125*t1151;
  t9769 = -1.*t5249*t648*t1499;
  t9770 = t9768 + t9769;
  t9728 = -1.*t7910*t1499;
  t9532 = -1.*t9506*t1499;
  t9538 = t9529 + t9532;
  t9777 = -0.135*t1151;
  t9779 = t9777 + t2208;
  t9786 = 0.07996*t1151;
  t9787 = 0.135*t1499;
  t9788 = t9786 + t9787;
  t9799 = t633*t125;
  t9801 = t143*t234*t648;
  t9802 = t9799 + t9801;
  t9746 = -1.*t9743*t1499;
  t9808 = -1.*t9802*t1499;
  t9809 = t9749 + t9808;
  t9764 = -1.*t5249*t1151*t648;
  t9765 = -1.*t5249*t125*t1499;
  t9766 = t9764 + t9765;
  t9767 = 0.04566*t9766;
  t9771 = 0.135*t2969*t9770;
  t9772 = t9770*t4661;
  t9773 = -0.08055*t9770*t4113;
  t9587 = t2969*t9563;
  t9606 = -1.*t633*t5249*t4113;
  t9618 = t9587 + t9606;
  t9820 = 0.135*t2969;
  t9821 = -0.08055*t4113;
  t9822 = t9820 + t9821;
  t9824 = 0.08055*t2969;
  t9826 = t9824 + t5324;
  t9836 = t1151*t9802;
  t9837 = t9743*t1499;
  t9839 = t9836 + t9837;
  t6343 = -1.*t5249*t2969*t143;
  t9854 = t5249*t1151*t648;
  t9855 = t5249*t125*t1499;
  t9856 = t9854 + t9855;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1150*t1732 + 0.04566*(t1150*t1151 - 1.*t1499*t2140) + t2140*t2218 + t2954*t4661 + 0.135*(t2954*t2969 + t143*t4113*t5249) - 1.*t143*t5249*t5448 - 0.08055*(t2954*t4113 + t6343);
  p_output1[10]=t5249*t5448*t633 + t1732*t7910 + t2218*t9506 + 0.04566*t9538 + t4661*t9563 - 0.08055*(t2969*t5249*t633 + t4113*t9563) + 0.135*t9618;
  p_output1[11]=0;
  p_output1[12]=t125*t1732*t5249*t633 - 1.*t234*t5448*t633 + t2218*t5249*t633*t648 + 0.04566*(t1151*t125*t5249*t633 - 1.*t1499*t5249*t633*t648) + t4661*t9660 + 0.135*(t234*t4113*t633 + t2969*t9660) - 0.08055*(-1.*t234*t2969*t633 + t4113*t9660);
  p_output1[13]=t125*t143*t1732*t5249 - 1.*t143*t234*t5448 + t143*t2218*t5249*t648 + 0.04566*(t1151*t125*t143*t5249 - 1.*t143*t1499*t5249*t648) + t4661*t9685 + 0.135*(t143*t234*t4113 + t2969*t9685) - 0.08055*(-1.*t143*t234*t2969 + t4113*t9685);
  p_output1[14]=-1.*t125*t1732*t234 - 1.*t5249*t5448 - 1.*t2218*t234*t648 + 0.04566*(-1.*t1151*t125*t234 + t1499*t234*t648) + t4661*t9706 + 0.135*(t4113*t5249 + t2969*t9706) - 0.08055*(-1.*t2969*t5249 + t4113*t9706);
  p_output1[15]=t2218*t7910 + t1732*t9720 + 0.04566*(t1151*t9720 + t9728) + 0.135*t2969*t9732 - 0.08055*t4113*t9732 + t4661*t9732;
  p_output1[16]=t1732*t2140 + t2218*t9743 + 0.04566*(t2631 + t9746) + 0.135*t2969*t9751 - 0.08055*t4113*t9751 + t4661*t9751;
  p_output1[17]=t125*t2218*t5249 - 1.*t1732*t5249*t648 + t9767 + t9771 + t9772 + t9773;
  p_output1[18]=0.135*t2969*t9538 - 0.08055*t4113*t9538 + t4661*t9538 + 0.04566*(-1.*t1151*t9506 + t9728) + t7910*t9779 + t9506*t9788;
  p_output1[19]=t9743*t9779 + t9788*t9802 + 0.04566*(t9746 - 1.*t1151*t9802) + 0.135*t2969*t9809 - 0.08055*t4113*t9809 + t4661*t9809;
  p_output1[20]=t9767 + t9771 + t9772 + t9773 + t125*t5249*t9779 + t5249*t648*t9788;
  p_output1[21]=0.135*(-1.*t2969*t5249*t633 - 1.*t4113*t9563) - 0.08055*t9618 + t5249*t633*t9822 + t9563*t9826;
  p_output1[22]=t143*t5249*t9822 + t9826*t9839 - 0.08055*(-1.*t143*t4113*t5249 + t2969*t9839) + 0.135*(t6343 - 1.*t4113*t9839);
  p_output1[23]=-1.*t234*t9822 + t9826*t9856 - 0.08055*(t234*t4113 + t2969*t9856) + 0.135*(t234*t2969 - 1.*t4113*t9856);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_LeftHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
