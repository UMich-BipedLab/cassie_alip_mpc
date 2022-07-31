/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:28 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t59;
  double t104;
  double t153;
  double t1380;
  double t2386;
  double t2190;
  double t2237;
  double t2388;
  double t2640;
  double t2360;
  double t2433;
  double t2450;
  double t2096;
  double t2808;
  double t2956;
  double t2981;
  double t21;
  double t334;
  double t530;
  double t1953;
  double t3387;
  double t3630;
  double t3681;
  double t2467;
  double t3002;
  double t3156;
  double t3799;
  double t33;
  double t1469;
  double t3185;
  double t4069;
  double t4193;
  double t344;
  double t4789;
  double t4969;
  double t5056;
  double t5256;
  double t5321;
  double t6455;
  double t6456;
  double t6472;
  double t6629;
  double t6728;
  double t6795;
  double t6486;
  double t6512;
  double t6579;
  double t6806;
  double t6843;
  double t6939;
  double t6946;
  double t6948;
  double t6999;
  double t7015;
  double t212;
  double t229;
  double t335;
  double t988;
  double t1150;
  double t1256;
  double t1260;
  double t1336;
  double t1540;
  double t1650;
  double t1820;
  double t4245;
  double t4505;
  double t4685;
  double t5124;
  double t5382;
  double t5536;
  double t5634;
  double t5863;
  double t6050;
  double t6191;
  double t6213;
  double t6329;
  double t6355;
  double t6402;
  double t6860;
  double t6880;
  double t6884;
  double t6949;
  double t7016;
  double t7019;
  double t7036;
  double t7087;
  double t7108;
  double t7110;
  double t7163;
  double t7178;
  double t7182;
  double t7183;
  double t7263;
  double t7265;
  double t7267;
  double t7268;
  double t7270;
  double t7271;
  double t7299;
  double t7300;
  double t7311;
  double t7313;
  double t7354;
  double t7389;
  double t7393;
  double t7409;
  double t7413;
  double t7419;
  double t7469;
  double t7478;
  double t7480;
  double t7496;
  double t7503;
  double t7505;
  double t7508;
  double t7525;
  double t7526;
  double t7535;
  double t7541;
  double t7662;
  double t7671;
  double t7674;
  double t7675;
  double t7697;
  double t7701;
  double t7702;
  double t7704;
  double t7648;
  double t7649;
  double t7650;
  double t7651;
  double t7652;
  double t7653;
  double t7655;
  double t7658;
  double t7660;
  double t7668;
  double t7679;
  double t7680;
  double t7682;
  double t7683;
  double t7687;
  double t7688;
  double t7689;
  double t7694;
  double t7698;
  double t7705;
  double t7706;
  double t7708;
  double t7709;
  double t7710;
  double t7714;
  double t7715;
  double t7718;
  double t7742;
  double t7743;
  double t7744;
  double t7746;
  double t7749;
  double t7750;
  double t7751;
  double t7752;
  double t7755;
  double t7760;
  double t7763;
  double t7765;
  double t7766;
  double t7768;
  double t7770;
  double t7772;
  double t7775;
  double t7777;
  double t7778;
  double t7784;
  double t7785;
  double t7786;
  double t7787;
  double t7788;
  double t7789;
  double t7790;
  double t7791;
  double t7792;
  double t7800;
  double t7801;
  double t7802;
  double t7803;
  double t7804;
  double t7805;
  double t7807;
  double t7808;
  double t7809;
  double t7812;
  double t7814;
  double t7815;
  double t7822;
  double t7823;
  double t7839;
  double t7842;
  double t7843;
  double t7849;
  double t7851;
  double t7852;
  double t7857;
  double t7859;
  double t7860;
  double t7862;
  double t7882;
  double t7884;
  double t7887;
  double t7879;
  double t7892;
  double t7893;
  double t7895;
  double t7900;
  double t7901;
  double t7903;
  double t7844;
  double t7845;
  double t7850;
  double t7858;
  double t7864;
  double t7865;
  double t7866;
  double t7867;
  double t7868;
  double t7870;
  double t7871;
  double t7872;
  double t7873;
  double t7876;
  double t7877;
  double t7880;
  double t7889;
  double t7890;
  double t7897;
  double t7908;
  double t7909;
  double t7912;
  double t7913;
  double t7915;
  double t7916;
  double t7917;
  double t7921;
  double t7922;
  double t7925;
  double t7927;
  double t7944;
  double t7947;
  double t7950;
  double t7951;
  double t7952;
  double t7956;
  double t7957;
  double t7960;
  double t7961;
  double t7962;
  double t7968;
  double t7970;
  double t7971;
  double t7974;
  double t7975;
  double t7976;
  double t7998;
  double t7999;
  double t7996;
  double t8004;
  double t8006;
  double t8008;
  double t7997;
  double t8000;
  double t8001;
  double t8014;
  double t8015;
  double t8017;
  double t8019;
  double t8021;
  double t8022;
  double t7958;
  double t7959;
  double t7963;
  double t7972;
  double t7977;
  double t7978;
  double t7980;
  double t7982;
  double t7983;
  double t7984;
  double t7989;
  double t7990;
  double t7991;
  double t7992;
  double t7994;
  double t8002;
  double t8010;
  double t8011;
  double t8018;
  double t8024;
  double t8025;
  double t8026;
  double t8027;
  double t8029;
  double t8030;
  double t8031;
  double t8036;
  double t8040;
  double t8045;
  double t8046;
  double t8063;
  double t8064;
  double t8065;
  double t8070;
  double t8066;
  double t8071;
  double t8072;
  double t8073;
  double t8074;
  double t8075;
  double t8076;
  double t8078;
  double t8079;
  double t8085;
  double t8086;
  double t8087;
  double t8092;
  double t8093;
  double t8094;
  double t8099;
  double t8100;
  double t8101;
  double t8122;
  double t8132;
  double t8133;
  double t8123;
  double t8125;
  double t8126;
  double t8140;
  double t8144;
  double t8148;
  double t8131;
  double t8134;
  double t8136;
  double t8152;
  double t8153;
  double t8154;
  double t8158;
  double t8159;
  double t8160;
  double t8080;
  double t8083;
  double t8090;
  double t8096;
  double t8103;
  double t8104;
  double t8106;
  double t8107;
  double t8108;
  double t8109;
  double t8113;
  double t8114;
  double t8117;
  double t8118;
  double t8119;
  double t8138;
  double t8149;
  double t8151;
  double t8157;
  double t8161;
  double t8162;
  double t8163;
  double t8164;
  double t8165;
  double t8166;
  double t8167;
  double t8168;
  double t8169;
  double t8170;
  double t8171;
  double t8120;
  double t8172;
  double t8173;
  double t8174;
  double t8175;
  double t8176;
  double t8177;
  double t8180;
  double t8181;
  t59 = Cos(var1[7]);
  t104 = -1.*t59;
  t153 = 0. + t104;
  t1380 = Cos(var1[4]);
  t2386 = Cos(var1[10]);
  t2190 = Cos(var1[11]);
  t2237 = Sin(var1[10]);
  t2388 = Sin(var1[11]);
  t2640 = Cos(var1[9]);
  t2360 = t2190*t2237;
  t2433 = t2386*t2388;
  t2450 = 0. + t2360 + t2433;
  t2096 = Sin(var1[9]);
  t2808 = t2386*t2190;
  t2956 = -1.*t2237*t2388;
  t2981 = 0. + t2808 + t2956;
  t21 = Sin(var1[4]);
  t334 = Sin(var1[5]);
  t530 = Sin(var1[6]);
  t1953 = Cos(var1[8]);
  t3387 = t2640*t2450;
  t3630 = t2096*t2981;
  t3681 = 0. + t3387 + t3630;
  t2467 = -1.*t2096*t2450;
  t3002 = t2640*t2981;
  t3156 = 0. + t2467 + t3002;
  t3799 = Sin(var1[8]);
  t33 = Cos(var1[6]);
  t1469 = Sin(var1[7]);
  t3185 = t1953*t3156;
  t4069 = -1.*t3681*t3799;
  t4193 = 0. + t3185 + t4069;
  t344 = Cos(var1[5]);
  t4789 = t1953*t3681;
  t4969 = t3156*t3799;
  t5056 = 0. + t4789 + t4969;
  t5256 = t1469*t4193;
  t5321 = 0. + t5256;
  t6455 = -1.*t2386*t2190;
  t6456 = t2237*t2388;
  t6472 = 0. + t6455 + t6456;
  t6629 = t2096*t2450;
  t6728 = t2640*t6472;
  t6795 = 0. + t6629 + t6728;
  t6486 = -1.*t2096*t6472;
  t6512 = 0. + t3387 + t6486;
  t6579 = t1953*t6512;
  t6806 = -1.*t6795*t3799;
  t6843 = 0. + t6579 + t6806;
  t6939 = t1953*t6795;
  t6946 = t6512*t3799;
  t6948 = 0. + t6939 + t6946;
  t6999 = t1469*t6843;
  t7015 = 0. + t6999;
  t212 = t33*t153;
  t229 = 0. + t212;
  t335 = t229*t334;
  t988 = t153*t530;
  t1150 = 0. + t988;
  t1256 = t344*t1150;
  t1260 = 0. + t335 + t1256;
  t1336 = -1.*t21*t1260;
  t1540 = 0. + t1469;
  t1650 = -1.*t1380*t1540;
  t1820 = t1336 + t1650;
  t4245 = t59*t4193;
  t4505 = 0. + t4245;
  t4685 = -1.*t1380*t4505;
  t5124 = -1.*t530*t5056;
  t5382 = t33*t5321;
  t5536 = 0. + t5124 + t5382;
  t5634 = t334*t5536;
  t5863 = t33*t5056;
  t6050 = t530*t5321;
  t6191 = 0. + t5863 + t6050;
  t6213 = t344*t6191;
  t6329 = 0. + t5634 + t6213;
  t6355 = -1.*t21*t6329;
  t6402 = t4685 + t6355;
  t6860 = t59*t6843;
  t6880 = 0. + t6860;
  t6884 = -1.*t1380*t6880;
  t6949 = -1.*t530*t6948;
  t7016 = t33*t7015;
  t7019 = 0. + t6949 + t7016;
  t7036 = t334*t7019;
  t7087 = t33*t6948;
  t7108 = t530*t7015;
  t7110 = 0. + t7087 + t7108;
  t7163 = t344*t7110;
  t7178 = 0. + t7036 + t7163;
  t7182 = -1.*t21*t7178;
  t7183 = t6884 + t7182;
  t7263 = -1.*t229*t334;
  t7265 = -1.*t344*t1150;
  t7267 = t7263 + t7265;
  t7268 = var2[4]*t7267;
  t7270 = t344*t229;
  t7271 = -1.*t334*t1150;
  t7299 = t7270 + t7271;
  t7300 = var2[3]*t1380*t7299;
  t7311 = t7268 + t7300;
  t7313 = -1.*t334*t5536;
  t7354 = -1.*t344*t6191;
  t7389 = t7313 + t7354;
  t7393 = var2[4]*t7389;
  t7409 = t344*t5536;
  t7413 = -1.*t334*t6191;
  t7419 = t7409 + t7413;
  t7469 = var2[3]*t1380*t7419;
  t7478 = t7393 + t7469;
  t7480 = -1.*t334*t7019;
  t7496 = -1.*t344*t7110;
  t7503 = t7480 + t7496;
  t7505 = var2[4]*t7503;
  t7508 = t344*t7019;
  t7525 = -1.*t334*t7110;
  t7526 = t7508 + t7525;
  t7535 = var2[3]*t1380*t7526;
  t7541 = t7505 + t7535;
  t7662 = t5124 + t5382;
  t7671 = -1.*t33*t5056;
  t7674 = -1.*t530*t5321;
  t7675 = t7671 + t7674;
  t7697 = t6949 + t7016;
  t7701 = -1.*t33*t6948;
  t7702 = -1.*t530*t7015;
  t7704 = t7701 + t7702;
  t7648 = -1.*t33*t153*t334;
  t7649 = -1.*t344*t153*t530;
  t7650 = t7648 + t7649;
  t7651 = var2[4]*t7650;
  t7652 = t344*t33*t153;
  t7653 = -1.*t153*t334*t530;
  t7655 = t7652 + t7653;
  t7658 = var2[3]*t1380*t7655;
  t7660 = t7651 + t7658;
  t7668 = -1.*t334*t7662;
  t7679 = t344*t7675;
  t7680 = t7668 + t7679;
  t7682 = var2[4]*t7680;
  t7683 = t344*t7662;
  t7687 = t334*t7675;
  t7688 = t7683 + t7687;
  t7689 = var2[3]*t1380*t7688;
  t7694 = t7682 + t7689;
  t7698 = -1.*t334*t7697;
  t7705 = t344*t7704;
  t7706 = t7698 + t7705;
  t7708 = var2[4]*t7706;
  t7709 = t344*t7697;
  t7710 = t334*t7704;
  t7714 = t7709 + t7710;
  t7715 = var2[3]*t1380*t7714;
  t7718 = t7708 + t7715;
  t7742 = var2[5]*t59;
  t7743 = var2[6]*t59;
  t7744 = t344*t33*t1469;
  t7746 = -1.*t334*t530*t1469;
  t7749 = t7744 + t7746;
  t7750 = var2[4]*t7749;
  t7751 = -1.*t59*t21;
  t7752 = t33*t334*t1469;
  t7755 = t344*t530*t1469;
  t7760 = t7752 + t7755;
  t7763 = t1380*t7760;
  t7765 = t7751 + t7763;
  t7766 = var2[3]*t7765;
  t7768 = t7742 + t7743 + t7750 + t7766;
  t7770 = -1.*var2[5]*t1469*t4193;
  t7772 = -1.*var2[6]*t1469*t4193;
  t7775 = t344*t33*t59*t4193;
  t7777 = -1.*t59*t334*t530*t4193;
  t7778 = t7775 + t7777;
  t7784 = var2[4]*t7778;
  t7785 = t21*t1469*t4193;
  t7786 = t33*t59*t334*t4193;
  t7787 = t344*t59*t530*t4193;
  t7788 = t7786 + t7787;
  t7789 = t1380*t7788;
  t7790 = t7785 + t7789;
  t7791 = var2[3]*t7790;
  t7792 = t7770 + t7772 + t7784 + t7791;
  t7800 = -1.*var2[5]*t1469*t6843;
  t7801 = -1.*var2[6]*t1469*t6843;
  t7802 = t344*t33*t59*t6843;
  t7803 = -1.*t59*t334*t530*t6843;
  t7804 = t7802 + t7803;
  t7805 = var2[4]*t7804;
  t7807 = t21*t1469*t6843;
  t7808 = t33*t59*t334*t6843;
  t7809 = t344*t59*t530*t6843;
  t7812 = t7808 + t7809;
  t7814 = t1380*t7812;
  t7815 = t7807 + t7814;
  t7822 = var2[3]*t7815;
  t7823 = t7800 + t7801 + t7805 + t7822;
  t7839 = -1.*t1953*t3681;
  t7842 = -1.*t3156*t3799;
  t7843 = t7839 + t7842;
  t7849 = t3185 + t4069;
  t7851 = t530*t1469*t7843;
  t7852 = t33*t7849;
  t7857 = t7851 + t7852;
  t7859 = t33*t1469*t7843;
  t7860 = -1.*t530*t7849;
  t7862 = t7859 + t7860;
  t7882 = -1.*t1953*t6795;
  t7884 = -1.*t6512*t3799;
  t7887 = t7882 + t7884;
  t7879 = t6579 + t6806;
  t7892 = -1.*t530*t7879;
  t7893 = t33*t1469*t7887;
  t7895 = t7892 + t7893;
  t7900 = t33*t7879;
  t7901 = t530*t1469*t7887;
  t7903 = t7900 + t7901;
  t7844 = var2[5]*t59*t7843;
  t7845 = var2[6]*t59*t7843;
  t7850 = var2[7]*t7849;
  t7858 = -1.*t334*t7857;
  t7864 = t344*t7862;
  t7865 = t7858 + t7864;
  t7866 = var2[4]*t7865;
  t7867 = -1.*t59*t21*t7843;
  t7868 = t344*t7857;
  t7870 = t334*t7862;
  t7871 = t7868 + t7870;
  t7872 = t1380*t7871;
  t7873 = t7867 + t7872;
  t7876 = var2[3]*t7873;
  t7877 = t7844 + t7845 + t7850 + t7866 + t7876;
  t7880 = var2[7]*t7879;
  t7889 = var2[5]*t59*t7887;
  t7890 = var2[6]*t59*t7887;
  t7897 = t344*t7895;
  t7908 = -1.*t334*t7903;
  t7909 = t7897 + t7908;
  t7912 = var2[4]*t7909;
  t7913 = -1.*t59*t21*t7887;
  t7915 = t334*t7895;
  t7916 = t344*t7903;
  t7917 = t7915 + t7916;
  t7921 = t1380*t7917;
  t7922 = t7913 + t7921;
  t7925 = var2[3]*t7922;
  t7927 = t7880 + t7889 + t7890 + t7912 + t7925;
  t7944 = -1.*t2640*t2450;
  t7947 = -1.*t2096*t2981;
  t7950 = t7944 + t7947;
  t7951 = t1953*t7950;
  t7952 = t2467 + t3002;
  t7956 = -1.*t7952*t3799;
  t7957 = t7951 + t7956;
  t7960 = t1953*t7952;
  t7961 = t7950*t3799;
  t7962 = t7960 + t7961;
  t7968 = t530*t1469*t7957;
  t7970 = t33*t7962;
  t7971 = t7968 + t7970;
  t7974 = t33*t1469*t7957;
  t7975 = -1.*t530*t7962;
  t7976 = t7974 + t7975;
  t7998 = -1.*t2640*t6472;
  t7999 = t2467 + t7998;
  t7996 = t3387 + t6486;
  t8004 = t1953*t7999;
  t8006 = -1.*t7996*t3799;
  t8008 = t8004 + t8006;
  t7997 = t1953*t7996;
  t8000 = t7999*t3799;
  t8001 = t7997 + t8000;
  t8014 = -1.*t530*t8001;
  t8015 = t33*t1469*t8008;
  t8017 = t8014 + t8015;
  t8019 = t33*t8001;
  t8021 = t530*t1469*t8008;
  t8022 = t8019 + t8021;
  t7958 = var2[5]*t59*t7957;
  t7959 = var2[6]*t59*t7957;
  t7963 = var2[7]*t7962;
  t7972 = -1.*t334*t7971;
  t7977 = t344*t7976;
  t7978 = t7972 + t7977;
  t7980 = var2[4]*t7978;
  t7982 = -1.*t59*t21*t7957;
  t7983 = t344*t7971;
  t7984 = t334*t7976;
  t7989 = t7983 + t7984;
  t7990 = t1380*t7989;
  t7991 = t7982 + t7990;
  t7992 = var2[3]*t7991;
  t7994 = t7958 + t7959 + t7963 + t7980 + t7992;
  t8002 = var2[7]*t8001;
  t8010 = var2[5]*t59*t8008;
  t8011 = var2[6]*t59*t8008;
  t8018 = t344*t8017;
  t8024 = -1.*t334*t8022;
  t8025 = t8018 + t8024;
  t8026 = var2[4]*t8025;
  t8027 = -1.*t59*t21*t8008;
  t8029 = t334*t8017;
  t8030 = t344*t8022;
  t8031 = t8029 + t8030;
  t8036 = t1380*t8031;
  t8040 = t8027 + t8036;
  t8045 = var2[3]*t8040;
  t8046 = t8002 + t8010 + t8011 + t8026 + t8045;
  t8063 = -1.*t2190*t2237;
  t8064 = -1.*t2386*t2388;
  t8065 = t8063 + t8064;
  t8070 = t2808 + t2956;
  t8066 = t2640*t8065;
  t8071 = -1.*t2096*t8070;
  t8072 = t8066 + t8071;
  t8073 = t1953*t8072;
  t8074 = t2096*t8065;
  t8075 = t2640*t8070;
  t8076 = t8074 + t8075;
  t8078 = -1.*t8076*t3799;
  t8079 = t8073 + t8078;
  t8085 = t1953*t8076;
  t8086 = t8072*t3799;
  t8087 = t8085 + t8086;
  t8092 = t530*t1469*t8079;
  t8093 = t33*t8087;
  t8094 = t8092 + t8093;
  t8099 = t33*t1469*t8079;
  t8100 = -1.*t530*t8087;
  t8101 = t8099 + t8100;
  t8122 = t2360 + t2433;
  t8132 = -1.*t2096*t8122;
  t8133 = t8132 + t8075;
  t8123 = t2640*t8122;
  t8125 = t2096*t8070;
  t8126 = t8123 + t8125;
  t8140 = t1953*t8133;
  t8144 = -1.*t8126*t3799;
  t8148 = t8140 + t8144;
  t8131 = t1953*t8126;
  t8134 = t8133*t3799;
  t8136 = t8131 + t8134;
  t8152 = -1.*t530*t8136;
  t8153 = t33*t1469*t8148;
  t8154 = t8152 + t8153;
  t8158 = t33*t8136;
  t8159 = t530*t1469*t8148;
  t8160 = t8158 + t8159;
  t8080 = var2[5]*t59*t8079;
  t8083 = var2[6]*t59*t8079;
  t8090 = var2[7]*t8087;
  t8096 = -1.*t334*t8094;
  t8103 = t344*t8101;
  t8104 = t8096 + t8103;
  t8106 = var2[4]*t8104;
  t8107 = -1.*t59*t21*t8079;
  t8108 = t344*t8094;
  t8109 = t334*t8101;
  t8113 = t8108 + t8109;
  t8114 = t1380*t8113;
  t8117 = t8107 + t8114;
  t8118 = var2[3]*t8117;
  t8119 = t8080 + t8083 + t8090 + t8106 + t8118;
  t8138 = var2[7]*t8136;
  t8149 = var2[5]*t59*t8148;
  t8151 = var2[6]*t59*t8148;
  t8157 = t344*t8154;
  t8161 = -1.*t334*t8160;
  t8162 = t8157 + t8161;
  t8163 = var2[4]*t8162;
  t8164 = -1.*t59*t21*t8148;
  t8165 = t334*t8154;
  t8166 = t344*t8160;
  t8167 = t8165 + t8166;
  t8168 = t1380*t8167;
  t8169 = t8164 + t8168;
  t8170 = var2[3]*t8169;
  t8171 = t8138 + t8149 + t8151 + t8163 + t8170;
  t8120 = -0.00288*t8119;
  t8172 = 0.00113*t8171;
  t8173 = t8120 + t8172;
  t8174 = 0.0231*t8119;
  t8175 = -0.00288*t8171;
  t8176 = t8174 + t8175;
  t8177 = 0.000036*t8119;
  t8180 = -0.000063*t8171;
  t8181 = t8177 + t8180;
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
  p_output1[12]=-0.000063*t1820*var2[3] - 0.00288*t6402*var2[3] + 0.00113*t7183*var2[3];
  p_output1[13]=0.000036*t1820*var2[3] + 0.0231*t6402*var2[3] - 0.00288*t7183*var2[3];
  p_output1[14]=0.0239*t1820*var2[3] + 0.000036*t6402*var2[3] - 0.000063*t7183*var2[3];
  p_output1[15]=-0.000063*t7311 - 0.00288*t7478 + 0.00113*t7541;
  p_output1[16]=0.000036*t7311 + 0.0231*t7478 - 0.00288*t7541;
  p_output1[17]=0.0239*t7311 + 0.000036*t7478 - 0.000063*t7541;
  p_output1[18]=-0.000063*t7660 - 0.00288*t7694 + 0.00113*t7718;
  p_output1[19]=0.000036*t7660 + 0.0231*t7694 - 0.00288*t7718;
  p_output1[20]=0.0239*t7660 + 0.000036*t7694 - 0.000063*t7718;
  p_output1[21]=-0.000063*t7768 - 0.00288*t7792 + 0.00113*t7823;
  p_output1[22]=0.000036*t7768 + 0.0231*t7792 - 0.00288*t7823;
  p_output1[23]=0.0239*t7768 + 0.000036*t7792 - 0.000063*t7823;
  p_output1[24]=-0.00288*t7877 + 0.00113*t7927;
  p_output1[25]=0.0231*t7877 - 0.00288*t7927;
  p_output1[26]=0.000036*t7877 - 0.000063*t7927;
  p_output1[27]=-0.00288*t7994 + 0.00113*t8046;
  p_output1[28]=0.0231*t7994 - 0.00288*t8046;
  p_output1[29]=0.000036*t7994 - 0.000063*t8046;
  p_output1[30]=t8173;
  p_output1[31]=t8176;
  p_output1[32]=t8181;
  p_output1[33]=t8173;
  p_output1[34]=t8176;
  p_output1[35]=t8181;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jq_AMBody_LeftTarsus_mex.hh"

namespace SymExpression
{

void Jq_AMBody_LeftTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
