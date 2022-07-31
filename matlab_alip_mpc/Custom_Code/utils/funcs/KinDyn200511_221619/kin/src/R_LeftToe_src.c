/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToe_src.h"

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
  double t1201;
  double t1665;
  double t1715;
  double t1676;
  double t1732;
  double t1437;
  double t2008;
  double t2040;
  double t2042;
  double t1678;
  double t1734;
  double t1743;
  double t2062;
  double t1182;
  double t2103;
  double t2109;
  double t2110;
  double t1280;
  double t1282;
  double t1308;
  double t1981;
  double t2067;
  double t2068;
  double t2090;
  double t2092;
  double t2096;
  double t2117;
  double t2191;
  double t2097;
  double t2137;
  double t2145;
  double t1142;
  double t2198;
  double t2214;
  double t2216;
  double t2293;
  double t2186;
  double t2229;
  double t2237;
  double t918;
  double t2301;
  double t2329;
  double t2345;
  double t2364;
  double t2257;
  double t2348;
  double t2353;
  double t542;
  double t2367;
  double t2368;
  double t2374;
  double t352;
  double t2526;
  double t2536;
  double t2554;
  double t2469;
  double t2475;
  double t2480;
  double t2624;
  double t2627;
  double t2630;
  double t2468;
  double t2513;
  double t2587;
  double t2596;
  double t2611;
  double t2616;
  double t2619;
  double t2635;
  double t2656;
  double t2670;
  double t2676;
  double t2686;
  double t2667;
  double t2702;
  double t2717;
  double t2725;
  double t2730;
  double t2738;
  double t2419;
  double t2718;
  double t2741;
  double t2762;
  double t2764;
  double t2765;
  double t2767;
  double t2946;
  double t2952;
  double t2954;
  double t2859;
  double t2868;
  double t2870;
  double t2871;
  double t2880;
  double t2891;
  double t2926;
  double t2962;
  double t2966;
  double t2977;
  double t2987;
  double t3015;
  double t2976;
  double t3037;
  double t3044;
  double t3064;
  double t3097;
  double t3098;
  double t3059;
  double t3104;
  double t3107;
  double t3123;
  double t3209;
  double t3226;
  double t2363;
  double t2395;
  double t2414;
  double t2431;
  double t2436;
  double t2439;
  double t2763;
  double t2776;
  double t2780;
  double t2813;
  double t2831;
  double t2844;
  double t3118;
  double t3238;
  double t3240;
  double t3267;
  double t3280;
  double t3284;
  t1201 = Cos(var1[3]);
  t1665 = Cos(var1[5]);
  t1715 = Sin(var1[4]);
  t1676 = Sin(var1[3]);
  t1732 = Sin(var1[5]);
  t1437 = Cos(var1[6]);
  t2008 = t1201*t1665*t1715;
  t2040 = t1676*t1732;
  t2042 = t2008 + t2040;
  t1678 = -1.*t1665*t1676;
  t1734 = t1201*t1715*t1732;
  t1743 = t1678 + t1734;
  t2062 = Sin(var1[6]);
  t1182 = Cos(var1[8]);
  t2103 = t1437*t2042;
  t2109 = -1.*t1743*t2062;
  t2110 = t2103 + t2109;
  t1280 = Cos(var1[4]);
  t1282 = Cos(var1[7]);
  t1308 = t1201*t1280*t1282;
  t1981 = t1437*t1743;
  t2067 = t2042*t2062;
  t2068 = t1981 + t2067;
  t2090 = Sin(var1[7]);
  t2092 = t2068*t2090;
  t2096 = t1308 + t2092;
  t2117 = Sin(var1[8]);
  t2191 = Cos(var1[9]);
  t2097 = t1182*t2096;
  t2137 = t2110*t2117;
  t2145 = t2097 + t2137;
  t1142 = Sin(var1[9]);
  t2198 = t1182*t2110;
  t2214 = -1.*t2096*t2117;
  t2216 = t2198 + t2214;
  t2293 = Cos(var1[10]);
  t2186 = -1.*t1142*t2145;
  t2229 = t2191*t2216;
  t2237 = t2186 + t2229;
  t918 = Sin(var1[10]);
  t2301 = t2191*t2145;
  t2329 = t1142*t2216;
  t2345 = t2301 + t2329;
  t2364 = Cos(var1[11]);
  t2257 = t918*t2237;
  t2348 = t2293*t2345;
  t2353 = t2257 + t2348;
  t542 = Sin(var1[11]);
  t2367 = t2293*t2237;
  t2368 = -1.*t918*t2345;
  t2374 = t2367 + t2368;
  t352 = Cos(var1[12]);
  t2526 = t1665*t1676*t1715;
  t2536 = -1.*t1201*t1732;
  t2554 = t2526 + t2536;
  t2469 = t1201*t1665;
  t2475 = t1676*t1715*t1732;
  t2480 = t2469 + t2475;
  t2624 = t1437*t2554;
  t2627 = -1.*t2480*t2062;
  t2630 = t2624 + t2627;
  t2468 = t1280*t1282*t1676;
  t2513 = t1437*t2480;
  t2587 = t2554*t2062;
  t2596 = t2513 + t2587;
  t2611 = t2596*t2090;
  t2616 = t2468 + t2611;
  t2619 = t1182*t2616;
  t2635 = t2630*t2117;
  t2656 = t2619 + t2635;
  t2670 = t1182*t2630;
  t2676 = -1.*t2616*t2117;
  t2686 = t2670 + t2676;
  t2667 = -1.*t1142*t2656;
  t2702 = t2191*t2686;
  t2717 = t2667 + t2702;
  t2725 = t2191*t2656;
  t2730 = t1142*t2686;
  t2738 = t2725 + t2730;
  t2419 = Sin(var1[12]);
  t2718 = t918*t2717;
  t2741 = t2293*t2738;
  t2762 = t2718 + t2741;
  t2764 = t2293*t2717;
  t2765 = -1.*t918*t2738;
  t2767 = t2764 + t2765;
  t2946 = t1280*t1665*t1437;
  t2952 = -1.*t1280*t1732*t2062;
  t2954 = t2946 + t2952;
  t2859 = -1.*t1282*t1715;
  t2868 = t1280*t1437*t1732;
  t2870 = t1280*t1665*t2062;
  t2871 = t2868 + t2870;
  t2880 = t2871*t2090;
  t2891 = t2859 + t2880;
  t2926 = t1182*t2891;
  t2962 = t2954*t2117;
  t2966 = t2926 + t2962;
  t2977 = t1182*t2954;
  t2987 = -1.*t2891*t2117;
  t3015 = t2977 + t2987;
  t2976 = -1.*t1142*t2966;
  t3037 = t2191*t3015;
  t3044 = t2976 + t3037;
  t3064 = t2191*t2966;
  t3097 = t1142*t3015;
  t3098 = t3064 + t3097;
  t3059 = t918*t3044;
  t3104 = t2293*t3098;
  t3107 = t3059 + t3104;
  t3123 = t2293*t3044;
  t3209 = -1.*t918*t3098;
  t3226 = t3123 + t3209;
  t2363 = -1.*t542*t2353;
  t2395 = t2364*t2374;
  t2414 = t2363 + t2395;
  t2431 = t2364*t2353;
  t2436 = t542*t2374;
  t2439 = t2431 + t2436;
  t2763 = -1.*t542*t2762;
  t2776 = t2364*t2767;
  t2780 = t2763 + t2776;
  t2813 = t2364*t2762;
  t2831 = t542*t2767;
  t2844 = t2813 + t2831;
  t3118 = -1.*t542*t3107;
  t3238 = t2364*t3226;
  t3240 = t3118 + t3238;
  t3267 = t2364*t3107;
  t3280 = t542*t3226;
  t3284 = t3267 + t3280;
  p_output1[0]=t2419*t2439 - 1.*t2414*t352;
  p_output1[1]=t2419*t2844 - 1.*t2780*t352;
  p_output1[2]=t2419*t3284 - 1.*t3240*t352;
  p_output1[3]=t2414*t2419 + t2439*t352;
  p_output1[4]=t2419*t2780 + t2844*t352;
  p_output1[5]=t2419*t3240 + t3284*t352;
  p_output1[6]=-1.*t1282*t2068 + t1201*t1280*t2090;
  p_output1[7]=t1280*t1676*t2090 - 1.*t1282*t2596;
  p_output1[8]=-1.*t1715*t2090 - 1.*t1282*t2871;
}



void R_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
