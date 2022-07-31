/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftKnee_src.h"

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
  double t371;
  double t448;
  double t325;
  double t459;
  double t680;
  double t438;
  double t523;
  double t665;
  double t312;
  double t687;
  double t733;
  double t744;
  double t780;
  double t819;
  double t836;
  double t975;
  double t675;
  double t901;
  double t926;
  double t135;
  double t1012;
  double t1111;
  double t1112;
  double t103;
  double t1523;
  double t1529;
  double t1541;
  double t1546;
  double t1625;
  double t1194;
  double t1255;
  double t1285;
  double t1371;
  double t1507;
  double t1641;
  double t1644;
  double t1674;
  double t1677;
  double t1699;
  double t1901;
  double t1913;
  double t1924;
  double t1946;
  double t1986;
  double t1991;
  double t938;
  double t1134;
  double t1139;
  double t1313;
  double t1328;
  double t1345;
  double t1377;
  double t1384;
  double t1415;
  double t1460;
  double t1480;
  double t1657;
  double t1714;
  double t1718;
  double t1768;
  double t1812;
  double t1813;
  double t1830;
  double t1851;
  double t1859;
  double t1867;
  double t1869;
  double t1962;
  double t2013;
  double t2022;
  double t2071;
  double t2108;
  double t2111;
  double t2122;
  double t2131;
  double t2153;
  double t2178;
  double t2414;
  double t2420;
  double t2424;
  double t2534;
  double t2544;
  double t2522;
  double t2524;
  double t2608;
  double t2614;
  double t2616;
  double t2617;
  double t2553;
  double t2560;
  double t2580;
  double t2584;
  double t2464;
  double t2501;
  double t2525;
  double t2588;
  double t2594;
  double t2620;
  double t2636;
  double t2668;
  double t2669;
  double t2673;
  double t2676;
  double t2690;
  double t2762;
  double t2778;
  double t2783;
  double t2840;
  double t2842;
  double t2854;
  double t2877;
  double t2431;
  double t2447;
  double t2453;
  double t2505;
  double t2520;
  double t2637;
  double t2905;
  double t2933;
  double t2954;
  double t2978;
  double t2989;
  double t2997;
  double t3009;
  double t3084;
  double t3090;
  double t3095;
  double t3126;
  double t3132;
  double t3145;
  double t3157;
  double t2942;
  double t3010;
  double t3015;
  double t3131;
  double t3161;
  double t3162;
  double t3176;
  double t3182;
  double t3240;
  double t2393;
  double t2396;
  double t2409;
  double t3048;
  double t3257;
  double t3303;
  double t3394;
  double t3508;
  double t3551;
  double t3594;
  double t3628;
  double t3688;
  double t3762;
  double t3812;
  double t3844;
  double t4564;
  double t4519;
  t371 = Cos(var1[8]);
  t448 = Sin(var1[9]);
  t325 = Cos(var1[9]);
  t459 = Sin(var1[8]);
  t680 = Cos(var1[6]);
  t438 = -1.*t325*t371;
  t523 = t448*t459;
  t665 = 0. + t438 + t523;
  t312 = Sin(var1[6]);
  t687 = Sin(var1[7]);
  t733 = t371*t448;
  t744 = t325*t459;
  t780 = 0. + t733 + t744;
  t819 = t687*t780;
  t836 = 0. + t819;
  t975 = Sin(var1[5]);
  t675 = -1.*t312*t665;
  t901 = t680*t836;
  t926 = 0. + t675 + t901;
  t135 = Cos(var1[5]);
  t1012 = t680*t665;
  t1111 = t312*t836;
  t1112 = 0. + t1012 + t1111;
  t103 = Sin(var1[3]);
  t1523 = t325*t371;
  t1529 = -1.*t448*t459;
  t1541 = 0. + t1523 + t1529;
  t1546 = t687*t1541;
  t1625 = 0. + t1546;
  t1194 = Cos(var1[3]);
  t1255 = Cos(var1[4]);
  t1285 = Cos(var1[7]);
  t1371 = Sin(var1[4]);
  t1507 = -1.*t312*t780;
  t1641 = t680*t1625;
  t1644 = 0. + t1507 + t1641;
  t1674 = t680*t780;
  t1677 = t312*t1625;
  t1699 = 0. + t1674 + t1677;
  t1901 = -1.*t1285;
  t1913 = 0. + t1901;
  t1924 = t680*t1913;
  t1946 = 0. + t1924;
  t1986 = t1913*t312;
  t1991 = 0. + t1986;
  t938 = t135*t926;
  t1134 = -1.*t975*t1112;
  t1139 = 0. + t938 + t1134;
  t1313 = t1285*t780;
  t1328 = 0. + t1313;
  t1345 = t1255*t1328;
  t1377 = t975*t926;
  t1384 = t135*t1112;
  t1415 = 0. + t1377 + t1384;
  t1460 = t1371*t1415;
  t1480 = 0. + t1345 + t1460;
  t1657 = t135*t1644;
  t1714 = -1.*t975*t1699;
  t1718 = 0. + t1657 + t1714;
  t1768 = t1285*t1541;
  t1812 = 0. + t1768;
  t1813 = t1255*t1812;
  t1830 = t975*t1644;
  t1851 = t135*t1699;
  t1859 = 0. + t1830 + t1851;
  t1867 = t1371*t1859;
  t1869 = 0. + t1813 + t1867;
  t1962 = t135*t1946;
  t2013 = -1.*t975*t1991;
  t2022 = 0. + t1962 + t2013;
  t2071 = t1946*t975;
  t2108 = t135*t1991;
  t2111 = 0. + t2071 + t2108;
  t2122 = t1371*t2111;
  t2131 = 0. + t687;
  t2153 = t1255*t2131;
  t2178 = 0. + t2122 + t2153;
  t2414 = -1.*t1371*t1812;
  t2420 = t1255*t1859;
  t2424 = 0. + t2414 + t2420;
  t2534 = -1.*t325;
  t2544 = 1. + t2534;
  t2522 = -1.*t371;
  t2524 = 1. + t2522;
  t2608 = -0.08055*t2544;
  t2614 = -0.04845*t325;
  t2616 = 0.02300000000000002*t448;
  t2617 = 0. + t2608 + t2614 + t2616;
  t2553 = -0.13004*t2544;
  t2560 = -0.15304*t325;
  t2580 = 0.0321*t448;
  t2584 = 0. + t2553 + t2560 + t2580;
  t2464 = -1.*t680;
  t2501 = 1. + t2464;
  t2525 = -0.01004*t2524;
  t2588 = t371*t2584;
  t2594 = 0.08055*t459;
  t2620 = t2617*t459;
  t2636 = 0. + t2525 + t2588 + t2594 + t2620;
  t2668 = -1.*t1285;
  t2669 = 1. + t2668;
  t2673 = 0.135*t2669;
  t2676 = 0.1327*t1285;
  t2690 = 0.08055*t687;
  t2762 = -0.08055*t2524;
  t2778 = t371*t2617;
  t2783 = -0.01004*t459;
  t2840 = -1.*t2584*t459;
  t2842 = 0. + t2762 + t2778 + t2783 + t2840;
  t2854 = t687*t2842;
  t2877 = 0. + t2673 + t2676 + t2690 + t2854;
  t2431 = t1255*t2111;
  t2447 = -1.*t1371*t2131;
  t2453 = 0. + t2431 + t2447;
  t2505 = 0.135*t2501;
  t2520 = 0.07996*t312;
  t2637 = -1.*t312*t2636;
  t2905 = t680*t2877;
  t2933 = 0. + t2505 + t2520 + t2637 + t2905;
  t2954 = 0.07996*t2501;
  t2978 = -0.135*t312;
  t2989 = t680*t2636;
  t2997 = t312*t2877;
  t3009 = 0. + t2954 + t2978 + t2989 + t2997;
  t3084 = -0.08055*t2669;
  t3090 = 0.0022999999999999965*t687;
  t3095 = t1285*t2842;
  t3126 = 0. + t3084 + t3090 + t3095;
  t3132 = t975*t2933;
  t3145 = t135*t3009;
  t3157 = 0. + t3132 + t3145;
  t2942 = t135*t2933;
  t3010 = -1.*t975*t3009;
  t3015 = 0. + t2942 + t3010;
  t3131 = -1.*t1371*t3126;
  t3161 = t1255*t3157;
  t3162 = 0. + t3131 + t3161;
  t3176 = t1255*t3126;
  t3182 = t1371*t3157;
  t3240 = 0. + t3176 + t3182;
  t2393 = -1.*t1371*t1328;
  t2396 = t1255*t1415;
  t2409 = 0. + t2393 + t2396;
  t3048 = t2022*t3015;
  t3257 = -1.*t3015*t1718;
  t3303 = -1.*t2022*t3015;
  t3394 = t1139*t3015;
  t3508 = -1.*t1139*t3015;
  t3551 = t3015*t1718;
  t3594 = t2131*t3126;
  t3628 = -1.*t3126*t1812;
  t3688 = -1.*t2131*t3126;
  t3762 = t1328*t3126;
  t3812 = -1.*t1328*t3126;
  t3844 = t3126*t1812;
  t4564 = t780*t2636;
  t4519 = -1.*t2636*t665;
  p_output1[0]=0. - 1.*t103*t1139 + t1194*t1480;
  p_output1[1]=0. - 1.*t103*t1718 + t1194*t1869;
  p_output1[2]=0. - 1.*t103*t2022 + t1194*t2178;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1139*t1194 + t103*t1480;
  p_output1[7]=0. + t1194*t1718 + t103*t1869;
  p_output1[8]=0. + t1194*t2022 + t103*t2178;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2409;
  p_output1[13]=t2424;
  p_output1[14]=t2453;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2424*(t3048 + t2453*t3162 + t2178*t3240) + t2453*(-1.*t2424*t3162 - 1.*t1869*t3240 + t3257);
  p_output1[19]=t2409*(-1.*t2453*t3162 - 1.*t2178*t3240 + t3303) + t2453*(t2409*t3162 + t1480*t3240 + t3394);
  p_output1[20]=t2424*(-1.*t2409*t3162 - 1.*t1480*t3240 + t3508) + t2409*(t2424*t3162 + t1869*t3240 + t3551);
  p_output1[21]=t2409;
  p_output1[22]=t2424;
  p_output1[23]=t2453;
  p_output1[24]=t1718*(t3048 + t2111*t3157 + t3594) + t2022*(-1.*t1859*t3157 + t3257 + t3628);
  p_output1[25]=t1139*(-1.*t2111*t3157 + t3303 + t3688) + t2022*(t1415*t3157 + t3394 + t3762);
  p_output1[26]=t1718*(-1.*t1415*t3157 + t3508 + t3812) + t1139*(t1859*t3157 + t3551 + t3844);
  p_output1[27]=t1139;
  p_output1[28]=t1718;
  p_output1[29]=t2022;
  p_output1[30]=t1812*(t1946*t2933 + t1991*t3009 + t3594) + t2131*(-1.*t1644*t2933 - 1.*t1699*t3009 + t3628);
  p_output1[31]=t1328*(-1.*t1946*t2933 - 1.*t1991*t3009 + t3688) + t2131*(t1112*t3009 + t3762 + t2933*t926);
  p_output1[32]=t1328*(t1644*t2933 + t1699*t3009 + t3844) + t1812*(-1.*t1112*t3009 + t3812 - 1.*t2933*t926);
  p_output1[33]=t1328;
  p_output1[34]=t1812;
  p_output1[35]=t2131;
  p_output1[36]=t1812*(0. + t1913*t2877 + t3594) - 0.135*t665 + t2131*(-1.*t1625*t2877 + t3628 - 1.*t2636*t780) + 0.07996*t836;
  p_output1[37]=0.07996*t1625 + t1328*(0. - 1.*t1913*t2877 + t3688) - 0.135*t780 + t2131*(t3762 + t2636*t665 + t2877*t836);
  p_output1[38]=0. + 0.07996*t1913 + t1328*(t1625*t2877 + t3844 + t4564) + t1812*(t3812 + t4519 - 1.*t2877*t836);
  p_output1[39]=t1328;
  p_output1[40]=t1812;
  p_output1[41]=t2131;
  p_output1[42]=0. + 0.0022999999999999965*t780;
  p_output1[43]=0. + 0.135*t1541 + 0.1327*t665;
  p_output1[44]=-0.08055 + (0. + t1541*t2842 + t4564)*t665 + t780*(0. + t4519 - 1.*t2842*t780);
  p_output1[45]=t665;
  p_output1[46]=t780;
  p_output1[47]=0.;
  p_output1[48]=0. - 0.08055*t325 - 1.*t2617*t325 - 0.01004*t448 - 1.*t2584*t448;
  p_output1[49]=0. - 0.01004*t325 - 1.*t2584*t325 + 0.08055*t448 + t2617*t448;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=-0.0321;
  p_output1[55]=0.02300000000000002;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
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



void Jb_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
