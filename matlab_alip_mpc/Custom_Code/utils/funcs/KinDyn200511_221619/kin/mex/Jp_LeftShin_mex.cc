/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:33 GMT-04:00
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
  double t552;
  double t72;
  double t188;
  double t321;
  double t920;
  double t1254;
  double t1389;
  double t1416;
  double t1839;
  double t2256;
  double t2309;
  double t2310;
  double t463;
  double t972;
  double t1120;
  double t2884;
  double t2925;
  double t2948;
  double t2992;
  double t2403;
  double t2706;
  double t2822;
  double t3360;
  double t4068;
  double t4081;
  double t4088;
  double t4166;
  double t3948;
  double t3966;
  double t4020;
  double t4337;
  double t4372;
  double t4379;
  double t4512;
  double t4517;
  double t4525;
  double t4553;
  double t4672;
  double t4765;
  double t4806;
  double t5061;
  double t5115;
  double t5118;
  double t5183;
  double t5222;
  double t5230;
  double t5312;
  double t5368;
  double t5384;
  double t5415;
  double t5563;
  double t5565;
  double t5568;
  double t1642;
  double t1924;
  double t2029;
  double t2339;
  double t2356;
  double t2370;
  double t5795;
  double t5819;
  double t5823;
  double t5749;
  double t5759;
  double t5774;
  double t2966;
  double t3129;
  double t3204;
  double t3403;
  double t3417;
  double t3430;
  double t5841;
  double t5850;
  double t5862;
  double t4153;
  double t4178;
  double t4196;
  double t4422;
  double t4460;
  double t4479;
  double t4539;
  double t4588;
  double t4659;
  double t6003;
  double t6019;
  double t6042;
  double t6061;
  double t6068;
  double t6093;
  double t4887;
  double t4971;
  double t5043;
  double t5238;
  double t5318;
  double t5352;
  double t6155;
  double t6169;
  double t6188;
  double t6196;
  double t6197;
  double t6202;
  double t5457;
  double t5527;
  double t5557;
  double t6227;
  double t6272;
  double t6276;
  double t6297;
  double t6300;
  double t6316;
  double t6519;
  double t6525;
  double t6565;
  double t6664;
  double t6709;
  double t6719;
  double t6732;
  double t6737;
  double t6747;
  double t6767;
  double t6785;
  double t6794;
  double t6802;
  double t6829;
  double t6832;
  double t6877;
  double t6884;
  double t6888;
  double t6906;
  double t6920;
  double t6922;
  double t6988;
  double t6997;
  double t7007;
  double t7073;
  double t7074;
  double t7075;
  double t7098;
  double t7106;
  double t7154;
  double t7180;
  double t7181;
  double t7183;
  double t7213;
  double t7217;
  double t7229;
  double t7251;
  double t7253;
  double t7268;
  double t7280;
  double t7282;
  double t7287;
  double t7367;
  double t7371;
  double t7400;
  double t7455;
  double t7461;
  double t7464;
  double t7492;
  double t7493;
  double t7499;
  double t7512;
  double t7520;
  double t7536;
  double t7549;
  double t7566;
  double t7576;
  double t7582;
  double t7609;
  double t7613;
  double t7627;
  double t7630;
  double t7635;
  double t7741;
  double t7757;
  double t7758;
  double t7776;
  double t7789;
  double t7819;
  double t7820;
  double t7824;
  double t7844;
  double t7848;
  double t7851;
  double t7859;
  double t7862;
  double t7863;
  double t7877;
  double t7878;
  double t7880;
  double t7882;
  double t7892;
  double t7893;
  double t7946;
  double t7947;
  double t7948;
  double t7952;
  double t7953;
  double t7954;
  double t7969;
  double t7973;
  double t7989;
  double t7993;
  double t8004;
  double t8008;
  double t8016;
  double t8017;
  double t8024;
  double t8025;
  double t8028;
  double t8030;
  double t8033;
  double t8034;
  double t8059;
  double t8061;
  double t8062;
  double t8073;
  double t8074;
  double t8075;
  double t8080;
  double t8081;
  double t8082;
  double t8085;
  double t8087;
  double t8088;
  double t8092;
  double t8093;
  double t8095;
  double t8099;
  double t8100;
  double t8107;
  double t8144;
  double t8151;
  double t8153;
  double t8155;
  double t8156;
  double t8158;
  double t8160;
  double t8161;
  double t8164;
  double t8166;
  double t8167;
  double t8169;
  double t8171;
  double t8172;
  double t8126;
  double t8127;
  double t8129;
  double t8130;
  double t8133;
  double t8230;
  double t8233;
  double t8235;
  double t8237;
  double t8241;
  double t8252;
  double t8255;
  double t8257;
  double t8258;
  double t8263;
  double t8267;
  double t8269;
  double t8270;
  double t8276;
  double t8278;
  double t8280;
  double t8285;
  double t8286;
  double t8287;
  double t8066;
  double t8070;
  double t8071;
  double t8078;
  double t8084;
  double t8089;
  double t8096;
  double t8108;
  double t8109;
  double t8110;
  double t8116;
  double t8120;
  double t8121;
  double t8122;
  double t8123;
  double t8124;
  double t5916;
  double t5929;
  double t5951;
  double t8367;
  double t8370;
  double t8371;
  double t8374;
  double t8375;
  double t8376;
  double t8348;
  double t8349;
  double t8352;
  double t8354;
  double t8355;
  double t8398;
  double t8401;
  double t8402;
  double t8405;
  double t8406;
  double t8408;
  double t8429;
  double t8431;
  double t8437;
  double t8441;
  double t8442;
  double t8445;
  double t8461;
  double t8462;
  double t8463;
  double t8470;
  double t8471;
  double t8472;
  double t8482;
  double t8483;
  double t8486;
  double t8488;
  double t8489;
  double t8491;
  double t8511;
  double t8512;
  double t8513;
  double t8516;
  double t8517;
  double t8519;
  double t8520;
  double t8522;
  double t8503;
  double t8504;
  double t8505;
  double t8507;
  double t8508;
  double t8558;
  double t8562;
  double t8568;
  double t8573;
  double t8575;
  double t8585;
  double t8588;
  double t8591;
  double t8594;
  double t8596;
  double t8604;
  double t8608;
  double t8613;
  double t8614;
  double t8615;
  double t8645;
  double t8649;
  double t8650;
  double t8654;
  double t8655;
  double t8656;
  double t8660;
  double t8664;
  double t8665;
  double t8670;
  double t8673;
  double t8675;
  double t8679;
  double t8680;
  double t8681;
  double t8723;
  double t8724;
  double t6419;
  double t8704;
  double t8705;
  double t8708;
  double t8711;
  double t8714;
  double t8749;
  double t8750;
  double t8751;
  double t8766;
  double t8767;
  double t8773;
  double t8775;
  double t8804;
  double t8805;
  double t8808;
  double t8824;
  double t8825;
  double t8834;
  double t8835;
  double t8732;
  double t6437;
  double t6442;
  double t8856;
  double t8862;
  double t8867;
  double t8868;
  double t8869;
  double t8778;
  double t8885;
  double t8887;
  double t8888;
  double t8785;
  double t8840;
  double t8907;
  double t8908;
  double t8912;
  double t8849;
  t552 = Cos(var1[3]);
  t72 = Cos(var1[5]);
  t188 = Sin(var1[3]);
  t321 = Sin(var1[4]);
  t920 = Sin(var1[5]);
  t1254 = Cos(var1[6]);
  t1389 = -1.*t1254;
  t1416 = 1. + t1389;
  t1839 = Sin(var1[6]);
  t2256 = -1.*t552*t72;
  t2309 = -1.*t188*t321*t920;
  t2310 = t2256 + t2309;
  t463 = -1.*t72*t188*t321;
  t972 = t552*t920;
  t1120 = t463 + t972;
  t2884 = Cos(var1[7]);
  t2925 = -1.*t2884;
  t2948 = 1. + t2925;
  t2992 = Sin(var1[7]);
  t2403 = t1254*t2310;
  t2706 = t1120*t1839;
  t2822 = t2403 + t2706;
  t3360 = Cos(var1[4]);
  t4068 = Cos(var1[8]);
  t4081 = -1.*t4068;
  t4088 = 1. + t4081;
  t4166 = Sin(var1[8]);
  t3948 = -1.*t3360*t2884*t188;
  t3966 = t2822*t2992;
  t4020 = t3948 + t3966;
  t4337 = t1254*t1120;
  t4372 = -1.*t2310*t1839;
  t4379 = t4337 + t4372;
  t4512 = Cos(var1[9]);
  t4517 = -1.*t4512;
  t4525 = 1. + t4517;
  t4553 = Sin(var1[9]);
  t4672 = t4068*t4020;
  t4765 = t4379*t4166;
  t4806 = t4672 + t4765;
  t5061 = t4068*t4379;
  t5115 = -1.*t4020*t4166;
  t5118 = t5061 + t5115;
  t5183 = Cos(var1[10]);
  t5222 = -1.*t5183;
  t5230 = 1. + t5222;
  t5312 = Sin(var1[10]);
  t5368 = -1.*t4553*t4806;
  t5384 = t4512*t5118;
  t5415 = t5368 + t5384;
  t5563 = t4512*t4806;
  t5565 = t4553*t5118;
  t5568 = t5563 + t5565;
  t1642 = 0.07996*t1416;
  t1924 = -0.135*t1839;
  t2029 = 0. + t1642 + t1924;
  t2339 = 0.135*t1416;
  t2356 = 0.07996*t1839;
  t2370 = 0. + t2339 + t2356;
  t5795 = -1.*t72*t188;
  t5819 = t552*t321*t920;
  t5823 = t5795 + t5819;
  t5749 = t552*t72*t321;
  t5759 = t188*t920;
  t5774 = t5749 + t5759;
  t2966 = 0.135*t2948;
  t3129 = 0.08055*t2992;
  t3204 = 0. + t2966 + t3129;
  t3403 = -0.08055*t2948;
  t3417 = 0.135*t2992;
  t3430 = 0. + t3403 + t3417;
  t5841 = t1254*t5823;
  t5850 = t5774*t1839;
  t5862 = t5841 + t5850;
  t4153 = -0.08055*t4088;
  t4178 = -0.01004*t4166;
  t4196 = 0. + t4153 + t4178;
  t4422 = -0.01004*t4088;
  t4460 = 0.08055*t4166;
  t4479 = 0. + t4422 + t4460;
  t4539 = -0.08055*t4525;
  t4588 = -0.13004*t4553;
  t4659 = 0. + t4539 + t4588;
  t6003 = t552*t3360*t2884;
  t6019 = t5862*t2992;
  t6042 = t6003 + t6019;
  t6061 = t1254*t5774;
  t6068 = -1.*t5823*t1839;
  t6093 = t6061 + t6068;
  t4887 = -0.13004*t4525;
  t4971 = 0.08055*t4553;
  t5043 = 0. + t4887 + t4971;
  t5238 = -0.19074*t5230;
  t5318 = 0.03315*t5312;
  t5352 = 0. + t5238 + t5318;
  t6155 = t4068*t6042;
  t6169 = t6093*t4166;
  t6188 = t6155 + t6169;
  t6196 = t4068*t6093;
  t6197 = -1.*t6042*t4166;
  t6202 = t6196 + t6197;
  t5457 = -0.03315*t5230;
  t5527 = -0.19074*t5312;
  t5557 = 0. + t5457 + t5527;
  t6227 = -1.*t4553*t6188;
  t6272 = t4512*t6202;
  t6276 = t6227 + t6272;
  t6297 = t4512*t6188;
  t6300 = t4553*t6202;
  t6316 = t6297 + t6300;
  t6519 = t552*t3360*t1254*t920;
  t6525 = t552*t3360*t72*t1839;
  t6565 = t6519 + t6525;
  t6664 = -1.*t552*t2884*t321;
  t6709 = t6565*t2992;
  t6719 = t6664 + t6709;
  t6732 = t552*t3360*t72*t1254;
  t6737 = -1.*t552*t3360*t920*t1839;
  t6747 = t6732 + t6737;
  t6767 = t4068*t6719;
  t6785 = t6747*t4166;
  t6794 = t6767 + t6785;
  t6802 = t4068*t6747;
  t6829 = -1.*t6719*t4166;
  t6832 = t6802 + t6829;
  t6877 = -1.*t4553*t6794;
  t6884 = t4512*t6832;
  t6888 = t6877 + t6884;
  t6906 = t4512*t6794;
  t6920 = t4553*t6832;
  t6922 = t6906 + t6920;
  t6988 = t3360*t1254*t188*t920;
  t6997 = t3360*t72*t188*t1839;
  t7007 = t6988 + t6997;
  t7073 = -1.*t2884*t188*t321;
  t7074 = t7007*t2992;
  t7075 = t7073 + t7074;
  t7098 = t3360*t72*t1254*t188;
  t7106 = -1.*t3360*t188*t920*t1839;
  t7154 = t7098 + t7106;
  t7180 = t4068*t7075;
  t7181 = t7154*t4166;
  t7183 = t7180 + t7181;
  t7213 = t4068*t7154;
  t7217 = -1.*t7075*t4166;
  t7229 = t7213 + t7217;
  t7251 = -1.*t4553*t7183;
  t7253 = t4512*t7229;
  t7268 = t7251 + t7253;
  t7280 = t4512*t7183;
  t7282 = t4553*t7229;
  t7287 = t7280 + t7282;
  t7367 = -1.*t1254*t321*t920;
  t7371 = -1.*t72*t321*t1839;
  t7400 = t7367 + t7371;
  t7455 = -1.*t3360*t2884;
  t7461 = t7400*t2992;
  t7464 = t7455 + t7461;
  t7492 = -1.*t72*t1254*t321;
  t7493 = t321*t920*t1839;
  t7499 = t7492 + t7493;
  t7512 = t4068*t7464;
  t7520 = t7499*t4166;
  t7536 = t7512 + t7520;
  t7549 = t4068*t7499;
  t7566 = -1.*t7464*t4166;
  t7576 = t7549 + t7566;
  t7582 = -1.*t4553*t7536;
  t7609 = t4512*t7576;
  t7613 = t7582 + t7609;
  t7627 = t4512*t7536;
  t7630 = t4553*t7576;
  t7635 = t7627 + t7630;
  t7741 = t72*t188;
  t7757 = -1.*t552*t321*t920;
  t7758 = t7741 + t7757;
  t7776 = t7758*t1839;
  t7789 = t6061 + t7776;
  t7819 = t1254*t7758;
  t7820 = -1.*t5774*t1839;
  t7824 = t7819 + t7820;
  t7844 = t4068*t7789*t2992;
  t7848 = t7824*t4166;
  t7851 = t7844 + t7848;
  t7859 = t4068*t7824;
  t7862 = -1.*t7789*t2992*t4166;
  t7863 = t7859 + t7862;
  t7877 = -1.*t4553*t7851;
  t7878 = t4512*t7863;
  t7880 = t7877 + t7878;
  t7882 = t4512*t7851;
  t7892 = t4553*t7863;
  t7893 = t7882 + t7892;
  t7946 = t72*t188*t321;
  t7947 = -1.*t552*t920;
  t7948 = t7946 + t7947;
  t7952 = t1254*t7948;
  t7953 = t2310*t1839;
  t7954 = t7952 + t7953;
  t7969 = -1.*t7948*t1839;
  t7973 = t2403 + t7969;
  t7989 = t4068*t7954*t2992;
  t7993 = t7973*t4166;
  t8004 = t7989 + t7993;
  t8008 = t4068*t7973;
  t8016 = -1.*t7954*t2992*t4166;
  t8017 = t8008 + t8016;
  t8024 = -1.*t4553*t8004;
  t8025 = t4512*t8017;
  t8028 = t8024 + t8025;
  t8030 = t4512*t8004;
  t8033 = t4553*t8017;
  t8034 = t8030 + t8033;
  t8059 = t3360*t72*t1254;
  t8061 = -1.*t3360*t920*t1839;
  t8062 = t8059 + t8061;
  t8073 = -1.*t3360*t1254*t920;
  t8074 = -1.*t3360*t72*t1839;
  t8075 = t8073 + t8074;
  t8080 = t4068*t8062*t2992;
  t8081 = t8075*t4166;
  t8082 = t8080 + t8081;
  t8085 = t4068*t8075;
  t8087 = -1.*t8062*t2992*t4166;
  t8088 = t8085 + t8087;
  t8092 = -1.*t4553*t8082;
  t8093 = t4512*t8088;
  t8095 = t8092 + t8093;
  t8099 = t4512*t8082;
  t8100 = t4553*t8088;
  t8107 = t8099 + t8100;
  t8144 = -1.*t1254*t5823;
  t8151 = t8144 + t7820;
  t8153 = t4068*t6093*t2992;
  t8155 = t8151*t4166;
  t8156 = t8153 + t8155;
  t8158 = t4068*t8151;
  t8160 = -1.*t6093*t2992*t4166;
  t8161 = t8158 + t8160;
  t8164 = -1.*t4553*t8156;
  t8166 = t4512*t8161;
  t8167 = t8164 + t8166;
  t8169 = t4512*t8156;
  t8171 = t4553*t8161;
  t8172 = t8169 + t8171;
  t8126 = -0.135*t1254;
  t8127 = t8126 + t2356;
  t8129 = 0.07996*t1254;
  t8130 = 0.135*t1839;
  t8133 = t8129 + t8130;
  t8230 = t552*t72;
  t8233 = t188*t321*t920;
  t8235 = t8230 + t8233;
  t8237 = -1.*t8235*t1839;
  t8241 = t7952 + t8237;
  t8252 = -1.*t1254*t8235;
  t8255 = t8252 + t7969;
  t8257 = t4068*t8241*t2992;
  t8258 = t8255*t4166;
  t8263 = t8257 + t8258;
  t8267 = t4068*t8255;
  t8269 = -1.*t8241*t2992*t4166;
  t8270 = t8267 + t8269;
  t8276 = -1.*t4553*t8263;
  t8278 = t4512*t8270;
  t8280 = t8276 + t8278;
  t8285 = t4512*t8263;
  t8286 = t4553*t8270;
  t8287 = t8285 + t8286;
  t8066 = 0.1303*t2884*t8062;
  t8070 = t8062*t3204;
  t8071 = t8062*t2992*t4196;
  t8078 = t8075*t4479;
  t8084 = t4659*t8082;
  t8089 = t5043*t8088;
  t8096 = t5352*t8095;
  t8108 = t5557*t8107;
  t8109 = t5312*t8095;
  t8110 = t5183*t8107;
  t8116 = t8109 + t8110;
  t8120 = -0.03195*t8116;
  t8121 = t5183*t8095;
  t8122 = -1.*t5312*t8107;
  t8123 = t8121 + t8122;
  t8124 = -0.37414*t8123;
  t5916 = t2884*t5862;
  t5929 = -1.*t552*t3360*t2992;
  t5951 = t5916 + t5929;
  t8367 = -1.*t4068*t4553*t5951;
  t8370 = -1.*t4512*t5951*t4166;
  t8371 = t8367 + t8370;
  t8374 = t4512*t4068*t5951;
  t8375 = -1.*t4553*t5951*t4166;
  t8376 = t8374 + t8375;
  t8348 = 0.135*t2884;
  t8349 = -0.08055*t2992;
  t8352 = t8348 + t8349;
  t8354 = 0.08055*t2884;
  t8355 = t8354 + t3417;
  t8398 = t1254*t8235;
  t8401 = t7948*t1839;
  t8402 = t8398 + t8401;
  t8405 = t2884*t8402;
  t8406 = -1.*t3360*t188*t2992;
  t8408 = t8405 + t8406;
  t8429 = -1.*t4068*t4553*t8408;
  t8431 = -1.*t4512*t8408*t4166;
  t8437 = t8429 + t8431;
  t8441 = t4512*t4068*t8408;
  t8442 = -1.*t4553*t8408*t4166;
  t8445 = t8441 + t8442;
  t8461 = t3360*t1254*t920;
  t8462 = t3360*t72*t1839;
  t8463 = t8461 + t8462;
  t8470 = t2884*t8463;
  t8471 = t321*t2992;
  t8472 = t8470 + t8471;
  t8482 = -1.*t4068*t4553*t8472;
  t8483 = -1.*t4512*t8472*t4166;
  t8486 = t8482 + t8483;
  t8488 = t4512*t4068*t8472;
  t8489 = -1.*t4553*t8472*t4166;
  t8491 = t8488 + t8489;
  t8511 = -1.*t4068*t6042;
  t8512 = -1.*t6093*t4166;
  t8513 = t8511 + t8512;
  t8516 = t4553*t8513;
  t8517 = t8516 + t6272;
  t8519 = t4512*t8513;
  t8520 = -1.*t4553*t6202;
  t8522 = t8519 + t8520;
  t8503 = -0.01004*t4068;
  t8504 = -0.08055*t4166;
  t8505 = t8503 + t8504;
  t8507 = 0.08055*t4068;
  t8508 = t8507 + t4178;
  t8558 = t3360*t2884*t188;
  t8562 = t8402*t2992;
  t8568 = t8558 + t8562;
  t8573 = -1.*t4068*t8568;
  t8575 = -1.*t8241*t4166;
  t8585 = t8573 + t8575;
  t8588 = t4068*t8241;
  t8591 = -1.*t8568*t4166;
  t8594 = t8588 + t8591;
  t8596 = t4553*t8585;
  t8604 = t4512*t8594;
  t8608 = t8596 + t8604;
  t8613 = t4512*t8585;
  t8614 = -1.*t4553*t8594;
  t8615 = t8613 + t8614;
  t8645 = -1.*t2884*t321;
  t8649 = t8463*t2992;
  t8650 = t8645 + t8649;
  t8654 = -1.*t4068*t8650;
  t8655 = -1.*t8062*t4166;
  t8656 = t8654 + t8655;
  t8660 = t4068*t8062;
  t8664 = -1.*t8650*t4166;
  t8665 = t8660 + t8664;
  t8670 = t4553*t8656;
  t8673 = t4512*t8665;
  t8675 = t8670 + t8673;
  t8679 = t4512*t8656;
  t8680 = -1.*t4553*t8665;
  t8681 = t8679 + t8680;
  t8723 = -1.*t4512*t6188;
  t8724 = t8723 + t8520;
  t6419 = t5183*t6276;
  t8704 = -0.13004*t4512;
  t8705 = -0.08055*t4553;
  t8708 = t8704 + t8705;
  t8711 = 0.08055*t4512;
  t8714 = t8711 + t4588;
  t8749 = t4068*t8568;
  t8750 = t8241*t4166;
  t8751 = t8749 + t8750;
  t8766 = -1.*t4553*t8751;
  t8767 = t8766 + t8604;
  t8773 = -1.*t4512*t8751;
  t8775 = t8773 + t8614;
  t8804 = t4068*t8650;
  t8805 = t8062*t4166;
  t8808 = t8804 + t8805;
  t8824 = -1.*t4553*t8808;
  t8825 = t8824 + t8673;
  t8834 = -1.*t4512*t8808;
  t8835 = t8834 + t8680;
  t8732 = -1.*t5312*t6276;
  t6437 = -1.*t5312*t6316;
  t6442 = t6419 + t6437;
  t8856 = 0.03315*t5183;
  t8862 = t8856 + t5527;
  t8867 = -0.19074*t5183;
  t8868 = -0.03315*t5312;
  t8869 = t8867 + t8868;
  t8778 = -1.*t5312*t8767;
  t8885 = t4512*t8751;
  t8887 = t4553*t8594;
  t8888 = t8885 + t8887;
  t8785 = t5183*t8767;
  t8840 = -1.*t5312*t8825;
  t8907 = t4512*t8808;
  t8908 = t4553*t8665;
  t8912 = t8907 + t8908;
  t8849 = t5183*t8825;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1120*t2029 + t2310*t2370 + t2822*t3204 + 0.1303*(t2822*t2884 + t188*t2992*t3360) - 1.*t188*t3360*t3430 + t4020*t4196 + t4379*t4479 + t4659*t4806 + t5043*t5118 + t5352*t5415 + t5557*t5568 - 0.03195*(t5312*t5415 + t5183*t5568) - 0.37414*(t5183*t5415 - 1.*t5312*t5568);
  p_output1[10]=t3360*t3430*t552 + t2029*t5774 + t2370*t5823 + t3204*t5862 + 0.1303*t5951 + t4196*t6042 + t4479*t6093 + t4659*t6188 + t5043*t6202 + t5352*t6276 + t5557*t6316 - 0.03195*(t5312*t6276 + t5183*t6316) - 0.37414*t6442;
  p_output1[11]=0;
  p_output1[12]=-1.*t321*t3430*t552 + t3204*t6565 + 0.1303*(t2992*t321*t552 + t2884*t6565) + t4196*t6719 + t4479*t6747 + t4659*t6794 + t5043*t6832 + t5352*t6888 + t5557*t6922 - 0.03195*(t5312*t6888 + t5183*t6922) - 0.37414*(t5183*t6888 - 1.*t5312*t6922) + t2029*t3360*t552*t72 + t2370*t3360*t552*t920;
  p_output1[13]=-1.*t188*t321*t3430 + t3204*t7007 + 0.1303*(t188*t2992*t321 + t2884*t7007) + t4196*t7075 + t4479*t7154 + t4659*t7183 + t188*t2029*t3360*t72 + t5043*t7229 + t5352*t7268 + t5557*t7287 - 0.03195*(t5312*t7268 + t5183*t7287) - 0.37414*(t5183*t7268 - 1.*t5312*t7287) + t188*t2370*t3360*t920;
  p_output1[14]=-1.*t3360*t3430 - 1.*t2029*t321*t72 + t3204*t7400 + 0.1303*(t2992*t3360 + t2884*t7400) + t4196*t7464 + t4479*t7499 + t4659*t7536 + t5043*t7576 + t5352*t7613 + t5557*t7635 - 0.03195*(t5312*t7613 + t5183*t7635) - 0.37414*(t5183*t7613 - 1.*t5312*t7635) - 1.*t2370*t321*t920;
  p_output1[15]=t2370*t5774 + t2029*t7758 + 0.1303*t2884*t7789 + t3204*t7789 + t2992*t4196*t7789 + t4479*t7824 + t4659*t7851 + t5043*t7863 + t5352*t7880 + t5557*t7893 - 0.03195*(t5312*t7880 + t5183*t7893) - 0.37414*(t5183*t7880 - 1.*t5312*t7893);
  p_output1[16]=t2029*t2310 + t2370*t7948 + 0.1303*t2884*t7954 + t3204*t7954 + t2992*t4196*t7954 + t4479*t7973 + t4659*t8004 + t5043*t8017 + t5352*t8028 + t5557*t8034 - 0.03195*(t5312*t8028 + t5183*t8034) - 0.37414*(t5183*t8028 - 1.*t5312*t8034);
  p_output1[17]=t2370*t3360*t72 + t8066 + t8070 + t8071 + t8078 + t8084 + t8089 + t8096 + t8108 + t8120 + t8124 - 1.*t2029*t3360*t920;
  p_output1[18]=0.1303*t2884*t6093 + t3204*t6093 + t2992*t4196*t6093 + t5774*t8127 + t5823*t8133 + t4479*t8151 + t4659*t8156 + t5043*t8161 + t5352*t8167 + t5557*t8172 - 0.03195*(t5312*t8167 + t5183*t8172) - 0.37414*(t5183*t8167 - 1.*t5312*t8172);
  p_output1[19]=t7948*t8127 + t8133*t8235 + 0.1303*t2884*t8241 + t3204*t8241 + t2992*t4196*t8241 + t4479*t8255 + t4659*t8263 + t5043*t8270 + t5352*t8280 + t5557*t8287 - 0.03195*(t5312*t8280 + t5183*t8287) - 0.37414*(t5183*t8280 - 1.*t5312*t8287);
  p_output1[20]=t8066 + t8070 + t8071 + t8078 + t8084 + t8089 + t8096 + t8108 + t8120 + t8124 + t3360*t72*t8127 + t3360*t8133*t920;
  p_output1[21]=0.1303*(-1.*t2884*t3360*t552 - 1.*t2992*t5862) + t4196*t5951 + t4068*t4659*t5951 - 1.*t4166*t5043*t5951 + t3360*t552*t8352 + t5862*t8355 + t5352*t8371 + t5557*t8376 - 0.03195*(t5312*t8371 + t5183*t8376) - 0.37414*(t5183*t8371 - 1.*t5312*t8376);
  p_output1[22]=t188*t3360*t8352 + t8355*t8402 + 0.1303*(t3948 - 1.*t2992*t8402) + t4196*t8408 + t4068*t4659*t8408 - 1.*t4166*t5043*t8408 + t5352*t8437 + t5557*t8445 - 0.03195*(t5312*t8437 + t5183*t8445) - 0.37414*(t5183*t8437 - 1.*t5312*t8445);
  p_output1[23]=-1.*t321*t8352 + t8355*t8463 + 0.1303*(t2884*t321 - 1.*t2992*t8463) + t4196*t8472 + t4068*t4659*t8472 - 1.*t4166*t5043*t8472 + t5352*t8486 + t5557*t8491 - 0.03195*(t5312*t8486 + t5183*t8491) - 0.37414*(t5183*t8486 - 1.*t5312*t8491);
  p_output1[24]=t4659*t6202 + t6042*t8505 + t6093*t8508 + t5043*t8513 + t5557*t8517 + t5352*t8522 - 0.37414*(-1.*t5312*t8517 + t5183*t8522) - 0.03195*(t5183*t8517 + t5312*t8522);
  p_output1[25]=t8241*t8508 + t8505*t8568 + t5043*t8585 + t4659*t8594 + t5557*t8608 + t5352*t8615 - 0.37414*(-1.*t5312*t8608 + t5183*t8615) - 0.03195*(t5183*t8608 + t5312*t8615);
  p_output1[26]=t8062*t8508 + t8505*t8650 + t5043*t8656 + t4659*t8665 + t5557*t8675 + t5352*t8681 - 0.37414*(-1.*t5312*t8675 + t5183*t8681) - 0.03195*(t5183*t8675 + t5312*t8681);
  p_output1[27]=t5557*t6276 + t6188*t8708 + t6202*t8714 + t5352*t8724 - 0.03195*(t6419 + t5312*t8724) - 0.37414*(t5183*t8724 + t8732);
  p_output1[28]=t8594*t8714 + t8708*t8751 + t5557*t8767 + t5352*t8775 - 0.37414*(t5183*t8775 + t8778) - 0.03195*(t5312*t8775 + t8785);
  p_output1[29]=t8665*t8714 + t8708*t8808 + t5557*t8825 + t5352*t8835 - 0.37414*(t5183*t8835 + t8840) - 0.03195*(t5312*t8835 + t8849);
  p_output1[30]=-0.03195*t6442 - 0.37414*(-1.*t5183*t6316 + t8732) + t6276*t8862 + t6316*t8869;
  p_output1[31]=t8767*t8862 + t8869*t8888 - 0.37414*(t8778 - 1.*t5183*t8888) - 0.03195*(t8785 - 1.*t5312*t8888);
  p_output1[32]=t8825*t8862 + t8869*t8912 - 0.37414*(t8840 - 1.*t5183*t8912) - 0.03195*(t8849 - 1.*t5312*t8912);
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

#include "Jp_LeftShin_mex.hh"

namespace SymExpression
{

void Jp_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
