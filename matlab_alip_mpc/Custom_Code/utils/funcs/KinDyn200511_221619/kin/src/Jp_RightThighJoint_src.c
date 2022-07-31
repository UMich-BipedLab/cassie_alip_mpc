/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightThighJoint_src.h"

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
  double t1160;
  double t1429;
  double t1555;
  double t1663;
  double t1742;
  double t2472;
  double t1906;
  double t2414;
  double t2830;
  double t569;
  double t642;
  double t701;
  double t1005;
  double t2445;
  double t3130;
  double t3137;
  double t3541;
  double t3562;
  double t3730;
  double t118;
  double t4250;
  double t4283;
  double t4393;
  double t4481;
  double t4499;
  double t4555;
  double t4873;
  double t4990;
  double t5008;
  double t5116;
  double t5474;
  double t5513;
  double t5572;
  double t948;
  double t1045;
  double t1156;
  double t1670;
  double t1858;
  double t1901;
  double t3220;
  double t3401;
  double t3525;
  double t3803;
  double t3805;
  double t3969;
  double t5825;
  double t5826;
  double t5849;
  double t5859;
  double t5866;
  double t5883;
  double t4822;
  double t4918;
  double t4971;
  double t5919;
  double t5933;
  double t5936;
  double t5417;
  double t5454;
  double t5460;
  double t6056;
  double t6057;
  double t6069;
  double t6189;
  double t6191;
  double t6214;
  double t6341;
  double t6343;
  double t6359;
  double t6392;
  double t6400;
  double t6406;
  double t6456;
  double t6464;
  double t6465;
  double t6516;
  double t6521;
  double t6546;
  double t6556;
  double t6563;
  double t6565;
  double t6642;
  double t6645;
  double t6682;
  double t6772;
  double t6773;
  double t6804;
  double t6816;
  double t6826;
  double t6836;
  double t6896;
  double t6898;
  double t6899;
  double t6985;
  double t6986;
  double t6990;
  double t7031;
  double t7040;
  double t6997;
  double t7012;
  double t7017;
  double t7181;
  double t7198;
  double t7213;
  double t7372;
  double t7379;
  double t7384;
  double t7249;
  double t7302;
  double t7588;
  double t7589;
  double t7594;
  double t7539;
  double t7545;
  double t7574;
  double t7689;
  double t7690;
  double t7668;
  double t7673;
  double t7680;
  double t7681;
  double t7682;
  double t7748;
  double t7749;
  double t7750;
  double t7765;
  double t7766;
  double t7752;
  double t7753;
  double t7586;
  double t7595;
  double t7596;
  double t7603;
  double t7605;
  double t7613;
  double t7621;
  double t7626;
  double t7633;
  double t7648;
  double t7650;
  double t7666;
  double t6154;
  double t6169;
  double t6176;
  double t7816;
  double t7827;
  double t7831;
  double t7837;
  double t7838;
  double t7865;
  double t7875;
  double t7876;
  double t7881;
  double t7883;
  double t7885;
  double t7916;
  double t7917;
  double t7921;
  double t7933;
  double t7935;
  double t7937;
  double t6244;
  double t6281;
  double t6285;
  double t7962;
  double t7964;
  double t7976;
  double t7980;
  double t7981;
  double t8016;
  double t8023;
  double t8027;
  double t8051;
  double t8055;
  double t8059;
  t1160 = Sin(var1[3]);
  t1429 = Cos(var1[13]);
  t1555 = -1.*t1429;
  t1663 = 1. + t1555;
  t1742 = Sin(var1[13]);
  t2472 = Cos(var1[3]);
  t1906 = Cos(var1[5]);
  t2414 = Sin(var1[4]);
  t2830 = Sin(var1[5]);
  t569 = Cos(var1[14]);
  t642 = -1.*t569;
  t701 = 1. + t642;
  t1005 = Sin(var1[14]);
  t2445 = -1.*t1906*t1160*t2414;
  t3130 = t2472*t2830;
  t3137 = t2445 + t3130;
  t3541 = -1.*t2472*t1906;
  t3562 = -1.*t1160*t2414*t2830;
  t3730 = t3541 + t3562;
  t118 = Cos(var1[4]);
  t4250 = t1742*t3137;
  t4283 = t1429*t3730;
  t4393 = t4250 + t4283;
  t4481 = Cos(var1[15]);
  t4499 = -1.*t4481;
  t4555 = 1. + t4499;
  t4873 = Sin(var1[15]);
  t4990 = t1429*t3137;
  t5008 = -1.*t1742*t3730;
  t5116 = t4990 + t5008;
  t5474 = -1.*t569*t118*t1160;
  t5513 = t1005*t4393;
  t5572 = t5474 + t5513;
  t948 = -0.08055*t701;
  t1045 = -0.135*t1005;
  t1156 = 0. + t948 + t1045;
  t1670 = 0.07996*t1663;
  t1858 = 0.135*t1742;
  t1901 = 0. + t1670 + t1858;
  t3220 = -0.135*t1663;
  t3401 = 0.07996*t1742;
  t3525 = 0. + t3220 + t3401;
  t3803 = -0.135*t701;
  t3805 = 0.08055*t1005;
  t3969 = 0. + t3803 + t3805;
  t5825 = t2472*t1906*t2414;
  t5826 = t1160*t2830;
  t5849 = t5825 + t5826;
  t5859 = -1.*t1906*t1160;
  t5866 = t2472*t2414*t2830;
  t5883 = t5859 + t5866;
  t4822 = -0.01004*t4555;
  t4918 = 0.08055*t4873;
  t4971 = 0. + t4822 + t4918;
  t5919 = t1742*t5849;
  t5933 = t1429*t5883;
  t5936 = t5919 + t5933;
  t5417 = -0.08055*t4555;
  t5454 = -0.01004*t4873;
  t5460 = 0. + t5417 + t5454;
  t6056 = t1429*t5849;
  t6057 = -1.*t1742*t5883;
  t6069 = t6056 + t6057;
  t6189 = t569*t2472*t118;
  t6191 = t1005*t5936;
  t6214 = t6189 + t6191;
  t6341 = t2472*t118*t1906*t1742;
  t6343 = t1429*t2472*t118*t2830;
  t6359 = t6341 + t6343;
  t6392 = t1429*t2472*t118*t1906;
  t6400 = -1.*t2472*t118*t1742*t2830;
  t6406 = t6392 + t6400;
  t6456 = -1.*t569*t2472*t2414;
  t6464 = t1005*t6359;
  t6465 = t6456 + t6464;
  t6516 = t118*t1906*t1742*t1160;
  t6521 = t1429*t118*t1160*t2830;
  t6546 = t6516 + t6521;
  t6556 = t1429*t118*t1906*t1160;
  t6563 = -1.*t118*t1742*t1160*t2830;
  t6565 = t6556 + t6563;
  t6642 = -1.*t569*t1160*t2414;
  t6645 = t1005*t6546;
  t6682 = t6642 + t6645;
  t6772 = -1.*t1906*t1742*t2414;
  t6773 = -1.*t1429*t2414*t2830;
  t6804 = t6772 + t6773;
  t6816 = -1.*t1429*t1906*t2414;
  t6826 = t1742*t2414*t2830;
  t6836 = t6816 + t6826;
  t6896 = -1.*t569*t118;
  t6898 = t1005*t6804;
  t6899 = t6896 + t6898;
  t6985 = t1906*t1160;
  t6986 = -1.*t2472*t2414*t2830;
  t6990 = t6985 + t6986;
  t7031 = t1742*t6990;
  t7040 = t6056 + t7031;
  t6997 = -1.*t1742*t5849;
  t7012 = t1429*t6990;
  t7017 = t6997 + t7012;
  t7181 = t1906*t1160*t2414;
  t7198 = -1.*t2472*t2830;
  t7213 = t7181 + t7198;
  t7372 = t1429*t7213;
  t7379 = t1742*t3730;
  t7384 = t7372 + t7379;
  t7249 = -1.*t1742*t7213;
  t7302 = t7249 + t4283;
  t7588 = t1429*t118*t1906;
  t7589 = -1.*t118*t1742*t2830;
  t7594 = t7588 + t7589;
  t7539 = -1.*t118*t1906*t1742;
  t7545 = -1.*t1429*t118*t2830;
  t7574 = t7539 + t7545;
  t7689 = -1.*t1429*t5883;
  t7690 = t6997 + t7689;
  t7668 = 0.135*t1429;
  t7673 = t7668 + t3401;
  t7680 = 0.07996*t1429;
  t7681 = -0.135*t1742;
  t7682 = t7680 + t7681;
  t7748 = t2472*t1906;
  t7749 = t1160*t2414*t2830;
  t7750 = t7748 + t7749;
  t7765 = -1.*t1742*t7750;
  t7766 = t7372 + t7765;
  t7752 = -1.*t1429*t7750;
  t7753 = t7249 + t7752;
  t7586 = t4971*t7574;
  t7595 = -0.135*t569*t7594;
  t7596 = t3969*t7594;
  t7603 = t1005*t5460*t7594;
  t7605 = t4873*t7574;
  t7613 = t4481*t1005*t7594;
  t7621 = t7605 + t7613;
  t7626 = -0.08055*t7621;
  t7633 = t4481*t7574;
  t7648 = -1.*t1005*t4873*t7594;
  t7650 = t7633 + t7648;
  t7666 = -0.01004*t7650;
  t6154 = -1.*t2472*t118*t1005;
  t6169 = t569*t5936;
  t6176 = t6154 + t6169;
  t7816 = -0.135*t569;
  t7827 = -0.08055*t1005;
  t7831 = t7816 + t7827;
  t7837 = 0.08055*t569;
  t7838 = t7837 + t1045;
  t7865 = t1742*t7213;
  t7875 = t1429*t7750;
  t7876 = t7865 + t7875;
  t7881 = -1.*t118*t1005*t1160;
  t7883 = t569*t7876;
  t7885 = t7881 + t7883;
  t7916 = t118*t1906*t1742;
  t7917 = t1429*t118*t2830;
  t7921 = t7916 + t7917;
  t7933 = t1005*t2414;
  t7935 = t569*t7921;
  t7937 = t7933 + t7935;
  t6244 = t4481*t6069;
  t6281 = -1.*t4873*t6214;
  t6285 = t6244 + t6281;
  t7962 = 0.08055*t4481;
  t7964 = t7962 + t5454;
  t7976 = -0.01004*t4481;
  t7980 = -0.08055*t4873;
  t7981 = t7976 + t7980;
  t8016 = t569*t118*t1160;
  t8023 = t1005*t7876;
  t8027 = t8016 + t8023;
  t8051 = -1.*t569*t2414;
  t8055 = t1005*t7921;
  t8059 = t8051 + t8055;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1156*t1160*t118 + t1901*t3137 + t3525*t3730 + t3969*t4393 + t4971*t5116 + t5460*t5572 - 0.08055*(t4873*t5116 + t4481*t5572) - 0.01004*(t4481*t5116 - 1.*t4873*t5572) - 0.135*(t1005*t1160*t118 + t4393*t569);
  p_output1[10]=t1156*t118*t2472 + t1901*t5849 + t3525*t5883 + t3969*t5936 + t4971*t6069 - 0.135*t6176 + t5460*t6214 - 0.08055*(t4873*t6069 + t4481*t6214) - 0.01004*t6285;
  p_output1[11]=0;
  p_output1[12]=t118*t1901*t1906*t2472 - 1.*t1156*t2414*t2472 + t118*t2472*t2830*t3525 + t3969*t6359 - 0.135*(t1005*t2414*t2472 + t569*t6359) + t4971*t6406 + t5460*t6465 - 0.08055*(t4873*t6406 + t4481*t6465) - 0.01004*(t4481*t6406 - 1.*t4873*t6465);
  p_output1[13]=t1160*t118*t1901*t1906 - 1.*t1156*t1160*t2414 + t1160*t118*t2830*t3525 + t3969*t6546 - 0.135*(t1005*t1160*t2414 + t569*t6546) + t4971*t6565 + t5460*t6682 - 0.08055*(t4873*t6565 + t4481*t6682) - 0.01004*(t4481*t6565 - 1.*t4873*t6682);
  p_output1[14]=-1.*t1156*t118 - 1.*t1901*t1906*t2414 - 1.*t2414*t2830*t3525 + t3969*t6804 - 0.135*(t1005*t118 + t569*t6804) + t4971*t6836 + t5460*t6899 - 0.08055*(t4873*t6836 + t4481*t6899) - 0.01004*(t4481*t6836 - 1.*t4873*t6899);
  p_output1[15]=t3525*t5849 + t1901*t6990 + t4971*t7017 + t3969*t7040 + t1005*t5460*t7040 - 0.135*t569*t7040 - 0.08055*(t4873*t7017 + t1005*t4481*t7040) - 0.01004*(t4481*t7017 - 1.*t1005*t4873*t7040);
  p_output1[16]=t1901*t3730 + t3525*t7213 + t4971*t7302 + t3969*t7384 + t1005*t5460*t7384 - 0.135*t569*t7384 - 0.08055*(t4873*t7302 + t1005*t4481*t7384) - 0.01004*(t4481*t7302 - 1.*t1005*t4873*t7384);
  p_output1[17]=-1.*t118*t1901*t2830 + t118*t1906*t3525 + t7586 + t7595 + t7596 + t7603 + t7626 + t7666;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
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
  p_output1[39]=t3969*t6069 + t1005*t5460*t6069 - 0.135*t569*t6069 + t5849*t7673 + t5883*t7682 + t4971*t7690 - 0.01004*(-1.*t1005*t4873*t6069 + t4481*t7690) - 0.08055*(t1005*t4481*t6069 + t4873*t7690);
  p_output1[40]=t7213*t7673 + t7682*t7750 + t4971*t7753 + t3969*t7766 + t1005*t5460*t7766 - 0.135*t569*t7766 - 0.08055*(t4873*t7753 + t1005*t4481*t7766) - 0.01004*(t4481*t7753 - 1.*t1005*t4873*t7766);
  p_output1[41]=t7586 + t7595 + t7596 + t7603 + t7626 + t7666 + t118*t1906*t7673 + t118*t2830*t7682;
  p_output1[42]=-0.135*(-1.*t118*t2472*t569 - 1.*t1005*t5936) - 0.08055*t4481*t6176 + 0.01004*t4873*t6176 + t5460*t6176 + t118*t2472*t7831 + t5936*t7838;
  p_output1[43]=t1160*t118*t7831 + t7838*t7876 - 0.135*(t5474 - 1.*t1005*t7876) - 0.08055*t4481*t7885 + 0.01004*t4873*t7885 + t5460*t7885;
  p_output1[44]=-1.*t2414*t7831 + t7838*t7921 - 0.135*(t2414*t569 - 1.*t1005*t7921) - 0.08055*t4481*t7937 + 0.01004*t4873*t7937 + t5460*t7937;
  p_output1[45]=-0.01004*(-1.*t4873*t6069 - 1.*t4481*t6214) - 0.08055*t6285 + t6069*t7964 + t6214*t7981;
  p_output1[46]=t7766*t7964 + t7981*t8027 - 0.01004*(-1.*t4873*t7766 - 1.*t4481*t8027) - 0.08055*(t4481*t7766 - 1.*t4873*t8027);
  p_output1[47]=t7594*t7964 + t7981*t8059 - 0.01004*(-1.*t4873*t7594 - 1.*t4481*t8059) - 0.08055*(t4481*t7594 - 1.*t4873*t8059);
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



void Jp_RightThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
