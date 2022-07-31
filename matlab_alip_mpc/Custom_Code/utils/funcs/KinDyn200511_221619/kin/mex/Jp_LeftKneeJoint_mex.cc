/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:16 GMT-04:00
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
  double t702;
  double t111;
  double t572;
  double t617;
  double t802;
  double t1513;
  double t1636;
  double t1774;
  double t1862;
  double t2126;
  double t2149;
  double t2284;
  double t632;
  double t972;
  double t1489;
  double t3626;
  double t3733;
  double t3764;
  double t3856;
  double t2629;
  double t3306;
  double t3368;
  double t4111;
  double t5306;
  double t5363;
  double t5384;
  double t5421;
  double t5263;
  double t5267;
  double t5304;
  double t5535;
  double t5556;
  double t5589;
  double t5808;
  double t5915;
  double t5937;
  double t5960;
  double t6013;
  double t6059;
  double t6065;
  double t6140;
  double t6143;
  double t6146;
  double t1851;
  double t1895;
  double t1948;
  double t2309;
  double t2581;
  double t2607;
  double t6243;
  double t6269;
  double t6282;
  double t6219;
  double t6224;
  double t6241;
  double t3836;
  double t3960;
  double t3961;
  double t4351;
  double t4549;
  double t4564;
  double t6307;
  double t6308;
  double t6317;
  double t5413;
  double t5441;
  double t5470;
  double t5614;
  double t5623;
  double t5641;
  double t5958;
  double t6006;
  double t6008;
  double t6400;
  double t6440;
  double t6445;
  double t6539;
  double t6581;
  double t6584;
  double t6085;
  double t6092;
  double t6112;
  double t6630;
  double t6676;
  double t6678;
  double t6742;
  double t6750;
  double t6756;
  double t6813;
  double t6814;
  double t6815;
  double t6836;
  double t6839;
  double t6840;
  double t6846;
  double t6847;
  double t6852;
  double t6862;
  double t6865;
  double t6871;
  double t6878;
  double t6880;
  double t6882;
  double t6938;
  double t6943;
  double t6945;
  double t6974;
  double t6992;
  double t6995;
  double t7005;
  double t7017;
  double t7020;
  double t7024;
  double t7026;
  double t7028;
  double t7037;
  double t7039;
  double t7041;
  double t7102;
  double t7104;
  double t7113;
  double t7127;
  double t7128;
  double t7129;
  double t7133;
  double t7134;
  double t7139;
  double t7141;
  double t7145;
  double t7148;
  double t7152;
  double t7153;
  double t7154;
  double t7185;
  double t7189;
  double t7193;
  double t7198;
  double t7200;
  double t7215;
  double t7216;
  double t7218;
  double t7220;
  double t7221;
  double t7222;
  double t7230;
  double t7233;
  double t7234;
  double t7260;
  double t7262;
  double t7263;
  double t7265;
  double t7266;
  double t7267;
  double t7274;
  double t7278;
  double t7281;
  double t7282;
  double t7283;
  double t7289;
  double t7290;
  double t7294;
  double t7314;
  double t7315;
  double t7322;
  double t7329;
  double t7330;
  double t7331;
  double t7335;
  double t7338;
  double t7342;
  double t7349;
  double t7350;
  double t7354;
  double t7387;
  double t7388;
  double t7402;
  double t7404;
  double t7405;
  double t7412;
  double t7413;
  double t7414;
  double t7372;
  double t7375;
  double t7380;
  double t7381;
  double t7382;
  double t7427;
  double t7430;
  double t7431;
  double t7436;
  double t7437;
  double t7445;
  double t7446;
  double t7448;
  double t7449;
  double t7450;
  double t7453;
  double t7454;
  double t7456;
  double t7324;
  double t7325;
  double t7326;
  double t7333;
  double t7343;
  double t7355;
  double t7356;
  double t7359;
  double t7360;
  double t7362;
  double t7363;
  double t7364;
  double t7367;
  double t7368;
  double t6339;
  double t6346;
  double t6358;
  double t7488;
  double t7489;
  double t7490;
  double t7495;
  double t7499;
  double t7548;
  double t7549;
  double t7550;
  double t7552;
  double t7553;
  double t7554;
  double t7575;
  double t7576;
  double t7577;
  double t7579;
  double t7580;
  double t7581;
  double t7608;
  double t7609;
  double t7610;
  double t6766;
  double t7599;
  double t7600;
  double t7601;
  double t7605;
  double t7606;
  double t7624;
  double t7625;
  double t7626;
  double t7629;
  double t7630;
  double t7631;
  double t7633;
  double t7634;
  double t7635;
  double t7650;
  double t7652;
  double t7656;
  double t7662;
  double t7663;
  double t7664;
  double t7666;
  double t7667;
  double t7668;
  double t6765;
  double t6767;
  double t7620;
  double t7681;
  double t7682;
  double t7683;
  double t7685;
  double t7686;
  double t7694;
  double t7695;
  double t7696;
  double t7642;
  double t7646;
  double t7707;
  double t7708;
  double t7709;
  double t7671;
  double t7675;
  t702 = Cos(var1[3]);
  t111 = Cos(var1[5]);
  t572 = Sin(var1[3]);
  t617 = Sin(var1[4]);
  t802 = Sin(var1[5]);
  t1513 = Cos(var1[6]);
  t1636 = -1.*t1513;
  t1774 = 1. + t1636;
  t1862 = Sin(var1[6]);
  t2126 = -1.*t702*t111;
  t2149 = -1.*t572*t617*t802;
  t2284 = t2126 + t2149;
  t632 = -1.*t111*t572*t617;
  t972 = t702*t802;
  t1489 = t632 + t972;
  t3626 = Cos(var1[7]);
  t3733 = -1.*t3626;
  t3764 = 1. + t3733;
  t3856 = Sin(var1[7]);
  t2629 = t1513*t2284;
  t3306 = t1489*t1862;
  t3368 = t2629 + t3306;
  t4111 = Cos(var1[4]);
  t5306 = Cos(var1[8]);
  t5363 = -1.*t5306;
  t5384 = 1. + t5363;
  t5421 = Sin(var1[8]);
  t5263 = -1.*t4111*t3626*t572;
  t5267 = t3368*t3856;
  t5304 = t5263 + t5267;
  t5535 = t1513*t1489;
  t5556 = -1.*t2284*t1862;
  t5589 = t5535 + t5556;
  t5808 = Cos(var1[9]);
  t5915 = -1.*t5808;
  t5937 = 1. + t5915;
  t5960 = Sin(var1[9]);
  t6013 = t5306*t5304;
  t6059 = t5589*t5421;
  t6065 = t6013 + t6059;
  t6140 = t5306*t5589;
  t6143 = -1.*t5304*t5421;
  t6146 = t6140 + t6143;
  t1851 = 0.07996*t1774;
  t1895 = -0.135*t1862;
  t1948 = 0. + t1851 + t1895;
  t2309 = 0.135*t1774;
  t2581 = 0.07996*t1862;
  t2607 = 0. + t2309 + t2581;
  t6243 = -1.*t111*t572;
  t6269 = t702*t617*t802;
  t6282 = t6243 + t6269;
  t6219 = t702*t111*t617;
  t6224 = t572*t802;
  t6241 = t6219 + t6224;
  t3836 = 0.135*t3764;
  t3960 = 0.08055*t3856;
  t3961 = 0. + t3836 + t3960;
  t4351 = -0.08055*t3764;
  t4549 = 0.135*t3856;
  t4564 = 0. + t4351 + t4549;
  t6307 = t1513*t6282;
  t6308 = t6241*t1862;
  t6317 = t6307 + t6308;
  t5413 = -0.08055*t5384;
  t5441 = -0.01004*t5421;
  t5470 = 0. + t5413 + t5441;
  t5614 = -0.01004*t5384;
  t5623 = 0.08055*t5421;
  t5641 = 0. + t5614 + t5623;
  t5958 = -0.08055*t5937;
  t6006 = -0.13004*t5960;
  t6008 = 0. + t5958 + t6006;
  t6400 = t702*t4111*t3626;
  t6440 = t6317*t3856;
  t6445 = t6400 + t6440;
  t6539 = t1513*t6241;
  t6581 = -1.*t6282*t1862;
  t6584 = t6539 + t6581;
  t6085 = -0.13004*t5937;
  t6092 = 0.08055*t5960;
  t6112 = 0. + t6085 + t6092;
  t6630 = t5306*t6445;
  t6676 = t6584*t5421;
  t6678 = t6630 + t6676;
  t6742 = t5306*t6584;
  t6750 = -1.*t6445*t5421;
  t6756 = t6742 + t6750;
  t6813 = t702*t4111*t1513*t802;
  t6814 = t702*t4111*t111*t1862;
  t6815 = t6813 + t6814;
  t6836 = -1.*t702*t3626*t617;
  t6839 = t6815*t3856;
  t6840 = t6836 + t6839;
  t6846 = t702*t4111*t111*t1513;
  t6847 = -1.*t702*t4111*t802*t1862;
  t6852 = t6846 + t6847;
  t6862 = t5306*t6840;
  t6865 = t6852*t5421;
  t6871 = t6862 + t6865;
  t6878 = t5306*t6852;
  t6880 = -1.*t6840*t5421;
  t6882 = t6878 + t6880;
  t6938 = t4111*t1513*t572*t802;
  t6943 = t4111*t111*t572*t1862;
  t6945 = t6938 + t6943;
  t6974 = -1.*t3626*t572*t617;
  t6992 = t6945*t3856;
  t6995 = t6974 + t6992;
  t7005 = t4111*t111*t1513*t572;
  t7017 = -1.*t4111*t572*t802*t1862;
  t7020 = t7005 + t7017;
  t7024 = t5306*t6995;
  t7026 = t7020*t5421;
  t7028 = t7024 + t7026;
  t7037 = t5306*t7020;
  t7039 = -1.*t6995*t5421;
  t7041 = t7037 + t7039;
  t7102 = -1.*t1513*t617*t802;
  t7104 = -1.*t111*t617*t1862;
  t7113 = t7102 + t7104;
  t7127 = -1.*t4111*t3626;
  t7128 = t7113*t3856;
  t7129 = t7127 + t7128;
  t7133 = -1.*t111*t1513*t617;
  t7134 = t617*t802*t1862;
  t7139 = t7133 + t7134;
  t7141 = t5306*t7129;
  t7145 = t7139*t5421;
  t7148 = t7141 + t7145;
  t7152 = t5306*t7139;
  t7153 = -1.*t7129*t5421;
  t7154 = t7152 + t7153;
  t7185 = t111*t572;
  t7189 = -1.*t702*t617*t802;
  t7193 = t7185 + t7189;
  t7198 = t7193*t1862;
  t7200 = t6539 + t7198;
  t7215 = t1513*t7193;
  t7216 = -1.*t6241*t1862;
  t7218 = t7215 + t7216;
  t7220 = t5306*t7200*t3856;
  t7221 = t7218*t5421;
  t7222 = t7220 + t7221;
  t7230 = t5306*t7218;
  t7233 = -1.*t7200*t3856*t5421;
  t7234 = t7230 + t7233;
  t7260 = t111*t572*t617;
  t7262 = -1.*t702*t802;
  t7263 = t7260 + t7262;
  t7265 = t1513*t7263;
  t7266 = t2284*t1862;
  t7267 = t7265 + t7266;
  t7274 = -1.*t7263*t1862;
  t7278 = t2629 + t7274;
  t7281 = t5306*t7267*t3856;
  t7282 = t7278*t5421;
  t7283 = t7281 + t7282;
  t7289 = t5306*t7278;
  t7290 = -1.*t7267*t3856*t5421;
  t7294 = t7289 + t7290;
  t7314 = t4111*t111*t1513;
  t7315 = -1.*t4111*t802*t1862;
  t7322 = t7314 + t7315;
  t7329 = -1.*t4111*t1513*t802;
  t7330 = -1.*t4111*t111*t1862;
  t7331 = t7329 + t7330;
  t7335 = t5306*t7322*t3856;
  t7338 = t7331*t5421;
  t7342 = t7335 + t7338;
  t7349 = t5306*t7331;
  t7350 = -1.*t7322*t3856*t5421;
  t7354 = t7349 + t7350;
  t7387 = -1.*t1513*t6282;
  t7388 = t7387 + t7216;
  t7402 = t5306*t6584*t3856;
  t7404 = t7388*t5421;
  t7405 = t7402 + t7404;
  t7412 = t5306*t7388;
  t7413 = -1.*t6584*t3856*t5421;
  t7414 = t7412 + t7413;
  t7372 = -0.135*t1513;
  t7375 = t7372 + t2581;
  t7380 = 0.07996*t1513;
  t7381 = 0.135*t1862;
  t7382 = t7380 + t7381;
  t7427 = t702*t111;
  t7430 = t572*t617*t802;
  t7431 = t7427 + t7430;
  t7436 = -1.*t7431*t1862;
  t7437 = t7265 + t7436;
  t7445 = -1.*t1513*t7431;
  t7446 = t7445 + t7274;
  t7448 = t5306*t7437*t3856;
  t7449 = t7446*t5421;
  t7450 = t7448 + t7449;
  t7453 = t5306*t7446;
  t7454 = -1.*t7437*t3856*t5421;
  t7456 = t7453 + t7454;
  t7324 = 0.1305*t3626*t7322;
  t7325 = t7322*t3961;
  t7326 = t7322*t3856*t5470;
  t7333 = t7331*t5641;
  t7343 = t6008*t7342;
  t7355 = t6112*t7354;
  t7356 = -1.*t5960*t7342;
  t7359 = t5808*t7354;
  t7360 = t7356 + t7359;
  t7362 = -0.13004*t7360;
  t7363 = t5808*t7342;
  t7364 = t5960*t7354;
  t7367 = t7363 + t7364;
  t7368 = -0.08055*t7367;
  t6339 = t3626*t6317;
  t6346 = -1.*t702*t4111*t3856;
  t6358 = t6339 + t6346;
  t7488 = 0.135*t3626;
  t7489 = -0.08055*t3856;
  t7490 = t7488 + t7489;
  t7495 = 0.08055*t3626;
  t7499 = t7495 + t4549;
  t7548 = t1513*t7431;
  t7549 = t7263*t1862;
  t7550 = t7548 + t7549;
  t7552 = t3626*t7550;
  t7553 = -1.*t4111*t572*t3856;
  t7554 = t7552 + t7553;
  t7575 = t4111*t1513*t802;
  t7576 = t4111*t111*t1862;
  t7577 = t7575 + t7576;
  t7579 = t3626*t7577;
  t7580 = t617*t3856;
  t7581 = t7579 + t7580;
  t7608 = -1.*t5306*t6445;
  t7609 = -1.*t6584*t5421;
  t7610 = t7608 + t7609;
  t6766 = t5808*t6756;
  t7599 = -0.01004*t5306;
  t7600 = -0.08055*t5421;
  t7601 = t7599 + t7600;
  t7605 = 0.08055*t5306;
  t7606 = t7605 + t5441;
  t7624 = t4111*t3626*t572;
  t7625 = t7550*t3856;
  t7626 = t7624 + t7625;
  t7629 = -1.*t5306*t7626;
  t7630 = -1.*t7437*t5421;
  t7631 = t7629 + t7630;
  t7633 = t5306*t7437;
  t7634 = -1.*t7626*t5421;
  t7635 = t7633 + t7634;
  t7650 = -1.*t3626*t617;
  t7652 = t7577*t3856;
  t7656 = t7650 + t7652;
  t7662 = -1.*t5306*t7656;
  t7663 = -1.*t7322*t5421;
  t7664 = t7662 + t7663;
  t7666 = t5306*t7322;
  t7667 = -1.*t7656*t5421;
  t7668 = t7666 + t7667;
  t6765 = -1.*t5960*t6678;
  t6767 = t6765 + t6766;
  t7620 = -1.*t5960*t6756;
  t7681 = -0.13004*t5808;
  t7682 = -0.08055*t5960;
  t7683 = t7681 + t7682;
  t7685 = 0.08055*t5808;
  t7686 = t7685 + t6006;
  t7694 = t5306*t7626;
  t7695 = t7437*t5421;
  t7696 = t7694 + t7695;
  t7642 = t5808*t7635;
  t7646 = -1.*t5960*t7635;
  t7707 = t5306*t7656;
  t7708 = t7322*t5421;
  t7709 = t7707 + t7708;
  t7671 = t5808*t7668;
  t7675 = -1.*t5960*t7668;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1489*t1948 + t2284*t2607 + t3368*t3961 + t5304*t5470 + t5589*t5641 - 1.*t4111*t4564*t572 + 0.1305*(t3368*t3626 + t3856*t4111*t572) + t6008*t6065 + t6112*t6146 - 0.13004*(-1.*t5960*t6065 + t5808*t6146) - 0.08055*(t5808*t6065 + t5960*t6146);
  p_output1[10]=t1948*t6241 + t2607*t6282 + t3961*t6317 + 0.1305*t6358 + t5470*t6445 + t5641*t6584 + t6008*t6678 + t6112*t6756 - 0.08055*(t5808*t6678 + t5960*t6756) - 0.13004*t6767 + t4111*t4564*t702;
  p_output1[11]=0;
  p_output1[12]=t3961*t6815 + t5470*t6840 + t5641*t6852 + t6008*t6871 + t6112*t6882 - 0.13004*(-1.*t5960*t6871 + t5808*t6882) - 0.08055*(t5808*t6871 + t5960*t6882) + t111*t1948*t4111*t702 - 1.*t4564*t617*t702 + 0.1305*(t3626*t6815 + t3856*t617*t702) + t2607*t4111*t702*t802;
  p_output1[13]=t111*t1948*t4111*t572 - 1.*t4564*t572*t617 + t3961*t6945 + 0.1305*(t3856*t572*t617 + t3626*t6945) + t5470*t6995 + t5641*t7020 + t6008*t7028 + t6112*t7041 - 0.13004*(-1.*t5960*t7028 + t5808*t7041) - 0.08055*(t5808*t7028 + t5960*t7041) + t2607*t4111*t572*t802;
  p_output1[14]=-1.*t4111*t4564 - 1.*t111*t1948*t617 + t3961*t7113 + 0.1305*(t3856*t4111 + t3626*t7113) + t5470*t7129 + t5641*t7139 + t6008*t7148 + t6112*t7154 - 0.13004*(-1.*t5960*t7148 + t5808*t7154) - 0.08055*(t5808*t7148 + t5960*t7154) - 1.*t2607*t617*t802;
  p_output1[15]=t2607*t6241 + t1948*t7193 + 0.1305*t3626*t7200 + t3961*t7200 + t3856*t5470*t7200 + t5641*t7218 + t6008*t7222 + t6112*t7234 - 0.13004*(-1.*t5960*t7222 + t5808*t7234) - 0.08055*(t5808*t7222 + t5960*t7234);
  p_output1[16]=t1948*t2284 + t2607*t7263 + 0.1305*t3626*t7267 + t3961*t7267 + t3856*t5470*t7267 + t5641*t7278 + t6008*t7283 + t6112*t7294 - 0.13004*(-1.*t5960*t7283 + t5808*t7294) - 0.08055*(t5808*t7283 + t5960*t7294);
  p_output1[17]=t111*t2607*t4111 + t7324 + t7325 + t7326 + t7333 + t7343 + t7355 + t7362 + t7368 - 1.*t1948*t4111*t802;
  p_output1[18]=0.1305*t3626*t6584 + t3961*t6584 + t3856*t5470*t6584 + t6241*t7375 + t6282*t7382 + t5641*t7388 + t6008*t7405 + t6112*t7414 - 0.13004*(-1.*t5960*t7405 + t5808*t7414) - 0.08055*(t5808*t7405 + t5960*t7414);
  p_output1[19]=t7263*t7375 + t7382*t7431 + 0.1305*t3626*t7437 + t3961*t7437 + t3856*t5470*t7437 + t5641*t7446 + t6008*t7450 + t6112*t7456 - 0.13004*(-1.*t5960*t7450 + t5808*t7456) - 0.08055*(t5808*t7450 + t5960*t7456);
  p_output1[20]=t7324 + t7325 + t7326 + t7333 + t7343 + t7355 + t7362 + t7368 + t111*t4111*t7375 + t4111*t7382*t802;
  p_output1[21]=t5470*t6358 + t5306*t6008*t6358 - 1.*t5421*t6112*t6358 - 0.13004*(-1.*t5421*t5808*t6358 - 1.*t5306*t5960*t6358) - 0.08055*(t5306*t5808*t6358 - 1.*t5421*t5960*t6358) + 0.1305*(-1.*t3856*t6317 - 1.*t3626*t4111*t702) + t4111*t702*t7490 + t6317*t7499;
  p_output1[22]=t4111*t572*t7490 + t7499*t7550 + 0.1305*(t5263 - 1.*t3856*t7550) + t5470*t7554 + t5306*t6008*t7554 - 1.*t5421*t6112*t7554 - 0.13004*(-1.*t5421*t5808*t7554 - 1.*t5306*t5960*t7554) - 0.08055*(t5306*t5808*t7554 - 1.*t5421*t5960*t7554);
  p_output1[23]=-1.*t617*t7490 + t7499*t7577 + 0.1305*(t3626*t617 - 1.*t3856*t7577) + t5470*t7581 + t5306*t6008*t7581 - 1.*t5421*t6112*t7581 - 0.13004*(-1.*t5421*t5808*t7581 - 1.*t5306*t5960*t7581) - 0.08055*(t5306*t5808*t7581 - 1.*t5421*t5960*t7581);
  p_output1[24]=t6008*t6756 + t6445*t7601 + t6584*t7606 + t6112*t7610 - 0.08055*(t6766 + t5960*t7610) - 0.13004*(t5808*t7610 + t7620);
  p_output1[25]=t7437*t7606 + t7601*t7626 + t6112*t7631 + t6008*t7635 - 0.08055*(t5960*t7631 + t7642) - 0.13004*(t5808*t7631 + t7646);
  p_output1[26]=t7322*t7606 + t7601*t7656 + t6112*t7664 + t6008*t7668 - 0.08055*(t5960*t7664 + t7671) - 0.13004*(t5808*t7664 + t7675);
  p_output1[27]=-0.08055*t6767 - 0.13004*(-1.*t5808*t6678 + t7620) + t6678*t7683 + t6756*t7686;
  p_output1[28]=t7635*t7686 + t7683*t7696 - 0.13004*(t7646 - 1.*t5808*t7696) - 0.08055*(t7642 - 1.*t5960*t7696);
  p_output1[29]=t7668*t7686 + t7683*t7709 - 0.13004*(t7675 - 1.*t5808*t7709) - 0.08055*(t7671 - 1.*t5960*t7709);
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

#include "Jp_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void Jp_LeftKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
