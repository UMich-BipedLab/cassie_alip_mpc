/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:57 GMT-04:00
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
  double t3010;
  double t3027;
  double t3077;
  double t3121;
  double t3176;
  double t3462;
  double t3292;
  double t3333;
  double t3470;
  double t1024;
  double t1715;
  double t1795;
  double t2040;
  double t3432;
  double t3476;
  double t3477;
  double t4144;
  double t4196;
  double t4200;
  double t999;
  double t4338;
  double t4705;
  double t4745;
  double t4930;
  double t4987;
  double t5210;
  double t5442;
  double t5485;
  double t5523;
  double t5525;
  double t6130;
  double t6133;
  double t6155;
  double t6189;
  double t6197;
  double t6207;
  double t6227;
  double t6305;
  double t6317;
  double t6331;
  double t6490;
  double t6520;
  double t6538;
  double t6575;
  double t6595;
  double t6641;
  double t6736;
  double t6754;
  double t6757;
  double t6760;
  double t6782;
  double t6806;
  double t6812;
  double t1838;
  double t2107;
  double t2881;
  double t3135;
  double t3238;
  double t3260;
  double t3876;
  double t3914;
  double t3970;
  double t4220;
  double t4227;
  double t4233;
  double t6937;
  double t6945;
  double t6947;
  double t6953;
  double t6954;
  double t6971;
  double t5350;
  double t5463;
  double t5482;
  double t6982;
  double t6984;
  double t7010;
  double t6063;
  double t6110;
  double t6123;
  double t6218;
  double t6237;
  double t6242;
  double t7029;
  double t7045;
  double t7046;
  double t7081;
  double t7091;
  double t7092;
  double t6375;
  double t6412;
  double t6438;
  double t6732;
  double t6746;
  double t6749;
  double t7099;
  double t7106;
  double t7107;
  double t7116;
  double t7117;
  double t7122;
  double t6772;
  double t6774;
  double t6775;
  double t7132;
  double t7149;
  double t7154;
  double t7184;
  double t7191;
  double t7198;
  double t7257;
  double t7258;
  double t7260;
  double t7264;
  double t7266;
  double t7267;
  double t7275;
  double t7278;
  double t7279;
  double t7281;
  double t7283;
  double t7286;
  double t7290;
  double t7291;
  double t7293;
  double t7302;
  double t7307;
  double t7308;
  double t7314;
  double t7315;
  double t7316;
  double t7349;
  double t7362;
  double t7368;
  double t7372;
  double t7374;
  double t7384;
  double t7410;
  double t7411;
  double t7413;
  double t7420;
  double t7422;
  double t7431;
  double t7438;
  double t7439;
  double t7441;
  double t7443;
  double t7451;
  double t7454;
  double t7456;
  double t7457;
  double t7463;
  double t7502;
  double t7503;
  double t7505;
  double t7510;
  double t7511;
  double t7513;
  double t7526;
  double t7528;
  double t7529;
  double t7532;
  double t7533;
  double t7538;
  double t7542;
  double t7544;
  double t7545;
  double t7551;
  double t7552;
  double t7553;
  double t7557;
  double t7558;
  double t7560;
  double t7604;
  double t7613;
  double t7614;
  double t7631;
  double t7632;
  double t7623;
  double t7624;
  double t7628;
  double t7636;
  double t7637;
  double t7638;
  double t7643;
  double t7644;
  double t7646;
  double t7658;
  double t7660;
  double t7663;
  double t7673;
  double t7675;
  double t7676;
  double t7706;
  double t7707;
  double t7708;
  double t7721;
  double t7722;
  double t7724;
  double t7715;
  double t7716;
  double t7731;
  double t7733;
  double t7739;
  double t7746;
  double t7749;
  double t7752;
  double t7755;
  double t7756;
  double t7761;
  double t7770;
  double t7771;
  double t7774;
  double t7818;
  double t7819;
  double t7823;
  double t7811;
  double t7815;
  double t7816;
  double t7835;
  double t7839;
  double t7843;
  double t7848;
  double t7849;
  double t7853;
  double t7861;
  double t7868;
  double t7873;
  double t7875;
  double t7876;
  double t7877;
  double t7913;
  double t7917;
  double t7929;
  double t7932;
  double t7934;
  double t7947;
  double t7949;
  double t7950;
  double t7954;
  double t7955;
  double t7956;
  double t7969;
  double t7975;
  double t7977;
  double t7903;
  double t7904;
  double t7906;
  double t7908;
  double t7909;
  double t8025;
  double t8027;
  double t8028;
  double t8042;
  double t8043;
  double t8034;
  double t8036;
  double t8056;
  double t8059;
  double t8060;
  double t8065;
  double t8066;
  double t8068;
  double t8079;
  double t8080;
  double t8081;
  double t8083;
  double t8084;
  double t8085;
  double t7817;
  double t7828;
  double t7831;
  double t7832;
  double t7846;
  double t7855;
  double t7874;
  double t7878;
  double t7882;
  double t7884;
  double t7887;
  double t7892;
  double t7893;
  double t7899;
  double t7900;
  double t7901;
  double t7058;
  double t7064;
  double t7066;
  double t8142;
  double t8145;
  double t8146;
  double t8149;
  double t8153;
  double t8155;
  double t8115;
  double t8116;
  double t8117;
  double t8119;
  double t8122;
  double t8172;
  double t8173;
  double t8174;
  double t8178;
  double t8180;
  double t8182;
  double t8201;
  double t8204;
  double t8205;
  double t8210;
  double t8211;
  double t8212;
  double t8239;
  double t8240;
  double t8241;
  double t8245;
  double t8252;
  double t8254;
  double t8280;
  double t8281;
  double t8285;
  double t8295;
  double t8298;
  double t8303;
  double t8342;
  double t8344;
  double t8345;
  double t8348;
  double t8351;
  double t8355;
  double t8356;
  double t8357;
  double t8330;
  double t8332;
  double t8337;
  double t8339;
  double t8340;
  double t8380;
  double t8382;
  double t8383;
  double t8386;
  double t8387;
  double t8389;
  double t8395;
  double t8396;
  double t8397;
  double t8399;
  double t8400;
  double t8402;
  double t8405;
  double t8406;
  double t8407;
  double t8425;
  double t8428;
  double t8429;
  double t8432;
  double t8433;
  double t8435;
  double t8439;
  double t8442;
  double t8443;
  double t8446;
  double t8448;
  double t8450;
  double t8455;
  double t8458;
  double t8459;
  double t8496;
  double t8498;
  double t7217;
  double t8481;
  double t8482;
  double t8483;
  double t8486;
  double t8487;
  double t8529;
  double t8532;
  double t8534;
  double t8541;
  double t8545;
  double t8547;
  double t8549;
  double t8571;
  double t8573;
  double t8579;
  double t8597;
  double t8600;
  double t8604;
  double t8610;
  double t8501;
  double t7226;
  double t7229;
  double t8628;
  double t8629;
  double t8638;
  double t8641;
  double t8646;
  double t8553;
  double t8658;
  double t8661;
  double t8663;
  double t8558;
  double t8612;
  double t8678;
  double t8679;
  double t8680;
  double t8622;
  t3010 = Sin(var1[3]);
  t3027 = Cos(var1[13]);
  t3077 = -1.*t3027;
  t3121 = 1. + t3077;
  t3176 = Sin(var1[13]);
  t3462 = Cos(var1[3]);
  t3292 = Cos(var1[5]);
  t3333 = Sin(var1[4]);
  t3470 = Sin(var1[5]);
  t1024 = Cos(var1[14]);
  t1715 = -1.*t1024;
  t1795 = 1. + t1715;
  t2040 = Sin(var1[14]);
  t3432 = -1.*t3292*t3010*t3333;
  t3476 = t3462*t3470;
  t3477 = t3432 + t3476;
  t4144 = -1.*t3462*t3292;
  t4196 = -1.*t3010*t3333*t3470;
  t4200 = t4144 + t4196;
  t999 = Cos(var1[4]);
  t4338 = t3176*t3477;
  t4705 = t3027*t4200;
  t4745 = t4338 + t4705;
  t4930 = Cos(var1[15]);
  t4987 = -1.*t4930;
  t5210 = 1. + t4987;
  t5442 = Sin(var1[15]);
  t5485 = t3027*t3477;
  t5523 = -1.*t3176*t4200;
  t5525 = t5485 + t5523;
  t6130 = -1.*t1024*t999*t3010;
  t6133 = t2040*t4745;
  t6155 = t6130 + t6133;
  t6189 = Cos(var1[16]);
  t6197 = -1.*t6189;
  t6207 = 1. + t6197;
  t6227 = Sin(var1[16]);
  t6305 = t5442*t5525;
  t6317 = t4930*t6155;
  t6331 = t6305 + t6317;
  t6490 = t4930*t5525;
  t6520 = -1.*t5442*t6155;
  t6538 = t6490 + t6520;
  t6575 = Cos(var1[17]);
  t6595 = -1.*t6575;
  t6641 = 1. + t6595;
  t6736 = Sin(var1[17]);
  t6754 = -1.*t6227*t6331;
  t6757 = t6189*t6538;
  t6760 = t6754 + t6757;
  t6782 = t6189*t6331;
  t6806 = t6227*t6538;
  t6812 = t6782 + t6806;
  t1838 = -0.08055*t1795;
  t2107 = -0.135*t2040;
  t2881 = 0. + t1838 + t2107;
  t3135 = 0.07996*t3121;
  t3238 = 0.135*t3176;
  t3260 = 0. + t3135 + t3238;
  t3876 = -0.135*t3121;
  t3914 = 0.07996*t3176;
  t3970 = 0. + t3876 + t3914;
  t4220 = -0.135*t1795;
  t4227 = 0.08055*t2040;
  t4233 = 0. + t4220 + t4227;
  t6937 = t3462*t3292*t3333;
  t6945 = t3010*t3470;
  t6947 = t6937 + t6945;
  t6953 = -1.*t3292*t3010;
  t6954 = t3462*t3333*t3470;
  t6971 = t6953 + t6954;
  t5350 = -0.01004*t5210;
  t5463 = 0.08055*t5442;
  t5482 = 0. + t5350 + t5463;
  t6982 = t3176*t6947;
  t6984 = t3027*t6971;
  t7010 = t6982 + t6984;
  t6063 = -0.08055*t5210;
  t6110 = -0.01004*t5442;
  t6123 = 0. + t6063 + t6110;
  t6218 = -0.08055*t6207;
  t6237 = -0.13004*t6227;
  t6242 = 0. + t6218 + t6237;
  t7029 = t3027*t6947;
  t7045 = -1.*t3176*t6971;
  t7046 = t7029 + t7045;
  t7081 = t1024*t3462*t999;
  t7091 = t2040*t7010;
  t7092 = t7081 + t7091;
  t6375 = -0.13004*t6207;
  t6412 = 0.08055*t6227;
  t6438 = 0. + t6375 + t6412;
  t6732 = -0.19074*t6641;
  t6746 = 0.03315*t6736;
  t6749 = 0. + t6732 + t6746;
  t7099 = t5442*t7046;
  t7106 = t4930*t7092;
  t7107 = t7099 + t7106;
  t7116 = t4930*t7046;
  t7117 = -1.*t5442*t7092;
  t7122 = t7116 + t7117;
  t6772 = -0.03315*t6641;
  t6774 = -0.19074*t6736;
  t6775 = 0. + t6772 + t6774;
  t7132 = -1.*t6227*t7107;
  t7149 = t6189*t7122;
  t7154 = t7132 + t7149;
  t7184 = t6189*t7107;
  t7191 = t6227*t7122;
  t7198 = t7184 + t7191;
  t7257 = t3462*t999*t3292*t3176;
  t7258 = t3027*t3462*t999*t3470;
  t7260 = t7257 + t7258;
  t7264 = t3027*t3462*t999*t3292;
  t7266 = -1.*t3462*t999*t3176*t3470;
  t7267 = t7264 + t7266;
  t7275 = -1.*t1024*t3462*t3333;
  t7278 = t2040*t7260;
  t7279 = t7275 + t7278;
  t7281 = t5442*t7267;
  t7283 = t4930*t7279;
  t7286 = t7281 + t7283;
  t7290 = t4930*t7267;
  t7291 = -1.*t5442*t7279;
  t7293 = t7290 + t7291;
  t7302 = -1.*t6227*t7286;
  t7307 = t6189*t7293;
  t7308 = t7302 + t7307;
  t7314 = t6189*t7286;
  t7315 = t6227*t7293;
  t7316 = t7314 + t7315;
  t7349 = t999*t3292*t3176*t3010;
  t7362 = t3027*t999*t3010*t3470;
  t7368 = t7349 + t7362;
  t7372 = t3027*t999*t3292*t3010;
  t7374 = -1.*t999*t3176*t3010*t3470;
  t7384 = t7372 + t7374;
  t7410 = -1.*t1024*t3010*t3333;
  t7411 = t2040*t7368;
  t7413 = t7410 + t7411;
  t7420 = t5442*t7384;
  t7422 = t4930*t7413;
  t7431 = t7420 + t7422;
  t7438 = t4930*t7384;
  t7439 = -1.*t5442*t7413;
  t7441 = t7438 + t7439;
  t7443 = -1.*t6227*t7431;
  t7451 = t6189*t7441;
  t7454 = t7443 + t7451;
  t7456 = t6189*t7431;
  t7457 = t6227*t7441;
  t7463 = t7456 + t7457;
  t7502 = -1.*t3292*t3176*t3333;
  t7503 = -1.*t3027*t3333*t3470;
  t7505 = t7502 + t7503;
  t7510 = -1.*t3027*t3292*t3333;
  t7511 = t3176*t3333*t3470;
  t7513 = t7510 + t7511;
  t7526 = -1.*t1024*t999;
  t7528 = t2040*t7505;
  t7529 = t7526 + t7528;
  t7532 = t5442*t7513;
  t7533 = t4930*t7529;
  t7538 = t7532 + t7533;
  t7542 = t4930*t7513;
  t7544 = -1.*t5442*t7529;
  t7545 = t7542 + t7544;
  t7551 = -1.*t6227*t7538;
  t7552 = t6189*t7545;
  t7553 = t7551 + t7552;
  t7557 = t6189*t7538;
  t7558 = t6227*t7545;
  t7560 = t7557 + t7558;
  t7604 = t3292*t3010;
  t7613 = -1.*t3462*t3333*t3470;
  t7614 = t7604 + t7613;
  t7631 = t3176*t7614;
  t7632 = t7029 + t7631;
  t7623 = -1.*t3176*t6947;
  t7624 = t3027*t7614;
  t7628 = t7623 + t7624;
  t7636 = t5442*t7628;
  t7637 = t4930*t2040*t7632;
  t7638 = t7636 + t7637;
  t7643 = t4930*t7628;
  t7644 = -1.*t2040*t5442*t7632;
  t7646 = t7643 + t7644;
  t7658 = -1.*t6227*t7638;
  t7660 = t6189*t7646;
  t7663 = t7658 + t7660;
  t7673 = t6189*t7638;
  t7675 = t6227*t7646;
  t7676 = t7673 + t7675;
  t7706 = t3292*t3010*t3333;
  t7707 = -1.*t3462*t3470;
  t7708 = t7706 + t7707;
  t7721 = t3027*t7708;
  t7722 = t3176*t4200;
  t7724 = t7721 + t7722;
  t7715 = -1.*t3176*t7708;
  t7716 = t7715 + t4705;
  t7731 = t5442*t7716;
  t7733 = t4930*t2040*t7724;
  t7739 = t7731 + t7733;
  t7746 = t4930*t7716;
  t7749 = -1.*t2040*t5442*t7724;
  t7752 = t7746 + t7749;
  t7755 = -1.*t6227*t7739;
  t7756 = t6189*t7752;
  t7761 = t7755 + t7756;
  t7770 = t6189*t7739;
  t7771 = t6227*t7752;
  t7774 = t7770 + t7771;
  t7818 = t3027*t999*t3292;
  t7819 = -1.*t999*t3176*t3470;
  t7823 = t7818 + t7819;
  t7811 = -1.*t999*t3292*t3176;
  t7815 = -1.*t3027*t999*t3470;
  t7816 = t7811 + t7815;
  t7835 = t5442*t7816;
  t7839 = t4930*t2040*t7823;
  t7843 = t7835 + t7839;
  t7848 = t4930*t7816;
  t7849 = -1.*t2040*t5442*t7823;
  t7853 = t7848 + t7849;
  t7861 = -1.*t6227*t7843;
  t7868 = t6189*t7853;
  t7873 = t7861 + t7868;
  t7875 = t6189*t7843;
  t7876 = t6227*t7853;
  t7877 = t7875 + t7876;
  t7913 = -1.*t3027*t6971;
  t7917 = t7623 + t7913;
  t7929 = t5442*t7917;
  t7932 = t4930*t2040*t7046;
  t7934 = t7929 + t7932;
  t7947 = t4930*t7917;
  t7949 = -1.*t2040*t5442*t7046;
  t7950 = t7947 + t7949;
  t7954 = -1.*t6227*t7934;
  t7955 = t6189*t7950;
  t7956 = t7954 + t7955;
  t7969 = t6189*t7934;
  t7975 = t6227*t7950;
  t7977 = t7969 + t7975;
  t7903 = 0.135*t3027;
  t7904 = t7903 + t3914;
  t7906 = 0.07996*t3027;
  t7908 = -0.135*t3176;
  t7909 = t7906 + t7908;
  t8025 = t3462*t3292;
  t8027 = t3010*t3333*t3470;
  t8028 = t8025 + t8027;
  t8042 = -1.*t3176*t8028;
  t8043 = t7721 + t8042;
  t8034 = -1.*t3027*t8028;
  t8036 = t7715 + t8034;
  t8056 = t5442*t8036;
  t8059 = t4930*t2040*t8043;
  t8060 = t8056 + t8059;
  t8065 = t4930*t8036;
  t8066 = -1.*t2040*t5442*t8043;
  t8068 = t8065 + t8066;
  t8079 = -1.*t6227*t8060;
  t8080 = t6189*t8068;
  t8081 = t8079 + t8080;
  t8083 = t6189*t8060;
  t8084 = t6227*t8068;
  t8085 = t8083 + t8084;
  t7817 = t5482*t7816;
  t7828 = -0.1305*t1024*t7823;
  t7831 = t4233*t7823;
  t7832 = t2040*t6123*t7823;
  t7846 = t6242*t7843;
  t7855 = t6438*t7853;
  t7874 = t6749*t7873;
  t7878 = t6775*t7877;
  t7882 = t6736*t7873;
  t7884 = t6575*t7877;
  t7887 = t7882 + t7884;
  t7892 = -0.03315*t7887;
  t7893 = t6575*t7873;
  t7899 = -1.*t6736*t7877;
  t7900 = t7893 + t7899;
  t7901 = -0.19074*t7900;
  t7058 = -1.*t3462*t999*t2040;
  t7064 = t1024*t7010;
  t7066 = t7058 + t7064;
  t8142 = -1.*t6189*t5442*t7066;
  t8145 = -1.*t4930*t6227*t7066;
  t8146 = t8142 + t8145;
  t8149 = t4930*t6189*t7066;
  t8153 = -1.*t5442*t6227*t7066;
  t8155 = t8149 + t8153;
  t8115 = -0.135*t1024;
  t8116 = -0.08055*t2040;
  t8117 = t8115 + t8116;
  t8119 = 0.08055*t1024;
  t8122 = t8119 + t2107;
  t8172 = t3176*t7708;
  t8173 = t3027*t8028;
  t8174 = t8172 + t8173;
  t8178 = -1.*t999*t2040*t3010;
  t8180 = t1024*t8174;
  t8182 = t8178 + t8180;
  t8201 = -1.*t6189*t5442*t8182;
  t8204 = -1.*t4930*t6227*t8182;
  t8205 = t8201 + t8204;
  t8210 = t4930*t6189*t8182;
  t8211 = -1.*t5442*t6227*t8182;
  t8212 = t8210 + t8211;
  t8239 = t999*t3292*t3176;
  t8240 = t3027*t999*t3470;
  t8241 = t8239 + t8240;
  t8245 = t2040*t3333;
  t8252 = t1024*t8241;
  t8254 = t8245 + t8252;
  t8280 = -1.*t6189*t5442*t8254;
  t8281 = -1.*t4930*t6227*t8254;
  t8285 = t8280 + t8281;
  t8295 = t4930*t6189*t8254;
  t8298 = -1.*t5442*t6227*t8254;
  t8303 = t8295 + t8298;
  t8342 = -1.*t5442*t7046;
  t8344 = -1.*t4930*t7092;
  t8345 = t8342 + t8344;
  t8348 = t6227*t8345;
  t8351 = t8348 + t7149;
  t8355 = t6189*t8345;
  t8356 = -1.*t6227*t7122;
  t8357 = t8355 + t8356;
  t8330 = 0.08055*t4930;
  t8332 = t8330 + t6110;
  t8337 = -0.01004*t4930;
  t8339 = -0.08055*t5442;
  t8340 = t8337 + t8339;
  t8380 = t1024*t999*t3010;
  t8382 = t2040*t8174;
  t8383 = t8380 + t8382;
  t8386 = -1.*t5442*t8043;
  t8387 = -1.*t4930*t8383;
  t8389 = t8386 + t8387;
  t8395 = t4930*t8043;
  t8396 = -1.*t5442*t8383;
  t8397 = t8395 + t8396;
  t8399 = t6227*t8389;
  t8400 = t6189*t8397;
  t8402 = t8399 + t8400;
  t8405 = t6189*t8389;
  t8406 = -1.*t6227*t8397;
  t8407 = t8405 + t8406;
  t8425 = -1.*t1024*t3333;
  t8428 = t2040*t8241;
  t8429 = t8425 + t8428;
  t8432 = -1.*t5442*t7823;
  t8433 = -1.*t4930*t8429;
  t8435 = t8432 + t8433;
  t8439 = t4930*t7823;
  t8442 = -1.*t5442*t8429;
  t8443 = t8439 + t8442;
  t8446 = t6227*t8435;
  t8448 = t6189*t8443;
  t8450 = t8446 + t8448;
  t8455 = t6189*t8435;
  t8458 = -1.*t6227*t8443;
  t8459 = t8455 + t8458;
  t8496 = -1.*t6189*t7107;
  t8498 = t8496 + t8356;
  t7217 = t6575*t7154;
  t8481 = -0.13004*t6189;
  t8482 = -0.08055*t6227;
  t8483 = t8481 + t8482;
  t8486 = 0.08055*t6189;
  t8487 = t8486 + t6237;
  t8529 = t5442*t8043;
  t8532 = t4930*t8383;
  t8534 = t8529 + t8532;
  t8541 = -1.*t6227*t8534;
  t8545 = t8541 + t8400;
  t8547 = -1.*t6189*t8534;
  t8549 = t8547 + t8406;
  t8571 = t5442*t7823;
  t8573 = t4930*t8429;
  t8579 = t8571 + t8573;
  t8597 = -1.*t6227*t8579;
  t8600 = t8597 + t8448;
  t8604 = -1.*t6189*t8579;
  t8610 = t8604 + t8458;
  t8501 = -1.*t6736*t7154;
  t7226 = -1.*t6736*t7198;
  t7229 = t7217 + t7226;
  t8628 = 0.03315*t6575;
  t8629 = t8628 + t6774;
  t8638 = -0.19074*t6575;
  t8641 = -0.03315*t6736;
  t8646 = t8638 + t8641;
  t8553 = -1.*t6736*t8545;
  t8658 = t6189*t8534;
  t8661 = t6227*t8397;
  t8663 = t8658 + t8661;
  t8558 = t6575*t8545;
  t8612 = -1.*t6736*t8600;
  t8678 = t6189*t8579;
  t8679 = t6227*t8443;
  t8680 = t8678 + t8679;
  t8622 = t6575*t8600;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3260*t3477 + t3970*t4200 + t4233*t4745 + t5482*t5525 + t6123*t6155 + t6242*t6331 + t6438*t6538 + t6749*t6760 + t6775*t6812 - 0.03315*(t6736*t6760 + t6575*t6812) - 0.19074*(t6575*t6760 - 1.*t6736*t6812) - 1.*t2881*t3010*t999 - 0.1305*(t1024*t4745 + t2040*t3010*t999);
  p_output1[10]=t3260*t6947 + t3970*t6971 + t4233*t7010 + t5482*t7046 - 0.1305*t7066 + t6123*t7092 + t6242*t7107 + t6438*t7122 + t6749*t7154 + t6775*t7198 - 0.03315*(t6736*t7154 + t6575*t7198) - 0.19074*t7229 + t2881*t3462*t999;
  p_output1[11]=0;
  p_output1[12]=-1.*t2881*t3333*t3462 + t4233*t7260 - 0.1305*(t2040*t3333*t3462 + t1024*t7260) + t5482*t7267 + t6123*t7279 + t6242*t7286 + t6438*t7293 + t6749*t7308 + t6775*t7316 - 0.03315*(t6736*t7308 + t6575*t7316) - 0.19074*(t6575*t7308 - 1.*t6736*t7316) + t3260*t3292*t3462*t999 + t3462*t3470*t3970*t999;
  p_output1[13]=-1.*t2881*t3010*t3333 + t4233*t7368 - 0.1305*(t2040*t3010*t3333 + t1024*t7368) + t5482*t7384 + t6123*t7413 + t6242*t7431 + t6438*t7441 + t6749*t7454 + t6775*t7463 - 0.03315*(t6736*t7454 + t6575*t7463) - 0.19074*(t6575*t7454 - 1.*t6736*t7463) + t3010*t3260*t3292*t999 + t3010*t3470*t3970*t999;
  p_output1[14]=-1.*t3260*t3292*t3333 - 1.*t3333*t3470*t3970 + t4233*t7505 + t5482*t7513 + t6123*t7529 + t6242*t7538 + t6438*t7545 + t6749*t7553 + t6775*t7560 - 0.03315*(t6736*t7553 + t6575*t7560) - 0.19074*(t6575*t7553 - 1.*t6736*t7560) - 1.*t2881*t999 - 0.1305*(t1024*t7505 + t2040*t999);
  p_output1[15]=t3970*t6947 + t3260*t7614 + t5482*t7628 - 0.1305*t1024*t7632 + t4233*t7632 + t2040*t6123*t7632 + t6242*t7638 + t6438*t7646 + t6749*t7663 + t6775*t7676 - 0.03315*(t6736*t7663 + t6575*t7676) - 0.19074*(t6575*t7663 - 1.*t6736*t7676);
  p_output1[16]=t3260*t4200 + t3970*t7708 + t5482*t7716 - 0.1305*t1024*t7724 + t4233*t7724 + t2040*t6123*t7724 + t6242*t7739 + t6438*t7752 + t6749*t7761 + t6775*t7774 - 0.03315*(t6736*t7761 + t6575*t7774) - 0.19074*(t6575*t7761 - 1.*t6736*t7774);
  p_output1[17]=t7817 + t7828 + t7831 + t7832 + t7846 + t7855 + t7874 + t7878 + t7892 + t7901 - 1.*t3260*t3470*t999 + t3292*t3970*t999;
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
  p_output1[39]=-0.1305*t1024*t7046 + t4233*t7046 + t2040*t6123*t7046 + t6947*t7904 + t6971*t7909 + t5482*t7917 + t6242*t7934 + t6438*t7950 + t6749*t7956 + t6775*t7977 - 0.03315*(t6736*t7956 + t6575*t7977) - 0.19074*(t6575*t7956 - 1.*t6736*t7977);
  p_output1[40]=t7708*t7904 + t7909*t8028 + t5482*t8036 - 0.1305*t1024*t8043 + t4233*t8043 + t2040*t6123*t8043 + t6242*t8060 + t6438*t8068 + t6749*t8081 + t6775*t8085 - 0.03315*(t6736*t8081 + t6575*t8085) - 0.19074*(t6575*t8081 - 1.*t6736*t8085);
  p_output1[41]=t7817 + t7828 + t7831 + t7832 + t7846 + t7855 + t7874 + t7878 + t7892 + t7901 + t3292*t7904*t999 + t3470*t7909*t999;
  p_output1[42]=t6123*t7066 + t4930*t6242*t7066 - 1.*t5442*t6438*t7066 + t7010*t8122 + t6749*t8146 + t6775*t8155 - 0.03315*(t6736*t8146 + t6575*t8155) - 0.19074*(t6575*t8146 - 1.*t6736*t8155) + t3462*t8117*t999 - 0.1305*(-1.*t2040*t7010 - 1.*t1024*t3462*t999);
  p_output1[43]=t8122*t8174 - 0.1305*(t6130 - 1.*t2040*t8174) + t6123*t8182 + t4930*t6242*t8182 - 1.*t5442*t6438*t8182 + t6749*t8205 + t6775*t8212 - 0.03315*(t6736*t8205 + t6575*t8212) - 0.19074*(t6575*t8205 - 1.*t6736*t8212) + t3010*t8117*t999;
  p_output1[44]=-1.*t3333*t8117 + t8122*t8241 - 0.1305*(t1024*t3333 - 1.*t2040*t8241) + t6123*t8254 + t4930*t6242*t8254 - 1.*t5442*t6438*t8254 + t6749*t8285 + t6775*t8303 - 0.03315*(t6736*t8285 + t6575*t8303) - 0.19074*(t6575*t8285 - 1.*t6736*t8303);
  p_output1[45]=t6242*t7122 + t7046*t8332 + t7092*t8340 + t6438*t8345 + t6775*t8351 + t6749*t8357 - 0.19074*(-1.*t6736*t8351 + t6575*t8357) - 0.03315*(t6575*t8351 + t6736*t8357);
  p_output1[46]=t8043*t8332 + t8340*t8383 + t6438*t8389 + t6242*t8397 + t6775*t8402 + t6749*t8407 - 0.19074*(-1.*t6736*t8402 + t6575*t8407) - 0.03315*(t6575*t8402 + t6736*t8407);
  p_output1[47]=t7823*t8332 + t8340*t8429 + t6438*t8435 + t6242*t8443 + t6775*t8450 + t6749*t8459 - 0.19074*(-1.*t6736*t8450 + t6575*t8459) - 0.03315*(t6575*t8450 + t6736*t8459);
  p_output1[48]=t6775*t7154 + t7107*t8483 + t7122*t8487 + t6749*t8498 - 0.03315*(t7217 + t6736*t8498) - 0.19074*(t6575*t8498 + t8501);
  p_output1[49]=t8397*t8487 + t8483*t8534 + t6775*t8545 + t6749*t8549 - 0.19074*(t6575*t8549 + t8553) - 0.03315*(t6736*t8549 + t8558);
  p_output1[50]=t8443*t8487 + t8483*t8579 + t6775*t8600 + t6749*t8610 - 0.19074*(t6575*t8610 + t8612) - 0.03315*(t6736*t8610 + t8622);
  p_output1[51]=-0.03315*t7229 - 0.19074*(-1.*t6575*t7198 + t8501) + t7154*t8629 + t7198*t8646;
  p_output1[52]=t8545*t8629 + t8646*t8663 - 0.19074*(t8553 - 1.*t6575*t8663) - 0.03315*(t8558 - 1.*t6736*t8663);
  p_output1[53]=t8600*t8629 + t8646*t8680 - 0.19074*(t8612 - 1.*t6575*t8680) - 0.03315*(t8622 - 1.*t6736*t8680);
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

#include "Jp_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void Jp_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
