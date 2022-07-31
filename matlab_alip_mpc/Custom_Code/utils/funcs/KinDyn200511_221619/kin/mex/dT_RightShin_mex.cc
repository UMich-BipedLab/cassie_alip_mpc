/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:37 GMT-04:00
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
  double t600;
  double t669;
  double t676;
  double t863;
  double t461;
  double t879;
  double t1025;
  double t795;
  double t900;
  double t946;
  double t460;
  double t1029;
  double t1038;
  double t1065;
  double t1080;
  double t1084;
  double t1093;
  double t1099;
  double t1110;
  double t1114;
  double t1211;
  double t994;
  double t1144;
  double t1178;
  double t455;
  double t1243;
  double t1288;
  double t1320;
  double t376;
  double t1493;
  double t1489;
  double t1498;
  double t1506;
  double t1583;
  double t1593;
  double t1594;
  double t1563;
  double t1666;
  double t1690;
  double t1744;
  double t1747;
  double t1753;
  double t1372;
  double t1714;
  double t1766;
  double t1810;
  double t1861;
  double t1875;
  double t1880;
  double t1965;
  double t1974;
  double t1977;
  double t1979;
  double t1987;
  double t2007;
  double t2023;
  double t2063;
  double t2076;
  double t2208;
  double t2216;
  double t2227;
  double t2228;
  double t2223;
  double t2241;
  double t2245;
  double t2254;
  double t2255;
  double t2260;
  double t2343;
  double t2344;
  double t2356;
  double t2340;
  double t2357;
  double t2360;
  double t2378;
  double t2386;
  double t2394;
  double t2402;
  double t2479;
  double t2503;
  double t2511;
  double t2444;
  double t2512;
  double t2513;
  double t2517;
  double t2585;
  double t2588;
  double t2595;
  double t2602;
  double t2604;
  double t2622;
  double t2599;
  double t2630;
  double t2657;
  double t2669;
  double t2680;
  double t2681;
  double t2684;
  double t2689;
  double t2690;
  double t2666;
  double t2696;
  double t2710;
  double t2719;
  double t2742;
  double t2765;
  double t2914;
  double t2919;
  double t2928;
  double t2936;
  double t2940;
  double t2941;
  double t2945;
  double t2946;
  double t2953;
  double t2929;
  double t2955;
  double t2956;
  double t2964;
  double t2976;
  double t2992;
  double t3051;
  double t3054;
  double t3055;
  double t3087;
  double t3100;
  double t3111;
  double t3112;
  double t3117;
  double t3109;
  double t3121;
  double t3130;
  double t3148;
  double t3156;
  double t3163;
  double t3203;
  double t3205;
  double t3206;
  double t3211;
  double t3220;
  double t3228;
  double t3229;
  double t3230;
  double t3233;
  double t3308;
  double t3309;
  double t3314;
  double t3315;
  double t3311;
  double t3317;
  double t3318;
  double t3331;
  double t3332;
  double t3333;
  double t2555;
  double t2556;
  double t2561;
  double t3406;
  double t3407;
  double t3412;
  double t3405;
  double t3413;
  double t3414;
  double t3436;
  double t3443;
  double t3452;
  double t3454;
  double t3491;
  double t3511;
  double t3515;
  double t3467;
  double t3516;
  double t3525;
  double t3528;
  double t3603;
  double t3605;
  double t3623;
  double t3635;
  double t3638;
  double t3649;
  double t3728;
  double t3729;
  double t3731;
  double t3741;
  double t3745;
  double t3747;
  double t3734;
  double t3748;
  double t3750;
  double t3769;
  double t3777;
  double t3785;
  double t3760;
  double t3792;
  double t3794;
  double t3798;
  double t3801;
  double t3813;
  double t3814;
  double t3825;
  double t3837;
  double t3856;
  double t3857;
  double t3858;
  double t3855;
  double t3865;
  double t3878;
  double t3902;
  double t3908;
  double t3912;
  double t3928;
  double t3963;
  double t3966;
  double t3973;
  double t3950;
  double t3981;
  double t3983;
  double t3988;
  double t4028;
  double t4033;
  double t4034;
  double t4051;
  double t4054;
  double t4065;
  double t4068;
  double t4085;
  double t4093;
  double t4037;
  double t4100;
  double t4105;
  double t4112;
  double t4120;
  double t4126;
  double t1198;
  double t1334;
  double t1357;
  double t1381;
  double t1412;
  double t1416;
  double t1847;
  double t1883;
  double t1885;
  double t1906;
  double t1914;
  double t1916;
  double t2095;
  double t2102;
  double t2110;
  double t2129;
  double t2161;
  double t2167;
  double t2251;
  double t2269;
  double t2270;
  double t2289;
  double t2299;
  double t2302;
  double t2372;
  double t2410;
  double t2442;
  double t2455;
  double t2521;
  double t2536;
  double t4273;
  double t2718;
  double t2780;
  double t2784;
  double t2827;
  double t2829;
  double t2831;
  double t2963;
  double t2993;
  double t3010;
  double t3017;
  double t3020;
  double t3031;
  double t3138;
  double t3174;
  double t3177;
  double t3188;
  double t3190;
  double t3191;
  double t3243;
  double t3246;
  double t3248;
  double t3270;
  double t3282;
  double t3288;
  double t3326;
  double t3336;
  double t3337;
  double t3344;
  double t3345;
  double t3351;
  double t2574;
  double t2576;
  double t3420;
  double t3455;
  double t3463;
  double t3476;
  double t3530;
  double t3541;
  double t4435;
  double t3563;
  double t3564;
  double t3567;
  double t3658;
  double t3660;
  double t3674;
  double t3686;
  double t3694;
  double t3702;
  double t4486;
  double t4490;
  double t4492;
  double t3898;
  double t3936;
  double t3946;
  double t3953;
  double t3992;
  double t3995;
  double t4522;
  double t4008;
  double t4009;
  double t4014;
  double t4108;
  double t4128;
  double t4138;
  double t4154;
  double t4155;
  double t4157;
  double t4807;
  double t4826;
  double t4853;
  double t4871;
  double t4937;
  double t4941;
  double t5019;
  double t5036;
  double t5069;
  double t5076;
  double t4177;
  double t4178;
  double t4180;
  double t4891;
  double t4895;
  double t4897;
  double t4832;
  double t4835;
  double t4849;
  double t4950;
  double t4952;
  double t4955;
  double t4908;
  double t4918;
  double t4919;
  double t4983;
  double t5002;
  double t5004;
  double t5037;
  double t5043;
  double t5044;
  double t5054;
  double t5055;
  double t5056;
  double t5083;
  double t5099;
  double t5102;
  double t5123;
  double t5137;
  double t5150;
  double t4191;
  double t4196;
  double t4199;
  double t4882;
  double t4209;
  double t4210;
  double t4214;
  double t4238;
  double t4239;
  double t4240;
  double t4247;
  double t4258;
  double t4261;
  double t4281;
  double t4297;
  double t5637;
  double t4303;
  double t4304;
  double t4874;
  double t4885;
  double t4307;
  double t4308;
  double t4313;
  double t4325;
  double t4329;
  double t4330;
  double t4338;
  double t4351;
  double t4365;
  double t5230;
  double t5235;
  double t5238;
  double t5240;
  double t5243;
  double t4373;
  double t4381;
  double t4388;
  double t5350;
  double t5351;
  double t5356;
  double t5359;
  double t5363;
  double t4398;
  double t4401;
  double t4405;
  double t5477;
  double t5483;
  double t5493;
  double t5502;
  double t5510;
  double t4420;
  double t4428;
  double t4430;
  double t5585;
  double t5592;
  double t5599;
  double t5605;
  double t5623;
  double t4444;
  double t4450;
  double t5671;
  double t5687;
  double t5689;
  double t5691;
  double t5704;
  double t6289;
  double t4457;
  double t4458;
  double t4465;
  double t4472;
  double t4482;
  double t6432;
  double t6433;
  double t6436;
  double t6444;
  double t6477;
  double t6479;
  double t6481;
  double t6483;
  double t6485;
  double t6498;
  double t6504;
  double t6505;
  double t6515;
  double t4503;
  double t4505;
  double t4509;
  double t4533;
  double t4537;
  double t6576;
  double t4541;
  double t4543;
  double t4563;
  double t4564;
  double t4568;
  t600 = Cos(var1[3]);
  t669 = Cos(var1[4]);
  t676 = Cos(var1[5]);
  t863 = Sin(var1[13]);
  t461 = Cos(var1[13]);
  t879 = Sin(var1[5]);
  t1025 = Cos(var1[15]);
  t795 = t461*t600*t669*t676;
  t900 = -1.*t600*t669*t863*t879;
  t946 = t795 + t900;
  t460 = Sin(var1[15]);
  t1029 = Cos(var1[14]);
  t1038 = Sin(var1[4]);
  t1065 = -1.*t1029*t600*t1038;
  t1080 = Sin(var1[14]);
  t1084 = t600*t669*t676*t863;
  t1093 = t461*t600*t669*t879;
  t1099 = t1084 + t1093;
  t1110 = t1080*t1099;
  t1114 = t1065 + t1110;
  t1211 = Cos(var1[16]);
  t994 = t460*t946;
  t1144 = t1025*t1114;
  t1178 = t994 + t1144;
  t455 = Sin(var1[16]);
  t1243 = t1025*t946;
  t1288 = -1.*t460*t1114;
  t1320 = t1243 + t1288;
  t376 = Cos(var1[17]);
  t1493 = Sin(var1[3]);
  t1489 = t600*t676*t1038;
  t1498 = t1493*t879;
  t1506 = t1489 + t1498;
  t1583 = t676*t1493;
  t1593 = -1.*t600*t1038*t879;
  t1594 = t1583 + t1593;
  t1563 = -1.*t863*t1506;
  t1666 = t461*t1594;
  t1690 = t1563 + t1666;
  t1744 = t461*t1506;
  t1747 = t863*t1594;
  t1753 = t1744 + t1747;
  t1372 = Sin(var1[17]);
  t1714 = t460*t1690;
  t1766 = t1025*t1080*t1753;
  t1810 = t1714 + t1766;
  t1861 = t1025*t1690;
  t1875 = -1.*t1080*t460*t1753;
  t1880 = t1861 + t1875;
  t1965 = -1.*t600*t669*t1080;
  t1974 = t863*t1506;
  t1977 = -1.*t676*t1493;
  t1979 = t600*t1038*t879;
  t1987 = t1977 + t1979;
  t2007 = t461*t1987;
  t2023 = t1974 + t2007;
  t2063 = t1029*t2023;
  t2076 = t1965 + t2063;
  t2208 = -1.*t461*t1987;
  t2216 = t1563 + t2208;
  t2227 = -1.*t863*t1987;
  t2228 = t1744 + t2227;
  t2223 = t460*t2216;
  t2241 = t1025*t1080*t2228;
  t2245 = t2223 + t2241;
  t2254 = t1025*t2216;
  t2255 = -1.*t1080*t460*t2228;
  t2260 = t2254 + t2255;
  t2343 = t1029*t600*t669;
  t2344 = t1080*t2023;
  t2356 = t2343 + t2344;
  t2340 = -1.*t460*t2228;
  t2357 = -1.*t1025*t2356;
  t2360 = t2340 + t2357;
  t2378 = t1025*t2228;
  t2386 = -1.*t460*t2356;
  t2394 = t2378 + t2386;
  t2402 = t1211*t2394;
  t2479 = t460*t2228;
  t2503 = t1025*t2356;
  t2511 = t2479 + t2503;
  t2444 = -1.*t455*t2394;
  t2512 = -1.*t455*t2511;
  t2513 = t2512 + t2402;
  t2517 = t1372*t2513;
  t2585 = -1.*t676*t1493*t1038;
  t2588 = t600*t879;
  t2595 = t2585 + t2588;
  t2602 = -1.*t600*t676;
  t2604 = -1.*t1493*t1038*t879;
  t2622 = t2602 + t2604;
  t2599 = t461*t2595;
  t2630 = -1.*t863*t2622;
  t2657 = t2599 + t2630;
  t2669 = -1.*t1029*t669*t1493;
  t2680 = t863*t2595;
  t2681 = t461*t2622;
  t2684 = t2680 + t2681;
  t2689 = t1080*t2684;
  t2690 = t2669 + t2689;
  t2666 = t460*t2657;
  t2696 = t1025*t2690;
  t2710 = t2666 + t2696;
  t2719 = t1025*t2657;
  t2742 = -1.*t460*t2690;
  t2765 = t2719 + t2742;
  t2914 = t461*t669*t676*t1493;
  t2919 = -1.*t669*t863*t1493*t879;
  t2928 = t2914 + t2919;
  t2936 = -1.*t1029*t1493*t1038;
  t2940 = t669*t676*t863*t1493;
  t2941 = t461*t669*t1493*t879;
  t2945 = t2940 + t2941;
  t2946 = t1080*t2945;
  t2953 = t2936 + t2946;
  t2929 = t460*t2928;
  t2955 = t1025*t2953;
  t2956 = t2929 + t2955;
  t2964 = t1025*t2928;
  t2976 = -1.*t460*t2953;
  t2992 = t2964 + t2976;
  t3051 = t676*t1493*t1038;
  t3054 = -1.*t600*t879;
  t3055 = t3051 + t3054;
  t3087 = -1.*t863*t3055;
  t3100 = t3087 + t2681;
  t3111 = t461*t3055;
  t3112 = t863*t2622;
  t3117 = t3111 + t3112;
  t3109 = t460*t3100;
  t3121 = t1025*t1080*t3117;
  t3130 = t3109 + t3121;
  t3148 = t1025*t3100;
  t3156 = -1.*t1080*t460*t3117;
  t3163 = t3148 + t3156;
  t3203 = -1.*t669*t1080*t1493;
  t3205 = t863*t3055;
  t3206 = t600*t676;
  t3211 = t1493*t1038*t879;
  t3220 = t3206 + t3211;
  t3228 = t461*t3220;
  t3229 = t3205 + t3228;
  t3230 = t1029*t3229;
  t3233 = t3203 + t3230;
  t3308 = -1.*t461*t3220;
  t3309 = t3087 + t3308;
  t3314 = -1.*t863*t3220;
  t3315 = t3111 + t3314;
  t3311 = t460*t3309;
  t3317 = t1025*t1080*t3315;
  t3318 = t3311 + t3317;
  t3331 = t1025*t3309;
  t3332 = -1.*t1080*t460*t3315;
  t3333 = t3331 + t3332;
  t2555 = t1211*t2511;
  t2556 = t455*t2394;
  t2561 = t2555 + t2556;
  t3406 = t1029*t669*t1493;
  t3407 = t1080*t3229;
  t3412 = t3406 + t3407;
  t3405 = -1.*t460*t3315;
  t3413 = -1.*t1025*t3412;
  t3414 = t3405 + t3413;
  t3436 = t1025*t3315;
  t3443 = -1.*t460*t3412;
  t3452 = t3436 + t3443;
  t3454 = t1211*t3452;
  t3491 = t460*t3315;
  t3511 = t1025*t3412;
  t3515 = t3491 + t3511;
  t3467 = -1.*t455*t3452;
  t3516 = -1.*t455*t3515;
  t3525 = t3516 + t3454;
  t3528 = t1372*t3525;
  t3603 = t1080*t1038;
  t3605 = t669*t676*t863;
  t3623 = t461*t669*t879;
  t3635 = t3605 + t3623;
  t3638 = t1029*t3635;
  t3649 = t3603 + t3638;
  t3728 = -1.*t669*t676*t863;
  t3729 = -1.*t461*t669*t879;
  t3731 = t3728 + t3729;
  t3741 = t461*t669*t676;
  t3745 = -1.*t669*t863*t879;
  t3747 = t3741 + t3745;
  t3734 = t460*t3731;
  t3748 = t1025*t1080*t3747;
  t3750 = t3734 + t3748;
  t3769 = t1025*t3731;
  t3777 = -1.*t1080*t460*t3747;
  t3785 = t3769 + t3777;
  t3760 = -1.*t455*t3750;
  t3792 = t1211*t3785;
  t3794 = t3760 + t3792;
  t3798 = -1.*t376*t3794;
  t3801 = t1211*t3750;
  t3813 = t455*t3785;
  t3814 = t3801 + t3813;
  t3825 = t1372*t3814;
  t3837 = t3798 + t3825;
  t3856 = -1.*t1029*t1038;
  t3857 = t1080*t3635;
  t3858 = t3856 + t3857;
  t3855 = -1.*t460*t3747;
  t3865 = -1.*t1025*t3858;
  t3878 = t3855 + t3865;
  t3902 = t1025*t3747;
  t3908 = -1.*t460*t3858;
  t3912 = t3902 + t3908;
  t3928 = t1211*t3912;
  t3963 = t460*t3747;
  t3966 = t1025*t3858;
  t3973 = t3963 + t3966;
  t3950 = -1.*t455*t3912;
  t3981 = -1.*t455*t3973;
  t3983 = t3981 + t3928;
  t3988 = t1372*t3983;
  t4028 = -1.*t461*t676*t1038;
  t4033 = t863*t1038*t879;
  t4034 = t4028 + t4033;
  t4051 = -1.*t1029*t669;
  t4054 = -1.*t676*t863*t1038;
  t4065 = -1.*t461*t1038*t879;
  t4068 = t4054 + t4065;
  t4085 = t1080*t4068;
  t4093 = t4051 + t4085;
  t4037 = t460*t4034;
  t4100 = t1025*t4093;
  t4105 = t4037 + t4100;
  t4112 = t1025*t4034;
  t4120 = -1.*t460*t4093;
  t4126 = t4112 + t4120;
  t1198 = -1.*t455*t1178;
  t1334 = t1211*t1320;
  t1357 = t1198 + t1334;
  t1381 = t1211*t1178;
  t1412 = t455*t1320;
  t1416 = t1381 + t1412;
  t1847 = -1.*t455*t1810;
  t1883 = t1211*t1880;
  t1885 = t1847 + t1883;
  t1906 = t1211*t1810;
  t1914 = t455*t1880;
  t1916 = t1906 + t1914;
  t2095 = -1.*t1211*t460*t2076;
  t2102 = -1.*t1025*t455*t2076;
  t2110 = t2095 + t2102;
  t2129 = t1025*t1211*t2076;
  t2161 = -1.*t460*t455*t2076;
  t2167 = t2129 + t2161;
  t2251 = -1.*t455*t2245;
  t2269 = t1211*t2260;
  t2270 = t2251 + t2269;
  t2289 = t1211*t2245;
  t2299 = t455*t2260;
  t2302 = t2289 + t2299;
  t2372 = t455*t2360;
  t2410 = t2372 + t2402;
  t2442 = t1211*t2360;
  t2455 = t2442 + t2444;
  t2521 = -1.*t1211*t2511;
  t2536 = t2521 + t2444;
  t4273 = t376*t2513;
  t2718 = -1.*t455*t2710;
  t2780 = t1211*t2765;
  t2784 = t2718 + t2780;
  t2827 = t1211*t2710;
  t2829 = t455*t2765;
  t2831 = t2827 + t2829;
  t2963 = -1.*t455*t2956;
  t2993 = t1211*t2992;
  t3010 = t2963 + t2993;
  t3017 = t1211*t2956;
  t3020 = t455*t2992;
  t3031 = t3017 + t3020;
  t3138 = -1.*t455*t3130;
  t3174 = t1211*t3163;
  t3177 = t3138 + t3174;
  t3188 = t1211*t3130;
  t3190 = t455*t3163;
  t3191 = t3188 + t3190;
  t3243 = -1.*t1211*t460*t3233;
  t3246 = -1.*t1025*t455*t3233;
  t3248 = t3243 + t3246;
  t3270 = t1025*t1211*t3233;
  t3282 = -1.*t460*t455*t3233;
  t3288 = t3270 + t3282;
  t3326 = -1.*t455*t3318;
  t3336 = t1211*t3333;
  t3337 = t3326 + t3336;
  t3344 = t1211*t3318;
  t3345 = t455*t3333;
  t3351 = t3344 + t3345;
  t2574 = t376*t2561;
  t2576 = t2517 + t2574;
  t3420 = t455*t3414;
  t3455 = t3420 + t3454;
  t3463 = t1211*t3414;
  t3476 = t3463 + t3467;
  t3530 = -1.*t1211*t3515;
  t3541 = t3530 + t3467;
  t4435 = t376*t3525;
  t3563 = t1211*t3515;
  t3564 = t455*t3452;
  t3567 = t3563 + t3564;
  t3658 = -1.*t1211*t460*t3649;
  t3660 = -1.*t1025*t455*t3649;
  t3674 = t3658 + t3660;
  t3686 = t1025*t1211*t3649;
  t3694 = -1.*t460*t455*t3649;
  t3702 = t3686 + t3694;
  t4486 = t1372*t3794;
  t4490 = t376*t3814;
  t4492 = t4486 + t4490;
  t3898 = t455*t3878;
  t3936 = t3898 + t3928;
  t3946 = t1211*t3878;
  t3953 = t3946 + t3950;
  t3992 = -1.*t1211*t3973;
  t3995 = t3992 + t3950;
  t4522 = t376*t3983;
  t4008 = t1211*t3973;
  t4009 = t455*t3912;
  t4014 = t4008 + t4009;
  t4108 = -1.*t455*t4105;
  t4128 = t1211*t4126;
  t4138 = t4108 + t4128;
  t4154 = t1211*t4105;
  t4155 = t455*t4126;
  t4157 = t4154 + t4155;
  t4807 = -1.*t461;
  t4826 = 1. + t4807;
  t4853 = -1.*t1029;
  t4871 = 1. + t4853;
  t4937 = -1.*t1025;
  t4941 = 1. + t4937;
  t5019 = -1.*t1211;
  t5036 = 1. + t5019;
  t5069 = -1.*t376;
  t5076 = 1. + t5069;
  t4177 = t1372*t1357;
  t4178 = t376*t1416;
  t4180 = t4177 + t4178;
  t4891 = -0.135*t4826;
  t4895 = 0.07996*t863;
  t4897 = 0. + t4891 + t4895;
  t4832 = 0.07996*t4826;
  t4835 = 0.135*t863;
  t4849 = 0. + t4832 + t4835;
  t4950 = -0.01004*t4941;
  t4952 = 0.08055*t460;
  t4955 = 0. + t4950 + t4952;
  t4908 = -0.135*t4871;
  t4918 = 0.08055*t1080;
  t4919 = 0. + t4908 + t4918;
  t4983 = -0.08055*t4941;
  t5002 = -0.01004*t460;
  t5004 = 0. + t4983 + t5002;
  t5037 = -0.08055*t5036;
  t5043 = -0.13004*t455;
  t5044 = 0. + t5037 + t5043;
  t5054 = -0.13004*t5036;
  t5055 = 0.08055*t455;
  t5056 = 0. + t5054 + t5055;
  t5083 = -0.19074*t5076;
  t5099 = 0.03315*t1372;
  t5102 = 0. + t5083 + t5099;
  t5123 = -0.03315*t5076;
  t5137 = -0.19074*t1372;
  t5150 = 0. + t5123 + t5137;
  t4191 = t1372*t1885;
  t4196 = t376*t1916;
  t4199 = t4191 + t4196;
  t4882 = -0.135*t1080;
  t4209 = t1372*t2110;
  t4210 = t376*t2167;
  t4214 = t4209 + t4210;
  t4238 = t1372*t2270;
  t4239 = t376*t2302;
  t4240 = t4238 + t4239;
  t4247 = t376*t2410;
  t4258 = t1372*t2455;
  t4261 = t4247 + t4258;
  t4281 = t1372*t2536;
  t4297 = t4273 + t4281;
  t5637 = -1.*t1372*t2513;
  t4303 = -1.*t1372*t2561;
  t4304 = t4273 + t4303;
  t4874 = -0.08055*t4871;
  t4885 = 0. + t4874 + t4882;
  t4307 = t1372*t2784;
  t4308 = t376*t2831;
  t4313 = t4307 + t4308;
  t4325 = t1372*t3010;
  t4329 = t376*t3031;
  t4330 = t4325 + t4329;
  t4338 = t1372*t3177;
  t4351 = t376*t3191;
  t4365 = t4338 + t4351;
  t5230 = -0.135*t1029;
  t5235 = -0.08055*t1080;
  t5238 = t5230 + t5235;
  t5240 = 0.08055*t1029;
  t5243 = t5240 + t4882;
  t4373 = t1372*t3248;
  t4381 = t376*t3288;
  t4388 = t4373 + t4381;
  t5350 = 0.135*t461;
  t5351 = t5350 + t4895;
  t5356 = 0.07996*t461;
  t5359 = -0.135*t863;
  t5363 = t5356 + t5359;
  t4398 = t1372*t3337;
  t4401 = t376*t3351;
  t4405 = t4398 + t4401;
  t5477 = 0.08055*t1025;
  t5483 = t5477 + t5002;
  t5493 = -0.01004*t1025;
  t5502 = -0.08055*t460;
  t5510 = t5493 + t5502;
  t4420 = t376*t3455;
  t4428 = t1372*t3476;
  t4430 = t4420 + t4428;
  t5585 = -0.13004*t1211;
  t5592 = -0.08055*t455;
  t5599 = t5585 + t5592;
  t5605 = 0.08055*t1211;
  t5623 = t5605 + t5043;
  t4444 = t1372*t3541;
  t4450 = t4435 + t4444;
  t5671 = 0.03315*t376;
  t5687 = t5671 + t5137;
  t5689 = -0.19074*t376;
  t5691 = -0.03315*t1372;
  t5704 = t5689 + t5691;
  t6289 = -1.*t1372*t3525;
  t4457 = -1.*t1372*t3567;
  t4458 = t4435 + t4457;
  t4465 = t1372*t3674;
  t4472 = t376*t3702;
  t4482 = t4465 + t4472;
  t6432 = t4955*t3731;
  t6433 = -0.1303*t1029*t3747;
  t6436 = t4919*t3747;
  t6444 = t1080*t5004*t3747;
  t6477 = t5044*t3750;
  t6479 = t5056*t3785;
  t6481 = t5102*t3794;
  t6483 = t5150*t3814;
  t6485 = -0.03195*t4492;
  t6498 = t376*t3794;
  t6504 = -1.*t1372*t3814;
  t6505 = t6498 + t6504;
  t6515 = -0.37414*t6505;
  t4503 = t376*t3936;
  t4505 = t1372*t3953;
  t4509 = t4503 + t4505;
  t4533 = t1372*t3995;
  t4537 = t4522 + t4533;
  t6576 = -1.*t1372*t3983;
  t4541 = -1.*t1372*t4014;
  t4543 = t4522 + t4541;
  t4563 = t1372*t4138;
  t4564 = t376*t4157;
  t4568 = t4563 + t4564;
  p_output1[0]=(t1372*t2831 - 1.*t2784*t376)*var2[3] + (t1372*t1416 - 1.*t1357*t376)*var2[4] + (t1372*t1916 - 1.*t1885*t376)*var2[5] + (t1372*t2302 - 1.*t2270*t376)*var2[13] + (t1372*t2167 - 1.*t2110*t376)*var2[14] + (t1372*t2410 - 1.*t2455*t376)*var2[15] + (t2517 - 1.*t2536*t376)*var2[16] + t2576*var2[17];
  p_output1[1]=(t1372*t2561 - 1.*t2513*t376)*var2[3] + (t1372*t3031 - 1.*t3010*t376)*var2[4] + (t1372*t3191 - 1.*t3177*t376)*var2[5] + (t1372*t3351 - 1.*t3337*t376)*var2[13] + (t1372*t3288 - 1.*t3248*t376)*var2[14] + (t1372*t3455 - 1.*t3476*t376)*var2[15] + (t3528 - 1.*t3541*t376)*var2[16] + (t3528 + t3567*t376)*var2[17];
  p_output1[2]=(-1.*t376*t4138 + t1372*t4157)*var2[4] + t3837*var2[5] + t3837*var2[13] + (t1372*t3702 - 1.*t3674*t376)*var2[14] + (t1372*t3936 - 1.*t376*t3953)*var2[15] + (t3988 - 1.*t376*t3995)*var2[16] + (t3988 + t376*t4014)*var2[17];
  p_output1[3]=0;
  p_output1[4]=t4313*var2[3] + t4180*var2[4] + t4199*var2[5] + t4240*var2[13] + t4214*var2[14] + t4261*var2[15] + t4297*var2[16] + t4304*var2[17];
  p_output1[5]=t2576*var2[3] + t4330*var2[4] + t4365*var2[5] + t4405*var2[13] + t4388*var2[14] + t4430*var2[15] + t4450*var2[16] + t4458*var2[17];
  p_output1[6]=t4568*var2[4] + t4492*var2[5] + t4492*var2[13] + t4482*var2[14] + t4509*var2[15] + t4537*var2[16] + t4543*var2[17];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1029*t2684 + t3203)*var2[3] + (-1.*t1029*t1099 - 1.*t1038*t1080*t600)*var2[4] - 1.*t1029*t1753*var2[5] - 1.*t1029*t2228*var2[13] + t2356*var2[14];
  p_output1[9]=(-1.*t1029*t2023 + t1080*t600*t669)*var2[3] + (-1.*t1038*t1080*t1493 - 1.*t1029*t2945)*var2[4] - 1.*t1029*t3117*var2[5] - 1.*t1029*t3315*var2[13] + t3412*var2[14];
  p_output1[10]=(-1.*t1029*t4068 - 1.*t1080*t669)*var2[4] - 1.*t1029*t3747*var2[5] - 1.*t1029*t3747*var2[13] + t3858*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.37414*(-1.*t1372*t2831 + t2784*t376) - 0.03195*t4313 + t2595*t4849 + t2622*t4897 + t2684*t4919 + t2657*t4955 + t2690*t5004 + t2710*t5044 + t2765*t5056 + t2784*t5102 + t2831*t5150 - 1.*t1493*t4885*t669 - 0.1303*(t1029*t2684 + t1080*t1493*t669))*var2[3] + (-0.37414*(-1.*t1372*t1416 + t1357*t376) - 0.03195*t4180 + t1099*t4919 + t1114*t5004 + t1178*t5044 + t1320*t5056 + t1357*t5102 + t1416*t5150 - 1.*t1038*t4885*t600 - 0.1303*(t1029*t1099 + t1038*t1080*t600) + t4849*t600*t669*t676 + t4897*t600*t669*t879 + t4955*t946)*var2[4] + (-0.1303*t1029*t1753 - 0.37414*(-1.*t1372*t1916 + t1885*t376) - 0.03195*t4199 + t1594*t4849 + t1506*t4897 + t1753*t4919 + t1690*t4955 + t1080*t1753*t5004 + t1810*t5044 + t1880*t5056 + t1885*t5102 + t1916*t5150)*var2[5] + (-0.1303*t1029*t2228 - 0.37414*(-1.*t1372*t2302 + t2270*t376) - 0.03195*t4240 + t2228*t4919 + t2216*t4955 + t1080*t2228*t5004 + t2245*t5044 + t2260*t5056 + t2270*t5102 + t2302*t5150 + t1506*t5351 + t1987*t5363)*var2[13] + (-0.37414*(-1.*t1372*t2167 + t2110*t376) - 0.03195*t4214 + t2076*t5004 + t1025*t2076*t5044 - 1.*t2076*t460*t5056 + t2110*t5102 + t2167*t5150 + t2023*t5243 + t5238*t600*t669 - 0.1303*(-1.*t1080*t2023 - 1.*t1029*t600*t669))*var2[14] + (-0.37414*(-1.*t1372*t2410 + t2455*t376) - 0.03195*t4261 + t2394*t5044 + t2360*t5056 + t2455*t5102 + t2410*t5150 + t2228*t5483 + t2356*t5510)*var2[15] + (-0.03195*t4297 + t2536*t5102 + t2513*t5150 + t2511*t5599 + t2394*t5623 - 0.37414*(t2536*t376 + t5637))*var2[16] + (-0.03195*t4304 - 0.37414*(-1.*t2561*t376 + t5637) + t2513*t5687 + t2561*t5704)*var2[17];
  p_output1[13]=var2[1] + (-0.1303*t2076 - 0.03195*t2576 - 0.37414*t4304 + t1506*t4849 + t1987*t4897 + t2023*t4919 + t2228*t4955 + t2356*t5004 + t2511*t5044 + t2394*t5056 + t2513*t5102 + t2561*t5150 + t4885*t600*t669)*var2[3] + (-0.1303*(t1038*t1080*t1493 + t1029*t2945) - 0.37414*(-1.*t1372*t3031 + t3010*t376) - 0.03195*t4330 - 1.*t1038*t1493*t4885 + t2945*t4919 + t2928*t4955 + t2953*t5004 + t2956*t5044 + t2992*t5056 + t3010*t5102 + t3031*t5150 + t1493*t4849*t669*t676 + t1493*t4897*t669*t879)*var2[4] + (-0.1303*t1029*t3117 - 0.37414*(-1.*t1372*t3191 + t3177*t376) - 0.03195*t4365 + t2622*t4849 + t3055*t4897 + t3117*t4919 + t3100*t4955 + t1080*t3117*t5004 + t3130*t5044 + t3163*t5056 + t3177*t5102 + t3191*t5150)*var2[5] + (-0.1303*t1029*t3315 - 0.37414*(-1.*t1372*t3351 + t3337*t376) - 0.03195*t4405 + t3315*t4919 + t3309*t4955 + t1080*t3315*t5004 + t3318*t5044 + t3333*t5056 + t3337*t5102 + t3351*t5150 + t3055*t5351 + t3220*t5363)*var2[13] + (-0.1303*(t2669 - 1.*t1080*t3229) - 0.37414*(-1.*t1372*t3288 + t3248*t376) - 0.03195*t4388 + t3233*t5004 + t1025*t3233*t5044 - 1.*t3233*t460*t5056 + t3248*t5102 + t3288*t5150 + t3229*t5243 + t1493*t5238*t669)*var2[14] + (-0.37414*(-1.*t1372*t3455 + t3476*t376) - 0.03195*t4430 + t3452*t5044 + t3414*t5056 + t3476*t5102 + t3455*t5150 + t3315*t5483 + t3412*t5510)*var2[15] + (-0.03195*t4450 + t3541*t5102 + t3525*t5150 + t3515*t5599 + t3452*t5623 - 0.37414*(t3541*t376 + t6289))*var2[16] + (-0.03195*t4458 + t3525*t5687 + t3567*t5704 - 0.37414*(-1.*t3567*t376 + t6289))*var2[17];
  p_output1[14]=var2[2] + (-0.37414*(t376*t4138 - 1.*t1372*t4157) - 0.03195*t4568 + t4068*t4919 + t4034*t4955 + t4093*t5004 + t4105*t5044 + t4126*t5056 + t4138*t5102 + t4157*t5150 - 1.*t4885*t669 - 0.1303*(t1029*t4068 + t1080*t669) - 1.*t1038*t4849*t676 - 1.*t1038*t4897*t879)*var2[4] + (t6432 + t6433 + t6436 + t6444 + t6477 + t6479 + t6481 + t6483 + t6485 + t6515 + t4897*t669*t676 - 1.*t4849*t669*t879)*var2[5] + (t6432 + t6433 + t6436 + t6444 + t6477 + t6479 + t6481 + t6483 + t6485 + t6515 + t5351*t669*t676 + t5363*t669*t879)*var2[13] + (-0.1303*(t1029*t1038 - 1.*t1080*t3635) - 0.37414*(-1.*t1372*t3702 + t3674*t376) - 0.03195*t4482 + t3649*t5004 + t1025*t3649*t5044 - 1.*t3649*t460*t5056 + t3674*t5102 + t3702*t5150 - 1.*t1038*t5238 + t3635*t5243)*var2[14] + (-0.37414*(-1.*t1372*t3936 + t376*t3953) - 0.03195*t4509 + t3912*t5044 + t3878*t5056 + t3953*t5102 + t3936*t5150 + t3747*t5483 + t3858*t5510)*var2[15] + (-0.03195*t4537 + t3995*t5102 + t3983*t5150 + t3973*t5599 + t3912*t5623 - 0.37414*(t376*t3995 + t6576))*var2[16] + (-0.03195*t4543 + t3983*t5687 + t4014*t5704 - 0.37414*(-1.*t376*t4014 + t6576))*var2[17];
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

#include "dT_RightShin_mex.hh"

namespace SymExpression
{

void dT_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
