/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_LeftAbductionJoint_src.h"

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
  double t2209;
  double t2467;
  double t2749;
  double t2794;
  double t2779;
  double t2796;
  double t2801;
  double t2812;
  double t3036;
  double t3081;
  double t2829;
  double t2897;
  double t2898;
  double t2902;
  double t3089;
  double t3090;
  double t3091;
  double t3137;
  double t3141;
  double t3143;
  double t2934;
  double t2949;
  double t2954;
  double t2972;
  double t2976;
  double t2982;
  double t2985;
  double t2995;
  double t3002;
  double t3003;
  double t3006;
  double t3010;
  double t3016;
  double t3029;
  double t3031;
  t2209 = Cos(var1[3]);
  t2467 = Sin(var1[3]);
  t2749 = Cos(var1[4]);
  t2794 = Sin(var1[4]);
  t2779 = -1.*var2[2]*t2749*t2467;
  t2796 = -1.*var2[1]*t2794;
  t2801 = -1.*var1[1]*t2749;
  t2812 = var1[2]*t2467*t2794;
  t3036 = Cos(var1[5]);
  t3081 = Sin(var1[5]);
  t2829 = var2[2]*t2209*t2749;
  t2897 = var2[0]*t2794;
  t2898 = var1[0]*t2749;
  t2902 = -1.*var1[2]*t2209*t2794;
  t3089 = t2209*t3036*t2794;
  t3090 = t2467*t3081;
  t3091 = t3089 + t3090;
  t3137 = -1.*t2209*t3036;
  t3141 = -1.*t2467*t2794*t3081;
  t3143 = t3137 + t3141;
  t2934 = -1.*var2[1]*t2209*t2749;
  t2949 = var2[0]*t2749*t2467;
  t2954 = var1[0]*t2209*t2749;
  t2972 = var1[1]*t2749*t2467;
  t2976 = t2954 + t2972;
  t2982 = var2[3]*t2976;
  t2985 = var1[1]*t2209*t2794;
  t2995 = -1.*var1[0]*t2467*t2794;
  t3002 = -1.*var2[3]*t2749*t2467;
  t3003 = -1.*var2[4]*t2209*t2794;
  t3006 = t3002 + t3003;
  t3010 = var2[3]*t2209*t2749;
  t3016 = -1.*var2[4]*t2467*t2794;
  t3029 = t3010 + t3016;
  t3031 = -1.*var2[4]*t2749;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t2209*var2[2] + t2467*var1[2]*var2[3];
  p_output1[25]=-1.*t2467*var2[2] - 1.*t2209*var1[2]*var2[3];
  p_output1[26]=t2209*var2[0] + t2467*var2[1] + (-1.*t2467*var1[0] + t2209*var1[1])*var2[3];
  p_output1[27]=-1.*t2209*var2[3];
  p_output1[28]=-1.*t2467*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2779 + t2796 - 1.*t2209*t2749*var1[2]*var2[3] + (t2801 + t2812)*var2[4];
  p_output1[31]=t2829 + t2897 - 1.*t2467*t2749*var1[2]*var2[3] + (t2898 + t2902)*var2[4];
  p_output1[32]=t2934 + t2949 + t2982 + (t2985 + t2995)*var2[4];
  p_output1[33]=t3006;
  p_output1[34]=t3029;
  p_output1[35]=t3031;
  p_output1[36]=t2779 + t2796 + (-0.135*(-1.*t2467*t2794*t3036 + t2209*t3081) + 0.07996*t3143 - 1.*t2209*t2749*var1[2])*var2[3] + (t2801 + t2812 - 0.135*t2209*t2749*t3036 + 0.07996*t2209*t2749*t3081)*var2[4] + (-0.135*(t2467*t3036 - 1.*t2209*t2794*t3081) + 0.07996*t3091)*var2[5];
  p_output1[37]=t2829 + t2897 + (0.07996*(-1.*t2467*t3036 + t2209*t2794*t3081) - 0.135*t3091 - 1.*t2467*t2749*var1[2])*var2[3] + (t2898 + t2902 - 0.135*t2467*t2749*t3036 + 0.07996*t2467*t2749*t3081)*var2[4] + (0.07996*(t2467*t2794*t3036 - 1.*t2209*t3081) - 0.135*t3143)*var2[5];
  p_output1[38]=t2934 + t2949 + t2982 + (t2985 + t2995 + 0.135*t2794*t3036 - 0.07996*t2794*t3081)*var2[4] + (0.07996*t2749*t3036 + 0.135*t2749*t3081)*var2[5];
  p_output1[39]=t3006;
  p_output1[40]=t3029;
  p_output1[41]=t3031;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void dJs_LeftAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
