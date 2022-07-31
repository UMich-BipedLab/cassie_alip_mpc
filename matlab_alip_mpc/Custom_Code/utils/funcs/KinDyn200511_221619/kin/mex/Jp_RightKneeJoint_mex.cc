/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:38 GMT-04:00
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
  double t2699;
  double t3041;
  double t3058;
  double t3069;
  double t3150;
  double t3450;
  double t3310;
  double t3389;
  double t3457;
  double t356;
  double t363;
  double t1287;
  double t1904;
  double t3422;
  double t3493;
  double t3550;
  double t3957;
  double t4035;
  double t4036;
  double t335;
  double t4376;
  double t4433;
  double t4437;
  double t4746;
  double t4776;
  double t4874;
  double t5228;
  double t5264;
  double t5291;
  double t5319;
  double t5565;
  double t5570;
  double t5571;
  double t5580;
  double t5678;
  double t5808;
  double t5827;
  double t5840;
  double t5845;
  double t5846;
  double t5886;
  double t5892;
  double t5907;
  double t1723;
  double t2128;
  double t2605;
  double t3070;
  double t3227;
  double t3254;
  double t3730;
  double t3782;
  double t3828;
  double t4126;
  double t4132;
  double t4204;
  double t5971;
  double t5985;
  double t5986;
  double t6026;
  double t6052;
  double t6058;
  double t5174;
  double t5229;
  double t5261;
  double t6068;
  double t6072;
  double t6074;
  double t5510;
  double t5519;
  double t5558;
  double t5822;
  double t5829;
  double t5831;
  double t6083;
  double t6084;
  double t6089;
  double t6115;
  double t6116;
  double t6118;
  double t5852;
  double t5872;
  double t5884;
  double t6129;
  double t6133;
  double t6134;
  double t6138;
  double t6148;
  double t6158;
  double t6191;
  double t6192;
  double t6194;
  double t6201;
  double t6204;
  double t6205;
  double t6224;
  double t6226;
  double t6228;
  double t6232;
  double t6236;
  double t6237;
  double t6239;
  double t6240;
  double t6242;
  double t6289;
  double t6291;
  double t6294;
  double t6296;
  double t6297;
  double t6298;
  double t6318;
  double t6319;
  double t6321;
  double t6332;
  double t6334;
  double t6338;
  double t6346;
  double t6347;
  double t6348;
  double t6383;
  double t6385;
  double t6388;
  double t6394;
  double t6395;
  double t6396;
  double t6416;
  double t6419;
  double t6420;
  double t6422;
  double t6424;
  double t6426;
  double t6431;
  double t6432;
  double t6433;
  double t6471;
  double t6472;
  double t6475;
  double t6501;
  double t6506;
  double t6481;
  double t6485;
  double t6491;
  double t6512;
  double t6513;
  double t6518;
  double t6522;
  double t6525;
  double t6526;
  double t6561;
  double t6562;
  double t6564;
  double t6586;
  double t6589;
  double t6591;
  double t6570;
  double t6576;
  double t6602;
  double t6603;
  double t6605;
  double t6608;
  double t6612;
  double t6614;
  double t6646;
  double t6648;
  double t6649;
  double t6640;
  double t6641;
  double t6643;
  double t6656;
  double t6663;
  double t6664;
  double t6669;
  double t6672;
  double t6673;
  double t6714;
  double t6716;
  double t6736;
  double t6738;
  double t6748;
  double t6751;
  double t6754;
  double t6755;
  double t6704;
  double t6705;
  double t6707;
  double t6708;
  double t6711;
  double t6780;
  double t6782;
  double t6783;
  double t6795;
  double t6799;
  double t6786;
  double t6788;
  double t6808;
  double t6811;
  double t6813;
  double t6820;
  double t6825;
  double t6829;
  double t6644;
  double t6650;
  double t6652;
  double t6654;
  double t6666;
  double t6674;
  double t6675;
  double t6683;
  double t6685;
  double t6687;
  double t6688;
  double t6689;
  double t6691;
  double t6694;
  double t6091;
  double t6102;
  double t6107;
  double t6868;
  double t6869;
  double t6870;
  double t6876;
  double t6879;
  double t6914;
  double t6915;
  double t6918;
  double t6921;
  double t6925;
  double t6926;
  double t6963;
  double t6964;
  double t6965;
  double t6969;
  double t6970;
  double t6977;
  double t7027;
  double t7028;
  double t7029;
  double t6161;
  double t7019;
  double t7020;
  double t7022;
  double t7023;
  double t7024;
  double t7062;
  double t7063;
  double t7068;
  double t7071;
  double t7075;
  double t7076;
  double t7081;
  double t7083;
  double t7084;
  double t7112;
  double t7114;
  double t7115;
  double t7130;
  double t7132;
  double t7133;
  double t7148;
  double t7151;
  double t7155;
  double t6160;
  double t6164;
  double t7046;
  double t7178;
  double t7183;
  double t7184;
  double t7190;
  double t7191;
  double t7214;
  double t7215;
  double t7216;
  double t7093;
  double t7103;
  double t7244;
  double t7246;
  double t7247;
  double t7162;
  double t7166;
  t2699 = Sin(var1[3]);
  t3041 = Cos(var1[13]);
  t3058 = -1.*t3041;
  t3069 = 1. + t3058;
  t3150 = Sin(var1[13]);
  t3450 = Cos(var1[3]);
  t3310 = Cos(var1[5]);
  t3389 = Sin(var1[4]);
  t3457 = Sin(var1[5]);
  t356 = Cos(var1[14]);
  t363 = -1.*t356;
  t1287 = 1. + t363;
  t1904 = Sin(var1[14]);
  t3422 = -1.*t3310*t2699*t3389;
  t3493 = t3450*t3457;
  t3550 = t3422 + t3493;
  t3957 = -1.*t3450*t3310;
  t4035 = -1.*t2699*t3389*t3457;
  t4036 = t3957 + t4035;
  t335 = Cos(var1[4]);
  t4376 = t3150*t3550;
  t4433 = t3041*t4036;
  t4437 = t4376 + t4433;
  t4746 = Cos(var1[15]);
  t4776 = -1.*t4746;
  t4874 = 1. + t4776;
  t5228 = Sin(var1[15]);
  t5264 = t3041*t3550;
  t5291 = -1.*t3150*t4036;
  t5319 = t5264 + t5291;
  t5565 = -1.*t356*t335*t2699;
  t5570 = t1904*t4437;
  t5571 = t5565 + t5570;
  t5580 = Cos(var1[16]);
  t5678 = -1.*t5580;
  t5808 = 1. + t5678;
  t5827 = Sin(var1[16]);
  t5840 = t5228*t5319;
  t5845 = t4746*t5571;
  t5846 = t5840 + t5845;
  t5886 = t4746*t5319;
  t5892 = -1.*t5228*t5571;
  t5907 = t5886 + t5892;
  t1723 = -0.08055*t1287;
  t2128 = -0.135*t1904;
  t2605 = 0. + t1723 + t2128;
  t3070 = 0.07996*t3069;
  t3227 = 0.135*t3150;
  t3254 = 0. + t3070 + t3227;
  t3730 = -0.135*t3069;
  t3782 = 0.07996*t3150;
  t3828 = 0. + t3730 + t3782;
  t4126 = -0.135*t1287;
  t4132 = 0.08055*t1904;
  t4204 = 0. + t4126 + t4132;
  t5971 = t3450*t3310*t3389;
  t5985 = t2699*t3457;
  t5986 = t5971 + t5985;
  t6026 = -1.*t3310*t2699;
  t6052 = t3450*t3389*t3457;
  t6058 = t6026 + t6052;
  t5174 = -0.01004*t4874;
  t5229 = 0.08055*t5228;
  t5261 = 0. + t5174 + t5229;
  t6068 = t3150*t5986;
  t6072 = t3041*t6058;
  t6074 = t6068 + t6072;
  t5510 = -0.08055*t4874;
  t5519 = -0.01004*t5228;
  t5558 = 0. + t5510 + t5519;
  t5822 = -0.08055*t5808;
  t5829 = -0.13004*t5827;
  t5831 = 0. + t5822 + t5829;
  t6083 = t3041*t5986;
  t6084 = -1.*t3150*t6058;
  t6089 = t6083 + t6084;
  t6115 = t356*t3450*t335;
  t6116 = t1904*t6074;
  t6118 = t6115 + t6116;
  t5852 = -0.13004*t5808;
  t5872 = 0.08055*t5827;
  t5884 = 0. + t5852 + t5872;
  t6129 = t5228*t6089;
  t6133 = t4746*t6118;
  t6134 = t6129 + t6133;
  t6138 = t4746*t6089;
  t6148 = -1.*t5228*t6118;
  t6158 = t6138 + t6148;
  t6191 = t3450*t335*t3310*t3150;
  t6192 = t3041*t3450*t335*t3457;
  t6194 = t6191 + t6192;
  t6201 = t3041*t3450*t335*t3310;
  t6204 = -1.*t3450*t335*t3150*t3457;
  t6205 = t6201 + t6204;
  t6224 = -1.*t356*t3450*t3389;
  t6226 = t1904*t6194;
  t6228 = t6224 + t6226;
  t6232 = t5228*t6205;
  t6236 = t4746*t6228;
  t6237 = t6232 + t6236;
  t6239 = t4746*t6205;
  t6240 = -1.*t5228*t6228;
  t6242 = t6239 + t6240;
  t6289 = t335*t3310*t3150*t2699;
  t6291 = t3041*t335*t2699*t3457;
  t6294 = t6289 + t6291;
  t6296 = t3041*t335*t3310*t2699;
  t6297 = -1.*t335*t3150*t2699*t3457;
  t6298 = t6296 + t6297;
  t6318 = -1.*t356*t2699*t3389;
  t6319 = t1904*t6294;
  t6321 = t6318 + t6319;
  t6332 = t5228*t6298;
  t6334 = t4746*t6321;
  t6338 = t6332 + t6334;
  t6346 = t4746*t6298;
  t6347 = -1.*t5228*t6321;
  t6348 = t6346 + t6347;
  t6383 = -1.*t3310*t3150*t3389;
  t6385 = -1.*t3041*t3389*t3457;
  t6388 = t6383 + t6385;
  t6394 = -1.*t3041*t3310*t3389;
  t6395 = t3150*t3389*t3457;
  t6396 = t6394 + t6395;
  t6416 = -1.*t356*t335;
  t6419 = t1904*t6388;
  t6420 = t6416 + t6419;
  t6422 = t5228*t6396;
  t6424 = t4746*t6420;
  t6426 = t6422 + t6424;
  t6431 = t4746*t6396;
  t6432 = -1.*t5228*t6420;
  t6433 = t6431 + t6432;
  t6471 = t3310*t2699;
  t6472 = -1.*t3450*t3389*t3457;
  t6475 = t6471 + t6472;
  t6501 = t3150*t6475;
  t6506 = t6083 + t6501;
  t6481 = -1.*t3150*t5986;
  t6485 = t3041*t6475;
  t6491 = t6481 + t6485;
  t6512 = t5228*t6491;
  t6513 = t4746*t1904*t6506;
  t6518 = t6512 + t6513;
  t6522 = t4746*t6491;
  t6525 = -1.*t1904*t5228*t6506;
  t6526 = t6522 + t6525;
  t6561 = t3310*t2699*t3389;
  t6562 = -1.*t3450*t3457;
  t6564 = t6561 + t6562;
  t6586 = t3041*t6564;
  t6589 = t3150*t4036;
  t6591 = t6586 + t6589;
  t6570 = -1.*t3150*t6564;
  t6576 = t6570 + t4433;
  t6602 = t5228*t6576;
  t6603 = t4746*t1904*t6591;
  t6605 = t6602 + t6603;
  t6608 = t4746*t6576;
  t6612 = -1.*t1904*t5228*t6591;
  t6614 = t6608 + t6612;
  t6646 = t3041*t335*t3310;
  t6648 = -1.*t335*t3150*t3457;
  t6649 = t6646 + t6648;
  t6640 = -1.*t335*t3310*t3150;
  t6641 = -1.*t3041*t335*t3457;
  t6643 = t6640 + t6641;
  t6656 = t5228*t6643;
  t6663 = t4746*t1904*t6649;
  t6664 = t6656 + t6663;
  t6669 = t4746*t6643;
  t6672 = -1.*t1904*t5228*t6649;
  t6673 = t6669 + t6672;
  t6714 = -1.*t3041*t6058;
  t6716 = t6481 + t6714;
  t6736 = t5228*t6716;
  t6738 = t4746*t1904*t6089;
  t6748 = t6736 + t6738;
  t6751 = t4746*t6716;
  t6754 = -1.*t1904*t5228*t6089;
  t6755 = t6751 + t6754;
  t6704 = 0.135*t3041;
  t6705 = t6704 + t3782;
  t6707 = 0.07996*t3041;
  t6708 = -0.135*t3150;
  t6711 = t6707 + t6708;
  t6780 = t3450*t3310;
  t6782 = t2699*t3389*t3457;
  t6783 = t6780 + t6782;
  t6795 = -1.*t3150*t6783;
  t6799 = t6586 + t6795;
  t6786 = -1.*t3041*t6783;
  t6788 = t6570 + t6786;
  t6808 = t5228*t6788;
  t6811 = t4746*t1904*t6799;
  t6813 = t6808 + t6811;
  t6820 = t4746*t6788;
  t6825 = -1.*t1904*t5228*t6799;
  t6829 = t6820 + t6825;
  t6644 = t5261*t6643;
  t6650 = -0.1305*t356*t6649;
  t6652 = t4204*t6649;
  t6654 = t1904*t5558*t6649;
  t6666 = t5831*t6664;
  t6674 = t5884*t6673;
  t6675 = -1.*t5827*t6664;
  t6683 = t5580*t6673;
  t6685 = t6675 + t6683;
  t6687 = -0.13004*t6685;
  t6688 = t5580*t6664;
  t6689 = t5827*t6673;
  t6691 = t6688 + t6689;
  t6694 = -0.08055*t6691;
  t6091 = -1.*t3450*t335*t1904;
  t6102 = t356*t6074;
  t6107 = t6091 + t6102;
  t6868 = -0.135*t356;
  t6869 = -0.08055*t1904;
  t6870 = t6868 + t6869;
  t6876 = 0.08055*t356;
  t6879 = t6876 + t2128;
  t6914 = t3150*t6564;
  t6915 = t3041*t6783;
  t6918 = t6914 + t6915;
  t6921 = -1.*t335*t1904*t2699;
  t6925 = t356*t6918;
  t6926 = t6921 + t6925;
  t6963 = t335*t3310*t3150;
  t6964 = t3041*t335*t3457;
  t6965 = t6963 + t6964;
  t6969 = t1904*t3389;
  t6970 = t356*t6965;
  t6977 = t6969 + t6970;
  t7027 = -1.*t5228*t6089;
  t7028 = -1.*t4746*t6118;
  t7029 = t7027 + t7028;
  t6161 = t5580*t6158;
  t7019 = 0.08055*t4746;
  t7020 = t7019 + t5519;
  t7022 = -0.01004*t4746;
  t7023 = -0.08055*t5228;
  t7024 = t7022 + t7023;
  t7062 = t356*t335*t2699;
  t7063 = t1904*t6918;
  t7068 = t7062 + t7063;
  t7071 = -1.*t5228*t6799;
  t7075 = -1.*t4746*t7068;
  t7076 = t7071 + t7075;
  t7081 = t4746*t6799;
  t7083 = -1.*t5228*t7068;
  t7084 = t7081 + t7083;
  t7112 = -1.*t356*t3389;
  t7114 = t1904*t6965;
  t7115 = t7112 + t7114;
  t7130 = -1.*t5228*t6649;
  t7132 = -1.*t4746*t7115;
  t7133 = t7130 + t7132;
  t7148 = t4746*t6649;
  t7151 = -1.*t5228*t7115;
  t7155 = t7148 + t7151;
  t6160 = -1.*t5827*t6134;
  t6164 = t6160 + t6161;
  t7046 = -1.*t5827*t6158;
  t7178 = -0.13004*t5580;
  t7183 = -0.08055*t5827;
  t7184 = t7178 + t7183;
  t7190 = 0.08055*t5580;
  t7191 = t7190 + t5829;
  t7214 = t5228*t6799;
  t7215 = t4746*t7068;
  t7216 = t7214 + t7215;
  t7093 = t5580*t7084;
  t7103 = -1.*t5827*t7084;
  t7244 = t5228*t6649;
  t7246 = t4746*t7115;
  t7247 = t7244 + t7246;
  t7162 = t5580*t7155;
  t7166 = -1.*t5827*t7155;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2605*t2699*t335 + t3254*t3550 + t3828*t4036 + t4204*t4437 - 0.1305*(t1904*t2699*t335 + t356*t4437) + t5261*t5319 + t5558*t5571 + t5831*t5846 + t5884*t5907 - 0.13004*(-1.*t5827*t5846 + t5580*t5907) - 0.08055*(t5580*t5846 + t5827*t5907);
  p_output1[10]=t2605*t335*t3450 + t3254*t5986 + t3828*t6058 + t4204*t6074 + t5261*t6089 - 0.1305*t6107 + t5558*t6118 + t5831*t6134 + t5884*t6158 - 0.08055*(t5580*t6134 + t5827*t6158) - 0.13004*t6164;
  p_output1[11]=0;
  p_output1[12]=t3254*t3310*t335*t3450 - 1.*t2605*t3389*t3450 + t335*t3450*t3457*t3828 + t4204*t6194 - 0.1305*(t1904*t3389*t3450 + t356*t6194) + t5261*t6205 + t5558*t6228 + t5831*t6237 + t5884*t6242 - 0.13004*(-1.*t5827*t6237 + t5580*t6242) - 0.08055*(t5580*t6237 + t5827*t6242);
  p_output1[13]=t2699*t3254*t3310*t335 - 1.*t2605*t2699*t3389 + t2699*t335*t3457*t3828 + t4204*t6294 - 0.1305*(t1904*t2699*t3389 + t356*t6294) + t5261*t6298 + t5558*t6321 + t5831*t6338 + t5884*t6348 - 0.13004*(-1.*t5827*t6338 + t5580*t6348) - 0.08055*(t5580*t6338 + t5827*t6348);
  p_output1[14]=-1.*t2605*t335 - 1.*t3254*t3310*t3389 - 1.*t3389*t3457*t3828 + t4204*t6388 - 0.1305*(t1904*t335 + t356*t6388) + t5261*t6396 + t5558*t6420 + t5831*t6426 + t5884*t6433 - 0.13004*(-1.*t5827*t6426 + t5580*t6433) - 0.08055*(t5580*t6426 + t5827*t6433);
  p_output1[15]=t3828*t5986 + t3254*t6475 + t5261*t6491 - 0.1305*t356*t6506 + t4204*t6506 + t1904*t5558*t6506 + t5831*t6518 + t5884*t6526 - 0.13004*(-1.*t5827*t6518 + t5580*t6526) - 0.08055*(t5580*t6518 + t5827*t6526);
  p_output1[16]=t3254*t4036 + t3828*t6564 + t5261*t6576 - 0.1305*t356*t6591 + t4204*t6591 + t1904*t5558*t6591 + t5831*t6605 + t5884*t6614 - 0.13004*(-1.*t5827*t6605 + t5580*t6614) - 0.08055*(t5580*t6605 + t5827*t6614);
  p_output1[17]=-1.*t3254*t335*t3457 + t3310*t335*t3828 + t6644 + t6650 + t6652 + t6654 + t6666 + t6674 + t6687 + t6694;
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
  p_output1[39]=-0.1305*t356*t6089 + t4204*t6089 + t1904*t5558*t6089 + t5986*t6705 + t6058*t6711 + t5261*t6716 + t5831*t6748 + t5884*t6755 - 0.13004*(-1.*t5827*t6748 + t5580*t6755) - 0.08055*(t5580*t6748 + t5827*t6755);
  p_output1[40]=t6564*t6705 + t6711*t6783 + t5261*t6788 - 0.1305*t356*t6799 + t4204*t6799 + t1904*t5558*t6799 + t5831*t6813 + t5884*t6829 - 0.13004*(-1.*t5827*t6813 + t5580*t6829) - 0.08055*(t5580*t6813 + t5827*t6829);
  p_output1[41]=t6644 + t6650 + t6652 + t6654 + t6666 + t6674 + t6687 + t6694 + t3310*t335*t6705 + t335*t3457*t6711;
  p_output1[42]=-0.1305*(-1.*t335*t3450*t356 - 1.*t1904*t6074) + t5558*t6107 + t4746*t5831*t6107 - 1.*t5228*t5884*t6107 - 0.13004*(-1.*t5228*t5580*t6107 - 1.*t4746*t5827*t6107) - 0.08055*(t4746*t5580*t6107 - 1.*t5228*t5827*t6107) + t335*t3450*t6870 + t6074*t6879;
  p_output1[43]=t2699*t335*t6870 + t6879*t6918 - 0.1305*(t5565 - 1.*t1904*t6918) + t5558*t6926 + t4746*t5831*t6926 - 1.*t5228*t5884*t6926 - 0.13004*(-1.*t5228*t5580*t6926 - 1.*t4746*t5827*t6926) - 0.08055*(t4746*t5580*t6926 - 1.*t5228*t5827*t6926);
  p_output1[44]=-1.*t3389*t6870 + t6879*t6965 - 0.1305*(t3389*t356 - 1.*t1904*t6965) + t5558*t6977 + t4746*t5831*t6977 - 1.*t5228*t5884*t6977 - 0.13004*(-1.*t5228*t5580*t6977 - 1.*t4746*t5827*t6977) - 0.08055*(t4746*t5580*t6977 - 1.*t5228*t5827*t6977);
  p_output1[45]=t5831*t6158 + t6089*t7020 + t6118*t7024 + t5884*t7029 - 0.08055*(t6161 + t5827*t7029) - 0.13004*(t5580*t7029 + t7046);
  p_output1[46]=t6799*t7020 + t7024*t7068 + t5884*t7076 + t5831*t7084 - 0.08055*(t5827*t7076 + t7093) - 0.13004*(t5580*t7076 + t7103);
  p_output1[47]=t6649*t7020 + t7024*t7115 + t5884*t7133 + t5831*t7155 - 0.08055*(t5827*t7133 + t7162) - 0.13004*(t5580*t7133 + t7166);
  p_output1[48]=-0.08055*t6164 - 0.13004*(-1.*t5580*t6134 + t7046) + t6134*t7184 + t6158*t7191;
  p_output1[49]=t7084*t7191 + t7184*t7216 - 0.13004*(t7103 - 1.*t5580*t7216) - 0.08055*(t7093 - 1.*t5827*t7216);
  p_output1[50]=t7155*t7191 + t7184*t7247 - 0.13004*(t7166 - 1.*t5580*t7247) - 0.08055*(t7162 - 1.*t5827*t7247);
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

#include "Jp_RightKneeJoint_mex.hh"

namespace SymExpression
{

void Jp_RightKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
