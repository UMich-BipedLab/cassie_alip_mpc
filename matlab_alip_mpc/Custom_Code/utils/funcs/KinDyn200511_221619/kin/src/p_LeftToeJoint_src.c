/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeJoint_src.h"

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
  double t345;
  double t407;
  double t209;
  double t362;
  double t419;
  double t475;
  double t504;
  double t595;
  double t649;
  double t1399;
  double t1517;
  double t1541;
  double t405;
  double t438;
  double t459;
  double t2123;
  double t2190;
  double t2226;
  double t2268;
  double t1929;
  double t2082;
  double t2107;
  double t2485;
  double t3056;
  double t3173;
  double t3174;
  double t3317;
  double t2875;
  double t2925;
  double t2986;
  double t3451;
  double t3465;
  double t3551;
  double t4279;
  double t4400;
  double t4485;
  double t4668;
  double t4807;
  double t4809;
  double t4811;
  double t5232;
  double t5259;
  double t5340;
  double t5470;
  double t5473;
  double t5498;
  double t5556;
  double t5971;
  double t6262;
  double t6307;
  double t6643;
  double t6644;
  double t6722;
  double t6848;
  double t6887;
  double t6901;
  double t6975;
  double t7034;
  double t7036;
  double t7063;
  double t7150;
  double t7153;
  double t7155;
  double t7227;
  double t7229;
  double t7299;
  double t7312;
  double t7373;
  double t7374;
  double t7376;
  double t7439;
  double t7449;
  double t7451;
  double t645;
  double t666;
  double t670;
  double t1670;
  double t1709;
  double t1831;
  double t7654;
  double t7676;
  double t7678;
  double t7610;
  double t7611;
  double t7644;
  double t2242;
  double t2294;
  double t2381;
  double t2495;
  double t2503;
  double t2572;
  double t7702;
  double t7707;
  double t7709;
  double t3266;
  double t3323;
  double t3333;
  double t3967;
  double t4001;
  double t4063;
  double t4533;
  double t4671;
  double t4708;
  double t7771;
  double t7772;
  double t7773;
  double t7778;
  double t7779;
  double t7780;
  double t4958;
  double t5060;
  double t5159;
  double t5506;
  double t5746;
  double t5748;
  double t7783;
  double t7787;
  double t7789;
  double t7796;
  double t7798;
  double t7799;
  double t6503;
  double t6559;
  double t6621;
  double t6946;
  double t7015;
  double t7017;
  double t7807;
  double t7808;
  double t7811;
  double t7816;
  double t7817;
  double t7821;
  double t7088;
  double t7090;
  double t7093;
  double t7307;
  double t7342;
  double t7364;
  double t7827;
  double t7829;
  double t7832;
  double t7835;
  double t7837;
  double t7839;
  double t7407;
  double t7409;
  double t7435;
  double t7844;
  double t7846;
  double t7849;
  double t7856;
  double t7857;
  double t7859;
  double t7890;
  double t7891;
  double t7892;
  double t7911;
  double t7923;
  double t7926;
  double t7930;
  double t7931;
  double t7932;
  double t7937;
  double t7938;
  double t7941;
  double t7951;
  double t7953;
  double t7955;
  double t7960;
  double t7961;
  double t7962;
  double t7967;
  double t7970;
  double t7972;
  double t7976;
  double t7977;
  double t7979;
  double t7982;
  double t7984;
  double t7987;
  double t7990;
  double t7991;
  double t7992;
  double t7994;
  double t7995;
  double t7996;
  t345 = Cos(var1[5]);
  t407 = Sin(var1[3]);
  t209 = Cos(var1[3]);
  t362 = Sin(var1[4]);
  t419 = Sin(var1[5]);
  t475 = Cos(var1[6]);
  t504 = -1.*t475;
  t595 = 1. + t504;
  t649 = Sin(var1[6]);
  t1399 = -1.*t345*t407;
  t1517 = t209*t362*t419;
  t1541 = t1399 + t1517;
  t405 = t209*t345*t362;
  t438 = t407*t419;
  t459 = t405 + t438;
  t2123 = Cos(var1[7]);
  t2190 = -1.*t2123;
  t2226 = 1. + t2190;
  t2268 = Sin(var1[7]);
  t1929 = t475*t1541;
  t2082 = t459*t649;
  t2107 = t1929 + t2082;
  t2485 = Cos(var1[4]);
  t3056 = Cos(var1[8]);
  t3173 = -1.*t3056;
  t3174 = 1. + t3173;
  t3317 = Sin(var1[8]);
  t2875 = t209*t2485*t2123;
  t2925 = t2107*t2268;
  t2986 = t2875 + t2925;
  t3451 = t475*t459;
  t3465 = -1.*t1541*t649;
  t3551 = t3451 + t3465;
  t4279 = Cos(var1[9]);
  t4400 = -1.*t4279;
  t4485 = 1. + t4400;
  t4668 = Sin(var1[9]);
  t4807 = t3056*t2986;
  t4809 = t3551*t3317;
  t4811 = t4807 + t4809;
  t5232 = t3056*t3551;
  t5259 = -1.*t2986*t3317;
  t5340 = t5232 + t5259;
  t5470 = Cos(var1[10]);
  t5473 = -1.*t5470;
  t5498 = 1. + t5473;
  t5556 = Sin(var1[10]);
  t5971 = -1.*t4668*t4811;
  t6262 = t4279*t5340;
  t6307 = t5971 + t6262;
  t6643 = t4279*t4811;
  t6644 = t4668*t5340;
  t6722 = t6643 + t6644;
  t6848 = Cos(var1[11]);
  t6887 = -1.*t6848;
  t6901 = 1. + t6887;
  t6975 = Sin(var1[11]);
  t7034 = t5556*t6307;
  t7036 = t5470*t6722;
  t7063 = t7034 + t7036;
  t7150 = t5470*t6307;
  t7153 = -1.*t5556*t6722;
  t7155 = t7150 + t7153;
  t7227 = Cos(var1[12]);
  t7229 = -1.*t7227;
  t7299 = 1. + t7229;
  t7312 = Sin(var1[12]);
  t7373 = -1.*t6975*t7063;
  t7374 = t6848*t7155;
  t7376 = t7373 + t7374;
  t7439 = t6848*t7063;
  t7449 = t6975*t7155;
  t7451 = t7439 + t7449;
  t645 = 0.07996*t595;
  t666 = -0.135*t649;
  t670 = 0. + t645 + t666;
  t1670 = 0.135*t595;
  t1709 = 0.07996*t649;
  t1831 = 0. + t1670 + t1709;
  t7654 = t209*t345;
  t7676 = t407*t362*t419;
  t7678 = t7654 + t7676;
  t7610 = t345*t407*t362;
  t7611 = -1.*t209*t419;
  t7644 = t7610 + t7611;
  t2242 = 0.135*t2226;
  t2294 = 0.08055*t2268;
  t2381 = 0. + t2242 + t2294;
  t2495 = -0.08055*t2226;
  t2503 = 0.135*t2268;
  t2572 = 0. + t2495 + t2503;
  t7702 = t475*t7678;
  t7707 = t7644*t649;
  t7709 = t7702 + t7707;
  t3266 = -0.08055*t3174;
  t3323 = -0.01004*t3317;
  t3333 = 0. + t3266 + t3323;
  t3967 = -0.01004*t3174;
  t4001 = 0.08055*t3317;
  t4063 = 0. + t3967 + t4001;
  t4533 = -0.08055*t4485;
  t4671 = -0.13004*t4668;
  t4708 = 0. + t4533 + t4671;
  t7771 = t2485*t2123*t407;
  t7772 = t7709*t2268;
  t7773 = t7771 + t7772;
  t7778 = t475*t7644;
  t7779 = -1.*t7678*t649;
  t7780 = t7778 + t7779;
  t4958 = -0.13004*t4485;
  t5060 = 0.08055*t4668;
  t5159 = 0. + t4958 + t5060;
  t5506 = -0.19074*t5498;
  t5746 = 0.03315*t5556;
  t5748 = 0. + t5506 + t5746;
  t7783 = t3056*t7773;
  t7787 = t7780*t3317;
  t7789 = t7783 + t7787;
  t7796 = t3056*t7780;
  t7798 = -1.*t7773*t3317;
  t7799 = t7796 + t7798;
  t6503 = -0.03315*t5498;
  t6559 = -0.19074*t5556;
  t6621 = 0. + t6503 + t6559;
  t6946 = -0.01315*t6901;
  t7015 = -0.62554*t6975;
  t7017 = 0. + t6946 + t7015;
  t7807 = -1.*t4668*t7789;
  t7808 = t4279*t7799;
  t7811 = t7807 + t7808;
  t7816 = t4279*t7789;
  t7817 = t4668*t7799;
  t7821 = t7816 + t7817;
  t7088 = -0.62554*t6901;
  t7090 = 0.01315*t6975;
  t7093 = 0. + t7088 + t7090;
  t7307 = -1.03354*t7299;
  t7342 = 0.05315*t7312;
  t7364 = 0. + t7307 + t7342;
  t7827 = t5556*t7811;
  t7829 = t5470*t7821;
  t7832 = t7827 + t7829;
  t7835 = t5470*t7811;
  t7837 = -1.*t5556*t7821;
  t7839 = t7835 + t7837;
  t7407 = -0.05315*t7299;
  t7409 = -1.03354*t7312;
  t7435 = 0. + t7407 + t7409;
  t7844 = -1.*t6975*t7832;
  t7846 = t6848*t7839;
  t7849 = t7844 + t7846;
  t7856 = t6848*t7832;
  t7857 = t6975*t7839;
  t7859 = t7856 + t7857;
  t7890 = t2485*t475*t419;
  t7891 = t2485*t345*t649;
  t7892 = t7890 + t7891;
  t7911 = -1.*t2123*t362;
  t7923 = t7892*t2268;
  t7926 = t7911 + t7923;
  t7930 = t2485*t345*t475;
  t7931 = -1.*t2485*t419*t649;
  t7932 = t7930 + t7931;
  t7937 = t3056*t7926;
  t7938 = t7932*t3317;
  t7941 = t7937 + t7938;
  t7951 = t3056*t7932;
  t7953 = -1.*t7926*t3317;
  t7955 = t7951 + t7953;
  t7960 = -1.*t4668*t7941;
  t7961 = t4279*t7955;
  t7962 = t7960 + t7961;
  t7967 = t4279*t7941;
  t7970 = t4668*t7955;
  t7972 = t7967 + t7970;
  t7976 = t5556*t7962;
  t7977 = t5470*t7972;
  t7979 = t7976 + t7977;
  t7982 = t5470*t7962;
  t7984 = -1.*t5556*t7972;
  t7987 = t7982 + t7984;
  t7990 = -1.*t6975*t7979;
  t7991 = t6848*t7987;
  t7992 = t7990 + t7991;
  t7994 = t6848*t7979;
  t7995 = t6975*t7987;
  t7996 = t7994 + t7995;
  p_output1[0]=0. + t1541*t1831 + t2107*t2381 + 0.1305*(t2107*t2123 - 1.*t209*t2268*t2485) + t209*t2485*t2572 + t2986*t3333 + t3551*t4063 + t4708*t4811 + t5159*t5340 + t5748*t6307 + t459*t670 + t6621*t6722 + t7017*t7063 + t7093*t7155 + t7364*t7376 + t7435*t7451 - 0.05315*(t7312*t7376 + t7227*t7451) - 1.03354*(t7227*t7376 - 1.*t7312*t7451) + var1[0];
  p_output1[1]=0. + t2485*t2572*t407 + t670*t7644 + t1831*t7678 + t2381*t7709 + 0.1305*(-1.*t2268*t2485*t407 + t2123*t7709) + t3333*t7773 + t4063*t7780 + t4708*t7789 + t5159*t7799 + t5748*t7811 + t6621*t7821 + t7017*t7832 + t7093*t7839 + t7364*t7849 + t7435*t7859 - 0.05315*(t7312*t7849 + t7227*t7859) - 1.03354*(t7227*t7849 - 1.*t7312*t7859) + var1[1];
  p_output1[2]=0. - 1.*t2572*t362 + t1831*t2485*t419 + t2485*t345*t670 + t2381*t7892 + 0.1305*(t2268*t362 + t2123*t7892) + t3333*t7926 + t4063*t7932 + t4708*t7941 + t5159*t7955 + t5748*t7962 + t6621*t7972 + t7017*t7979 + t7093*t7987 + t7364*t7992 + t7435*t7996 - 0.05315*(t7312*t7992 + t7227*t7996) - 1.03354*(t7227*t7992 - 1.*t7312*t7996) + var1[2];
}



void p_LeftToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
