/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:09 GMT-04:00
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
  double t521;
  double t441;
  double t562;
  double t442;
  double t630;
  double t963;
  double t261;
  double t358;
  double t504;
  double t658;
  double t687;
  double t699;
  double t706;
  double t714;
  double t767;
  double t798;
  double t844;
  double t846;
  double t1024;
  double t1188;
  double t1207;
  double t1319;
  double t1458;
  double t1462;
  double t1497;
  double t1525;
  double t1337;
  double t1381;
  double t1998;
  double t2010;
  double t2041;
  double t1913;
  double t1946;
  double t1964;
  double t2182;
  double t2199;
  double t2200;
  double t2206;
  double t2214;
  double t2218;
  double t2225;
  double t2226;
  double t2270;
  double t2088;
  double t2398;
  double t2457;
  double t2407;
  double t2411;
  double t1248;
  double t1255;
  double t1283;
  double t2906;
  double t2928;
  double t2960;
  double t3106;
  double t3112;
  double t3115;
  double t3175;
  double t3177;
  double t3191;
  double t3215;
  double t3218;
  double t3228;
  double t875;
  double t1047;
  double t1097;
  double t1802;
  double t1808;
  double t1809;
  double t1815;
  double t1829;
  double t1833;
  double t1751;
  double t1767;
  double t1782;
  double t1552;
  double t1553;
  double t1512;
  double t1533;
  double t1691;
  double t1710;
  double t2086;
  double t2104;
  double t2112;
  double t2123;
  double t2129;
  double t1996;
  double t2044;
  double t2077;
  double t2298;
  double t2327;
  double t2350;
  double t2732;
  double t2744;
  double t2779;
  double t2801;
  double t2815;
  double t2827;
  double t2681;
  double t2693;
  double t2720;
  double t2485;
  double t2504;
  double t2458;
  double t2630;
  double t2632;
  double t1302;
  double t1403;
  double t1411;
  double t2384;
  double t2385;
  double t2386;
  double t3001;
  double t3011;
  double t3030;
  double t3654;
  double t3655;
  double t3659;
  double t3288;
  double t3289;
  double t3290;
  double t3316;
  double t3347;
  double t3366;
  double t3237;
  double t3247;
  double t3279;
  double t3045;
  double t3061;
  double t3066;
  double t4385;
  double t4395;
  double t4238;
  double t4243;
  double t4248;
  double t4275;
  double t4343;
  double t3410;
  double t3423;
  double t3430;
  double t4461;
  double t4479;
  double t4484;
  double t4485;
  double t4486;
  double t4542;
  double t4557;
  double t4563;
  double t4567;
  double t3439;
  double t3442;
  double t3444;
  double t4427;
  double t4429;
  double t4436;
  double t4454;
  double t4462;
  double t4145;
  double t3386;
  double t3387;
  double t3393;
  double t4905;
  double t4907;
  double t3449;
  double t3460;
  double t3471;
  double t3480;
  double t3482;
  double t3485;
  double t4115;
  double t4129;
  double t4134;
  double t4143;
  double t4151;
  double t3541;
  double t3555;
  double t3558;
  double t4625;
  double t4628;
  double t4674;
  double t4677;
  double t4684;
  double t3576;
  double t3578;
  double t3579;
  double t3516;
  double t3522;
  double t3526;
  double t5238;
  double t5240;
  double t5250;
  double t5263;
  double t5269;
  double t3615;
  double t3617;
  double t3618;
  double t6622;
  double t6638;
  double t6642;
  double t6650;
  double t6651;
  double t6676;
  double t6686;
  double t6688;
  double t6706;
  double t3697;
  double t3723;
  double t3730;
  double t3669;
  double t3672;
  double t3677;
  t521 = Cos(var1[3]);
  t441 = Cos(var1[5]);
  t562 = Sin(var1[4]);
  t442 = Sin(var1[3]);
  t630 = Sin(var1[5]);
  t963 = Cos(var1[4]);
  t261 = Cos(var1[7]);
  t358 = Cos(var1[6]);
  t504 = -1.*t441*t442;
  t658 = t521*t562*t630;
  t687 = t504 + t658;
  t699 = t358*t687;
  t706 = t521*t441*t562;
  t714 = t442*t630;
  t767 = t706 + t714;
  t798 = Sin(var1[6]);
  t844 = t767*t798;
  t846 = t699 + t844;
  t1024 = Sin(var1[7]);
  t1188 = Sin(var1[8]);
  t1207 = Cos(var1[8]);
  t1319 = t358*t767;
  t1458 = t441*t442;
  t1462 = -1.*t521*t562*t630;
  t1497 = t1458 + t1462;
  t1525 = -1.*t767*t798;
  t1337 = -1.*t687*t798;
  t1381 = t1319 + t1337;
  t1998 = -1.*t521*t441;
  t2010 = -1.*t442*t562*t630;
  t2041 = t1998 + t2010;
  t1913 = -1.*t441*t442*t562;
  t1946 = t521*t630;
  t1964 = t1913 + t1946;
  t2182 = t521*t441;
  t2199 = t442*t562*t630;
  t2200 = t2182 + t2199;
  t2206 = t358*t2200;
  t2214 = t441*t442*t562;
  t2218 = -1.*t521*t630;
  t2225 = t2214 + t2218;
  t2226 = t2225*t798;
  t2270 = t2206 + t2226;
  t2088 = t358*t2041;
  t2398 = t358*t2225;
  t2457 = -1.*t2225*t798;
  t2407 = -1.*t2200*t798;
  t2411 = t2398 + t2407;
  t1248 = t521*t963*t261;
  t1255 = t846*t1024;
  t1283 = t1248 + t1255;
  t2906 = t963*t358*t630;
  t2928 = t963*t441*t798;
  t2960 = t2906 + t2928;
  t3106 = t963*t441*t358;
  t3112 = -1.*t963*t630*t798;
  t3115 = t3106 + t3112;
  t3175 = -1.*t963*t358*t630;
  t3177 = -1.*t963*t441*t798;
  t3191 = t3175 + t3177;
  t3215 = -1.*t1207*t3191;
  t3218 = t3115*t1024*t1188;
  t3228 = t3215 + t3218;
  t875 = t261*t846;
  t1047 = -1.*t521*t963*t1024;
  t1097 = t875 + t1047;
  t1802 = -1.*t521*t261*t562;
  t1808 = t521*t963*t358*t630;
  t1809 = t521*t963*t441*t798;
  t1815 = t1808 + t1809;
  t1829 = t1815*t1024;
  t1833 = t1802 + t1829;
  t1751 = t521*t963*t441*t358;
  t1767 = -1.*t521*t963*t630*t798;
  t1782 = t1751 + t1767;
  t1552 = t1497*t798;
  t1553 = t1319 + t1552;
  t1512 = t358*t1497;
  t1533 = t1512 + t1525;
  t1691 = -1.*t358*t687;
  t1710 = t1691 + t1525;
  t2086 = -1.*t963*t261*t442;
  t2104 = t1964*t798;
  t2112 = t2088 + t2104;
  t2123 = t2112*t1024;
  t2129 = t2086 + t2123;
  t1996 = t358*t1964;
  t2044 = -1.*t2041*t798;
  t2077 = t1996 + t2044;
  t2298 = t261*t2270;
  t2327 = -1.*t963*t442*t1024;
  t2350 = t2298 + t2327;
  t2732 = -1.*t261*t442*t562;
  t2744 = t963*t358*t442*t630;
  t2779 = t963*t441*t442*t798;
  t2801 = t2744 + t2779;
  t2815 = t2801*t1024;
  t2827 = t2732 + t2815;
  t2681 = t963*t441*t358*t442;
  t2693 = -1.*t963*t442*t630*t798;
  t2720 = t2681 + t2693;
  t2485 = t2041*t798;
  t2504 = t2398 + t2485;
  t2458 = t2088 + t2457;
  t2630 = -1.*t358*t2200;
  t2632 = t2630 + t2457;
  t1302 = t1207*t1283;
  t1403 = t1381*t1188;
  t1411 = t1302 + t1403;
  t2384 = t963*t261*t442;
  t2385 = t2270*t1024;
  t2386 = t2384 + t2385;
  t3001 = t261*t2960;
  t3011 = t562*t1024;
  t3030 = t3001 + t3011;
  t3654 = t1207*t3115*t1024;
  t3655 = t3191*t1188;
  t3659 = t3654 + t3655;
  t3288 = -1.*t963*t261;
  t3289 = -1.*t358*t562*t630;
  t3290 = -1.*t441*t562*t798;
  t3316 = t3289 + t3290;
  t3347 = t3316*t1024;
  t3366 = t3288 + t3347;
  t3237 = -1.*t441*t358*t562;
  t3247 = t562*t630*t798;
  t3279 = t3237 + t3247;
  t3045 = -1.*t261*t562;
  t3061 = t2960*t1024;
  t3066 = t3045 + t3061;
  t4385 = -1.*t358;
  t4395 = 1. + t4385;
  t4238 = -1.*t1207;
  t4243 = 1. + t4238;
  t4248 = -0.08055*t4243;
  t4275 = -0.01004*t1188;
  t4343 = 0. + t4248 + t4275;
  t3410 = t1207*t1553*t1024;
  t3423 = t1533*t1188;
  t3430 = t3410 + t3423;
  t4461 = 0.07996*t798;
  t4479 = -1.*t261;
  t4484 = 1. + t4479;
  t4485 = 0.135*t4484;
  t4486 = 0.08055*t1024;
  t4542 = 0. + t4485 + t4486;
  t4557 = -0.01004*t4243;
  t4563 = 0.08055*t1188;
  t4567 = 0. + t4557 + t4563;
  t3439 = t1207*t1381*t1024;
  t3442 = t1710*t1188;
  t3444 = t3439 + t3442;
  t4427 = 0.07996*t4395;
  t4429 = -0.135*t798;
  t4436 = 0. + t4427 + t4429;
  t4454 = 0.135*t4395;
  t4462 = 0. + t4454 + t4461;
  t4145 = 0.135*t1024;
  t3386 = t1207*t1833;
  t3387 = t1782*t1188;
  t3393 = t3386 + t3387;
  t4905 = -0.08055*t4484;
  t4907 = 0. + t4905 + t4145;
  t3449 = t1207*t2129;
  t3460 = t2077*t1188;
  t3471 = t3449 + t3460;
  t3480 = t1207*t1381;
  t3482 = -1.*t1283*t1188;
  t3485 = t3480 + t3482;
  t4115 = 0.135*t261;
  t4129 = -0.08055*t1024;
  t4134 = t4115 + t4129;
  t4143 = 0.08055*t261;
  t4151 = t4143 + t4145;
  t3541 = t1207*t2504*t1024;
  t3555 = t2458*t1188;
  t3558 = t3541 + t3555;
  t4625 = -0.135*t358;
  t4628 = t4625 + t4461;
  t4674 = 0.07996*t358;
  t4677 = 0.135*t798;
  t4684 = t4674 + t4677;
  t3576 = t1207*t2411*t1024;
  t3578 = t2632*t1188;
  t3579 = t3576 + t3578;
  t3516 = t1207*t2827;
  t3522 = t2720*t1188;
  t3526 = t3516 + t3522;
  t5238 = -0.01004*t1207;
  t5240 = -0.08055*t1188;
  t5250 = t5238 + t5240;
  t5263 = 0.08055*t1207;
  t5269 = t5263 + t4275;
  t3615 = t1207*t2411;
  t3617 = -1.*t2386*t1188;
  t3618 = t3615 + t3617;
  t6622 = 0.135*t261*t3115;
  t6638 = t3115*t4542;
  t6642 = t3115*t1024*t4343;
  t6650 = t3191*t4567;
  t6651 = -0.08055*t3659;
  t6676 = t1207*t3191;
  t6686 = -1.*t3115*t1024*t1188;
  t6688 = t6676 + t6686;
  t6706 = -0.01004*t6688;
  t3697 = t1207*t3115;
  t3723 = -1.*t3066*t1188;
  t3730 = t3697 + t3723;
  t3669 = t1207*t3366;
  t3672 = t3279*t1188;
  t3677 = t3669 + t3672;
  p_output1[0]=(-1.*t1207*t2077 + t1188*t2129)*var2[3] + (-1.*t1207*t1782 + t1188*t1833)*var2[4] + (-1.*t1207*t1533 + t1024*t1188*t1553)*var2[5] + (t1024*t1188*t1381 - 1.*t1207*t1710)*var2[6] + t1097*t1188*var2[7] + t1411*var2[8];
  p_output1[1]=(t1188*t1283 - 1.*t1207*t1381)*var2[3] + (-1.*t1207*t2720 + t1188*t2827)*var2[4] + (-1.*t1207*t2458 + t1024*t1188*t2504)*var2[5] + (t1024*t1188*t2411 - 1.*t1207*t2632)*var2[6] + t1188*t2350*var2[7] + (t1207*t2386 + t1188*t2411)*var2[8];
  p_output1[2]=(-1.*t1207*t3279 + t1188*t3366)*var2[4] + t3228*var2[5] + t3228*var2[6] + t1188*t3030*var2[7] + (t1207*t3066 + t1188*t3115)*var2[8];
  p_output1[3]=0;
  p_output1[4]=t3471*var2[3] + t3393*var2[4] + t3430*var2[5] + t3444*var2[6] + t1097*t1207*var2[7] + t3485*var2[8];
  p_output1[5]=t1411*var2[3] + t3526*var2[4] + t3558*var2[5] + t3579*var2[6] + t1207*t2350*var2[7] + t3618*var2[8];
  p_output1[6]=t3677*var2[4] + t3659*var2[5] + t3659*var2[6] + t1207*t3030*var2[7] + t3730*var2[8];
  p_output1[7]=0;
  p_output1[8]=(t2327 - 1.*t2112*t261)*var2[3] + (-1.*t1815*t261 - 1.*t1024*t521*t562)*var2[4] - 1.*t1553*t261*var2[5] - 1.*t1381*t261*var2[6] + t1283*var2[7];
  p_output1[9]=(-1.*t261*t846 + t1024*t521*t963)*var2[3] + (-1.*t261*t2801 - 1.*t1024*t442*t562)*var2[4] - 1.*t2504*t261*var2[5] - 1.*t2411*t261*var2[6] + t2386*var2[7];
  p_output1[10]=(-1.*t261*t3316 - 1.*t1024*t963)*var2[4] - 1.*t261*t3115*var2[5] - 1.*t261*t3115*var2[6] + t3066*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.01004*(t1207*t2077 - 1.*t1188*t2129) - 0.08055*t3471 + t2129*t4343 + t1964*t4436 + t2041*t4462 + t2112*t4542 + t2077*t4567 - 1.*t442*t4907*t963 + 0.135*(t2112*t261 + t1024*t442*t963))*var2[3] + (-0.01004*(t1207*t1782 - 1.*t1188*t1833) - 0.08055*t3393 + t1833*t4343 + t1815*t4542 + t1782*t4567 - 1.*t4907*t521*t562 + 0.135*(t1815*t261 + t1024*t521*t562) + t441*t4436*t521*t963 + t4462*t521*t630*t963)*var2[4] + (-0.01004*(t1207*t1533 - 1.*t1024*t1188*t1553) + 0.135*t1553*t261 - 0.08055*t3430 + t1024*t1553*t4343 + t1497*t4436 + t1553*t4542 + t1533*t4567 + t4462*t767)*var2[5] + (-0.01004*(-1.*t1024*t1188*t1381 + t1207*t1710) + 0.135*t1381*t261 - 0.08055*t3444 + t1024*t1381*t4343 + t1381*t4542 + t1710*t4567 + t4684*t687 + t4628*t767)*var2[6] + (0.01004*t1097*t1188 - 0.08055*t1097*t1207 + t1097*t4343 + t4151*t846 + t4134*t521*t963 + 0.135*(-1.*t1024*t846 - 1.*t261*t521*t963))*var2[7] + (-0.01004*(-1.*t1207*t1283 - 1.*t1188*t1381) - 0.08055*t3485 + t1283*t5250 + t1381*t5269)*var2[8];
  p_output1[13]=var2[1] + (0.135*t1097 - 0.08055*t1411 - 0.01004*t3485 + t1283*t4343 + t1381*t4567 + t4462*t687 + t4436*t767 + t4542*t846 + t4907*t521*t963)*var2[3] + (-0.01004*(t1207*t2720 - 1.*t1188*t2827) - 0.08055*t3526 + t2827*t4343 + t2801*t4542 + t2720*t4567 - 1.*t442*t4907*t562 + 0.135*(t261*t2801 + t1024*t442*t562) + t441*t442*t4436*t963 + t442*t4462*t630*t963)*var2[4] + (-0.01004*(t1207*t2458 - 1.*t1024*t1188*t2504) + 0.135*t2504*t261 - 0.08055*t3558 + t1024*t2504*t4343 + t2041*t4436 + t2225*t4462 + t2504*t4542 + t2458*t4567)*var2[5] + (0.135*t2411*t261 - 0.01004*(-1.*t1024*t1188*t2411 + t1207*t2632) - 0.08055*t3579 + t1024*t2411*t4343 + t2411*t4542 + t2632*t4567 + t2225*t4628 + t2200*t4684)*var2[6] + (0.135*(t2086 - 1.*t1024*t2270) + 0.01004*t1188*t2350 - 0.08055*t1207*t2350 + t2270*t4151 + t2350*t4343 + t4134*t442*t963)*var2[7] + (-0.01004*(-1.*t1207*t2386 - 1.*t1188*t2411) - 0.08055*t3618 + t2386*t5250 + t2411*t5269)*var2[8];
  p_output1[14]=var2[2] + (-0.01004*(t1207*t3279 - 1.*t1188*t3366) - 0.08055*t3677 + t3366*t4343 + t3316*t4542 + t3279*t4567 - 1.*t441*t4436*t562 - 1.*t4462*t562*t630 - 1.*t4907*t963 + 0.135*(t261*t3316 + t1024*t963))*var2[4] + (t6622 + t6638 + t6642 + t6650 + t6651 + t6706 + t441*t4462*t963 - 1.*t4436*t630*t963)*var2[5] + (t6622 + t6638 + t6642 + t6650 + t6651 + t6706 + t441*t4628*t963 + t4684*t630*t963)*var2[6] + (0.01004*t1188*t3030 - 0.08055*t1207*t3030 + t2960*t4151 + t3030*t4343 - 1.*t4134*t562 + 0.135*(-1.*t1024*t2960 + t261*t562))*var2[7] + (-0.01004*(-1.*t1207*t3066 - 1.*t1188*t3115) - 0.08055*t3730 + t3066*t5250 + t3115*t5269)*var2[8];
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

#include "dT_LeftThighJoint_mex.hh"

namespace SymExpression
{

void dT_LeftThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
