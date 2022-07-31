/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:08 GMT-04:00
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
  double t255;
  double t277;
  double t523;
  double t942;
  double t991;
  double t217;
  double t636;
  double t793;
  double t851;
  double t188;
  double t867;
  double t871;
  double t877;
  double t1687;
  double t1522;
  double t1544;
  double t1688;
  double t1847;
  double t1634;
  double t1777;
  double t1786;
  double t1466;
  double t1859;
  double t1888;
  double t1901;
  double t2204;
  double t1806;
  double t2047;
  double t2075;
  double t1441;
  double t2220;
  double t2258;
  double t2299;
  double t1344;
  double t2347;
  double t2359;
  double t2360;
  double t2104;
  double t2312;
  double t2318;
  double t2361;
  double t2483;
  double t2655;
  double t2715;
  double t2788;
  double t2921;
  double t2321;
  double t2366;
  double t2406;
  double t3181;
  double t3228;
  double t1252;
  double t1012;
  double t3178;
  double t3325;
  double t3345;
  double t3691;
  double t3700;
  double t3734;
  double t4229;
  double t4352;
  double t4367;
  double t4160;
  double t4486;
  double t4514;
  double t4842;
  double t5004;
  double t5346;
  double t5385;
  double t5496;
  double t4835;
  double t5162;
  double t5318;
  double t5682;
  double t5733;
  double t5789;
  double t5810;
  double t5908;
  double t5341;
  double t5545;
  double t5596;
  double t6223;
  double t6317;
  double t6114;
  double t6320;
  double t6333;
  double t6430;
  double t6461;
  double t6471;
  double t2427;
  double t2982;
  double t3096;
  double t3378;
  double t3759;
  double t3880;
  double t3890;
  double t3894;
  double t3907;
  double t3934;
  double t3953;
  double t3967;
  double t3994;
  double t4093;
  double t4111;
  double t5610;
  double t6017;
  double t6102;
  double t6420;
  double t6702;
  double t6720;
  double t6739;
  double t6759;
  double t6775;
  double t6829;
  double t7114;
  double t7115;
  double t7264;
  double t7272;
  double t7282;
  double t828;
  double t933;
  double t936;
  double t937;
  double t993;
  double t1011;
  double t1058;
  double t1101;
  double t1180;
  double t1226;
  double t1265;
  double t1269;
  double t1279;
  double t1309;
  t255 = Cos(var1[7]);
  t277 = -1.*t255;
  t523 = 0. + t277;
  t942 = Sin(var1[7]);
  t991 = 0. + t942;
  t217 = Cos(var1[6]);
  t636 = t217*t523;
  t793 = 0. + t636;
  t851 = Sin(var1[5]);
  t188 = Cos(var1[5]);
  t867 = Sin(var1[6]);
  t871 = t523*t867;
  t877 = 0. + t871;
  t1687 = Cos(var1[11]);
  t1522 = Cos(var1[12]);
  t1544 = Sin(var1[11]);
  t1688 = Sin(var1[12]);
  t1847 = Cos(var1[10]);
  t1634 = t1522*t1544;
  t1777 = t1687*t1688;
  t1786 = 0. + t1634 + t1777;
  t1466 = Sin(var1[10]);
  t1859 = t1687*t1522;
  t1888 = -1.*t1544*t1688;
  t1901 = 0. + t1859 + t1888;
  t2204 = Cos(var1[9]);
  t1806 = -1.*t1466*t1786;
  t2047 = t1847*t1901;
  t2075 = 0. + t1806 + t2047;
  t1441 = Sin(var1[9]);
  t2220 = t1847*t1786;
  t2258 = t1466*t1901;
  t2299 = 0. + t2220 + t2258;
  t1344 = Cos(var1[8]);
  t2347 = t2204*t2075;
  t2359 = -1.*t1441*t2299;
  t2360 = 0. + t2347 + t2359;
  t2104 = t1441*t2075;
  t2312 = t2204*t2299;
  t2318 = 0. + t2104 + t2312;
  t2361 = Sin(var1[8]);
  t2483 = t1344*t2360;
  t2655 = -1.*t2318*t2361;
  t2715 = 0. + t2483 + t2655;
  t2788 = t255*t2715;
  t2921 = 0. + t2788;
  t2321 = t1344*t2318;
  t2366 = t2360*t2361;
  t2406 = 0. + t2321 + t2366;
  t3181 = t942*t2715;
  t3228 = 0. + t3181;
  t1252 = Sin(var1[4]);
  t1012 = Cos(var1[4]);
  t3178 = -1.*t867*t2406;
  t3325 = t217*t3228;
  t3345 = 0. + t3178 + t3325;
  t3691 = t217*t2406;
  t3700 = t867*t3228;
  t3734 = 0. + t3691 + t3700;
  t4229 = -1.*t1687*t1522;
  t4352 = t1544*t1688;
  t4367 = 0. + t4229 + t4352;
  t4160 = t1466*t1786;
  t4486 = t1847*t4367;
  t4514 = 0. + t4160 + t4486;
  t4842 = -1.*t1466*t4367;
  t5004 = 0. + t2220 + t4842;
  t5346 = -1.*t1441*t4514;
  t5385 = t2204*t5004;
  t5496 = 0. + t5346 + t5385;
  t4835 = t2204*t4514;
  t5162 = t1441*t5004;
  t5318 = 0. + t4835 + t5162;
  t5682 = t1344*t5496;
  t5733 = -1.*t5318*t2361;
  t5789 = 0. + t5682 + t5733;
  t5810 = t255*t5789;
  t5908 = 0. + t5810;
  t5341 = t1344*t5318;
  t5545 = t5496*t2361;
  t5596 = 0. + t5341 + t5545;
  t6223 = t942*t5789;
  t6317 = 0. + t6223;
  t6114 = -1.*t867*t5596;
  t6320 = t217*t6317;
  t6333 = 0. + t6114 + t6320;
  t6430 = t217*t5596;
  t6461 = t867*t6317;
  t6471 = 0. + t6430 + t6461;
  t2427 = var2[7]*t2406;
  t2982 = var2[5]*t2921;
  t3096 = var2[6]*t2921;
  t3378 = t188*t3345;
  t3759 = -1.*t851*t3734;
  t3880 = 0. + t3378 + t3759;
  t3890 = var2[4]*t3880;
  t3894 = -1.*t1252*t2921;
  t3907 = t851*t3345;
  t3934 = t188*t3734;
  t3953 = 0. + t3907 + t3934;
  t3967 = t1012*t3953;
  t3994 = 0. + t3894 + t3967;
  t4093 = var2[3]*t3994;
  t4111 = 0. + t2427 + t2982 + t3096 + t3890 + t4093;
  t5610 = var2[7]*t5596;
  t6017 = var2[5]*t5908;
  t6102 = var2[6]*t5908;
  t6420 = t188*t6333;
  t6702 = -1.*t851*t6471;
  t6720 = 0. + t6420 + t6702;
  t6739 = var2[4]*t6720;
  t6759 = -1.*t1252*t5908;
  t6775 = t851*t6333;
  t6829 = t188*t6471;
  t7114 = 0. + t6775 + t6829;
  t7115 = t1012*t7114;
  t7264 = 0. + t6759 + t7115;
  t7272 = var2[3]*t7264;
  t7282 = 0. + t5610 + t6017 + t6102 + t6739 + t7272;
  t828 = t188*t793;
  t933 = -1.*t851*t877;
  t936 = 0. + t828 + t933;
  t937 = var2[4]*t936;
  t993 = var2[5]*t991;
  t1011 = var2[6]*t991;
  t1058 = t793*t851;
  t1101 = t188*t877;
  t1180 = 0. + t1058 + t1101;
  t1226 = t1012*t1180;
  t1265 = -1.*t1252*t991;
  t1269 = 0. + t1226 + t1265;
  t1279 = var2[3]*t1269;
  t1309 = 0. + var2[9] + var2[10] + var2[11] + var2[12] + var2[8] + t937 + t993 + t1011 + t1279;
  p_output1[0]=-1.e-6*t1309 - 0.000099*t4111 + 0.000287*t7282;
  p_output1[1]=0. + 0.000171*t4111 - 0.000099*t7282;
  p_output1[2]=0. + 0.000449*t1309 - 1.e-6*t7282;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMBody_LeftToe_mex.hh"

namespace SymExpression
{

void AMBody_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
