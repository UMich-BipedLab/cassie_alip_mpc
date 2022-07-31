/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:24 GMT-04:00
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
  double t176;
  double t263;
  double t782;
  double t837;
  double t824;
  double t841;
  double t853;
  double t854;
  double t1433;
  double t1497;
  double t912;
  double t922;
  double t925;
  double t936;
  double t1617;
  double t1630;
  double t1637;
  double t2033;
  double t2040;
  double t2053;
  double t996;
  double t1011;
  double t1019;
  double t1022;
  double t1049;
  double t1089;
  double t1109;
  double t1114;
  double t1218;
  double t1269;
  double t1310;
  double t1340;
  double t1386;
  double t1399;
  double t1429;
  double t2747;
  double t2428;
  double t2432;
  double t2460;
  double t2771;
  double t2321;
  double t2324;
  double t2342;
  double t2975;
  double t2983;
  double t2748;
  double t2793;
  double t2812;
  double t1944;
  double t1953;
  double t1974;
  double t2984;
  double t2986;
  double t3012;
  double t3055;
  double t3056;
  double t3060;
  double t2847;
  double t2868;
  double t2883;
  double t3217;
  double t3219;
  double t3247;
  double t3285;
  double t3164;
  double t3319;
  double t1771;
  double t1775;
  double t1819;
  double t3367;
  double t3374;
  double t3391;
  double t3598;
  double t3609;
  double t3612;
  double t3396;
  double t3400;
  double t3405;
  double t3428;
  double t3524;
  double t3341;
  double t3343;
  double t3742;
  double t3743;
  double t3745;
  double t3747;
  double t3748;
  double t3692;
  double t3694;
  double t3705;
  double t3875;
  double t3877;
  double t3886;
  double t3908;
  double t3910;
  double t3911;
  double t3920;
  double t4065;
  double t4101;
  double t3887;
  double t3888;
  double t3891;
  double t3054;
  double t3112;
  double t3685;
  double t3686;
  double t3688;
  double t4306;
  double t3525;
  double t4286;
  double t4293;
  double t4294;
  double t4300;
  double t4092;
  double t4104;
  double t4037;
  double t4041;
  double t4044;
  double t4404;
  double t3776;
  double t3778;
  double t4183;
  double t4188;
  double t4727;
  double t4775;
  double t4736;
  double t4737;
  double t4768;
  double t4821;
  double t4832;
  double t4127;
  double t4136;
  double t4785;
  double t4790;
  double t4796;
  double t4834;
  double t4837;
  double t4853;
  double t4859;
  double t4864;
  double t4873;
  double t3534;
  double t3543;
  double t3567;
  double t3579;
  double t4773;
  double t4779;
  double t4781;
  double t3436;
  double t3438;
  double t4856;
  double t4874;
  double t4875;
  double t4878;
  double t4880;
  double t4885;
  double t4894;
  double t3787;
  double t3790;
  double t4916;
  double t3744;
  double t3752;
  double t4966;
  double t4971;
  double t4994;
  double t4269;
  double t4282;
  double t4283;
  double t3711;
  double t3712;
  double t3668;
  double t3682;
  double t3835;
  double t3839;
  double t3840;
  double t3641;
  double t3643;
  double t3645;
  double t3992;
  double t3993;
  double t4016;
  double t5351;
  double t5359;
  double t5361;
  double t5375;
  double t5379;
  double t5282;
  double t5283;
  double t5344;
  double t5462;
  double t3177;
  double t3186;
  double t4112;
  double t4122;
  double t4071;
  double t4082;
  double t5625;
  double t5627;
  double t5628;
  double t5634;
  double t5636;
  double t5642;
  double t5661;
  double t4191;
  double t4192;
  double t5687;
  double t4150;
  double t4155;
  double t5123;
  double t5125;
  double t5138;
  double t3930;
  double t3931;
  double t3849;
  double t3858;
  double t5440;
  double t5441;
  double t5450;
  double t3785;
  double t3966;
  double t3969;
  double t6020;
  double t5550;
  double t5551;
  double t4410;
  double t4416;
  double t4431;
  double t4432;
  double t6107;
  double t6109;
  double t6113;
  double t6115;
  double t6120;
  double t6130;
  double t4548;
  double t4577;
  double t4598;
  double t4600;
  double t4506;
  double t4510;
  double t6002;
  double t6025;
  double t4344;
  double t4348;
  double t4360;
  double t4364;
  double t5879;
  double t5887;
  double t5891;
  double t5210;
  double t5224;
  double t5231;
  double t5473;
  double t5479;
  double t5990;
  double t5991;
  double t5993;
  double t6046;
  double t6054;
  double t6056;
  double t5591;
  double t5597;
  double t5609;
  double t4783;
  double t4801;
  double t4812;
  double t4813;
  double t4817;
  double t5409;
  double t5418;
  double t6566;
  double t5372;
  double t5385;
  double t6576;
  double t6586;
  double t6587;
  double t6590;
  double t6591;
  double t6595;
  double t6553;
  double t6555;
  double t6559;
  double t6515;
  double t6516;
  double t6518;
  double t6676;
  double t6677;
  double t6680;
  double t6660;
  double t6683;
  double t6684;
  double t4956;
  double t6692;
  double t6694;
  double t6701;
  double t6753;
  double t6758;
  double t5079;
  double t6837;
  double t5173;
  double t5175;
  double t5905;
  double t5907;
  double t5908;
  double t5154;
  double t5161;
  double t6378;
  double t6379;
  double t6380;
  double t5247;
  double t5248;
  double t5262;
  double t5566;
  double t5567;
  double t7213;
  double t7231;
  double t7236;
  double t7239;
  double t7246;
  double t5610;
  double t5618;
  double t5973;
  double t5974;
  double t5949;
  double t5955;
  double t7408;
  double t7412;
  double t7415;
  double t5721;
  double t7426;
  double t7427;
  double t7429;
  double t7453;
  double t7465;
  double t5799;
  double t7518;
  double t5854;
  double t5859;
  double t5834;
  double t5842;
  double t6043;
  double t7319;
  double t7323;
  double t7327;
  double t6085;
  double t6091;
  double t6097;
  double t6103;
  double t7115;
  double t7117;
  double t6255;
  double t6427;
  double t6434;
  double t6414;
  double t6415;
  double t7902;
  double t7919;
  double t7920;
  double t7924;
  double t6132;
  double t6163;
  double t6210;
  double t6221;
  double t8048;
  double t8049;
  double t8054;
  double t8055;
  double t8075;
  double t8081;
  double t8093;
  double t8094;
  double t6352;
  double t6360;
  double t6298;
  double t6322;
  double t6473;
  double t6474;
  double t6477;
  double t6478;
  double t6484;
  double t6487;
  double t6490;
  double t6492;
  double t6493;
  double t6494;
  double t6496;
  double t6504;
  double t6505;
  double t6507;
  double t6508;
  double t6509;
  double t6510;
  double t6514;
  double t6521;
  double t6528;
  double t6532;
  double t6535;
  double t6538;
  double t6543;
  double t6545;
  double t6548;
  double t6564;
  double t6565;
  t176 = Cos(var1[3]);
  t263 = Sin(var1[3]);
  t782 = Cos(var1[4]);
  t837 = Sin(var1[4]);
  t824 = -1.*var2[2]*t782*t263;
  t841 = -1.*var2[1]*t837;
  t853 = -1.*var1[1]*t782;
  t854 = var1[2]*t263*t837;
  t1433 = Cos(var1[5]);
  t1497 = Sin(var1[5]);
  t912 = var2[2]*t176*t782;
  t922 = var2[0]*t837;
  t925 = var1[0]*t782;
  t936 = -1.*var1[2]*t176*t837;
  t1617 = t176*t1433*t837;
  t1630 = t263*t1497;
  t1637 = t1617 + t1630;
  t2033 = -1.*t176*t1433;
  t2040 = -1.*t263*t837*t1497;
  t2053 = t2033 + t2040;
  t996 = -1.*var2[1]*t176*t782;
  t1011 = var2[0]*t782*t263;
  t1019 = var1[0]*t176*t782;
  t1022 = var1[1]*t782*t263;
  t1049 = t1019 + t1022;
  t1089 = var2[3]*t1049;
  t1109 = var1[1]*t176*t837;
  t1114 = -1.*var1[0]*t263*t837;
  t1218 = -1.*var2[3]*t782*t263;
  t1269 = -1.*var2[4]*t176*t837;
  t1310 = t1218 + t1269;
  t1340 = var2[3]*t176*t782;
  t1386 = -1.*var2[4]*t263*t837;
  t1399 = t1340 + t1386;
  t1429 = -1.*var2[4]*t782;
  t2747 = Cos(var1[6]);
  t2428 = t1433*t263*t837;
  t2432 = -1.*t176*t1497;
  t2460 = t2428 + t2432;
  t2771 = Sin(var1[6]);
  t2321 = -1.*t1433*t263;
  t2324 = t176*t837*t1497;
  t2342 = t2321 + t2324;
  t2975 = -1.*t2747;
  t2983 = 1. + t2975;
  t2748 = t782*t1433*t2747;
  t2793 = -1.*t782*t1497*t2771;
  t2812 = t2748 + t2793;
  t1944 = -1.*t1433*t263*t837;
  t1953 = t176*t1497;
  t1974 = t1944 + t1953;
  t2984 = 0.07996*t2983;
  t2986 = -0.135*t2771;
  t3012 = 0. + t2984 + t2986;
  t3055 = 0.135*t2983;
  t3056 = 0.07996*t2771;
  t3060 = 0. + t3055 + t3056;
  t2847 = t176*t1433;
  t2868 = t263*t837*t1497;
  t2883 = t2847 + t2868;
  t3217 = -1.*var1[2];
  t3219 = -1.*t782*t1433*t3012;
  t3247 = -1.*t782*t1497*t3060;
  t3285 = 0. + t3217 + t3219 + t3247;
  t3164 = t2747*t2053;
  t3319 = t2747*t1637;
  t1771 = t1433*t263;
  t1775 = -1.*t176*t837*t1497;
  t1819 = t1771 + t1775;
  t3367 = t2460*t3012;
  t3374 = t2883*t3060;
  t3391 = 0. + var1[1] + t3367 + t3374;
  t3598 = t2747*t2460;
  t3609 = -1.*t2883*t2771;
  t3612 = t3598 + t3609;
  t3396 = -1.*t782*t2747*t1497;
  t3400 = -1.*t782*t1433*t2771;
  t3405 = t3396 + t3400;
  t3428 = t3391*t3405;
  t3524 = -1.*t2460*t2771;
  t3341 = -1.*t2342*t2771;
  t3343 = t3319 + t3341;
  t3742 = -0.135*t2747;
  t3743 = t3742 + t3056;
  t3745 = 0.07996*t2747;
  t3747 = 0.135*t2771;
  t3748 = t3745 + t3747;
  t3692 = -1.*t1433*t2747*t837;
  t3694 = t837*t1497*t2771;
  t3705 = t3692 + t3694;
  t3875 = t782*t1433*t3012;
  t3877 = t782*t1497*t3060;
  t3886 = 0. + var1[2] + t3875 + t3877;
  t3908 = -1.*var1[0];
  t3910 = -1.*t1637*t3012;
  t3911 = -1.*t2342*t3060;
  t3920 = 0. + t3908 + t3910 + t3911;
  t4065 = t3920*t3405;
  t4101 = -1.*t1637*t2771;
  t3887 = t176*t782*t1433*t2747;
  t3888 = -1.*t176*t782*t1497*t2771;
  t3891 = t3887 + t3888;
  t3054 = t1637*t3012;
  t3112 = t2342*t3060;
  t3685 = t782*t1433*t2747*t263;
  t3686 = -1.*t782*t263*t1497*t2771;
  t3688 = t3685 + t3686;
  t4306 = 0. + var1[0] + t3054 + t3112;
  t3525 = t3164 + t3524;
  t4286 = -1.*var1[1];
  t4293 = -1.*t2460*t3012;
  t4294 = -1.*t2883*t3060;
  t4300 = 0. + t4286 + t4293 + t4294;
  t4092 = t2747*t1819;
  t4104 = t4092 + t4101;
  t4037 = t2747*t1974;
  t4041 = -1.*t2053*t2771;
  t4044 = t4037 + t4041;
  t4404 = 0.08055*t2812;
  t3776 = -1.*t2747*t2883;
  t3778 = t3776 + t3524;
  t4183 = -1.*t2747*t2342;
  t4188 = t4183 + t4101;
  t4727 = Cos(var1[7]);
  t4775 = Sin(var1[7]);
  t4736 = t2747*t2883;
  t4737 = t2460*t2771;
  t4768 = t4736 + t4737;
  t4821 = -1.*t4727;
  t4832 = 1. + t4821;
  t4127 = t2053*t2771;
  t4136 = t3598 + t4127;
  t4785 = t782*t2747*t1497;
  t4790 = t782*t1433*t2771;
  t4796 = t4785 + t4790;
  t4834 = 0.135*t4832;
  t4837 = 0.08055*t4775;
  t4853 = 0. + t4834 + t4837;
  t4859 = -0.08055*t4832;
  t4864 = 0.135*t4775;
  t4873 = 0. + t4859 + t4864;
  t3534 = t1819*t2771;
  t3543 = t3319 + t3534;
  t3567 = t782*t1497*t3012;
  t3579 = -1.*t782*t1433*t3060;
  t4773 = t4727*t4768;
  t4779 = -1.*t782*t263*t4775;
  t4781 = t4773 + t4779;
  t3436 = t2053*t3012;
  t3438 = t2460*t3060;
  t4856 = t4768*t4853;
  t4874 = t782*t263*t4873;
  t4875 = 0. + var1[1] + t3367 + t3374 + t4856 + t4874;
  t4878 = -1.*t4727*t2812*t4875;
  t4880 = -1.*t4796*t4853;
  t4885 = t837*t4873;
  t4894 = 0. + t3217 + t3219 + t3247 + t4880 + t4885;
  t3787 = -1.*t782*t1433*t3743;
  t3790 = -1.*t782*t1497*t3748;
  t4916 = -1.*t2812*t4853;
  t3744 = t2460*t3743;
  t3752 = t2883*t3748;
  t4966 = t4727*t4796;
  t4971 = t837*t4775;
  t4994 = t4966 + t4971;
  t4269 = -1.*t2747*t837*t1497;
  t4282 = -1.*t1433*t837*t2771;
  t4283 = t4269 + t4282;
  t3711 = t1433*t837*t3012;
  t3712 = t837*t1497*t3060;
  t3668 = t782*t1433*t263*t3012;
  t3682 = t782*t263*t1497*t3060;
  t3835 = t782*t2747*t263*t1497;
  t3839 = t782*t1433*t263*t2771;
  t3840 = t3835 + t3839;
  t3641 = t176*t782*t2747*t1497;
  t3643 = t176*t782*t1433*t2771;
  t3645 = t3641 + t3643;
  t3992 = t2747*t2342;
  t3993 = t1637*t2771;
  t4016 = t3992 + t3993;
  t5351 = 0.135*t4727;
  t5359 = -0.08055*t4775;
  t5361 = t5351 + t5359;
  t5375 = 0.08055*t4727;
  t5379 = t5375 + t4864;
  t5282 = t4727*t4016;
  t5283 = -1.*t176*t782*t4775;
  t5344 = t5282 + t5283;
  t5462 = -1.*t782*t4727*t263;
  t3177 = t1974*t2771;
  t3186 = t3164 + t3177;
  t4112 = -1.*t782*t1497*t3012;
  t4122 = t782*t1433*t3060;
  t4071 = -1.*t1819*t3012;
  t4082 = -1.*t1637*t3060;
  t5625 = -1.*t4016*t4853;
  t5627 = -1.*t176*t782*t4873;
  t5628 = 0. + t3908 + t3910 + t3911 + t5625 + t5627;
  t5634 = -1.*t4727*t2812*t5628;
  t5636 = t4796*t4853;
  t5642 = -1.*t837*t4873;
  t5661 = 0. + var1[2] + t3875 + t3877 + t5636 + t5642;
  t4191 = t782*t1433*t3743;
  t4192 = t782*t1497*t3748;
  t5687 = t2812*t4853;
  t4150 = -1.*t1637*t3743;
  t4155 = -1.*t2342*t3748;
  t5123 = t4727*t4283;
  t5125 = t782*t4775;
  t5138 = t5123 + t5125;
  t3930 = -1.*t1433*t837*t3012;
  t3931 = -1.*t837*t1497*t3060;
  t3849 = -1.*t176*t782*t1433*t3012;
  t3858 = -1.*t176*t782*t1497*t3060;
  t5440 = t4727*t837;
  t5441 = -1.*t4796*t4775;
  t5450 = t5440 + t5441;
  t3785 = 0.08055*t3343;
  t3966 = -1.*t1974*t3012;
  t3969 = -1.*t2053*t3060;
  t6020 = t782*t263*t4775;
  t5550 = t4016*t4853;
  t5551 = t176*t782*t4873;
  t4410 = -1.*t2053*t3012;
  t4416 = -1.*t2460*t3060;
  t4431 = t1819*t3012;
  t4432 = t1637*t3060;
  t6107 = 0.08055*t3405;
  t6109 = 0. + var1[0] + t3054 + t3112 + t5550 + t5551;
  t6113 = -1.*t4768*t4853;
  t6115 = -1.*t782*t263*t4873;
  t6120 = 0. + t4286 + t4293 + t4294 + t6113 + t6115;
  t6130 = -0.01004*t2812*t4775;
  t4548 = -1.*t2460*t3743;
  t4577 = -1.*t2883*t3748;
  t4598 = t1637*t3743;
  t4600 = t2342*t3748;
  t4506 = t1974*t3012;
  t4510 = t2053*t3060;
  t6002 = t4727*t3186;
  t6025 = t6002 + t6020;
  t4344 = -1.*t782*t1433*t263*t3012;
  t4348 = -1.*t782*t263*t1497*t3060;
  t4360 = t176*t782*t1433*t3012;
  t4364 = t176*t782*t1497*t3060;
  t5879 = t4727*t3645;
  t5887 = t176*t837*t4775;
  t5891 = t5879 + t5887;
  t5210 = t4727*t3840;
  t5224 = t263*t837*t4775;
  t5231 = t5210 + t5224;
  t5473 = -1.*t4768*t4775;
  t5479 = t5462 + t5473;
  t5990 = -1.*t176*t782*t4727;
  t5991 = -1.*t4016*t4775;
  t5993 = t5990 + t5991;
  t6046 = t176*t782*t4727;
  t6054 = t4016*t4775;
  t6056 = t6046 + t6054;
  t5591 = -1.*t4727*t4016;
  t5597 = t176*t782*t4775;
  t5609 = t5591 + t5597;
  t4783 = var2[2]*t4781;
  t4801 = -1.*t4727*t4796;
  t4812 = -1.*t837*t4775;
  t4813 = t4801 + t4812;
  t4817 = var2[1]*t4813;
  t5409 = t782*t263*t5361;
  t5418 = t4768*t5379;
  t6566 = Cos(var1[8]);
  t5372 = t837*t5361;
  t5385 = -1.*t4796*t5379;
  t6576 = -1.*t6566;
  t6586 = 1. + t6576;
  t6587 = -0.08055*t6586;
  t6590 = Sin(var1[8]);
  t6591 = -0.01004*t6590;
  t6595 = 0. + t6587 + t6591;
  t6553 = -1.*t4727*t837;
  t6555 = t4796*t4775;
  t6559 = t6553 + t6555;
  t6515 = t782*t4727*t263;
  t6516 = t4768*t4775;
  t6518 = t6515 + t6516;
  t6676 = -0.01004*t6586;
  t6677 = 0.08055*t6590;
  t6680 = 0. + t6676 + t6677;
  t6660 = -1.*t6559*t6595;
  t6683 = -1.*t2812*t6680;
  t6684 = 0. + t3217 + t3219 + t3247 + t4880 + t4885 + t6660 + t6683;
  t4956 = t4136*t4853;
  t6692 = t6518*t6595;
  t6694 = t3612*t6680;
  t6701 = 0. + var1[1] + t3367 + t3374 + t4856 + t4874 + t6692 + t6694;
  t6753 = -1.*t2812*t4775*t6595;
  t6758 = -1.*t3405*t6680;
  t5079 = t3612*t4853;
  t6837 = -1.*t4727*t2812*t6701;
  t5173 = t3840*t4853;
  t5175 = -1.*t263*t837*t4873;
  t5905 = -1.*t4727*t263*t837;
  t5907 = t3840*t4775;
  t5908 = t5905 + t5907;
  t5154 = -1.*t4283*t4853;
  t5161 = t782*t4873;
  t6378 = -1.*t782*t4727;
  t6379 = t4283*t4775;
  t6380 = t6378 + t6379;
  t5247 = -1.*t176*t4727*t837;
  t5248 = t3645*t4775;
  t5262 = t5247 + t5248;
  t5566 = t3186*t4775;
  t5567 = t5462 + t5566;
  t7213 = -0.01004*t6566;
  t7231 = -0.08055*t6590;
  t7236 = t7213 + t7231;
  t7239 = 0.08055*t6566;
  t7246 = t7239 + t6591;
  t5610 = var2[2]*t5609;
  t5618 = var2[0]*t4994;
  t5973 = -1.*t176*t782*t5361;
  t5974 = -1.*t4016*t5379;
  t5949 = -1.*t837*t5361;
  t5955 = t4796*t5379;
  t7408 = t6559*t6595;
  t7412 = t2812*t6680;
  t7415 = 0. + var1[2] + t3875 + t3877 + t5636 + t5642 + t7408 + t7412;
  t5721 = -1.*t3543*t4853;
  t7426 = -1.*t6056*t6595;
  t7427 = -1.*t3343*t6680;
  t7429 = 0. + t3908 + t3910 + t3911 + t5625 + t5627 + t7426 + t7427;
  t7453 = t2812*t4775*t6595;
  t7465 = t3405*t6680;
  t5799 = -1.*t3343*t4853;
  t7518 = -1.*t4727*t2812*t7429;
  t5854 = -1.*t3645*t4853;
  t5859 = t176*t837*t4873;
  t5834 = t4283*t4853;
  t5842 = -1.*t782*t4873;
  t6043 = -1.*t3186*t4853;
  t7319 = t6566*t3343;
  t7323 = -1.*t6056*t6590;
  t7327 = t7319 + t7323;
  t6085 = var2[1]*t5344;
  t6091 = -1.*t4727*t4768;
  t6097 = t6091 + t6020;
  t6103 = var2[0]*t6097;
  t7115 = t6056*t6595;
  t7117 = t3343*t6680;
  t6255 = t3186*t4853;
  t6427 = t176*t782*t5361;
  t6434 = t4016*t5379;
  t6414 = -1.*t782*t263*t5361;
  t6415 = -1.*t4768*t5379;
  t7902 = 0. + var1[0] + t3054 + t3112 + t5550 + t5551 + t7115 + t7117;
  t7919 = -1.*t6518*t6595;
  t7920 = -1.*t3612*t6680;
  t7924 = 0. + t4286 + t4293 + t4294 + t6113 + t6115 + t7919 + t7920;
  t6132 = -1.*t4136*t4853;
  t6163 = t3543*t4853;
  t6210 = -1.*t3612*t4853;
  t6221 = t3343*t4853;
  t8048 = t6566*t2812*t4775;
  t8049 = t3405*t6590;
  t8054 = t8048 + t8049;
  t8055 = -0.13004*t8054;
  t8075 = t6566*t3405;
  t8081 = -1.*t2812*t4775*t6590;
  t8093 = t8075 + t8081;
  t8094 = 0.08055*t8093;
  t6352 = t3645*t4853;
  t6360 = -1.*t176*t837*t4873;
  t6298 = -1.*t3840*t4853;
  t6322 = t263*t837*t4873;
  t6473 = -1.*var2[5]*t4727*t3543;
  t6474 = -1.*var2[6]*t4727*t3343;
  t6477 = -1.*t4727*t3186;
  t6478 = t6477 + t4779;
  t6484 = var2[3]*t6478;
  t6487 = -1.*t4727*t3645;
  t6490 = -1.*t176*t837*t4775;
  t6492 = t6487 + t6490;
  t6493 = var2[4]*t6492;
  t6494 = var2[7]*t6056;
  t6496 = t6473 + t6474 + t6484 + t6493 + t6494;
  t6504 = -1.*var2[5]*t4727*t4136;
  t6505 = -1.*var2[6]*t4727*t3612;
  t6507 = var2[3]*t5609;
  t6508 = -1.*t4727*t3840;
  t6509 = -1.*t263*t837*t4775;
  t6510 = t6508 + t6509;
  t6514 = var2[4]*t6510;
  t6521 = var2[7]*t6518;
  t6528 = t6504 + t6505 + t6507 + t6514 + t6521;
  t6532 = -1.*var2[5]*t4727*t2812;
  t6535 = -1.*var2[6]*t4727*t2812;
  t6538 = -1.*t4727*t4283;
  t6543 = -1.*t782*t4775;
  t6545 = t6538 + t6543;
  t6548 = var2[4]*t6545;
  t6564 = var2[7]*t6559;
  t6565 = t6532 + t6535 + t6548 + t6564;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t176*var2[2] + t263*var1[2]*var2[3];
  p_output1[25]=-1.*t263*var2[2] - 1.*t176*var1[2]*var2[3];
  p_output1[26]=t176*var2[0] + t263*var2[1] + (-1.*t263*var1[0] + t176*var1[1])*var2[3];
  p_output1[27]=-1.*t176*var2[3];
  p_output1[28]=-1.*t263*var2[3];
  p_output1[29]=0;
  p_output1[30]=t824 + t841 - 1.*t176*t782*var1[2]*var2[3] + (t853 + t854)*var2[4];
  p_output1[31]=t912 + t922 - 1.*t263*t782*var1[2]*var2[3] + (t925 + t936)*var2[4];
  p_output1[32]=t1011 + t1089 + t996 + (t1109 + t1114)*var2[4];
  p_output1[33]=t1310;
  p_output1[34]=t1399;
  p_output1[35]=t1429;
  p_output1[36]=t824 + t841 + (-0.135*t1974 + 0.07996*t2053 - 1.*t176*t782*var1[2])*var2[3] + (-0.135*t1433*t176*t782 + 0.07996*t1497*t176*t782 + t853 + t854)*var2[4] + (0.07996*t1637 - 0.135*t1819)*var2[5];
  p_output1[37]=t912 + t922 + (-0.135*t1637 + 0.07996*t2342 - 1.*t263*t782*var1[2])*var2[3] + (-0.135*t1433*t263*t782 + 0.07996*t1497*t263*t782 + t925 + t936)*var2[4] + (-0.135*t2053 + 0.07996*t2460)*var2[5];
  p_output1[38]=t1011 + t1089 + t996 + (t1109 + t1114 + 0.135*t1433*t837 - 0.07996*t1497*t837)*var2[4] + (0.07996*t1433*t782 + 0.135*t1497*t782)*var2[5];
  p_output1[39]=t1310;
  p_output1[40]=t1399;
  p_output1[41]=t1429;
  p_output1[42]=t2812*var2[1] + (-1.*t2460*t2747 + t2771*t2883)*var2[2] + (t2812*(t3054 + t3112) + 0.08055*t3186 + t3285*t3343 - 0.135*t263*t782)*var2[3] + (0.08055*t3645 + t2812*(t3668 + t3682) + t3285*t3688 + t3391*t3705 + t3612*(t3711 + t3712) - 0.135*t176*t837)*var2[4] + (t3428 + t2812*(t3436 + t3438) + t3285*t3525 + 0.08055*t3543 + (t3567 + t3579)*t3612)*var2[5] + (t3428 + t2812*(t3744 + t3752) + t3285*t3778 + t3785 + t3612*(t3787 + t3790))*var2[6];
  p_output1[43]=(-1.*t1433*t2747*t782 + t1497*t2771*t782)*var2[0] + t3343*var2[2] + (t2812*(t3966 + t3969) + 0.08055*t4016 + t3886*t4044 + 0.135*t176*t782)*var2[3] + (0.08055*t3840 + t2812*(t3849 + t3858) + t3886*t3891 + t3705*t3920 + t3343*(t3930 + t3931) - 0.135*t263*t837)*var2[4] + (t4065 + t2812*(t4071 + t4082) + t3886*t4104 + t3343*(t4112 + t4122) + 0.08055*t4136)*var2[5] + (0.08055*t3612 + t4065 + t2812*(t4150 + t4155) + t3886*t4188 + t3343*(t4191 + t4192))*var2[6];
  p_output1[44]=t3612*var2[0] + (-1.*t1637*t2747 + t2342*t2771)*var2[1] + (t3343*(t3910 + t3911) + t4044*t4300 + t3343*t4306 + t3612*(t4506 + t4510))*var2[3] + (0.08055*t4283 + t3891*t4300 + t3688*t4306 + t3343*(t4344 + t4348) + t3612*(t4360 + t4364) - 0.135*t782)*var2[4] + (t4104*t4300 + t3525*t4306 + t4404 + t3343*(t4410 + t4416) + t3612*(t4431 + t4432))*var2[5] + (t4188*t4300 + t3778*t4306 + t4404 + t3343*(t4548 + t4577) + t3612*(t4598 + t4600))*var2[6];
  p_output1[45]=t4044*var2[3] + t3891*var2[4] + t4104*var2[5] + t4188*var2[6];
  p_output1[46]=t3343*var2[3] + t3688*var2[4] + t3525*var2[5] + t3778*var2[6];
  p_output1[47]=t3705*var2[4] + t3405*var2[5] + t3405*var2[6];
  p_output1[48]=t4783 + t4817 + (0.08055*t4044 - 1.*t4894*t5344 - 1.*t4994*(t3054 + t3112 + t5550 + t5551) - 0.01004*t5567)*var2[3] + (0.08055*t3891 - 1.*t4875*t5138 - 1.*t4781*(t3711 + t3712 + t5154 + t5161) - 1.*t4994*(t3668 + t3682 + t5173 + t5175) - 1.*t4894*t5231 - 0.01004*t5262)*var2[4] + (0.08055*t4104 - 0.01004*t3543*t4775 + t4878 - 1.*t4136*t4727*t4894 - 1.*t4781*(t3567 + t3579 + t4916) - 1.*(t3436 + t3438 + t4956)*t4994)*var2[5] + (0.08055*t4188 - 0.01004*t3343*t4775 + t4878 - 1.*t3612*t4727*t4894 - 1.*t4781*(t3787 + t3790 + t4916) - 1.*t4994*(t3744 + t3752 + t5079))*var2[6] + (-0.01004*t5344 - 1.*t4781*(t5372 + t5385) - 1.*t4994*(t5409 + t5418) - 1.*t4875*t5450 - 1.*t4894*t5479)*var2[7];
  p_output1[49]=t5610 + t5618 + (t3785 - 1.*t5661*t6025 - 1.*t4994*(t3966 + t3969 + t4874 + t6043) - 0.01004*t6056)*var2[3] + (0.08055*t3688 - 1.*t5138*t5628 - 1.*t5344*(t3930 + t3931 + t5834 + t5842) - 1.*t4994*(t3849 + t3858 + t5854 + t5859) - 1.*t5661*t5891 - 0.01004*t5908)*var2[4] + (0.08055*t3525 - 0.01004*t4136*t4775 + t5634 - 1.*t3543*t4727*t5661 - 1.*t5344*(t4112 + t4122 + t5687) - 1.*t4994*(t4071 + t4082 + t5721))*var2[5] + (0.08055*t3778 - 0.01004*t3612*t4775 + t5634 - 1.*t3343*t4727*t5661 - 1.*t5344*(t4191 + t4192 + t5687) - 1.*t4994*(t4150 + t4155 + t5799))*var2[6] + (-0.01004*t4781 - 1.*t5450*t5628 - 1.*t5344*(t5949 + t5955) - 1.*t4994*(t5973 + t5974) - 1.*t5661*t5993)*var2[7];
  p_output1[50]=t6085 + t6103 + (-1.*t5344*(t3910 + t3911 + t5625 + t5627) - 1.*t5344*t6109 - 1.*t6025*t6120 - 1.*t4781*(t4506 + t4510 + t6115 + t6255))*var2[3] + (0.08055*t3705 - 1.*t5231*t6109 - 1.*t5891*t6120 - 1.*t5344*(t4344 + t4348 + t6298 + t6322) - 1.*t4781*(t4360 + t4364 + t6352 + t6360) - 0.01004*t6380)*var2[4] + (t6107 - 1.*t4136*t4727*t6109 - 1.*t3543*t4727*t6120 + t6130 - 1.*t5344*(t4410 + t4416 + t6132) - 1.*t4781*(t4431 + t4432 + t6163))*var2[5] + (t6107 - 1.*t3612*t4727*t6109 - 1.*t3343*t4727*t6120 + t6130 - 1.*t5344*(t4548 + t4577 + t6210) - 1.*t4781*(t4598 + t4600 + t6221))*var2[6] + (-0.01004*t4994 - 1.*t5479*t6109 - 1.*t5993*t6120 - 1.*t5344*(t6414 + t6415) - 1.*t4781*(t6427 + t6434))*var2[7];
  p_output1[51]=t6496;
  p_output1[52]=t6528;
  p_output1[53]=t6565;
  p_output1[54]=t4783 + t4817 + (-0.13004*(t5567*t6566 + t4044*t6590) + 0.08055*(t4044*t6566 - 1.*t5567*t6590) - 1.*t5344*t6684 - 1.*t4994*(t3054 + t3112 + t5550 + t5551 + t7115 + t7117))*var2[3] + (-0.13004*(t5262*t6566 + t3891*t6590) + 0.08055*(t3891*t6566 - 1.*t5262*t6590) - 1.*t4994*(t3668 + t3682 + t5173 + t5175 + t5908*t6595 + t3688*t6680) - 1.*t4781*(t3711 + t3712 + t5154 + t5161 - 1.*t6380*t6595 - 1.*t3705*t6680) - 1.*t5231*t6684 - 1.*t5138*t6701)*var2[4] + (-0.13004*(t3543*t4775*t6566 + t4104*t6590) + 0.08055*(t4104*t6566 - 1.*t3543*t4775*t6590) - 1.*t4994*(t3436 + t3438 + t4956 + t4136*t4775*t6595 + t3525*t6680) - 1.*t4136*t4727*t6684 - 1.*t4781*(t3567 + t3579 + t4916 + t6753 + t6758) + t6837)*var2[5] + (-0.13004*(t3343*t4775*t6566 + t4188*t6590) + 0.08055*(t4188*t6566 - 1.*t3343*t4775*t6590) - 1.*t4994*(t3744 + t3752 + t5079 + t3612*t4775*t6595 + t3778*t6680) - 1.*t3612*t4727*t6684 - 1.*t4781*(t3787 + t3790 + t4916 + t6753 + t6758) + t6837)*var2[6] + (-0.13004*t5344*t6566 - 0.08055*t5344*t6590 - 1.*t4994*(t5409 + t5418 + t4781*t6595) - 1.*t4781*(t5372 + t5385 - 1.*t4994*t6595) - 1.*t5479*t6684 - 1.*t5450*t6701)*var2[7] + (0.08055*(-1.*t6056*t6566 - 1.*t3343*t6590) - 1.*t4781*(-1.*t6559*t7236 - 1.*t2812*t7246) - 1.*t4994*(t6518*t7236 + t3612*t7246) - 0.13004*t7327)*var2[8];
  p_output1[55]=t5610 + t5618 + (-0.13004*(t6056*t6566 + t3343*t6590) - 1.*t4994*(t3966 + t3969 + t4874 + t6043 - 1.*t5567*t6595 - 1.*t4044*t6680) + 0.08055*t7327 - 1.*t6025*t7415)*var2[3] + (-0.13004*(t5908*t6566 + t3688*t6590) + 0.08055*(t3688*t6566 - 1.*t5908*t6590) - 1.*t5344*(t3930 + t3931 + t5834 + t5842 + t6380*t6595 + t3705*t6680) - 1.*t4994*(t3849 + t3858 + t5854 + t5859 - 1.*t5262*t6595 - 1.*t3891*t6680) - 1.*t5891*t7415 - 1.*t5138*t7429)*var2[4] + (-0.13004*(t4136*t4775*t6566 + t3525*t6590) + 0.08055*(t3525*t6566 - 1.*t4136*t4775*t6590) - 1.*t4994*(t4071 + t4082 + t5721 - 1.*t3543*t4775*t6595 - 1.*t4104*t6680) - 1.*t3543*t4727*t7415 - 1.*t5344*(t4112 + t4122 + t5687 + t7453 + t7465) + t7518)*var2[5] + (-0.13004*(t3612*t4775*t6566 + t3778*t6590) + 0.08055*(t3778*t6566 - 1.*t3612*t4775*t6590) - 1.*t4994*(t4150 + t4155 + t5799 - 1.*t3343*t4775*t6595 - 1.*t4188*t6680) - 1.*t3343*t4727*t7415 - 1.*t5344*(t4191 + t4192 + t5687 + t7453 + t7465) + t7518)*var2[6] + (-0.13004*t4781*t6566 - 0.08055*t4781*t6590 - 1.*t5344*(t5949 + t5955 + t4994*t6595) - 1.*t4994*(t5973 + t5974 - 1.*t5344*t6595) - 1.*t5993*t7415 - 1.*t5450*t7429)*var2[7] + (0.08055*(-1.*t6518*t6566 - 1.*t3612*t6590) - 0.13004*(t3612*t6566 - 1.*t6518*t6590) - 1.*t5344*(t6559*t7236 + t2812*t7246) - 1.*t4994*(-1.*t6056*t7236 - 1.*t3343*t7246))*var2[8];
  p_output1[56]=t6085 + t6103 + (-1.*t4781*(t4506 + t4510 + t6115 + t6255 + t5567*t6595 + t4044*t6680) - 1.*t5344*(t3910 + t3911 + t5625 + t5627 + t7426 + t7427) - 1.*t5344*t7902 - 1.*t6025*t7924)*var2[3] + (-0.13004*(t6380*t6566 + t3705*t6590) + 0.08055*(t3705*t6566 - 1.*t6380*t6590) - 1.*t5344*(t4344 + t4348 + t6298 + t6322 - 1.*t5908*t6595 - 1.*t3688*t6680) - 1.*t4781*(t4360 + t4364 + t6352 + t6360 + t5262*t6595 + t3891*t6680) - 1.*t5231*t7902 - 1.*t5891*t7924)*var2[4] + (-1.*t5344*(t4410 + t4416 + t6132 - 1.*t4136*t4775*t6595 - 1.*t3525*t6680) - 1.*t4781*(t4431 + t4432 + t6163 + t3543*t4775*t6595 + t4104*t6680) - 1.*t4136*t4727*t7902 - 1.*t3543*t4727*t7924 + t8055 + t8094)*var2[5] + (-1.*t5344*(t4548 + t4577 + t6210 - 1.*t3612*t4775*t6595 - 1.*t3778*t6680) - 1.*t4781*(t4598 + t4600 + t6221 + t3343*t4775*t6595 + t4188*t6680) - 1.*t3612*t4727*t7902 - 1.*t3343*t4727*t7924 + t8055 + t8094)*var2[6] + (-0.13004*t4994*t6566 - 0.08055*t4994*t6590 - 1.*t5344*(t6414 + t6415 - 1.*t4781*t6595) - 1.*t4781*(t6427 + t6434 + t5344*t6595) - 1.*t5479*t7902 - 1.*t5993*t7924)*var2[7] + (0.08055*(-1.*t6559*t6566 - 1.*t2812*t6590) - 0.13004*(t2812*t6566 - 1.*t6559*t6590) - 1.*t4781*(t6056*t7236 + t3343*t7246) - 1.*t5344*(-1.*t6518*t7236 - 1.*t3612*t7246))*var2[8];
  p_output1[57]=t6496;
  p_output1[58]=t6528;
  p_output1[59]=t6565;
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

#include "dJs_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void dJs_LeftKneeJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
