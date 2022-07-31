/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:24 GMT-04:00
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
  double t638;
  double t847;
  double t931;
  double t1011;
  double t1754;
  double t2977;
  double t2449;
  double t2566;
  double t3019;
  double t58;
  double t68;
  double t165;
  double t420;
  double t2882;
  double t3047;
  double t3241;
  double t3917;
  double t3948;
  double t3949;
  double t36;
  double t4273;
  double t4447;
  double t4609;
  double t4720;
  double t4723;
  double t4793;
  double t4834;
  double t5003;
  double t5051;
  double t5270;
  double t5828;
  double t5834;
  double t5918;
  double t6008;
  double t6042;
  double t6043;
  double t6079;
  double t6154;
  double t6180;
  double t6194;
  double t6269;
  double t6274;
  double t6286;
  double t6292;
  double t6300;
  double t6301;
  double t6310;
  double t6325;
  double t6339;
  double t6343;
  double t6412;
  double t6448;
  double t6476;
  double t404;
  double t483;
  double t582;
  double t1384;
  double t1929;
  double t1998;
  double t3497;
  double t3635;
  double t3691;
  double t4016;
  double t4090;
  double t4102;
  double t6580;
  double t6589;
  double t6598;
  double t6654;
  double t6666;
  double t6683;
  double t4830;
  double t4875;
  double t4951;
  double t6721;
  double t6723;
  double t6732;
  double t5676;
  double t5757;
  double t5790;
  double t6054;
  double t6088;
  double t6143;
  double t6771;
  double t6804;
  double t6809;
  double t6915;
  double t6916;
  double t6918;
  double t6230;
  double t6258;
  double t6265;
  double t6305;
  double t6311;
  double t6324;
  double t6931;
  double t6961;
  double t6966;
  double t6982;
  double t7011;
  double t7028;
  double t6356;
  double t6381;
  double t6384;
  double t7102;
  double t7112;
  double t7119;
  double t7138;
  double t7169;
  double t7196;
  double t7319;
  double t7327;
  double t7329;
  double t7339;
  double t7345;
  double t7346;
  double t7366;
  double t7367;
  double t7373;
  double t7376;
  double t7378;
  double t7381;
  double t7386;
  double t7393;
  double t7394;
  double t7399;
  double t7402;
  double t7409;
  double t7413;
  double t7416;
  double t7426;
  double t7482;
  double t7484;
  double t7486;
  double t7497;
  double t7500;
  double t7504;
  double t7552;
  double t7562;
  double t7563;
  double t7574;
  double t7583;
  double t7588;
  double t7594;
  double t7608;
  double t7611;
  double t7630;
  double t7632;
  double t7637;
  double t7643;
  double t7649;
  double t7653;
  double t7713;
  double t7718;
  double t7720;
  double t7733;
  double t7740;
  double t7743;
  double t7765;
  double t7770;
  double t7779;
  double t7792;
  double t7794;
  double t7796;
  double t7801;
  double t7806;
  double t7807;
  double t7817;
  double t7820;
  double t7828;
  double t7833;
  double t7839;
  double t7844;
  double t7877;
  double t7880;
  double t7881;
  double t7908;
  double t7909;
  double t7886;
  double t7888;
  double t7898;
  double t7927;
  double t7930;
  double t7932;
  double t7941;
  double t7944;
  double t7946;
  double t7956;
  double t7957;
  double t7959;
  double t7964;
  double t7965;
  double t7966;
  double t8023;
  double t8029;
  double t8034;
  double t8051;
  double t8053;
  double t8060;
  double t8043;
  double t8045;
  double t8071;
  double t8074;
  double t8075;
  double t8084;
  double t8085;
  double t8086;
  double t8095;
  double t8098;
  double t8108;
  double t8110;
  double t8111;
  double t8116;
  double t8172;
  double t8174;
  double t8178;
  double t8162;
  double t8163;
  double t8170;
  double t8199;
  double t8200;
  double t8202;
  double t8210;
  double t8213;
  double t8214;
  double t8219;
  double t8220;
  double t8221;
  double t8225;
  double t8227;
  double t8239;
  double t8315;
  double t8319;
  double t8332;
  double t8339;
  double t8352;
  double t8356;
  double t8363;
  double t8369;
  double t8379;
  double t8387;
  double t8389;
  double t8393;
  double t8394;
  double t8395;
  double t8294;
  double t8297;
  double t8304;
  double t8305;
  double t8307;
  double t8440;
  double t8442;
  double t8453;
  double t8472;
  double t8476;
  double t8462;
  double t8466;
  double t8498;
  double t8511;
  double t8514;
  double t8521;
  double t8530;
  double t8532;
  double t8534;
  double t8536;
  double t8540;
  double t8544;
  double t8546;
  double t8549;
  double t8171;
  double t8193;
  double t8195;
  double t8198;
  double t8204;
  double t8218;
  double t8222;
  double t8243;
  double t8245;
  double t8253;
  double t8254;
  double t8260;
  double t8262;
  double t8267;
  double t8268;
  double t8280;
  double t6838;
  double t6884;
  double t6897;
  double t8621;
  double t8622;
  double t8623;
  double t8636;
  double t8638;
  double t8639;
  double t8579;
  double t8580;
  double t8582;
  double t8588;
  double t8594;
  double t8690;
  double t8694;
  double t8696;
  double t8705;
  double t8707;
  double t8708;
  double t8719;
  double t8721;
  double t8722;
  double t8726;
  double t8731;
  double t8737;
  double t8783;
  double t8785;
  double t8786;
  double t8805;
  double t8809;
  double t8810;
  double t8828;
  double t8830;
  double t8831;
  double t8837;
  double t8841;
  double t8844;
  double t8896;
  double t8897;
  double t8898;
  double t8908;
  double t8921;
  double t8923;
  double t8930;
  double t8934;
  double t8880;
  double t8882;
  double t8885;
  double t8887;
  double t8890;
  double t8959;
  double t8960;
  double t8962;
  double t8966;
  double t8967;
  double t8969;
  double t8972;
  double t8973;
  double t8976;
  double t8984;
  double t8990;
  double t8998;
  double t9000;
  double t9002;
  double t9003;
  double t9020;
  double t9021;
  double t9026;
  double t9029;
  double t9032;
  double t9035;
  double t9037;
  double t9039;
  double t9042;
  double t9045;
  double t9048;
  double t9050;
  double t9052;
  double t9053;
  double t9056;
  double t9082;
  double t9083;
  double t7250;
  double t9073;
  double t9074;
  double t9075;
  double t9078;
  double t9079;
  double t9104;
  double t9105;
  double t9107;
  double t9114;
  double t9117;
  double t9119;
  double t9122;
  double t9145;
  double t9151;
  double t9158;
  double t9171;
  double t9173;
  double t9178;
  double t9182;
  double t9087;
  double t7282;
  double t7288;
  double t9209;
  double t9212;
  double t9217;
  double t9218;
  double t9221;
  double t9126;
  double t9232;
  double t9234;
  double t9237;
  double t9138;
  double t9188;
  double t9258;
  double t9260;
  double t9261;
  double t9196;
  t638 = Sin(var1[3]);
  t847 = Cos(var1[13]);
  t931 = -1.*t847;
  t1011 = 1. + t931;
  t1754 = Sin(var1[13]);
  t2977 = Cos(var1[3]);
  t2449 = Cos(var1[5]);
  t2566 = Sin(var1[4]);
  t3019 = Sin(var1[5]);
  t58 = Cos(var1[14]);
  t68 = -1.*t58;
  t165 = 1. + t68;
  t420 = Sin(var1[14]);
  t2882 = -1.*t2449*t638*t2566;
  t3047 = t2977*t3019;
  t3241 = t2882 + t3047;
  t3917 = -1.*t2977*t2449;
  t3948 = -1.*t638*t2566*t3019;
  t3949 = t3917 + t3948;
  t36 = Cos(var1[4]);
  t4273 = t1754*t3241;
  t4447 = t847*t3949;
  t4609 = t4273 + t4447;
  t4720 = Cos(var1[15]);
  t4723 = -1.*t4720;
  t4793 = 1. + t4723;
  t4834 = Sin(var1[15]);
  t5003 = t847*t3241;
  t5051 = -1.*t1754*t3949;
  t5270 = t5003 + t5051;
  t5828 = -1.*t58*t36*t638;
  t5834 = t420*t4609;
  t5918 = t5828 + t5834;
  t6008 = Cos(var1[16]);
  t6042 = -1.*t6008;
  t6043 = 1. + t6042;
  t6079 = Sin(var1[16]);
  t6154 = t4834*t5270;
  t6180 = t4720*t5918;
  t6194 = t6154 + t6180;
  t6269 = t4720*t5270;
  t6274 = -1.*t4834*t5918;
  t6286 = t6269 + t6274;
  t6292 = Cos(var1[17]);
  t6300 = -1.*t6292;
  t6301 = 1. + t6300;
  t6310 = Sin(var1[17]);
  t6325 = -1.*t6079*t6194;
  t6339 = t6008*t6286;
  t6343 = t6325 + t6339;
  t6412 = t6008*t6194;
  t6448 = t6079*t6286;
  t6476 = t6412 + t6448;
  t404 = -0.08055*t165;
  t483 = -0.135*t420;
  t582 = 0. + t404 + t483;
  t1384 = 0.07996*t1011;
  t1929 = 0.135*t1754;
  t1998 = 0. + t1384 + t1929;
  t3497 = -0.135*t1011;
  t3635 = 0.07996*t1754;
  t3691 = 0. + t3497 + t3635;
  t4016 = -0.135*t165;
  t4090 = 0.08055*t420;
  t4102 = 0. + t4016 + t4090;
  t6580 = t2977*t2449*t2566;
  t6589 = t638*t3019;
  t6598 = t6580 + t6589;
  t6654 = -1.*t2449*t638;
  t6666 = t2977*t2566*t3019;
  t6683 = t6654 + t6666;
  t4830 = -0.01004*t4793;
  t4875 = 0.08055*t4834;
  t4951 = 0. + t4830 + t4875;
  t6721 = t1754*t6598;
  t6723 = t847*t6683;
  t6732 = t6721 + t6723;
  t5676 = -0.08055*t4793;
  t5757 = -0.01004*t4834;
  t5790 = 0. + t5676 + t5757;
  t6054 = -0.08055*t6043;
  t6088 = -0.13004*t6079;
  t6143 = 0. + t6054 + t6088;
  t6771 = t847*t6598;
  t6804 = -1.*t1754*t6683;
  t6809 = t6771 + t6804;
  t6915 = t58*t2977*t36;
  t6916 = t420*t6732;
  t6918 = t6915 + t6916;
  t6230 = -0.13004*t6043;
  t6258 = 0.08055*t6079;
  t6265 = 0. + t6230 + t6258;
  t6305 = -0.19074*t6301;
  t6311 = 0.03315*t6310;
  t6324 = 0. + t6305 + t6311;
  t6931 = t4834*t6809;
  t6961 = t4720*t6918;
  t6966 = t6931 + t6961;
  t6982 = t4720*t6809;
  t7011 = -1.*t4834*t6918;
  t7028 = t6982 + t7011;
  t6356 = -0.03315*t6301;
  t6381 = -0.19074*t6310;
  t6384 = 0. + t6356 + t6381;
  t7102 = -1.*t6079*t6966;
  t7112 = t6008*t7028;
  t7119 = t7102 + t7112;
  t7138 = t6008*t6966;
  t7169 = t6079*t7028;
  t7196 = t7138 + t7169;
  t7319 = t2977*t36*t2449*t1754;
  t7327 = t847*t2977*t36*t3019;
  t7329 = t7319 + t7327;
  t7339 = t847*t2977*t36*t2449;
  t7345 = -1.*t2977*t36*t1754*t3019;
  t7346 = t7339 + t7345;
  t7366 = -1.*t58*t2977*t2566;
  t7367 = t420*t7329;
  t7373 = t7366 + t7367;
  t7376 = t4834*t7346;
  t7378 = t4720*t7373;
  t7381 = t7376 + t7378;
  t7386 = t4720*t7346;
  t7393 = -1.*t4834*t7373;
  t7394 = t7386 + t7393;
  t7399 = -1.*t6079*t7381;
  t7402 = t6008*t7394;
  t7409 = t7399 + t7402;
  t7413 = t6008*t7381;
  t7416 = t6079*t7394;
  t7426 = t7413 + t7416;
  t7482 = t36*t2449*t1754*t638;
  t7484 = t847*t36*t638*t3019;
  t7486 = t7482 + t7484;
  t7497 = t847*t36*t2449*t638;
  t7500 = -1.*t36*t1754*t638*t3019;
  t7504 = t7497 + t7500;
  t7552 = -1.*t58*t638*t2566;
  t7562 = t420*t7486;
  t7563 = t7552 + t7562;
  t7574 = t4834*t7504;
  t7583 = t4720*t7563;
  t7588 = t7574 + t7583;
  t7594 = t4720*t7504;
  t7608 = -1.*t4834*t7563;
  t7611 = t7594 + t7608;
  t7630 = -1.*t6079*t7588;
  t7632 = t6008*t7611;
  t7637 = t7630 + t7632;
  t7643 = t6008*t7588;
  t7649 = t6079*t7611;
  t7653 = t7643 + t7649;
  t7713 = -1.*t2449*t1754*t2566;
  t7718 = -1.*t847*t2566*t3019;
  t7720 = t7713 + t7718;
  t7733 = -1.*t847*t2449*t2566;
  t7740 = t1754*t2566*t3019;
  t7743 = t7733 + t7740;
  t7765 = -1.*t58*t36;
  t7770 = t420*t7720;
  t7779 = t7765 + t7770;
  t7792 = t4834*t7743;
  t7794 = t4720*t7779;
  t7796 = t7792 + t7794;
  t7801 = t4720*t7743;
  t7806 = -1.*t4834*t7779;
  t7807 = t7801 + t7806;
  t7817 = -1.*t6079*t7796;
  t7820 = t6008*t7807;
  t7828 = t7817 + t7820;
  t7833 = t6008*t7796;
  t7839 = t6079*t7807;
  t7844 = t7833 + t7839;
  t7877 = t2449*t638;
  t7880 = -1.*t2977*t2566*t3019;
  t7881 = t7877 + t7880;
  t7908 = t1754*t7881;
  t7909 = t6771 + t7908;
  t7886 = -1.*t1754*t6598;
  t7888 = t847*t7881;
  t7898 = t7886 + t7888;
  t7927 = t4834*t7898;
  t7930 = t4720*t420*t7909;
  t7932 = t7927 + t7930;
  t7941 = t4720*t7898;
  t7944 = -1.*t420*t4834*t7909;
  t7946 = t7941 + t7944;
  t7956 = -1.*t6079*t7932;
  t7957 = t6008*t7946;
  t7959 = t7956 + t7957;
  t7964 = t6008*t7932;
  t7965 = t6079*t7946;
  t7966 = t7964 + t7965;
  t8023 = t2449*t638*t2566;
  t8029 = -1.*t2977*t3019;
  t8034 = t8023 + t8029;
  t8051 = t847*t8034;
  t8053 = t1754*t3949;
  t8060 = t8051 + t8053;
  t8043 = -1.*t1754*t8034;
  t8045 = t8043 + t4447;
  t8071 = t4834*t8045;
  t8074 = t4720*t420*t8060;
  t8075 = t8071 + t8074;
  t8084 = t4720*t8045;
  t8085 = -1.*t420*t4834*t8060;
  t8086 = t8084 + t8085;
  t8095 = -1.*t6079*t8075;
  t8098 = t6008*t8086;
  t8108 = t8095 + t8098;
  t8110 = t6008*t8075;
  t8111 = t6079*t8086;
  t8116 = t8110 + t8111;
  t8172 = t847*t36*t2449;
  t8174 = -1.*t36*t1754*t3019;
  t8178 = t8172 + t8174;
  t8162 = -1.*t36*t2449*t1754;
  t8163 = -1.*t847*t36*t3019;
  t8170 = t8162 + t8163;
  t8199 = t4834*t8170;
  t8200 = t4720*t420*t8178;
  t8202 = t8199 + t8200;
  t8210 = t4720*t8170;
  t8213 = -1.*t420*t4834*t8178;
  t8214 = t8210 + t8213;
  t8219 = -1.*t6079*t8202;
  t8220 = t6008*t8214;
  t8221 = t8219 + t8220;
  t8225 = t6008*t8202;
  t8227 = t6079*t8214;
  t8239 = t8225 + t8227;
  t8315 = -1.*t847*t6683;
  t8319 = t7886 + t8315;
  t8332 = t4834*t8319;
  t8339 = t4720*t420*t6809;
  t8352 = t8332 + t8339;
  t8356 = t4720*t8319;
  t8363 = -1.*t420*t4834*t6809;
  t8369 = t8356 + t8363;
  t8379 = -1.*t6079*t8352;
  t8387 = t6008*t8369;
  t8389 = t8379 + t8387;
  t8393 = t6008*t8352;
  t8394 = t6079*t8369;
  t8395 = t8393 + t8394;
  t8294 = 0.135*t847;
  t8297 = t8294 + t3635;
  t8304 = 0.07996*t847;
  t8305 = -0.135*t1754;
  t8307 = t8304 + t8305;
  t8440 = t2977*t2449;
  t8442 = t638*t2566*t3019;
  t8453 = t8440 + t8442;
  t8472 = -1.*t1754*t8453;
  t8476 = t8051 + t8472;
  t8462 = -1.*t847*t8453;
  t8466 = t8043 + t8462;
  t8498 = t4834*t8466;
  t8511 = t4720*t420*t8476;
  t8514 = t8498 + t8511;
  t8521 = t4720*t8466;
  t8530 = -1.*t420*t4834*t8476;
  t8532 = t8521 + t8530;
  t8534 = -1.*t6079*t8514;
  t8536 = t6008*t8532;
  t8540 = t8534 + t8536;
  t8544 = t6008*t8514;
  t8546 = t6079*t8532;
  t8549 = t8544 + t8546;
  t8171 = t4951*t8170;
  t8193 = -0.1303*t58*t8178;
  t8195 = t4102*t8178;
  t8198 = t420*t5790*t8178;
  t8204 = t6143*t8202;
  t8218 = t6265*t8214;
  t8222 = t6324*t8221;
  t8243 = t6384*t8239;
  t8245 = t6310*t8221;
  t8253 = t6292*t8239;
  t8254 = t8245 + t8253;
  t8260 = -0.03195*t8254;
  t8262 = t6292*t8221;
  t8267 = -1.*t6310*t8239;
  t8268 = t8262 + t8267;
  t8280 = -0.37414*t8268;
  t6838 = -1.*t2977*t36*t420;
  t6884 = t58*t6732;
  t6897 = t6838 + t6884;
  t8621 = -1.*t6008*t4834*t6897;
  t8622 = -1.*t4720*t6079*t6897;
  t8623 = t8621 + t8622;
  t8636 = t4720*t6008*t6897;
  t8638 = -1.*t4834*t6079*t6897;
  t8639 = t8636 + t8638;
  t8579 = -0.135*t58;
  t8580 = -0.08055*t420;
  t8582 = t8579 + t8580;
  t8588 = 0.08055*t58;
  t8594 = t8588 + t483;
  t8690 = t1754*t8034;
  t8694 = t847*t8453;
  t8696 = t8690 + t8694;
  t8705 = -1.*t36*t420*t638;
  t8707 = t58*t8696;
  t8708 = t8705 + t8707;
  t8719 = -1.*t6008*t4834*t8708;
  t8721 = -1.*t4720*t6079*t8708;
  t8722 = t8719 + t8721;
  t8726 = t4720*t6008*t8708;
  t8731 = -1.*t4834*t6079*t8708;
  t8737 = t8726 + t8731;
  t8783 = t36*t2449*t1754;
  t8785 = t847*t36*t3019;
  t8786 = t8783 + t8785;
  t8805 = t420*t2566;
  t8809 = t58*t8786;
  t8810 = t8805 + t8809;
  t8828 = -1.*t6008*t4834*t8810;
  t8830 = -1.*t4720*t6079*t8810;
  t8831 = t8828 + t8830;
  t8837 = t4720*t6008*t8810;
  t8841 = -1.*t4834*t6079*t8810;
  t8844 = t8837 + t8841;
  t8896 = -1.*t4834*t6809;
  t8897 = -1.*t4720*t6918;
  t8898 = t8896 + t8897;
  t8908 = t6079*t8898;
  t8921 = t8908 + t7112;
  t8923 = t6008*t8898;
  t8930 = -1.*t6079*t7028;
  t8934 = t8923 + t8930;
  t8880 = 0.08055*t4720;
  t8882 = t8880 + t5757;
  t8885 = -0.01004*t4720;
  t8887 = -0.08055*t4834;
  t8890 = t8885 + t8887;
  t8959 = t58*t36*t638;
  t8960 = t420*t8696;
  t8962 = t8959 + t8960;
  t8966 = -1.*t4834*t8476;
  t8967 = -1.*t4720*t8962;
  t8969 = t8966 + t8967;
  t8972 = t4720*t8476;
  t8973 = -1.*t4834*t8962;
  t8976 = t8972 + t8973;
  t8984 = t6079*t8969;
  t8990 = t6008*t8976;
  t8998 = t8984 + t8990;
  t9000 = t6008*t8969;
  t9002 = -1.*t6079*t8976;
  t9003 = t9000 + t9002;
  t9020 = -1.*t58*t2566;
  t9021 = t420*t8786;
  t9026 = t9020 + t9021;
  t9029 = -1.*t4834*t8178;
  t9032 = -1.*t4720*t9026;
  t9035 = t9029 + t9032;
  t9037 = t4720*t8178;
  t9039 = -1.*t4834*t9026;
  t9042 = t9037 + t9039;
  t9045 = t6079*t9035;
  t9048 = t6008*t9042;
  t9050 = t9045 + t9048;
  t9052 = t6008*t9035;
  t9053 = -1.*t6079*t9042;
  t9056 = t9052 + t9053;
  t9082 = -1.*t6008*t6966;
  t9083 = t9082 + t8930;
  t7250 = t6292*t7119;
  t9073 = -0.13004*t6008;
  t9074 = -0.08055*t6079;
  t9075 = t9073 + t9074;
  t9078 = 0.08055*t6008;
  t9079 = t9078 + t6088;
  t9104 = t4834*t8476;
  t9105 = t4720*t8962;
  t9107 = t9104 + t9105;
  t9114 = -1.*t6079*t9107;
  t9117 = t9114 + t8990;
  t9119 = -1.*t6008*t9107;
  t9122 = t9119 + t9002;
  t9145 = t4834*t8178;
  t9151 = t4720*t9026;
  t9158 = t9145 + t9151;
  t9171 = -1.*t6079*t9158;
  t9173 = t9171 + t9048;
  t9178 = -1.*t6008*t9158;
  t9182 = t9178 + t9053;
  t9087 = -1.*t6310*t7119;
  t7282 = -1.*t6310*t7196;
  t7288 = t7250 + t7282;
  t9209 = 0.03315*t6292;
  t9212 = t9209 + t6381;
  t9217 = -0.19074*t6292;
  t9218 = -0.03315*t6310;
  t9221 = t9217 + t9218;
  t9126 = -1.*t6310*t9117;
  t9232 = t6008*t9107;
  t9234 = t6079*t8976;
  t9237 = t9232 + t9234;
  t9138 = t6292*t9117;
  t9188 = -1.*t6310*t9173;
  t9258 = t6008*t9158;
  t9260 = t6079*t9042;
  t9261 = t9258 + t9260;
  t9196 = t6292*t9173;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1998*t3241 + t3691*t3949 + t4102*t4609 + t4951*t5270 + t5790*t5918 + t6143*t6194 + t6265*t6286 + t6324*t6343 - 1.*t36*t582*t638 - 0.1303*(t4609*t58 + t36*t420*t638) + t6384*t6476 - 0.03195*(t6310*t6343 + t6292*t6476) - 0.37414*(t6292*t6343 - 1.*t6310*t6476);
  p_output1[10]=t2977*t36*t582 + t1998*t6598 + t3691*t6683 + t4102*t6732 + t4951*t6809 - 0.1303*t6897 + t5790*t6918 + t6143*t6966 + t6265*t7028 + t6324*t7119 + t6384*t7196 - 0.03195*(t6310*t7119 + t6292*t7196) - 0.37414*t7288;
  p_output1[11]=0;
  p_output1[12]=t1998*t2449*t2977*t36 + t2977*t3019*t36*t3691 - 1.*t2566*t2977*t582 + t4102*t7329 - 0.1303*(t2566*t2977*t420 + t58*t7329) + t4951*t7346 + t5790*t7373 + t6143*t7381 + t6265*t7394 + t6324*t7409 + t6384*t7426 - 0.03195*(t6310*t7409 + t6292*t7426) - 0.37414*(t6292*t7409 - 1.*t6310*t7426);
  p_output1[13]=t1998*t2449*t36*t638 + t3019*t36*t3691*t638 - 1.*t2566*t582*t638 + t4102*t7486 - 0.1303*(t2566*t420*t638 + t58*t7486) + t4951*t7504 + t5790*t7563 + t6143*t7588 + t6265*t7611 + t6324*t7637 + t6384*t7653 - 0.03195*(t6310*t7637 + t6292*t7653) - 0.37414*(t6292*t7637 - 1.*t6310*t7653);
  p_output1[14]=-1.*t1998*t2449*t2566 - 1.*t2566*t3019*t3691 - 1.*t36*t582 + t4102*t7720 - 0.1303*(t36*t420 + t58*t7720) + t4951*t7743 + t5790*t7779 + t6143*t7796 + t6265*t7807 + t6324*t7828 + t6384*t7844 - 0.03195*(t6310*t7828 + t6292*t7844) - 0.37414*(t6292*t7828 - 1.*t6310*t7844);
  p_output1[15]=t3691*t6598 + t1998*t7881 + t4951*t7898 + t4102*t7909 + t420*t5790*t7909 - 0.1303*t58*t7909 + t6143*t7932 + t6265*t7946 + t6324*t7959 + t6384*t7966 - 0.03195*(t6310*t7959 + t6292*t7966) - 0.37414*(t6292*t7959 - 1.*t6310*t7966);
  p_output1[16]=t1998*t3949 + t3691*t8034 + t4951*t8045 + t4102*t8060 + t420*t5790*t8060 - 0.1303*t58*t8060 + t6143*t8075 + t6265*t8086 + t6324*t8108 + t6384*t8116 - 0.03195*(t6310*t8108 + t6292*t8116) - 0.37414*(t6292*t8108 - 1.*t6310*t8116);
  p_output1[17]=-1.*t1998*t3019*t36 + t2449*t36*t3691 + t8171 + t8193 + t8195 + t8198 + t8204 + t8218 + t8222 + t8243 + t8260 + t8280;
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
  p_output1[39]=t4102*t6809 + t420*t5790*t6809 - 0.1303*t58*t6809 + t6598*t8297 + t6683*t8307 + t4951*t8319 + t6143*t8352 + t6265*t8369 + t6324*t8389 + t6384*t8395 - 0.03195*(t6310*t8389 + t6292*t8395) - 0.37414*(t6292*t8389 - 1.*t6310*t8395);
  p_output1[40]=t8034*t8297 + t8307*t8453 + t4951*t8466 + t4102*t8476 + t420*t5790*t8476 - 0.1303*t58*t8476 + t6143*t8514 + t6265*t8532 + t6324*t8540 + t6384*t8549 - 0.03195*(t6310*t8540 + t6292*t8549) - 0.37414*(t6292*t8540 - 1.*t6310*t8549);
  p_output1[41]=t8171 + t8193 + t8195 + t8198 + t8204 + t8218 + t8222 + t8243 + t8260 + t8280 + t2449*t36*t8297 + t3019*t36*t8307;
  p_output1[42]=-0.1303*(-1.*t2977*t36*t58 - 1.*t420*t6732) + t5790*t6897 + t4720*t6143*t6897 - 1.*t4834*t6265*t6897 + t2977*t36*t8582 + t6732*t8594 + t6324*t8623 + t6384*t8639 - 0.03195*(t6310*t8623 + t6292*t8639) - 0.37414*(t6292*t8623 - 1.*t6310*t8639);
  p_output1[43]=t36*t638*t8582 + t8594*t8696 - 0.1303*(t5828 - 1.*t420*t8696) + t5790*t8708 + t4720*t6143*t8708 - 1.*t4834*t6265*t8708 + t6324*t8722 + t6384*t8737 - 0.03195*(t6310*t8722 + t6292*t8737) - 0.37414*(t6292*t8722 - 1.*t6310*t8737);
  p_output1[44]=-1.*t2566*t8582 + t8594*t8786 - 0.1303*(t2566*t58 - 1.*t420*t8786) + t5790*t8810 + t4720*t6143*t8810 - 1.*t4834*t6265*t8810 + t6324*t8831 + t6384*t8844 - 0.03195*(t6310*t8831 + t6292*t8844) - 0.37414*(t6292*t8831 - 1.*t6310*t8844);
  p_output1[45]=t6143*t7028 + t6809*t8882 + t6918*t8890 + t6265*t8898 + t6384*t8921 + t6324*t8934 - 0.37414*(-1.*t6310*t8921 + t6292*t8934) - 0.03195*(t6292*t8921 + t6310*t8934);
  p_output1[46]=t8476*t8882 + t8890*t8962 + t6265*t8969 + t6143*t8976 + t6384*t8998 + t6324*t9003 - 0.37414*(-1.*t6310*t8998 + t6292*t9003) - 0.03195*(t6292*t8998 + t6310*t9003);
  p_output1[47]=t8178*t8882 + t8890*t9026 + t6265*t9035 + t6143*t9042 + t6384*t9050 + t6324*t9056 - 0.37414*(-1.*t6310*t9050 + t6292*t9056) - 0.03195*(t6292*t9050 + t6310*t9056);
  p_output1[48]=t6384*t7119 + t6966*t9075 + t7028*t9079 + t6324*t9083 - 0.03195*(t7250 + t6310*t9083) - 0.37414*(t6292*t9083 + t9087);
  p_output1[49]=t8976*t9079 + t9075*t9107 + t6384*t9117 + t6324*t9122 - 0.37414*(t6292*t9122 + t9126) - 0.03195*(t6310*t9122 + t9138);
  p_output1[50]=t9042*t9079 + t9075*t9158 + t6384*t9173 + t6324*t9182 - 0.37414*(t6292*t9182 + t9188) - 0.03195*(t6310*t9182 + t9196);
  p_output1[51]=-0.03195*t7288 - 0.37414*(-1.*t6292*t7196 + t9087) + t7119*t9212 + t7196*t9221;
  p_output1[52]=t9117*t9212 + t9221*t9237 - 0.37414*(t9126 - 1.*t6292*t9237) - 0.03195*(t9138 - 1.*t6310*t9237);
  p_output1[53]=t9173*t9212 + t9221*t9261 - 0.37414*(t9188 - 1.*t6292*t9261) - 0.03195*(t9196 - 1.*t6310*t9261);
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

#include "Jp_RightShin_mex.hh"

namespace SymExpression
{

void Jp_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
