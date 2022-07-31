/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:27 GMT-04:00
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
  double t676;
  double t545;
  double t739;
  double t570;
  double t771;
  double t511;
  double t537;
  double t612;
  double t800;
  double t896;
  double t938;
  double t964;
  double t1006;
  double t1030;
  double t1046;
  double t1054;
  double t1057;
  double t1151;
  double t1156;
  double t1211;
  double t1254;
  double t1297;
  double t470;
  double t307;
  double t1451;
  double t1462;
  double t1469;
  double t1371;
  double t1321;
  double t1606;
  double t1609;
  double t1612;
  double t1450;
  double t1556;
  double t1591;
  double t1784;
  double t1838;
  double t1732;
  double t1754;
  double t2173;
  double t2174;
  double t2225;
  double t2031;
  double t2045;
  double t2048;
  double t2067;
  double t2071;
  double t2126;
  double t2484;
  double t2497;
  double t2526;
  double t2443;
  double t2457;
  double t2462;
  double t2565;
  double t2583;
  double t2590;
  double t2441;
  double t2463;
  double t2527;
  double t2536;
  double t2546;
  double t2559;
  double t2734;
  double t2736;
  double t2743;
  double t2850;
  double t2865;
  double t2875;
  double t2880;
  double t3003;
  double t3051;
  double t3055;
  double t3057;
  double t3087;
  double t3100;
  double t3107;
  double t3133;
  double t3144;
  double t3162;
  double t3164;
  double t3171;
  double t3232;
  double t3237;
  double t3206;
  double t3216;
  double t3225;
  double t3391;
  double t3409;
  double t3354;
  double t3374;
  double t3580;
  double t3588;
  double t3589;
  double t3504;
  double t3507;
  double t3519;
  double t3535;
  double t3539;
  double t3563;
  double t3642;
  double t3671;
  double t3673;
  double t3687;
  double t3701;
  double t3716;
  double t3717;
  double t2922;
  double t2935;
  double t2944;
  double t3818;
  double t3822;
  double t3830;
  double t3835;
  double t3839;
  double t3843;
  double t3943;
  double t3945;
  double t3953;
  double t3877;
  double t3884;
  double t3941;
  double t3942;
  double t3970;
  double t3974;
  double t3978;
  double t3984;
  double t4009;
  double t4040;
  double t4042;
  double t4046;
  double t4064;
  double t4067;
  double t4068;
  double t4092;
  double t4094;
  double t4110;
  double t4124;
  double t4219;
  double t4223;
  double t4232;
  double t4189;
  double t4190;
  double t4196;
  double t4198;
  double t4201;
  double t4203;
  double t1599;
  double t1615;
  double t1654;
  double t1659;
  double t1662;
  double t1690;
  double t1783;
  double t1843;
  double t1876;
  double t1884;
  double t1903;
  double t1908;
  double t2171;
  double t2248;
  double t2251;
  double t2311;
  double t2320;
  double t2351;
  double t2561;
  double t2620;
  double t2637;
  double t2649;
  double t2653;
  double t2662;
  double t2773;
  double t2782;
  double t2803;
  double t4404;
  double t3229;
  double t3244;
  double t3249;
  double t3269;
  double t3282;
  double t3285;
  double t3389;
  double t3420;
  double t3423;
  double t3455;
  double t3456;
  double t3458;
  double t3570;
  double t3595;
  double t3598;
  double t3606;
  double t3629;
  double t3630;
  double t3675;
  double t3676;
  double t3679;
  double t3728;
  double t3742;
  double t3746;
  double t4560;
  double t2959;
  double t2971;
  double t4672;
  double t4679;
  double t4683;
  double t4077;
  double t4084;
  double t4085;
  double t4167;
  double t4171;
  double t4174;
  double t4720;
  double t4205;
  double t4233;
  double t4234;
  double t4239;
  double t4241;
  double t4242;
  double t5109;
  double t5116;
  double t4274;
  double t4277;
  double t4279;
  double t5412;
  double t5413;
  double t5256;
  double t5257;
  double t5272;
  double t5274;
  double t5284;
  double t5125;
  double t5126;
  double t5134;
  double t5293;
  double t5336;
  double t5347;
  double t4306;
  double t4307;
  double t4310;
  double t5440;
  double t5472;
  double t5474;
  double t5488;
  double t5492;
  double t5493;
  double t5498;
  double t5507;
  double t5508;
  double t4315;
  double t4322;
  double t4324;
  double t5417;
  double t5423;
  double t5426;
  double t5439;
  double t5445;
  double t5081;
  double t4339;
  double t4341;
  double t4349;
  double t5722;
  double t5723;
  double t4371;
  double t4379;
  double t4394;
  double t4400;
  double t4405;
  double t4414;
  double t4419;
  double t5939;
  double t5047;
  double t5053;
  double t5055;
  double t5068;
  double t5087;
  double t4449;
  double t4453;
  double t4466;
  double t4468;
  double t4479;
  double t4482;
  double t5588;
  double t5589;
  double t5597;
  double t5609;
  double t5610;
  double t4499;
  double t4513;
  double t4517;
  double t4521;
  double t4534;
  double t4535;
  double t5892;
  double t5895;
  double t5902;
  double t5907;
  double t5912;
  double t4540;
  double t4573;
  double t5969;
  double t5975;
  double t5987;
  double t6014;
  double t6042;
  double t4591;
  double t4604;
  double t6546;
  double t4624;
  double t4634;
  double t4660;
  double t6854;
  double t6855;
  double t6858;
  double t6860;
  double t6861;
  double t6874;
  double t6875;
  double t6888;
  double t6890;
  double t6896;
  double t6902;
  double t4709;
  double t4725;
  double t4746;
  double t4756;
  double t6960;
  double t4769;
  double t4773;
  double t4783;
  t676 = Cos(var1[3]);
  t545 = Cos(var1[5]);
  t739 = Sin(var1[4]);
  t570 = Sin(var1[3]);
  t771 = Sin(var1[5]);
  t511 = Cos(var1[7]);
  t537 = Cos(var1[6]);
  t612 = -1.*t545*t570;
  t800 = t676*t739*t771;
  t896 = t612 + t800;
  t938 = t537*t896;
  t964 = t676*t545*t739;
  t1006 = t570*t771;
  t1030 = t964 + t1006;
  t1046 = Sin(var1[6]);
  t1054 = t1030*t1046;
  t1057 = t938 + t1054;
  t1151 = t511*t1057;
  t1156 = Cos(var1[4]);
  t1211 = Sin(var1[7]);
  t1254 = -1.*t676*t1156*t1211;
  t1297 = t1151 + t1254;
  t470 = Sin(var1[9]);
  t307 = Cos(var1[8]);
  t1451 = t545*t570;
  t1462 = -1.*t676*t739*t771;
  t1469 = t1451 + t1462;
  t1371 = Sin(var1[8]);
  t1321 = Cos(var1[9]);
  t1606 = t537*t1469;
  t1609 = -1.*t1030*t1046;
  t1612 = t1606 + t1609;
  t1450 = t537*t1030;
  t1556 = t1469*t1046;
  t1591 = t1450 + t1556;
  t1784 = -1.*t537*t896;
  t1838 = t1784 + t1609;
  t1732 = -1.*t896*t1046;
  t1754 = t1450 + t1732;
  t2173 = t676*t1156*t545*t537;
  t2174 = -1.*t676*t1156*t771*t1046;
  t2225 = t2173 + t2174;
  t2031 = -1.*t676*t511*t739;
  t2045 = t676*t1156*t537*t771;
  t2048 = t676*t1156*t545*t1046;
  t2067 = t2045 + t2048;
  t2071 = t2067*t1211;
  t2126 = t2031 + t2071;
  t2484 = -1.*t545*t570*t739;
  t2497 = t676*t771;
  t2526 = t2484 + t2497;
  t2443 = -1.*t676*t545;
  t2457 = -1.*t570*t739*t771;
  t2462 = t2443 + t2457;
  t2565 = t537*t2526;
  t2583 = -1.*t2462*t1046;
  t2590 = t2565 + t2583;
  t2441 = -1.*t1156*t511*t570;
  t2463 = t537*t2462;
  t2527 = t2526*t1046;
  t2536 = t2463 + t2527;
  t2546 = t2536*t1211;
  t2559 = t2441 + t2546;
  t2734 = t676*t1156*t511;
  t2736 = t1057*t1211;
  t2743 = t2734 + t2736;
  t2850 = t307*t1754;
  t2865 = -1.*t2743*t1371;
  t2875 = t2850 + t2865;
  t2880 = t470*t2875;
  t3003 = t676*t545;
  t3051 = t570*t739*t771;
  t3055 = t3003 + t3051;
  t3057 = t537*t3055;
  t3087 = t545*t570*t739;
  t3100 = -1.*t676*t771;
  t3107 = t3087 + t3100;
  t3133 = t3107*t1046;
  t3144 = t3057 + t3133;
  t3162 = t511*t3144;
  t3164 = -1.*t1156*t570*t1211;
  t3171 = t3162 + t3164;
  t3232 = -1.*t3107*t1046;
  t3237 = t2463 + t3232;
  t3206 = t537*t3107;
  t3216 = t2462*t1046;
  t3225 = t3206 + t3216;
  t3391 = -1.*t537*t3055;
  t3409 = t3391 + t3232;
  t3354 = -1.*t3055*t1046;
  t3374 = t3206 + t3354;
  t3580 = t1156*t545*t537*t570;
  t3588 = -1.*t1156*t570*t771*t1046;
  t3589 = t3580 + t3588;
  t3504 = -1.*t511*t570*t739;
  t3507 = t1156*t537*t570*t771;
  t3519 = t1156*t545*t570*t1046;
  t3535 = t3507 + t3519;
  t3539 = t3535*t1211;
  t3563 = t3504 + t3539;
  t3642 = t1156*t511*t570;
  t3671 = t3144*t1211;
  t3673 = t3642 + t3671;
  t3687 = t307*t3374;
  t3701 = -1.*t3673*t1371;
  t3716 = t3687 + t3701;
  t3717 = t470*t3716;
  t2922 = t307*t2743;
  t2935 = t1754*t1371;
  t2944 = t2922 + t2935;
  t3818 = t1156*t537*t771;
  t3822 = t1156*t545*t1046;
  t3830 = t3818 + t3822;
  t3835 = t511*t3830;
  t3839 = t739*t1211;
  t3843 = t3835 + t3839;
  t3943 = -1.*t1156*t537*t771;
  t3945 = -1.*t1156*t545*t1046;
  t3953 = t3943 + t3945;
  t3877 = t1156*t545*t537;
  t3884 = -1.*t1156*t771*t1046;
  t3941 = t3877 + t3884;
  t3942 = t307*t3941*t1211;
  t3970 = t3953*t1371;
  t3974 = t3942 + t3970;
  t3978 = t470*t3974;
  t3984 = t307*t3953;
  t4009 = -1.*t3941*t1211*t1371;
  t4040 = t3984 + t4009;
  t4042 = -1.*t1321*t4040;
  t4046 = t3978 + t4042;
  t4064 = -1.*t511*t739;
  t4067 = t3830*t1211;
  t4068 = t4064 + t4067;
  t4092 = t307*t3941;
  t4094 = -1.*t4068*t1371;
  t4110 = t4092 + t4094;
  t4124 = t470*t4110;
  t4219 = -1.*t545*t537*t739;
  t4223 = t739*t771*t1046;
  t4232 = t4219 + t4223;
  t4189 = -1.*t1156*t511;
  t4190 = -1.*t537*t739*t771;
  t4196 = -1.*t545*t739*t1046;
  t4198 = t4190 + t4196;
  t4201 = t4198*t1211;
  t4203 = t4189 + t4201;
  t1599 = t307*t1591*t1211;
  t1615 = t1612*t1371;
  t1654 = t1599 + t1615;
  t1659 = t307*t1612;
  t1662 = -1.*t1591*t1211*t1371;
  t1690 = t1659 + t1662;
  t1783 = t307*t1754*t1211;
  t1843 = t1838*t1371;
  t1876 = t1783 + t1843;
  t1884 = t307*t1838;
  t1903 = -1.*t1754*t1211*t1371;
  t1908 = t1884 + t1903;
  t2171 = t307*t2126;
  t2248 = t2225*t1371;
  t2251 = t2171 + t2248;
  t2311 = t307*t2225;
  t2320 = -1.*t2126*t1371;
  t2351 = t2311 + t2320;
  t2561 = t307*t2559;
  t2620 = t2590*t1371;
  t2637 = t2561 + t2620;
  t2649 = t307*t2590;
  t2653 = -1.*t2559*t1371;
  t2662 = t2649 + t2653;
  t2773 = -1.*t307*t2743;
  t2782 = -1.*t1754*t1371;
  t2803 = t2773 + t2782;
  t4404 = t1321*t2875;
  t3229 = t307*t3225*t1211;
  t3244 = t3237*t1371;
  t3249 = t3229 + t3244;
  t3269 = t307*t3237;
  t3282 = -1.*t3225*t1211*t1371;
  t3285 = t3269 + t3282;
  t3389 = t307*t3374*t1211;
  t3420 = t3409*t1371;
  t3423 = t3389 + t3420;
  t3455 = t307*t3409;
  t3456 = -1.*t3374*t1211*t1371;
  t3458 = t3455 + t3456;
  t3570 = t307*t3563;
  t3595 = t3589*t1371;
  t3598 = t3570 + t3595;
  t3606 = t307*t3589;
  t3629 = -1.*t3563*t1371;
  t3630 = t3606 + t3629;
  t3675 = -1.*t307*t3673;
  t3676 = -1.*t3374*t1371;
  t3679 = t3675 + t3676;
  t3728 = t307*t3673;
  t3742 = t3374*t1371;
  t3746 = t3728 + t3742;
  t4560 = t1321*t3716;
  t2959 = t1321*t2944;
  t2971 = t2959 + t2880;
  t4672 = t1321*t3974;
  t4679 = t470*t4040;
  t4683 = t4672 + t4679;
  t4077 = -1.*t307*t4068;
  t4084 = -1.*t3941*t1371;
  t4085 = t4077 + t4084;
  t4167 = t307*t4068;
  t4171 = t3941*t1371;
  t4174 = t4167 + t4171;
  t4720 = t1321*t4110;
  t4205 = t307*t4203;
  t4233 = t4232*t1371;
  t4234 = t4205 + t4233;
  t4239 = t307*t4232;
  t4241 = -1.*t4203*t1371;
  t4242 = t4239 + t4241;
  t5109 = -1.*t1321;
  t5116 = 1. + t5109;
  t4274 = t1321*t307*t1297;
  t4277 = -1.*t470*t1297*t1371;
  t4279 = t4274 + t4277;
  t5412 = -1.*t537;
  t5413 = 1. + t5412;
  t5256 = -1.*t307;
  t5257 = 1. + t5256;
  t5272 = -0.08055*t5257;
  t5274 = -0.01004*t1371;
  t5284 = 0. + t5272 + t5274;
  t5125 = -0.08055*t5116;
  t5126 = -0.13004*t470;
  t5134 = 0. + t5125 + t5126;
  t5293 = -0.13004*t5116;
  t5336 = 0.08055*t470;
  t5347 = 0. + t5293 + t5336;
  t4306 = t1321*t1654;
  t4307 = t470*t1690;
  t4310 = t4306 + t4307;
  t5440 = 0.07996*t1046;
  t5472 = -1.*t511;
  t5474 = 1. + t5472;
  t5488 = 0.135*t5474;
  t5492 = 0.08055*t1211;
  t5493 = 0. + t5488 + t5492;
  t5498 = -0.01004*t5257;
  t5507 = 0.08055*t1371;
  t5508 = 0. + t5498 + t5507;
  t4315 = t1321*t1876;
  t4322 = t470*t1908;
  t4324 = t4315 + t4322;
  t5417 = 0.07996*t5413;
  t5423 = -0.135*t1046;
  t5426 = 0. + t5417 + t5423;
  t5439 = 0.135*t5413;
  t5445 = 0. + t5439 + t5440;
  t5081 = 0.135*t1211;
  t4339 = t1321*t2251;
  t4341 = t470*t2351;
  t4349 = t4339 + t4341;
  t5722 = -0.08055*t5474;
  t5723 = 0. + t5722 + t5081;
  t4371 = t1321*t2637;
  t4379 = t470*t2662;
  t4394 = t4371 + t4379;
  t4400 = t470*t2803;
  t4405 = t4400 + t4404;
  t4414 = -1.*t470*t2944;
  t4419 = t4414 + t4404;
  t5939 = -1.*t470*t2875;
  t5047 = 0.135*t511;
  t5053 = -0.08055*t1211;
  t5055 = t5047 + t5053;
  t5068 = 0.08055*t511;
  t5087 = t5068 + t5081;
  t4449 = t1321*t307*t3171;
  t4453 = -1.*t470*t3171*t1371;
  t4466 = t4449 + t4453;
  t4468 = t1321*t3249;
  t4479 = t470*t3285;
  t4482 = t4468 + t4479;
  t5588 = -0.135*t537;
  t5589 = t5588 + t5440;
  t5597 = 0.07996*t537;
  t5609 = 0.135*t1046;
  t5610 = t5597 + t5609;
  t4499 = t1321*t3423;
  t4513 = t470*t3458;
  t4517 = t4499 + t4513;
  t4521 = t1321*t3598;
  t4534 = t470*t3630;
  t4535 = t4521 + t4534;
  t5892 = -0.01004*t307;
  t5895 = -0.08055*t1371;
  t5902 = t5892 + t5895;
  t5907 = 0.08055*t307;
  t5912 = t5907 + t5274;
  t4540 = t470*t3679;
  t4573 = t4540 + t4560;
  t5969 = -0.13004*t1321;
  t5975 = -0.08055*t470;
  t5987 = t5969 + t5975;
  t6014 = 0.08055*t1321;
  t6042 = t6014 + t5126;
  t4591 = -1.*t470*t3746;
  t4604 = t4591 + t4560;
  t6546 = -1.*t470*t3716;
  t4624 = t1321*t307*t3843;
  t4634 = -1.*t470*t3843*t1371;
  t4660 = t4624 + t4634;
  t6854 = 0.1305*t511*t3941;
  t6855 = t3941*t5493;
  t6858 = t3941*t1211*t5284;
  t6860 = t3953*t5508;
  t6861 = t5134*t3974;
  t6874 = t5347*t4040;
  t6875 = -1.*t470*t3974;
  t6888 = t1321*t4040;
  t6890 = t6875 + t6888;
  t6896 = -0.13004*t6890;
  t6902 = -0.08055*t4683;
  t4709 = t470*t4085;
  t4725 = t4709 + t4720;
  t4746 = -1.*t470*t4174;
  t4756 = t4746 + t4720;
  t6960 = -1.*t470*t4110;
  t4769 = t1321*t4234;
  t4773 = t470*t4242;
  t4783 = t4769 + t4773;
  p_output1[0]=(-1.*t1321*t2662 + t2637*t470)*var2[3] + (-1.*t1321*t2351 + t2251*t470)*var2[4] + (-1.*t1321*t1690 + t1654*t470)*var2[5] + (-1.*t1321*t1908 + t1876*t470)*var2[6] + (t1297*t1321*t1371 + t1297*t307*t470)*var2[7] + (-1.*t1321*t2803 + t2880)*var2[8] + t2971*var2[9];
  p_output1[1]=(-1.*t1321*t2875 + t2944*t470)*var2[3] + (-1.*t1321*t3630 + t3598*t470)*var2[4] + (-1.*t1321*t3285 + t3249*t470)*var2[5] + (-1.*t1321*t3458 + t3423*t470)*var2[6] + (t1321*t1371*t3171 + t307*t3171*t470)*var2[7] + (-1.*t1321*t3679 + t3717)*var2[8] + (t3717 + t1321*t3746)*var2[9];
  p_output1[2]=(-1.*t1321*t4242 + t4234*t470)*var2[4] + t4046*var2[5] + t4046*var2[6] + (t1321*t1371*t3843 + t307*t3843*t470)*var2[7] + (-1.*t1321*t4085 + t4124)*var2[8] + (t4124 + t1321*t4174)*var2[9];
  p_output1[3]=0;
  p_output1[4]=t4394*var2[3] + t4349*var2[4] + t4310*var2[5] + t4324*var2[6] + t4279*var2[7] + t4405*var2[8] + t4419*var2[9];
  p_output1[5]=t2971*var2[3] + t4535*var2[4] + t4482*var2[5] + t4517*var2[6] + t4466*var2[7] + t4573*var2[8] + t4604*var2[9];
  p_output1[6]=t4783*var2[4] + t4683*var2[5] + t4683*var2[6] + t4660*var2[7] + t4725*var2[8] + t4756*var2[9];
  p_output1[7]=0;
  p_output1[8]=(t3164 - 1.*t2536*t511)*var2[3] + (-1.*t2067*t511 - 1.*t1211*t676*t739)*var2[4] - 1.*t1591*t511*var2[5] - 1.*t1754*t511*var2[6] + t2743*var2[7];
  p_output1[9]=(-1.*t1057*t511 + t1156*t1211*t676)*var2[3] + (-1.*t3535*t511 - 1.*t1211*t570*t739)*var2[4] - 1.*t3225*t511*var2[5] - 1.*t3374*t511*var2[6] + t3673*var2[7];
  p_output1[10]=(-1.*t1156*t1211 - 1.*t4198*t511)*var2[4] - 1.*t3941*t511*var2[5] - 1.*t3941*t511*var2[6] + t4068*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t4394 - 0.13004*(t1321*t2662 - 1.*t2637*t470) + t2637*t5134 + t2559*t5284 + t2662*t5347 + t2526*t5426 + t2462*t5445 + t2536*t5493 + t2590*t5508 + 0.1305*(t2536*t511 + t1156*t1211*t570) - 1.*t1156*t570*t5723)*var2[3] + (-0.08055*t4349 - 0.13004*(t1321*t2351 - 1.*t2251*t470) + t2251*t5134 + t2126*t5284 + t2351*t5347 + t2067*t5493 + t2225*t5508 + t1156*t5426*t545*t676 - 1.*t5723*t676*t739 + 0.1305*(t2067*t511 + t1211*t676*t739) + t1156*t5445*t676*t771)*var2[4] + (-0.08055*t4310 - 0.13004*(t1321*t1690 - 1.*t1654*t470) + 0.1305*t1591*t511 + t1654*t5134 + t1211*t1591*t5284 + t1690*t5347 + t1469*t5426 + t1030*t5445 + t1591*t5493 + t1612*t5508)*var2[5] + (-0.08055*t4324 - 0.13004*(t1321*t1908 - 1.*t1876*t470) + 0.1305*t1754*t511 + t1876*t5134 + t1211*t1754*t5284 + t1908*t5347 + t1754*t5493 + t1838*t5508 + t1030*t5589 + t5610*t896)*var2[6] + (-0.08055*t4279 - 0.13004*(-1.*t1297*t1321*t1371 - 1.*t1297*t307*t470) + t1057*t5087 + t1297*t307*t5134 + t1297*t5284 - 1.*t1297*t1371*t5347 + t1156*t5055*t676 + 0.1305*(-1.*t1057*t1211 - 1.*t1156*t511*t676))*var2[7] + (-0.08055*t4405 + t2875*t5134 + t2803*t5347 + t2743*t5902 + t1754*t5912 - 0.13004*(t1321*t2803 + t5939))*var2[8] + (-0.08055*t4419 - 0.13004*(-1.*t1321*t2944 + t5939) + t2944*t5987 + t2875*t6042)*var2[9];
  p_output1[13]=var2[1] + (0.1305*t1297 - 0.08055*t2971 - 0.13004*t4419 + t2944*t5134 + t2743*t5284 + t2875*t5347 + t1030*t5426 + t1057*t5493 + t1754*t5508 + t1156*t5723*t676 + t5445*t896)*var2[3] + (-0.08055*t4535 - 0.13004*(t1321*t3630 - 1.*t3598*t470) + t3598*t5134 + t3563*t5284 + t3630*t5347 + t3535*t5493 + t3589*t5508 + t1156*t5426*t545*t570 - 1.*t570*t5723*t739 + 0.1305*(t3535*t511 + t1211*t570*t739) + t1156*t5445*t570*t771)*var2[4] + (-0.08055*t4482 - 0.13004*(t1321*t3285 - 1.*t3249*t470) + 0.1305*t3225*t511 + t3249*t5134 + t1211*t3225*t5284 + t3285*t5347 + t2462*t5426 + t3107*t5445 + t3225*t5493 + t3237*t5508)*var2[5] + (-0.08055*t4517 - 0.13004*(t1321*t3458 - 1.*t3423*t470) + 0.1305*t3374*t511 + t3423*t5134 + t1211*t3374*t5284 + t3458*t5347 + t3374*t5493 + t3409*t5508 + t3107*t5589 + t3055*t5610)*var2[6] + (0.1305*(t2441 - 1.*t1211*t3144) - 0.08055*t4466 - 0.13004*(-1.*t1321*t1371*t3171 - 1.*t307*t3171*t470) + t3144*t5087 + t307*t3171*t5134 + t3171*t5284 - 1.*t1371*t3171*t5347 + t1156*t5055*t570)*var2[7] + (-0.08055*t4573 + t3716*t5134 + t3679*t5347 + t3673*t5902 + t3374*t5912 - 0.13004*(t1321*t3679 + t6546))*var2[8] + (-0.08055*t4604 + t3746*t5987 + t3716*t6042 - 0.13004*(-1.*t1321*t3746 + t6546))*var2[9];
  p_output1[14]=var2[2] + (-0.13004*(t1321*t4242 - 1.*t4234*t470) - 0.08055*t4783 + 0.1305*(t1156*t1211 + t4198*t511) + t4234*t5134 + t4203*t5284 + t4242*t5347 + t4198*t5493 + t4232*t5508 - 1.*t1156*t5723 - 1.*t5426*t545*t739 - 1.*t5445*t739*t771)*var2[4] + (t1156*t5445*t545 + t6854 + t6855 + t6858 + t6860 + t6861 + t6874 + t6896 + t6902 - 1.*t1156*t5426*t771)*var2[5] + (t1156*t545*t5589 + t6854 + t6855 + t6858 + t6860 + t6861 + t6874 + t6896 + t6902 + t1156*t5610*t771)*var2[6] + (-0.08055*t4660 - 0.13004*(-1.*t1321*t1371*t3843 - 1.*t307*t3843*t470) + t3830*t5087 + t307*t3843*t5134 + t3843*t5284 - 1.*t1371*t3843*t5347 - 1.*t5055*t739 + 0.1305*(-1.*t1211*t3830 + t511*t739))*var2[7] + (-0.08055*t4725 + t4110*t5134 + t4085*t5347 + t4068*t5902 + t3941*t5912 - 0.13004*(t1321*t4085 + t6960))*var2[8] + (-0.08055*t4756 + t4174*t5987 + t4110*t6042 - 0.13004*(-1.*t1321*t4174 + t6960))*var2[9];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void dT_LeftKneeJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
