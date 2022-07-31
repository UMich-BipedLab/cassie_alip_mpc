/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_RightHip_src.h"

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
  double t362;
  double t400;
  double t981;
  double t1059;
  double t1048;
  double t1085;
  double t1109;
  double t1130;
  double t1742;
  double t1765;
  double t1340;
  double t1371;
  double t1394;
  double t1434;
  double t1817;
  double t1825;
  double t1851;
  double t1923;
  double t1926;
  double t1929;
  double t1513;
  double t1527;
  double t1538;
  double t1548;
  double t1552;
  double t1555;
  double t1579;
  double t1582;
  double t1644;
  double t1678;
  double t1701;
  double t1710;
  double t1723;
  double t1726;
  double t1734;
  double t2401;
  double t2064;
  double t2145;
  double t2162;
  double t2517;
  double t2475;
  double t2536;
  double t2559;
  double t2672;
  double t2694;
  double t1989;
  double t2005;
  double t2008;
  double t2703;
  double t2706;
  double t2719;
  double t2732;
  double t2744;
  double t2745;
  double t1895;
  double t1911;
  double t1919;
  double t2790;
  double t2794;
  double t2805;
  double t2765;
  double t2767;
  double t2771;
  double t2772;
  double t2602;
  double t2611;
  double t2623;
  double t2870;
  double t2879;
  double t2926;
  double t2930;
  double t2932;
  double t1863;
  double t1867;
  double t1868;
  double t2859;
  double t2818;
  double t2955;
  double t2966;
  double t2975;
  double t2976;
  double t2977;
  double t2985;
  double t2991;
  double t3044;
  double t3053;
  double t3059;
  double t3346;
  double t3380;
  double t3381;
  double t3660;
  double t3666;
  double t3687;
  double t3883;
  double t3884;
  double t3887;
  double t3889;
  double t4378;
  double t4467;
  double t3326;
  double t3328;
  double t3331;
  double t2726;
  double t2746;
  double t3697;
  double t3725;
  double t3738;
  double t4879;
  double t3120;
  double t4425;
  double t4433;
  double t4919;
  double t4921;
  double t4943;
  double t4959;
  double t5025;
  double t2861;
  double t2865;
  double t4607;
  double t4626;
  double t4202;
  double t4237;
  double t4265;
  t362 = Cos(var1[3]);
  t400 = Sin(var1[3]);
  t981 = Cos(var1[4]);
  t1059 = Sin(var1[4]);
  t1048 = -1.*var2[2]*t981*t400;
  t1085 = -1.*var2[1]*t1059;
  t1109 = -1.*var1[1]*t981;
  t1130 = var1[2]*t400*t1059;
  t1742 = Cos(var1[5]);
  t1765 = Sin(var1[5]);
  t1340 = var2[2]*t362*t981;
  t1371 = var2[0]*t1059;
  t1394 = var1[0]*t981;
  t1434 = -1.*var1[2]*t362*t1059;
  t1817 = t362*t1742*t1059;
  t1825 = t400*t1765;
  t1851 = t1817 + t1825;
  t1923 = -1.*t362*t1742;
  t1926 = -1.*t400*t1059*t1765;
  t1929 = t1923 + t1926;
  t1513 = -1.*var2[1]*t362*t981;
  t1527 = var2[0]*t981*t400;
  t1538 = var1[0]*t362*t981;
  t1548 = var1[1]*t981*t400;
  t1552 = t1538 + t1548;
  t1555 = var2[3]*t1552;
  t1579 = var1[1]*t362*t1059;
  t1582 = -1.*var1[0]*t400*t1059;
  t1644 = -1.*var2[3]*t981*t400;
  t1678 = -1.*var2[4]*t362*t1059;
  t1701 = t1644 + t1678;
  t1710 = var2[3]*t362*t981;
  t1723 = -1.*var2[4]*t400*t1059;
  t1726 = t1710 + t1723;
  t1734 = -1.*var2[4]*t981;
  t2401 = Cos(var1[13]);
  t2064 = t1742*t400*t1059;
  t2145 = -1.*t362*t1765;
  t2162 = t2064 + t2145;
  t2517 = Sin(var1[13]);
  t2475 = t2401*t981*t1742;
  t2536 = -1.*t981*t2517*t1765;
  t2559 = t2475 + t2536;
  t2672 = -1.*t2401;
  t2694 = 1. + t2672;
  t1989 = -1.*t1742*t400;
  t2005 = t362*t1059*t1765;
  t2008 = t1989 + t2005;
  t2703 = 0.07996*t2694;
  t2706 = 0.135*t2517;
  t2719 = 0. + t2703 + t2706;
  t2732 = -0.135*t2694;
  t2744 = 0.07996*t2517;
  t2745 = 0. + t2732 + t2744;
  t1895 = -1.*t1742*t400*t1059;
  t1911 = t362*t1765;
  t1919 = t1895 + t1911;
  t2790 = t2401*t1851;
  t2794 = -1.*t2517*t2008;
  t2805 = t2790 + t2794;
  t2765 = -1.*var1[2];
  t2767 = -1.*t981*t1742*t2719;
  t2771 = -1.*t981*t2745*t1765;
  t2772 = 0. + t2765 + t2767 + t2771;
  t2602 = t362*t1742;
  t2611 = t400*t1059*t1765;
  t2623 = t2602 + t2611;
  t2870 = 0.135*t2401;
  t2879 = t2870 + t2744;
  t2926 = 0.07996*t2401;
  t2930 = -0.135*t2517;
  t2932 = t2926 + t2930;
  t1863 = t1742*t400;
  t1867 = -1.*t362*t1059*t1765;
  t1868 = t1863 + t1867;
  t2859 = -1.*t2517*t2162;
  t2818 = t2401*t1929;
  t2955 = -1.*t981*t1742*t2517;
  t2966 = -1.*t2401*t981*t1765;
  t2975 = t2955 + t2966;
  t2976 = t2719*t2162;
  t2977 = t2745*t2623;
  t2985 = 0. + var1[1] + t2976 + t2977;
  t2991 = t2975*t2985;
  t3044 = t2401*t2162;
  t3053 = -1.*t2517*t2623;
  t3059 = t3044 + t3053;
  t3346 = -1.*t2401*t1742*t1059;
  t3380 = t2517*t1059*t1765;
  t3381 = t3346 + t3380;
  t3660 = t981*t1742*t2719;
  t3666 = t981*t2745*t1765;
  t3687 = 0. + var1[2] + t3660 + t3666;
  t3883 = -1.*var1[0];
  t3884 = -1.*t2719*t1851;
  t3887 = -1.*t2745*t2008;
  t3889 = 0. + t3883 + t3884 + t3887;
  t4378 = -1.*t2517*t1851;
  t4467 = t2975*t3889;
  t3326 = t2401*t981*t1742*t400;
  t3328 = -1.*t981*t2517*t400*t1765;
  t3331 = t3326 + t3328;
  t2726 = t2719*t1851;
  t2746 = t2745*t2008;
  t3697 = t2401*t362*t981*t1742;
  t3725 = -1.*t362*t981*t2517*t1765;
  t3738 = t3697 + t3725;
  t4879 = 0. + var1[0] + t2726 + t2746;
  t3120 = t2859 + t2818;
  t4425 = t2401*t1868;
  t4433 = t4378 + t4425;
  t4919 = -1.*var1[1];
  t4921 = -1.*t2719*t2162;
  t4943 = -1.*t2745*t2623;
  t4959 = 0. + t4919 + t4921 + t4943;
  t5025 = 0.08055*t2559;
  t2861 = -1.*t2401*t2623;
  t2865 = t2859 + t2861;
  t4607 = -1.*t2401*t2008;
  t4626 = t4378 + t4607;
  t4202 = t2401*t1919;
  t4237 = -1.*t2517*t1929;
  t4265 = t4202 + t4237;
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
  p_output1[24]=-1.*t362*var2[2] + t400*var1[2]*var2[3];
  p_output1[25]=-1.*t400*var2[2] - 1.*t362*var1[2]*var2[3];
  p_output1[26]=t362*var2[0] + t400*var2[1] + (-1.*t400*var1[0] + t362*var1[1])*var2[3];
  p_output1[27]=-1.*t362*var2[3];
  p_output1[28]=-1.*t400*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1048 + t1085 - 1.*t362*t981*var1[2]*var2[3] + (t1109 + t1130)*var2[4];
  p_output1[31]=t1340 + t1371 - 1.*t400*t981*var1[2]*var2[3] + (t1394 + t1434)*var2[4];
  p_output1[32]=t1513 + t1527 + t1555 + (t1579 + t1582)*var2[4];
  p_output1[33]=t1701;
  p_output1[34]=t1726;
  p_output1[35]=t1734;
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
  p_output1[78]=t1048 + t1085 + (0.135*t1919 + 0.07996*t1929 - 1.*t362*t981*var1[2])*var2[3] + (t1109 + t1130 + 0.135*t1742*t362*t981 + 0.07996*t1765*t362*t981)*var2[4] + (0.07996*t1851 + 0.135*t1868)*var2[5];
  p_output1[79]=t1340 + t1371 + (0.135*t1851 + 0.07996*t2008 - 1.*t400*t981*var1[2])*var2[3] + (t1394 + t1434 + 0.135*t1742*t400*t981 + 0.07996*t1765*t400*t981)*var2[4] + (0.135*t1929 + 0.07996*t2162)*var2[5];
  p_output1[80]=t1513 + t1527 + t1555 + (t1579 + t1582 - 0.135*t1059*t1742 - 0.07996*t1059*t1765)*var2[4] + (0.07996*t1742*t981 - 0.135*t1765*t981)*var2[5];
  p_output1[81]=t1701;
  p_output1[82]=t1726;
  p_output1[83]=t1734;
  p_output1[84]=t2559*var2[1] + (-1.*t2162*t2401 + t2517*t2623)*var2[2] + (t2559*(t2726 + t2746) + t2772*t2805 + 0.08055*(t1919*t2517 + t2818) + 0.135*t400*t981)*var2[3] + ((t1059*t1742*t2719 + t1059*t1765*t2745)*t3059 + t2772*t3331 + t2985*t3381 + 0.135*t1059*t362 + 0.08055*(t1765*t2401*t362*t981 + t1742*t2517*t362*t981) + t2559*(t1742*t2719*t400*t981 + t1765*t2745*t400*t981))*var2[4] + (t2559*(t1929*t2719 + t2162*t2745) + 0.08055*(t1868*t2517 + t2790) + t2991 + t2772*t3120 + t3059*(t1765*t2719*t981 - 1.*t1742*t2745*t981))*var2[5] + (0.08055*t2805 + t2772*t2865 + t2559*(t2162*t2879 + t2623*t2932) + t2991 + t3059*(-1.*t1742*t2879*t981 - 1.*t1765*t2932*t981))*var2[13];
  p_output1[85]=(-1.*t1742*t2401*t981 + t1765*t2517*t981)*var2[0] + t2805*var2[2] + (0.08055*(t2008*t2401 + t1851*t2517) + t2559*(-1.*t1919*t2719 - 1.*t1929*t2745) + t3687*t4265 - 0.135*t362*t981)*var2[3] + ((-1.*t1059*t1742*t2719 - 1.*t1059*t1765*t2745)*t2805 + t3687*t3738 + t3381*t3889 + 0.135*t1059*t400 + t2559*(-1.*t1742*t2719*t362*t981 - 1.*t1765*t2745*t362*t981) + 0.08055*(t1765*t2401*t400*t981 + t1742*t2517*t400*t981))*var2[4] + (t2559*(-1.*t1868*t2719 - 1.*t1851*t2745) + 0.08055*(t1929*t2517 + t3044) + t3687*t4433 + t4467 + t2805*(-1.*t1765*t2719*t981 + t1742*t2745*t981))*var2[5] + (t2559*(-1.*t1851*t2879 - 1.*t2008*t2932) + 0.08055*t3059 + t4467 + t3687*t4626 + t2805*(t1742*t2879*t981 + t1765*t2932*t981))*var2[13];
  p_output1[86]=t3059*var2[0] + (-1.*t1851*t2401 + t2008*t2517)*var2[1] + ((t1919*t2719 + t1929*t2745)*t3059 + t2805*(t3884 + t3887) + t2805*t4879 + t4265*t4959)*var2[3] + (0.08055*(-1.*t1059*t1765*t2401 - 1.*t1059*t1742*t2517) + t3331*t4879 + t3738*t4959 + 0.135*t981 + t3059*(t1742*t2719*t362*t981 + t1765*t2745*t362*t981) + t2805*(-1.*t1742*t2719*t400*t981 - 1.*t1765*t2745*t400*t981))*var2[4] + ((-1.*t1929*t2719 - 1.*t2162*t2745)*t2805 + (t1868*t2719 + t1851*t2745)*t3059 + t3120*t4879 + t4433*t4959 + t5025)*var2[5] + (t2805*(-1.*t2162*t2879 - 1.*t2623*t2932) + (t1851*t2879 + t2008*t2932)*t3059 + t2865*t4879 + t4626*t4959 + t5025)*var2[13];
  p_output1[87]=t4265*var2[3] + t3738*var2[4] + t4433*var2[5] + t4626*var2[13];
  p_output1[88]=t2805*var2[3] + t3331*var2[4] + t3120*var2[5] + t2865*var2[13];
  p_output1[89]=t3381*var2[4] + t2975*var2[5] + t2975*var2[13];
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



void dJs_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
