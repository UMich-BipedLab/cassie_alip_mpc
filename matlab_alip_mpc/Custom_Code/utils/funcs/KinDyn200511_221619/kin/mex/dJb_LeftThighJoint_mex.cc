/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:02 GMT-04:00
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
  double t686;
  double t783;
  double t663;
  double t850;
  double t480;
  double t857;
  double t63;
  double t1002;
  double t1418;
  double t988;
  double t992;
  double t1067;
  double t1471;
  double t1563;
  double t1603;
  double t1662;
  double t1687;
  double t1728;
  double t1982;
  double t2043;
  double t2135;
  double t2172;
  double t2056;
  double t2274;
  double t2293;
  double t2448;
  double t2466;
  double t2479;
  double t2692;
  double t2869;
  double t2872;
  double t2873;
  double t3242;
  double t3250;
  double t2610;
  double t2628;
  double t2798;
  double t2874;
  double t2901;
  double t3708;
  double t3715;
  double t3737;
  double t3733;
  double t3775;
  double t3781;
  double t3940;
  double t3973;
  double t3980;
  double t4110;
  double t4114;
  double t4132;
  double t4163;
  double t4340;
  double t4349;
  double t4400;
  double t4413;
  double t4414;
  double t4452;
  double t4162;
  double t4165;
  double t4260;
  double t4268;
  double t4290;
  double t4291;
  double t4299;
  double t5109;
  double t5118;
  double t5190;
  double t5258;
  double t5443;
  double t5444;
  double t5499;
  double t5505;
  double t5511;
  double t5596;
  double t811;
  double t862;
  double t927;
  double t1003;
  double t1134;
  double t1135;
  double t1142;
  double t1146;
  double t1216;
  double t1647;
  double t1737;
  double t1739;
  double t1824;
  double t1838;
  double t1866;
  double t1919;
  double t1920;
  double t1933;
  double t2440;
  double t2483;
  double t2492;
  double t2515;
  double t2524;
  double t2527;
  double t2634;
  double t2906;
  double t3058;
  double t3079;
  double t3119;
  double t3140;
  double t3255;
  double t3406;
  double t3480;
  double t3506;
  double t3553;
  double t3633;
  double t3635;
  double t3650;
  double t3662;
  double t3667;
  double t3675;
  double t3676;
  double t3679;
  double t3696;
  double t3938;
  double t3989;
  double t4002;
  double t4015;
  double t4020;
  double t4026;
  double t4173;
  double t4198;
  double t4201;
  double t4208;
  double t4269;
  double t4306;
  double t4311;
  double t4402;
  double t4459;
  double t4474;
  double t4552;
  double t4566;
  double t4587;
  double t4591;
  double t4599;
  double t4668;
  double t4698;
  double t4759;
  double t4835;
  double t4849;
  double t4919;
  double t4924;
  double t4979;
  double t5026;
  double t5052;
  double t5054;
  double t5169;
  double t5316;
  double t5402;
  double t5449;
  double t5584;
  double t5602;
  double t5606;
  double t5736;
  double t5787;
  double t5801;
  double t5822;
  double t6005;
  double t6016;
  double t6033;
  double t6050;
  double t6051;
  double t6056;
  double t6063;
  double t6066;
  double t6067;
  double t6589;
  double t6582;
  double t6584;
  double t6594;
  double t6598;
  double t6601;
  double t6607;
  double t6608;
  double t6609;
  double t6610;
  double t6619;
  double t6621;
  double t6623;
  double t6624;
  double t6625;
  double t6626;
  double t6585;
  double t6588;
  double t6602;
  double t6628;
  double t6631;
  double t6636;
  double t6638;
  double t6639;
  double t6640;
  double t6641;
  double t6654;
  double t6655;
  double t6656;
  double t6659;
  double t6661;
  double t6670;
  double t6529;
  double t6530;
  double t6531;
  double t6653;
  double t6635;
  double t6643;
  double t6644;
  double t6657;
  double t6671;
  double t6673;
  double t6677;
  double t6679;
  double t6682;
  double t6652;
  double t6674;
  double t6685;
  double t6687;
  double t6709;
  double t6711;
  double t6713;
  double t6715;
  double t6717;
  double t6719;
  double t6720;
  double t6727;
  double t6728;
  double t6729;
  double t6712;
  double t6721;
  double t6723;
  double t6743;
  double t6793;
  double t6788;
  double t6789;
  double t6791;
  double t6769;
  double t6770;
  double t6771;
  double t6773;
  double t6553;
  double t6555;
  double t6556;
  double t6537;
  double t6540;
  double t6542;
  double t6866;
  double t6867;
  double t6868;
  double t6850;
  double t6508;
  double t6509;
  double t6512;
  double t6904;
  double t6905;
  double t6913;
  double t6918;
  double t6919;
  double t6938;
  double t6939;
  double t6940;
  double t6570;
  double t6574;
  double t6575;
  double t6906;
  double t6910;
  double t6911;
  double t6951;
  double t6953;
  double t6955;
  double t6934;
  double t6945;
  double t6946;
  double t6454;
  double t6466;
  double t6467;
  double t6996;
  double t6997;
  double t7004;
  double t7006;
  double t7030;
  double t7049;
  double t7051;
  double t7052;
  double t7054;
  double t6487;
  double t6489;
  double t6495;
  double t6441;
  double t6444;
  double t6447;
  double t7199;
  double t7200;
  double t7209;
  double t7211;
  double t7223;
  double t7226;
  double t7227;
  double t7228;
  double t6451;
  double t6474;
  double t6475;
  double t6479;
  double t6500;
  double t6501;
  double t6524;
  double t6525;
  double t6526;
  double t6536;
  double t6548;
  double t6549;
  double t6550;
  double t6552;
  double t6569;
  double t6576;
  double t6579;
  double t6690;
  double t7359;
  double t7360;
  double t7361;
  double t6724;
  double t6734;
  double t6759;
  double t6761;
  double t6912;
  double t6960;
  double t6968;
  double t6975;
  double t7391;
  double t7392;
  double t7394;
  double t6792;
  double t6811;
  double t6827;
  double t6829;
  double t7009;
  double t7442;
  double t7443;
  double t7444;
  double t7022;
  double t7025;
  double t7035;
  double t7038;
  double t7065;
  double t7071;
  double t7080;
  double t7091;
  double t7466;
  double t7469;
  double t7470;
  double t7143;
  double t7146;
  double t7160;
  double t7163;
  double t7180;
  double t7191;
  double t7214;
  double t7217;
  double t7304;
  double t7318;
  double t7517;
  double t7518;
  double t7519;
  double t7533;
  double t7534;
  double t7535;
  double t7236;
  double t7243;
  double t7252;
  double t7255;
  double t7275;
  double t7277;
  double t7286;
  double t7292;
  double t7363;
  double t7600;
  double t7602;
  double t7603;
  double t7399;
  double t7401;
  double t7407;
  double t7410;
  double t7446;
  double t7651;
  double t7652;
  double t7655;
  double t7494;
  double t7496;
  double t7500;
  double t7501;
  double t7511;
  double t7512;
  double t7523;
  double t7524;
  double t7539;
  double t7543;
  double t7731;
  double t7732;
  double t7733;
  double t7746;
  double t7747;
  double t7748;
  double t7778;
  double t7779;
  double t7780;
  double t7821;
  double t7822;
  double t7823;
  double t7863;
  double t7864;
  double t7867;
  double t7875;
  double t7876;
  double t7877;
  double t7767;
  double t7768;
  double t7769;
  double t7770;
  double t7772;
  double t7773;
  double t7774;
  double t7882;
  double t7827;
  t686 = Cos(var1[7]);
  t783 = Sin(var1[8]);
  t663 = Cos(var1[6]);
  t850 = Sin(var1[5]);
  t480 = Cos(var1[5]);
  t857 = Sin(var1[6]);
  t63 = Sin(var1[3]);
  t1002 = Sin(var1[7]);
  t1418 = Cos(var1[8]);
  t988 = Cos(var1[3]);
  t992 = Cos(var1[4]);
  t1067 = Sin(var1[4]);
  t1471 = t1418*t857*t1002;
  t1563 = t663*t783;
  t1603 = t1471 + t1563;
  t1662 = t663*t1418*t1002;
  t1687 = -1.*t857*t783;
  t1728 = t1662 + t1687;
  t1982 = -1.*t1418;
  t2043 = 0. + t1982;
  t2135 = t1002*t783;
  t2172 = 0. + t2135;
  t2056 = -1.*t2043*t857;
  t2274 = t663*t2172;
  t2293 = t2056 + t2274;
  t2448 = -1.*t663*t2043;
  t2466 = -1.*t857*t2172;
  t2479 = t2448 + t2466;
  t2692 = 0. + t2056 + t2274;
  t2869 = t663*t2043;
  t2872 = t857*t2172;
  t2873 = 0. + t2869 + t2872;
  t3242 = t480*t2692;
  t3250 = -1.*t850*t2873;
  t2610 = t686*t783;
  t2628 = 0. + t2610;
  t2798 = t850*t2692;
  t2874 = t480*t2873;
  t2901 = 0. + t2798 + t2874;
  t3708 = t1418*t1002;
  t3715 = 0. + t3708;
  t3737 = 0. + t783;
  t3733 = -1.*t857*t3715;
  t3775 = -1.*t663*t3737;
  t3781 = t3733 + t3775;
  t3940 = t663*t3715;
  t3973 = -1.*t857*t3737;
  t3980 = t3940 + t3973;
  t4110 = t857*t3715;
  t4114 = t663*t3737;
  t4132 = 0. + t4110 + t4114;
  t4163 = 0. + t3940 + t3973;
  t4340 = -1.*t1418*t857;
  t4349 = -1.*t663*t1002*t783;
  t4400 = t4340 + t4349;
  t4413 = t663*t1418;
  t4414 = -1.*t857*t1002*t783;
  t4452 = t4413 + t4414;
  t4162 = -1.*t850*t4132;
  t4165 = t480*t4163;
  t4260 = t686*t1418;
  t4268 = 0. + t4260;
  t4290 = t480*t4132;
  t4291 = t850*t4163;
  t4299 = 0. + t4290 + t4291;
  t5109 = -1.*t663*t686;
  t5118 = 0. + t5109;
  t5190 = -1.*t686*t857;
  t5258 = 0. + t5190;
  t5443 = t480*t5118;
  t5444 = -1.*t850*t5258;
  t5499 = t5118*t850;
  t5505 = t480*t5258;
  t5511 = 0. + t5499 + t5505;
  t5596 = 0. + t1002;
  t811 = t480*t663*t686*t783;
  t862 = -1.*t686*t850*t857*t783;
  t927 = t811 + t862;
  t1003 = -1.*t992*t1002*t783;
  t1134 = t663*t686*t850*t783;
  t1135 = t480*t686*t857*t783;
  t1142 = t1134 + t1135;
  t1146 = t1067*t1142;
  t1216 = t1003 + t1146;
  t1647 = -1.*t850*t1603;
  t1737 = t480*t1728;
  t1739 = t1647 + t1737;
  t1824 = t992*t686*t1418;
  t1838 = t480*t1603;
  t1866 = t850*t1728;
  t1919 = t1838 + t1866;
  t1920 = t1067*t1919;
  t1933 = t1824 + t1920;
  t2440 = -1.*t850*t2293;
  t2483 = t480*t2479;
  t2492 = t2440 + t2483;
  t2515 = t480*t2293;
  t2524 = t850*t2479;
  t2527 = t2515 + t2524;
  t2634 = -1.*t1067*t2628;
  t2906 = t992*t2901;
  t3058 = t2634 + t2906;
  t3079 = -1.*t850*t2692;
  t3119 = -1.*t480*t2873;
  t3140 = t3079 + t3119;
  t3255 = t3242 + t3250;
  t3406 = 0. + t3242 + t3250;
  t3480 = t992*t2628;
  t3506 = t1067*t2901;
  t3553 = 0. + t3480 + t3506;
  t3633 = t480*t663*t686*t1418;
  t3635 = -1.*t686*t1418*t850*t857;
  t3650 = t3633 + t3635;
  t3662 = t663*t686*t1418*t850;
  t3667 = t480*t686*t1418*t857;
  t3675 = t3662 + t3667;
  t3676 = t1067*t3675;
  t3679 = -1.*t992*t1418*t1002;
  t3696 = t3676 + t3679;
  t3938 = t850*t3781;
  t3989 = t480*t3980;
  t4002 = t3938 + t3989;
  t4015 = t480*t3781;
  t4020 = -1.*t850*t3980;
  t4026 = t4015 + t4020;
  t4173 = t4162 + t4165;
  t4198 = -1.*t480*t4132;
  t4201 = -1.*t850*t4163;
  t4208 = t4198 + t4201;
  t4269 = -1.*t4268*t1067;
  t4306 = t992*t4299;
  t4311 = t4269 + t4306;
  t4402 = t480*t4400;
  t4459 = -1.*t850*t4452;
  t4474 = t4402 + t4459;
  t4552 = -1.*t992*t686*t783;
  t4566 = t850*t4400;
  t4587 = t480*t4452;
  t4591 = t4566 + t4587;
  t4599 = t1067*t4591;
  t4668 = t4552 + t4599;
  t4698 = 0. + t4162 + t4165;
  t4759 = t992*t4268;
  t4835 = t1067*t4299;
  t4849 = 0. + t4759 + t4835;
  t4919 = t663*t686*t850;
  t4924 = t480*t686*t857;
  t4979 = t4919 + t4924;
  t5026 = -1.*t480*t663*t686;
  t5052 = t686*t850*t857;
  t5054 = t5026 + t5052;
  t5169 = -1.*t5118*t850;
  t5316 = -1.*t480*t5258;
  t5402 = t5169 + t5316;
  t5449 = t5443 + t5444;
  t5584 = t992*t5511;
  t5602 = -1.*t1067*t5596;
  t5606 = t5584 + t5602;
  t5736 = 0. + t5443 + t5444;
  t5787 = t1067*t5511;
  t5801 = t992*t5596;
  t5822 = 0. + t5787 + t5801;
  t6005 = t480*t663*t1002;
  t6016 = -1.*t850*t857*t1002;
  t6033 = t6005 + t6016;
  t6050 = t992*t686;
  t6051 = t663*t850*t1002;
  t6056 = t480*t857*t1002;
  t6063 = t6051 + t6056;
  t6066 = t1067*t6063;
  t6067 = t6050 + t6066;
  t6589 = 1. + t1982;
  t6582 = -1.*t663;
  t6584 = 1. + t6582;
  t6594 = -0.01004*t6589;
  t6598 = -0.01004*t1418;
  t6601 = 0. + t6594 + t6598;
  t6607 = -1.*t686;
  t6608 = 1. + t6607;
  t6609 = 0.135*t6608;
  t6610 = 0.135*t686;
  t6619 = 0.08055*t1002;
  t6621 = -0.08055*t6589;
  t6623 = -0.08055*t1418;
  t6624 = 0. + t6621 + t6623;
  t6625 = t6624*t1002;
  t6626 = 0. + t6609 + t6610 + t6619 + t6625;
  t6585 = 0.135*t6584;
  t6588 = 0.07996*t857;
  t6602 = -1.*t6601*t857;
  t6628 = t663*t6626;
  t6631 = 0. + t6585 + t6588 + t6602 + t6628;
  t6636 = 0.07996*t6584;
  t6638 = t663*t6601;
  t6639 = -0.135*t857;
  t6640 = t857*t6626;
  t6641 = 0. + t6636 + t6638 + t6639 + t6640;
  t6654 = -0.08055*t6608;
  t6655 = t686*t6624;
  t6656 = 0. + t6654 + t6655;
  t6659 = t850*t6631;
  t6661 = t480*t6641;
  t6670 = 0. + t6659 + t6661;
  t6529 = t686*t1067*t783;
  t6530 = t992*t4591;
  t6531 = t6529 + t6530;
  t6653 = 0. + t5584 + t5602;
  t6635 = t480*t6631;
  t6643 = -1.*t850*t6641;
  t6644 = 0. + t6635 + t6643;
  t6657 = -1.*t6656*t1067;
  t6671 = t992*t6670;
  t6673 = 0. + t6657 + t6671;
  t6677 = t992*t6656;
  t6679 = t1067*t6670;
  t6682 = 0. + t6677 + t6679;
  t6652 = t5736*t6644;
  t6674 = t6653*t6673;
  t6685 = t5822*t6682;
  t6687 = t6652 + t6674 + t6685;
  t6709 = -0.135*t663;
  t6711 = t6709 + t6588 + t6602 + t6628;
  t6713 = 0.07996*t663;
  t6715 = -1.*t663*t6601;
  t6717 = 0.135*t857;
  t6719 = -1.*t857*t6626;
  t6720 = t6713 + t6715 + t6717 + t6719;
  t6727 = t480*t6711;
  t6728 = t850*t6720;
  t6729 = t6727 + t6728;
  t6712 = -1.*t850*t6711;
  t6721 = t480*t6720;
  t6723 = t6712 + t6721;
  t6743 = 0. + t4269 + t4306;
  t6793 = t6635 + t6643;
  t6788 = -1.*t850*t6631;
  t6789 = -1.*t480*t6641;
  t6791 = t6788 + t6789;
  t6769 = -1.*t6644*t4698;
  t6770 = -1.*t6673*t6743;
  t6771 = -1.*t6682*t4849;
  t6773 = t6769 + t6770 + t6771;
  t6553 = -1.*t1067*t5511;
  t6555 = -1.*t992*t5596;
  t6556 = t6553 + t6555;
  t6537 = -1.*t992*t4268;
  t6540 = -1.*t1067*t4299;
  t6542 = t6537 + t6540;
  t6866 = -1.*t992*t6656;
  t6867 = -1.*t1067*t6670;
  t6868 = t6866 + t6867;
  t6850 = t6657 + t6671;
  t6508 = t992*t3675;
  t6509 = t1418*t1067*t1002;
  t6512 = t6508 + t6509;
  t6904 = 0.08055*t686;
  t6905 = 0. + t6904 + t6655;
  t6913 = t663*t6905*t850;
  t6918 = t480*t6905*t857;
  t6919 = t6913 + t6918;
  t6938 = -0.08055*t1002;
  t6939 = -1.*t6624*t1002;
  t6940 = t6938 + t6939;
  t6570 = -1.*t686*t1067;
  t6574 = t992*t6063;
  t6575 = t6570 + t6574;
  t6906 = t480*t663*t6905;
  t6910 = -1.*t6905*t850*t857;
  t6911 = t6906 + t6910;
  t6951 = t992*t6919;
  t6953 = -1.*t1067*t6940;
  t6955 = t6951 + t6953;
  t6934 = t1067*t6919;
  t6945 = t992*t6940;
  t6946 = t6934 + t6945;
  t6454 = -1.*t686*t1418*t1067;
  t6466 = t992*t1919;
  t6467 = t6454 + t6466;
  t6996 = -1.*t5736*t6644;
  t6997 = -1.*t6653*t6673;
  t7004 = -1.*t5822*t6682;
  t7006 = t6996 + t6997 + t7004;
  t7030 = 0. + t2634 + t2906;
  t7049 = t6644*t3406;
  t7051 = t6673*t7030;
  t7052 = t6682*t3553;
  t7054 = t7049 + t7051 + t7052;
  t6487 = -1.*t992*t2628;
  t6489 = -1.*t1067*t2901;
  t6495 = t6487 + t6489;
  t6441 = t1067*t1002*t783;
  t6444 = t992*t1142;
  t6447 = t6441 + t6444;
  t7199 = t6644*t4698;
  t7200 = t6673*t6743;
  t7209 = t6682*t4849;
  t7211 = t7199 + t7200 + t7209;
  t7223 = -1.*t6644*t3406;
  t7226 = -1.*t6673*t7030;
  t7227 = -1.*t6682*t3553;
  t7228 = t7223 + t7226 + t7227;
  t6451 = var2[7]*t6447;
  t6474 = var2[8]*t6467;
  t6475 = var2[6]*t992*t2527;
  t6479 = var2[5]*t992*t3255;
  t6500 = var2[4]*t6495;
  t6501 = t6451 + t6474 + t6475 + t6479 + t6500;
  t6524 = var2[7]*t6512;
  t6525 = var2[6]*t992*t4002;
  t6526 = var2[5]*t992*t4173;
  t6536 = var2[8]*t6531;
  t6548 = var2[4]*t6542;
  t6549 = t6524 + t6525 + t6526 + t6536 + t6548;
  t6550 = var2[6]*t992*t5054;
  t6552 = var2[5]*t992*t5449;
  t6569 = var2[4]*t6556;
  t6576 = var2[7]*t6575;
  t6579 = t6550 + t6552 + t6569 + t6576;
  t6690 = -1.*t6644*t4474;
  t7359 = t6656*t5596;
  t7360 = t5511*t6670;
  t7361 = t7359 + t7360 + t6652;
  t6724 = t5736*t6723;
  t6734 = t4979*t6644;
  t6759 = -1.*t6644*t4026;
  t6761 = -1.*t6723*t4698;
  t6912 = t6911*t5736;
  t6960 = t6033*t6644;
  t6968 = -1.*t3650*t6644;
  t6975 = -1.*t6911*t4698;
  t7391 = -1.*t6656*t4268;
  t7392 = -1.*t6670*t4299;
  t7394 = t7391 + t6769 + t7392;
  t6792 = t5736*t6791;
  t6811 = t5402*t6644;
  t6827 = -1.*t6791*t4698;
  t6829 = -1.*t6644*t4208;
  t7009 = t6644*t1739;
  t7442 = -1.*t6656*t5596;
  t7443 = -1.*t5511*t6670;
  t7444 = t7442 + t7443 + t6996;
  t7022 = -1.*t5736*t6723;
  t7025 = -1.*t4979*t6644;
  t7035 = t6644*t2492;
  t7038 = t6723*t3406;
  t7065 = -1.*t5736*t6791;
  t7071 = -1.*t5402*t6644;
  t7080 = t6644*t3140;
  t7091 = t6791*t3406;
  t7466 = t6656*t2628;
  t7469 = t6670*t2901;
  t7470 = t7466 + t7469 + t7049;
  t7143 = -1.*t6911*t5736;
  t7146 = -1.*t6033*t6644;
  t7160 = t6644*t927;
  t7163 = t6911*t3406;
  t7180 = t3650*t6644;
  t7191 = t6911*t4698;
  t7214 = -1.*t6644*t927;
  t7217 = -1.*t6911*t3406;
  t7304 = -1.*t6644*t1739;
  t7318 = t6644*t4474;
  t7517 = t6656*t4268;
  t7518 = t6670*t4299;
  t7519 = t7517 + t7199 + t7518;
  t7533 = -1.*t6656*t2628;
  t7534 = -1.*t6670*t2901;
  t7535 = t7533 + t7534 + t7223;
  t7236 = t6644*t4026;
  t7243 = t6723*t4698;
  t7252 = -1.*t6644*t2492;
  t7255 = -1.*t6723*t3406;
  t7275 = t6791*t4698;
  t7277 = t6644*t4208;
  t7286 = -1.*t6644*t3140;
  t7292 = -1.*t6791*t3406;
  t7363 = t686*t6656*t783;
  t7600 = t5118*t6631;
  t7602 = t5258*t6641;
  t7603 = t7359 + t7600 + t7602;
  t7399 = t686*t6656;
  t7401 = t5596*t6940;
  t7407 = t6656*t1418*t1002;
  t7410 = -1.*t4268*t6940;
  t7446 = t686*t6656*t1418;
  t7651 = -1.*t5118*t6631;
  t7652 = -1.*t5258*t6641;
  t7655 = t7442 + t7651 + t7652;
  t7494 = -1.*t686*t6656;
  t7496 = -1.*t5596*t6940;
  t7500 = -1.*t6656*t1002*t783;
  t7501 = t6940*t2628;
  t7511 = -1.*t6656*t1418*t1002;
  t7512 = t4268*t6940;
  t7523 = t6656*t1002*t783;
  t7524 = -1.*t6940*t2628;
  t7539 = -1.*t686*t6656*t1418;
  t7543 = -1.*t686*t6656*t783;
  t7731 = t6641*t4132;
  t7732 = t6631*t4163;
  t7733 = t7517 + t7731 + t7732;
  t7746 = -1.*t6631*t2692;
  t7747 = -1.*t6641*t2873;
  t7748 = t7533 + t7746 + t7747;
  t7778 = t6656*t1002;
  t7779 = -1.*t686*t6626;
  t7780 = 0. + t7778 + t7779;
  t7821 = -1.*t6656*t1002;
  t7822 = t686*t6626;
  t7823 = 0. + t7821 + t7822;
  t7863 = t6626*t3715;
  t7864 = t6601*t3737;
  t7867 = t7517 + t7863 + t7864;
  t7875 = -1.*t2043*t6601;
  t7876 = -1.*t6626*t2172;
  t7877 = t7875 + t7533 + t7876;
  t7767 = var2[8]*t686*t1418;
  t7768 = -1.*var2[7]*t1002*t783;
  t7769 = t7767 + t7768;
  t7770 = -1.*var2[7]*t1418*t1002;
  t7772 = -1.*var2[8]*t686*t783;
  t7773 = t7770 + t7772;
  t7774 = var2[7]*t686;
  t7882 = -1.*t6601*t783;
  t7827 = t6601*t783;
  p_output1[0]=(-1.*t3553*t63 - 1.*t3406*t988)*var2[3] + t3058*t988*var2[4] + (-1.*t3140*t63 + t1067*t3255*t988)*var2[5] + (-1.*t2492*t63 + t1067*t2527*t988)*var2[6] + (-1.*t63*t927 + t1216*t988)*var2[7] + (-1.*t1739*t63 + t1933*t988)*var2[8];
  p_output1[1]=(-1.*t4849*t63 - 1.*t4698*t988)*var2[3] + t4311*t988*var2[4] + (-1.*t4208*t63 + t1067*t4173*t988)*var2[5] + (-1.*t4026*t63 + t1067*t4002*t988)*var2[6] + (-1.*t3650*t63 + t3696*t988)*var2[7] + (-1.*t4474*t63 + t4668*t988)*var2[8];
  p_output1[2]=(-1.*t5822*t63 - 1.*t5736*t988)*var2[3] + t5606*t988*var2[4] + (-1.*t5402*t63 + t1067*t5449*t988)*var2[5] + (-1.*t4979*t63 + t1067*t5054*t988)*var2[6] + (-1.*t6033*t63 + t6067*t988)*var2[7];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t3406*t63 + t3553*t988)*var2[3] + t3058*t63*var2[4] + (t1067*t3255*t63 + t3140*t988)*var2[5] + (t1067*t2527*t63 + t2492*t988)*var2[6] + (t1216*t63 + t927*t988)*var2[7] + (t1933*t63 + t1739*t988)*var2[8];
  p_output1[7]=(-1.*t4698*t63 + t4849*t988)*var2[3] + t4311*t63*var2[4] + (t1067*t4173*t63 + t4208*t988)*var2[5] + (t1067*t4002*t63 + t4026*t988)*var2[6] + (t3696*t63 + t3650*t988)*var2[7] + (t4668*t63 + t4474*t988)*var2[8];
  p_output1[8]=(-1.*t5736*t63 + t5822*t988)*var2[3] + t5606*t63*var2[4] + (t1067*t5449*t63 + t5402*t988)*var2[5] + (t1067*t5054*t63 + t4979*t988)*var2[6] + (t6067*t63 + t6033*t988)*var2[7];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t6501;
  p_output1[13]=t6549;
  p_output1[14]=t6579;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t6542*t6687 + t6556*t6773 + t6743*(t6556*t6673 + t5606*t6682 + t5822*t6850 + t6653*t6868) + t6653*(-1.*t6542*t6673 - 1.*t4311*t6682 - 1.*t4849*t6850 - 1.*t6743*t6868))*var2[4] + (t4173*t6687*t992 + t5449*t6773*t992 + t6743*(t1067*t5449*t6682 + t6792 + t1067*t5822*t6793 + t6811 + t5449*t6673*t992 + t6653*t6793*t992) + t6653*(-1.*t1067*t4173*t6682 - 1.*t1067*t4849*t6793 + t6827 + t6829 - 1.*t4173*t6673*t992 - 1.*t6743*t6793*t992))*var2[5] + (t4002*t6687*t992 + t5054*t6773*t992 + t6743*(t1067*t5054*t6682 + t6724 + t1067*t5822*t6729 + t6734 + t5054*t6673*t992 + t6653*t6729*t992) + t6653*(-1.*t1067*t4002*t6682 - 1.*t1067*t4849*t6729 + t6759 + t6761 - 1.*t4002*t6673*t992 - 1.*t6729*t6743*t992))*var2[6] + (t6512*t6687 + t6575*t6773 + t6743*(t6575*t6673 + t6067*t6682 + t6912 + t5822*t6946 + t6653*t6955 + t6960) + t6653*(-1.*t6512*t6673 - 1.*t3696*t6682 - 1.*t4849*t6946 - 1.*t6743*t6955 + t6968 + t6975))*var2[7] + (0. + t6531*t6687 + t6653*(0. - 1.*t6531*t6673 - 1.*t4668*t6682 + t6690))*var2[8];
  p_output1[19]=(t6495*t7006 + (-1.*t6556*t6673 - 1.*t5606*t6682 - 1.*t5822*t6850 - 1.*t6653*t6868)*t7030 + t6653*(t6495*t6673 + t3058*t6682 + t3553*t6850 + t6868*t7030) + t6556*t7054)*var2[4] + (t3255*t7006*t992 + t5449*t7054*t992 + t7030*(-1.*t1067*t5449*t6682 - 1.*t1067*t5822*t6793 + t7065 + t7071 - 1.*t5449*t6673*t992 - 1.*t6653*t6793*t992) + t6653*(t1067*t3255*t6682 + t1067*t3553*t6793 + t7080 + t7091 + t3255*t6673*t992 + t6793*t7030*t992))*var2[5] + (t2527*t7006*t992 + t5054*t7054*t992 + t7030*(-1.*t1067*t5054*t6682 - 1.*t1067*t5822*t6729 + t7022 + t7025 - 1.*t5054*t6673*t992 - 1.*t6653*t6729*t992) + t6653*(t1067*t2527*t6682 + t1067*t3553*t6729 + t7035 + t7038 + t2527*t6673*t992 + t6729*t7030*t992))*var2[6] + (t6447*t7006 + t6575*t7054 + t7030*(-1.*t6575*t6673 - 1.*t6067*t6682 - 1.*t5822*t6946 - 1.*t6653*t6955 + t7143 + t7146) + t6653*(t6447*t6673 + t1216*t6682 + t3553*t6946 + t6955*t7030 + t7160 + t7163))*var2[7] + (0. + t6467*t7006 + t6653*(0. + t6467*t6673 + t1933*t6682 + t7009))*var2[8];
  p_output1[20]=((t6542*t6673 + t4311*t6682 + t4849*t6850 + t6743*t6868)*t7030 + t6743*(-1.*t6495*t6673 - 1.*t3058*t6682 - 1.*t3553*t6850 - 1.*t6868*t7030) + t6495*t7211 + t6542*t7228)*var2[4] + (t3255*t7211*t992 + t4173*t7228*t992 + t7030*(t1067*t4173*t6682 + t1067*t4849*t6793 + t7275 + t7277 + t4173*t6673*t992 + t6743*t6793*t992) + t6743*(-1.*t1067*t3255*t6682 - 1.*t1067*t3553*t6793 + t7286 + t7292 - 1.*t3255*t6673*t992 - 1.*t6793*t7030*t992))*var2[5] + (t2527*t7211*t992 + t4002*t7228*t992 + t7030*(t1067*t4002*t6682 + t1067*t4849*t6729 + t7236 + t7243 + t4002*t6673*t992 + t6729*t6743*t992) + t6743*(-1.*t1067*t2527*t6682 - 1.*t1067*t3553*t6729 + t7252 + t7255 - 1.*t2527*t6673*t992 - 1.*t6729*t7030*t992))*var2[6] + (t7030*(t6512*t6673 + t3696*t6682 + t4849*t6946 + t6743*t6955 + t7180 + t7191) + t6447*t7211 + t6743*(-1.*t6447*t6673 - 1.*t1216*t6682 - 1.*t3553*t6946 - 1.*t6955*t7030 + t7214 + t7217) + t6512*t7228)*var2[7] + (t6467*t7211 + t6531*t7228 + t6743*(0. - 1.*t6467*t6673 - 1.*t1933*t6682 + t7304) + t7030*(0. + t6531*t6673 + t4668*t6682 + t7318))*var2[8];
  p_output1[21]=t6501;
  p_output1[22]=t6549;
  p_output1[23]=t6579;
  p_output1[24]=(t4698*(t5449*t6670 + t6792 + t5511*t6793 + t6811) + t5736*(-1.*t4173*t6670 - 1.*t4299*t6793 + t6827 + t6829) + t4208*t7361 + t5402*t7394)*var2[5] + (t4698*(t5054*t6670 + t6724 + t5511*t6729 + t6734) + t5736*(-1.*t4002*t6670 - 1.*t4299*t6729 + t6759 + t6761) + t4026*t7361 + t4979*t7394)*var2[6] + (t3650*t7361 + t6033*t7394 + t4698*(t6063*t6670 + t6912 + t5511*t6919 + t6960 + t7399 + t7401) + t5736*(-1.*t3675*t6670 - 1.*t4299*t6919 + t6968 + t6975 + t7407 + t7410))*var2[7] + (0. + t4474*t7361 + t5736*(0. - 1.*t4591*t6670 + t6690 + t7363))*var2[8];
  p_output1[25]=(t3406*(-1.*t5449*t6670 - 1.*t5511*t6793 + t7065 + t7071) + t5736*(t3255*t6670 + t2901*t6793 + t7080 + t7091) + t3140*t7444 + t5402*t7470)*var2[5] + (t3406*(-1.*t5054*t6670 - 1.*t5511*t6729 + t7022 + t7025) + t5736*(t2527*t6670 + t2901*t6729 + t7035 + t7038) + t2492*t7444 + t4979*t7470)*var2[6] + (t6033*t7470 + t3406*(-1.*t6063*t6670 - 1.*t5511*t6919 + t7143 + t7146 + t7494 + t7496) + t5736*(t1142*t6670 + t2901*t6919 + t7160 + t7163 + t7500 + t7501) + t7444*t927)*var2[7] + (0. + t1739*t7444 + t5736*(0. + t1919*t6670 + t7009 + t7446))*var2[8];
  p_output1[26]=(t3406*(t4173*t6670 + t4299*t6793 + t7275 + t7277) + t4698*(-1.*t3255*t6670 - 1.*t2901*t6793 + t7286 + t7292) + t3140*t7519 + t4208*t7535)*var2[5] + (t3406*(t4002*t6670 + t4299*t6729 + t7236 + t7243) + t4698*(-1.*t2527*t6670 - 1.*t2901*t6729 + t7252 + t7255) + t2492*t7519 + t4026*t7535)*var2[6] + (t3406*(t3675*t6670 + t4299*t6919 + t7180 + t7191 + t7511 + t7512) + t4698*(-1.*t1142*t6670 - 1.*t2901*t6919 + t7214 + t7217 + t7523 + t7524) + t3650*t7535 + t7519*t927)*var2[7] + (t1739*t7519 + t4474*t7535 + t4698*(0. - 1.*t1919*t6670 + t7304 + t7539) + t3406*(0. + t4591*t6670 + t7318 + t7543))*var2[8];
  p_output1[27]=t3140*var2[5] + t2492*var2[6] + t927*var2[7] + t1739*var2[8];
  p_output1[28]=t4208*var2[5] + t4026*var2[6] + t3650*var2[7] + t4474*var2[8];
  p_output1[29]=t5402*var2[5] + t4979*var2[6] + t6033*var2[7];
  p_output1[30]=(t5596*(-1.*t3781*t6631 - 1.*t3980*t6641 - 1.*t4132*t6711 - 1.*t4163*t6720) + t4268*(t5258*t6711 + t5118*t6720 - 1.*t663*t6641*t686 + t6631*t686*t857))*var2[6] + (t686*(-1.*t4163*t6631 - 1.*t4132*t6641 + t7391) - 1.*t1002*t1418*t7603 + t5596*(-1.*t1418*t663*t6631*t686 - 1.*t4163*t663*t6905 + t7407 + t7410 - 1.*t1418*t6641*t686*t857 - 1.*t4132*t6905*t857) + t4268*(t1002*t663*t6631 + t5118*t663*t6905 + t7399 + t7401 + t1002*t6641*t857 + t5258*t6905*t857))*var2[7] + (0. + t5596*(0. - 1.*t4400*t6631 - 1.*t4452*t6641 + t7363) - 1.*t686*t7603*t783)*var2[8];
  p_output1[31]=(t5596*(t2479*t6631 + t2293*t6641 + t2873*t6711 + t2692*t6720) + t2628*(-1.*t5258*t6711 - 1.*t5118*t6720 + t663*t6641*t686 - 1.*t6631*t686*t857))*var2[6] + (t686*(t2692*t6631 + t2873*t6641 + t7466) - 1.*t1002*t7655*t783 + t2628*(-1.*t1002*t663*t6631 - 1.*t5118*t663*t6905 + t7494 + t7496 - 1.*t1002*t6641*t857 - 1.*t5258*t6905*t857) + t5596*(t2692*t663*t6905 + t7500 + t7501 + t663*t6631*t686*t783 + t2873*t6905*t857 + t6641*t686*t783*t857))*var2[7] + (0. + t5596*(0. + t1728*t6631 + t1603*t6641 + t7446) + t1418*t686*t7655)*var2[8];
  p_output1[32]=(t4268*(-1.*t2479*t6631 - 1.*t2293*t6641 - 1.*t2873*t6711 - 1.*t2692*t6720) + t2628*(t3781*t6631 + t3980*t6641 + t4132*t6711 + t4163*t6720))*var2[6] + (-1.*t1002*t1418*t7748 - 1.*t1002*t7733*t783 + t2628*(t1418*t663*t6631*t686 + t4163*t663*t6905 + t7511 + t7512 + t1418*t6641*t686*t857 + t4132*t6905*t857) + t4268*(-1.*t2692*t663*t6905 + t7523 + t7524 - 1.*t663*t6631*t686*t783 - 1.*t2873*t6905*t857 - 1.*t6641*t686*t783*t857))*var2[7] + (t4268*(0. - 1.*t1728*t6631 - 1.*t1603*t6641 + t7539) + t2628*(0. + t4400*t6631 + t4452*t6641 + t7543) + t1418*t686*t7733 - 1.*t686*t7748*t783)*var2[8];
  p_output1[33]=t7769;
  p_output1[34]=t7773;
  p_output1[35]=t7774;
  p_output1[36]=(t686*(-1.*t3737*t6601 - 1.*t3715*t6626 + t7391) + t4268*(t1002*t6626 - 1.*t686*t6905 + t1002*t6940 + t7399) + t1002*(-1.*t1418*t6626*t686 - 1.*t3715*t6905 + t7407 + t7410) - 1.*t1002*t1418*t7780 + 0.07996*t686*t783)*var2[7] + (0. + 0.07996*t1002*t1418 - 0.135*t783 - 1.*t686*t7780*t783 + t1002*(0. - 1.*t1418*t6601 + t7363 + t1002*t6626*t783))*var2[8];
  p_output1[37]=(0.07996*t1418*t686 + t686*(t2043*t6601 + t2172*t6626 + t7466) + t2628*(-1.*t1002*t6626 + t686*t6905 - 1.*t1002*t6940 + t7494) - 1.*t1002*t7823*t783 + t1002*(t2172*t6905 + t7500 + t7501 + t6626*t686*t783))*var2[7] + (0. - 0.135*t1418 + t1418*t686*t7823 + t1002*(0. + t1002*t1418*t6626 + t7446 + t7827) - 0.07996*t1002*t783)*var2[8];
  p_output1[38]=(0.07996*t1002 + t2628*(t1418*t6626*t686 + t3715*t6905 + t7511 + t7512) + t4268*(-1.*t2172*t6905 + t7523 + t7524 - 1.*t6626*t686*t783) - 1.*t1002*t783*t7867 - 1.*t1002*t1418*t7877)*var2[7] + (t2628*(0. + t1418*t6601 + t7543 - 1.*t1002*t6626*t783) + t1418*t686*t7867 - 1.*t686*t783*t7877 + t4268*(0. - 1.*t1002*t1418*t6626 + t7539 + t7882))*var2[8];
  p_output1[39]=t7769;
  p_output1[40]=t7773;
  p_output1[41]=t7774;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=((0. + t1418*t6624 + t7827)*t783 + t783*(0. - 1.*t1418*t6624 + t7882))*var2[8];
  p_output1[45]=t783*var2[8];
  p_output1[46]=t1418*var2[8];
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_LeftThighJoint_mex.hh"

namespace SymExpression
{

void dJb_LeftThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
