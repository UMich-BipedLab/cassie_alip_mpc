/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:21 GMT-04:00
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
  double t826;
  double t80;
  double t114;
  double t279;
  double t431;
  double t547;
  double t1036;
  double t1045;
  double t1098;
  double t2130;
  double t96;
  double t2692;
  double t2413;
  double t3059;
  double t3130;
  double t3157;
  double t3358;
  double t3401;
  double t3441;
  double t3659;
  double t3790;
  double t3803;
  double t3805;
  double t4238;
  double t4250;
  double t4283;
  double t2227;
  double t5348;
  double t5333;
  double t5417;
  double t5454;
  double t5460;
  double t5513;
  double t5652;
  double t5669;
  double t5673;
  double t5734;
  double t4092;
  double t4096;
  double t4102;
  double t5777;
  double t5804;
  double t5811;
  double t2503;
  double t3605;
  double t3707;
  double t3746;
  double t2906;
  double t2957;
  double t2985;
  double t6191;
  double t6215;
  double t6217;
  double t6084;
  double t6169;
  double t6176;
  double t2493;
  double t2585;
  double t517;
  double t555;
  double t695;
  double t6434;
  double t6440;
  double t6451;
  double t6472;
  double t6474;
  double t6469;
  double t6470;
  double t1246;
  double t2265;
  double t6623;
  double t6624;
  double t6630;
  double t6699;
  double t6703;
  double t6721;
  double t6726;
  double t6727;
  double t6734;
  double t6746;
  double t6767;
  double t6769;
  double t6898;
  double t6902;
  double t6903;
  double t7057;
  double t7068;
  double t7094;
  double t7410;
  double t7421;
  double t7439;
  double t7447;
  double t7453;
  double t7455;
  double t7535;
  double t7561;
  double t7574;
  double t7698;
  double t7708;
  double t7713;
  double t7745;
  double t7748;
  double t7749;
  double t7728;
  double t7729;
  double t5046;
  double t5047;
  double t5187;
  double t5293;
  double t5307;
  double t7810;
  double t7816;
  double t7827;
  double t7837;
  double t7848;
  double t7859;
  double t7861;
  double t7862;
  double t7863;
  double t5919;
  double t5983;
  double t6052;
  double t6056;
  double t6074;
  double t7915;
  double t7916;
  double t7906;
  double t7907;
  double t6990;
  double t6991;
  double t7012;
  double t7028;
  double t7031;
  double t7976;
  double t7980;
  double t7981;
  double t7181;
  double t7245;
  double t7246;
  double t7469;
  double t7482;
  double t7508;
  double t8102;
  double t8103;
  double t8104;
  double t8105;
  double t8106;
  double t8110;
  double t8111;
  double t8112;
  double t8113;
  double t8116;
  double t8120;
  double t8121;
  double t8123;
  double t8124;
  double t8128;
  double t7621;
  double t7633;
  double t7668;
  double t948;
  double t2415;
  double t2885;
  double t3162;
  double t3832;
  double t3865;
  double t3909;
  double t3911;
  double t4085;
  double t4373;
  double t4388;
  double t4413;
  double t4425;
  double t4562;
  double t4822;
  double t4918;
  double t4925;
  double t4927;
  double t4960;
  double t6583;
  double t6826;
  double t8202;
  double t8204;
  double t8205;
  double t8209;
  double t8210;
  double t8212;
  double t8220;
  double t8222;
  double t8257;
  double t8258;
  double t8259;
  double t8263;
  double t8267;
  double t8268;
  double t8301;
  double t8305;
  double t8307;
  double t8300;
  double t8310;
  double t8313;
  double t8314;
  double t8320;
  double t8321;
  double t8324;
  double t8325;
  double t8326;
  double t8329;
  double t8333;
  double t8340;
  double t7372;
  double t7379;
  double t7391;
  double t7441;
  double t7468;
  double t7528;
  double t7577;
  double t7579;
  double t7588;
  double t7605;
  double t7613;
  double t7675;
  double t7693;
  double t8366;
  double t8371;
  double t8372;
  double t8034;
  double t8406;
  double t8409;
  double t8410;
  double t8414;
  double t8416;
  double t8417;
  double t8425;
  double t8426;
  double t8462;
  double t8465;
  double t8466;
  double t8471;
  double t8472;
  double t8474;
  double t8500;
  double t8510;
  double t8511;
  double t8494;
  double t8495;
  double t8496;
  double t8498;
  double t8512;
  double t8519;
  double t8520;
  double t8521;
  double t8523;
  double t8524;
  double t8531;
  double t8532;
  double t8533;
  double t8534;
  double t8535;
  double t8548;
  double t8549;
  double t8555;
  double t8562;
  double t8563;
  double t8564;
  double t8572;
  double t8573;
  double t8574;
  double t8600;
  double t8602;
  double t8605;
  double t8139;
  double t8140;
  double t8148;
  double t6684;
  double t6723;
  double t6736;
  double t6770;
  double t6972;
  double t6934;
  double t8666;
  double t8667;
  double t7790;
  double t7791;
  double t7792;
  double t6409;
  double t6464;
  double t6471;
  double t6475;
  double t6481;
  double t6483;
  double t6486;
  double t6488;
  double t6489;
  double t6506;
  double t6514;
  double t6516;
  double t6527;
  double t6533;
  double t6554;
  double t8358;
  double t8359;
  double t8360;
  double t8803;
  double t8804;
  double t8839;
  double t8843;
  double t8913;
  double t8914;
  double t7725;
  double t7727;
  double t7743;
  double t7751;
  double t7778;
  double t7779;
  double t7780;
  double t7783;
  double t7784;
  double t7787;
  double t7796;
  double t7798;
  double t9190;
  double t9196;
  double t9246;
  double t9249;
  double t8035;
  double t8038;
  double t8041;
  double t8042;
  double t8045;
  double t9529;
  double t9531;
  double t9533;
  double t8542;
  double t8544;
  double t8557;
  double t8565;
  double t8584;
  double t8579;
  double t9607;
  double t9612;
  double t9615;
  double t9617;
  double t9638;
  double t9642;
  double t9644;
  double t9653;
  double t8538;
  double t8539;
  double t8540;
  double t8099;
  double t8101;
  double t8131;
  double t8660;
  double t8662;
  double t8663;
  double t8664;
  double t8665;
  double t8668;
  double t8669;
  double t8670;
  double t8671;
  double t8672;
  double t8673;
  double t8674;
  double t8675;
  double t8678;
  double t8679;
  double t7947;
  double t7949;
  double t7952;
  double t9785;
  double t9787;
  double t5992;
  double t6075;
  double t6185;
  double t6236;
  double t6239;
  double t6243;
  double t6244;
  double t6285;
  double t6288;
  double t6302;
  double t6306;
  double t6341;
  double t6343;
  double t6344;
  double t6359;
  double t8294;
  double t8296;
  double t8344;
  double t9836;
  double t9837;
  double t7889;
  double t7894;
  double t7909;
  double t7917;
  double t7924;
  double t7933;
  double t7935;
  double t7937;
  double t7941;
  double t7943;
  double t7954;
  double t7957;
  double t9109;
  double t9169;
  double t9209;
  double t9218;
  double t9223;
  double t9292;
  double t9301;
  double t9314;
  double t9316;
  double t9321;
  double t9332;
  double t9337;
  double t9358;
  double t9364;
  double t9371;
  double t9868;
  double t9869;
  double t9764;
  double t9767;
  double t9768;
  double t9907;
  double t9534;
  double t9535;
  double t9538;
  double t9541;
  double t9548;
  double t9549;
  double t9562;
  double t9564;
  double t9565;
  double t9569;
  double t9571;
  double t9572;
  double t9573;
  double t9574;
  double t9575;
  double t9576;
  double t9578;
  double t9579;
  double t9588;
  double t9679;
  double t9680;
  double t9681;
  double t8492;
  double t8493;
  double t8536;
  double t8068;
  double t8073;
  double t8076;
  double t8080;
  double t8081;
  double t8082;
  double t8084;
  double t8087;
  double t8092;
  double t8093;
  double t8634;
  double t8635;
  double t8636;
  double t8641;
  double t8643;
  double t8644;
  double t9698;
  double t9702;
  double t9717;
  double t9719;
  double t9720;
  double t9732;
  double t7877;
  double t7883;
  double t5257;
  double t5759;
  double t5817;
  double t5825;
  double t5830;
  double t5851;
  double t5866;
  double t5887;
  double t5901;
  double t5905;
  double t8256;
  double t8262;
  double t8269;
  double t8274;
  double t8275;
  double t8280;
  double t8283;
  double t8285;
  double t8286;
  double t8943;
  double t8979;
  double t8991;
  double t8997;
  double t9043;
  double t9060;
  double t9840;
  double t9846;
  double t9848;
  double t9849;
  double t9856;
  double t9857;
  double t7806;
  double t7860;
  double t7864;
  double t7865;
  double t7875;
  double t7885;
  double t7886;
  double t9991;
  double t9993;
  double t9994;
  double t9997;
  double t9998;
  double t9954;
  double t9955;
  double t9956;
  double t10020;
  double t10021;
  double t10033;
  double t10034;
  double t10035;
  double t10036;
  double t10038;
  double t10039;
  double t8566;
  double t10051;
  double t10052;
  double t8460;
  double t8468;
  double t8478;
  double t8480;
  double t8482;
  double t8484;
  double t8486;
  double t8488;
  double t8489;
  double t8490;
  double t8151;
  double t8152;
  double t8156;
  double t8160;
  double t8165;
  double t8168;
  double t8172;
  double t8195;
  double t8725;
  double t8726;
  double t8731;
  double t8732;
  double t8734;
  double t8745;
  double t8753;
  double t8760;
  double t9949;
  double t9950;
  double t9951;
  double t9952;
  double t9741;
  double t9742;
  double t9743;
  double t9747;
  double t9749;
  double t9754;
  double t9757;
  double t9758;
  double t7984;
  double t7986;
  double t7997;
  double t6993;
  double t7109;
  double t7143;
  double t7149;
  double t7157;
  double t7178;
  double t7294;
  double t7304;
  double t8365;
  double t8373;
  double t8375;
  double t8376;
  double t8377;
  double t8380;
  double t8381;
  double t8387;
  double t8390;
  double t8391;
  double t8392;
  double t9463;
  double t9476;
  double t9477;
  double t9484;
  double t9485;
  double t9487;
  double t9509;
  double t9517;
  double t9518;
  double t9519;
  double t9521;
  double t9999;
  double t10000;
  double t10001;
  double t10006;
  double t9871;
  double t9872;
  double t9877;
  double t9882;
  double t9884;
  double t9887;
  double t9888;
  double t9890;
  double t9892;
  double t9895;
  double t9896;
  double t7964;
  double t7983;
  double t8000;
  double t8004;
  double t8007;
  double t8011;
  double t8014;
  double t8023;
  double t10066;
  double t10067;
  double t10068;
  double t10086;
  double t10087;
  double t10040;
  double t10042;
  double t10043;
  double t10044;
  double t10105;
  double t10106;
  double t10107;
  double t8599;
  double t8607;
  double t8608;
  double t8611;
  double t8612;
  double t8616;
  double t8618;
  double t8619;
  double t8620;
  double t8621;
  double t8624;
  t826 = Sin(var1[3]);
  t80 = Cos(var1[4]);
  t114 = Cos(var1[13]);
  t279 = -1.*t114;
  t431 = 1. + t279;
  t547 = Sin(var1[13]);
  t1036 = Cos(var1[14]);
  t1045 = -1.*t1036;
  t1098 = 1. + t1045;
  t2130 = Sin(var1[14]);
  t96 = Cos(var1[5]);
  t2692 = Sin(var1[5]);
  t2413 = Sin(var1[4]);
  t3059 = -1.*t80*t96*t547*t826;
  t3130 = -1.*t114*t80*t826*t2692;
  t3157 = t3059 + t3130;
  t3358 = Cos(var1[15]);
  t3401 = -1.*t3358;
  t3441 = 1. + t3401;
  t3659 = Sin(var1[15]);
  t3790 = -1.*t114*t80*t96*t826;
  t3803 = t80*t547*t826*t2692;
  t3805 = t3790 + t3803;
  t4238 = t1036*t826*t2413;
  t4250 = t2130*t3157;
  t4283 = t4238 + t4250;
  t2227 = -0.135*t2130;
  t5348 = Cos(var1[3]);
  t5333 = -1.*t96*t826*t2413;
  t5417 = t5348*t2692;
  t5454 = t5333 + t5417;
  t5460 = t547*t5454;
  t5513 = -1.*t5348*t96;
  t5652 = -1.*t826*t2413*t2692;
  t5669 = t5513 + t5652;
  t5673 = t114*t5669;
  t5734 = t5460 + t5673;
  t4092 = -0.08055*t3441;
  t4096 = -0.01004*t3659;
  t4102 = 0. + t4092 + t4096;
  t5777 = t80*t2130*t826;
  t5804 = t1036*t5734;
  t5811 = t5777 + t5804;
  t2503 = 0.07996*t547;
  t3605 = -0.01004*t3441;
  t3707 = 0.08055*t3659;
  t3746 = 0. + t3605 + t3707;
  t2906 = -0.135*t1098;
  t2957 = 0.08055*t2130;
  t2985 = 0. + t2906 + t2957;
  t6191 = t114*t5454;
  t6215 = -1.*t547*t5669;
  t6217 = t6191 + t6215;
  t6084 = -1.*t547*t5454;
  t6169 = -1.*t114*t5669;
  t6176 = t6084 + t6169;
  t2493 = -0.135*t431;
  t2585 = 0. + t2493 + t2503;
  t517 = 0.07996*t431;
  t555 = 0.135*t547;
  t695 = 0. + t517 + t555;
  t6434 = t5348*t96;
  t6440 = t826*t2413*t2692;
  t6451 = t6434 + t6440;
  t6472 = t547*t6451;
  t6474 = t6191 + t6472;
  t6469 = t114*t6451;
  t6470 = t6084 + t6469;
  t1246 = -0.08055*t1098;
  t2265 = 0. + t1246 + t2227;
  t6623 = -1.*t5348*t96*t2413;
  t6624 = -1.*t826*t2692;
  t6630 = t6623 + t6624;
  t6699 = t96*t826;
  t6703 = -1.*t5348*t2413*t2692;
  t6721 = t6699 + t6703;
  t6726 = t547*t6630;
  t6727 = t114*t6721;
  t6734 = t6726 + t6727;
  t6746 = t114*t6630;
  t6767 = -1.*t547*t6721;
  t6769 = t6746 + t6767;
  t6898 = -1.*t1036*t5348*t80;
  t6902 = t2130*t6734;
  t6903 = t6898 + t6902;
  t7057 = -1.*t1036*t80*t826;
  t7068 = t2130*t5734;
  t7094 = t7057 + t7068;
  t7410 = t5348*t80*t96*t547;
  t7421 = t114*t5348*t80*t2692;
  t7439 = t7410 + t7421;
  t7447 = t114*t5348*t80*t96;
  t7453 = -1.*t5348*t80*t547*t2692;
  t7455 = t7447 + t7453;
  t7535 = -1.*t1036*t5348*t2413;
  t7561 = t2130*t7439;
  t7574 = t7535 + t7561;
  t7698 = t5348*t96*t2413;
  t7708 = t826*t2692;
  t7713 = t7698 + t7708;
  t7745 = t114*t7713;
  t7748 = t547*t6721;
  t7749 = t7745 + t7748;
  t7728 = -1.*t547*t7713;
  t7729 = t7728 + t6727;
  t5046 = -0.135*t1036;
  t5047 = -0.08055*t2130;
  t5187 = t5046 + t5047;
  t5293 = 0.08055*t1036;
  t5307 = t5293 + t2227;
  t7810 = t547*t7713;
  t7816 = -1.*t96*t826;
  t7827 = t5348*t2413*t2692;
  t7837 = t7816 + t7827;
  t7848 = t114*t7837;
  t7859 = t7810 + t7848;
  t7861 = -1.*t5348*t80*t2130;
  t7862 = t1036*t7859;
  t7863 = t7861 + t7862;
  t5919 = 0.135*t114;
  t5983 = t5919 + t2503;
  t6052 = 0.07996*t114;
  t6056 = -0.135*t547;
  t6074 = t6052 + t6056;
  t7915 = -1.*t547*t7837;
  t7916 = t7745 + t7915;
  t7906 = -1.*t114*t7837;
  t7907 = t7728 + t7906;
  t6990 = 0.08055*t3358;
  t6991 = t6990 + t4096;
  t7012 = -0.01004*t3358;
  t7028 = -0.08055*t3659;
  t7031 = t7012 + t7028;
  t7976 = t1036*t5348*t80;
  t7980 = t2130*t7859;
  t7981 = t7976 + t7980;
  t7181 = t3358*t6217;
  t7245 = -1.*t3659*t7094;
  t7246 = t7181 + t7245;
  t7469 = t5348*t2130*t2413;
  t7482 = t1036*t7439;
  t7508 = t7469 + t7482;
  t8102 = -1.*t5348*t80*t96*t547;
  t8103 = -1.*t114*t5348*t80*t2692;
  t8104 = t8102 + t8103;
  t8105 = t3746*t8104;
  t8106 = -0.135*t1036*t7455;
  t8110 = t2985*t7455;
  t8111 = t2130*t4102*t7455;
  t8112 = t3659*t8104;
  t8113 = t3358*t2130*t7455;
  t8116 = t8112 + t8113;
  t8120 = -0.08055*t8116;
  t8121 = t3358*t8104;
  t8123 = -1.*t2130*t3659*t7455;
  t8124 = t8121 + t8123;
  t8128 = -0.01004*t8124;
  t7621 = t3358*t7455;
  t7633 = -1.*t3659*t7574;
  t7668 = t7621 + t7633;
  t948 = -1.*t80*t96*t695*t826;
  t2415 = t2265*t826*t2413;
  t2885 = -1.*t80*t2585*t826*t2692;
  t3162 = t2985*t3157;
  t3832 = t3746*t3805;
  t3865 = -1.*t2130*t826*t2413;
  t3909 = t1036*t3157;
  t3911 = t3865 + t3909;
  t4085 = -0.135*t3911;
  t4373 = t4102*t4283;
  t4388 = t3659*t3805;
  t4413 = t3358*t4283;
  t4425 = t4388 + t4413;
  t4562 = -0.08055*t4425;
  t4822 = t3358*t3805;
  t4918 = -1.*t3659*t4283;
  t4925 = t4822 + t4918;
  t4927 = -0.01004*t4925;
  t4960 = t948 + t2415 + t2885 + t3162 + t3832 + t4085 + t4373 + t4562 + t4927;
  t6583 = -1.*t5348*t80*t2265;
  t6826 = t5348*t80*t2130;
  t8202 = -1.*t5348*t96*t547*t2413;
  t8204 = -1.*t114*t5348*t2413*t2692;
  t8205 = t8202 + t8204;
  t8209 = -1.*t114*t5348*t96*t2413;
  t8210 = t5348*t547*t2413*t2692;
  t8212 = t8209 + t8210;
  t8220 = t2130*t8205;
  t8222 = t6898 + t8220;
  t8257 = t80*t96*t547*t826;
  t8258 = t114*t80*t826*t2692;
  t8259 = t8257 + t8258;
  t8263 = t2130*t826*t2413;
  t8267 = t1036*t8259;
  t8268 = t8263 + t8267;
  t8301 = t114*t80*t96*t826;
  t8305 = -1.*t80*t547*t826*t2692;
  t8307 = t8301 + t8305;
  t8300 = t3746*t3157;
  t8310 = -0.135*t1036*t8307;
  t8313 = t2985*t8307;
  t8314 = t2130*t4102*t8307;
  t8320 = t3659*t3157;
  t8321 = t3358*t2130*t8307;
  t8324 = t8320 + t8321;
  t8325 = -0.08055*t8324;
  t8326 = t3358*t3157;
  t8329 = -1.*t2130*t3659*t8307;
  t8333 = t8326 + t8329;
  t8340 = -0.01004*t8333;
  t7372 = t5348*t80*t96*t695;
  t7379 = -1.*t5348*t2265*t2413;
  t7391 = t5348*t80*t2585*t2692;
  t7441 = t2985*t7439;
  t7468 = t3746*t7455;
  t7528 = -0.135*t7508;
  t7577 = t4102*t7574;
  t7579 = t3659*t7455;
  t7588 = t3358*t7574;
  t7605 = t7579 + t7588;
  t7613 = -0.08055*t7605;
  t7675 = -0.01004*t7668;
  t7693 = t7372 + t7379 + t7391 + t7441 + t7468 + t7528 + t7577 + t7613 + t7675;
  t8366 = -1.*t1036*t826*t2413;
  t8371 = t2130*t8259;
  t8372 = t8366 + t8371;
  t8034 = -1.*t80*t2265*t826;
  t8406 = -1.*t96*t547*t826*t2413;
  t8409 = -1.*t114*t826*t2413*t2692;
  t8410 = t8406 + t8409;
  t8414 = -1.*t114*t96*t826*t2413;
  t8416 = t547*t826*t2413*t2692;
  t8417 = t8414 + t8416;
  t8425 = t2130*t8410;
  t8426 = t7057 + t8425;
  t8462 = -1.*t96*t547*t2413;
  t8465 = -1.*t114*t2413*t2692;
  t8466 = t8462 + t8465;
  t8471 = t80*t2130;
  t8472 = t1036*t8466;
  t8474 = t8471 + t8472;
  t8500 = -1.*t114*t96*t2413;
  t8510 = t547*t2413*t2692;
  t8511 = t8500 + t8510;
  t8494 = t96*t547*t2413;
  t8495 = t114*t2413*t2692;
  t8496 = t8494 + t8495;
  t8498 = t3746*t8496;
  t8512 = -0.135*t1036*t8511;
  t8519 = t2985*t8511;
  t8520 = t2130*t4102*t8511;
  t8521 = t3659*t8496;
  t8523 = t3358*t2130*t8511;
  t8524 = t8521 + t8523;
  t8531 = -0.08055*t8524;
  t8532 = t3358*t8496;
  t8533 = -1.*t2130*t3659*t8511;
  t8534 = t8532 + t8533;
  t8535 = -0.01004*t8534;
  t8548 = -1.*t80*t96*t547;
  t8549 = -1.*t114*t80*t2692;
  t8555 = t8548 + t8549;
  t8562 = -1.*t114*t80*t96;
  t8563 = t80*t547*t2692;
  t8564 = t8562 + t8563;
  t8572 = t1036*t2413;
  t8573 = t2130*t8555;
  t8574 = t8572 + t8573;
  t8600 = -1.*t1036*t80;
  t8602 = t2130*t8466;
  t8605 = t8600 + t8602;
  t8139 = t5348*t80*t96*t2585;
  t8140 = -1.*t5348*t80*t695*t2692;
  t8148 = t8139 + t8140 + t8105 + t8106 + t8110 + t8111 + t8120 + t8128;
  t6684 = t695*t6630;
  t6723 = t2585*t6721;
  t6736 = t2985*t6734;
  t6770 = t3746*t6769;
  t6972 = t3358*t6769;
  t6934 = t3659*t6769;
  t8666 = -1.*t114*t7713;
  t8667 = t8666 + t6767;
  t7790 = t3358*t7729;
  t7791 = -1.*t2130*t3659*t7749;
  t7792 = t7790 + t7791;
  t6409 = t2585*t5454;
  t6464 = t695*t6451;
  t6471 = t3746*t6470;
  t6475 = -0.135*t1036*t6474;
  t6481 = t2985*t6474;
  t6483 = t2130*t4102*t6474;
  t6486 = t3659*t6470;
  t6488 = t3358*t2130*t6474;
  t6489 = t6486 + t6488;
  t6506 = -0.08055*t6489;
  t6514 = t3358*t6470;
  t6516 = -1.*t2130*t3659*t6474;
  t6527 = t6514 + t6516;
  t6533 = -0.01004*t6527;
  t6554 = t6409 + t6464 + t6471 + t6475 + t6481 + t6483 + t6506 + t6533;
  t8358 = t80*t96*t2585*t826;
  t8359 = -1.*t80*t695*t826*t2692;
  t8360 = t8358 + t8359 + t8300 + t8310 + t8313 + t8314 + t8325 + t8340;
  t8803 = t96*t826*t2413;
  t8804 = -1.*t5348*t2692;
  t8839 = t8803 + t8804;
  t8843 = t114*t8839;
  t8913 = t547*t5669;
  t8914 = t8843 + t8913;
  t7725 = t2585*t7713;
  t7727 = t695*t6721;
  t7743 = t3746*t7729;
  t7751 = -0.135*t1036*t7749;
  t7778 = t2985*t7749;
  t7779 = t2130*t4102*t7749;
  t7780 = t3659*t7729;
  t7783 = t3358*t2130*t7749;
  t7784 = t7780 + t7783;
  t7787 = -0.08055*t7784;
  t7796 = -0.01004*t7792;
  t7798 = t7725 + t7727 + t7743 + t7751 + t7778 + t7779 + t7787 + t7796;
  t9190 = -1.*t547*t8839;
  t9196 = t9190 + t5673;
  t9246 = -1.*t114*t8839;
  t9249 = t9246 + t6215;
  t8035 = t695*t5454;
  t8038 = t2585*t5669;
  t8041 = t2985*t5734;
  t8042 = t3746*t6217;
  t8045 = t3659*t6217;
  t9529 = t114*t80*t96;
  t9531 = -1.*t80*t547*t2692;
  t9533 = t9529 + t9531;
  t8542 = -1.*t80*t96*t695;
  t8544 = -1.*t80*t2585*t2692;
  t8557 = t2985*t8555;
  t8565 = t3746*t8564;
  t8584 = t3358*t8564;
  t8579 = t3659*t8564;
  t9607 = -0.135*t1036*t8555;
  t9612 = t2130*t4102*t8555;
  t9615 = -1.*t2130*t3659*t8555;
  t9617 = t9615 + t8584;
  t9638 = -0.01004*t9617;
  t9642 = t3358*t2130*t8555;
  t9644 = t9642 + t8579;
  t9653 = -0.08055*t9644;
  t8538 = -1.*t96*t2585*t2413;
  t8539 = t695*t2413*t2692;
  t8540 = t8538 + t8539 + t8498 + t8512 + t8519 + t8520 + t8531 + t8535;
  t8099 = t5348*t80*t96*t5983;
  t8101 = t5348*t80*t6074*t2692;
  t8131 = t8099 + t8101 + t8105 + t8106 + t8110 + t8111 + t8120 + t8128;
  t8660 = t6074*t7713;
  t8662 = t5983*t6721;
  t8663 = -0.135*t1036*t7729;
  t8664 = t2985*t7729;
  t8665 = t2130*t4102*t7729;
  t8668 = t3746*t8667;
  t8669 = -1.*t2130*t3659*t7729;
  t8670 = t3358*t8667;
  t8671 = t8669 + t8670;
  t8672 = -0.01004*t8671;
  t8673 = t3358*t2130*t7729;
  t8674 = t3659*t8667;
  t8675 = t8673 + t8674;
  t8678 = -0.08055*t8675;
  t8679 = t8660 + t8662 + t8663 + t8664 + t8665 + t8668 + t8672 + t8678;
  t7947 = t3358*t7907;
  t7949 = -1.*t2130*t3659*t7916;
  t7952 = t7947 + t7949;
  t9785 = t547*t7837;
  t9787 = t8666 + t9785;
  t5992 = t5983*t5454;
  t6075 = t6074*t5669;
  t6185 = t3746*t6176;
  t6236 = -0.135*t1036*t6217;
  t6239 = t2985*t6217;
  t6243 = t2130*t4102*t6217;
  t6244 = t3659*t6176;
  t6285 = t3358*t2130*t6217;
  t6288 = t6244 + t6285;
  t6302 = -0.08055*t6288;
  t6306 = t3358*t6176;
  t6341 = -1.*t2130*t3659*t6217;
  t6343 = t6306 + t6341;
  t6344 = -0.01004*t6343;
  t6359 = t5992 + t6075 + t6185 + t6236 + t6239 + t6243 + t6302 + t6344;
  t8294 = t80*t96*t5983*t826;
  t8296 = t80*t6074*t826*t2692;
  t8344 = t8294 + t8296 + t8300 + t8310 + t8313 + t8314 + t8325 + t8340;
  t9836 = -1.*t547*t6451;
  t9837 = t8843 + t9836;
  t7889 = t5983*t7713;
  t7894 = t6074*t7837;
  t7909 = t3746*t7907;
  t7917 = -0.135*t1036*t7916;
  t7924 = t2985*t7916;
  t7933 = t2130*t4102*t7916;
  t7935 = t3659*t7907;
  t7937 = t3358*t2130*t7916;
  t7941 = t7935 + t7937;
  t7943 = -0.08055*t7941;
  t7954 = -0.01004*t7952;
  t7957 = t7889 + t7894 + t7909 + t7917 + t7924 + t7933 + t7943 + t7954;
  t9109 = t6074*t8839;
  t9169 = t5983*t5669;
  t9209 = -0.135*t1036*t9196;
  t9218 = t2985*t9196;
  t9223 = t2130*t4102*t9196;
  t9292 = t3746*t9249;
  t9301 = -1.*t2130*t3659*t9196;
  t9314 = t3358*t9249;
  t9316 = t9301 + t9314;
  t9321 = -0.01004*t9316;
  t9332 = t3358*t2130*t9196;
  t9337 = t3659*t9249;
  t9358 = t9332 + t9337;
  t9364 = -0.08055*t9358;
  t9371 = t9109 + t9169 + t9209 + t9218 + t9223 + t9292 + t9321 + t9364;
  t9868 = -1.*t114*t6451;
  t9869 = t9190 + t9868;
  t9764 = -0.135*t114;
  t9767 = -0.07996*t547;
  t9768 = t9764 + t9767;
  t9907 = t9246 + t6472;
  t9534 = -0.08055*t1036*t3358*t9533;
  t9535 = t5307*t9533;
  t9538 = 0.135*t2130*t9533;
  t9541 = t1036*t4102*t9533;
  t9548 = 0.01004*t1036*t3659*t9533;
  t9549 = t9534 + t9535 + t9538 + t9541 + t9548;
  t9562 = var2[14]*t9549;
  t9564 = t6991*t8555;
  t9565 = t2130*t7031*t9533;
  t9569 = -1.*t3659*t8555;
  t9571 = -1.*t3358*t2130*t9533;
  t9572 = t9569 + t9571;
  t9573 = -0.01004*t9572;
  t9574 = t3358*t8555;
  t9575 = -1.*t2130*t3659*t9533;
  t9576 = t9574 + t9575;
  t9578 = -0.08055*t9576;
  t9579 = t9564 + t9565 + t9573 + t9578;
  t9588 = var2[15]*t9579;
  t9679 = t80*t96*t6074;
  t9680 = -1.*t80*t5983*t2692;
  t9681 = t9679 + t9680 + t9607 + t8557 + t9612 + t8565 + t9638 + t9653;
  t8492 = -1.*t96*t5983*t2413;
  t8493 = -1.*t6074*t2413*t2692;
  t8536 = t8492 + t8493 + t8498 + t8512 + t8519 + t8520 + t8531 + t8535;
  t8068 = -1.*t5348*t5187*t2413;
  t8073 = t5307*t7439;
  t8076 = -0.08055*t3358*t7508;
  t8080 = t4102*t7508;
  t8081 = 0.01004*t3659*t7508;
  t8082 = t1036*t5348*t2413;
  t8084 = -1.*t2130*t7439;
  t8087 = t8082 + t8084;
  t8092 = -0.135*t8087;
  t8093 = t8068 + t8073 + t8076 + t8080 + t8081 + t8092;
  t8634 = -0.08055*t1036*t3358*t7749;
  t8635 = t5307*t7749;
  t8636 = 0.135*t2130*t7749;
  t8641 = t1036*t4102*t7749;
  t8643 = 0.01004*t1036*t3659*t7749;
  t8644 = t8634 + t8635 + t8636 + t8641 + t8643;
  t9698 = -0.08055*t1036*t3358*t7916;
  t9702 = t5307*t7916;
  t9717 = 0.135*t2130*t7916;
  t9719 = t1036*t4102*t7916;
  t9720 = 0.01004*t1036*t3659*t7916;
  t9732 = t9698 + t9702 + t9717 + t9719 + t9720;
  t7877 = -1.*t2130*t7859;
  t7883 = t6898 + t7877;
  t5257 = -1.*t80*t5187*t826;
  t5759 = t5307*t5734;
  t5817 = -0.08055*t3358*t5811;
  t5825 = t4102*t5811;
  t5830 = 0.01004*t3659*t5811;
  t5851 = t1036*t80*t826;
  t5866 = -1.*t2130*t5734;
  t5887 = t5851 + t5866;
  t5901 = -0.135*t5887;
  t5905 = t5257 + t5759 + t5817 + t5825 + t5830 + t5901;
  t8256 = -1.*t5187*t826*t2413;
  t8262 = t5307*t8259;
  t8269 = -0.08055*t3358*t8268;
  t8274 = t4102*t8268;
  t8275 = 0.01004*t3659*t8268;
  t8280 = -1.*t2130*t8259;
  t8283 = t4238 + t8280;
  t8285 = -0.135*t8283;
  t8286 = t8256 + t8262 + t8269 + t8274 + t8275 + t8285;
  t8943 = -0.08055*t1036*t3358*t8914;
  t8979 = t5307*t8914;
  t8991 = 0.135*t2130*t8914;
  t8997 = t1036*t4102*t8914;
  t9043 = 0.01004*t1036*t3659*t8914;
  t9060 = t8943 + t8979 + t8991 + t8997 + t9043;
  t9840 = -0.08055*t1036*t3358*t9837;
  t9846 = t5307*t9837;
  t9848 = 0.135*t2130*t9837;
  t9849 = t1036*t4102*t9837;
  t9856 = 0.01004*t1036*t3659*t9837;
  t9857 = t9840 + t9846 + t9848 + t9849 + t9856;
  t7806 = t5348*t80*t5187;
  t7860 = t5307*t7859;
  t7864 = -0.08055*t3358*t7863;
  t7865 = t4102*t7863;
  t7875 = 0.01004*t3659*t7863;
  t7885 = -0.135*t7883;
  t7886 = t7806 + t7860 + t7864 + t7865 + t7875 + t7885;
  t9991 = -1.*t80*t2130*t826;
  t9993 = t547*t8839;
  t9994 = t9993 + t6469;
  t9997 = t1036*t9994;
  t9998 = t9991 + t9997;
  t9954 = -0.08055*t1036;
  t9955 = 0.135*t2130;
  t9956 = t9954 + t9955;
  t10020 = -1.*t2130*t9994;
  t10021 = t7057 + t10020;
  t10033 = t2130*t2413;
  t10034 = t80*t96*t547;
  t10035 = t114*t80*t2692;
  t10036 = t10034 + t10035;
  t10038 = t1036*t10036;
  t10039 = t10033 + t10038;
  t8566 = -1.*t2130*t2413;
  t10051 = -1.*t2130*t10036;
  t10052 = t8572 + t10051;
  t8460 = -1.*t80*t5187;
  t8468 = t5307*t8466;
  t8478 = -0.08055*t3358*t8474;
  t8480 = t4102*t8474;
  t8482 = 0.01004*t3659*t8474;
  t8484 = t1036*t80;
  t8486 = -1.*t2130*t8466;
  t8488 = t8484 + t8486;
  t8489 = -0.135*t8488;
  t8490 = t8460 + t8468 + t8478 + t8480 + t8482 + t8489;
  t8151 = t6991*t7455;
  t8152 = t7031*t7574;
  t8156 = -1.*t3659*t7455;
  t8160 = -1.*t3358*t7574;
  t8165 = t8156 + t8160;
  t8168 = -0.01004*t8165;
  t8172 = -0.08055*t7668;
  t8195 = t8151 + t8152 + t8168 + t8172;
  t8725 = t6991*t7729;
  t8726 = t2130*t7031*t7749;
  t8731 = -1.*t3659*t7729;
  t8732 = -1.*t3358*t2130*t7749;
  t8734 = t8731 + t8732;
  t8745 = -0.01004*t8734;
  t8753 = -0.08055*t7792;
  t8760 = t8725 + t8726 + t8745 + t8753;
  t9949 = 0.01004*t3358*t7863;
  t9950 = t7031*t7863;
  t9951 = 0.08055*t3659*t7863;
  t9952 = t9949 + t9950 + t9951;
  t9741 = t6991*t7907;
  t9742 = t2130*t7031*t7916;
  t9743 = -1.*t3659*t7907;
  t9747 = -1.*t3358*t2130*t7916;
  t9749 = t9743 + t9747;
  t9754 = -0.01004*t9749;
  t9757 = -0.08055*t7952;
  t9758 = t9741 + t9742 + t9754 + t9757;
  t7984 = -1.*t3659*t7916;
  t7986 = -1.*t3358*t7981;
  t7997 = t7984 + t7986;
  t6993 = t6991*t6217;
  t7109 = t7031*t7094;
  t7143 = -1.*t3659*t6217;
  t7149 = -1.*t3358*t7094;
  t7157 = t7143 + t7149;
  t7178 = -0.01004*t7157;
  t7294 = -0.08055*t7246;
  t7304 = t6993 + t7109 + t7178 + t7294;
  t8365 = t6991*t8307;
  t8373 = t7031*t8372;
  t8375 = -1.*t3659*t8307;
  t8376 = -1.*t3358*t8372;
  t8377 = t8375 + t8376;
  t8380 = -0.01004*t8377;
  t8381 = t3358*t8307;
  t8387 = -1.*t3659*t8372;
  t8390 = t8381 + t8387;
  t8391 = -0.08055*t8390;
  t8392 = t8365 + t8373 + t8380 + t8391;
  t9463 = t6991*t9196;
  t9476 = t2130*t7031*t8914;
  t9477 = -1.*t3659*t9196;
  t9484 = -1.*t3358*t2130*t8914;
  t9485 = t9477 + t9484;
  t9487 = -0.01004*t9485;
  t9509 = t3358*t9196;
  t9517 = -1.*t2130*t3659*t8914;
  t9518 = t9509 + t9517;
  t9519 = -0.08055*t9518;
  t9521 = t9463 + t9476 + t9487 + t9519;
  t9999 = 0.01004*t3358*t9998;
  t10000 = t7031*t9998;
  t10001 = 0.08055*t3659*t9998;
  t10006 = t9999 + t10000 + t10001;
  t9871 = t6991*t9869;
  t9872 = t2130*t7031*t9837;
  t9877 = -1.*t3659*t9869;
  t9882 = -1.*t3358*t2130*t9837;
  t9884 = t9877 + t9882;
  t9887 = -0.01004*t9884;
  t9888 = t3358*t9869;
  t9890 = -1.*t2130*t3659*t9837;
  t9892 = t9888 + t9890;
  t9895 = -0.08055*t9892;
  t9896 = t9871 + t9872 + t9887 + t9895;
  t7964 = t6991*t7916;
  t7983 = t7031*t7981;
  t8000 = -0.01004*t7997;
  t8004 = t3358*t7916;
  t8007 = -1.*t3659*t7981;
  t8011 = t8004 + t8007;
  t8014 = -0.08055*t8011;
  t8023 = t7964 + t7983 + t8000 + t8014;
  t10066 = -0.08055*t3358;
  t10067 = 0.01004*t3659;
  t10068 = t10066 + t10067;
  t10086 = t2130*t9994;
  t10087 = t5851 + t10086;
  t10040 = 0.01004*t3358*t10039;
  t10042 = t7031*t10039;
  t10043 = 0.08055*t3659*t10039;
  t10044 = t10040 + t10042 + t10043;
  t10105 = -1.*t1036*t2413;
  t10106 = t2130*t10036;
  t10107 = t10105 + t10106;
  t8599 = t6991*t8511;
  t8607 = t7031*t8605;
  t8608 = -1.*t3659*t8511;
  t8611 = -1.*t3358*t8605;
  t8612 = t8608 + t8611;
  t8616 = -0.01004*t8612;
  t8618 = t3358*t8511;
  t8619 = -1.*t3659*t8605;
  t8620 = t8618 + t8619;
  t8621 = -0.08055*t8620;
  t8624 = t8599 + t8607 + t8616 + t8621;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t6583 + t6684 + t6723 + t6736 + t6770 - 0.135*(t1036*t6734 + t6826) + t4102*t6903 - 0.08055*(t3358*t6903 + t6934) - 0.01004*(-1.*t3659*t6903 + t6972))*var2[3] + t4960*var2[4] + t6554*var2[5] + t6359*var2[13] + t5905*var2[14] + t7304*var2[15];
  p_output1[10]=(-0.135*t5811 + t4102*t7094 - 0.01004*t7246 + t8034 + t8035 + t8038 + t8041 + t8042 - 0.08055*(t3358*t7094 + t8045))*var2[3] + t7693*var2[4] + t7798*var2[5] + t7957*var2[13] + t7886*var2[14] + t8023*var2[15];
  p_output1[11]=0;
  p_output1[12]=t4960*var2[3] + (-1.*t2413*t2585*t2692*t5348 + t6583 + t2985*t8205 - 0.135*(t6826 + t1036*t8205) + t3746*t8212 + t4102*t8222 - 0.08055*(t3659*t8212 + t3358*t8222) - 0.01004*(t3358*t8212 - 1.*t3659*t8222) - 1.*t2413*t5348*t695*t96)*var2[4] + t8148*var2[5] + t8131*var2[13] + t8093*var2[14] + t8195*var2[15];
  p_output1[13]=t7693*var2[3] + (t8034 - 1.*t2413*t2585*t2692*t826 + t2985*t8410 - 0.135*(t5777 + t1036*t8410) + t3746*t8417 + t4102*t8426 - 0.08055*(t3659*t8417 + t3358*t8426) - 0.01004*(t3358*t8417 - 1.*t3659*t8426) - 1.*t2413*t695*t826*t96)*var2[4] + t8360*var2[5] + t8344*var2[13] + t8286*var2[14] + t8392*var2[15];
  p_output1[14]=(t2265*t2413 + t8542 + t8544 + t8557 + t8565 - 0.135*(t1036*t8555 + t8566) + t4102*t8574 - 0.08055*(t3358*t8574 + t8579) - 0.01004*(-1.*t3659*t8574 + t8584))*var2[4] + t8540*var2[5] + t8536*var2[13] + t8490*var2[14] + t8624*var2[15];
  p_output1[15]=t6554*var2[3] + t8148*var2[4] + (t6684 + t6723 - 0.135*t1036*t6734 + t2130*t4102*t6734 + t6736 + t6770 - 0.08055*(t2130*t3358*t6734 + t6934) - 0.01004*(-1.*t2130*t3659*t6734 + t6972))*var2[5] + t8679*var2[13] + t8644*var2[14] + t8760*var2[15];
  p_output1[16]=t7798*var2[3] + t8360*var2[4] + (-0.135*t1036*t5734 + t2130*t4102*t5734 - 0.01004*(-1.*t2130*t3659*t5734 + t7181) + t8035 + t8038 + t8041 + t8042 - 0.08055*(t2130*t3358*t5734 + t8045))*var2[5] + t9371*var2[13] + t9060*var2[14] + t9521*var2[15];
  p_output1[17]=t9562 + t9588 + t8540*var2[4] + (t8542 + t8544 + t8557 + t8565 + t9607 + t9612 + t9638 + t9653)*var2[5] + t9681*var2[13];
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
  p_output1[39]=t6359*var2[3] + t8131*var2[4] + t8679*var2[5] + (-0.135*t1036*t7907 + t2985*t7907 + t2130*t4102*t7907 + t8660 + t7837*t9768 + t3746*t9787 - 0.01004*(-1.*t2130*t3659*t7907 + t3358*t9787) - 0.08055*(t2130*t3358*t7907 + t3659*t9787))*var2[13] + t9732*var2[14] + t9758*var2[15];
  p_output1[40]=t7957*var2[3] + t8344*var2[4] + t9371*var2[5] + (t9109 + t6451*t9768 - 0.135*t1036*t9869 + t2985*t9869 + t2130*t4102*t9869 + t3746*t9907 - 0.01004*(-1.*t2130*t3659*t9869 + t3358*t9907) - 0.08055*(t2130*t3358*t9869 + t3659*t9907))*var2[13] + t9857*var2[14] + t9896*var2[15];
  p_output1[41]=t9562 + t9588 + t8536*var2[4] + t9681*var2[5] + (t8557 + t8565 + t9607 + t9612 + t9638 + t9653 + t9679 + t2692*t80*t9768)*var2[13];
  p_output1[42]=t5905*var2[3] + t8093*var2[4] + t8644*var2[5] + t9732*var2[13] + (t5187*t7859 - 0.135*(t6826 - 1.*t1036*t7859) - 0.08055*t3358*t7883 + 0.01004*t3659*t7883 + t4102*t7883 + t5348*t80*t9956)*var2[14] + t9952*var2[15];
  p_output1[43]=t7886*var2[3] + t8286*var2[4] + t9060*var2[5] + t9857*var2[13] + (-0.08055*t10021*t3358 + 0.01004*t10021*t3659 + t10021*t4102 + t80*t826*t9956 + t5187*t9994 - 0.135*(t5777 - 1.*t1036*t9994))*var2[14] + t10006*var2[15];
  p_output1[44]=t8490*var2[4] + t9549*var2[5] + t9549*var2[13] + (-0.08055*t10052*t3358 + 0.01004*t10052*t3659 + t10052*t4102 + t10036*t5187 - 0.135*(-1.*t10036*t1036 + t8566) - 1.*t2413*t9956)*var2[14] + t10044*var2[15];
  p_output1[45]=t7304*var2[3] + t8195*var2[4] + t8760*var2[5] + t9758*var2[13] + t9952*var2[14] + (t7031*t7916 + t10068*t7981 - 0.01004*(-1.*t3358*t7916 + t3659*t7981) - 0.08055*t7997)*var2[15];
  p_output1[46]=t8023*var2[3] + t8392*var2[4] + t9521*var2[5] + t9896*var2[13] + t10006*var2[14] + (t10068*t10087 + t7031*t9837 - 0.01004*(t10087*t3659 - 1.*t3358*t9837) - 0.08055*(-1.*t10087*t3358 - 1.*t3659*t9837))*var2[15];
  p_output1[47]=t8624*var2[4] + t9579*var2[5] + t9579*var2[13] + t10044*var2[14] + (t10068*t10107 + t7031*t9533 - 0.01004*(t10107*t3659 - 1.*t3358*t9533) - 0.08055*(-1.*t10107*t3358 - 1.*t3659*t9533))*var2[15];
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

#include "dJp_RightThighJoint_mex.hh"

namespace SymExpression
{

void dJp_RightThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE