/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_RightPelvisRotation_src.h"

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
  double t1712;
  double t2024;
  double t988;
  double t1979;
  double t2029;
  double t982;
  double t2595;
  double t3195;
  double t3028;
  double t3050;
  double t3203;
  double t3237;
  double t3684;
  double t3823;
  double t3842;
  double t4041;
  double t4067;
  double t4382;
  double t4590;
  double t4789;
  double t2001;
  double t2102;
  double t2187;
  double t2615;
  double t2632;
  double t2666;
  double t3071;
  double t4033;
  double t4839;
  double t4841;
  double t4890;
  double t4891;
  double t4915;
  double t4932;
  double t5395;
  double t5423;
  double t5513;
  double t6001;
  double t6155;
  double t6371;
  double t5078;
  double t5082;
  double t5113;
  double t5220;
  double t7134;
  double t7135;
  double t7152;
  double t2546;
  double t2680;
  double t2699;
  double t4995;
  double t4996;
  double t5048;
  double t7176;
  double t7334;
  double t7345;
  double t7490;
  double t7517;
  double t7519;
  double t5550;
  double t6381;
  double t6385;
  double t7564;
  double t7586;
  double t7596;
  double t6536;
  double t6555;
  double t6588;
  double t7049;
  double t7057;
  double t7058;
  double t6863;
  double t6892;
  double t6906;
  double t7749;
  double t7756;
  double t7764;
  double t7800;
  double t7801;
  double t7805;
  double t7823;
  double t7829;
  double t7891;
  double t7902;
  double t7903;
  double t7914;
  t1712 = Cos(var1[5]);
  t2024 = Sin(var1[3]);
  t988 = Cos(var1[3]);
  t1979 = Sin(var1[4]);
  t2029 = Sin(var1[5]);
  t982 = Sin(var1[13]);
  t2595 = Cos(var1[13]);
  t3195 = Cos(var1[4]);
  t3028 = -1.*t1979;
  t3050 = 0. + t3028;
  t3203 = t1712*t982;
  t3237 = t2595*t2029;
  t3684 = 0. + t3203 + t3237;
  t3823 = t3195*t3684;
  t3842 = 0. + t3823;
  t4041 = t2595*t1712;
  t4067 = -1.*t982*t2029;
  t4382 = 0. + t4041 + t4067;
  t4590 = t3195*t4382;
  t4789 = 0. + t4590;
  t2001 = t988*t1712*t1979;
  t2102 = t2024*t2029;
  t2187 = t2001 + t2102;
  t2615 = -1.*t1712*t2024;
  t2632 = t988*t1979*t2029;
  t2666 = t2615 + t2632;
  t3071 = -1.e-6*t3050;
  t4033 = 0.00559*t3842;
  t4839 = -3.e-6*t4789;
  t4841 = t3071 + t4033 + t4839;
  t4890 = 0.00272*t3050;
  t4891 = -1.e-6*t3842;
  t4915 = 2.e-6*t4789;
  t4932 = t4890 + t4891 + t4915;
  t5395 = t1712*t2024*t1979;
  t5423 = -1.*t988*t2029;
  t5513 = t5395 + t5423;
  t6001 = t988*t1712;
  t6155 = t2024*t1979*t2029;
  t6371 = t6001 + t6155;
  t5078 = 2.e-6*t3050;
  t5082 = -3.e-6*t3842;
  t5113 = 0.00464*t4789;
  t5220 = t5078 + t5082 + t5113;
  t7134 = -1.*t1712*t982;
  t7135 = -1.*t2595*t2029;
  t7152 = 0. + t7134 + t7135;
  t2546 = t982*t2187;
  t2680 = t2595*t2666;
  t2699 = t2546 + t2680;
  t4995 = t2595*t2187;
  t4996 = -1.*t982*t2666;
  t5048 = t4995 + t4996;
  t7176 = 2.e-6*t7152;
  t7334 = -1.e-6*t4382;
  t7345 = t7176 + t7334;
  t7490 = -3.e-6*t7152;
  t7517 = 0.00559*t4382;
  t7519 = t7490 + t7517;
  t5550 = t982*t5513;
  t6381 = t2595*t6371;
  t6385 = t5550 + t6381;
  t7564 = 0.00464*t7152;
  t7586 = -3.e-6*t4382;
  t7596 = t7564 + t7586;
  t6536 = t2595*t5513;
  t6555 = -1.*t982*t6371;
  t6588 = t6536 + t6555;
  t7049 = t2595*t3195*t1712;
  t7057 = -1.*t3195*t982*t2029;
  t7058 = t7049 + t7057;
  t6863 = t3195*t1712*t982;
  t6892 = t2595*t3195*t2029;
  t6906 = t6863 + t6892;
  t7749 = 0.00272*t988*t3195;
  t7756 = -1.e-6*t2699;
  t7764 = 2.e-6*t5048;
  t7800 = t7749 + t7756 + t7764;
  t7801 = 0.00272*t3195*t2024;
  t7805 = -1.e-6*t6385;
  t7823 = 2.e-6*t6588;
  t7829 = t7801 + t7805 + t7823;
  t7891 = -0.00272*t1979;
  t7902 = -1.e-6*t6906;
  t7903 = 2.e-6*t7058;
  t7914 = t7891 + t7902 + t7903;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2699*t4841 + t5048*t5220 + t3195*t4932*t988;
  p_output1[10]=t2024*t3195*t4932 + t4841*t6385 + t5220*t6588;
  p_output1[11]=-1.*t1979*t4932 + t4841*t6906 + t5220*t7058;
  p_output1[12]=t2699*t7519 + t5048*t7596 + t3195*t7345*t988;
  p_output1[13]=t2024*t3195*t7345 + t6385*t7519 + t6588*t7596;
  p_output1[14]=-1.*t1979*t7345 + t6906*t7519 + t7058*t7596;
  p_output1[15]=t7800;
  p_output1[16]=t7829;
  p_output1[17]=t7914;
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
  p_output1[39]=t7800;
  p_output1[40]=t7829;
  p_output1[41]=t7914;
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



void Jdq_AMWorld_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
