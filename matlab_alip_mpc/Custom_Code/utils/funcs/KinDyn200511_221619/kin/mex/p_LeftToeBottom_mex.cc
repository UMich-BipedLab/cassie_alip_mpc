/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:23 GMT-04:00
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
  double t254;
  double t344;
  double t143;
  double t267;
  double t370;
  double t664;
  double t688;
  double t773;
  double t837;
  double t1123;
  double t1126;
  double t1172;
  double t340;
  double t624;
  double t654;
  double t1711;
  double t1805;
  double t1818;
  double t1886;
  double t1547;
  double t1593;
  double t1639;
  double t1925;
  double t2351;
  double t2353;
  double t2361;
  double t2396;
  double t2255;
  double t2284;
  double t2349;
  double t2513;
  double t2543;
  double t2572;
  double t2772;
  double t2775;
  double t2836;
  double t2863;
  double t2908;
  double t2910;
  double t2911;
  double t3026;
  double t3054;
  double t3066;
  double t3112;
  double t3152;
  double t3222;
  double t3242;
  double t3329;
  double t3333;
  double t3370;
  double t3534;
  double t3542;
  double t3551;
  double t3637;
  double t3655;
  double t3657;
  double t3663;
  double t3709;
  double t3746;
  double t3772;
  double t3978;
  double t3991;
  double t4018;
  double t4168;
  double t4287;
  double t4342;
  double t4472;
  double t4584;
  double t4593;
  double t4603;
  double t4711;
  double t4744;
  double t4767;
  double t819;
  double t885;
  double t927;
  double t1455;
  double t1508;
  double t1532;
  double t5407;
  double t5472;
  double t5496;
  double t5332;
  double t5338;
  double t5346;
  double t1834;
  double t1906;
  double t1909;
  double t1946;
  double t1982;
  double t2016;
  double t5558;
  double t5623;
  double t5629;
  double t2362;
  double t2421;
  double t2436;
  double t2599;
  double t2630;
  double t2649;
  double t2855;
  double t2890;
  double t2894;
  double t5795;
  double t5828;
  double t5834;
  double t5901;
  double t5902;
  double t5974;
  double t2941;
  double t2972;
  double t3015;
  double t3230;
  double t3250;
  double t3293;
  double t6010;
  double t6029;
  double t6097;
  double t6141;
  double t6228;
  double t6229;
  double t3514;
  double t3518;
  double t3526;
  double t3662;
  double t3706;
  double t3707;
  double t6303;
  double t6353;
  double t6354;
  double t6412;
  double t6423;
  double t6507;
  double t3911;
  double t3967;
  double t3976;
  double t4351;
  double t4522;
  double t4568;
  double t6679;
  double t6728;
  double t6738;
  double t6754;
  double t6758;
  double t6760;
  double t4616;
  double t4621;
  double t4691;
  double t6792;
  double t6825;
  double t6833;
  double t6845;
  double t6852;
  double t6867;
  double t7028;
  double t7082;
  double t7088;
  double t7147;
  double t7158;
  double t7165;
  double t7186;
  double t7203;
  double t7206;
  double t7226;
  double t7267;
  double t7268;
  double t7274;
  double t7349;
  double t7370;
  double t7393;
  double t7416;
  double t7429;
  double t7431;
  double t7451;
  double t7507;
  double t7547;
  double t7581;
  double t7589;
  double t7605;
  double t7640;
  double t7644;
  double t7706;
  double t7712;
  double t7714;
  double t7722;
  double t7725;
  double t7727;
  t254 = Cos(var1[5]);
  t344 = Sin(var1[3]);
  t143 = Cos(var1[3]);
  t267 = Sin(var1[4]);
  t370 = Sin(var1[5]);
  t664 = Cos(var1[6]);
  t688 = -1.*t664;
  t773 = 1. + t688;
  t837 = Sin(var1[6]);
  t1123 = -1.*t254*t344;
  t1126 = t143*t267*t370;
  t1172 = t1123 + t1126;
  t340 = t143*t254*t267;
  t624 = t344*t370;
  t654 = t340 + t624;
  t1711 = Cos(var1[7]);
  t1805 = -1.*t1711;
  t1818 = 1. + t1805;
  t1886 = Sin(var1[7]);
  t1547 = t664*t1172;
  t1593 = t654*t837;
  t1639 = t1547 + t1593;
  t1925 = Cos(var1[4]);
  t2351 = Cos(var1[8]);
  t2353 = -1.*t2351;
  t2361 = 1. + t2353;
  t2396 = Sin(var1[8]);
  t2255 = t143*t1925*t1711;
  t2284 = t1639*t1886;
  t2349 = t2255 + t2284;
  t2513 = t664*t654;
  t2543 = -1.*t1172*t837;
  t2572 = t2513 + t2543;
  t2772 = Cos(var1[9]);
  t2775 = -1.*t2772;
  t2836 = 1. + t2775;
  t2863 = Sin(var1[9]);
  t2908 = t2351*t2349;
  t2910 = t2572*t2396;
  t2911 = t2908 + t2910;
  t3026 = t2351*t2572;
  t3054 = -1.*t2349*t2396;
  t3066 = t3026 + t3054;
  t3112 = Cos(var1[10]);
  t3152 = -1.*t3112;
  t3222 = 1. + t3152;
  t3242 = Sin(var1[10]);
  t3329 = -1.*t2863*t2911;
  t3333 = t2772*t3066;
  t3370 = t3329 + t3333;
  t3534 = t2772*t2911;
  t3542 = t2863*t3066;
  t3551 = t3534 + t3542;
  t3637 = Cos(var1[11]);
  t3655 = -1.*t3637;
  t3657 = 1. + t3655;
  t3663 = Sin(var1[11]);
  t3709 = t3242*t3370;
  t3746 = t3112*t3551;
  t3772 = t3709 + t3746;
  t3978 = t3112*t3370;
  t3991 = -1.*t3242*t3551;
  t4018 = t3978 + t3991;
  t4168 = Cos(var1[12]);
  t4287 = -1.*t4168;
  t4342 = 1. + t4287;
  t4472 = Sin(var1[12]);
  t4584 = -1.*t3663*t3772;
  t4593 = t3637*t4018;
  t4603 = t4584 + t4593;
  t4711 = t3637*t3772;
  t4744 = t3663*t4018;
  t4767 = t4711 + t4744;
  t819 = 0.07996*t773;
  t885 = -0.135*t837;
  t927 = 0. + t819 + t885;
  t1455 = 0.135*t773;
  t1508 = 0.07996*t837;
  t1532 = 0. + t1455 + t1508;
  t5407 = t143*t254;
  t5472 = t344*t267*t370;
  t5496 = t5407 + t5472;
  t5332 = t254*t344*t267;
  t5338 = -1.*t143*t370;
  t5346 = t5332 + t5338;
  t1834 = 0.135*t1818;
  t1906 = 0.08055*t1886;
  t1909 = 0. + t1834 + t1906;
  t1946 = -0.08055*t1818;
  t1982 = 0.135*t1886;
  t2016 = 0. + t1946 + t1982;
  t5558 = t664*t5496;
  t5623 = t5346*t837;
  t5629 = t5558 + t5623;
  t2362 = -0.08055*t2361;
  t2421 = -0.01004*t2396;
  t2436 = 0. + t2362 + t2421;
  t2599 = -0.01004*t2361;
  t2630 = 0.08055*t2396;
  t2649 = 0. + t2599 + t2630;
  t2855 = -0.08055*t2836;
  t2890 = -0.13004*t2863;
  t2894 = 0. + t2855 + t2890;
  t5795 = t1925*t1711*t344;
  t5828 = t5629*t1886;
  t5834 = t5795 + t5828;
  t5901 = t664*t5346;
  t5902 = -1.*t5496*t837;
  t5974 = t5901 + t5902;
  t2941 = -0.13004*t2836;
  t2972 = 0.08055*t2863;
  t3015 = 0. + t2941 + t2972;
  t3230 = -0.19074*t3222;
  t3250 = 0.03315*t3242;
  t3293 = 0. + t3230 + t3250;
  t6010 = t2351*t5834;
  t6029 = t5974*t2396;
  t6097 = t6010 + t6029;
  t6141 = t2351*t5974;
  t6228 = -1.*t5834*t2396;
  t6229 = t6141 + t6228;
  t3514 = -0.03315*t3222;
  t3518 = -0.19074*t3242;
  t3526 = 0. + t3514 + t3518;
  t3662 = -0.01315*t3657;
  t3706 = -0.62554*t3663;
  t3707 = 0. + t3662 + t3706;
  t6303 = -1.*t2863*t6097;
  t6353 = t2772*t6229;
  t6354 = t6303 + t6353;
  t6412 = t2772*t6097;
  t6423 = t2863*t6229;
  t6507 = t6412 + t6423;
  t3911 = -0.62554*t3657;
  t3967 = 0.01315*t3663;
  t3976 = 0. + t3911 + t3967;
  t4351 = -1.03354*t4342;
  t4522 = 0.05315*t4472;
  t4568 = 0. + t4351 + t4522;
  t6679 = t3242*t6354;
  t6728 = t3112*t6507;
  t6738 = t6679 + t6728;
  t6754 = t3112*t6354;
  t6758 = -1.*t3242*t6507;
  t6760 = t6754 + t6758;
  t4616 = -0.05315*t4342;
  t4621 = -1.03354*t4472;
  t4691 = 0. + t4616 + t4621;
  t6792 = -1.*t3663*t6738;
  t6825 = t3637*t6760;
  t6833 = t6792 + t6825;
  t6845 = t3637*t6738;
  t6852 = t3663*t6760;
  t6867 = t6845 + t6852;
  t7028 = t1925*t664*t370;
  t7082 = t1925*t254*t837;
  t7088 = t7028 + t7082;
  t7147 = -1.*t1711*t267;
  t7158 = t7088*t1886;
  t7165 = t7147 + t7158;
  t7186 = t1925*t254*t664;
  t7203 = -1.*t1925*t370*t837;
  t7206 = t7186 + t7203;
  t7226 = t2351*t7165;
  t7267 = t7206*t2396;
  t7268 = t7226 + t7267;
  t7274 = t2351*t7206;
  t7349 = -1.*t7165*t2396;
  t7370 = t7274 + t7349;
  t7393 = -1.*t2863*t7268;
  t7416 = t2772*t7370;
  t7429 = t7393 + t7416;
  t7431 = t2772*t7268;
  t7451 = t2863*t7370;
  t7507 = t7431 + t7451;
  t7547 = t3242*t7429;
  t7581 = t3112*t7507;
  t7589 = t7547 + t7581;
  t7605 = t3112*t7429;
  t7640 = -1.*t3242*t7507;
  t7644 = t7605 + t7640;
  t7706 = -1.*t3663*t7589;
  t7712 = t3637*t7644;
  t7714 = t7706 + t7712;
  t7722 = t3637*t7589;
  t7725 = t3663*t7644;
  t7727 = t7722 + t7725;
  p_output1[0]=0. + t1172*t1532 + t1639*t1909 + 0.1305*(t1639*t1711 - 1.*t143*t1886*t1925) + t143*t1925*t2016 + t2349*t2436 + t2572*t2649 + t2894*t2911 + t3015*t3066 + t3293*t3370 + t3526*t3551 + t3707*t3772 + t3976*t4018 + t4568*t4603 + t4691*t4767 - 0.00095*(t4472*t4603 + t4168*t4767) - 1.05124*(t4168*t4603 - 1.*t4472*t4767) + t654*t927 + var1[0];
  p_output1[1]=0. + t1925*t2016*t344 + t1532*t5496 + t1909*t5629 + 0.1305*(-1.*t1886*t1925*t344 + t1711*t5629) + t2436*t5834 + t2649*t5974 + t2894*t6097 + t3015*t6229 + t3293*t6354 + t3526*t6507 + t3707*t6738 + t3976*t6760 + t4568*t6833 + t4691*t6867 - 0.00095*(t4472*t6833 + t4168*t6867) - 1.05124*(t4168*t6833 - 1.*t4472*t6867) + t5346*t927 + var1[1];
  p_output1[2]=0. - 1.*t2016*t267 + t1532*t1925*t370 + t1909*t7088 + 0.1305*(t1886*t267 + t1711*t7088) + t2436*t7165 + t2649*t7206 + t2894*t7268 + t3015*t7370 + t3293*t7429 + t3526*t7507 + t3707*t7589 + t3976*t7644 + t4568*t7714 + t4691*t7727 - 0.00095*(t4472*t7714 + t4168*t7727) - 1.05124*(t4168*t7714 - 1.*t4472*t7727) + t1925*t254*t927 + var1[2];
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

#include "p_LeftToeBottom_mex.hh"

namespace SymExpression
{

void p_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
