/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightThigh_src.h"

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
  double t486;
  double t234;
  double t285;
  double t336;
  double t440;
  double t535;
  double t581;
  double t606;
  double t624;
  double t225;
  double t736;
  double t737;
  double t741;
  double t467;
  double t655;
  double t664;
  double t747;
  double t48;
  double t1225;
  double t1231;
  double t1241;
  double t864;
  double t887;
  double t869;
  double t977;
  double t1323;
  double t1327;
  double t1343;
  double t1233;
  double t1284;
  double t1299;
  double t1823;
  double t1843;
  double t1722;
  double t1785;
  double t679;
  double t782;
  double t810;
  double t895;
  double t899;
  double t925;
  double t1009;
  double t1082;
  double t1119;
  double t1121;
  double t1125;
  double t1315;
  double t1366;
  double t1373;
  double t1428;
  double t1453;
  double t1478;
  double t1601;
  double t1602;
  double t1606;
  double t1611;
  double t1619;
  double t1799;
  double t1858;
  double t1883;
  double t1894;
  double t1930;
  double t1933;
  double t1967;
  double t2007;
  double t2050;
  double t2055;
  double t2366;
  double t2372;
  double t2406;
  double t2720;
  double t2539;
  double t2549;
  double t2600;
  double t2608;
  double t2662;
  double t2681;
  double t2715;
  double t2743;
  double t2758;
  double t2799;
  double t2815;
  double t2829;
  double t2863;
  double t2914;
  double t2923;
  double t2943;
  double t2950;
  double t2498;
  double t2506;
  double t2522;
  double t2998;
  double t3004;
  double t3011;
  double t3013;
  double t3045;
  double t2564;
  double t2569;
  double t2864;
  double t2956;
  double t2963;
  double t3111;
  double t3128;
  double t3133;
  double t3140;
  double t3235;
  double t3242;
  double t3246;
  double t2981;
  double t3048;
  double t3051;
  double t3174;
  double t3256;
  double t3265;
  double t3272;
  double t3312;
  double t3327;
  double t2309;
  double t2333;
  double t2350;
  double t3052;
  double t3368;
  double t3452;
  double t3543;
  double t3669;
  double t3700;
  double t3748;
  double t3778;
  double t3800;
  double t3843;
  double t3879;
  double t3917;
  t486 = Cos(var1[13]);
  t234 = Cos(var1[15]);
  t285 = -1.*t234;
  t336 = 0. + t285;
  t440 = Sin(var1[13]);
  t535 = Sin(var1[14]);
  t581 = Sin(var1[15]);
  t606 = t535*t581;
  t624 = 0. + t606;
  t225 = Cos(var1[5]);
  t736 = t486*t336;
  t737 = t440*t624;
  t741 = 0. + t736 + t737;
  t467 = -1.*t336*t440;
  t655 = t486*t624;
  t664 = 0. + t467 + t655;
  t747 = Sin(var1[5]);
  t48 = Sin(var1[3]);
  t1225 = t234*t535;
  t1231 = 0. + t1225;
  t1241 = 0. + t581;
  t864 = Cos(var1[3]);
  t887 = Cos(var1[14]);
  t869 = Cos(var1[4]);
  t977 = Sin(var1[4]);
  t1323 = t440*t1231;
  t1327 = t486*t1241;
  t1343 = 0. + t1323 + t1327;
  t1233 = t486*t1231;
  t1284 = -1.*t440*t1241;
  t1299 = 0. + t1233 + t1284;
  t1823 = -1.*t887*t440;
  t1843 = 0. + t1823;
  t1722 = -1.*t486*t887;
  t1785 = 0. + t1722;
  t679 = t225*t664;
  t782 = -1.*t741*t747;
  t810 = 0. + t679 + t782;
  t895 = t887*t581;
  t899 = 0. + t895;
  t925 = t869*t899;
  t1009 = t225*t741;
  t1082 = t664*t747;
  t1119 = 0. + t1009 + t1082;
  t1121 = t977*t1119;
  t1125 = 0. + t925 + t1121;
  t1315 = t225*t1299;
  t1366 = -1.*t1343*t747;
  t1373 = 0. + t1315 + t1366;
  t1428 = t887*t234;
  t1453 = 0. + t1428;
  t1478 = t1453*t869;
  t1601 = t225*t1343;
  t1602 = t1299*t747;
  t1606 = 0. + t1601 + t1602;
  t1611 = t977*t1606;
  t1619 = 0. + t1478 + t1611;
  t1799 = t1785*t225;
  t1858 = -1.*t1843*t747;
  t1883 = 0. + t1799 + t1858;
  t1894 = 0. + t535;
  t1930 = t869*t1894;
  t1933 = t225*t1843;
  t1967 = t1785*t747;
  t2007 = 0. + t1933 + t1967;
  t2050 = t977*t2007;
  t2055 = 0. + t1930 + t2050;
  t2366 = -1.*t1453*t977;
  t2372 = t869*t1606;
  t2406 = 0. + t2366 + t2372;
  t2720 = 1. + t285;
  t2539 = -1.*t486;
  t2549 = 1. + t2539;
  t2600 = -1.*t887;
  t2608 = 1. + t2600;
  t2662 = -0.135*t2608;
  t2681 = -0.1708*t887;
  t2715 = 0.08055*t535;
  t2743 = -0.08055*t2720;
  t2758 = -0.08045*t234;
  t2799 = 0.0598*t581;
  t2815 = 0. + t2743 + t2758 + t2799;
  t2829 = t535*t2815;
  t2863 = 0. + t2662 + t2681 + t2715 + t2829;
  t2914 = -0.01004*t2720;
  t2923 = -0.06984*t234;
  t2943 = 0.00010000000000000286*t581;
  t2950 = 0. + t2914 + t2923 + t2943;
  t2498 = -1.*t1894*t977;
  t2506 = t869*t2007;
  t2522 = 0. + t2498 + t2506;
  t2998 = 0.07996*t2549;
  t3004 = 0.135*t440;
  t3011 = t440*t2863;
  t3013 = t486*t2950;
  t3045 = 0. + t2998 + t3004 + t3011 + t3013;
  t2564 = -0.135*t2549;
  t2569 = 0.07996*t440;
  t2864 = t486*t2863;
  t2956 = -1.*t440*t2950;
  t2963 = 0. + t2564 + t2569 + t2864 + t2956;
  t3111 = -0.08055*t2608;
  t3128 = 0.0358*t535;
  t3133 = t887*t2815;
  t3140 = 0. + t3111 + t3128 + t3133;
  t3235 = t225*t3045;
  t3242 = t2963*t747;
  t3246 = 0. + t3235 + t3242;
  t2981 = t225*t2963;
  t3048 = -1.*t3045*t747;
  t3051 = 0. + t2981 + t3048;
  t3174 = -1.*t3140*t977;
  t3256 = t869*t3246;
  t3265 = 0. + t3174 + t3256;
  t3272 = t869*t3140;
  t3312 = t977*t3246;
  t3327 = 0. + t3272 + t3312;
  t2309 = -1.*t899*t977;
  t2333 = t869*t1119;
  t2350 = 0. + t2309 + t2333;
  t3052 = t1883*t3051;
  t3368 = -1.*t3051*t1373;
  t3452 = -1.*t1883*t3051;
  t3543 = t3051*t810;
  t3669 = t3051*t1373;
  t3700 = -1.*t3051*t810;
  t3748 = t1894*t3140;
  t3778 = -1.*t1453*t3140;
  t3800 = -1.*t1894*t3140;
  t3843 = t3140*t899;
  t3879 = t1453*t3140;
  t3917 = -1.*t3140*t899;
  p_output1[0]=0. - 1.*t48*t810 + t1125*t864;
  p_output1[1]=0. - 1.*t1373*t48 + t1619*t864;
  p_output1[2]=0. - 1.*t1883*t48 + t2055*t864;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1125*t48 + t810*t864;
  p_output1[7]=0. + t1619*t48 + t1373*t864;
  p_output1[8]=0. + t2055*t48 + t1883*t864;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2350;
  p_output1[13]=t2406;
  p_output1[14]=t2522;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2406*(t3052 + t2522*t3265 + t2055*t3327) + t2522*(-1.*t2406*t3265 - 1.*t1619*t3327 + t3368);
  p_output1[19]=t2350*(-1.*t2522*t3265 - 1.*t2055*t3327 + t3452) + t2522*(t2350*t3265 + t1125*t3327 + t3543);
  p_output1[20]=t2350*(t2406*t3265 + t1619*t3327 + t3669) + t2406*(-1.*t2350*t3265 - 1.*t1125*t3327 + t3700);
  p_output1[21]=t2350;
  p_output1[22]=t2406;
  p_output1[23]=t2522;
  p_output1[24]=t1373*(t3052 + t2007*t3246 + t3748) + t1883*(-1.*t1606*t3246 + t3368 + t3778);
  p_output1[25]=t1883*(t1119*t3246 + t3543 + t3843) + (-1.*t2007*t3246 + t3452 + t3800)*t810;
  p_output1[26]=t1373*(-1.*t1119*t3246 + t3700 + t3917) + (t1606*t3246 + t3669 + t3879)*t810;
  p_output1[27]=t810;
  p_output1[28]=t1373;
  p_output1[29]=t1883;
  p_output1[30]=t1453*(t1785*t2963 + t1843*t3045 + t3748) + t1894*(-1.*t1299*t2963 - 1.*t1343*t3045 + t3778);
  p_output1[31]=t1894*(t3843 + t2963*t664 + t3045*t741) + (-1.*t1785*t2963 - 1.*t1843*t3045 + t3800)*t899;
  p_output1[32]=t1453*(t3917 - 1.*t2963*t664 - 1.*t3045*t741) + (t1299*t2963 + t1343*t3045 + t3879)*t899;
  p_output1[33]=t899;
  p_output1[34]=t1453;
  p_output1[35]=t1894;
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
  p_output1[78]=0.135*t336 + (-1.*t1231*t2863 - 1.*t1241*t2950 + t3778)*t535 + 0.07996*t624 + t1453*(0. + t3140*t535 - 1.*t2863*t887);
  p_output1[79]=0.07996*t1231 + 0.135*t1241 + t535*(t2950*t336 + t3843 + t2863*t624) + (0. - 1.*t3140*t535 + t2863*t887)*t899;
  p_output1[80]=0. + t1453*(-1.*t2950*t336 + t3917 - 1.*t2863*t624) - 0.07996*t887 + (t1231*t2863 + t1241*t2950 + t3879)*t899;
  p_output1[81]=t899;
  p_output1[82]=t1453;
  p_output1[83]=t1894;
  p_output1[84]=0. + 0.0358*t581;
  p_output1[85]=0. + 0.0358*t234;
  p_output1[86]=-0.08055 + t581*(0. + t234*t2950 - 1.*t2815*t581) - 1.*t234*(0. + t234*t2815 + t2950*t581);
  p_output1[87]=t336;
  p_output1[88]=t1241;
  p_output1[89]=0.;
  p_output1[90]=-0.00010000000000000286;
  p_output1[91]=0.0598;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
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



void Jb_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
