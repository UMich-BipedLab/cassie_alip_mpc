/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:11 GMT-04:00
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
  double t135;
  double t180;
  double t714;
  double t836;
  double t1010;
  double t1218;
  double t1536;
  double t1685;
  double t1711;
  double t561;
  double t1040;
  double t1053;
  double t2012;
  double t2968;
  double t3105;
  double t2609;
  double t3117;
  double t3325;
  double t3370;
  double t3376;
  double t3426;
  double t3520;
  double t3063;
  double t3199;
  double t3225;
  double t3875;
  double t3960;
  double t2176;
  double t2240;
  double t4172;
  double t4193;
  double t4238;
  double t3629;
  double t4065;
  double t4122;
  double t4872;
  double t4886;
  double t5017;
  double t5047;
  double t5138;
  double t5235;
  double t5360;
  double t5683;
  double t5687;
  double t5867;
  double t5215;
  double t5614;
  double t5627;
  double t310;
  double t337;
  double t1219;
  double t2056;
  double t2081;
  double t2157;
  double t2235;
  double t2259;
  double t2271;
  double t2333;
  double t2352;
  double t2390;
  double t2407;
  double t2420;
  double t3271;
  double t3539;
  double t3555;
  double t4159;
  double t4242;
  double t4370;
  double t4384;
  double t4495;
  double t4553;
  double t4558;
  double t4559;
  double t4620;
  double t4624;
  double t4647;
  double t4684;
  double t4765;
  double t5152;
  double t5158;
  double t5669;
  double t5895;
  double t5973;
  double t5991;
  double t6076;
  double t6100;
  double t6102;
  double t6103;
  double t6121;
  double t6131;
  double t6141;
  double t6142;
  t135 = Sin(var1[14]);
  t180 = 0. + t135;
  t714 = Cos(var1[14]);
  t836 = -1.*t714;
  t1010 = 0. + t836;
  t1218 = Cos(var1[5]);
  t1536 = Sin(var1[13]);
  t1685 = t1010*t1536;
  t1711 = 0. + t1685;
  t561 = Cos(var1[13]);
  t1040 = t561*t1010;
  t1053 = 0. + t1040;
  t2012 = Sin(var1[5]);
  t2968 = Cos(var1[16]);
  t3105 = Sin(var1[15]);
  t2609 = Cos(var1[15]);
  t3117 = Sin(var1[16]);
  t3325 = t2968*t3105;
  t3370 = t2609*t3117;
  t3376 = 0. + t3325 + t3370;
  t3426 = t714*t3376;
  t3520 = 0. + t3426;
  t3063 = -1.*t2609*t2968;
  t3199 = t3105*t3117;
  t3225 = 0. + t3063 + t3199;
  t3875 = t135*t3376;
  t3960 = 0. + t3875;
  t2176 = Sin(var1[4]);
  t2240 = Cos(var1[4]);
  t4172 = t561*t3225;
  t4193 = t1536*t3960;
  t4238 = 0. + t4172 + t4193;
  t3629 = -1.*t1536*t3225;
  t4065 = t561*t3960;
  t4122 = 0. + t3629 + t4065;
  t4872 = t2609*t2968;
  t4886 = -1.*t3105*t3117;
  t5017 = 0. + t4872 + t4886;
  t5047 = t714*t5017;
  t5138 = 0. + t5047;
  t5235 = t135*t5017;
  t5360 = 0. + t5235;
  t5683 = t561*t3376;
  t5687 = t1536*t5360;
  t5867 = 0. + t5683 + t5687;
  t5215 = -1.*t1536*t3376;
  t5614 = t561*t5360;
  t5627 = 0. + t5215 + t5614;
  t310 = var2[13]*t180;
  t337 = var2[5]*t180;
  t1219 = t1053*t1218;
  t2056 = -1.*t1711*t2012;
  t2081 = 0. + t1219 + t2056;
  t2157 = var2[4]*t2081;
  t2235 = -1.*t180*t2176;
  t2259 = t1218*t1711;
  t2271 = t1053*t2012;
  t2333 = 0. + t2259 + t2271;
  t2352 = t2240*t2333;
  t2390 = 0. + t2235 + t2352;
  t2407 = var2[3]*t2390;
  t2420 = 0. + var2[15] + var2[16] + t310 + t337 + t2157 + t2407;
  t3271 = var2[14]*t3225;
  t3539 = var2[13]*t3520;
  t3555 = var2[5]*t3520;
  t4159 = t1218*t4122;
  t4242 = -1.*t4238*t2012;
  t4370 = 0. + t4159 + t4242;
  t4384 = var2[4]*t4370;
  t4495 = -1.*t3520*t2176;
  t4553 = t1218*t4238;
  t4558 = t4122*t2012;
  t4559 = 0. + t4553 + t4558;
  t4620 = t2240*t4559;
  t4624 = 0. + t4495 + t4620;
  t4647 = var2[3]*t4624;
  t4684 = 0. + t3271 + t3539 + t3555 + t4384 + t4647;
  t4765 = var2[14]*t3376;
  t5152 = var2[13]*t5138;
  t5158 = var2[5]*t5138;
  t5669 = t1218*t5627;
  t5895 = -1.*t5867*t2012;
  t5973 = 0. + t5669 + t5895;
  t5991 = var2[4]*t5973;
  t6076 = -1.*t5138*t2176;
  t6100 = t1218*t5867;
  t6102 = t5627*t2012;
  t6103 = 0. + t6100 + t6102;
  t6121 = t2240*t6103;
  t6131 = 0. + t6076 + t6121;
  t6141 = var2[3]*t6131;
  t6142 = 0. + t4765 + t5152 + t5158 + t5991 + t6141;
  p_output1[0]=-3.e-6*t2420 + 0.00216*t4684 + 0.000956*t6142;
  p_output1[1]=-1.e-6*t2420 + 0.000956*t4684 + 0.00144*t6142;
  p_output1[2]=0.00334*t2420 - 3.e-6*t4684 - 1.e-6*t6142;
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

#include "AMBody_RightKnee_mex.hh"

namespace SymExpression
{

void AMBody_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
