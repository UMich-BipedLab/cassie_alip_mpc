/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:58 GMT-04:00
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
  double t398;
  double t1121;
  double t1159;
  double t1184;
  double t1236;
  double t1467;
  double t1745;
  double t1652;
  double t1945;
  double t784;
  double t817;
  double t865;
  double t918;
  double t1732;
  double t1986;
  double t2085;
  double t2325;
  double t2396;
  double t2408;
  double t729;
  double t2728;
  double t2745;
  double t2766;
  double t2825;
  double t2826;
  double t2917;
  double t3067;
  double t3154;
  double t3155;
  double t3156;
  double t3577;
  double t3604;
  double t3641;
  double t3665;
  double t3680;
  double t3684;
  double t3752;
  double t3821;
  double t3848;
  double t3952;
  double t4252;
  double t4376;
  double t4464;
  double t4562;
  double t4643;
  double t4668;
  double t4684;
  double t4754;
  double t4771;
  double t4784;
  double t4901;
  double t4949;
  double t4990;
  double t5041;
  double t5189;
  double t5214;
  double t5326;
  double t5544;
  double t5563;
  double t5630;
  double t5757;
  double t5762;
  double t5828;
  double t916;
  double t931;
  double t961;
  double t1218;
  double t1333;
  double t1442;
  double t2117;
  double t2169;
  double t2201;
  double t2560;
  double t2581;
  double t2612;
  double t6381;
  double t6414;
  double t6489;
  double t6499;
  double t6501;
  double t6507;
  double t3043;
  double t3082;
  double t3123;
  double t6590;
  double t6659;
  double t6660;
  double t3517;
  double t3547;
  double t3550;
  double t3692;
  double t3768;
  double t3818;
  double t6729;
  double t6731;
  double t6745;
  double t6955;
  double t6957;
  double t7006;
  double t4166;
  double t4171;
  double t4207;
  double t4681;
  double t4732;
  double t4736;
  double t7035;
  double t7054;
  double t7056;
  double t7078;
  double t7085;
  double t7113;
  double t4795;
  double t4839;
  double t4887;
  double t5254;
  double t5407;
  double t5495;
  double t7200;
  double t7252;
  double t7263;
  double t7276;
  double t7298;
  double t7300;
  double t5654;
  double t5732;
  double t5734;
  double t7339;
  double t7341;
  double t7373;
  double t7383;
  double t7388;
  double t7390;
  double t7546;
  double t7557;
  double t7585;
  double t7618;
  double t7631;
  double t7639;
  double t7682;
  double t7696;
  double t7706;
  double t7720;
  double t7734;
  double t7736;
  double t7756;
  double t7759;
  double t7762;
  double t7768;
  double t7782;
  double t7809;
  double t7833;
  double t7834;
  double t7839;
  double t7856;
  double t7860;
  double t7861;
  double t7873;
  double t7881;
  double t7895;
  t398 = Cos(var1[3]);
  t1121 = Cos(var1[13]);
  t1159 = -1.*t1121;
  t1184 = 1. + t1159;
  t1236 = Sin(var1[13]);
  t1467 = Cos(var1[5]);
  t1745 = Sin(var1[3]);
  t1652 = Sin(var1[4]);
  t1945 = Sin(var1[5]);
  t784 = Cos(var1[14]);
  t817 = -1.*t784;
  t865 = 1. + t817;
  t918 = Sin(var1[14]);
  t1732 = t398*t1467*t1652;
  t1986 = t1745*t1945;
  t2085 = t1732 + t1986;
  t2325 = -1.*t1467*t1745;
  t2396 = t398*t1652*t1945;
  t2408 = t2325 + t2396;
  t729 = Cos(var1[4]);
  t2728 = t1236*t2085;
  t2745 = t1121*t2408;
  t2766 = t2728 + t2745;
  t2825 = Cos(var1[15]);
  t2826 = -1.*t2825;
  t2917 = 1. + t2826;
  t3067 = Sin(var1[15]);
  t3154 = t1121*t2085;
  t3155 = -1.*t1236*t2408;
  t3156 = t3154 + t3155;
  t3577 = t784*t398*t729;
  t3604 = t918*t2766;
  t3641 = t3577 + t3604;
  t3665 = Cos(var1[16]);
  t3680 = -1.*t3665;
  t3684 = 1. + t3680;
  t3752 = Sin(var1[16]);
  t3821 = t3067*t3156;
  t3848 = t2825*t3641;
  t3952 = t3821 + t3848;
  t4252 = t2825*t3156;
  t4376 = -1.*t3067*t3641;
  t4464 = t4252 + t4376;
  t4562 = Cos(var1[17]);
  t4643 = -1.*t4562;
  t4668 = 1. + t4643;
  t4684 = Sin(var1[17]);
  t4754 = -1.*t3752*t3952;
  t4771 = t3665*t4464;
  t4784 = t4754 + t4771;
  t4901 = t3665*t3952;
  t4949 = t3752*t4464;
  t4990 = t4901 + t4949;
  t5041 = Cos(var1[18]);
  t5189 = -1.*t5041;
  t5214 = 1. + t5189;
  t5326 = Sin(var1[18]);
  t5544 = t4684*t4784;
  t5563 = t4562*t4990;
  t5630 = t5544 + t5563;
  t5757 = t4562*t4784;
  t5762 = -1.*t4684*t4990;
  t5828 = t5757 + t5762;
  t916 = -0.08055*t865;
  t931 = -0.135*t918;
  t961 = 0. + t916 + t931;
  t1218 = 0.07996*t1184;
  t1333 = 0.135*t1236;
  t1442 = 0. + t1218 + t1333;
  t2117 = -0.135*t1184;
  t2169 = 0.07996*t1236;
  t2201 = 0. + t2117 + t2169;
  t2560 = -0.135*t865;
  t2581 = 0.08055*t918;
  t2612 = 0. + t2560 + t2581;
  t6381 = t1467*t1745*t1652;
  t6414 = -1.*t398*t1945;
  t6489 = t6381 + t6414;
  t6499 = t398*t1467;
  t6501 = t1745*t1652*t1945;
  t6507 = t6499 + t6501;
  t3043 = -0.01004*t2917;
  t3082 = 0.08055*t3067;
  t3123 = 0. + t3043 + t3082;
  t6590 = t1236*t6489;
  t6659 = t1121*t6507;
  t6660 = t6590 + t6659;
  t3517 = -0.08055*t2917;
  t3547 = -0.01004*t3067;
  t3550 = 0. + t3517 + t3547;
  t3692 = -0.08055*t3684;
  t3768 = -0.13004*t3752;
  t3818 = 0. + t3692 + t3768;
  t6729 = t1121*t6489;
  t6731 = -1.*t1236*t6507;
  t6745 = t6729 + t6731;
  t6955 = t784*t729*t1745;
  t6957 = t918*t6660;
  t7006 = t6955 + t6957;
  t4166 = -0.13004*t3684;
  t4171 = 0.08055*t3752;
  t4207 = 0. + t4166 + t4171;
  t4681 = -0.19074*t4668;
  t4732 = 0.03315*t4684;
  t4736 = 0. + t4681 + t4732;
  t7035 = t3067*t6745;
  t7054 = t2825*t7006;
  t7056 = t7035 + t7054;
  t7078 = t2825*t6745;
  t7085 = -1.*t3067*t7006;
  t7113 = t7078 + t7085;
  t4795 = -0.03315*t4668;
  t4839 = -0.19074*t4684;
  t4887 = 0. + t4795 + t4839;
  t5254 = -0.01315*t5214;
  t5407 = -0.62554*t5326;
  t5495 = 0. + t5254 + t5407;
  t7200 = -1.*t3752*t7056;
  t7252 = t3665*t7113;
  t7263 = t7200 + t7252;
  t7276 = t3665*t7056;
  t7298 = t3752*t7113;
  t7300 = t7276 + t7298;
  t5654 = -0.62554*t5214;
  t5732 = 0.01315*t5326;
  t5734 = 0. + t5654 + t5732;
  t7339 = t4684*t7263;
  t7341 = t4562*t7300;
  t7373 = t7339 + t7341;
  t7383 = t4562*t7263;
  t7388 = -1.*t4684*t7300;
  t7390 = t7383 + t7388;
  t7546 = t729*t1467*t1236;
  t7557 = t1121*t729*t1945;
  t7585 = t7546 + t7557;
  t7618 = t1121*t729*t1467;
  t7631 = -1.*t729*t1236*t1945;
  t7639 = t7618 + t7631;
  t7682 = -1.*t784*t1652;
  t7696 = t918*t7585;
  t7706 = t7682 + t7696;
  t7720 = t3067*t7639;
  t7734 = t2825*t7706;
  t7736 = t7720 + t7734;
  t7756 = t2825*t7639;
  t7759 = -1.*t3067*t7706;
  t7762 = t7756 + t7759;
  t7768 = -1.*t3752*t7736;
  t7782 = t3665*t7762;
  t7809 = t7768 + t7782;
  t7833 = t3665*t7736;
  t7834 = t3752*t7762;
  t7839 = t7833 + t7834;
  t7856 = t4684*t7809;
  t7860 = t4562*t7839;
  t7861 = t7856 + t7860;
  t7873 = t4562*t7809;
  t7881 = -1.*t4684*t7839;
  t7895 = t7873 + t7881;
  p_output1[0]=0. + t1442*t2085 + t2201*t2408 + t2612*t2766 + t3123*t3156 + t3550*t3641 + t3818*t3952 + t4207*t4464 + t4736*t4784 + t4887*t4990 + t5495*t5630 + t5734*t5828 - 0.73604*(-1.*t5326*t5630 + t5041*t5828) - 0.04375*(t5041*t5630 + t5326*t5828) - 0.1318*(t2766*t784 - 1.*t398*t729*t918) + t398*t729*t961 + var1[0];
  p_output1[1]=0. + t1442*t6489 + t2201*t6507 + t2612*t6660 + t3123*t6745 + t3550*t7006 + t3818*t7056 + t4207*t7113 + t4736*t7263 + t4887*t7300 + t5495*t7373 + t5734*t7390 - 0.73604*(-1.*t5326*t7373 + t5041*t7390) - 0.04375*(t5041*t7373 + t5326*t7390) - 0.1318*(t6660*t784 - 1.*t1745*t729*t918) + t1745*t729*t961 + var1[1];
  p_output1[2]=0. + t1442*t1467*t729 + t1945*t2201*t729 + t2612*t7585 + t3123*t7639 + t3550*t7706 + t3818*t7736 + t4207*t7762 + t4736*t7809 + t4887*t7839 + t5495*t7861 + t5734*t7895 - 0.73604*(-1.*t5326*t7861 + t5041*t7895) - 0.04375*(t5041*t7861 + t5326*t7895) - 0.1318*(t7585*t784 + t1652*t918) - 1.*t1652*t961 + var1[2];
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

#include "p_RightTarsus_mex.hh"

namespace SymExpression
{

void p_RightTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
