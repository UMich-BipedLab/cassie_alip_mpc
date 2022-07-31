/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_RightKnee_src.h"

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
  double t723;
  double t848;
  double t893;
  double t256;
  double t535;
  double t636;
  double t1342;
  double t3112;
  double t2667;
  double t2721;
  double t3246;
  double t947;
  double t276;
  double t3052;
  double t3346;
  double t3508;
  double t4374;
  double t4531;
  double t4647;
  double t4872;
  double t4967;
  double t2098;
  double t5669;
  double t6087;
  double t6103;
  double t6213;
  double t6262;
  double t297;
  double t475;
  double t978;
  double t1040;
  double t1218;
  double t1606;
  double t2028;
  double t2259;
  double t2459;
  double t2535;
  double t2560;
  double t3748;
  double t4287;
  double t4344;
  double t4867;
  double t5020;
  double t5152;
  double t5173;
  double t5235;
  double t5313;
  double t5372;
  double t5424;
  double t5484;
  double t5495;
  double t5547;
  double t6121;
  double t6141;
  double t6169;
  double t6197;
  double t6276;
  double t6320;
  double t6326;
  double t6371;
  double t6399;
  double t6405;
  double t6415;
  double t6417;
  double t6419;
  double t6424;
  double t6504;
  double t6509;
  double t6510;
  double t6518;
  double t6520;
  double t6522;
  double t6530;
  double t6531;
  double t6536;
  double t6549;
  double t6550;
  double t6554;
  double t6560;
  double t6563;
  double t6564;
  double t6565;
  double t6568;
  double t6569;
  double t6573;
  double t6574;
  double t6576;
  double t6577;
  double t6578;
  double t6581;
  double t6590;
  double t6591;
  double t6593;
  double t6708;
  double t6699;
  double t6704;
  double t6705;
  double t6756;
  double t6737;
  double t6741;
  double t6742;
  double t6635;
  double t6644;
  double t6648;
  double t6653;
  double t6662;
  double t6667;
  double t6669;
  double t6680;
  double t6682;
  double t6706;
  double t6715;
  double t6716;
  double t6717;
  double t6724;
  double t6727;
  double t6730;
  double t6731;
  double t6735;
  double t6753;
  double t6758;
  double t6759;
  double t6760;
  double t6762;
  double t6765;
  double t6767;
  double t6772;
  double t6774;
  double t6813;
  double t6815;
  double t6821;
  double t6826;
  double t6827;
  double t6828;
  double t6830;
  double t6831;
  double t6832;
  double t6834;
  double t6835;
  double t6837;
  double t6839;
  double t6844;
  double t6846;
  double t6847;
  double t6849;
  double t6851;
  double t6852;
  double t6854;
  double t6855;
  double t6857;
  double t6864;
  double t6866;
  double t6871;
  double t6874;
  double t6877;
  double t6878;
  double t6880;
  double t6887;
  double t6888;
  double t6893;
  double t6897;
  double t6898;
  double t6900;
  double t6903;
  double t6905;
  double t6909;
  double t6910;
  double t6914;
  double t6919;
  double t6923;
  double t6952;
  double t6954;
  double t6955;
  double t6960;
  double t6975;
  double t6978;
  double t6979;
  double t6965;
  double t6970;
  double t6971;
  double t7012;
  double t7022;
  double t7023;
  double t7025;
  double t7017;
  double t7018;
  double t7019;
  double t6957;
  double t6959;
  double t6962;
  double t6972;
  double t6983;
  double t6986;
  double t6989;
  double t6990;
  double t6995;
  double t6996;
  double t6997;
  double t7000;
  double t7001;
  double t7002;
  double t7007;
  double t7013;
  double t7014;
  double t7016;
  double t7021;
  double t7026;
  double t7027;
  double t7028;
  double t7029;
  double t7030;
  double t7031;
  double t7032;
  double t7033;
  double t7034;
  double t7035;
  double t7036;
  double t7010;
  double t7037;
  double t7040;
  double t7041;
  double t7045;
  double t7046;
  double t7050;
  double t7051;
  double t7055;
  t723 = Cos(var1[14]);
  t848 = -1.*t723;
  t893 = 0. + t848;
  t256 = Cos(var1[4]);
  t535 = Sin(var1[4]);
  t636 = Cos(var1[5]);
  t1342 = Cos(var1[13]);
  t3112 = Cos(var1[15]);
  t2667 = Cos(var1[16]);
  t2721 = Sin(var1[15]);
  t3246 = Sin(var1[16]);
  t947 = Sin(var1[13]);
  t276 = Sin(var1[14]);
  t3052 = t2667*t2721;
  t3346 = t3112*t3246;
  t3508 = 0. + t3052 + t3346;
  t4374 = -1.*t3112*t2667;
  t4531 = t2721*t3246;
  t4647 = 0. + t4374 + t4531;
  t4872 = t276*t3508;
  t4967 = 0. + t4872;
  t2098 = Sin(var1[5]);
  t5669 = t3112*t2667;
  t6087 = -1.*t2721*t3246;
  t6103 = 0. + t5669 + t6087;
  t6213 = t276*t6103;
  t6262 = 0. + t6213;
  t297 = 0. + t276;
  t475 = -1.*t256*t297;
  t978 = t893*t947;
  t1040 = 0. + t978;
  t1218 = t636*t1040;
  t1606 = t1342*t893;
  t2028 = 0. + t1606;
  t2259 = t2028*t2098;
  t2459 = 0. + t1218 + t2259;
  t2535 = -1.*t535*t2459;
  t2560 = t475 + t2535;
  t3748 = t723*t3508;
  t4287 = 0. + t3748;
  t4344 = -1.*t256*t4287;
  t4867 = t1342*t4647;
  t5020 = t947*t4967;
  t5152 = 0. + t4867 + t5020;
  t5173 = t636*t5152;
  t5235 = -1.*t947*t4647;
  t5313 = t1342*t4967;
  t5372 = 0. + t5235 + t5313;
  t5424 = t5372*t2098;
  t5484 = 0. + t5173 + t5424;
  t5495 = -1.*t535*t5484;
  t5547 = t4344 + t5495;
  t6121 = t723*t6103;
  t6141 = 0. + t6121;
  t6169 = -1.*t256*t6141;
  t6197 = t1342*t3508;
  t6276 = t947*t6262;
  t6320 = 0. + t6197 + t6276;
  t6326 = t636*t6320;
  t6371 = -1.*t947*t3508;
  t6399 = t1342*t6262;
  t6405 = 0. + t6371 + t6399;
  t6415 = t6405*t2098;
  t6417 = 0. + t6326 + t6415;
  t6419 = -1.*t535*t6417;
  t6424 = t6169 + t6419;
  t6504 = -1.*t636*t1040;
  t6509 = -1.*t2028*t2098;
  t6510 = t6504 + t6509;
  t6518 = var2[4]*t6510;
  t6520 = t2028*t636;
  t6522 = -1.*t1040*t2098;
  t6530 = t6520 + t6522;
  t6531 = var2[3]*t256*t6530;
  t6536 = t6518 + t6531;
  t6549 = -1.*t636*t5152;
  t6550 = -1.*t5372*t2098;
  t6554 = t6549 + t6550;
  t6560 = var2[4]*t6554;
  t6563 = t636*t5372;
  t6564 = -1.*t5152*t2098;
  t6565 = t6563 + t6564;
  t6568 = var2[3]*t256*t6565;
  t6569 = t6560 + t6568;
  t6573 = -1.*t636*t6320;
  t6574 = -1.*t6405*t2098;
  t6576 = t6573 + t6574;
  t6577 = var2[4]*t6576;
  t6578 = t636*t6405;
  t6581 = -1.*t6320*t2098;
  t6590 = t6578 + t6581;
  t6591 = var2[3]*t256*t6590;
  t6593 = t6577 + t6591;
  t6708 = t5235 + t5313;
  t6699 = -1.*t1342*t4647;
  t6704 = -1.*t947*t4967;
  t6705 = t6699 + t6704;
  t6756 = t6371 + t6399;
  t6737 = -1.*t1342*t3508;
  t6741 = -1.*t947*t6262;
  t6742 = t6737 + t6741;
  t6635 = -1.*t893*t636*t947;
  t6644 = -1.*t1342*t893*t2098;
  t6648 = t6635 + t6644;
  t6653 = var2[4]*t6648;
  t6662 = t1342*t893*t636;
  t6667 = -1.*t893*t947*t2098;
  t6669 = t6662 + t6667;
  t6680 = var2[3]*t256*t6669;
  t6682 = t6653 + t6680;
  t6706 = t636*t6705;
  t6715 = -1.*t6708*t2098;
  t6716 = t6706 + t6715;
  t6717 = var2[4]*t6716;
  t6724 = t636*t6708;
  t6727 = t6705*t2098;
  t6730 = t6724 + t6727;
  t6731 = var2[3]*t256*t6730;
  t6735 = t6717 + t6731;
  t6753 = t636*t6742;
  t6758 = -1.*t6756*t2098;
  t6759 = t6753 + t6758;
  t6760 = var2[4]*t6759;
  t6762 = t636*t6756;
  t6765 = t6742*t2098;
  t6767 = t6762 + t6765;
  t6772 = var2[3]*t256*t6767;
  t6774 = t6760 + t6772;
  t6813 = var2[13]*t723;
  t6815 = var2[5]*t723;
  t6821 = t1342*t636*t276;
  t6826 = -1.*t947*t276*t2098;
  t6827 = t6821 + t6826;
  t6828 = var2[4]*t6827;
  t6830 = -1.*t723*t535;
  t6831 = t636*t947*t276;
  t6832 = t1342*t276*t2098;
  t6834 = t6831 + t6832;
  t6835 = t256*t6834;
  t6837 = t6830 + t6835;
  t6839 = var2[3]*t6837;
  t6844 = t6813 + t6815 + t6828 + t6839;
  t6846 = -1.*var2[13]*t276*t3508;
  t6847 = -1.*var2[5]*t276*t3508;
  t6849 = t1342*t723*t636*t3508;
  t6851 = -1.*t723*t947*t3508*t2098;
  t6852 = t6849 + t6851;
  t6854 = var2[4]*t6852;
  t6855 = t276*t3508*t535;
  t6857 = t723*t636*t947*t3508;
  t6864 = t1342*t723*t3508*t2098;
  t6866 = t6857 + t6864;
  t6871 = t256*t6866;
  t6874 = t6855 + t6871;
  t6877 = var2[3]*t6874;
  t6878 = t6846 + t6847 + t6854 + t6877;
  t6880 = -1.*var2[13]*t276*t6103;
  t6887 = -1.*var2[5]*t276*t6103;
  t6888 = t1342*t723*t636*t6103;
  t6893 = -1.*t723*t947*t6103*t2098;
  t6897 = t6888 + t6893;
  t6898 = var2[4]*t6897;
  t6900 = t276*t6103*t535;
  t6903 = t723*t636*t947*t6103;
  t6905 = t1342*t723*t6103*t2098;
  t6909 = t6903 + t6905;
  t6910 = t256*t6909;
  t6914 = t6900 + t6910;
  t6919 = var2[3]*t6914;
  t6923 = t6880 + t6887 + t6898 + t6919;
  t6952 = -1.*t2667*t2721;
  t6954 = -1.*t3112*t3246;
  t6955 = t6952 + t6954;
  t6960 = t5669 + t6087;
  t6975 = t947*t276*t6955;
  t6978 = t1342*t6960;
  t6979 = t6975 + t6978;
  t6965 = t1342*t276*t6955;
  t6970 = -1.*t947*t6960;
  t6971 = t6965 + t6970;
  t7012 = t3052 + t3346;
  t7022 = t1342*t7012;
  t7023 = t947*t276*t6960;
  t7025 = t7022 + t7023;
  t7017 = -1.*t947*t7012;
  t7018 = t1342*t276*t6960;
  t7019 = t7017 + t7018;
  t6957 = var2[13]*t723*t6955;
  t6959 = var2[5]*t723*t6955;
  t6962 = var2[14]*t6960;
  t6972 = t636*t6971;
  t6983 = -1.*t6979*t2098;
  t6986 = t6972 + t6983;
  t6989 = var2[4]*t6986;
  t6990 = -1.*t723*t6955*t535;
  t6995 = t636*t6979;
  t6996 = t6971*t2098;
  t6997 = t6995 + t6996;
  t7000 = t256*t6997;
  t7001 = t6990 + t7000;
  t7002 = var2[3]*t7001;
  t7007 = t6957 + t6959 + t6962 + t6989 + t7002;
  t7013 = var2[14]*t7012;
  t7014 = var2[13]*t723*t6960;
  t7016 = var2[5]*t723*t6960;
  t7021 = t636*t7019;
  t7026 = -1.*t7025*t2098;
  t7027 = t7021 + t7026;
  t7028 = var2[4]*t7027;
  t7029 = -1.*t723*t6960*t535;
  t7030 = t636*t7025;
  t7031 = t7019*t2098;
  t7032 = t7030 + t7031;
  t7033 = t256*t7032;
  t7034 = t7029 + t7033;
  t7035 = var2[3]*t7034;
  t7036 = t7013 + t7014 + t7016 + t7028 + t7035;
  t7010 = 0.000956*t7007;
  t7037 = 0.00216*t7036;
  t7040 = t7010 + t7037;
  t7041 = 0.00144*t7007;
  t7045 = 0.000956*t7036;
  t7046 = t7041 + t7045;
  t7050 = -1.e-6*t7007;
  t7051 = -3.e-6*t7036;
  t7055 = t7050 + t7051;
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
  p_output1[12]=-3.e-6*t2560*var2[3] + 0.00216*t5547*var2[3] + 0.000956*t6424*var2[3];
  p_output1[13]=-1.e-6*t2560*var2[3] + 0.000956*t5547*var2[3] + 0.00144*t6424*var2[3];
  p_output1[14]=0.00334*t2560*var2[3] - 3.e-6*t5547*var2[3] - 1.e-6*t6424*var2[3];
  p_output1[15]=-3.e-6*t6536 + 0.00216*t6569 + 0.000956*t6593;
  p_output1[16]=-1.e-6*t6536 + 0.000956*t6569 + 0.00144*t6593;
  p_output1[17]=0.00334*t6536 - 3.e-6*t6569 - 1.e-6*t6593;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-3.e-6*t6682 + 0.00216*t6735 + 0.000956*t6774;
  p_output1[40]=-1.e-6*t6682 + 0.000956*t6735 + 0.00144*t6774;
  p_output1[41]=0.00334*t6682 - 3.e-6*t6735 - 1.e-6*t6774;
  p_output1[42]=-3.e-6*t6844 + 0.00216*t6878 + 0.000956*t6923;
  p_output1[43]=-1.e-6*t6844 + 0.000956*t6878 + 0.00144*t6923;
  p_output1[44]=0.00334*t6844 - 3.e-6*t6878 - 1.e-6*t6923;
  p_output1[45]=t7040;
  p_output1[46]=t7046;
  p_output1[47]=t7055;
  p_output1[48]=t7040;
  p_output1[49]=t7046;
  p_output1[50]=t7055;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jq_AMBody_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
