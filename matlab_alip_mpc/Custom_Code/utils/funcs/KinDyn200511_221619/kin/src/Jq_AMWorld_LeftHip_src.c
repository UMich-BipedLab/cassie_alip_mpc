/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_LeftHip_src.h"

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
  double t188;
  double t79;
  double t127;
  double t183;
  double t299;
  double t7;
  double t1719;
  double t3554;
  double t3891;
  double t4106;
  double t2330;
  double t3562;
  double t3644;
  double t3739;
  double t3757;
  double t846;
  double t1109;
  double t1341;
  double t184;
  double t302;
  double t530;
  double t1800;
  double t1815;
  double t1834;
  double t1851;
  double t2032;
  double t2347;
  double t2664;
  double t2707;
  double t2783;
  double t2806;
  double t2876;
  double t3161;
  double t3723;
  double t3758;
  double t3820;
  double t3874;
  double t4205;
  double t4246;
  double t4249;
  double t4440;
  double t4450;
  double t4538;
  double t4721;
  double t4756;
  double t5004;
  double t5031;
  double t5215;
  double t5221;
  double t5227;
  double t5510;
  double t5550;
  double t5559;
  double t5571;
  double t5624;
  double t3358;
  double t5061;
  double t5112;
  double t5795;
  double t5796;
  double t5798;
  double t5761;
  double t5779;
  double t5787;
  double t5262;
  double t5283;
  double t5293;
  double t5843;
  double t5860;
  double t5864;
  double t5515;
  double t5546;
  double t5560;
  double t5625;
  double t5628;
  double t5629;
  double t5656;
  double t5681;
  double t5689;
  double t5700;
  double t5709;
  double t5713;
  double t5715;
  double t5723;
  double t5730;
  double t5738;
  double t5789;
  double t5814;
  double t5822;
  double t5866;
  double t5868;
  double t5875;
  double t5945;
  double t5960;
  double t5965;
  double t5889;
  double t5905;
  double t5906;
  double t6059;
  double t6063;
  double t6068;
  double t5939;
  double t5966;
  double t5998;
  double t6119;
  double t6121;
  double t6122;
  double t6108;
  double t6110;
  double t6116;
  double t6001;
  double t6009;
  double t6010;
  double t6146;
  double t6147;
  double t6151;
  double t6015;
  double t6020;
  double t6024;
  double t6216;
  double t6217;
  double t6221;
  double t6297;
  double t6300;
  double t6302;
  double t6375;
  double t6377;
  double t6378;
  double t6436;
  double t6439;
  double t6440;
  double t6442;
  double t6459;
  double t6472;
  double t6474;
  double t6479;
  double t6480;
  double t6484;
  double t6485;
  double t6486;
  double t6490;
  double t6494;
  double t6567;
  double t6569;
  double t6576;
  double t6584;
  double t6585;
  double t6589;
  double t6117;
  double t6123;
  double t6128;
  double t6475;
  double t6500;
  double t6509;
  double t6512;
  double t6513;
  double t6516;
  double t6154;
  double t6155;
  double t6157;
  double t6179;
  double t6185;
  double t6189;
  double t6527;
  double t6535;
  double t6542;
  double t6551;
  double t6555;
  double t6557;
  double t6562;
  double t1791;
  double t6628;
  double t6631;
  double t6287;
  double t6288;
  double t6289;
  double t6304;
  double t6314;
  double t6340;
  double t6351;
  double t6355;
  double t6356;
  double t6654;
  double t6659;
  double t6664;
  double t6678;
  double t6684;
  double t6687;
  double t6690;
  double t6698;
  double t6699;
  double t6700;
  double t6704;
  double t6705;
  double t6785;
  double t6787;
  double t6708;
  double t6711;
  double t6715;
  double t6722;
  double t6736;
  double t6744;
  double t6746;
  double t6749;
  double t6754;
  double t6759;
  double t6765;
  double t6766;
  double t6769;
  double t6820;
  double t6826;
  double t6651;
  double t6665;
  double t6666;
  double t6881;
  double t6883;
  double t6884;
  double t6886;
  double t6890;
  double t6891;
  double t6893;
  double t6894;
  double t6895;
  double t6896;
  double t6853;
  double t6855;
  double t6857;
  double t6860;
  double t6872;
  double t6873;
  double t6874;
  double t6875;
  double t6876;
  double t6877;
  double t6878;
  double t5257;
  t188 = Cos(var1[3]);
  t79 = Cos(var1[5]);
  t127 = Sin(var1[3]);
  t183 = Sin(var1[4]);
  t299 = Sin(var1[5]);
  t7 = Cos(var1[6]);
  t1719 = Sin(var1[6]);
  t3554 = Cos(var1[7]);
  t3891 = Sin(var1[7]);
  t4106 = 0. + t3891;
  t2330 = Cos(var1[4]);
  t3562 = -1.*t7*t3554;
  t3644 = 0. + t3562;
  t3739 = -1.*t3554*t1719;
  t3757 = 0. + t3739;
  t846 = -1.*t188*t79;
  t1109 = -1.*t127*t183*t299;
  t1341 = t846 + t1109;
  t184 = -1.*t79*t127*t183;
  t302 = t188*t299;
  t530 = t184 + t302;
  t1800 = -1.*var2[7];
  t1815 = t7*t299;
  t1834 = t79*t1719;
  t1851 = 0. + t1815 + t1834;
  t2032 = var2[4]*t1851;
  t2347 = -1.*t79*t7;
  t2664 = t299*t1719;
  t2707 = 0. + t2347 + t2664;
  t2783 = t2330*t2707;
  t2806 = 0. + t2783;
  t2876 = var2[3]*t2806;
  t3161 = 0. + t1800 + t2032 + t2876;
  t3723 = t79*t3644;
  t3758 = -1.*t299*t3757;
  t3820 = 0. + t3723 + t3758;
  t3874 = var2[4]*t3820;
  t4205 = var2[5]*t4106;
  t4246 = var2[6]*t4106;
  t4249 = t3644*t299;
  t4440 = t79*t3757;
  t4450 = 0. + t4249 + t4440;
  t4538 = t2330*t4450;
  t4721 = -1.*t183*t4106;
  t4756 = 0. + t4538 + t4721;
  t5004 = var2[3]*t4756;
  t5031 = 0. + t3874 + t4205 + t4246 + t5004;
  t5215 = t7*t1341;
  t5221 = t530*t1719;
  t5227 = t5215 + t5221;
  t5510 = 0. + t3554;
  t5550 = t7*t3891;
  t5559 = 0. + t5550;
  t5571 = t1719*t3891;
  t5624 = 0. + t5571;
  t3358 = 0.000842*t3161;
  t5061 = -1.e-6*t5031;
  t5112 = 0. + t3358 + t5061;
  t5795 = -1.*t79*t127;
  t5796 = t188*t183*t299;
  t5798 = t5795 + t5796;
  t5761 = t188*t79*t183;
  t5779 = t127*t299;
  t5787 = t5761 + t5779;
  t5262 = -1.e-6*t3161;
  t5283 = 0.00644*t5031;
  t5293 = 0. + t5262 + t5283;
  t5843 = t7*t5798;
  t5860 = t5787*t1719;
  t5864 = t5843 + t5860;
  t5515 = var2[5]*t5510;
  t5546 = var2[6]*t5510;
  t5560 = t79*t5559;
  t5625 = -1.*t299*t5624;
  t5628 = 0. + t5560 + t5625;
  t5629 = var2[4]*t5628;
  t5656 = -1.*t5510*t183;
  t5681 = t299*t5559;
  t5689 = t79*t5624;
  t5700 = 0. + t5681 + t5689;
  t5709 = t2330*t5700;
  t5713 = 0. + t5656 + t5709;
  t5715 = var2[3]*t5713;
  t5723 = 0. + t5515 + t5546 + t5629 + t5715;
  t5730 = 0.00608*t5723;
  t5738 = 0. + t5730;
  t5789 = -1.*t7*t5787;
  t5814 = t5798*t1719;
  t5822 = t5789 + t5814;
  t5866 = -1.*t3554*t5864;
  t5868 = t188*t2330*t3891;
  t5875 = t5866 + t5868;
  t5945 = -1.*t183*t4450;
  t5960 = -1.*t2330*t4106;
  t5965 = t5945 + t5960;
  t5889 = t188*t2330*t3554;
  t5905 = t5864*t3891;
  t5906 = t5889 + t5905;
  t6059 = t188*t2330*t7*t299;
  t6063 = t188*t2330*t79*t1719;
  t6068 = t6059 + t6063;
  t5939 = -0.000842*var2[3]*t183*t2707;
  t5966 = -1.e-6*var2[3]*t5965;
  t5998 = t5939 + t5966;
  t6119 = t188*t79;
  t6121 = t127*t183*t299;
  t6122 = t6119 + t6121;
  t6108 = t79*t127*t183;
  t6110 = -1.*t188*t299;
  t6116 = t6108 + t6110;
  t6001 = 1.e-6*var2[3]*t183*t2707;
  t6009 = 0.00644*var2[3]*t5965;
  t6010 = t6001 + t6009;
  t6146 = t7*t6122;
  t6147 = t6116*t1719;
  t6151 = t6146 + t6147;
  t6015 = -1.*t2330*t5510;
  t6020 = -1.*t183*t5700;
  t6024 = t6015 + t6020;
  t6216 = t2330*t7*t127*t299;
  t6217 = t2330*t79*t127*t1719;
  t6221 = t6216 + t6217;
  t6297 = t2330*t7*t299;
  t6300 = t2330*t79*t1719;
  t6302 = t6297 + t6300;
  t6375 = -1.*t7*t183*t299;
  t6377 = -1.*t79*t183*t1719;
  t6378 = t6375 + t6377;
  t6436 = t1815 + t1834;
  t6439 = var2[3]*t2330*t6436;
  t6440 = t79*t7;
  t6442 = -1.*t299*t1719;
  t6459 = t6440 + t6442;
  t6472 = var2[4]*t6459;
  t6474 = t6439 + t6472;
  t6479 = -1.*t3644*t299;
  t6480 = -1.*t79*t3757;
  t6484 = t6479 + t6480;
  t6485 = var2[4]*t6484;
  t6486 = t3723 + t3758;
  t6490 = var2[3]*t2330*t6486;
  t6494 = t6485 + t6490;
  t6567 = t79*t127;
  t6569 = -1.*t188*t183*t299;
  t6576 = t6567 + t6569;
  t6584 = t7*t5787;
  t6585 = t6576*t1719;
  t6589 = t6584 + t6585;
  t6117 = -1.*t7*t6116;
  t6123 = t6122*t1719;
  t6128 = t6117 + t6123;
  t6475 = 0.000842*t6474;
  t6500 = -1.e-6*t6494;
  t6509 = t6475 + t6500;
  t6512 = -1.e-6*t6474;
  t6513 = 0.00644*t6494;
  t6516 = t6512 + t6513;
  t6154 = -1.*t3554*t6151;
  t6155 = t2330*t127*t3891;
  t6157 = t6154 + t6155;
  t6179 = t2330*t3554*t127;
  t6185 = t6151*t3891;
  t6189 = t6179 + t6185;
  t6527 = -1.*t299*t5559;
  t6535 = -1.*t79*t5624;
  t6542 = t6527 + t6535;
  t6551 = var2[4]*t6542;
  t6555 = t5560 + t5625;
  t6557 = var2[3]*t2330*t6555;
  t6562 = t6551 + t6557;
  t1791 = t1341*t1719;
  t6628 = t7*t6116;
  t6631 = t6628 + t1791;
  t6287 = -1.*t2330*t79*t7;
  t6288 = t2330*t299*t1719;
  t6289 = t6287 + t6288;
  t6304 = -1.*t3554*t6302;
  t6314 = -1.*t183*t3891;
  t6340 = t6304 + t6314;
  t6351 = -1.*t3554*t183;
  t6355 = t6302*t3891;
  t6356 = t6351 + t6355;
  t6654 = t2330*t79*t7;
  t6659 = -1.*t2330*t299*t1719;
  t6664 = t6654 + t6659;
  t6678 = t7*t3554*t299;
  t6684 = t79*t3554*t1719;
  t6687 = t6678 + t6684;
  t6690 = var2[4]*t6687;
  t6698 = -1.*t79*t7*t3554;
  t6699 = t3554*t299*t1719;
  t6700 = t6698 + t6699;
  t6704 = var2[3]*t2330*t6700;
  t6705 = t6690 + t6704;
  t6785 = -1.*t5798*t1719;
  t6787 = t6584 + t6785;
  t6708 = -1.e-6*t6705;
  t6711 = t6475 + t6708;
  t6715 = 0.00644*t6705;
  t6722 = t6512 + t6715;
  t6736 = -1.*t7*t299*t3891;
  t6744 = -1.*t79*t1719*t3891;
  t6746 = t6736 + t6744;
  t6749 = var2[4]*t6746;
  t6754 = t79*t7*t3891;
  t6759 = -1.*t299*t1719*t3891;
  t6765 = t6754 + t6759;
  t6766 = var2[3]*t2330*t6765;
  t6769 = t6749 + t6766;
  t6820 = -1.*t6122*t1719;
  t6826 = t6628 + t6820;
  t6651 = t6302*t5112;
  t6665 = -1.*t3554*t6664*t5293;
  t6666 = t6664*t3891*t5738;
  t6881 = var2[5]*t3554;
  t6883 = var2[6]*t3554;
  t6884 = var2[4]*t6765;
  t6886 = t7*t299*t3891;
  t6890 = t79*t1719*t3891;
  t6891 = t6886 + t6890;
  t6893 = t2330*t6891;
  t6894 = t6351 + t6893;
  t6895 = var2[3]*t6894;
  t6896 = t6881 + t6883 + t6884 + t6895;
  t6853 = t79*t7*t3554;
  t6855 = -1.*t3554*t299*t1719;
  t6857 = t6853 + t6855;
  t6860 = var2[4]*t6857;
  t6872 = -1.*var2[5]*t3891;
  t6873 = -1.*var2[6]*t3891;
  t6874 = t2330*t6687;
  t6875 = t183*t3891;
  t6876 = t6874 + t6875;
  t6877 = var2[3]*t6876;
  t6878 = t6860 + t6872 + t6873 + t6877;
  t5257 = -1.*t2330*t127*t3891;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3554*t5227 + t5257)*t5293 + (-1.*t127*t2330*t3554 + t3891*t5227)*t5738 + t5112*(t1791 - 1.*t530*t7);
  p_output1[10]=t5112*t5822 + t5293*t5875 + t5738*t5906;
  p_output1[11]=0;
  p_output1[12]=t5822*t5998 + t5875*t6010 + t5293*(-1.*t183*t188*t3891 - 1.*t3554*t6068) + t5738*(-1.*t183*t188*t3554 + t3891*t6068) + t5112*(t1719*t188*t2330*t299 - 1.*t188*t2330*t7*t79) + 0.00608*t5906*t6024*var2[3];
  p_output1[13]=t5998*t6128 + t6010*t6157 + t5293*(-1.*t127*t183*t3891 - 1.*t3554*t6221) + t5738*(-1.*t127*t183*t3554 + t3891*t6221) + t5112*(t127*t1719*t2330*t299 - 1.*t127*t2330*t7*t79) + 0.00608*t6024*t6189*var2[3];
  p_output1[14]=t5998*t6289 + t6010*t6340 + t5293*(-1.*t2330*t3891 - 1.*t3554*t6378) + t5738*(-1.*t2330*t3554 + t3891*t6378) + t5112*(-1.*t1719*t183*t299 + t183*t7*t79) + 0.00608*t6024*t6356*var2[3];
  p_output1[15]=t5822*t6509 + t5875*t6516 + 0.00608*t5906*t6562 - 1.*t3554*t5293*t6589 + t3891*t5738*t6589 + t5112*(t5860 - 1.*t6576*t7);
  p_output1[16]=t6128*t6509 + t6157*t6516 + 0.00608*t6189*t6562 - 1.*t3554*t5293*t6631 + t3891*t5738*t6631 + t5112*(t6147 - 1.*t1341*t7);
  p_output1[17]=t6289*t6509 + t6340*t6516 + 0.00608*t6356*t6562 + t6651 + t6665 + t6666;
  p_output1[18]=t5112*t5864 + t5822*t6711 + t5875*t6722 + 0.00608*t5906*t6769 - 1.*t3554*t5293*t6787 + t3891*t5738*t6787;
  p_output1[19]=t5112*t6151 + t6128*t6711 + t6157*t6722 + 0.00608*t6189*t6769 - 1.*t3554*t5293*t6826 + t3891*t5738*t6826;
  p_output1[20]=t6651 + t6665 + t6666 + t6289*t6711 + t6340*t6722 + 0.00608*t6356*t6769;
  p_output1[21]=t5738*(-1.*t188*t2330*t3891 + t3554*t5864) + t5293*t5906 + 0.00608*t5906*t6878 - 1.e-6*t5822*t6896 + 0.00644*t5875*t6896;
  p_output1[22]=t5738*(t5257 + t3554*t6151) + t5293*t6189 + 0.00608*t6189*t6878 - 1.e-6*t6128*t6896 + 0.00644*t6157*t6896;
  p_output1[23]=t5293*t6356 + t5738*(t3554*t6302 + t6875) + 0.00608*t6356*t6878 - 1.e-6*t6289*t6896 + 0.00644*t6340*t6896;
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



void Jq_AMWorld_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
