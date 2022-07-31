/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:59 GMT-04:00
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
  double t41;
  double t553;
  double t556;
  double t569;
  double t587;
  double t666;
  double t725;
  double t683;
  double t758;
  double t223;
  double t277;
  double t300;
  double t339;
  double t717;
  double t775;
  double t779;
  double t849;
  double t852;
  double t872;
  double t190;
  double t950;
  double t974;
  double t978;
  double t1034;
  double t1043;
  double t1044;
  double t1080;
  double t1132;
  double t1145;
  double t1150;
  double t1367;
  double t1371;
  double t1381;
  double t1386;
  double t1400;
  double t1403;
  double t1515;
  double t1531;
  double t1613;
  double t1614;
  double t1694;
  double t1714;
  double t1726;
  double t1809;
  double t1816;
  double t1817;
  double t1834;
  double t1851;
  double t1864;
  double t1865;
  double t1891;
  double t1906;
  double t1907;
  double t1944;
  double t1948;
  double t2007;
  double t2061;
  double t2111;
  double t2113;
  double t2117;
  double t2184;
  double t2222;
  double t2226;
  double t2259;
  double t2269;
  double t2277;
  double t2297;
  double t2318;
  double t2351;
  double t2374;
  double t2469;
  double t2492;
  double t2539;
  double t312;
  double t405;
  double t429;
  double t574;
  double t602;
  double t620;
  double t813;
  double t815;
  double t822;
  double t909;
  double t924;
  double t933;
  double t2760;
  double t2775;
  double t2834;
  double t2918;
  double t2930;
  double t2931;
  double t1065;
  double t1120;
  double t1128;
  double t2943;
  double t2956;
  double t3025;
  double t1323;
  double t1339;
  double t1358;
  double t1462;
  double t1521;
  double t1526;
  double t3052;
  double t3059;
  double t3068;
  double t3125;
  double t3139;
  double t3176;
  double t1622;
  double t1639;
  double t1662;
  double t1826;
  double t1846;
  double t1848;
  double t3198;
  double t3202;
  double t3217;
  double t3252;
  double t3289;
  double t3291;
  double t1882;
  double t1883;
  double t1886;
  double t2042;
  double t2089;
  double t2090;
  double t3311;
  double t3334;
  double t3343;
  double t3360;
  double t3370;
  double t3372;
  double t2125;
  double t2133;
  double t2159;
  double t2278;
  double t2299;
  double t2316;
  double t3374;
  double t3400;
  double t3410;
  double t3419;
  double t3421;
  double t3443;
  double t2395;
  double t2421;
  double t2448;
  double t3469;
  double t3470;
  double t3473;
  double t3490;
  double t3494;
  double t3495;
  double t3661;
  double t3673;
  double t3678;
  double t3706;
  double t3708;
  double t3715;
  double t3800;
  double t3809;
  double t3824;
  double t3826;
  double t3827;
  double t3830;
  double t3894;
  double t3903;
  double t3904;
  double t3929;
  double t3931;
  double t3937;
  double t3953;
  double t3955;
  double t3994;
  double t4041;
  double t4049;
  double t4063;
  double t4068;
  double t4072;
  double t4076;
  double t4087;
  double t4089;
  double t4093;
  double t4152;
  double t4165;
  double t4179;
  t41 = Cos(var1[3]);
  t553 = Cos(var1[13]);
  t556 = -1.*t553;
  t569 = 1. + t556;
  t587 = Sin(var1[13]);
  t666 = Cos(var1[5]);
  t725 = Sin(var1[3]);
  t683 = Sin(var1[4]);
  t758 = Sin(var1[5]);
  t223 = Cos(var1[14]);
  t277 = -1.*t223;
  t300 = 1. + t277;
  t339 = Sin(var1[14]);
  t717 = t41*t666*t683;
  t775 = t725*t758;
  t779 = t717 + t775;
  t849 = -1.*t666*t725;
  t852 = t41*t683*t758;
  t872 = t849 + t852;
  t190 = Cos(var1[4]);
  t950 = t587*t779;
  t974 = t553*t872;
  t978 = t950 + t974;
  t1034 = Cos(var1[15]);
  t1043 = -1.*t1034;
  t1044 = 1. + t1043;
  t1080 = Sin(var1[15]);
  t1132 = t553*t779;
  t1145 = -1.*t587*t872;
  t1150 = t1132 + t1145;
  t1367 = t223*t41*t190;
  t1371 = t339*t978;
  t1381 = t1367 + t1371;
  t1386 = Cos(var1[16]);
  t1400 = -1.*t1386;
  t1403 = 1. + t1400;
  t1515 = Sin(var1[16]);
  t1531 = t1080*t1150;
  t1613 = t1034*t1381;
  t1614 = t1531 + t1613;
  t1694 = t1034*t1150;
  t1714 = -1.*t1080*t1381;
  t1726 = t1694 + t1714;
  t1809 = Cos(var1[17]);
  t1816 = -1.*t1809;
  t1817 = 1. + t1816;
  t1834 = Sin(var1[17]);
  t1851 = -1.*t1515*t1614;
  t1864 = t1386*t1726;
  t1865 = t1851 + t1864;
  t1891 = t1386*t1614;
  t1906 = t1515*t1726;
  t1907 = t1891 + t1906;
  t1944 = Cos(var1[18]);
  t1948 = -1.*t1944;
  t2007 = 1. + t1948;
  t2061 = Sin(var1[18]);
  t2111 = t1834*t1865;
  t2113 = t1809*t1907;
  t2117 = t2111 + t2113;
  t2184 = t1809*t1865;
  t2222 = -1.*t1834*t1907;
  t2226 = t2184 + t2222;
  t2259 = Cos(var1[19]);
  t2269 = -1.*t2259;
  t2277 = 1. + t2269;
  t2297 = Sin(var1[19]);
  t2318 = -1.*t2061*t2117;
  t2351 = t1944*t2226;
  t2374 = t2318 + t2351;
  t2469 = t1944*t2117;
  t2492 = t2061*t2226;
  t2539 = t2469 + t2492;
  t312 = -0.08055*t300;
  t405 = -0.135*t339;
  t429 = 0. + t312 + t405;
  t574 = 0.07996*t569;
  t602 = 0.135*t587;
  t620 = 0. + t574 + t602;
  t813 = -0.135*t569;
  t815 = 0.07996*t587;
  t822 = 0. + t813 + t815;
  t909 = -0.135*t300;
  t924 = 0.08055*t339;
  t933 = 0. + t909 + t924;
  t2760 = t666*t725*t683;
  t2775 = -1.*t41*t758;
  t2834 = t2760 + t2775;
  t2918 = t41*t666;
  t2930 = t725*t683*t758;
  t2931 = t2918 + t2930;
  t1065 = -0.01004*t1044;
  t1120 = 0.08055*t1080;
  t1128 = 0. + t1065 + t1120;
  t2943 = t587*t2834;
  t2956 = t553*t2931;
  t3025 = t2943 + t2956;
  t1323 = -0.08055*t1044;
  t1339 = -0.01004*t1080;
  t1358 = 0. + t1323 + t1339;
  t1462 = -0.08055*t1403;
  t1521 = -0.13004*t1515;
  t1526 = 0. + t1462 + t1521;
  t3052 = t553*t2834;
  t3059 = -1.*t587*t2931;
  t3068 = t3052 + t3059;
  t3125 = t223*t190*t725;
  t3139 = t339*t3025;
  t3176 = t3125 + t3139;
  t1622 = -0.13004*t1403;
  t1639 = 0.08055*t1515;
  t1662 = 0. + t1622 + t1639;
  t1826 = -0.19074*t1817;
  t1846 = 0.03315*t1834;
  t1848 = 0. + t1826 + t1846;
  t3198 = t1080*t3068;
  t3202 = t1034*t3176;
  t3217 = t3198 + t3202;
  t3252 = t1034*t3068;
  t3289 = -1.*t1080*t3176;
  t3291 = t3252 + t3289;
  t1882 = -0.03315*t1817;
  t1883 = -0.19074*t1834;
  t1886 = 0. + t1882 + t1883;
  t2042 = -0.01315*t2007;
  t2089 = -0.62554*t2061;
  t2090 = 0. + t2042 + t2089;
  t3311 = -1.*t1515*t3217;
  t3334 = t1386*t3291;
  t3343 = t3311 + t3334;
  t3360 = t1386*t3217;
  t3370 = t1515*t3291;
  t3372 = t3360 + t3370;
  t2125 = -0.62554*t2007;
  t2133 = 0.01315*t2061;
  t2159 = 0. + t2125 + t2133;
  t2278 = -1.03354*t2277;
  t2299 = 0.05315*t2297;
  t2316 = 0. + t2278 + t2299;
  t3374 = t1834*t3343;
  t3400 = t1809*t3372;
  t3410 = t3374 + t3400;
  t3419 = t1809*t3343;
  t3421 = -1.*t1834*t3372;
  t3443 = t3419 + t3421;
  t2395 = -0.05315*t2277;
  t2421 = -1.03354*t2297;
  t2448 = 0. + t2395 + t2421;
  t3469 = -1.*t2061*t3410;
  t3470 = t1944*t3443;
  t3473 = t3469 + t3470;
  t3490 = t1944*t3410;
  t3494 = t2061*t3443;
  t3495 = t3490 + t3494;
  t3661 = t190*t666*t587;
  t3673 = t553*t190*t758;
  t3678 = t3661 + t3673;
  t3706 = t553*t190*t666;
  t3708 = -1.*t190*t587*t758;
  t3715 = t3706 + t3708;
  t3800 = -1.*t223*t683;
  t3809 = t339*t3678;
  t3824 = t3800 + t3809;
  t3826 = t1080*t3715;
  t3827 = t1034*t3824;
  t3830 = t3826 + t3827;
  t3894 = t1034*t3715;
  t3903 = -1.*t1080*t3824;
  t3904 = t3894 + t3903;
  t3929 = -1.*t1515*t3830;
  t3931 = t1386*t3904;
  t3937 = t3929 + t3931;
  t3953 = t1386*t3830;
  t3955 = t1515*t3904;
  t3994 = t3953 + t3955;
  t4041 = t1834*t3937;
  t4049 = t1809*t3994;
  t4063 = t4041 + t4049;
  t4068 = t1809*t3937;
  t4072 = -1.*t1834*t3994;
  t4076 = t4068 + t4072;
  t4087 = -1.*t2061*t4063;
  t4089 = t1944*t4076;
  t4093 = t4087 + t4089;
  t4152 = t1944*t4063;
  t4165 = t2061*t4076;
  t4179 = t4152 + t4165;
  p_output1[0]=0. + t1128*t1150 + t1358*t1381 + t1526*t1614 + t1662*t1726 + t1848*t1865 + t1886*t1907 + t2090*t2117 + t2159*t2226 + t2316*t2374 + t2448*t2539 + 0.046027*(t2297*t2374 + t2259*t2539) - 0.979698*(t2259*t2374 - 1.*t2297*t2539) + t190*t41*t429 + t620*t779 + t822*t872 + t933*t978 - 0.1305*(-1.*t190*t339*t41 + t223*t978) + var1[0];
  p_output1[1]=0. + t1128*t3068 + t1358*t3176 + t1526*t3217 + t1662*t3291 + t1848*t3343 + t1886*t3372 + t2090*t3410 + t2159*t3443 + t2316*t3473 + t2448*t3495 + 0.046027*(t2297*t3473 + t2259*t3495) - 0.979698*(t2259*t3473 - 1.*t2297*t3495) + t2834*t620 + t190*t429*t725 - 0.1305*(t223*t3025 - 1.*t190*t339*t725) + t2931*t822 + t3025*t933 + var1[1];
  p_output1[2]=0. + t1128*t3715 + t1358*t3824 + t1526*t3830 + t1662*t3904 + t1848*t3937 + t1886*t3994 + t2090*t4063 + t2159*t4076 + t2316*t4093 + t2448*t4179 + 0.046027*(t2297*t4093 + t2259*t4179) - 0.979698*(t2259*t4093 - 1.*t2297*t4179) + t190*t620*t666 - 1.*t429*t683 - 0.1305*(t223*t3678 + t339*t683) + t190*t758*t822 + t3678*t933 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_RightToeBottomFront_mex.hh"

namespace SymExpression
{

void p_RightToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
