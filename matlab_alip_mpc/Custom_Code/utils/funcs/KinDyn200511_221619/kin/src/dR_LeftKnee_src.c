/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftKnee_src.h"

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
  double t504;
  double t273;
  double t554;
  double t392;
  double t677;
  double t146;
  double t170;
  double t411;
  double t678;
  double t679;
  double t707;
  double t759;
  double t847;
  double t881;
  double t892;
  double t1055;
  double t1129;
  double t1161;
  double t1171;
  double t1231;
  double t1329;
  double t1479;
  double t108;
  double t106;
  double t1904;
  double t1970;
  double t2013;
  double t1525;
  double t1499;
  double t2391;
  double t2459;
  double t2495;
  double t1797;
  double t2270;
  double t2361;
  double t4491;
  double t4535;
  double t3490;
  double t4356;
  double t5127;
  double t5134;
  double t5137;
  double t4996;
  double t4997;
  double t5018;
  double t5030;
  double t5037;
  double t5046;
  double t5646;
  double t5670;
  double t5673;
  double t5573;
  double t5587;
  double t5592;
  double t5843;
  double t5876;
  double t5912;
  double t5562;
  double t5602;
  double t5696;
  double t5698;
  double t5834;
  double t5838;
  double t6098;
  double t6099;
  double t6103;
  double t6184;
  double t6185;
  double t6198;
  double t6213;
  double t6301;
  double t6388;
  double t6396;
  double t6423;
  double t6441;
  double t6467;
  double t6476;
  double t6480;
  double t6514;
  double t6523;
  double t6524;
  double t6540;
  double t6646;
  double t6649;
  double t6635;
  double t6638;
  double t6640;
  double t6699;
  double t6715;
  double t6684;
  double t6690;
  double t6786;
  double t6787;
  double t6788;
  double t6775;
  double t6777;
  double t6780;
  double t6781;
  double t6782;
  double t6783;
  double t6827;
  double t6834;
  double t6836;
  double t6864;
  double t6868;
  double t6875;
  double t6876;
  double t6222;
  double t6224;
  double t6252;
  double t6928;
  double t6933;
  double t6936;
  double t6937;
  double t6943;
  double t6944;
  double t6978;
  double t6979;
  double t6982;
  double t6965;
  double t6974;
  double t6975;
  double t6976;
  double t6983;
  double t6990;
  double t6992;
  double t6995;
  double t6996;
  double t6998;
  double t7000;
  double t7001;
  double t7010;
  double t7025;
  double t7062;
  double t7087;
  double t7089;
  double t7091;
  double t7095;
  double t7150;
  double t7151;
  double t7152;
  double t7119;
  double t7122;
  double t7123;
  double t7128;
  double t7130;
  double t7131;
  double t2362;
  double t2750;
  double t2757;
  double t2774;
  double t2918;
  double t2979;
  double t4476;
  double t4560;
  double t4592;
  double t4854;
  double t4873;
  double t4875;
  double t5093;
  double t5191;
  double t5194;
  double t5315;
  double t5381;
  double t5403;
  double t5840;
  double t5946;
  double t5947;
  double t5983;
  double t6011;
  double t6017;
  double t6139;
  double t6140;
  double t6173;
  double t7329;
  double t6641;
  double t6650;
  double t6654;
  double t6657;
  double t6660;
  double t6668;
  double t6692;
  double t6722;
  double t6745;
  double t6752;
  double t6753;
  double t6764;
  double t6784;
  double t6790;
  double t6796;
  double t6798;
  double t6810;
  double t6811;
  double t6843;
  double t6847;
  double t6855;
  double t6889;
  double t6890;
  double t6893;
  double t7431;
  double t6262;
  double t6268;
  double t7473;
  double t7474;
  double t7481;
  double t7063;
  double t7072;
  double t7084;
  double t7103;
  double t7107;
  double t7111;
  double t7504;
  double t7134;
  double t7159;
  double t7164;
  double t7172;
  double t7173;
  double t7177;
  t504 = Cos(var1[3]);
  t273 = Cos(var1[5]);
  t554 = Sin(var1[4]);
  t392 = Sin(var1[3]);
  t677 = Sin(var1[5]);
  t146 = Cos(var1[7]);
  t170 = Cos(var1[6]);
  t411 = -1.*t273*t392;
  t678 = t504*t554*t677;
  t679 = t411 + t678;
  t707 = t170*t679;
  t759 = t504*t273*t554;
  t847 = t392*t677;
  t881 = t759 + t847;
  t892 = Sin(var1[6]);
  t1055 = t881*t892;
  t1129 = t707 + t1055;
  t1161 = t146*t1129;
  t1171 = Cos(var1[4]);
  t1231 = Sin(var1[7]);
  t1329 = -1.*t504*t1171*t1231;
  t1479 = t1161 + t1329;
  t108 = Sin(var1[9]);
  t106 = Cos(var1[8]);
  t1904 = t273*t392;
  t1970 = -1.*t504*t554*t677;
  t2013 = t1904 + t1970;
  t1525 = Sin(var1[8]);
  t1499 = Cos(var1[9]);
  t2391 = t170*t2013;
  t2459 = -1.*t881*t892;
  t2495 = t2391 + t2459;
  t1797 = t170*t881;
  t2270 = t2013*t892;
  t2361 = t1797 + t2270;
  t4491 = -1.*t170*t679;
  t4535 = t4491 + t2459;
  t3490 = -1.*t679*t892;
  t4356 = t1797 + t3490;
  t5127 = t504*t1171*t273*t170;
  t5134 = -1.*t504*t1171*t677*t892;
  t5137 = t5127 + t5134;
  t4996 = -1.*t504*t146*t554;
  t4997 = t504*t1171*t170*t677;
  t5018 = t504*t1171*t273*t892;
  t5030 = t4997 + t5018;
  t5037 = t5030*t1231;
  t5046 = t4996 + t5037;
  t5646 = -1.*t273*t392*t554;
  t5670 = t504*t677;
  t5673 = t5646 + t5670;
  t5573 = -1.*t504*t273;
  t5587 = -1.*t392*t554*t677;
  t5592 = t5573 + t5587;
  t5843 = t170*t5673;
  t5876 = -1.*t5592*t892;
  t5912 = t5843 + t5876;
  t5562 = -1.*t1171*t146*t392;
  t5602 = t170*t5592;
  t5696 = t5673*t892;
  t5698 = t5602 + t5696;
  t5834 = t5698*t1231;
  t5838 = t5562 + t5834;
  t6098 = t504*t1171*t146;
  t6099 = t1129*t1231;
  t6103 = t6098 + t6099;
  t6184 = t106*t4356;
  t6185 = -1.*t6103*t1525;
  t6198 = t6184 + t6185;
  t6213 = t108*t6198;
  t6301 = t504*t273;
  t6388 = t392*t554*t677;
  t6396 = t6301 + t6388;
  t6423 = t170*t6396;
  t6441 = t273*t392*t554;
  t6467 = -1.*t504*t677;
  t6476 = t6441 + t6467;
  t6480 = t6476*t892;
  t6514 = t6423 + t6480;
  t6523 = t146*t6514;
  t6524 = -1.*t1171*t392*t1231;
  t6540 = t6523 + t6524;
  t6646 = -1.*t6476*t892;
  t6649 = t5602 + t6646;
  t6635 = t170*t6476;
  t6638 = t5592*t892;
  t6640 = t6635 + t6638;
  t6699 = -1.*t170*t6396;
  t6715 = t6699 + t6646;
  t6684 = -1.*t6396*t892;
  t6690 = t6635 + t6684;
  t6786 = t1171*t273*t170*t392;
  t6787 = -1.*t1171*t392*t677*t892;
  t6788 = t6786 + t6787;
  t6775 = -1.*t146*t392*t554;
  t6777 = t1171*t170*t392*t677;
  t6780 = t1171*t273*t392*t892;
  t6781 = t6777 + t6780;
  t6782 = t6781*t1231;
  t6783 = t6775 + t6782;
  t6827 = t1171*t146*t392;
  t6834 = t6514*t1231;
  t6836 = t6827 + t6834;
  t6864 = t106*t6690;
  t6868 = -1.*t6836*t1525;
  t6875 = t6864 + t6868;
  t6876 = t108*t6875;
  t6222 = t106*t6103;
  t6224 = t4356*t1525;
  t6252 = t6222 + t6224;
  t6928 = t1171*t170*t677;
  t6933 = t1171*t273*t892;
  t6936 = t6928 + t6933;
  t6937 = t146*t6936;
  t6943 = t554*t1231;
  t6944 = t6937 + t6943;
  t6978 = -1.*t1171*t170*t677;
  t6979 = -1.*t1171*t273*t892;
  t6982 = t6978 + t6979;
  t6965 = t1171*t273*t170;
  t6974 = -1.*t1171*t677*t892;
  t6975 = t6965 + t6974;
  t6976 = t106*t6975*t1231;
  t6983 = t6982*t1525;
  t6990 = t6976 + t6983;
  t6992 = t108*t6990;
  t6995 = t106*t6982;
  t6996 = -1.*t6975*t1231*t1525;
  t6998 = t6995 + t6996;
  t7000 = -1.*t1499*t6998;
  t7001 = t6992 + t7000;
  t7010 = -1.*t146*t554;
  t7025 = t6936*t1231;
  t7062 = t7010 + t7025;
  t7087 = t106*t6975;
  t7089 = -1.*t7062*t1525;
  t7091 = t7087 + t7089;
  t7095 = t108*t7091;
  t7150 = -1.*t273*t170*t554;
  t7151 = t554*t677*t892;
  t7152 = t7150 + t7151;
  t7119 = -1.*t1171*t146;
  t7122 = -1.*t170*t554*t677;
  t7123 = -1.*t273*t554*t892;
  t7128 = t7122 + t7123;
  t7130 = t7128*t1231;
  t7131 = t7119 + t7130;
  t2362 = t106*t2361*t1231;
  t2750 = t2495*t1525;
  t2757 = t2362 + t2750;
  t2774 = t106*t2495;
  t2918 = -1.*t2361*t1231*t1525;
  t2979 = t2774 + t2918;
  t4476 = t106*t4356*t1231;
  t4560 = t4535*t1525;
  t4592 = t4476 + t4560;
  t4854 = t106*t4535;
  t4873 = -1.*t4356*t1231*t1525;
  t4875 = t4854 + t4873;
  t5093 = t106*t5046;
  t5191 = t5137*t1525;
  t5194 = t5093 + t5191;
  t5315 = t106*t5137;
  t5381 = -1.*t5046*t1525;
  t5403 = t5315 + t5381;
  t5840 = t106*t5838;
  t5946 = t5912*t1525;
  t5947 = t5840 + t5946;
  t5983 = t106*t5912;
  t6011 = -1.*t5838*t1525;
  t6017 = t5983 + t6011;
  t6139 = -1.*t106*t6103;
  t6140 = -1.*t4356*t1525;
  t6173 = t6139 + t6140;
  t7329 = t1499*t6198;
  t6641 = t106*t6640*t1231;
  t6650 = t6649*t1525;
  t6654 = t6641 + t6650;
  t6657 = t106*t6649;
  t6660 = -1.*t6640*t1231*t1525;
  t6668 = t6657 + t6660;
  t6692 = t106*t6690*t1231;
  t6722 = t6715*t1525;
  t6745 = t6692 + t6722;
  t6752 = t106*t6715;
  t6753 = -1.*t6690*t1231*t1525;
  t6764 = t6752 + t6753;
  t6784 = t106*t6783;
  t6790 = t6788*t1525;
  t6796 = t6784 + t6790;
  t6798 = t106*t6788;
  t6810 = -1.*t6783*t1525;
  t6811 = t6798 + t6810;
  t6843 = -1.*t106*t6836;
  t6847 = -1.*t6690*t1525;
  t6855 = t6843 + t6847;
  t6889 = t106*t6836;
  t6890 = t6690*t1525;
  t6893 = t6889 + t6890;
  t7431 = t1499*t6875;
  t6262 = t1499*t6252;
  t6268 = t6262 + t6213;
  t7473 = t1499*t6990;
  t7474 = t108*t6998;
  t7481 = t7473 + t7474;
  t7063 = -1.*t106*t7062;
  t7072 = -1.*t6975*t1525;
  t7084 = t7063 + t7072;
  t7103 = t106*t7062;
  t7107 = t6975*t1525;
  t7111 = t7103 + t7107;
  t7504 = t1499*t7091;
  t7134 = t106*t7131;
  t7159 = t7152*t1525;
  t7164 = t7134 + t7159;
  t7172 = t106*t7152;
  t7173 = -1.*t7131*t1525;
  t7177 = t7172 + t7173;
  p_output1[0]=(t108*t5947 - 1.*t1499*t6017)*var2[3] + (t108*t5194 - 1.*t1499*t5403)*var2[4] + (t108*t2757 - 1.*t1499*t2979)*var2[5] + (t108*t4592 - 1.*t1499*t4875)*var2[6] + (t106*t108*t1479 + t1479*t1499*t1525)*var2[7] + (-1.*t1499*t6173 + t6213)*var2[8] + t6268*var2[9];
  p_output1[1]=(-1.*t1499*t6198 + t108*t6252)*var2[3] + (t108*t6796 - 1.*t1499*t6811)*var2[4] + (t108*t6654 - 1.*t1499*t6668)*var2[5] + (t108*t6745 - 1.*t1499*t6764)*var2[6] + (t106*t108*t6540 + t1499*t1525*t6540)*var2[7] + (-1.*t1499*t6855 + t6876)*var2[8] + (t6876 + t1499*t6893)*var2[9];
  p_output1[2]=(t108*t7164 - 1.*t1499*t7177)*var2[4] + t7001*var2[5] + t7001*var2[6] + (t106*t108*t6944 + t1499*t1525*t6944)*var2[7] + (-1.*t1499*t7084 + t7095)*var2[8] + (t7095 + t1499*t7111)*var2[9];
  p_output1[3]=(t1499*t5947 + t108*t6017)*var2[3] + (t1499*t5194 + t108*t5403)*var2[4] + (t1499*t2757 + t108*t2979)*var2[5] + (t1499*t4592 + t108*t4875)*var2[6] + (t106*t1479*t1499 - 1.*t108*t1479*t1525)*var2[7] + (t108*t6173 + t7329)*var2[8] + (-1.*t108*t6252 + t7329)*var2[9];
  p_output1[4]=t6268*var2[3] + (t1499*t6796 + t108*t6811)*var2[4] + (t1499*t6654 + t108*t6668)*var2[5] + (t1499*t6745 + t108*t6764)*var2[6] + (t106*t1499*t6540 - 1.*t108*t1525*t6540)*var2[7] + (t108*t6855 + t7431)*var2[8] + (-1.*t108*t6893 + t7431)*var2[9];
  p_output1[5]=(t1499*t7164 + t108*t7177)*var2[4] + t7481*var2[5] + t7481*var2[6] + (t106*t1499*t6944 - 1.*t108*t1525*t6944)*var2[7] + (t108*t7084 + t7504)*var2[8] + (-1.*t108*t7111 + t7504)*var2[9];
  p_output1[6]=(-1.*t146*t5698 + t6524)*var2[3] + (-1.*t146*t5030 - 1.*t1231*t504*t554)*var2[4] - 1.*t146*t2361*var2[5] - 1.*t146*t4356*var2[6] + t6103*var2[7];
  p_output1[7]=(-1.*t1129*t146 + t1171*t1231*t504)*var2[3] + (-1.*t1231*t392*t554 - 1.*t146*t6781)*var2[4] - 1.*t146*t6640*var2[5] - 1.*t146*t6690*var2[6] + t6836*var2[7];
  p_output1[8]=(-1.*t1171*t1231 - 1.*t146*t7128)*var2[4] - 1.*t146*t6975*var2[5] - 1.*t146*t6975*var2[6] + t7062*var2[7];
}



void dR_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
