/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:45 GMT-04:00
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
  double t775;
  double t2049;
  double t1596;
  double t1712;
  double t2534;
  double t704;
  double t3859;
  double t3015;
  double t1196;
  double t1481;
  double t264;
  double t4801;
  double t4815;
  double t4423;
  double t4458;
  double t6177;
  double t6649;
  double t6659;
  double t6833;
  double t6856;
  double t7082;
  double t7115;
  double t7277;
  double t7288;
  double t7312;
  double t7165;
  double t7219;
  double t7222;
  double t7509;
  double t7510;
  double t7478;
  double t7481;
  double t7551;
  double t7553;
  double t7589;
  double t7615;
  double t7638;
  double t7549;
  double t7557;
  double t7562;
  double t4210;
  double t4376;
  double t4796;
  double t4819;
  double t4868;
  double t4909;
  double t4933;
  double t5024;
  double t5491;
  double t5526;
  double t5549;
  double t5952;
  double t5974;
  double t5999;
  double t6814;
  double t6823;
  double t7054;
  double t7230;
  double t7318;
  double t7326;
  double t7334;
  double t7343;
  double t7365;
  double t7395;
  double t7410;
  double t7421;
  double t7454;
  double t7457;
  double t7471;
  double t7487;
  double t7519;
  double t7539;
  double t7566;
  double t7651;
  double t7662;
  double t7666;
  double t7669;
  double t7687;
  double t7689;
  double t7694;
  double t7696;
  double t7700;
  double t7719;
  double t7731;
  double t2024;
  double t2615;
  double t2711;
  double t3118;
  double t3155;
  double t3274;
  double t2764;
  double t3520;
  double t3560;
  double t7806;
  double t7815;
  double t7823;
  double t7843;
  double t7846;
  double t7862;
  double t6106;
  double t7475;
  double t7732;
  double t7748;
  double t7762;
  double t7767;
  double t7798;
  double t7802;
  double t7917;
  double t7921;
  double t7929;
  double t7935;
  double t7936;
  double t7937;
  double t7931;
  double t7939;
  double t7940;
  double t7885;
  double t7887;
  double t7895;
  double t7896;
  double t7950;
  double t7952;
  double t7958;
  double t7961;
  double t7964;
  double t7968;
  double t7913;
  double t7944;
  double t7945;
  double t8029;
  double t8030;
  double t8031;
  double t8022;
  double t8023;
  double t8024;
  double t8026;
  double t8032;
  double t8033;
  double t7980;
  double t7982;
  double t7984;
  double t7997;
  double t7999;
  double t8000;
  double t8010;
  double t8014;
  double t8015;
  double t7960;
  double t7969;
  double t7970;
  double t7972;
  double t7974;
  double t7976;
  double t7989;
  double t8006;
  double t8016;
  double t8017;
  double t8131;
  double t8133;
  double t8136;
  double t8119;
  double t8120;
  double t8125;
  double t8130;
  double t8137;
  double t8138;
  double t8059;
  double t8060;
  double t8063;
  double t8069;
  double t8085;
  double t8086;
  double t8090;
  double t8099;
  double t8101;
  double t8105;
  double t8093;
  double t8107;
  double t8108;
  double t8073;
  double t8074;
  double t8076;
  double t8077;
  double t8162;
  double t8163;
  double t8164;
  double t8167;
  double t8171;
  double t8173;
  double t8190;
  double t8193;
  double t8195;
  double t8184;
  double t8185;
  double t8186;
  double t8188;
  double t8196;
  double t8197;
  double t8220;
  double t8223;
  double t8224;
  double t8215;
  double t8216;
  double t8217;
  double t8219;
  double t8225;
  double t8226;
  double t8284;
  double t8285;
  double t8286;
  double t8290;
  double t8291;
  double t8281;
  double t8287;
  double t8288;
  double t8244;
  double t8245;
  double t8248;
  double t8249;
  double t8250;
  double t8251;
  double t8252;
  double t8255;
  double t8256;
  double t8257;
  double t8258;
  double t8259;
  double t8260;
  double t8261;
  double t8264;
  double t8265;
  double t8266;
  double t8272;
  double t8273;
  double t8274;
  double t8277;
  double t8254;
  double t8263;
  double t8278;
  double t8279;
  double t8083;
  double t8111;
  double t8112;
  double t8330;
  double t8331;
  double t8327;
  double t8328;
  double t8307;
  double t8310;
  double t8311;
  double t8314;
  double t8165;
  double t8174;
  double t8175;
  double t8316;
  double t8319;
  double t8320;
  double t8321;
  double t8177;
  double t8180;
  double t8181;
  double t8187;
  double t8198;
  double t8201;
  double t8203;
  double t8204;
  double t8205;
  double t8207;
  double t8208;
  double t8209;
  double t8354;
  double t8355;
  double t8356;
  double t8389;
  double t8390;
  double t8391;
  double t8387;
  double t8409;
  double t8402;
  double t8406;
  double t8407;
  double t8431;
  double t8433;
  double t8370;
  double t8374;
  double t8375;
  double t8376;
  double t8380;
  double t8381;
  double t8382;
  double t8383;
  double t8384;
  double t8388;
  double t8392;
  double t8393;
  double t8395;
  double t8396;
  double t8397;
  double t8398;
  double t8399;
  double t8400;
  double t8408;
  double t8410;
  double t8411;
  double t8412;
  double t8413;
  double t8415;
  double t8419;
  double t8422;
  double t8423;
  double t8385;
  double t8401;
  double t8424;
  double t8428;
  double t8467;
  double t8468;
  double t8452;
  double t8453;
  double t8454;
  double t8457;
  double t8460;
  double t8461;
  double t8462;
  double t8463;
  double t8357;
  double t8358;
  double t8359;
  double t8360;
  double t8362;
  double t8363;
  double t8364;
  double t8366;
  double t8367;
  double t8564;
  double t8566;
  double t8569;
  double t8492;
  double t8494;
  double t8495;
  double t8496;
  double t8498;
  double t8499;
  double t8501;
  double t8503;
  double t8508;
  double t8509;
  double t8510;
  double t8511;
  double t8512;
  double t8513;
  double t8515;
  double t8516;
  double t8517;
  double t8519;
  double t8520;
  double t8521;
  double t8522;
  double t8523;
  double t8524;
  double t8525;
  double t8526;
  double t8527;
  double t8528;
  double t8533;
  double t8534;
  double t8536;
  double t8537;
  double t8538;
  double t8539;
  double t8540;
  double t8543;
  double t8545;
  double t8546;
  double t8550;
  double t8553;
  double t8554;
  double t8555;
  double t8514;
  double t8531;
  double t8557;
  double t8560;
  double t1056;
  double t8592;
  double t8593;
  double t8578;
  double t8579;
  double t8580;
  double t8581;
  double t8584;
  double t8585;
  double t8586;
  double t8587;
  double t8611;
  double t8612;
  double t8613;
  double t8628;
  double t8629;
  double t8630;
  double t8624;
  double t8625;
  double t8626;
  double t8652;
  double t8653;
  double t8654;
  double t8648;
  double t8649;
  double t8650;
  double t8619;
  double t8622;
  double t8623;
  double t8627;
  double t8631;
  double t8632;
  double t8633;
  double t8634;
  double t8635;
  double t8636;
  double t8638;
  double t8639;
  double t8640;
  double t8641;
  double t8642;
  double t8645;
  double t8646;
  double t8647;
  double t8651;
  double t8655;
  double t8656;
  double t8657;
  double t8658;
  double t8659;
  double t8660;
  double t8661;
  double t8662;
  double t8663;
  double t8664;
  double t8665;
  double t8643;
  double t8666;
  double t8667;
  double t8669;
  double t8670;
  double t8671;
  double t8680;
  double t8681;
  double t8682;
  t775 = Sin(var1[3]);
  t2049 = Cos(var1[3]);
  t1596 = Cos(var1[5]);
  t1712 = Sin(var1[4]);
  t2534 = Sin(var1[5]);
  t704 = Sin(var1[14]);
  t3859 = 0. + t704;
  t3015 = Cos(var1[13]);
  t1196 = Cos(var1[14]);
  t1481 = Sin(var1[13]);
  t264 = Cos(var1[4]);
  t4801 = -1.*t1196*t1481;
  t4815 = 0. + t4801;
  t4423 = -1.*t3015*t1196;
  t4458 = 0. + t4423;
  t6177 = Cos(var1[15]);
  t6649 = t1196*t6177;
  t6659 = 0. + t6649;
  t6833 = Sin(var1[15]);
  t6856 = 0. + t6833;
  t7082 = t6177*t704;
  t7115 = 0. + t7082;
  t7277 = t1481*t7115;
  t7288 = t3015*t6856;
  t7312 = 0. + t7277 + t7288;
  t7165 = t3015*t7115;
  t7219 = -1.*t1481*t6856;
  t7222 = 0. + t7165 + t7219;
  t7509 = t1196*t6833;
  t7510 = 0. + t7509;
  t7478 = -1.*t6177;
  t7481 = 0. + t7478;
  t7551 = t704*t6833;
  t7553 = 0. + t7551;
  t7589 = t3015*t7481;
  t7615 = t1481*t7553;
  t7638 = 0. + t7589 + t7615;
  t7549 = -1.*t7481*t1481;
  t7557 = t3015*t7553;
  t7562 = 0. + t7549 + t7557;
  t4210 = var2[13]*t3859;
  t4376 = var2[5]*t3859;
  t4796 = t4458*t1596;
  t4819 = -1.*t4815*t2534;
  t4868 = 0. + t4796 + t4819;
  t4909 = var2[4]*t4868;
  t4933 = -1.*t3859*t1712;
  t5024 = t1596*t4815;
  t5491 = t4458*t2534;
  t5526 = 0. + t5024 + t5491;
  t5549 = t264*t5526;
  t5952 = 0. + t4933 + t5549;
  t5974 = var2[3]*t5952;
  t5999 = 0. + var2[15] + t4210 + t4376 + t4909 + t5974;
  t6814 = var2[13]*t6659;
  t6823 = var2[5]*t6659;
  t7054 = var2[14]*t6856;
  t7230 = t1596*t7222;
  t7318 = -1.*t7312*t2534;
  t7326 = 0. + t7230 + t7318;
  t7334 = var2[4]*t7326;
  t7343 = -1.*t6659*t1712;
  t7365 = t1596*t7312;
  t7395 = t7222*t2534;
  t7410 = 0. + t7365 + t7395;
  t7421 = t264*t7410;
  t7454 = 0. + t7343 + t7421;
  t7457 = var2[3]*t7454;
  t7471 = 0. + t6814 + t6823 + t7054 + t7334 + t7457;
  t7487 = var2[14]*t7481;
  t7519 = var2[13]*t7510;
  t7539 = var2[5]*t7510;
  t7566 = t1596*t7562;
  t7651 = -1.*t7638*t2534;
  t7662 = 0. + t7566 + t7651;
  t7666 = var2[4]*t7662;
  t7669 = -1.*t7510*t1712;
  t7687 = t1596*t7638;
  t7689 = t7562*t2534;
  t7694 = 0. + t7687 + t7689;
  t7696 = t264*t7694;
  t7700 = 0. + t7669 + t7696;
  t7719 = var2[3]*t7700;
  t7731 = 0. + t7487 + t7519 + t7539 + t7666 + t7719;
  t2024 = -1.*t1596*t775*t1712;
  t2615 = t2049*t2534;
  t2711 = t2024 + t2615;
  t3118 = -1.*t2049*t1596;
  t3155 = -1.*t775*t1712*t2534;
  t3274 = t3118 + t3155;
  t2764 = t1481*t2711;
  t3520 = t3015*t3274;
  t3560 = t2764 + t3520;
  t7806 = t3015*t2711;
  t7815 = -1.*t1481*t3274;
  t7823 = t7806 + t7815;
  t7843 = -1.*t1196*t264*t775;
  t7846 = t704*t3560;
  t7862 = t7843 + t7846;
  t6106 = 0.0498*t5999;
  t7475 = 0.000019*t7471;
  t7732 = 0.0117*t7731;
  t7748 = t6106 + t7475 + t7732;
  t7762 = 0.000019*t5999;
  t7767 = 0.0563*t7471;
  t7798 = 0.000284*t7731;
  t7802 = t7762 + t7767 + t7798;
  t7917 = t2049*t1596*t1712;
  t7921 = t775*t2534;
  t7929 = t7917 + t7921;
  t7935 = -1.*t1596*t775;
  t7936 = t2049*t1712*t2534;
  t7937 = t7935 + t7936;
  t7931 = t1481*t7929;
  t7939 = t3015*t7937;
  t7940 = t7931 + t7939;
  t7885 = 0.0117*t5999;
  t7887 = 0.000284*t7471;
  t7895 = 0.018*t7731;
  t7896 = t7885 + t7887 + t7895;
  t7950 = t3015*t7929;
  t7952 = -1.*t1481*t7937;
  t7958 = t7950 + t7952;
  t7961 = t1196*t2049*t264;
  t7964 = t704*t7940;
  t7968 = t7961 + t7964;
  t7913 = t2049*t264*t704;
  t7944 = -1.*t1196*t7940;
  t7945 = t7913 + t7944;
  t8029 = t2049*t264*t1596*t1481;
  t8030 = t3015*t2049*t264*t2534;
  t8031 = t8029 + t8030;
  t8022 = t3015*t2049*t264*t1596;
  t8023 = -1.*t2049*t264*t1481*t2534;
  t8024 = t8022 + t8023;
  t8026 = -1.*t1196*t2049*t1712;
  t8032 = t704*t8031;
  t8033 = t8026 + t8032;
  t7980 = -1.*t264*t3859;
  t7982 = -1.*t1712*t5526;
  t7984 = t7980 + t7982;
  t7997 = -1.*t6659*t264;
  t7999 = -1.*t1712*t7410;
  t8000 = t7997 + t7999;
  t8010 = -1.*t264*t7510;
  t8014 = -1.*t1712*t7694;
  t8015 = t8010 + t8014;
  t7960 = t6833*t7958;
  t7969 = t6177*t7968;
  t7970 = t7960 + t7969;
  t7972 = -1.*t6177*t7958;
  t7974 = t6833*t7968;
  t7976 = t7972 + t7974;
  t7989 = 0.0498*var2[3]*t7984;
  t8006 = 0.000019*var2[3]*t8000;
  t8016 = 0.0117*var2[3]*t8015;
  t8017 = t7989 + t8006 + t8016;
  t8131 = t264*t1596*t1481*t775;
  t8133 = t3015*t264*t775*t2534;
  t8136 = t8131 + t8133;
  t8119 = t3015*t264*t1596*t775;
  t8120 = -1.*t264*t1481*t775*t2534;
  t8125 = t8119 + t8120;
  t8130 = -1.*t1196*t775*t1712;
  t8137 = t704*t8136;
  t8138 = t8130 + t8137;
  t8059 = 0.000019*var2[3]*t7984;
  t8060 = 0.0563*var2[3]*t8000;
  t8063 = 0.000284*var2[3]*t8015;
  t8069 = t8059 + t8060 + t8063;
  t8085 = t1596*t775*t1712;
  t8086 = -1.*t2049*t2534;
  t8090 = t8085 + t8086;
  t8099 = t2049*t1596;
  t8101 = t775*t1712*t2534;
  t8105 = t8099 + t8101;
  t8093 = t1481*t8090;
  t8107 = t3015*t8105;
  t8108 = t8093 + t8107;
  t8073 = 0.0117*var2[3]*t7984;
  t8074 = 0.000284*var2[3]*t8000;
  t8076 = 0.018*var2[3]*t8015;
  t8077 = t8073 + t8074 + t8076;
  t8162 = t3015*t8090;
  t8163 = -1.*t1481*t8105;
  t8164 = t8162 + t8163;
  t8167 = t1196*t264*t775;
  t8171 = t704*t8108;
  t8173 = t8167 + t8171;
  t8190 = t264*t1596*t1481;
  t8193 = t3015*t264*t2534;
  t8195 = t8190 + t8193;
  t8184 = t3015*t264*t1596;
  t8185 = -1.*t264*t1481*t2534;
  t8186 = t8184 + t8185;
  t8188 = -1.*t1196*t1712;
  t8196 = t704*t8195;
  t8197 = t8188 + t8196;
  t8220 = -1.*t1596*t1481*t1712;
  t8223 = -1.*t3015*t1712*t2534;
  t8224 = t8220 + t8223;
  t8215 = -1.*t3015*t1596*t1712;
  t8216 = t1481*t1712*t2534;
  t8217 = t8215 + t8216;
  t8219 = -1.*t1196*t264;
  t8225 = t704*t8224;
  t8226 = t8219 + t8225;
  t8284 = t1596*t775;
  t8285 = -1.*t2049*t1712*t2534;
  t8286 = t8284 + t8285;
  t8290 = t1481*t8286;
  t8291 = t7950 + t8290;
  t8281 = -1.*t1481*t7929;
  t8287 = t3015*t8286;
  t8288 = t8281 + t8287;
  t8244 = -1.*t1596*t4815;
  t8245 = -1.*t4458*t2534;
  t8248 = t8244 + t8245;
  t8249 = var2[4]*t8248;
  t8250 = t4796 + t4819;
  t8251 = var2[3]*t264*t8250;
  t8252 = t8249 + t8251;
  t8255 = t7230 + t7318;
  t8256 = var2[3]*t264*t8255;
  t8257 = -1.*t1596*t7312;
  t8258 = -1.*t7222*t2534;
  t8259 = t8257 + t8258;
  t8260 = var2[4]*t8259;
  t8261 = t8256 + t8260;
  t8264 = -1.*t1596*t7638;
  t8265 = -1.*t7562*t2534;
  t8266 = t8264 + t8265;
  t8272 = var2[4]*t8266;
  t8273 = t7566 + t7651;
  t8274 = var2[3]*t264*t8273;
  t8277 = t8272 + t8274;
  t8254 = 0.0498*t8252;
  t8263 = 0.000019*t8261;
  t8278 = 0.0117*t8277;
  t8279 = t8254 + t8263 + t8278;
  t8083 = t264*t704*t775;
  t8111 = -1.*t1196*t8108;
  t8112 = t8083 + t8111;
  t8330 = t1481*t3274;
  t8331 = t8162 + t8330;
  t8327 = -1.*t1481*t8090;
  t8328 = t8327 + t3520;
  t8307 = 0.000019*t8252;
  t8310 = 0.0563*t8261;
  t8311 = 0.000284*t8277;
  t8314 = t8307 + t8310 + t8311;
  t8165 = t6833*t8164;
  t8174 = t6177*t8173;
  t8175 = t8165 + t8174;
  t8316 = 0.0117*t8252;
  t8319 = 0.000284*t8261;
  t8320 = 0.018*t8277;
  t8321 = t8316 + t8319 + t8320;
  t8177 = -1.*t6177*t8164;
  t8180 = t6833*t8173;
  t8181 = t8177 + t8180;
  t8187 = t6833*t8186;
  t8198 = t6177*t8197;
  t8201 = t8187 + t8198;
  t8203 = -1.*t704*t1712;
  t8204 = -1.*t1196*t8195;
  t8205 = t8203 + t8204;
  t8207 = -1.*t6177*t8186;
  t8208 = t6833*t8197;
  t8209 = t8207 + t8208;
  t8354 = -1.*t264*t1596*t1481;
  t8355 = -1.*t3015*t264*t2534;
  t8356 = t8354 + t8355;
  t8389 = -1.*t1481*t7115;
  t8390 = -1.*t3015*t6856;
  t8391 = t8389 + t8390;
  t8387 = t7165 + t7219;
  t8409 = t7549 + t7557;
  t8402 = -1.*t3015*t7481;
  t8406 = -1.*t1481*t7553;
  t8407 = t8402 + t8406;
  t8431 = -1.*t3015*t7937;
  t8433 = t8281 + t8431;
  t8370 = t1196*t1596*t1481;
  t8374 = t3015*t1196*t2534;
  t8375 = t8370 + t8374;
  t8376 = var2[4]*t8375;
  t8380 = -1.*t3015*t1196*t1596;
  t8381 = t1196*t1481*t2534;
  t8382 = t8380 + t8381;
  t8383 = var2[3]*t264*t8382;
  t8384 = t8376 + t8383;
  t8388 = t1596*t8387;
  t8392 = t8391*t2534;
  t8393 = t8388 + t8392;
  t8395 = var2[3]*t264*t8393;
  t8396 = t1596*t8391;
  t8397 = -1.*t8387*t2534;
  t8398 = t8396 + t8397;
  t8399 = var2[4]*t8398;
  t8400 = t8395 + t8399;
  t8408 = t1596*t8407;
  t8410 = -1.*t8409*t2534;
  t8411 = t8408 + t8410;
  t8412 = var2[4]*t8411;
  t8413 = t1596*t8409;
  t8415 = t8407*t2534;
  t8419 = t8413 + t8415;
  t8422 = var2[3]*t264*t8419;
  t8423 = t8412 + t8422;
  t8385 = 0.0498*t8384;
  t8401 = 0.000019*t8400;
  t8424 = 0.0117*t8423;
  t8428 = t8385 + t8401 + t8424;
  t8467 = -1.*t3015*t8105;
  t8468 = t8327 + t8467;
  t8452 = 0.000019*t8384;
  t8453 = 0.0563*t8400;
  t8454 = 0.000284*t8423;
  t8457 = t8452 + t8453 + t8454;
  t8460 = 0.0117*t8384;
  t8461 = 0.000284*t8400;
  t8462 = 0.018*t8423;
  t8463 = t8460 + t8461 + t8462;
  t8357 = t6833*t8356;
  t8358 = t6177*t704*t8186;
  t8359 = t8357 + t8358;
  t8360 = t8359*t7802;
  t8362 = -1.*t1196*t8186*t7748;
  t8363 = -1.*t6177*t8356;
  t8364 = t704*t6833*t8186;
  t8366 = t8363 + t8364;
  t8367 = t8366*t7896;
  t8564 = -1.*t2049*t264*t704;
  t8566 = t1196*t7940;
  t8569 = t8564 + t8566;
  t8492 = -1.*var2[13]*t6177*t704;
  t8494 = -1.*var2[5]*t6177*t704;
  t8495 = t3015*t1196*t6177*t1596;
  t8496 = -1.*t1196*t6177*t1481*t2534;
  t8498 = t8495 + t8496;
  t8499 = var2[4]*t8498;
  t8501 = t6177*t704*t1712;
  t8503 = t1196*t6177*t1596*t1481;
  t8508 = t3015*t1196*t6177*t2534;
  t8509 = t8503 + t8508;
  t8510 = t264*t8509;
  t8511 = t8501 + t8510;
  t8512 = var2[3]*t8511;
  t8513 = t8492 + t8494 + t8499 + t8512;
  t8515 = var2[13]*t1196;
  t8516 = var2[5]*t1196;
  t8517 = t3015*t1596*t704;
  t8519 = -1.*t1481*t704*t2534;
  t8520 = t8517 + t8519;
  t8521 = var2[4]*t8520;
  t8522 = t1596*t1481*t704;
  t8523 = t3015*t704*t2534;
  t8524 = t8522 + t8523;
  t8525 = t264*t8524;
  t8526 = t8188 + t8525;
  t8527 = var2[3]*t8526;
  t8528 = t8515 + t8516 + t8521 + t8527;
  t8533 = -1.*var2[13]*t704*t6833;
  t8534 = -1.*var2[5]*t704*t6833;
  t8536 = t3015*t1196*t1596*t6833;
  t8537 = -1.*t1196*t1481*t6833*t2534;
  t8538 = t8536 + t8537;
  t8539 = var2[4]*t8538;
  t8540 = t704*t6833*t1712;
  t8543 = t1196*t1596*t1481*t6833;
  t8545 = t3015*t1196*t6833*t2534;
  t8546 = t8543 + t8545;
  t8550 = t264*t8546;
  t8553 = t8540 + t8550;
  t8554 = var2[3]*t8553;
  t8555 = t8533 + t8534 + t8539 + t8554;
  t8514 = 0.000019*t8513;
  t8531 = 0.0498*t8528;
  t8557 = 0.0117*t8555;
  t8560 = t8514 + t8531 + t8557;
  t1056 = -1.*t264*t704*t775;
  t8592 = t1196*t8108;
  t8593 = t1056 + t8592;
  t8578 = 0.0563*t8513;
  t8579 = 0.000019*t8528;
  t8580 = 0.000284*t8555;
  t8581 = t8578 + t8579 + t8580;
  t8584 = 0.000284*t8513;
  t8585 = 0.0117*t8528;
  t8586 = 0.018*t8555;
  t8587 = t8584 + t8585 + t8586;
  t8611 = t704*t1712;
  t8612 = t1196*t8195;
  t8613 = t8611 + t8612;
  t8628 = t6177*t1481*t704;
  t8629 = t3015*t6833;
  t8630 = t8628 + t8629;
  t8624 = t3015*t6177*t704;
  t8625 = -1.*t1481*t6833;
  t8626 = t8624 + t8625;
  t8652 = t3015*t6177;
  t8653 = -1.*t1481*t704*t6833;
  t8654 = t8652 + t8653;
  t8648 = -1.*t6177*t1481;
  t8649 = -1.*t3015*t704*t6833;
  t8650 = t8648 + t8649;
  t8619 = var2[13]*t1196*t6177;
  t8622 = var2[5]*t1196*t6177;
  t8623 = var2[14]*t6833;
  t8627 = t1596*t8626;
  t8631 = -1.*t8630*t2534;
  t8632 = t8627 + t8631;
  t8633 = var2[4]*t8632;
  t8634 = -1.*t1196*t6177*t1712;
  t8635 = t1596*t8630;
  t8636 = t8626*t2534;
  t8638 = t8635 + t8636;
  t8639 = t264*t8638;
  t8640 = t8634 + t8639;
  t8641 = var2[3]*t8640;
  t8642 = t8619 + t8622 + t8623 + t8633 + t8641;
  t8645 = var2[14]*t6177;
  t8646 = -1.*var2[13]*t1196*t6833;
  t8647 = -1.*var2[5]*t1196*t6833;
  t8651 = t1596*t8650;
  t8655 = -1.*t8654*t2534;
  t8656 = t8651 + t8655;
  t8657 = var2[4]*t8656;
  t8658 = t1196*t6833*t1712;
  t8659 = t1596*t8654;
  t8660 = t8650*t2534;
  t8661 = t8659 + t8660;
  t8662 = t264*t8661;
  t8663 = t8658 + t8662;
  t8664 = var2[3]*t8663;
  t8665 = t8645 + t8646 + t8647 + t8657 + t8664;
  t8643 = 0.0117*t8642;
  t8666 = 0.000019*t8665;
  t8667 = t8643 + t8666;
  t8669 = 0.000284*t8642;
  t8670 = 0.0563*t8665;
  t8671 = t8669 + t8670;
  t8680 = 0.018*t8642;
  t8681 = 0.000284*t8665;
  t8682 = t8680 + t8681;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1056 - 1.*t1196*t3560)*t7748 + t7802*(t6833*t7823 + t6177*t7862) + (-1.*t6177*t7823 + t6833*t7862)*t7896;
  p_output1[10]=t7748*t7945 + t7802*t7970 + t7896*t7976;
  p_output1[11]=0;
  p_output1[12]=t7945*t8017 + t7748*(-1.*t1712*t2049*t704 - 1.*t1196*t8031) + t7802*(t6833*t8024 + t6177*t8033) + t7896*(-1.*t6177*t8024 + t6833*t8033) + t7970*t8069 + t7976*t8077;
  p_output1[13]=t8017*t8112 + t7748*(-1.*t1712*t704*t775 - 1.*t1196*t8136) + t7802*(t6833*t8125 + t6177*t8138) + t7896*(-1.*t6177*t8125 + t6833*t8138) + t8069*t8175 + t8077*t8181;
  p_output1[14]=t8069*t8201 + t8017*t8205 + t8077*t8209 + t7748*(-1.*t264*t704 - 1.*t1196*t8224) + t7802*(t6833*t8217 + t6177*t8226) + t7896*(-1.*t6177*t8217 + t6833*t8226);
  p_output1[15]=t7945*t8279 - 1.*t1196*t7748*t8291 + t7802*(t6833*t8288 + t6177*t704*t8291) + t7896*(-1.*t6177*t8288 + t6833*t704*t8291) + t7970*t8314 + t7976*t8321;
  p_output1[16]=t8112*t8279 + t8175*t8314 + t8181*t8321 - 1.*t1196*t7748*t8331 + t7802*(t6833*t8328 + t6177*t704*t8331) + t7896*(-1.*t6177*t8328 + t6833*t704*t8331);
  p_output1[17]=t8205*t8279 + t8201*t8314 + t8209*t8321 + t8360 + t8362 + t8367;
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
  p_output1[39]=-1.*t1196*t7748*t7958 + t7945*t8428 + t7896*(t6833*t704*t7958 - 1.*t6177*t8433) + t7802*(t6177*t704*t7958 + t6833*t8433) + t7970*t8457 + t7976*t8463;
  p_output1[40]=-1.*t1196*t7748*t8164 + t8112*t8428 + t8175*t8457 + t8181*t8463 + t7896*(t6833*t704*t8164 - 1.*t6177*t8468) + t7802*(t6177*t704*t8164 + t6833*t8468);
  p_output1[41]=t8360 + t8362 + t8367 + t8205*t8428 + t8201*t8457 + t8209*t8463;
  p_output1[42]=t7748*t7968 + t7945*t8560 + t6177*t7802*t8569 + t6833*t7896*t8569 + t7970*t8581 + t7976*t8587;
  p_output1[43]=t7748*t8173 + t8112*t8560 + t8175*t8581 + t8181*t8587 + t6177*t7802*t8593 + t6833*t7896*t8593;
  p_output1[44]=t7748*t8197 + t8205*t8560 + t8201*t8581 + t8209*t8587 + t6177*t7802*t8613 + t6833*t7896*t8613;
  p_output1[45]=t7802*(t6177*t7958 - 1.*t6833*t7968) + t7896*t7970 + t7945*t8667 + t7970*t8671 + t7976*t8682;
  p_output1[46]=t7802*(t6177*t8164 - 1.*t6833*t8173) + t7896*t8175 + t8112*t8667 + t8175*t8671 + t8181*t8682;
  p_output1[47]=t7802*(t6177*t8186 - 1.*t6833*t8197) + t7896*t8201 + t8205*t8667 + t8201*t8671 + t8209*t8682;
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

#include "Jq_AMWorld_RightThigh_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
