/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftKneeJoint_src.h"

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
  double t728;
  double t377;
  double t729;
  double t409;
  double t959;
  double t232;
  double t318;
  double t411;
  double t1009;
  double t1120;
  double t1150;
  double t1169;
  double t1189;
  double t1216;
  double t1221;
  double t1238;
  double t1239;
  double t1251;
  double t1274;
  double t1403;
  double t1453;
  double t1565;
  double t177;
  double t135;
  double t2917;
  double t2927;
  double t2938;
  double t2507;
  double t2452;
  double t3022;
  double t3033;
  double t3034;
  double t2802;
  double t3015;
  double t3018;
  double t3304;
  double t3305;
  double t3260;
  double t3274;
  double t4386;
  double t4430;
  double t4521;
  double t4230;
  double t4259;
  double t4272;
  double t4321;
  double t4350;
  double t4379;
  double t4761;
  double t4814;
  double t4847;
  double t4751;
  double t4752;
  double t4754;
  double t4996;
  double t5022;
  double t5038;
  double t4750;
  double t4755;
  double t4869;
  double t4876;
  double t4877;
  double t4950;
  double t5311;
  double t5382;
  double t5417;
  double t5505;
  double t5507;
  double t5508;
  double t5509;
  double t5727;
  double t5763;
  double t5775;
  double t5785;
  double t5789;
  double t5805;
  double t5806;
  double t5826;
  double t5847;
  double t5848;
  double t5853;
  double t5864;
  double t6049;
  double t6050;
  double t5903;
  double t5907;
  double t5915;
  double t6244;
  double t6247;
  double t6204;
  double t6233;
  double t6382;
  double t6384;
  double t6392;
  double t6342;
  double t6343;
  double t6345;
  double t6346;
  double t6350;
  double t6363;
  double t6448;
  double t6454;
  double t6457;
  double t6470;
  double t6471;
  double t6473;
  double t6478;
  double t5577;
  double t5594;
  double t5597;
  double t6557;
  double t6567;
  double t6568;
  double t6570;
  double t6572;
  double t6575;
  double t6645;
  double t6647;
  double t6665;
  double t6611;
  double t6619;
  double t6628;
  double t6633;
  double t6666;
  double t6674;
  double t6675;
  double t6676;
  double t6677;
  double t6681;
  double t6685;
  double t6686;
  double t6698;
  double t6699;
  double t6719;
  double t6744;
  double t6748;
  double t6751;
  double t6752;
  double t6853;
  double t6859;
  double t6888;
  double t6798;
  double t6808;
  double t6830;
  double t6836;
  double t6841;
  double t6845;
  double t3021;
  double t3035;
  double t3044;
  double t3076;
  double t3077;
  double t3088;
  double t3275;
  double t3309;
  double t3317;
  double t3340;
  double t3450;
  double t3597;
  double t4382;
  double t4546;
  double t4604;
  double t4650;
  double t4714;
  double t4716;
  double t4983;
  double t5040;
  double t5094;
  double t5125;
  double t5174;
  double t5195;
  double t5423;
  double t5427;
  double t5428;
  double t7003;
  double t6044;
  double t6081;
  double t6094;
  double t6102;
  double t6117;
  double t6118;
  double t6234;
  double t6248;
  double t6249;
  double t6257;
  double t6268;
  double t6273;
  double t6381;
  double t6395;
  double t6397;
  double t6416;
  double t6418;
  double t6421;
  double t6459;
  double t6462;
  double t6463;
  double t6491;
  double t6494;
  double t6502;
  double t7111;
  double t5609;
  double t5703;
  double t7144;
  double t7152;
  double t7155;
  double t6721;
  double t6723;
  double t6732;
  double t6772;
  double t6775;
  double t6776;
  double t7170;
  double t6847;
  double t6890;
  double t6893;
  double t6909;
  double t6917;
  double t6920;
  t728 = Cos(var1[3]);
  t377 = Cos(var1[5]);
  t729 = Sin(var1[4]);
  t409 = Sin(var1[3]);
  t959 = Sin(var1[5]);
  t232 = Cos(var1[7]);
  t318 = Cos(var1[6]);
  t411 = -1.*t377*t409;
  t1009 = t728*t729*t959;
  t1120 = t411 + t1009;
  t1150 = t318*t1120;
  t1169 = t728*t377*t729;
  t1189 = t409*t959;
  t1216 = t1169 + t1189;
  t1221 = Sin(var1[6]);
  t1238 = t1216*t1221;
  t1239 = t1150 + t1238;
  t1251 = t232*t1239;
  t1274 = Cos(var1[4]);
  t1403 = Sin(var1[7]);
  t1453 = -1.*t728*t1274*t1403;
  t1565 = t1251 + t1453;
  t177 = Sin(var1[9]);
  t135 = Cos(var1[8]);
  t2917 = t377*t409;
  t2927 = -1.*t728*t729*t959;
  t2938 = t2917 + t2927;
  t2507 = Sin(var1[8]);
  t2452 = Cos(var1[9]);
  t3022 = t318*t2938;
  t3033 = -1.*t1216*t1221;
  t3034 = t3022 + t3033;
  t2802 = t318*t1216;
  t3015 = t2938*t1221;
  t3018 = t2802 + t3015;
  t3304 = -1.*t318*t1120;
  t3305 = t3304 + t3033;
  t3260 = -1.*t1120*t1221;
  t3274 = t2802 + t3260;
  t4386 = t728*t1274*t377*t318;
  t4430 = -1.*t728*t1274*t959*t1221;
  t4521 = t4386 + t4430;
  t4230 = -1.*t728*t232*t729;
  t4259 = t728*t1274*t318*t959;
  t4272 = t728*t1274*t377*t1221;
  t4321 = t4259 + t4272;
  t4350 = t4321*t1403;
  t4379 = t4230 + t4350;
  t4761 = -1.*t377*t409*t729;
  t4814 = t728*t959;
  t4847 = t4761 + t4814;
  t4751 = -1.*t728*t377;
  t4752 = -1.*t409*t729*t959;
  t4754 = t4751 + t4752;
  t4996 = t318*t4847;
  t5022 = -1.*t4754*t1221;
  t5038 = t4996 + t5022;
  t4750 = -1.*t1274*t232*t409;
  t4755 = t318*t4754;
  t4869 = t4847*t1221;
  t4876 = t4755 + t4869;
  t4877 = t4876*t1403;
  t4950 = t4750 + t4877;
  t5311 = t728*t1274*t232;
  t5382 = t1239*t1403;
  t5417 = t5311 + t5382;
  t5505 = t135*t3274;
  t5507 = -1.*t5417*t2507;
  t5508 = t5505 + t5507;
  t5509 = t177*t5508;
  t5727 = t728*t377;
  t5763 = t409*t729*t959;
  t5775 = t5727 + t5763;
  t5785 = t318*t5775;
  t5789 = t377*t409*t729;
  t5805 = -1.*t728*t959;
  t5806 = t5789 + t5805;
  t5826 = t5806*t1221;
  t5847 = t5785 + t5826;
  t5848 = t232*t5847;
  t5853 = -1.*t1274*t409*t1403;
  t5864 = t5848 + t5853;
  t6049 = -1.*t5806*t1221;
  t6050 = t4755 + t6049;
  t5903 = t318*t5806;
  t5907 = t4754*t1221;
  t5915 = t5903 + t5907;
  t6244 = -1.*t318*t5775;
  t6247 = t6244 + t6049;
  t6204 = -1.*t5775*t1221;
  t6233 = t5903 + t6204;
  t6382 = t1274*t377*t318*t409;
  t6384 = -1.*t1274*t409*t959*t1221;
  t6392 = t6382 + t6384;
  t6342 = -1.*t232*t409*t729;
  t6343 = t1274*t318*t409*t959;
  t6345 = t1274*t377*t409*t1221;
  t6346 = t6343 + t6345;
  t6350 = t6346*t1403;
  t6363 = t6342 + t6350;
  t6448 = t1274*t232*t409;
  t6454 = t5847*t1403;
  t6457 = t6448 + t6454;
  t6470 = t135*t6233;
  t6471 = -1.*t6457*t2507;
  t6473 = t6470 + t6471;
  t6478 = t177*t6473;
  t5577 = t135*t5417;
  t5594 = t3274*t2507;
  t5597 = t5577 + t5594;
  t6557 = t1274*t318*t959;
  t6567 = t1274*t377*t1221;
  t6568 = t6557 + t6567;
  t6570 = t232*t6568;
  t6572 = t729*t1403;
  t6575 = t6570 + t6572;
  t6645 = -1.*t1274*t318*t959;
  t6647 = -1.*t1274*t377*t1221;
  t6665 = t6645 + t6647;
  t6611 = t1274*t377*t318;
  t6619 = -1.*t1274*t959*t1221;
  t6628 = t6611 + t6619;
  t6633 = t135*t6628*t1403;
  t6666 = t6665*t2507;
  t6674 = t6633 + t6666;
  t6675 = t177*t6674;
  t6676 = t135*t6665;
  t6677 = -1.*t6628*t1403*t2507;
  t6681 = t6676 + t6677;
  t6685 = -1.*t2452*t6681;
  t6686 = t6675 + t6685;
  t6698 = -1.*t232*t729;
  t6699 = t6568*t1403;
  t6719 = t6698 + t6699;
  t6744 = t135*t6628;
  t6748 = -1.*t6719*t2507;
  t6751 = t6744 + t6748;
  t6752 = t177*t6751;
  t6853 = -1.*t377*t318*t729;
  t6859 = t729*t959*t1221;
  t6888 = t6853 + t6859;
  t6798 = -1.*t1274*t232;
  t6808 = -1.*t318*t729*t959;
  t6830 = -1.*t377*t729*t1221;
  t6836 = t6808 + t6830;
  t6841 = t6836*t1403;
  t6845 = t6798 + t6841;
  t3021 = t135*t3018*t1403;
  t3035 = t3034*t2507;
  t3044 = t3021 + t3035;
  t3076 = t135*t3034;
  t3077 = -1.*t3018*t1403*t2507;
  t3088 = t3076 + t3077;
  t3275 = t135*t3274*t1403;
  t3309 = t3305*t2507;
  t3317 = t3275 + t3309;
  t3340 = t135*t3305;
  t3450 = -1.*t3274*t1403*t2507;
  t3597 = t3340 + t3450;
  t4382 = t135*t4379;
  t4546 = t4521*t2507;
  t4604 = t4382 + t4546;
  t4650 = t135*t4521;
  t4714 = -1.*t4379*t2507;
  t4716 = t4650 + t4714;
  t4983 = t135*t4950;
  t5040 = t5038*t2507;
  t5094 = t4983 + t5040;
  t5125 = t135*t5038;
  t5174 = -1.*t4950*t2507;
  t5195 = t5125 + t5174;
  t5423 = -1.*t135*t5417;
  t5427 = -1.*t3274*t2507;
  t5428 = t5423 + t5427;
  t7003 = t2452*t5508;
  t6044 = t135*t5915*t1403;
  t6081 = t6050*t2507;
  t6094 = t6044 + t6081;
  t6102 = t135*t6050;
  t6117 = -1.*t5915*t1403*t2507;
  t6118 = t6102 + t6117;
  t6234 = t135*t6233*t1403;
  t6248 = t6247*t2507;
  t6249 = t6234 + t6248;
  t6257 = t135*t6247;
  t6268 = -1.*t6233*t1403*t2507;
  t6273 = t6257 + t6268;
  t6381 = t135*t6363;
  t6395 = t6392*t2507;
  t6397 = t6381 + t6395;
  t6416 = t135*t6392;
  t6418 = -1.*t6363*t2507;
  t6421 = t6416 + t6418;
  t6459 = -1.*t135*t6457;
  t6462 = -1.*t6233*t2507;
  t6463 = t6459 + t6462;
  t6491 = t135*t6457;
  t6494 = t6233*t2507;
  t6502 = t6491 + t6494;
  t7111 = t2452*t6473;
  t5609 = t2452*t5597;
  t5703 = t5609 + t5509;
  t7144 = t2452*t6674;
  t7152 = t177*t6681;
  t7155 = t7144 + t7152;
  t6721 = -1.*t135*t6719;
  t6723 = -1.*t6628*t2507;
  t6732 = t6721 + t6723;
  t6772 = t135*t6719;
  t6775 = t6628*t2507;
  t6776 = t6772 + t6775;
  t7170 = t2452*t6751;
  t6847 = t135*t6845;
  t6890 = t6888*t2507;
  t6893 = t6847 + t6890;
  t6909 = t135*t6888;
  t6917 = -1.*t6845*t2507;
  t6920 = t6909 + t6917;
  p_output1[0]=(t177*t5094 - 1.*t2452*t5195)*var2[3] + (t177*t4604 - 1.*t2452*t4716)*var2[4] + (t177*t3044 - 1.*t2452*t3088)*var2[5] + (t177*t3317 - 1.*t2452*t3597)*var2[6] + (t135*t1565*t177 + t1565*t2452*t2507)*var2[7] + (-1.*t2452*t5428 + t5509)*var2[8] + t5703*var2[9];
  p_output1[1]=(-1.*t2452*t5508 + t177*t5597)*var2[3] + (t177*t6397 - 1.*t2452*t6421)*var2[4] + (t177*t6094 - 1.*t2452*t6118)*var2[5] + (t177*t6249 - 1.*t2452*t6273)*var2[6] + (t135*t177*t5864 + t2452*t2507*t5864)*var2[7] + (-1.*t2452*t6463 + t6478)*var2[8] + (t6478 + t2452*t6502)*var2[9];
  p_output1[2]=(t177*t6893 - 1.*t2452*t6920)*var2[4] + t6686*var2[5] + t6686*var2[6] + (t135*t177*t6575 + t2452*t2507*t6575)*var2[7] + (-1.*t2452*t6732 + t6752)*var2[8] + (t6752 + t2452*t6776)*var2[9];
  p_output1[3]=(t2452*t5094 + t177*t5195)*var2[3] + (t2452*t4604 + t177*t4716)*var2[4] + (t2452*t3044 + t177*t3088)*var2[5] + (t2452*t3317 + t177*t3597)*var2[6] + (t135*t1565*t2452 - 1.*t1565*t177*t2507)*var2[7] + (t177*t5428 + t7003)*var2[8] + (-1.*t177*t5597 + t7003)*var2[9];
  p_output1[4]=t5703*var2[3] + (t2452*t6397 + t177*t6421)*var2[4] + (t2452*t6094 + t177*t6118)*var2[5] + (t2452*t6249 + t177*t6273)*var2[6] + (t135*t2452*t5864 - 1.*t177*t2507*t5864)*var2[7] + (t177*t6463 + t7111)*var2[8] + (-1.*t177*t6502 + t7111)*var2[9];
  p_output1[5]=(t2452*t6893 + t177*t6920)*var2[4] + t7155*var2[5] + t7155*var2[6] + (t135*t2452*t6575 - 1.*t177*t2507*t6575)*var2[7] + (t177*t6732 + t7170)*var2[8] + (-1.*t177*t6776 + t7170)*var2[9];
  p_output1[6]=(-1.*t232*t4876 + t5853)*var2[3] + (-1.*t232*t4321 - 1.*t1403*t728*t729)*var2[4] - 1.*t232*t3018*var2[5] - 1.*t232*t3274*var2[6] + t5417*var2[7];
  p_output1[7]=(-1.*t1239*t232 + t1274*t1403*t728)*var2[3] + (-1.*t232*t6346 - 1.*t1403*t409*t729)*var2[4] - 1.*t232*t5915*var2[5] - 1.*t232*t6233*var2[6] + t6457*var2[7];
  p_output1[8]=(-1.*t1274*t1403 - 1.*t232*t6836)*var2[4] - 1.*t232*t6628*var2[5] - 1.*t232*t6628*var2[6] + t6719*var2[7];
}



void dR_LeftKneeJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
