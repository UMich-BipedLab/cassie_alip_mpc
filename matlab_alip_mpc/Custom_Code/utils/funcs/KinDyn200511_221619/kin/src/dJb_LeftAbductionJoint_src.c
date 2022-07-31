/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_LeftAbductionJoint_src.h"

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
  double t2031;
  double t564;
  double t880;
  double t2153;
  double t2195;
  double t2233;
  double t2235;
  double t2050;
  double t2281;
  double t2288;
  double t2291;
  double t2320;
  double t2322;
  double t2328;
  double t2347;
  double t2349;
  double t2363;
  double t2209;
  double t2247;
  double t2269;
  double t2370;
  double t2402;
  double t2408;
  double t2410;
  double t2417;
  double t2423;
  double t2425;
  double t604;
  double t2473;
  double t2477;
  double t2478;
  double t2380;
  double t2381;
  double t2534;
  double t2544;
  double t2551;
  double t2429;
  double t2433;
  double t2434;
  double t2649;
  double t2654;
  double t2655;
  double t2658;
  double t2675;
  double t2678;
  double t2695;
  double t2696;
  double t2705;
  double t2708;
  double t2719;
  double t2647;
  double t2720;
  double t2721;
  double t2749;
  double t2754;
  double t2727;
  double t2731;
  double t2734;
  double t2743;
  double t2744;
  double t2746;
  double t2642;
  double t2645;
  double t2772;
  double t2780;
  double t2782;
  double t2783;
  double t2785;
  double t2786;
  double t2787;
  double t2788;
  double t2804;
  double t2805;
  double t2812;
  double t2814;
  double t2823;
  double t2825;
  double t2826;
  double t2896;
  double t2839;
  double t2831;
  double t2833;
  double t2878;
  double t2884;
  double t2890;
  double t2834;
  double t2864;
  double t2931;
  double t2932;
  double t2933;
  double t2936;
  double t2940;
  double t2942;
  double t2946;
  double t2947;
  double t2948;
  double t3051;
  double t3052;
  double t3053;
  double t3054;
  double t3055;
  double t3056;
  double t3060;
  double t2586;
  double t2596;
  double t2601;
  double t2627;
  double t2628;
  double t2632;
  double t2636;
  double t2637;
  double t2639;
  double t3151;
  double t3154;
  double t3156;
  double t3146;
  double t2891;
  double t3158;
  double t3159;
  double t3161;
  double t3165;
  double t2909;
  t2031 = Cos(var1[3]);
  t564 = Cos(var1[4]);
  t880 = Sin(var1[3]);
  t2153 = Cos(var1[6]);
  t2195 = Sin(var1[5]);
  t2233 = Cos(var1[5]);
  t2235 = Sin(var1[6]);
  t2050 = Sin(var1[4]);
  t2281 = -1.*t2153*t2195;
  t2288 = -1.*t2233*t2235;
  t2291 = t2281 + t2288;
  t2320 = -1.*t880*t2291;
  t2322 = t2233*t2153;
  t2328 = -1.*t2195*t2235;
  t2347 = t2322 + t2328;
  t2349 = t2031*t2050*t2347;
  t2363 = t2320 + t2349;
  t2209 = t2153*t2195;
  t2247 = t2233*t2235;
  t2269 = 0. + t2209 + t2247;
  t2370 = 0. + t2322 + t2328;
  t2402 = t2031*t2050*t2291;
  t2408 = -1.*t2233*t2153;
  t2410 = t2195*t2235;
  t2417 = t2408 + t2410;
  t2423 = -1.*t880*t2417;
  t2425 = t2402 + t2423;
  t604 = 0. + t564;
  t2473 = t2031*t2291;
  t2477 = t880*t2050*t2347;
  t2478 = t2473 + t2477;
  t2380 = t2050*t2269;
  t2381 = 0. + t2380;
  t2534 = t880*t2050*t2291;
  t2544 = t2031*t2417;
  t2551 = t2534 + t2544;
  t2429 = 0. + t2281 + t2288;
  t2433 = t2050*t2370;
  t2434 = 0. + t2433;
  t2649 = -1.*t2153;
  t2654 = 1. + t2649;
  t2655 = 0.07996*t2654;
  t2658 = 0.07996*t2153;
  t2675 = 0. + t2655 + t2658;
  t2678 = t2233*t2675;
  t2695 = 0.135*t2654;
  t2696 = 0.135*t2153;
  t2705 = 0. + t2695 + t2696;
  t2708 = t2705*t2195;
  t2719 = 0. + t2678 + t2708;
  t2647 = 0.08055*t2050;
  t2720 = t564*t2719;
  t2721 = 0. + t2647 + t2720;
  t2749 = t564*t2269;
  t2754 = 0. + t2749;
  t2727 = -0.08055*t564;
  t2731 = t2050*t2719;
  t2734 = 0. + t2727 + t2731;
  t2743 = 0.08055*t564;
  t2744 = -1.*t2050*t2719;
  t2746 = t2743 + t2744;
  t2642 = t564*t2370;
  t2645 = 0. + t2642;
  t2772 = t2647 + t2720;
  t2780 = t2233*t2705;
  t2782 = -1.*t2675*t2195;
  t2783 = 0. + t2780 + t2782;
  t2785 = -1.*t2783*t2370;
  t2786 = -1.*t2721*t2754;
  t2787 = -1.*t2734*t2381;
  t2788 = t2785 + t2786 + t2787;
  t2804 = t2783*t2429;
  t2805 = t2721*t2645;
  t2812 = t2734*t2434;
  t2814 = t2804 + t2805 + t2812;
  t2823 = -1.*t2783*t2291;
  t2825 = -1.*t564*t2721*t2347;
  t2826 = -1.*t2050*t2734*t2347;
  t2896 = t2780 + t2782;
  t2839 = t564*t2291*t2788;
  t2831 = t564*t2721*t2291;
  t2833 = t2050*t2734*t2291;
  t2878 = -1.*t2233*t2675;
  t2884 = -1.*t2705*t2195;
  t2890 = t2878 + t2884;
  t2834 = t2783*t2417;
  t2864 = t564*t2347*t2814;
  t2931 = -1.*t2050;
  t2932 = 0. + t2931;
  t2933 = t2932*t2721;
  t2936 = t604*t2734;
  t2940 = 0. + t2933 + t2936;
  t2942 = t564*t2940*t2291;
  t2946 = -1.*t564*t2721*t2291;
  t2947 = -1.*t2050*t2734*t2291;
  t2948 = -1.*t2783*t2417;
  t3051 = -1.*t2932*t2721;
  t3052 = -1.*t604*t2734;
  t3053 = 0. + t3051 + t3052;
  t3054 = t564*t3053*t2347;
  t3055 = t2783*t2291;
  t3056 = t564*t2721*t2347;
  t3060 = t2050*t2734*t2347;
  t2586 = -1.*var2[4]*t564;
  t2596 = -1.*var2[4]*t2050*t2269;
  t2601 = var2[5]*t564*t2347;
  t2627 = var2[6]*t564*t2347;
  t2628 = t2596 + t2601 + t2627;
  t2632 = var2[5]*t564*t2291;
  t2636 = var2[6]*t564*t2291;
  t2637 = -1.*var2[4]*t2050*t2370;
  t2639 = t2632 + t2636 + t2637;
  t3151 = -1.*t2719*t2269;
  t3154 = 0. + t3151 + t2785;
  t3156 = t2417*t3154;
  t3146 = -1.*t2719*t2347;
  t2891 = -1.*t2890*t2370;
  t3158 = t2719*t2370;
  t3159 = 0. + t2804 + t3158;
  t3161 = t2291*t3159;
  t3165 = t2719*t2291;
  t2909 = t2890*t2429;
  p_output1[0]=-1.*t604*t880*var2[3] - 1.*t2031*t2050*var2[4];
  p_output1[1]=(-1.*t2031*t2370 - 1.*t2381*t880)*var2[3] + t2031*t2269*t564*var2[4] + t2363*var2[5] + t2363*var2[6];
  p_output1[2]=(-1.*t2031*t2429 - 1.*t2434*t880)*var2[3] + t2031*t2370*t564*var2[4] + t2425*var2[5] + t2425*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t2031*t604*var2[3] - 1.*t2050*t880*var2[4];
  p_output1[7]=(t2031*t2381 - 1.*t2370*t880)*var2[3] + t2269*t564*t880*var2[4] + t2478*var2[5] + t2478*var2[6];
  p_output1[8]=(t2031*t2434 - 1.*t2429*t880)*var2[3] + t2370*t564*t880*var2[4] + t2551*var2[5] + t2551*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2586;
  p_output1[13]=t2628;
  p_output1[14]=t2639;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t2050*t2370*t2788 - 1.*t2050*t2269*t2814 + t2645*(t2050*t2269*t2721 - 1.*t2746*t2754 - 1.*t2381*t2772 - 1.*t2269*t2734*t564) + t2754*(-1.*t2050*t2370*t2721 + t2645*t2746 + t2434*t2772 + t2370*t2734*t564))*var2[4] + (t2839 + t2864 + t2754*(t2831 + t2833 + t2834 + t2050*t2434*t2896 + t2909 + t2645*t2896*t564) + t2645*(t2823 + t2825 + t2826 + t2891 - 1.*t2050*t2381*t2896 - 1.*t2754*t2896*t564))*var2[5] + (t2645*(0. + t2823 + t2825 + t2826) + t2754*(0. + t2831 + t2833 + t2834) + t2839 + t2864)*var2[6];
  p_output1[19]=(-1.*t2050*t2370*t2940 - 1.*(-1.*t2645*t2721 - 1.*t2434*t2734 - 1.*t2429*t2783)*t564 + t2932*(t2050*t2370*t2721 - 1.*t2645*t2746 - 1.*t2434*t2772 - 1.*t2370*t2734*t564) + t2645*(-1.*t2050*t2734 + t2746*t2932 - 1.*t2721*t564 + t2772*t604))*var2[4] + (t2942 + t2932*(-1.*t2429*t2890 - 1.*t2050*t2434*t2896 + t2946 + t2947 + t2948 - 1.*t2645*t2896*t564) + t2645*(t2896*t2932*t564 + t2050*t2896*t604))*var2[5] + (0. + t2942 + t2932*(0. + t2946 + t2947 + t2948))*var2[6];
  p_output1[20]=(-1.*t2050*t2269*t3053 - 1.*(t2381*t2734 + t2721*t2754 + t2370*t2783)*t564 + t2932*(-1.*t2050*t2269*t2721 + t2746*t2754 + t2381*t2772 + t2269*t2734*t564) + t2754*(t2050*t2734 - 1.*t2746*t2932 + t2721*t564 - 1.*t2772*t604))*var2[4] + (t3054 + t2932*(t2370*t2890 + t2050*t2381*t2896 + t3055 + t3056 + t3060 + t2754*t2896*t564) + t2754*(-1.*t2896*t2932*t564 - 1.*t2050*t2896*t604))*var2[5] + (0. + t3054 + t2932*(0. + t3055 + t3056 + t3060))*var2[6];
  p_output1[21]=t2586;
  p_output1[22]=t2628;
  p_output1[23]=t2639;
  p_output1[24]=(t2429*(t2823 + t2891 - 1.*t2269*t2896 + t3146) + t3156 + t3161 + t2370*(t2834 + t2370*t2896 + t2909 + t3165))*var2[5] + (t2429*(0. + t2823 + t3146) + t3156 + t3161 + t2370*(0. + t2834 + t3165))*var2[6];
  p_output1[25]=-0.08055*t2417*var2[5] - 0.08055*t2417*var2[6];
  p_output1[26]=0.08055*t2291*var2[5] + 0.08055*t2291*var2[6];
  p_output1[27]=0;
  p_output1[28]=t2291*var2[5] + t2291*var2[6];
  p_output1[29]=t2417*var2[5] + t2417*var2[6];
  p_output1[30]=0;
  p_output1[31]=(0. + t2235*t2675 + t2153*t2705)*var2[6];
  p_output1[32]=(0. + t2153*t2675 - 1.*t2235*t2705)*var2[6];
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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



void dJb_LeftAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
