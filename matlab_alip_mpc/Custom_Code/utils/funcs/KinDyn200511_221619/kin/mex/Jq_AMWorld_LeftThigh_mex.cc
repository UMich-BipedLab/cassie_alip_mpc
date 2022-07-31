/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:56 GMT-04:00
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
  double t827;
  double t1468;
  double t1591;
  double t789;
  double t1643;
  double t762;
  double t139;
  double t2640;
  double t3264;
  double t4933;
  double t3174;
  double t3471;
  double t3481;
  double t4311;
  double t4549;
  double t5405;
  double t5411;
  double t5453;
  double t5751;
  double t5783;
  double t5795;
  double t5858;
  double t5877;
  double t6022;
  double t6095;
  double t6163;
  double t6195;
  double t6197;
  double t6510;
  double t6521;
  double t6487;
  double t6489;
  double t6558;
  double t6560;
  double t6538;
  double t6568;
  double t6598;
  double t6605;
  double t6629;
  double t6678;
  double t1175;
  double t1717;
  double t1943;
  double t2158;
  double t2346;
  double t2350;
  double t2540;
  double t2756;
  double t2904;
  double t4284;
  double t4574;
  double t4882;
  double t4913;
  double t4954;
  double t5161;
  double t5162;
  double t5288;
  double t5310;
  double t5352;
  double t5356;
  double t5358;
  double t5361;
  double t5394;
  double t5498;
  double t5711;
  double t5786;
  double t6162;
  double t6246;
  double t6257;
  double t6279;
  double t6318;
  double t6335;
  double t6342;
  double t6356;
  double t6397;
  double t6428;
  double t6445;
  double t6477;
  double t6496;
  double t6522;
  double t6533;
  double t6599;
  double t6684;
  double t6687;
  double t6705;
  double t6731;
  double t6737;
  double t6739;
  double t6751;
  double t6755;
  double t6768;
  double t6772;
  double t6786;
  double t6870;
  double t6874;
  double t6899;
  double t6856;
  double t6860;
  double t6864;
  double t5396;
  double t6482;
  double t6788;
  double t6844;
  double t7071;
  double t7080;
  double t7083;
  double t7097;
  double t7107;
  double t7117;
  double t7129;
  double t7136;
  double t7137;
  double t6962;
  double t6966;
  double t6991;
  double t6993;
  double t7187;
  double t7189;
  double t7190;
  double t7159;
  double t7162;
  double t7169;
  double t7027;
  double t7028;
  double t7040;
  double t7042;
  double t7139;
  double t7142;
  double t7149;
  double t7175;
  double t7191;
  double t7192;
  double t7218;
  double t7219;
  double t7220;
  double t7224;
  double t7226;
  double t7231;
  double t7240;
  double t7243;
  double t7245;
  double t7194;
  double t7200;
  double t7201;
  double t7289;
  double t7296;
  double t7298;
  double t7317;
  double t7321;
  double t7323;
  double t7309;
  double t7312;
  double t7313;
  double t7222;
  double t7237;
  double t7246;
  double t7247;
  double t7347;
  double t7348;
  double t7349;
  double t7350;
  double t7353;
  double t7355;
  double t7359;
  double t7361;
  double t7362;
  double t7250;
  double t7252;
  double t7255;
  double t7256;
  double t7390;
  double t7391;
  double t7392;
  double t7377;
  double t7382;
  double t7384;
  double t7262;
  double t7272;
  double t7273;
  double t7276;
  double t7416;
  double t7419;
  double t7420;
  double t7444;
  double t7446;
  double t7447;
  double t7435;
  double t7436;
  double t7441;
  double t7491;
  double t7503;
  double t7505;
  double t7520;
  double t7521;
  double t7523;
  double t7516;
  double t7517;
  double t7518;
  double t7545;
  double t7558;
  double t7566;
  double t7588;
  double t7589;
  double t7593;
  double t7575;
  double t7582;
  double t7583;
  double t7610;
  double t7612;
  double t7613;
  double t7614;
  double t7624;
  double t7626;
  double t7630;
  double t7634;
  double t7643;
  double t7644;
  double t7651;
  double t7652;
  double t7654;
  double t7655;
  double t7660;
  double t7661;
  double t7662;
  double t7664;
  double t7665;
  double t7666;
  double t7667;
  double t7708;
  double t7710;
  double t7712;
  double t7720;
  double t7721;
  double t7739;
  double t7742;
  double t7749;
  double t7364;
  double t7371;
  double t7374;
  double t7632;
  double t7658;
  double t7669;
  double t7674;
  double t7386;
  double t7394;
  double t7396;
  double t7680;
  double t7681;
  double t7682;
  double t7684;
  double t7403;
  double t7404;
  double t7405;
  double t7691;
  double t7698;
  double t7702;
  double t7706;
  double t7775;
  double t7785;
  double t7789;
  double t7790;
  double t7509;
  double t7512;
  double t7513;
  double t7519;
  double t7526;
  double t7529;
  double t7536;
  double t7538;
  double t7542;
  double t7812;
  double t7813;
  double t7823;
  double t7872;
  double t7873;
  double t7895;
  double t7903;
  double t7959;
  double t7965;
  double t7966;
  double t7967;
  double t7842;
  double t7845;
  double t7846;
  double t7849;
  double t7850;
  double t7851;
  double t7852;
  double t7853;
  double t7856;
  double t7896;
  double t7918;
  double t7925;
  double t7928;
  double t7930;
  double t7931;
  double t7932;
  double t7937;
  double t7946;
  double t7962;
  double t7968;
  double t7969;
  double t7970;
  double t7971;
  double t7972;
  double t7973;
  double t7974;
  double t7975;
  double t8030;
  double t8044;
  double t7867;
  double t7953;
  double t7976;
  double t7977;
  double t7980;
  double t7981;
  double t7982;
  double t7985;
  double t7987;
  double t7988;
  double t7992;
  double t7994;
  double t8105;
  double t8112;
  double t7810;
  double t7811;
  double t7825;
  double t7826;
  double t7827;
  double t7828;
  double t7829;
  double t7830;
  double t7836;
  double t8190;
  double t8195;
  double t8204;
  double t8209;
  double t8219;
  double t8226;
  double t8232;
  double t8240;
  double t8246;
  double t8250;
  double t8252;
  double t8261;
  double t8265;
  double t8273;
  double t8289;
  double t8290;
  double t8291;
  double t8296;
  double t8298;
  double t8300;
  double t8309;
  double t8313;
  double t8315;
  double t8320;
  double t8326;
  double t8331;
  double t8334;
  double t8339;
  double t8351;
  double t8359;
  double t8407;
  double t8410;
  double t8416;
  double t8419;
  double t8431;
  double t8440;
  double t8443;
  double t8444;
  double t8446;
  double t8465;
  double t8478;
  double t8543;
  double t8544;
  double t8546;
  double t8279;
  double t8338;
  double t8485;
  double t8490;
  double t8510;
  double t8521;
  double t8525;
  double t8527;
  double t8531;
  double t8532;
  double t8535;
  double t8539;
  double t3291;
  double t8576;
  double t8581;
  double t8601;
  double t8604;
  double t8605;
  double t8617;
  double t8620;
  double t8621;
  double t8627;
  double t8632;
  double t8634;
  double t8666;
  double t8670;
  double t8672;
  double t8676;
  double t8679;
  double t8681;
  double t8611;
  double t8614;
  double t8616;
  double t8623;
  double t8635;
  double t8636;
  double t8639;
  double t8642;
  double t8644;
  double t8645;
  double t8646;
  double t8647;
  double t8648;
  double t8649;
  double t8653;
  double t8661;
  double t8662;
  double t8663;
  double t8675;
  double t8682;
  double t8684;
  double t8685;
  double t8688;
  double t8690;
  double t8692;
  double t8694;
  double t8697;
  double t8701;
  double t8703;
  double t8705;
  double t8654;
  double t8706;
  double t8709;
  double t8711;
  double t8713;
  double t8715;
  double t8719;
  double t8721;
  double t8722;
  t827 = Cos(var1[5]);
  t1468 = Sin(var1[3]);
  t1591 = Sin(var1[4]);
  t789 = Cos(var1[3]);
  t1643 = Sin(var1[5]);
  t762 = Cos(var1[6]);
  t139 = Cos(var1[7]);
  t2640 = Sin(var1[6]);
  t3264 = Sin(var1[7]);
  t4933 = 0. + t3264;
  t3174 = Cos(var1[4]);
  t3471 = -1.*t762*t139;
  t3481 = 0. + t3471;
  t4311 = -1.*t139*t2640;
  t4549 = 0. + t4311;
  t5405 = Cos(var1[8]);
  t5411 = t139*t5405;
  t5453 = 0. + t5411;
  t5751 = Sin(var1[8]);
  t5783 = 0. + t5751;
  t5795 = t5405*t3264;
  t5858 = 0. + t5795;
  t5877 = t2640*t5858;
  t6022 = t762*t5783;
  t6095 = 0. + t5877 + t6022;
  t6163 = t762*t5858;
  t6195 = -1.*t2640*t5783;
  t6197 = 0. + t6163 + t6195;
  t6510 = t139*t5751;
  t6521 = 0. + t6510;
  t6487 = -1.*t5405;
  t6489 = 0. + t6487;
  t6558 = t3264*t5751;
  t6560 = 0. + t6558;
  t6538 = -1.*t6489*t2640;
  t6568 = t762*t6560;
  t6598 = 0. + t6538 + t6568;
  t6605 = t762*t6489;
  t6629 = t2640*t6560;
  t6678 = 0. + t6605 + t6629;
  t1175 = -1.*t789*t827;
  t1717 = -1.*t1468*t1591*t1643;
  t1943 = t1175 + t1717;
  t2158 = t762*t1943;
  t2346 = -1.*t827*t1468*t1591;
  t2350 = t789*t1643;
  t2540 = t2346 + t2350;
  t2756 = t2540*t2640;
  t2904 = t2158 + t2756;
  t4284 = t827*t3481;
  t4574 = -1.*t1643*t4549;
  t4882 = 0. + t4284 + t4574;
  t4913 = var2[4]*t4882;
  t4954 = var2[5]*t4933;
  t5161 = var2[6]*t4933;
  t5162 = t3481*t1643;
  t5288 = t827*t4549;
  t5310 = 0. + t5162 + t5288;
  t5352 = t3174*t5310;
  t5356 = -1.*t1591*t4933;
  t5358 = 0. + t5352 + t5356;
  t5361 = var2[3]*t5358;
  t5394 = 0. + var2[8] + t4913 + t4954 + t5161 + t5361;
  t5498 = var2[5]*t5453;
  t5711 = var2[6]*t5453;
  t5786 = var2[7]*t5783;
  t6162 = -1.*t1643*t6095;
  t6246 = t827*t6197;
  t6257 = 0. + t6162 + t6246;
  t6279 = var2[4]*t6257;
  t6318 = -1.*t5453*t1591;
  t6335 = t827*t6095;
  t6342 = t1643*t6197;
  t6356 = 0. + t6335 + t6342;
  t6397 = t3174*t6356;
  t6428 = 0. + t6318 + t6397;
  t6445 = var2[3]*t6428;
  t6477 = 0. + t5498 + t5711 + t5786 + t6279 + t6445;
  t6496 = var2[7]*t6489;
  t6522 = var2[5]*t6521;
  t6533 = var2[6]*t6521;
  t6599 = t827*t6598;
  t6684 = -1.*t1643*t6678;
  t6687 = 0. + t6599 + t6684;
  t6705 = var2[4]*t6687;
  t6731 = -1.*t1591*t6521;
  t6737 = t1643*t6598;
  t6739 = t827*t6678;
  t6751 = 0. + t6737 + t6739;
  t6755 = t3174*t6751;
  t6768 = 0. + t6731 + t6755;
  t6772 = var2[3]*t6768;
  t6786 = 0. + t6496 + t6522 + t6533 + t6705 + t6772;
  t6870 = t762*t2540;
  t6874 = -1.*t1943*t2640;
  t6899 = t6870 + t6874;
  t6856 = -1.*t3174*t139*t1468;
  t6860 = t2904*t3264;
  t6864 = t6856 + t6860;
  t5396 = 0.0498*t5394;
  t6482 = -0.000019*t6477;
  t6788 = -0.0117*t6786;
  t6844 = t5396 + t6482 + t6788;
  t7071 = -1.*t827*t1468;
  t7080 = t789*t1591*t1643;
  t7083 = t7071 + t7080;
  t7097 = t762*t7083;
  t7107 = t789*t827*t1591;
  t7117 = t1468*t1643;
  t7129 = t7107 + t7117;
  t7136 = t7129*t2640;
  t7137 = t7097 + t7136;
  t6962 = -0.000019*t5394;
  t6966 = 0.0563*t6477;
  t6991 = 0.000284*t6786;
  t6993 = t6962 + t6966 + t6991;
  t7187 = t762*t7129;
  t7189 = -1.*t7083*t2640;
  t7190 = t7187 + t7189;
  t7159 = t789*t3174*t139;
  t7162 = t7137*t3264;
  t7169 = t7159 + t7162;
  t7027 = -0.0117*t5394;
  t7028 = 0.000284*t6477;
  t7040 = 0.018*t6786;
  t7042 = t7027 + t7028 + t7040;
  t7139 = -1.*t139*t7137;
  t7142 = t789*t3174*t3264;
  t7149 = t7139 + t7142;
  t7175 = t5405*t7169;
  t7191 = t7190*t5751;
  t7192 = t7175 + t7191;
  t7218 = -1.*t1591*t5310;
  t7219 = -1.*t3174*t4933;
  t7220 = t7218 + t7219;
  t7224 = -1.*t3174*t5453;
  t7226 = -1.*t1591*t6356;
  t7231 = t7224 + t7226;
  t7240 = -1.*t3174*t6521;
  t7243 = -1.*t1591*t6751;
  t7245 = t7240 + t7243;
  t7194 = -1.*t5405*t7190;
  t7200 = t7169*t5751;
  t7201 = t7194 + t7200;
  t7289 = t789*t3174*t762*t1643;
  t7296 = t789*t3174*t827*t2640;
  t7298 = t7289 + t7296;
  t7317 = t789*t3174*t827*t762;
  t7321 = -1.*t789*t3174*t1643*t2640;
  t7323 = t7317 + t7321;
  t7309 = -1.*t789*t139*t1591;
  t7312 = t7298*t3264;
  t7313 = t7309 + t7312;
  t7222 = 0.0498*var2[3]*t7220;
  t7237 = -0.000019*var2[3]*t7231;
  t7246 = -0.0117*var2[3]*t7245;
  t7247 = t7222 + t7237 + t7246;
  t7347 = t789*t827;
  t7348 = t1468*t1591*t1643;
  t7349 = t7347 + t7348;
  t7350 = t762*t7349;
  t7353 = t827*t1468*t1591;
  t7355 = -1.*t789*t1643;
  t7359 = t7353 + t7355;
  t7361 = t7359*t2640;
  t7362 = t7350 + t7361;
  t7250 = -0.000019*var2[3]*t7220;
  t7252 = 0.0563*var2[3]*t7231;
  t7255 = 0.000284*var2[3]*t7245;
  t7256 = t7250 + t7252 + t7255;
  t7390 = t762*t7359;
  t7391 = -1.*t7349*t2640;
  t7392 = t7390 + t7391;
  t7377 = t3174*t139*t1468;
  t7382 = t7362*t3264;
  t7384 = t7377 + t7382;
  t7262 = -0.0117*var2[3]*t7220;
  t7272 = 0.000284*var2[3]*t7231;
  t7273 = 0.018*var2[3]*t7245;
  t7276 = t7262 + t7272 + t7273;
  t7416 = t3174*t762*t1468*t1643;
  t7419 = t3174*t827*t1468*t2640;
  t7420 = t7416 + t7419;
  t7444 = t3174*t827*t762*t1468;
  t7446 = -1.*t3174*t1468*t1643*t2640;
  t7447 = t7444 + t7446;
  t7435 = -1.*t139*t1468*t1591;
  t7436 = t7420*t3264;
  t7441 = t7435 + t7436;
  t7491 = t3174*t762*t1643;
  t7503 = t3174*t827*t2640;
  t7505 = t7491 + t7503;
  t7520 = t3174*t827*t762;
  t7521 = -1.*t3174*t1643*t2640;
  t7523 = t7520 + t7521;
  t7516 = -1.*t139*t1591;
  t7517 = t7505*t3264;
  t7518 = t7516 + t7517;
  t7545 = -1.*t762*t1591*t1643;
  t7558 = -1.*t827*t1591*t2640;
  t7566 = t7545 + t7558;
  t7588 = -1.*t827*t762*t1591;
  t7589 = t1591*t1643*t2640;
  t7593 = t7588 + t7589;
  t7575 = -1.*t3174*t139;
  t7582 = t7566*t3264;
  t7583 = t7575 + t7582;
  t7610 = -1.*t3481*t1643;
  t7612 = -1.*t827*t4549;
  t7613 = t7610 + t7612;
  t7614 = var2[4]*t7613;
  t7624 = t4284 + t4574;
  t7626 = var2[3]*t3174*t7624;
  t7630 = t7614 + t7626;
  t7634 = t6162 + t6246;
  t7643 = var2[3]*t3174*t7634;
  t7644 = -1.*t827*t6095;
  t7651 = -1.*t1643*t6197;
  t7652 = t7644 + t7651;
  t7654 = var2[4]*t7652;
  t7655 = t7643 + t7654;
  t7660 = -1.*t1643*t6598;
  t7661 = -1.*t827*t6678;
  t7662 = t7660 + t7661;
  t7664 = var2[4]*t7662;
  t7665 = t6599 + t6684;
  t7666 = var2[3]*t3174*t7665;
  t7667 = t7664 + t7666;
  t7708 = t827*t1468;
  t7710 = -1.*t789*t1591*t1643;
  t7712 = t7708 + t7710;
  t7720 = t7712*t2640;
  t7721 = t7187 + t7720;
  t7739 = t762*t7712;
  t7742 = -1.*t7129*t2640;
  t7749 = t7739 + t7742;
  t7364 = -1.*t139*t7362;
  t7371 = t3174*t1468*t3264;
  t7374 = t7364 + t7371;
  t7632 = 0.0498*t7630;
  t7658 = -0.000019*t7655;
  t7669 = -0.0117*t7667;
  t7674 = t7632 + t7658 + t7669;
  t7386 = t5405*t7384;
  t7394 = t7392*t5751;
  t7396 = t7386 + t7394;
  t7680 = -0.000019*t7630;
  t7681 = 0.0563*t7655;
  t7682 = 0.000284*t7667;
  t7684 = t7680 + t7681 + t7682;
  t7403 = -1.*t5405*t7392;
  t7404 = t7384*t5751;
  t7405 = t7403 + t7404;
  t7691 = -0.0117*t7630;
  t7698 = 0.000284*t7655;
  t7702 = 0.018*t7667;
  t7706 = t7691 + t7698 + t7702;
  t7775 = t1943*t2640;
  t7785 = t7390 + t7775;
  t7789 = -1.*t7359*t2640;
  t7790 = t2158 + t7789;
  t7509 = -1.*t139*t7505;
  t7512 = -1.*t1591*t3264;
  t7513 = t7509 + t7512;
  t7519 = t5405*t7518;
  t7526 = t7523*t5751;
  t7529 = t7519 + t7526;
  t7536 = -1.*t5405*t7523;
  t7538 = t7518*t5751;
  t7542 = t7536 + t7538;
  t7812 = -1.*t3174*t762*t1643;
  t7813 = -1.*t3174*t827*t2640;
  t7823 = t7812 + t7813;
  t7872 = -1.*t2640*t5858;
  t7873 = -1.*t762*t5783;
  t7895 = t7872 + t7873;
  t7903 = t6163 + t6195;
  t7959 = t6538 + t6568;
  t7965 = -1.*t762*t6489;
  t7966 = -1.*t2640*t6560;
  t7967 = t7965 + t7966;
  t7842 = t762*t139*t1643;
  t7845 = t827*t139*t2640;
  t7846 = t7842 + t7845;
  t7849 = var2[4]*t7846;
  t7850 = -1.*t827*t762*t139;
  t7851 = t139*t1643*t2640;
  t7852 = t7850 + t7851;
  t7853 = var2[3]*t3174*t7852;
  t7856 = t7849 + t7853;
  t7896 = t1643*t7895;
  t7918 = t827*t7903;
  t7925 = t7896 + t7918;
  t7928 = var2[3]*t3174*t7925;
  t7930 = t827*t7895;
  t7931 = -1.*t1643*t7903;
  t7932 = t7930 + t7931;
  t7937 = var2[4]*t7932;
  t7946 = t7928 + t7937;
  t7962 = -1.*t1643*t7959;
  t7968 = t827*t7967;
  t7969 = t7962 + t7968;
  t7970 = var2[4]*t7969;
  t7971 = t827*t7959;
  t7972 = t1643*t7967;
  t7973 = t7971 + t7972;
  t7974 = var2[3]*t3174*t7973;
  t7975 = t7970 + t7974;
  t8030 = -1.*t762*t7083;
  t8044 = t8030 + t7742;
  t7867 = 0.0498*t7856;
  t7953 = -0.000019*t7946;
  t7976 = -0.0117*t7975;
  t7977 = t7867 + t7953 + t7976;
  t7980 = -0.000019*t7856;
  t7981 = 0.0563*t7946;
  t7982 = 0.000284*t7975;
  t7985 = t7980 + t7981 + t7982;
  t7987 = -0.0117*t7856;
  t7988 = 0.000284*t7946;
  t7992 = 0.018*t7975;
  t7994 = t7987 + t7988 + t7992;
  t8105 = -1.*t762*t7349;
  t8112 = t8105 + t7789;
  t7810 = -1.*t139*t7523*t6844;
  t7811 = t5405*t7523*t3264;
  t7825 = t7823*t5751;
  t7826 = t7811 + t7825;
  t7827 = t7826*t6993;
  t7828 = -1.*t5405*t7823;
  t7829 = t7523*t3264*t5751;
  t7830 = t7828 + t7829;
  t7836 = t7830*t7042;
  t8190 = t827*t762*t139*t5405;
  t8195 = -1.*t139*t5405*t1643*t2640;
  t8204 = t8190 + t8195;
  t8209 = var2[4]*t8204;
  t8219 = -1.*var2[5]*t5405*t3264;
  t8226 = -1.*var2[6]*t5405*t3264;
  t8232 = t762*t139*t5405*t1643;
  t8240 = t827*t139*t5405*t2640;
  t8246 = t8232 + t8240;
  t8250 = t3174*t8246;
  t8252 = t5405*t1591*t3264;
  t8261 = t8250 + t8252;
  t8265 = var2[3]*t8261;
  t8273 = t8209 + t8219 + t8226 + t8265;
  t8289 = var2[5]*t139;
  t8290 = var2[6]*t139;
  t8291 = t827*t762*t3264;
  t8296 = -1.*t1643*t2640*t3264;
  t8298 = t8291 + t8296;
  t8300 = var2[4]*t8298;
  t8309 = t762*t1643*t3264;
  t8313 = t827*t2640*t3264;
  t8315 = t8309 + t8313;
  t8320 = t3174*t8315;
  t8326 = t7516 + t8320;
  t8331 = var2[3]*t8326;
  t8334 = t8289 + t8290 + t8300 + t8331;
  t8339 = -1.*var2[5]*t3264*t5751;
  t8351 = -1.*var2[6]*t3264*t5751;
  t8359 = t827*t762*t139*t5751;
  t8407 = -1.*t139*t1643*t2640*t5751;
  t8410 = t8359 + t8407;
  t8416 = var2[4]*t8410;
  t8419 = t1591*t3264*t5751;
  t8431 = t762*t139*t1643*t5751;
  t8440 = t827*t139*t2640*t5751;
  t8443 = t8431 + t8440;
  t8444 = t3174*t8443;
  t8446 = t8419 + t8444;
  t8465 = var2[3]*t8446;
  t8478 = t8339 + t8351 + t8416 + t8465;
  t8543 = t139*t7137;
  t8544 = -1.*t789*t3174*t3264;
  t8546 = t8543 + t8544;
  t8279 = -0.000019*t8273;
  t8338 = 0.0498*t8334;
  t8485 = -0.0117*t8478;
  t8490 = t8279 + t8338 + t8485;
  t8510 = 0.0563*t8273;
  t8521 = -0.000019*t8334;
  t8525 = 0.000284*t8478;
  t8527 = t8510 + t8521 + t8525;
  t8531 = 0.000284*t8273;
  t8532 = -0.0117*t8334;
  t8535 = 0.018*t8478;
  t8539 = t8531 + t8532 + t8535;
  t3291 = -1.*t3174*t1468*t3264;
  t8576 = t139*t7362;
  t8581 = t8576 + t3291;
  t8601 = t139*t7505;
  t8604 = t1591*t3264;
  t8605 = t8601 + t8604;
  t8617 = t5405*t2640*t3264;
  t8620 = t762*t5751;
  t8621 = t8617 + t8620;
  t8627 = t762*t5405*t3264;
  t8632 = -1.*t2640*t5751;
  t8634 = t8627 + t8632;
  t8666 = -1.*t5405*t2640;
  t8670 = -1.*t762*t3264*t5751;
  t8672 = t8666 + t8670;
  t8676 = t762*t5405;
  t8679 = -1.*t2640*t3264*t5751;
  t8681 = t8676 + t8679;
  t8611 = var2[5]*t139*t5405;
  t8614 = var2[6]*t139*t5405;
  t8616 = var2[7]*t5751;
  t8623 = -1.*t1643*t8621;
  t8635 = t827*t8634;
  t8636 = t8623 + t8635;
  t8639 = var2[4]*t8636;
  t8642 = -1.*t139*t5405*t1591;
  t8644 = t827*t8621;
  t8645 = t1643*t8634;
  t8646 = t8644 + t8645;
  t8647 = t3174*t8646;
  t8648 = t8642 + t8647;
  t8649 = var2[3]*t8648;
  t8653 = t8611 + t8614 + t8616 + t8639 + t8649;
  t8661 = var2[7]*t5405;
  t8662 = -1.*var2[5]*t139*t5751;
  t8663 = -1.*var2[6]*t139*t5751;
  t8675 = t827*t8672;
  t8682 = -1.*t1643*t8681;
  t8684 = t8675 + t8682;
  t8685 = var2[4]*t8684;
  t8688 = t139*t1591*t5751;
  t8690 = t1643*t8672;
  t8692 = t827*t8681;
  t8694 = t8690 + t8692;
  t8697 = t3174*t8694;
  t8701 = t8688 + t8697;
  t8703 = var2[3]*t8701;
  t8705 = t8661 + t8662 + t8663 + t8685 + t8703;
  t8654 = -0.0117*t8653;
  t8706 = -0.000019*t8705;
  t8709 = t8654 + t8706;
  t8711 = 0.018*t8653;
  t8713 = 0.000284*t8705;
  t8715 = t8711 + t8713;
  t8719 = 0.000284*t8653;
  t8721 = 0.0563*t8705;
  t8722 = t8719 + t8721;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t139*t2904 + t3291)*t6844 + (t5405*t6864 + t5751*t6899)*t6993 + (t5751*t6864 - 1.*t5405*t6899)*t7042;
  p_output1[10]=t6844*t7149 + t6993*t7192 + t7042*t7201;
  p_output1[11]=0;
  p_output1[12]=t7149*t7247 + t7192*t7256 + t7201*t7276 + t7042*(t5751*t7313 - 1.*t5405*t7323) + t6993*(t5405*t7313 + t5751*t7323) + t6844*(-1.*t139*t7298 - 1.*t1591*t3264*t789);
  p_output1[13]=t7247*t7374 + t7256*t7396 + t7276*t7405 + t6844*(-1.*t1468*t1591*t3264 - 1.*t139*t7420) + t7042*(t5751*t7441 - 1.*t5405*t7447) + t6993*(t5405*t7441 + t5751*t7447);
  p_output1[14]=t7247*t7513 + t7256*t7529 + t7276*t7542 + t6844*(-1.*t3174*t3264 - 1.*t139*t7566) + t7042*(t5751*t7583 - 1.*t5405*t7593) + t6993*(t5405*t7583 + t5751*t7593);
  p_output1[15]=t7149*t7674 + t7192*t7684 + t7201*t7706 - 1.*t139*t6844*t7721 + t7042*(t3264*t5751*t7721 - 1.*t5405*t7749) + t6993*(t3264*t5405*t7721 + t5751*t7749);
  p_output1[16]=t7374*t7674 + t7396*t7684 + t7405*t7706 - 1.*t139*t6844*t7785 + t7042*(t3264*t5751*t7785 - 1.*t5405*t7790) + t6993*(t3264*t5405*t7785 + t5751*t7790);
  p_output1[17]=t7513*t7674 + t7529*t7684 + t7542*t7706 + t7810 + t7827 + t7836;
  p_output1[18]=-1.*t139*t6844*t7190 + t7149*t7977 + t7192*t7985 + t7201*t7994 + t7042*(t3264*t5751*t7190 - 1.*t5405*t8044) + t6993*(t3264*t5405*t7190 + t5751*t8044);
  p_output1[19]=-1.*t139*t6844*t7392 + t7374*t7977 + t7396*t7985 + t7405*t7994 + t7042*(t3264*t5751*t7392 - 1.*t5405*t8112) + t6993*(t3264*t5405*t7392 + t5751*t8112);
  p_output1[20]=t7810 + t7827 + t7836 + t7513*t7977 + t7529*t7985 + t7542*t7994;
  p_output1[21]=t6844*t7169 + t7149*t8490 + t7192*t8527 + t7201*t8539 + t5405*t6993*t8546 + t5751*t7042*t8546;
  p_output1[22]=t6844*t7384 + t7374*t8490 + t7396*t8527 + t7405*t8539 + t5405*t6993*t8581 + t5751*t7042*t8581;
  p_output1[23]=t6844*t7518 + t7513*t8490 + t7529*t8527 + t7542*t8539 + t5405*t6993*t8605 + t5751*t7042*t8605;
  p_output1[24]=t6993*(-1.*t5751*t7169 + t5405*t7190) + t7042*t7192 + t7149*t8709 + t7201*t8715 + t7192*t8722;
  p_output1[25]=t6993*(-1.*t5751*t7384 + t5405*t7392) + t7042*t7396 + t7374*t8709 + t7405*t8715 + t7396*t8722;
  p_output1[26]=t6993*(-1.*t5751*t7518 + t5405*t7523) + t7042*t7529 + t7513*t8709 + t7542*t8715 + t7529*t8722;
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

#include "Jq_AMWorld_LeftThigh_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
