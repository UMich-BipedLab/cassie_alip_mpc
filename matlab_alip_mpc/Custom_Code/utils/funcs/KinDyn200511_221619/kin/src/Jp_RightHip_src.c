/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightHip_src.h"

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
  double t1998;
  double t2094;
  double t2122;
  double t2184;
  double t2898;
  double t4168;
  double t3371;
  double t3751;
  double t4502;
  double t778;
  double t785;
  double t881;
  double t1219;
  double t3845;
  double t4600;
  double t4674;
  double t5013;
  double t5245;
  double t5295;
  double t582;
  double t5923;
  double t5967;
  double t6238;
  double t1192;
  double t1281;
  double t1777;
  double t2212;
  double t2902;
  double t3073;
  double t4710;
  double t4958;
  double t4964;
  double t5352;
  double t5455;
  double t5668;
  double t7623;
  double t7626;
  double t7638;
  double t7656;
  double t7690;
  double t7691;
  double t7893;
  double t7903;
  double t7924;
  double t8599;
  double t8715;
  double t8742;
  double t9043;
  double t9069;
  double t9072;
  double t9243;
  double t9250;
  double t9255;
  double t9363;
  double t9369;
  double t9372;
  double t8156;
  double t9450;
  double t9452;
  double t9496;
  double t9501;
  double t9506;
  double t9540;
  double t9542;
  double t9551;
  double t9639;
  double t9645;
  double t9651;
  double t9407;
  double t8157;
  double t8165;
  double t9687;
  double t9692;
  double t9698;
  double t9700;
  double t9706;
  double t9515;
  double t9760;
  double t9768;
  double t9769;
  double t9828;
  double t9832;
  double t9611;
  double t9620;
  double t9622;
  double t9624;
  double t9671;
  double t9673;
  double t9674;
  double t8209;
  double t8224;
  double t8228;
  double t9869;
  double t9872;
  double t9878;
  double t9890;
  double t9892;
  double t9925;
  double t9927;
  double t9928;
  double t7517;
  double t9955;
  double t9959;
  double t9961;
  t1998 = Sin(var1[3]);
  t2094 = Cos(var1[13]);
  t2122 = -1.*t2094;
  t2184 = 1. + t2122;
  t2898 = Sin(var1[13]);
  t4168 = Cos(var1[3]);
  t3371 = Cos(var1[5]);
  t3751 = Sin(var1[4]);
  t4502 = Sin(var1[5]);
  t778 = Cos(var1[14]);
  t785 = -1.*t778;
  t881 = 1. + t785;
  t1219 = Sin(var1[14]);
  t3845 = -1.*t3371*t1998*t3751;
  t4600 = t4168*t4502;
  t4674 = t3845 + t4600;
  t5013 = -1.*t4168*t3371;
  t5245 = -1.*t1998*t3751*t4502;
  t5295 = t5013 + t5245;
  t582 = Cos(var1[4]);
  t5923 = t2898*t4674;
  t5967 = t2094*t5295;
  t6238 = t5923 + t5967;
  t1192 = -0.08055*t881;
  t1281 = -0.135*t1219;
  t1777 = 0. + t1192 + t1281;
  t2212 = 0.07996*t2184;
  t2902 = 0.135*t2898;
  t3073 = 0. + t2212 + t2902;
  t4710 = -0.135*t2184;
  t4958 = 0.07996*t2898;
  t4964 = 0. + t4710 + t4958;
  t5352 = -0.135*t881;
  t5455 = 0.08055*t1219;
  t5668 = 0. + t5352 + t5455;
  t7623 = t4168*t3371*t3751;
  t7626 = t1998*t4502;
  t7638 = t7623 + t7626;
  t7656 = -1.*t3371*t1998;
  t7690 = t4168*t3751*t4502;
  t7691 = t7656 + t7690;
  t7893 = t2898*t7638;
  t7903 = t2094*t7691;
  t7924 = t7893 + t7903;
  t8599 = t4168*t582*t3371*t2898;
  t8715 = t2094*t4168*t582*t4502;
  t8742 = t8599 + t8715;
  t9043 = t582*t3371*t2898*t1998;
  t9069 = t2094*t582*t1998*t4502;
  t9072 = t9043 + t9069;
  t9243 = -1.*t3371*t2898*t3751;
  t9250 = -1.*t2094*t3751*t4502;
  t9255 = t9243 + t9250;
  t9363 = t3371*t1998;
  t9369 = -1.*t4168*t3751*t4502;
  t9372 = t9363 + t9369;
  t8156 = t2094*t7638;
  t9450 = t2898*t9372;
  t9452 = t8156 + t9450;
  t9496 = t3371*t1998*t3751;
  t9501 = -1.*t4168*t4502;
  t9506 = t9496 + t9501;
  t9540 = t2094*t9506;
  t9542 = t2898*t5295;
  t9551 = t9540 + t9542;
  t9639 = t2094*t582*t3371;
  t9645 = -1.*t582*t2898*t4502;
  t9651 = t9639 + t9645;
  t9407 = -1.*t2898*t7638;
  t8157 = -1.*t2898*t7691;
  t8165 = t8156 + t8157;
  t9687 = 0.135*t2094;
  t9692 = t9687 + t4958;
  t9698 = 0.07996*t2094;
  t9700 = -0.135*t2898;
  t9706 = t9698 + t9700;
  t9515 = -1.*t2898*t9506;
  t9760 = t4168*t3371;
  t9768 = t1998*t3751*t4502;
  t9769 = t9760 + t9768;
  t9828 = -1.*t2898*t9769;
  t9832 = t9540 + t9828;
  t9611 = -1.*t582*t3371*t2898;
  t9620 = -1.*t2094*t582*t4502;
  t9622 = t9611 + t9620;
  t9624 = 0.04566*t9622;
  t9671 = -0.135*t778*t9651;
  t9673 = t5668*t9651;
  t9674 = -0.08055*t1219*t9651;
  t8209 = -1.*t4168*t582*t1219;
  t8224 = t778*t7924;
  t8228 = t8209 + t8224;
  t9869 = -0.135*t778;
  t9872 = -0.08055*t1219;
  t9878 = t9869 + t9872;
  t9890 = 0.08055*t778;
  t9892 = t9890 + t1281;
  t9925 = t2898*t9506;
  t9927 = t2094*t9769;
  t9928 = t9925 + t9927;
  t7517 = -1.*t778*t582*t1998;
  t9955 = t582*t3371*t2898;
  t9959 = t2094*t582*t4502;
  t9961 = t9955 + t9959;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3073*t4674 + t4964*t5295 + 0.04566*(t2094*t4674 - 1.*t2898*t5295) - 1.*t1777*t1998*t582 + t5668*t6238 - 0.08055*(t1219*t6238 + t7517) - 0.135*(t1219*t1998*t582 + t6238*t778);
  p_output1[10]=t1777*t4168*t582 + t3073*t7638 + t4964*t7691 + t5668*t7924 - 0.08055*(t4168*t582*t778 + t1219*t7924) + 0.04566*t8165 - 0.135*t8228;
  p_output1[11]=0;
  p_output1[12]=-1.*t1777*t3751*t4168 + t3073*t3371*t4168*t582 + t4168*t4502*t4964*t582 + 0.04566*(t2094*t3371*t4168*t582 - 1.*t2898*t4168*t4502*t582) + t5668*t8742 - 0.08055*(-1.*t3751*t4168*t778 + t1219*t8742) - 0.135*(t1219*t3751*t4168 + t778*t8742);
  p_output1[13]=-1.*t1777*t1998*t3751 + t1998*t3073*t3371*t582 + t1998*t4502*t4964*t582 + 0.04566*(t1998*t2094*t3371*t582 - 1.*t1998*t2898*t4502*t582) + t5668*t9072 - 0.08055*(-1.*t1998*t3751*t778 + t1219*t9072) - 0.135*(t1219*t1998*t3751 + t778*t9072);
  p_output1[14]=-1.*t3073*t3371*t3751 + 0.04566*(-1.*t2094*t3371*t3751 + t2898*t3751*t4502) - 1.*t3751*t4502*t4964 - 1.*t1777*t582 + t5668*t9255 - 0.08055*(-1.*t582*t778 + t1219*t9255) - 0.135*(t1219*t582 + t778*t9255);
  p_output1[15]=t4964*t7638 + t3073*t9372 + 0.04566*(t2094*t9372 + t9407) - 0.08055*t1219*t9452 + t5668*t9452 - 0.135*t778*t9452;
  p_output1[16]=t3073*t5295 + t4964*t9506 + 0.04566*(t5967 + t9515) - 0.08055*t1219*t9551 + t5668*t9551 - 0.135*t778*t9551;
  p_output1[17]=-1.*t3073*t4502*t582 + t3371*t4964*t582 + t9624 + t9671 + t9673 + t9674;
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
  p_output1[39]=-0.08055*t1219*t8165 + t5668*t8165 - 0.135*t778*t8165 + 0.04566*(-1.*t2094*t7691 + t9407) + t7638*t9692 + t7691*t9706;
  p_output1[40]=t9506*t9692 + t9706*t9769 + 0.04566*(t9515 - 1.*t2094*t9769) - 0.08055*t1219*t9832 + t5668*t9832 - 0.135*t778*t9832;
  p_output1[41]=t9624 + t9671 + t9673 + t9674 + t3371*t582*t9692 + t4502*t582*t9706;
  p_output1[42]=-0.135*(-1.*t4168*t582*t778 - 1.*t1219*t7924) - 0.08055*t8228 + t4168*t582*t9878 + t7924*t9892;
  p_output1[43]=t1998*t582*t9878 + t9892*t9928 - 0.135*(t7517 - 1.*t1219*t9928) - 0.08055*(-1.*t1219*t1998*t582 + t778*t9928);
  p_output1[44]=-1.*t3751*t9878 + t9892*t9961 - 0.135*(t3751*t778 - 1.*t1219*t9961) - 0.08055*(t1219*t3751 + t778*t9961);
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



void Jp_RightHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
