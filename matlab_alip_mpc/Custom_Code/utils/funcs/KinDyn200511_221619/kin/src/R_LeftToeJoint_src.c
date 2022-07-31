/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeJoint_src.h"

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
  double t1297;
  double t1638;
  double t1924;
  double t1650;
  double t1934;
  double t1553;
  double t1969;
  double t1976;
  double t1977;
  double t1911;
  double t1940;
  double t1943;
  double t1982;
  double t1226;
  double t2036;
  double t2037;
  double t2041;
  double t1332;
  double t1355;
  double t1380;
  double t1947;
  double t1995;
  double t2005;
  double t2010;
  double t2015;
  double t2027;
  double t2046;
  double t2082;
  double t2033;
  double t2052;
  double t2056;
  double t1221;
  double t2088;
  double t2097;
  double t2108;
  double t2123;
  double t2067;
  double t2110;
  double t2113;
  double t1176;
  double t2129;
  double t2132;
  double t2144;
  double t2199;
  double t2121;
  double t2150;
  double t2167;
  double t1175;
  double t2237;
  double t2248;
  double t2261;
  double t195;
  double t2488;
  double t2492;
  double t2507;
  double t2449;
  double t2462;
  double t2465;
  double t2598;
  double t2613;
  double t2616;
  double t2439;
  double t2487;
  double t2550;
  double t2554;
  double t2567;
  double t2568;
  double t2590;
  double t2617;
  double t2626;
  double t2639;
  double t2649;
  double t2655;
  double t2637;
  double t2658;
  double t2670;
  double t2675;
  double t2679;
  double t2680;
  double t2353;
  double t2674;
  double t2696;
  double t2703;
  double t2708;
  double t2730;
  double t2761;
  double t2876;
  double t2891;
  double t2898;
  double t2813;
  double t2826;
  double t2842;
  double t2858;
  double t2867;
  double t2872;
  double t2874;
  double t2908;
  double t2909;
  double t2931;
  double t2948;
  double t2959;
  double t2919;
  double t2971;
  double t2976;
  double t2983;
  double t2996;
  double t3000;
  double t2979;
  double t3018;
  double t3034;
  double t3043;
  double t3044;
  double t3060;
  double t2195;
  double t2269;
  double t2270;
  double t2360;
  double t2369;
  double t2384;
  double t2706;
  double t2763;
  double t2771;
  double t2786;
  double t2788;
  double t2802;
  double t3037;
  double t3072;
  double t3077;
  double t3094;
  double t3113;
  double t3122;
  t1297 = Cos(var1[3]);
  t1638 = Cos(var1[5]);
  t1924 = Sin(var1[4]);
  t1650 = Sin(var1[3]);
  t1934 = Sin(var1[5]);
  t1553 = Cos(var1[6]);
  t1969 = t1297*t1638*t1924;
  t1976 = t1650*t1934;
  t1977 = t1969 + t1976;
  t1911 = -1.*t1638*t1650;
  t1940 = t1297*t1924*t1934;
  t1943 = t1911 + t1940;
  t1982 = Sin(var1[6]);
  t1226 = Cos(var1[8]);
  t2036 = t1553*t1977;
  t2037 = -1.*t1943*t1982;
  t2041 = t2036 + t2037;
  t1332 = Cos(var1[4]);
  t1355 = Cos(var1[7]);
  t1380 = t1297*t1332*t1355;
  t1947 = t1553*t1943;
  t1995 = t1977*t1982;
  t2005 = t1947 + t1995;
  t2010 = Sin(var1[7]);
  t2015 = t2005*t2010;
  t2027 = t1380 + t2015;
  t2046 = Sin(var1[8]);
  t2082 = Cos(var1[9]);
  t2033 = t1226*t2027;
  t2052 = t2041*t2046;
  t2056 = t2033 + t2052;
  t1221 = Sin(var1[9]);
  t2088 = t1226*t2041;
  t2097 = -1.*t2027*t2046;
  t2108 = t2088 + t2097;
  t2123 = Cos(var1[10]);
  t2067 = -1.*t1221*t2056;
  t2110 = t2082*t2108;
  t2113 = t2067 + t2110;
  t1176 = Sin(var1[10]);
  t2129 = t2082*t2056;
  t2132 = t1221*t2108;
  t2144 = t2129 + t2132;
  t2199 = Cos(var1[11]);
  t2121 = t1176*t2113;
  t2150 = t2123*t2144;
  t2167 = t2121 + t2150;
  t1175 = Sin(var1[11]);
  t2237 = t2123*t2113;
  t2248 = -1.*t1176*t2144;
  t2261 = t2237 + t2248;
  t195 = Cos(var1[12]);
  t2488 = t1638*t1650*t1924;
  t2492 = -1.*t1297*t1934;
  t2507 = t2488 + t2492;
  t2449 = t1297*t1638;
  t2462 = t1650*t1924*t1934;
  t2465 = t2449 + t2462;
  t2598 = t1553*t2507;
  t2613 = -1.*t2465*t1982;
  t2616 = t2598 + t2613;
  t2439 = t1332*t1355*t1650;
  t2487 = t1553*t2465;
  t2550 = t2507*t1982;
  t2554 = t2487 + t2550;
  t2567 = t2554*t2010;
  t2568 = t2439 + t2567;
  t2590 = t1226*t2568;
  t2617 = t2616*t2046;
  t2626 = t2590 + t2617;
  t2639 = t1226*t2616;
  t2649 = -1.*t2568*t2046;
  t2655 = t2639 + t2649;
  t2637 = -1.*t1221*t2626;
  t2658 = t2082*t2655;
  t2670 = t2637 + t2658;
  t2675 = t2082*t2626;
  t2679 = t1221*t2655;
  t2680 = t2675 + t2679;
  t2353 = Sin(var1[12]);
  t2674 = t1176*t2670;
  t2696 = t2123*t2680;
  t2703 = t2674 + t2696;
  t2708 = t2123*t2670;
  t2730 = -1.*t1176*t2680;
  t2761 = t2708 + t2730;
  t2876 = t1332*t1638*t1553;
  t2891 = -1.*t1332*t1934*t1982;
  t2898 = t2876 + t2891;
  t2813 = -1.*t1355*t1924;
  t2826 = t1332*t1553*t1934;
  t2842 = t1332*t1638*t1982;
  t2858 = t2826 + t2842;
  t2867 = t2858*t2010;
  t2872 = t2813 + t2867;
  t2874 = t1226*t2872;
  t2908 = t2898*t2046;
  t2909 = t2874 + t2908;
  t2931 = t1226*t2898;
  t2948 = -1.*t2872*t2046;
  t2959 = t2931 + t2948;
  t2919 = -1.*t1221*t2909;
  t2971 = t2082*t2959;
  t2976 = t2919 + t2971;
  t2983 = t2082*t2909;
  t2996 = t1221*t2959;
  t3000 = t2983 + t2996;
  t2979 = t1176*t2976;
  t3018 = t2123*t3000;
  t3034 = t2979 + t3018;
  t3043 = t2123*t2976;
  t3044 = -1.*t1176*t3000;
  t3060 = t3043 + t3044;
  t2195 = -1.*t1175*t2167;
  t2269 = t2199*t2261;
  t2270 = t2195 + t2269;
  t2360 = t2199*t2167;
  t2369 = t1175*t2261;
  t2384 = t2360 + t2369;
  t2706 = -1.*t1175*t2703;
  t2763 = t2199*t2761;
  t2771 = t2706 + t2763;
  t2786 = t2199*t2703;
  t2788 = t1175*t2761;
  t2802 = t2786 + t2788;
  t3037 = -1.*t1175*t3034;
  t3072 = t2199*t3060;
  t3077 = t3037 + t3072;
  t3094 = t2199*t3034;
  t3113 = t1175*t3060;
  t3122 = t3094 + t3113;
  p_output1[0]=-1.*t195*t2270 + t2353*t2384;
  p_output1[1]=-1.*t195*t2771 + t2353*t2802;
  p_output1[2]=-1.*t195*t3077 + t2353*t3122;
  p_output1[3]=t2270*t2353 + t195*t2384;
  p_output1[4]=t2353*t2771 + t195*t2802;
  p_output1[5]=t2353*t3077 + t195*t3122;
  p_output1[6]=-1.*t1355*t2005 + t1297*t1332*t2010;
  p_output1[7]=t1332*t1650*t2010 - 1.*t1355*t2554;
  p_output1[8]=-1.*t1924*t2010 - 1.*t1355*t2858;
}



void R_LeftToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
