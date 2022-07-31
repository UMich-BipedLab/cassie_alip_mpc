/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:02 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1506;
  double t210;
  double t250;
  double t384;
  double t1510;
  double t2239;
  double t2380;
  double t2430;
  double t3128;
  double t3714;
  double t3869;
  double t4185;
  double t914;
  double t1617;
  double t1788;
  double t5158;
  double t5161;
  double t5264;
  double t5331;
  double t4915;
  double t5064;
  double t5088;
  double t5694;
  double t6614;
  double t6708;
  double t6746;
  double t6804;
  double t6451;
  double t6478;
  double t6480;
  double t6918;
  double t6923;
  double t6926;
  double t7162;
  double t7166;
  double t7170;
  double t7199;
  double t7215;
  double t7248;
  double t7255;
  double t7315;
  double t7334;
  double t7335;
  double t2961;
  double t3171;
  double t3668;
  double t4274;
  double t4855;
  double t4876;
  double t7538;
  double t7543;
  double t7547;
  double t7471;
  double t7478;
  double t7514;
  double t5292;
  double t5466;
  double t5481;
  double t5715;
  double t6022;
  double t6340;
  double t7568;
  double t7613;
  double t7620;
  double t6799;
  double t6820;
  double t6860;
  double t6961;
  double t7043;
  double t7067;
  double t7198;
  double t7206;
  double t7214;
  double t7691;
  double t7698;
  double t7708;
  double t7722;
  double t7723;
  double t7728;
  double t7273;
  double t7303;
  double t7304;
  double t7750;
  double t7751;
  double t7765;
  double t7774;
  double t7775;
  double t7781;
  double t7849;
  double t7852;
  double t7853;
  double t7918;
  double t7920;
  double t7928;
  double t7937;
  double t7941;
  double t7967;
  double t7971;
  double t7974;
  double t7975;
  double t7978;
  double t7980;
  double t7981;
  double t8102;
  double t8104;
  double t8122;
  double t8209;
  double t8244;
  double t8265;
  double t8279;
  double t8289;
  double t8290;
  double t8296;
  double t8298;
  double t8300;
  double t8315;
  double t8320;
  double t8338;
  double t8540;
  double t8542;
  double t8550;
  double t8579;
  double t8582;
  double t8586;
  double t8589;
  double t8593;
  double t8608;
  double t8610;
  double t8616;
  double t8617;
  double t8627;
  double t8634;
  double t8635;
  double t8684;
  double t8687;
  double t8688;
  double t8694;
  double t8697;
  double t8705;
  double t8710;
  double t8713;
  double t8726;
  double t8727;
  double t8728;
  double t8735;
  double t8736;
  double t8737;
  double t8757;
  double t8758;
  double t8760;
  double t8768;
  double t8774;
  double t8775;
  double t8781;
  double t8784;
  double t8793;
  double t8794;
  double t8795;
  double t8805;
  double t8810;
  double t8812;
  double t8861;
  double t8863;
  double t8864;
  double t8880;
  double t8884;
  double t8885;
  double t8888;
  double t8889;
  double t8890;
  double t8894;
  double t8896;
  double t8898;
  double t8945;
  double t8953;
  double t8957;
  double t8959;
  double t8961;
  double t8963;
  double t8964;
  double t8965;
  double t8920;
  double t8921;
  double t8924;
  double t8925;
  double t8929;
  double t8993;
  double t8994;
  double t8996;
  double t9004;
  double t9005;
  double t9014;
  double t9015;
  double t9019;
  double t9020;
  double t9022;
  double t9025;
  double t9027;
  double t9028;
  double t8869;
  double t8871;
  double t8876;
  double t8887;
  double t8893;
  double t8899;
  double t8903;
  double t8904;
  double t8905;
  double t8911;
  double t8913;
  double t8914;
  double t8916;
  double t8917;
  double t7652;
  double t7655;
  double t7680;
  double t9051;
  double t9053;
  double t9054;
  double t9060;
  double t9061;
  double t9088;
  double t9089;
  double t9091;
  double t9093;
  double t9094;
  double t9097;
  double t9124;
  double t9126;
  double t9127;
  double t9130;
  double t9131;
  double t9132;
  double t9176;
  double t9177;
  double t9178;
  double t7793;
  double t9166;
  double t9168;
  double t9170;
  double t9172;
  double t9174;
  double t9194;
  double t9195;
  double t9198;
  double t9206;
  double t9208;
  double t9211;
  double t9213;
  double t9214;
  double t9216;
  double t9247;
  double t9248;
  double t9249;
  double t9255;
  double t9256;
  double t9257;
  double t9261;
  double t9264;
  double t9265;
  double t7791;
  double t7802;
  double t9186;
  double t9284;
  double t9286;
  double t9287;
  double t9290;
  double t9291;
  double t9303;
  double t9304;
  double t9306;
  double t9228;
  double t9240;
  double t9325;
  double t9328;
  double t9329;
  double t9271;
  double t9277;
  t1506 = Cos(var1[3]);
  t210 = Cos(var1[5]);
  t250 = Sin(var1[3]);
  t384 = Sin(var1[4]);
  t1510 = Sin(var1[5]);
  t2239 = Cos(var1[6]);
  t2380 = -1.*t2239;
  t2430 = 1. + t2380;
  t3128 = Sin(var1[6]);
  t3714 = -1.*t1506*t210;
  t3869 = -1.*t250*t384*t1510;
  t4185 = t3714 + t3869;
  t914 = -1.*t210*t250*t384;
  t1617 = t1506*t1510;
  t1788 = t914 + t1617;
  t5158 = Cos(var1[7]);
  t5161 = -1.*t5158;
  t5264 = 1. + t5161;
  t5331 = Sin(var1[7]);
  t4915 = t2239*t4185;
  t5064 = t1788*t3128;
  t5088 = t4915 + t5064;
  t5694 = Cos(var1[4]);
  t6614 = Cos(var1[8]);
  t6708 = -1.*t6614;
  t6746 = 1. + t6708;
  t6804 = Sin(var1[8]);
  t6451 = -1.*t5694*t5158*t250;
  t6478 = t5088*t5331;
  t6480 = t6451 + t6478;
  t6918 = t2239*t1788;
  t6923 = -1.*t4185*t3128;
  t6926 = t6918 + t6923;
  t7162 = Cos(var1[9]);
  t7166 = -1.*t7162;
  t7170 = 1. + t7166;
  t7199 = Sin(var1[9]);
  t7215 = t6614*t6480;
  t7248 = t6926*t6804;
  t7255 = t7215 + t7248;
  t7315 = t6614*t6926;
  t7334 = -1.*t6480*t6804;
  t7335 = t7315 + t7334;
  t2961 = 0.07996*t2430;
  t3171 = -0.135*t3128;
  t3668 = 0. + t2961 + t3171;
  t4274 = 0.135*t2430;
  t4855 = 0.07996*t3128;
  t4876 = 0. + t4274 + t4855;
  t7538 = -1.*t210*t250;
  t7543 = t1506*t384*t1510;
  t7547 = t7538 + t7543;
  t7471 = t1506*t210*t384;
  t7478 = t250*t1510;
  t7514 = t7471 + t7478;
  t5292 = 0.135*t5264;
  t5466 = 0.08055*t5331;
  t5481 = 0. + t5292 + t5466;
  t5715 = -0.08055*t5264;
  t6022 = 0.135*t5331;
  t6340 = 0. + t5715 + t6022;
  t7568 = t2239*t7547;
  t7613 = t7514*t3128;
  t7620 = t7568 + t7613;
  t6799 = -0.08055*t6746;
  t6820 = -0.01004*t6804;
  t6860 = 0. + t6799 + t6820;
  t6961 = -0.01004*t6746;
  t7043 = 0.08055*t6804;
  t7067 = 0. + t6961 + t7043;
  t7198 = -0.08055*t7170;
  t7206 = -0.13004*t7199;
  t7214 = 0. + t7198 + t7206;
  t7691 = t1506*t5694*t5158;
  t7698 = t7620*t5331;
  t7708 = t7691 + t7698;
  t7722 = t2239*t7514;
  t7723 = -1.*t7547*t3128;
  t7728 = t7722 + t7723;
  t7273 = -0.13004*t7170;
  t7303 = 0.08055*t7199;
  t7304 = 0. + t7273 + t7303;
  t7750 = t6614*t7708;
  t7751 = t7728*t6804;
  t7765 = t7750 + t7751;
  t7774 = t6614*t7728;
  t7775 = -1.*t7708*t6804;
  t7781 = t7774 + t7775;
  t7849 = t1506*t5694*t2239*t1510;
  t7852 = t1506*t5694*t210*t3128;
  t7853 = t7849 + t7852;
  t7918 = -1.*t1506*t5158*t384;
  t7920 = t7853*t5331;
  t7928 = t7918 + t7920;
  t7937 = t1506*t5694*t210*t2239;
  t7941 = -1.*t1506*t5694*t1510*t3128;
  t7967 = t7937 + t7941;
  t7971 = t6614*t7928;
  t7974 = t7967*t6804;
  t7975 = t7971 + t7974;
  t7978 = t6614*t7967;
  t7980 = -1.*t7928*t6804;
  t7981 = t7978 + t7980;
  t8102 = t5694*t2239*t250*t1510;
  t8104 = t5694*t210*t250*t3128;
  t8122 = t8102 + t8104;
  t8209 = -1.*t5158*t250*t384;
  t8244 = t8122*t5331;
  t8265 = t8209 + t8244;
  t8279 = t5694*t210*t2239*t250;
  t8289 = -1.*t5694*t250*t1510*t3128;
  t8290 = t8279 + t8289;
  t8296 = t6614*t8265;
  t8298 = t8290*t6804;
  t8300 = t8296 + t8298;
  t8315 = t6614*t8290;
  t8320 = -1.*t8265*t6804;
  t8338 = t8315 + t8320;
  t8540 = -1.*t2239*t384*t1510;
  t8542 = -1.*t210*t384*t3128;
  t8550 = t8540 + t8542;
  t8579 = -1.*t5694*t5158;
  t8582 = t8550*t5331;
  t8586 = t8579 + t8582;
  t8589 = -1.*t210*t2239*t384;
  t8593 = t384*t1510*t3128;
  t8608 = t8589 + t8593;
  t8610 = t6614*t8586;
  t8616 = t8608*t6804;
  t8617 = t8610 + t8616;
  t8627 = t6614*t8608;
  t8634 = -1.*t8586*t6804;
  t8635 = t8627 + t8634;
  t8684 = t210*t250;
  t8687 = -1.*t1506*t384*t1510;
  t8688 = t8684 + t8687;
  t8694 = t8688*t3128;
  t8697 = t7722 + t8694;
  t8705 = t2239*t8688;
  t8710 = -1.*t7514*t3128;
  t8713 = t8705 + t8710;
  t8726 = t6614*t8697*t5331;
  t8727 = t8713*t6804;
  t8728 = t8726 + t8727;
  t8735 = t6614*t8713;
  t8736 = -1.*t8697*t5331*t6804;
  t8737 = t8735 + t8736;
  t8757 = t210*t250*t384;
  t8758 = -1.*t1506*t1510;
  t8760 = t8757 + t8758;
  t8768 = t2239*t8760;
  t8774 = t4185*t3128;
  t8775 = t8768 + t8774;
  t8781 = -1.*t8760*t3128;
  t8784 = t4915 + t8781;
  t8793 = t6614*t8775*t5331;
  t8794 = t8784*t6804;
  t8795 = t8793 + t8794;
  t8805 = t6614*t8784;
  t8810 = -1.*t8775*t5331*t6804;
  t8812 = t8805 + t8810;
  t8861 = t5694*t210*t2239;
  t8863 = -1.*t5694*t1510*t3128;
  t8864 = t8861 + t8863;
  t8880 = -1.*t5694*t2239*t1510;
  t8884 = -1.*t5694*t210*t3128;
  t8885 = t8880 + t8884;
  t8888 = t6614*t8864*t5331;
  t8889 = t8885*t6804;
  t8890 = t8888 + t8889;
  t8894 = t6614*t8885;
  t8896 = -1.*t8864*t5331*t6804;
  t8898 = t8894 + t8896;
  t8945 = -1.*t2239*t7547;
  t8953 = t8945 + t8710;
  t8957 = t6614*t7728*t5331;
  t8959 = t8953*t6804;
  t8961 = t8957 + t8959;
  t8963 = t6614*t8953;
  t8964 = -1.*t7728*t5331*t6804;
  t8965 = t8963 + t8964;
  t8920 = -0.135*t2239;
  t8921 = t8920 + t4855;
  t8924 = 0.07996*t2239;
  t8925 = 0.135*t3128;
  t8929 = t8924 + t8925;
  t8993 = t1506*t210;
  t8994 = t250*t384*t1510;
  t8996 = t8993 + t8994;
  t9004 = -1.*t8996*t3128;
  t9005 = t8768 + t9004;
  t9014 = -1.*t2239*t8996;
  t9015 = t9014 + t8781;
  t9019 = t6614*t9005*t5331;
  t9020 = t9015*t6804;
  t9022 = t9019 + t9020;
  t9025 = t6614*t9015;
  t9027 = -1.*t9005*t5331*t6804;
  t9028 = t9025 + t9027;
  t8869 = 0.1327*t5158*t8864;
  t8871 = t8864*t5481;
  t8876 = t8864*t5331*t6860;
  t8887 = t8885*t7067;
  t8893 = t7214*t8890;
  t8899 = t7304*t8898;
  t8903 = -1.*t7199*t8890;
  t8904 = t7162*t8898;
  t8905 = t8903 + t8904;
  t8911 = -0.15304*t8905;
  t8913 = t7162*t8890;
  t8914 = t7199*t8898;
  t8916 = t8913 + t8914;
  t8917 = -0.04845*t8916;
  t7652 = t5158*t7620;
  t7655 = -1.*t1506*t5694*t5331;
  t7680 = t7652 + t7655;
  t9051 = 0.135*t5158;
  t9053 = -0.08055*t5331;
  t9054 = t9051 + t9053;
  t9060 = 0.08055*t5158;
  t9061 = t9060 + t6022;
  t9088 = t2239*t8996;
  t9089 = t8760*t3128;
  t9091 = t9088 + t9089;
  t9093 = t5158*t9091;
  t9094 = -1.*t5694*t250*t5331;
  t9097 = t9093 + t9094;
  t9124 = t5694*t2239*t1510;
  t9126 = t5694*t210*t3128;
  t9127 = t9124 + t9126;
  t9130 = t5158*t9127;
  t9131 = t384*t5331;
  t9132 = t9130 + t9131;
  t9176 = -1.*t6614*t7708;
  t9177 = -1.*t7728*t6804;
  t9178 = t9176 + t9177;
  t7793 = t7162*t7781;
  t9166 = -0.01004*t6614;
  t9168 = -0.08055*t6804;
  t9170 = t9166 + t9168;
  t9172 = 0.08055*t6614;
  t9174 = t9172 + t6820;
  t9194 = t5694*t5158*t250;
  t9195 = t9091*t5331;
  t9198 = t9194 + t9195;
  t9206 = -1.*t6614*t9198;
  t9208 = -1.*t9005*t6804;
  t9211 = t9206 + t9208;
  t9213 = t6614*t9005;
  t9214 = -1.*t9198*t6804;
  t9216 = t9213 + t9214;
  t9247 = -1.*t5158*t384;
  t9248 = t9127*t5331;
  t9249 = t9247 + t9248;
  t9255 = -1.*t6614*t9249;
  t9256 = -1.*t8864*t6804;
  t9257 = t9255 + t9256;
  t9261 = t6614*t8864;
  t9264 = -1.*t9249*t6804;
  t9265 = t9261 + t9264;
  t7791 = -1.*t7199*t7765;
  t7802 = t7791 + t7793;
  t9186 = -1.*t7199*t7781;
  t9284 = -0.13004*t7162;
  t9286 = -0.08055*t7199;
  t9287 = t9284 + t9286;
  t9290 = 0.08055*t7162;
  t9291 = t9290 + t7206;
  t9303 = t6614*t9198;
  t9304 = t9005*t6804;
  t9306 = t9303 + t9304;
  t9228 = t7162*t9216;
  t9240 = -1.*t7199*t9216;
  t9325 = t6614*t9249;
  t9328 = t8864*t6804;
  t9329 = t9325 + t9328;
  t9271 = t7162*t9265;
  t9277 = -1.*t7199*t9265;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1788*t3668 + t4185*t4876 + t5088*t5481 + 0.1327*(t5088*t5158 + t250*t5331*t5694) - 1.*t250*t5694*t6340 + t6480*t6860 + t6926*t7067 + t7214*t7255 + t7304*t7335 - 0.15304*(-1.*t7199*t7255 + t7162*t7335) - 0.04845*(t7162*t7255 + t7199*t7335);
  p_output1[10]=t1506*t5694*t6340 + t3668*t7514 + t4876*t7547 + t5481*t7620 + 0.1327*t7680 + t6860*t7708 + t7067*t7728 + t7214*t7765 + t7304*t7781 - 0.04845*(t7162*t7765 + t7199*t7781) - 0.15304*t7802;
  p_output1[11]=0;
  p_output1[12]=t1506*t210*t3668*t5694 + t1506*t1510*t4876*t5694 - 1.*t1506*t384*t6340 + t5481*t7853 + 0.1327*(t1506*t384*t5331 + t5158*t7853) + t6860*t7928 + t7067*t7967 + t7214*t7975 + t7304*t7981 - 0.15304*(-1.*t7199*t7975 + t7162*t7981) - 0.04845*(t7162*t7975 + t7199*t7981);
  p_output1[13]=t210*t250*t3668*t5694 + t1510*t250*t4876*t5694 - 1.*t250*t384*t6340 + t5481*t8122 + 0.1327*(t250*t384*t5331 + t5158*t8122) + t6860*t8265 + t7067*t8290 + t7214*t8300 + t7304*t8338 - 0.15304*(-1.*t7199*t8300 + t7162*t8338) - 0.04845*(t7162*t8300 + t7199*t8338);
  p_output1[14]=-1.*t210*t3668*t384 - 1.*t1510*t384*t4876 - 1.*t5694*t6340 + t5481*t8550 + 0.1327*(t5331*t5694 + t5158*t8550) + t6860*t8586 + t7067*t8608 + t7214*t8617 + t7304*t8635 - 0.15304*(-1.*t7199*t8617 + t7162*t8635) - 0.04845*(t7162*t8617 + t7199*t8635);
  p_output1[15]=t4876*t7514 + t3668*t8688 + 0.1327*t5158*t8697 + t5481*t8697 + t5331*t6860*t8697 + t7067*t8713 + t7214*t8728 + t7304*t8737 - 0.15304*(-1.*t7199*t8728 + t7162*t8737) - 0.04845*(t7162*t8728 + t7199*t8737);
  p_output1[16]=t3668*t4185 + t4876*t8760 + 0.1327*t5158*t8775 + t5481*t8775 + t5331*t6860*t8775 + t7067*t8784 + t7214*t8795 + t7304*t8812 - 0.15304*(-1.*t7199*t8795 + t7162*t8812) - 0.04845*(t7162*t8795 + t7199*t8812);
  p_output1[17]=-1.*t1510*t3668*t5694 + t210*t4876*t5694 + t8869 + t8871 + t8876 + t8887 + t8893 + t8899 + t8911 + t8917;
  p_output1[18]=0.1327*t5158*t7728 + t5481*t7728 + t5331*t6860*t7728 + t7514*t8921 + t7547*t8929 + t7067*t8953 + t7214*t8961 + t7304*t8965 - 0.15304*(-1.*t7199*t8961 + t7162*t8965) - 0.04845*(t7162*t8961 + t7199*t8965);
  p_output1[19]=t8760*t8921 + t8929*t8996 + 0.1327*t5158*t9005 + t5481*t9005 + t5331*t6860*t9005 + t7067*t9015 + t7214*t9022 + t7304*t9028 - 0.15304*(-1.*t7199*t9022 + t7162*t9028) - 0.04845*(t7162*t9022 + t7199*t9028);
  p_output1[20]=t8869 + t8871 + t8876 + t8887 + t8893 + t8899 + t8911 + t8917 + t210*t5694*t8921 + t1510*t5694*t8929;
  p_output1[21]=0.1327*(-1.*t1506*t5158*t5694 - 1.*t5331*t7620) + t6860*t7680 + t6614*t7214*t7680 - 1.*t6804*t7304*t7680 - 0.15304*(-1.*t6804*t7162*t7680 - 1.*t6614*t7199*t7680) - 0.04845*(t6614*t7162*t7680 - 1.*t6804*t7199*t7680) + t1506*t5694*t9054 + t7620*t9061;
  p_output1[22]=t250*t5694*t9054 + t9061*t9091 + 0.1327*(t6451 - 1.*t5331*t9091) + t6860*t9097 + t6614*t7214*t9097 - 1.*t6804*t7304*t9097 - 0.15304*(-1.*t6804*t7162*t9097 - 1.*t6614*t7199*t9097) - 0.04845*(t6614*t7162*t9097 - 1.*t6804*t7199*t9097);
  p_output1[23]=-1.*t384*t9054 + t9061*t9127 + 0.1327*(t384*t5158 - 1.*t5331*t9127) + t6860*t9132 + t6614*t7214*t9132 - 1.*t6804*t7304*t9132 - 0.15304*(-1.*t6804*t7162*t9132 - 1.*t6614*t7199*t9132) - 0.04845*(t6614*t7162*t9132 - 1.*t6804*t7199*t9132);
  p_output1[24]=t7214*t7781 + t7708*t9170 + t7728*t9174 + t7304*t9178 - 0.04845*(t7793 + t7199*t9178) - 0.15304*(t7162*t9178 + t9186);
  p_output1[25]=t9005*t9174 + t9170*t9198 + t7304*t9211 + t7214*t9216 - 0.04845*(t7199*t9211 + t9228) - 0.15304*(t7162*t9211 + t9240);
  p_output1[26]=t8864*t9174 + t9170*t9249 + t7304*t9257 + t7214*t9265 - 0.04845*(t7199*t9257 + t9271) - 0.15304*(t7162*t9257 + t9277);
  p_output1[27]=-0.04845*t7802 - 0.15304*(-1.*t7162*t7765 + t9186) + t7765*t9287 + t7781*t9291;
  p_output1[28]=t9216*t9291 + t9287*t9306 - 0.15304*(t9240 - 1.*t7162*t9306) - 0.04845*(t9228 - 1.*t7199*t9306);
  p_output1[29]=t9265*t9291 + t9287*t9329 - 0.15304*(t9277 - 1.*t7162*t9329) - 0.04845*(t9271 - 1.*t7199*t9329);
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
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
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftKnee_mex.hh"

namespace SymExpression
{

void Jp_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
