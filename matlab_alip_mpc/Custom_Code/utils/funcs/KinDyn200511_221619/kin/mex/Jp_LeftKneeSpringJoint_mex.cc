/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:35 GMT-04:00
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
  double t1848;
  double t876;
  double t1356;
  double t1559;
  double t1868;
  double t2218;
  double t2465;
  double t2592;
  double t2845;
  double t3083;
  double t3110;
  double t3163;
  double t1779;
  double t2017;
  double t2052;
  double t3971;
  double t4073;
  double t4532;
  double t4779;
  double t3771;
  double t3831;
  double t3965;
  double t5275;
  double t5976;
  double t6021;
  double t6068;
  double t6351;
  double t5674;
  double t5845;
  double t5946;
  double t6678;
  double t6935;
  double t6944;
  double t7004;
  double t7007;
  double t7050;
  double t7130;
  double t7208;
  double t7210;
  double t7213;
  double t7376;
  double t7377;
  double t7390;
  double t7432;
  double t7446;
  double t7459;
  double t7481;
  double t7506;
  double t7508;
  double t7510;
  double t7521;
  double t7523;
  double t7527;
  double t2600;
  double t2976;
  double t2991;
  double t3211;
  double t3224;
  double t3301;
  double t7646;
  double t7651;
  double t7652;
  double t7615;
  double t7617;
  double t7618;
  double t4730;
  double t4803;
  double t4940;
  double t5276;
  double t5343;
  double t5356;
  double t7659;
  double t7662;
  double t7664;
  double t6226;
  double t6419;
  double t6545;
  double t6946;
  double t6948;
  double t6953;
  double t7067;
  double t7164;
  double t7203;
  double t7714;
  double t7717;
  double t7719;
  double t7723;
  double t7725;
  double t7728;
  double t7224;
  double t7274;
  double t7339;
  double t7480;
  double t7493;
  double t7495;
  double t7735;
  double t7740;
  double t7743;
  double t7753;
  double t7758;
  double t7759;
  double t7512;
  double t7513;
  double t7517;
  double t7762;
  double t7765;
  double t7766;
  double t7770;
  double t7772;
  double t7775;
  double t7827;
  double t7829;
  double t7834;
  double t7866;
  double t7867;
  double t7868;
  double t7874;
  double t7875;
  double t7878;
  double t7882;
  double t7883;
  double t7884;
  double t7889;
  double t7893;
  double t7894;
  double t7898;
  double t7901;
  double t7907;
  double t7909;
  double t7911;
  double t7912;
  double t7938;
  double t7941;
  double t7944;
  double t7964;
  double t7965;
  double t7966;
  double t7973;
  double t7981;
  double t7983;
  double t7992;
  double t7997;
  double t8006;
  double t8010;
  double t8016;
  double t8018;
  double t8021;
  double t8026;
  double t8030;
  double t8032;
  double t8034;
  double t8035;
  double t8070;
  double t8075;
  double t8077;
  double t8100;
  double t8101;
  double t8111;
  double t8113;
  double t8114;
  double t8115;
  double t8128;
  double t8130;
  double t8133;
  double t8143;
  double t8153;
  double t8157;
  double t8162;
  double t8163;
  double t8165;
  double t8172;
  double t8173;
  double t8174;
  double t8198;
  double t8199;
  double t8205;
  double t8208;
  double t8209;
  double t8221;
  double t8222;
  double t8229;
  double t8235;
  double t8237;
  double t8238;
  double t8244;
  double t8250;
  double t8253;
  double t8258;
  double t8260;
  double t8262;
  double t8267;
  double t8270;
  double t8271;
  double t8302;
  double t8304;
  double t8306;
  double t8312;
  double t8313;
  double t8315;
  double t8321;
  double t8322;
  double t8327;
  double t8328;
  double t8329;
  double t8331;
  double t8335;
  double t8336;
  double t8343;
  double t8344;
  double t8347;
  double t8349;
  double t8350;
  double t8352;
  double t8371;
  double t8372;
  double t8373;
  double t8377;
  double t8381;
  double t8382;
  double t8389;
  double t8390;
  double t8393;
  double t8396;
  double t8398;
  double t8405;
  double t8411;
  double t8413;
  double t8414;
  double t8417;
  double t8418;
  double t8420;
  double t8463;
  double t8465;
  double t8467;
  double t8477;
  double t8478;
  double t8482;
  double t8484;
  double t8486;
  double t8488;
  double t8490;
  double t8492;
  double t8495;
  double t8496;
  double t8497;
  double t8445;
  double t8448;
  double t8450;
  double t8452;
  double t8453;
  double t8511;
  double t8521;
  double t8524;
  double t8535;
  double t8536;
  double t8541;
  double t8542;
  double t8545;
  double t8546;
  double t8549;
  double t8553;
  double t8555;
  double t8558;
  double t8561;
  double t8562;
  double t8563;
  double t8565;
  double t8566;
  double t8567;
  double t8374;
  double t8375;
  double t8376;
  double t8387;
  double t8394;
  double t8409;
  double t8415;
  double t8422;
  double t8425;
  double t8430;
  double t8431;
  double t8432;
  double t8436;
  double t8437;
  double t8438;
  double t8441;
  double t7691;
  double t7692;
  double t7700;
  double t8611;
  double t8616;
  double t8617;
  double t8619;
  double t8620;
  double t8621;
  double t8590;
  double t8591;
  double t8592;
  double t8594;
  double t8595;
  double t8652;
  double t8653;
  double t8654;
  double t8660;
  double t8662;
  double t8663;
  double t8691;
  double t8692;
  double t8693;
  double t8702;
  double t8703;
  double t8706;
  double t8732;
  double t8737;
  double t8739;
  double t8743;
  double t8749;
  double t8757;
  double t8781;
  double t8784;
  double t8788;
  double t8792;
  double t8797;
  double t8799;
  double t8827;
  double t8836;
  double t8851;
  double t8857;
  double t8858;
  double t8861;
  double t8862;
  double t8863;
  double t8819;
  double t8820;
  double t8821;
  double t8823;
  double t8824;
  double t8901;
  double t8902;
  double t8903;
  double t8906;
  double t8908;
  double t8909;
  double t8918;
  double t8927;
  double t8929;
  double t8931;
  double t8932;
  double t8933;
  double t8936;
  double t8940;
  double t8941;
  double t8968;
  double t8969;
  double t8970;
  double t8975;
  double t8976;
  double t8981;
  double t8987;
  double t8988;
  double t8989;
  double t8992;
  double t8993;
  double t8994;
  double t8999;
  double t9006;
  double t9007;
  double t9051;
  double t9052;
  double t7803;
  double t9040;
  double t9042;
  double t9043;
  double t9046;
  double t9047;
  double t9077;
  double t9079;
  double t9080;
  double t9086;
  double t9087;
  double t9089;
  double t9090;
  double t9101;
  double t9102;
  double t9103;
  double t9106;
  double t9107;
  double t9109;
  double t9110;
  double t9064;
  double t7804;
  double t7807;
  double t9122;
  double t9123;
  double t9125;
  double t9126;
  double t9127;
  double t9092;
  double t9136;
  double t9137;
  double t9138;
  double t9096;
  double t9112;
  double t9148;
  double t9149;
  double t9150;
  double t9116;
  t1848 = Cos(var1[3]);
  t876 = Cos(var1[5]);
  t1356 = Sin(var1[3]);
  t1559 = Sin(var1[4]);
  t1868 = Sin(var1[5]);
  t2218 = Cos(var1[6]);
  t2465 = -1.*t2218;
  t2592 = 1. + t2465;
  t2845 = Sin(var1[6]);
  t3083 = -1.*t1848*t876;
  t3110 = -1.*t1356*t1559*t1868;
  t3163 = t3083 + t3110;
  t1779 = -1.*t876*t1356*t1559;
  t2017 = t1848*t1868;
  t2052 = t1779 + t2017;
  t3971 = Cos(var1[7]);
  t4073 = -1.*t3971;
  t4532 = 1. + t4073;
  t4779 = Sin(var1[7]);
  t3771 = t2218*t3163;
  t3831 = t2052*t2845;
  t3965 = t3771 + t3831;
  t5275 = Cos(var1[4]);
  t5976 = Cos(var1[8]);
  t6021 = -1.*t5976;
  t6068 = 1. + t6021;
  t6351 = Sin(var1[8]);
  t5674 = -1.*t5275*t3971*t1356;
  t5845 = t3965*t4779;
  t5946 = t5674 + t5845;
  t6678 = t2218*t2052;
  t6935 = -1.*t3163*t2845;
  t6944 = t6678 + t6935;
  t7004 = Cos(var1[9]);
  t7007 = -1.*t7004;
  t7050 = 1. + t7007;
  t7130 = Sin(var1[9]);
  t7208 = t5976*t5946;
  t7210 = t6944*t6351;
  t7213 = t7208 + t7210;
  t7376 = t5976*t6944;
  t7377 = -1.*t5946*t6351;
  t7390 = t7376 + t7377;
  t7432 = Cos(var1[10]);
  t7446 = -1.*t7432;
  t7459 = 1. + t7446;
  t7481 = Sin(var1[10]);
  t7506 = -1.*t7130*t7213;
  t7508 = t7004*t7390;
  t7510 = t7506 + t7508;
  t7521 = t7004*t7213;
  t7523 = t7130*t7390;
  t7527 = t7521 + t7523;
  t2600 = 0.07996*t2592;
  t2976 = -0.135*t2845;
  t2991 = 0. + t2600 + t2976;
  t3211 = 0.135*t2592;
  t3224 = 0.07996*t2845;
  t3301 = 0. + t3211 + t3224;
  t7646 = -1.*t876*t1356;
  t7651 = t1848*t1559*t1868;
  t7652 = t7646 + t7651;
  t7615 = t1848*t876*t1559;
  t7617 = t1356*t1868;
  t7618 = t7615 + t7617;
  t4730 = 0.135*t4532;
  t4803 = 0.08055*t4779;
  t4940 = 0. + t4730 + t4803;
  t5276 = -0.08055*t4532;
  t5343 = 0.135*t4779;
  t5356 = 0. + t5276 + t5343;
  t7659 = t2218*t7652;
  t7662 = t7618*t2845;
  t7664 = t7659 + t7662;
  t6226 = -0.08055*t6068;
  t6419 = -0.01004*t6351;
  t6545 = 0. + t6226 + t6419;
  t6946 = -0.01004*t6068;
  t6948 = 0.08055*t6351;
  t6953 = 0. + t6946 + t6948;
  t7067 = -0.08055*t7050;
  t7164 = -0.13004*t7130;
  t7203 = 0. + t7067 + t7164;
  t7714 = t1848*t5275*t3971;
  t7717 = t7664*t4779;
  t7719 = t7714 + t7717;
  t7723 = t2218*t7618;
  t7725 = -1.*t7652*t2845;
  t7728 = t7723 + t7725;
  t7224 = -0.13004*t7050;
  t7274 = 0.08055*t7130;
  t7339 = 0. + t7224 + t7274;
  t7480 = -0.19074*t7459;
  t7493 = 0.03315*t7481;
  t7495 = 0. + t7480 + t7493;
  t7735 = t5976*t7719;
  t7740 = t7728*t6351;
  t7743 = t7735 + t7740;
  t7753 = t5976*t7728;
  t7758 = -1.*t7719*t6351;
  t7759 = t7753 + t7758;
  t7512 = -0.03315*t7459;
  t7513 = -0.19074*t7481;
  t7517 = 0. + t7512 + t7513;
  t7762 = -1.*t7130*t7743;
  t7765 = t7004*t7759;
  t7766 = t7762 + t7765;
  t7770 = t7004*t7743;
  t7772 = t7130*t7759;
  t7775 = t7770 + t7772;
  t7827 = t1848*t5275*t2218*t1868;
  t7829 = t1848*t5275*t876*t2845;
  t7834 = t7827 + t7829;
  t7866 = -1.*t1848*t3971*t1559;
  t7867 = t7834*t4779;
  t7868 = t7866 + t7867;
  t7874 = t1848*t5275*t876*t2218;
  t7875 = -1.*t1848*t5275*t1868*t2845;
  t7878 = t7874 + t7875;
  t7882 = t5976*t7868;
  t7883 = t7878*t6351;
  t7884 = t7882 + t7883;
  t7889 = t5976*t7878;
  t7893 = -1.*t7868*t6351;
  t7894 = t7889 + t7893;
  t7898 = -1.*t7130*t7884;
  t7901 = t7004*t7894;
  t7907 = t7898 + t7901;
  t7909 = t7004*t7884;
  t7911 = t7130*t7894;
  t7912 = t7909 + t7911;
  t7938 = t5275*t2218*t1356*t1868;
  t7941 = t5275*t876*t1356*t2845;
  t7944 = t7938 + t7941;
  t7964 = -1.*t3971*t1356*t1559;
  t7965 = t7944*t4779;
  t7966 = t7964 + t7965;
  t7973 = t5275*t876*t2218*t1356;
  t7981 = -1.*t5275*t1356*t1868*t2845;
  t7983 = t7973 + t7981;
  t7992 = t5976*t7966;
  t7997 = t7983*t6351;
  t8006 = t7992 + t7997;
  t8010 = t5976*t7983;
  t8016 = -1.*t7966*t6351;
  t8018 = t8010 + t8016;
  t8021 = -1.*t7130*t8006;
  t8026 = t7004*t8018;
  t8030 = t8021 + t8026;
  t8032 = t7004*t8006;
  t8034 = t7130*t8018;
  t8035 = t8032 + t8034;
  t8070 = -1.*t2218*t1559*t1868;
  t8075 = -1.*t876*t1559*t2845;
  t8077 = t8070 + t8075;
  t8100 = -1.*t5275*t3971;
  t8101 = t8077*t4779;
  t8111 = t8100 + t8101;
  t8113 = -1.*t876*t2218*t1559;
  t8114 = t1559*t1868*t2845;
  t8115 = t8113 + t8114;
  t8128 = t5976*t8111;
  t8130 = t8115*t6351;
  t8133 = t8128 + t8130;
  t8143 = t5976*t8115;
  t8153 = -1.*t8111*t6351;
  t8157 = t8143 + t8153;
  t8162 = -1.*t7130*t8133;
  t8163 = t7004*t8157;
  t8165 = t8162 + t8163;
  t8172 = t7004*t8133;
  t8173 = t7130*t8157;
  t8174 = t8172 + t8173;
  t8198 = t876*t1356;
  t8199 = -1.*t1848*t1559*t1868;
  t8205 = t8198 + t8199;
  t8208 = t8205*t2845;
  t8209 = t7723 + t8208;
  t8221 = t2218*t8205;
  t8222 = -1.*t7618*t2845;
  t8229 = t8221 + t8222;
  t8235 = t5976*t8209*t4779;
  t8237 = t8229*t6351;
  t8238 = t8235 + t8237;
  t8244 = t5976*t8229;
  t8250 = -1.*t8209*t4779*t6351;
  t8253 = t8244 + t8250;
  t8258 = -1.*t7130*t8238;
  t8260 = t7004*t8253;
  t8262 = t8258 + t8260;
  t8267 = t7004*t8238;
  t8270 = t7130*t8253;
  t8271 = t8267 + t8270;
  t8302 = t876*t1356*t1559;
  t8304 = -1.*t1848*t1868;
  t8306 = t8302 + t8304;
  t8312 = t2218*t8306;
  t8313 = t3163*t2845;
  t8315 = t8312 + t8313;
  t8321 = -1.*t8306*t2845;
  t8322 = t3771 + t8321;
  t8327 = t5976*t8315*t4779;
  t8328 = t8322*t6351;
  t8329 = t8327 + t8328;
  t8331 = t5976*t8322;
  t8335 = -1.*t8315*t4779*t6351;
  t8336 = t8331 + t8335;
  t8343 = -1.*t7130*t8329;
  t8344 = t7004*t8336;
  t8347 = t8343 + t8344;
  t8349 = t7004*t8329;
  t8350 = t7130*t8336;
  t8352 = t8349 + t8350;
  t8371 = t5275*t876*t2218;
  t8372 = -1.*t5275*t1868*t2845;
  t8373 = t8371 + t8372;
  t8377 = -1.*t5275*t2218*t1868;
  t8381 = -1.*t5275*t876*t2845;
  t8382 = t8377 + t8381;
  t8389 = t5976*t8373*t4779;
  t8390 = t8382*t6351;
  t8393 = t8389 + t8390;
  t8396 = t5976*t8382;
  t8398 = -1.*t8373*t4779*t6351;
  t8405 = t8396 + t8398;
  t8411 = -1.*t7130*t8393;
  t8413 = t7004*t8405;
  t8414 = t8411 + t8413;
  t8417 = t7004*t8393;
  t8418 = t7130*t8405;
  t8420 = t8417 + t8418;
  t8463 = -1.*t2218*t7652;
  t8465 = t8463 + t8222;
  t8467 = t5976*t7728*t4779;
  t8477 = t8465*t6351;
  t8478 = t8467 + t8477;
  t8482 = t5976*t8465;
  t8484 = -1.*t7728*t4779*t6351;
  t8486 = t8482 + t8484;
  t8488 = -1.*t7130*t8478;
  t8490 = t7004*t8486;
  t8492 = t8488 + t8490;
  t8495 = t7004*t8478;
  t8496 = t7130*t8486;
  t8497 = t8495 + t8496;
  t8445 = -0.135*t2218;
  t8448 = t8445 + t3224;
  t8450 = 0.07996*t2218;
  t8452 = 0.135*t2845;
  t8453 = t8450 + t8452;
  t8511 = t1848*t876;
  t8521 = t1356*t1559*t1868;
  t8524 = t8511 + t8521;
  t8535 = -1.*t8524*t2845;
  t8536 = t8312 + t8535;
  t8541 = -1.*t2218*t8524;
  t8542 = t8541 + t8321;
  t8545 = t5976*t8536*t4779;
  t8546 = t8542*t6351;
  t8549 = t8545 + t8546;
  t8553 = t5976*t8542;
  t8555 = -1.*t8536*t4779*t6351;
  t8558 = t8553 + t8555;
  t8561 = -1.*t7130*t8549;
  t8562 = t7004*t8558;
  t8563 = t8561 + t8562;
  t8565 = t7004*t8549;
  t8566 = t7130*t8558;
  t8567 = t8565 + t8566;
  t8374 = 0.1305*t3971*t8373;
  t8375 = t8373*t4940;
  t8376 = t8373*t4779*t6545;
  t8387 = t8382*t6953;
  t8394 = t7203*t8393;
  t8409 = t7339*t8405;
  t8415 = t7495*t8414;
  t8422 = t7517*t8420;
  t8425 = t7481*t8414;
  t8430 = t7432*t8420;
  t8431 = t8425 + t8430;
  t8432 = -0.03315*t8431;
  t8436 = t7432*t8414;
  t8437 = -1.*t7481*t8420;
  t8438 = t8436 + t8437;
  t8441 = -0.19074*t8438;
  t7691 = t3971*t7664;
  t7692 = -1.*t1848*t5275*t4779;
  t7700 = t7691 + t7692;
  t8611 = -1.*t5976*t7130*t7700;
  t8616 = -1.*t7004*t7700*t6351;
  t8617 = t8611 + t8616;
  t8619 = t7004*t5976*t7700;
  t8620 = -1.*t7130*t7700*t6351;
  t8621 = t8619 + t8620;
  t8590 = 0.135*t3971;
  t8591 = -0.08055*t4779;
  t8592 = t8590 + t8591;
  t8594 = 0.08055*t3971;
  t8595 = t8594 + t5343;
  t8652 = t2218*t8524;
  t8653 = t8306*t2845;
  t8654 = t8652 + t8653;
  t8660 = t3971*t8654;
  t8662 = -1.*t5275*t1356*t4779;
  t8663 = t8660 + t8662;
  t8691 = -1.*t5976*t7130*t8663;
  t8692 = -1.*t7004*t8663*t6351;
  t8693 = t8691 + t8692;
  t8702 = t7004*t5976*t8663;
  t8703 = -1.*t7130*t8663*t6351;
  t8706 = t8702 + t8703;
  t8732 = t5275*t2218*t1868;
  t8737 = t5275*t876*t2845;
  t8739 = t8732 + t8737;
  t8743 = t3971*t8739;
  t8749 = t1559*t4779;
  t8757 = t8743 + t8749;
  t8781 = -1.*t5976*t7130*t8757;
  t8784 = -1.*t7004*t8757*t6351;
  t8788 = t8781 + t8784;
  t8792 = t7004*t5976*t8757;
  t8797 = -1.*t7130*t8757*t6351;
  t8799 = t8792 + t8797;
  t8827 = -1.*t5976*t7719;
  t8836 = -1.*t7728*t6351;
  t8851 = t8827 + t8836;
  t8857 = t7130*t8851;
  t8858 = t8857 + t7765;
  t8861 = t7004*t8851;
  t8862 = -1.*t7130*t7759;
  t8863 = t8861 + t8862;
  t8819 = -0.01004*t5976;
  t8820 = -0.08055*t6351;
  t8821 = t8819 + t8820;
  t8823 = 0.08055*t5976;
  t8824 = t8823 + t6419;
  t8901 = t5275*t3971*t1356;
  t8902 = t8654*t4779;
  t8903 = t8901 + t8902;
  t8906 = -1.*t5976*t8903;
  t8908 = -1.*t8536*t6351;
  t8909 = t8906 + t8908;
  t8918 = t5976*t8536;
  t8927 = -1.*t8903*t6351;
  t8929 = t8918 + t8927;
  t8931 = t7130*t8909;
  t8932 = t7004*t8929;
  t8933 = t8931 + t8932;
  t8936 = t7004*t8909;
  t8940 = -1.*t7130*t8929;
  t8941 = t8936 + t8940;
  t8968 = -1.*t3971*t1559;
  t8969 = t8739*t4779;
  t8970 = t8968 + t8969;
  t8975 = -1.*t5976*t8970;
  t8976 = -1.*t8373*t6351;
  t8981 = t8975 + t8976;
  t8987 = t5976*t8373;
  t8988 = -1.*t8970*t6351;
  t8989 = t8987 + t8988;
  t8992 = t7130*t8981;
  t8993 = t7004*t8989;
  t8994 = t8992 + t8993;
  t8999 = t7004*t8981;
  t9006 = -1.*t7130*t8989;
  t9007 = t8999 + t9006;
  t9051 = -1.*t7004*t7743;
  t9052 = t9051 + t8862;
  t7803 = t7432*t7766;
  t9040 = -0.13004*t7004;
  t9042 = -0.08055*t7130;
  t9043 = t9040 + t9042;
  t9046 = 0.08055*t7004;
  t9047 = t9046 + t7164;
  t9077 = t5976*t8903;
  t9079 = t8536*t6351;
  t9080 = t9077 + t9079;
  t9086 = -1.*t7130*t9080;
  t9087 = t9086 + t8932;
  t9089 = -1.*t7004*t9080;
  t9090 = t9089 + t8940;
  t9101 = t5976*t8970;
  t9102 = t8373*t6351;
  t9103 = t9101 + t9102;
  t9106 = -1.*t7130*t9103;
  t9107 = t9106 + t8993;
  t9109 = -1.*t7004*t9103;
  t9110 = t9109 + t9006;
  t9064 = -1.*t7481*t7766;
  t7804 = -1.*t7481*t7775;
  t7807 = t7803 + t7804;
  t9122 = 0.03315*t7432;
  t9123 = t9122 + t7513;
  t9125 = -0.19074*t7432;
  t9126 = -0.03315*t7481;
  t9127 = t9125 + t9126;
  t9092 = -1.*t7481*t9087;
  t9136 = t7004*t9080;
  t9137 = t7130*t8929;
  t9138 = t9136 + t9137;
  t9096 = t7432*t9087;
  t9112 = -1.*t7481*t9107;
  t9148 = t7004*t9103;
  t9149 = t7130*t8989;
  t9150 = t9148 + t9149;
  t9116 = t7432*t9107;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2052*t2991 + t3163*t3301 + t3965*t4940 + 0.1305*(t3965*t3971 + t1356*t4779*t5275) - 1.*t1356*t5275*t5356 + t5946*t6545 + t6944*t6953 + t7203*t7213 + t7339*t7390 + t7495*t7510 + t7517*t7527 - 0.03315*(t7481*t7510 + t7432*t7527) - 0.19074*(t7432*t7510 - 1.*t7481*t7527);
  p_output1[10]=t1848*t5275*t5356 + t2991*t7618 + t3301*t7652 + t4940*t7664 + 0.1305*t7700 + t6545*t7719 + t6953*t7728 + t7203*t7743 + t7339*t7759 + t7495*t7766 + t7517*t7775 - 0.03315*(t7481*t7766 + t7432*t7775) - 0.19074*t7807;
  p_output1[11]=0;
  p_output1[12]=t1848*t1868*t3301*t5275 - 1.*t1559*t1848*t5356 + t4940*t7834 + 0.1305*(t1559*t1848*t4779 + t3971*t7834) + t6545*t7868 + t6953*t7878 + t7203*t7884 + t7339*t7894 + t7495*t7907 + t7517*t7912 - 0.03315*(t7481*t7907 + t7432*t7912) - 0.19074*(t7432*t7907 - 1.*t7481*t7912) + t1848*t2991*t5275*t876;
  p_output1[13]=t1356*t1868*t3301*t5275 - 1.*t1356*t1559*t5356 + t4940*t7944 + 0.1305*(t1356*t1559*t4779 + t3971*t7944) + t6545*t7966 + t6953*t7983 + t7203*t8006 + t7339*t8018 + t7495*t8030 + t7517*t8035 - 0.03315*(t7481*t8030 + t7432*t8035) - 0.19074*(t7432*t8030 - 1.*t7481*t8035) + t1356*t2991*t5275*t876;
  p_output1[14]=-1.*t1559*t1868*t3301 - 1.*t5275*t5356 + t4940*t8077 + 0.1305*(t4779*t5275 + t3971*t8077) + t6545*t8111 + t6953*t8115 + t7203*t8133 + t7339*t8157 + t7495*t8165 + t7517*t8174 - 0.03315*(t7481*t8165 + t7432*t8174) - 0.19074*(t7432*t8165 - 1.*t7481*t8174) - 1.*t1559*t2991*t876;
  p_output1[15]=t3301*t7618 + t2991*t8205 + 0.1305*t3971*t8209 + t4940*t8209 + t4779*t6545*t8209 + t6953*t8229 + t7203*t8238 + t7339*t8253 + t7495*t8262 + t7517*t8271 - 0.03315*(t7481*t8262 + t7432*t8271) - 0.19074*(t7432*t8262 - 1.*t7481*t8271);
  p_output1[16]=t2991*t3163 + t3301*t8306 + 0.1305*t3971*t8315 + t4940*t8315 + t4779*t6545*t8315 + t6953*t8322 + t7203*t8329 + t7339*t8336 + t7495*t8347 + t7517*t8352 - 0.03315*(t7481*t8347 + t7432*t8352) - 0.19074*(t7432*t8347 - 1.*t7481*t8352);
  p_output1[17]=-1.*t1868*t2991*t5275 + t8374 + t8375 + t8376 + t8387 + t8394 + t8409 + t8415 + t8422 + t8432 + t8441 + t3301*t5275*t876;
  p_output1[18]=0.1305*t3971*t7728 + t4940*t7728 + t4779*t6545*t7728 + t7618*t8448 + t7652*t8453 + t6953*t8465 + t7203*t8478 + t7339*t8486 + t7495*t8492 + t7517*t8497 - 0.03315*(t7481*t8492 + t7432*t8497) - 0.19074*(t7432*t8492 - 1.*t7481*t8497);
  p_output1[19]=t8306*t8448 + t8453*t8524 + 0.1305*t3971*t8536 + t4940*t8536 + t4779*t6545*t8536 + t6953*t8542 + t7203*t8549 + t7339*t8558 + t7495*t8563 + t7517*t8567 - 0.03315*(t7481*t8563 + t7432*t8567) - 0.19074*(t7432*t8563 - 1.*t7481*t8567);
  p_output1[20]=t8374 + t8375 + t8376 + t8387 + t8394 + t8409 + t8415 + t8422 + t8432 + t8441 + t1868*t5275*t8453 + t5275*t8448*t876;
  p_output1[21]=0.1305*(-1.*t1848*t3971*t5275 - 1.*t4779*t7664) + t6545*t7700 + t5976*t7203*t7700 - 1.*t6351*t7339*t7700 + t1848*t5275*t8592 + t7664*t8595 + t7495*t8617 + t7517*t8621 - 0.03315*(t7481*t8617 + t7432*t8621) - 0.19074*(t7432*t8617 - 1.*t7481*t8621);
  p_output1[22]=t1356*t5275*t8592 + t8595*t8654 + 0.1305*(t5674 - 1.*t4779*t8654) + t6545*t8663 + t5976*t7203*t8663 - 1.*t6351*t7339*t8663 + t7495*t8693 + t7517*t8706 - 0.03315*(t7481*t8693 + t7432*t8706) - 0.19074*(t7432*t8693 - 1.*t7481*t8706);
  p_output1[23]=-1.*t1559*t8592 + t8595*t8739 + 0.1305*(t1559*t3971 - 1.*t4779*t8739) + t6545*t8757 + t5976*t7203*t8757 - 1.*t6351*t7339*t8757 + t7495*t8788 + t7517*t8799 - 0.03315*(t7481*t8788 + t7432*t8799) - 0.19074*(t7432*t8788 - 1.*t7481*t8799);
  p_output1[24]=t7203*t7759 + t7719*t8821 + t7728*t8824 + t7339*t8851 + t7517*t8858 + t7495*t8863 - 0.19074*(-1.*t7481*t8858 + t7432*t8863) - 0.03315*(t7432*t8858 + t7481*t8863);
  p_output1[25]=t8536*t8824 + t8821*t8903 + t7339*t8909 + t7203*t8929 + t7517*t8933 + t7495*t8941 - 0.19074*(-1.*t7481*t8933 + t7432*t8941) - 0.03315*(t7432*t8933 + t7481*t8941);
  p_output1[26]=t8373*t8824 + t8821*t8970 + t7339*t8981 + t7203*t8989 + t7517*t8994 + t7495*t9007 - 0.19074*(-1.*t7481*t8994 + t7432*t9007) - 0.03315*(t7432*t8994 + t7481*t9007);
  p_output1[27]=t7517*t7766 + t7743*t9043 + t7759*t9047 + t7495*t9052 - 0.03315*(t7803 + t7481*t9052) - 0.19074*(t7432*t9052 + t9064);
  p_output1[28]=t8929*t9047 + t9043*t9080 + t7517*t9087 + t7495*t9090 - 0.19074*(t7432*t9090 + t9092) - 0.03315*(t7481*t9090 + t9096);
  p_output1[29]=t8989*t9047 + t9043*t9103 + t7517*t9107 + t7495*t9110 - 0.19074*(t7432*t9110 + t9112) - 0.03315*(t7481*t9110 + t9116);
  p_output1[30]=-0.03315*t7807 - 0.19074*(-1.*t7432*t7775 + t9064) + t7766*t9123 + t7775*t9127;
  p_output1[31]=t9087*t9123 + t9127*t9138 - 0.19074*(t9092 - 1.*t7432*t9138) - 0.03315*(t9096 - 1.*t7481*t9138);
  p_output1[32]=t9107*t9123 + t9127*t9150 - 0.19074*(t9112 - 1.*t7432*t9150) - 0.03315*(t9116 - 1.*t7481*t9150);
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

#include "Jp_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void Jp_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
