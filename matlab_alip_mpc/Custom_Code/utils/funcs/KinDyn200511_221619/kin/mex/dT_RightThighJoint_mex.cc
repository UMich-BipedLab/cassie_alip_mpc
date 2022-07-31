/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:31 GMT-04:00
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
  double t744;
  double t835;
  double t966;
  double t1055;
  double t734;
  double t1071;
  double t296;
  double t1568;
  double t2036;
  double t1668;
  double t1439;
  double t1988;
  double t2038;
  double t2068;
  double t2077;
  double t2101;
  double t2121;
  double t1522;
  double t2070;
  double t2386;
  double t2388;
  double t2392;
  double t2208;
  double t2496;
  double t2498;
  double t2360;
  double t2406;
  double t2411;
  double t2681;
  double t2683;
  double t2694;
  double t2744;
  double t2748;
  double t2761;
  double t2818;
  double t3003;
  double t3006;
  double t3017;
  double t3024;
  double t3098;
  double t3106;
  double t3119;
  double t3037;
  double t2568;
  double t2604;
  double t2611;
  double t3213;
  double t3214;
  double t3090;
  double t3126;
  double t3156;
  double t3433;
  double t3454;
  double t3462;
  double t3477;
  double t3481;
  double t3497;
  double t3508;
  double t3513;
  double t3516;
  double t3369;
  double t3377;
  double t3384;
  double t1008;
  double t1157;
  double t1231;
  double t1627;
  double t1681;
  double t1705;
  double t1768;
  double t1828;
  double t1924;
  double t2122;
  double t2124;
  double t2244;
  double t2283;
  double t2354;
  double t2428;
  double t2430;
  double t2481;
  double t2488;
  double t2730;
  double t2763;
  double t2777;
  double t2788;
  double t2811;
  double t2842;
  double t2873;
  double t2874;
  double t2920;
  double t2928;
  double t2933;
  double t2971;
  double t2974;
  double t2983;
  double t2984;
  double t2988;
  double t2991;
  double t3030;
  double t3043;
  double t3044;
  double t3077;
  double t3184;
  double t3186;
  double t3194;
  double t3195;
  double t2560;
  double t2612;
  double t2626;
  double t3293;
  double t3301;
  double t3312;
  double t3356;
  double t3407;
  double t3418;
  double t4186;
  double t4188;
  double t4194;
  double t3549;
  double t3560;
  double t3571;
  double t3644;
  double t3657;
  double t3664;
  double t3741;
  double t3743;
  double t3776;
  double t3780;
  double t3785;
  double t3786;
  double t4463;
  double t4470;
  double t4492;
  double t4497;
  double t4611;
  double t4635;
  double t3813;
  double t3820;
  double t3822;
  double t4553;
  double t4558;
  double t4567;
  double t4471;
  double t4473;
  double t4476;
  double t4638;
  double t4644;
  double t4645;
  double t4583;
  double t4598;
  double t4601;
  double t4690;
  double t4691;
  double t4699;
  double t3855;
  double t3856;
  double t3866;
  double t4538;
  double t3915;
  double t3935;
  double t3985;
  double t4014;
  double t4021;
  double t4022;
  double t4515;
  double t4540;
  double t4046;
  double t4047;
  double t4048;
  double t4068;
  double t4069;
  double t4074;
  double t4086;
  double t4089;
  double t4091;
  double t4806;
  double t4808;
  double t4829;
  double t4853;
  double t4882;
  double t4973;
  double t4976;
  double t4980;
  double t4981;
  double t4985;
  double t4101;
  double t4104;
  double t4122;
  double t5085;
  double t5086;
  double t5089;
  double t5090;
  double t5095;
  double t4150;
  double t4154;
  double t4155;
  double t5686;
  double t5690;
  double t5694;
  double t5700;
  double t5708;
  double t5717;
  double t5725;
  double t5732;
  double t5737;
  double t4217;
  double t4218;
  double t4221;
  double t4226;
  double t4227;
  double t4244;
  t744 = Cos(var1[3]);
  t835 = Cos(var1[4]);
  t966 = Cos(var1[5]);
  t1055 = Sin(var1[13]);
  t734 = Cos(var1[13]);
  t1071 = Sin(var1[5]);
  t296 = Cos(var1[15]);
  t1568 = Sin(var1[4]);
  t2036 = Sin(var1[3]);
  t1668 = Sin(var1[14]);
  t1439 = Sin(var1[15]);
  t1988 = t744*t966*t1568;
  t2038 = t2036*t1071;
  t2068 = t1988 + t2038;
  t2077 = t966*t2036;
  t2101 = -1.*t744*t1568*t1071;
  t2121 = t2077 + t2101;
  t1522 = Cos(var1[14]);
  t2070 = -1.*t1055*t2068;
  t2386 = -1.*t966*t2036;
  t2388 = t744*t1568*t1071;
  t2392 = t2386 + t2388;
  t2208 = t734*t2068;
  t2496 = -1.*t1055*t2392;
  t2498 = t2208 + t2496;
  t2360 = t1055*t2068;
  t2406 = t734*t2392;
  t2411 = t2360 + t2406;
  t2681 = -1.*t966*t2036*t1568;
  t2683 = t744*t1071;
  t2694 = t2681 + t2683;
  t2744 = -1.*t744*t966;
  t2748 = -1.*t2036*t1568*t1071;
  t2761 = t2744 + t2748;
  t2818 = t734*t2761;
  t3003 = t966*t2036*t1568;
  t3006 = -1.*t744*t1071;
  t3017 = t3003 + t3006;
  t3024 = -1.*t1055*t3017;
  t3098 = t744*t966;
  t3106 = t2036*t1568*t1071;
  t3119 = t3098 + t3106;
  t3037 = t734*t3017;
  t2568 = t1522*t744*t835;
  t2604 = t1668*t2411;
  t2611 = t2568 + t2604;
  t3213 = -1.*t1055*t3119;
  t3214 = t3037 + t3213;
  t3090 = t1055*t3017;
  t3126 = t734*t3119;
  t3156 = t3090 + t3126;
  t3433 = -1.*t835*t966*t1055;
  t3454 = -1.*t734*t835*t1071;
  t3462 = t3433 + t3454;
  t3477 = -1.*t296*t3462;
  t3481 = t734*t835*t966;
  t3497 = -1.*t835*t1055*t1071;
  t3508 = t3481 + t3497;
  t3513 = t1668*t1439*t3508;
  t3516 = t3477 + t3513;
  t3369 = t835*t966*t1055;
  t3377 = t734*t835*t1071;
  t3384 = t3369 + t3377;
  t1008 = t734*t744*t835*t966;
  t1157 = -1.*t744*t835*t1055*t1071;
  t1231 = t1008 + t1157;
  t1627 = -1.*t1522*t744*t1568;
  t1681 = t744*t835*t966*t1055;
  t1705 = t734*t744*t835*t1071;
  t1768 = t1681 + t1705;
  t1828 = t1668*t1768;
  t1924 = t1627 + t1828;
  t2122 = t734*t2121;
  t2124 = t2070 + t2122;
  t2244 = t1055*t2121;
  t2283 = t2208 + t2244;
  t2354 = -1.*t744*t835*t1668;
  t2428 = t1522*t2411;
  t2430 = t2354 + t2428;
  t2481 = -1.*t734*t2392;
  t2488 = t2070 + t2481;
  t2730 = t734*t2694;
  t2763 = -1.*t1055*t2761;
  t2777 = t2730 + t2763;
  t2788 = -1.*t1522*t835*t2036;
  t2811 = t1055*t2694;
  t2842 = t2811 + t2818;
  t2873 = t1668*t2842;
  t2874 = t2788 + t2873;
  t2920 = t734*t835*t966*t2036;
  t2928 = -1.*t835*t1055*t2036*t1071;
  t2933 = t2920 + t2928;
  t2971 = -1.*t1522*t2036*t1568;
  t2974 = t835*t966*t1055*t2036;
  t2983 = t734*t835*t2036*t1071;
  t2984 = t2974 + t2983;
  t2988 = t1668*t2984;
  t2991 = t2971 + t2988;
  t3030 = t3024 + t2818;
  t3043 = t1055*t2761;
  t3044 = t3037 + t3043;
  t3077 = -1.*t835*t1668*t2036;
  t3184 = t1522*t3156;
  t3186 = t3077 + t3184;
  t3194 = -1.*t734*t3119;
  t3195 = t3024 + t3194;
  t2560 = t1439*t2498;
  t2612 = t296*t2611;
  t2626 = t2560 + t2612;
  t3293 = t1522*t835*t2036;
  t3301 = t1668*t3156;
  t3312 = t3293 + t3301;
  t3356 = t1668*t1568;
  t3407 = t1522*t3384;
  t3418 = t3356 + t3407;
  t4186 = t1439*t3462;
  t4188 = t296*t1668*t3508;
  t4194 = t4186 + t4188;
  t3549 = -1.*t1522*t1568;
  t3560 = t1668*t3384;
  t3571 = t3549 + t3560;
  t3644 = -1.*t734*t966*t1568;
  t3657 = t1055*t1568*t1071;
  t3664 = t3644 + t3657;
  t3741 = -1.*t1522*t835;
  t3743 = -1.*t966*t1055*t1568;
  t3776 = -1.*t734*t1568*t1071;
  t3780 = t3743 + t3776;
  t3785 = t1668*t3780;
  t3786 = t3741 + t3785;
  t4463 = -1.*t734;
  t4470 = 1. + t4463;
  t4492 = -1.*t1522;
  t4497 = 1. + t4492;
  t4611 = -1.*t296;
  t4635 = 1. + t4611;
  t3813 = t1439*t1231;
  t3820 = t296*t1924;
  t3822 = t3813 + t3820;
  t4553 = -0.135*t4470;
  t4558 = 0.07996*t1055;
  t4567 = 0. + t4553 + t4558;
  t4471 = 0.07996*t4470;
  t4473 = 0.135*t1055;
  t4476 = 0. + t4471 + t4473;
  t4638 = -0.01004*t4635;
  t4644 = 0.08055*t1439;
  t4645 = 0. + t4638 + t4644;
  t4583 = -0.135*t4497;
  t4598 = 0.08055*t1668;
  t4601 = 0. + t4583 + t4598;
  t4690 = -0.08055*t4635;
  t4691 = -0.01004*t1439;
  t4699 = 0. + t4690 + t4691;
  t3855 = t1439*t2124;
  t3856 = t296*t1668*t2283;
  t3866 = t3855 + t3856;
  t4538 = -0.135*t1668;
  t3915 = t1439*t2488;
  t3935 = t296*t1668*t2498;
  t3985 = t3915 + t3935;
  t4014 = t296*t2498;
  t4021 = -1.*t1439*t2611;
  t4022 = t4014 + t4021;
  t4515 = -0.08055*t4497;
  t4540 = 0. + t4515 + t4538;
  t4046 = t1439*t2777;
  t4047 = t296*t2874;
  t4048 = t4046 + t4047;
  t4068 = t1439*t2933;
  t4069 = t296*t2991;
  t4074 = t4068 + t4069;
  t4086 = t1439*t3030;
  t4089 = t296*t1668*t3044;
  t4091 = t4086 + t4089;
  t4806 = -0.135*t1522;
  t4808 = -0.08055*t1668;
  t4829 = t4806 + t4808;
  t4853 = 0.08055*t1522;
  t4882 = t4853 + t4538;
  t4973 = 0.135*t734;
  t4976 = t4973 + t4558;
  t4980 = 0.07996*t734;
  t4981 = -0.135*t1055;
  t4985 = t4980 + t4981;
  t4101 = t1439*t3195;
  t4104 = t296*t1668*t3214;
  t4122 = t4101 + t4104;
  t5085 = 0.08055*t296;
  t5086 = t5085 + t4691;
  t5089 = -0.01004*t296;
  t5090 = -0.08055*t1439;
  t5095 = t5089 + t5090;
  t4150 = t296*t3214;
  t4154 = -1.*t1439*t3312;
  t4155 = t4150 + t4154;
  t5686 = t4645*t3462;
  t5690 = -0.135*t1522*t3508;
  t5694 = t4601*t3508;
  t5700 = t1668*t4699*t3508;
  t5708 = -0.08055*t4194;
  t5717 = t296*t3462;
  t5725 = -1.*t1668*t1439*t3508;
  t5732 = t5717 + t5725;
  t5737 = -0.01004*t5732;
  t4217 = t296*t3508;
  t4218 = -1.*t1439*t3571;
  t4221 = t4217 + t4218;
  t4226 = t1439*t3664;
  t4227 = t296*t3786;
  t4244 = t4226 + t4227;
  p_output1[0]=(t1439*t2874 - 1.*t2777*t296)*var2[3] + (t1439*t1924 - 1.*t1231*t296)*var2[4] + (t1439*t1668*t2283 - 1.*t2124*t296)*var2[5] + (t1439*t1668*t2498 - 1.*t2488*t296)*var2[13] + t1439*t2430*var2[14] + t2626*var2[15];
  p_output1[1]=(t1439*t2611 - 1.*t2498*t296)*var2[3] + (-1.*t2933*t296 + t1439*t2991)*var2[4] + (-1.*t296*t3030 + t1439*t1668*t3044)*var2[5] + (-1.*t296*t3195 + t1439*t1668*t3214)*var2[13] + t1439*t3186*var2[14] + (t1439*t3214 + t296*t3312)*var2[15];
  p_output1[2]=(-1.*t296*t3664 + t1439*t3786)*var2[4] + t3516*var2[5] + t3516*var2[13] + t1439*t3418*var2[14] + (t1439*t3508 + t296*t3571)*var2[15];
  p_output1[3]=0;
  p_output1[4]=t4048*var2[3] + t3822*var2[4] + t3866*var2[5] + t3985*var2[13] + t2430*t296*var2[14] + t4022*var2[15];
  p_output1[5]=t2626*var2[3] + t4074*var2[4] + t4091*var2[5] + t4122*var2[13] + t296*t3186*var2[14] + t4155*var2[15];
  p_output1[6]=t4244*var2[4] + t4194*var2[5] + t4194*var2[13] + t296*t3418*var2[14] + t4221*var2[15];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1522*t2842 + t3077)*var2[3] + (-1.*t1522*t1768 - 1.*t1568*t1668*t744)*var2[4] - 1.*t1522*t2283*var2[5] - 1.*t1522*t2498*var2[13] + t2611*var2[14];
  p_output1[9]=(-1.*t1522*t2411 + t1668*t744*t835)*var2[3] + (-1.*t1568*t1668*t2036 - 1.*t1522*t2984)*var2[4] - 1.*t1522*t3044*var2[5] - 1.*t1522*t3214*var2[13] + t3312*var2[14];
  p_output1[10]=(-1.*t1522*t3780 - 1.*t1668*t835)*var2[4] - 1.*t1522*t3508*var2[5] - 1.*t1522*t3508*var2[13] + t3571*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.01004*(-1.*t1439*t2874 + t2777*t296) - 0.08055*t4048 + t2694*t4476 + t2761*t4567 + t2842*t4601 + t2777*t4645 + t2874*t4699 - 1.*t2036*t4540*t835 - 0.135*(t1522*t2842 + t1668*t2036*t835))*var2[3] + (-0.01004*(-1.*t1439*t1924 + t1231*t296) - 0.08055*t3822 + t1768*t4601 + t1231*t4645 + t1924*t4699 - 1.*t1568*t4540*t744 - 0.135*(t1522*t1768 + t1568*t1668*t744) + t1071*t4567*t744*t835 + t4476*t744*t835*t966)*var2[4] + (-0.135*t1522*t2283 - 0.01004*(-1.*t1439*t1668*t2283 + t2124*t296) - 0.08055*t3866 + t2121*t4476 + t2068*t4567 + t2283*t4601 + t2124*t4645 + t1668*t2283*t4699)*var2[5] + (-0.135*t1522*t2498 - 0.01004*(-1.*t1439*t1668*t2498 + t2488*t296) - 0.08055*t3985 + t2498*t4601 + t2488*t4645 + t1668*t2498*t4699 + t2068*t4976 + t2392*t4985)*var2[13] + (0.01004*t1439*t2430 - 0.08055*t2430*t296 + t2430*t4699 + t2411*t4882 + t4829*t744*t835 - 0.135*(-1.*t1668*t2411 - 1.*t1522*t744*t835))*var2[14] + (-0.01004*(-1.*t1439*t2498 - 1.*t2611*t296) - 0.08055*t4022 + t2498*t5086 + t2611*t5095)*var2[15];
  p_output1[13]=var2[1] + (-0.135*t2430 - 0.08055*t2626 - 0.01004*t4022 + t2068*t4476 + t2392*t4567 + t2411*t4601 + t2498*t4645 + t2611*t4699 + t4540*t744*t835)*var2[3] + (-0.135*(t1568*t1668*t2036 + t1522*t2984) - 0.01004*(t2933*t296 - 1.*t1439*t2991) - 0.08055*t4074 - 1.*t1568*t2036*t4540 + t2984*t4601 + t2933*t4645 + t2991*t4699 + t1071*t2036*t4567*t835 + t2036*t4476*t835*t966)*var2[4] + (-0.135*t1522*t3044 - 0.01004*(t296*t3030 - 1.*t1439*t1668*t3044) - 0.08055*t4091 + t2761*t4476 + t3017*t4567 + t3044*t4601 + t3030*t4645 + t1668*t3044*t4699)*var2[5] + (-0.135*t1522*t3214 - 0.01004*(t296*t3195 - 1.*t1439*t1668*t3214) - 0.08055*t4122 + t3214*t4601 + t3195*t4645 + t1668*t3214*t4699 + t3017*t4976 + t3119*t4985)*var2[13] + (-0.135*(t2788 - 1.*t1668*t3156) + 0.01004*t1439*t3186 - 0.08055*t296*t3186 + t3186*t4699 + t3156*t4882 + t2036*t4829*t835)*var2[14] + (-0.01004*(-1.*t1439*t3214 - 1.*t296*t3312) - 0.08055*t4155 + t3214*t5086 + t3312*t5095)*var2[15];
  p_output1[14]=var2[2] + (-0.01004*(t296*t3664 - 1.*t1439*t3786) - 0.08055*t4244 - 1.*t1071*t1568*t4567 + t3780*t4601 + t3664*t4645 + t3786*t4699 - 1.*t4540*t835 - 0.135*(t1522*t3780 + t1668*t835) - 1.*t1568*t4476*t966)*var2[4] + (t5686 + t5690 + t5694 + t5700 + t5708 + t5737 - 1.*t1071*t4476*t835 + t4567*t835*t966)*var2[5] + (t5686 + t5690 + t5694 + t5700 + t5708 + t5737 + t1071*t4985*t835 + t4976*t835*t966)*var2[13] + (-0.135*(t1522*t1568 - 1.*t1668*t3384) + 0.01004*t1439*t3418 - 0.08055*t296*t3418 + t3418*t4699 - 1.*t1568*t4829 + t3384*t4882)*var2[14] + (-0.01004*(-1.*t1439*t3508 - 1.*t296*t3571) - 0.08055*t4221 + t3508*t5086 + t3571*t5095)*var2[15];
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

#include "dT_RightThighJoint_mex.hh"

namespace SymExpression
{

void dT_RightThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
