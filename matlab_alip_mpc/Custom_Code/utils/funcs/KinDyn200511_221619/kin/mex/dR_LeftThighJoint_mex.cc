/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:12 GMT-04:00
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
  double t2401;
  double t1441;
  double t2454;
  double t1509;
  double t2646;
  double t3210;
  double t279;
  double t389;
  double t2084;
  double t2790;
  double t2815;
  double t2979;
  double t3072;
  double t3073;
  double t3111;
  double t3197;
  double t3204;
  double t3205;
  double t3221;
  double t3307;
  double t3314;
  double t3381;
  double t3434;
  double t3442;
  double t3444;
  double t3449;
  double t3386;
  double t3393;
  double t3654;
  double t3655;
  double t3659;
  double t3628;
  double t3633;
  double t3634;
  double t3819;
  double t3842;
  double t3846;
  double t3862;
  double t3865;
  double t3881;
  double t3885;
  double t3897;
  double t3898;
  double t3677;
  double t3944;
  double t3982;
  double t3947;
  double t3972;
  double t3363;
  double t3370;
  double t3379;
  double t4248;
  double t4275;
  double t4287;
  double t4418;
  double t4427;
  double t4437;
  double t4454;
  double t4470;
  double t4481;
  double t4485;
  double t4486;
  double t4542;
  double t3209;
  double t3246;
  double t3284;
  double t3558;
  double t3575;
  double t3576;
  double t3578;
  double t3585;
  double t3587;
  double t3526;
  double t3527;
  double t3541;
  double t3475;
  double t3480;
  double t3446;
  double t3460;
  double t3493;
  double t3503;
  double t3672;
  double t3691;
  double t3730;
  double t3738;
  double t3755;
  double t3636;
  double t3661;
  double t3666;
  double t3912;
  double t3914;
  double t3918;
  double t4143;
  double t4145;
  double t4149;
  double t4151;
  double t4156;
  double t4159;
  double t4114;
  double t4115;
  double t4129;
  double t4024;
  double t4034;
  double t3997;
  double t4078;
  double t4095;
  double t3380;
  double t3398;
  double t3407;
  double t3923;
  double t3926;
  double t3932;
  double t4292;
  double t4309;
  double t4334;
  double t5003;
  double t5004;
  double t5007;
  double t4586;
  double t4589;
  double t4593;
  double t4594;
  double t4625;
  double t4628;
  double t4563;
  double t4571;
  double t4580;
  double t4357;
  double t4362;
  double t4369;
  t2401 = Cos(var1[3]);
  t1441 = Cos(var1[5]);
  t2454 = Sin(var1[4]);
  t1509 = Sin(var1[3]);
  t2646 = Sin(var1[5]);
  t3210 = Cos(var1[4]);
  t279 = Cos(var1[7]);
  t389 = Cos(var1[6]);
  t2084 = -1.*t1441*t1509;
  t2790 = t2401*t2454*t2646;
  t2815 = t2084 + t2790;
  t2979 = t389*t2815;
  t3072 = t2401*t1441*t2454;
  t3073 = t1509*t2646;
  t3111 = t3072 + t3073;
  t3197 = Sin(var1[6]);
  t3204 = t3111*t3197;
  t3205 = t2979 + t3204;
  t3221 = Sin(var1[7]);
  t3307 = Sin(var1[8]);
  t3314 = Cos(var1[8]);
  t3381 = t389*t3111;
  t3434 = t1441*t1509;
  t3442 = -1.*t2401*t2454*t2646;
  t3444 = t3434 + t3442;
  t3449 = -1.*t3111*t3197;
  t3386 = -1.*t2815*t3197;
  t3393 = t3381 + t3386;
  t3654 = -1.*t2401*t1441;
  t3655 = -1.*t1509*t2454*t2646;
  t3659 = t3654 + t3655;
  t3628 = -1.*t1441*t1509*t2454;
  t3633 = t2401*t2646;
  t3634 = t3628 + t3633;
  t3819 = t2401*t1441;
  t3842 = t1509*t2454*t2646;
  t3846 = t3819 + t3842;
  t3862 = t389*t3846;
  t3865 = t1441*t1509*t2454;
  t3881 = -1.*t2401*t2646;
  t3885 = t3865 + t3881;
  t3897 = t3885*t3197;
  t3898 = t3862 + t3897;
  t3677 = t389*t3659;
  t3944 = t389*t3885;
  t3982 = -1.*t3885*t3197;
  t3947 = -1.*t3846*t3197;
  t3972 = t3944 + t3947;
  t3363 = t2401*t3210*t279;
  t3370 = t3205*t3221;
  t3379 = t3363 + t3370;
  t4248 = t3210*t389*t2646;
  t4275 = t3210*t1441*t3197;
  t4287 = t4248 + t4275;
  t4418 = t3210*t1441*t389;
  t4427 = -1.*t3210*t2646*t3197;
  t4437 = t4418 + t4427;
  t4454 = -1.*t3210*t389*t2646;
  t4470 = -1.*t3210*t1441*t3197;
  t4481 = t4454 + t4470;
  t4485 = -1.*t3314*t4481;
  t4486 = t4437*t3221*t3307;
  t4542 = t4485 + t4486;
  t3209 = t279*t3205;
  t3246 = -1.*t2401*t3210*t3221;
  t3284 = t3209 + t3246;
  t3558 = -1.*t2401*t279*t2454;
  t3575 = t2401*t3210*t389*t2646;
  t3576 = t2401*t3210*t1441*t3197;
  t3578 = t3575 + t3576;
  t3585 = t3578*t3221;
  t3587 = t3558 + t3585;
  t3526 = t2401*t3210*t1441*t389;
  t3527 = -1.*t2401*t3210*t2646*t3197;
  t3541 = t3526 + t3527;
  t3475 = t3444*t3197;
  t3480 = t3381 + t3475;
  t3446 = t389*t3444;
  t3460 = t3446 + t3449;
  t3493 = -1.*t389*t2815;
  t3503 = t3493 + t3449;
  t3672 = -1.*t3210*t279*t1509;
  t3691 = t3634*t3197;
  t3730 = t3677 + t3691;
  t3738 = t3730*t3221;
  t3755 = t3672 + t3738;
  t3636 = t389*t3634;
  t3661 = -1.*t3659*t3197;
  t3666 = t3636 + t3661;
  t3912 = t279*t3898;
  t3914 = -1.*t3210*t1509*t3221;
  t3918 = t3912 + t3914;
  t4143 = -1.*t279*t1509*t2454;
  t4145 = t3210*t389*t1509*t2646;
  t4149 = t3210*t1441*t1509*t3197;
  t4151 = t4145 + t4149;
  t4156 = t4151*t3221;
  t4159 = t4143 + t4156;
  t4114 = t3210*t1441*t389*t1509;
  t4115 = -1.*t3210*t1509*t2646*t3197;
  t4129 = t4114 + t4115;
  t4024 = t3659*t3197;
  t4034 = t3944 + t4024;
  t3997 = t3677 + t3982;
  t4078 = -1.*t389*t3846;
  t4095 = t4078 + t3982;
  t3380 = t3314*t3379;
  t3398 = t3393*t3307;
  t3407 = t3380 + t3398;
  t3923 = t3210*t279*t1509;
  t3926 = t3898*t3221;
  t3932 = t3923 + t3926;
  t4292 = t279*t4287;
  t4309 = t2454*t3221;
  t4334 = t4292 + t4309;
  t5003 = t3314*t4437*t3221;
  t5004 = t4481*t3307;
  t5007 = t5003 + t5004;
  t4586 = -1.*t3210*t279;
  t4589 = -1.*t389*t2454*t2646;
  t4593 = -1.*t1441*t2454*t3197;
  t4594 = t4589 + t4593;
  t4625 = t4594*t3221;
  t4628 = t4586 + t4625;
  t4563 = -1.*t1441*t389*t2454;
  t4571 = t2454*t2646*t3197;
  t4580 = t4563 + t4571;
  t4357 = -1.*t279*t2454;
  t4362 = t4287*t3221;
  t4369 = t4357 + t4362;
  p_output1[0]=(-1.*t3314*t3666 + t3307*t3755)*var2[3] + (-1.*t3314*t3541 + t3307*t3587)*var2[4] + (-1.*t3314*t3460 + t3221*t3307*t3480)*var2[5] + (t3221*t3307*t3393 - 1.*t3314*t3503)*var2[6] + t3284*t3307*var2[7] + t3407*var2[8];
  p_output1[1]=(t3307*t3379 - 1.*t3314*t3393)*var2[3] + (-1.*t3314*t4129 + t3307*t4159)*var2[4] + (-1.*t3314*t3997 + t3221*t3307*t4034)*var2[5] + (t3221*t3307*t3972 - 1.*t3314*t4095)*var2[6] + t3307*t3918*var2[7] + (t3314*t3932 + t3307*t3972)*var2[8];
  p_output1[2]=(-1.*t3314*t4580 + t3307*t4628)*var2[4] + t4542*var2[5] + t4542*var2[6] + t3307*t4334*var2[7] + (t3314*t4369 + t3307*t4437)*var2[8];
  p_output1[3]=(t3307*t3666 + t3314*t3755)*var2[3] + (t3307*t3541 + t3314*t3587)*var2[4] + (t3307*t3460 + t3221*t3314*t3480)*var2[5] + (t3221*t3314*t3393 + t3307*t3503)*var2[6] + t3284*t3314*var2[7] + (-1.*t3307*t3379 + t3314*t3393)*var2[8];
  p_output1[4]=t3407*var2[3] + (t3307*t4129 + t3314*t4159)*var2[4] + (t3307*t3997 + t3221*t3314*t4034)*var2[5] + (t3221*t3314*t3972 + t3307*t4095)*var2[6] + t3314*t3918*var2[7] + (-1.*t3307*t3932 + t3314*t3972)*var2[8];
  p_output1[5]=(t3307*t4580 + t3314*t4628)*var2[4] + t5007*var2[5] + t5007*var2[6] + t3314*t4334*var2[7] + (-1.*t3307*t4369 + t3314*t4437)*var2[8];
  p_output1[6]=(-1.*t279*t3730 + t3914)*var2[3] + (-1.*t2401*t2454*t3221 - 1.*t279*t3578)*var2[4] - 1.*t279*t3480*var2[5] - 1.*t279*t3393*var2[6] + t3379*var2[7];
  p_output1[7]=(-1.*t279*t3205 + t2401*t3210*t3221)*var2[3] + (-1.*t1509*t2454*t3221 - 1.*t279*t4151)*var2[4] - 1.*t279*t4034*var2[5] - 1.*t279*t3972*var2[6] + t3932*var2[7];
  p_output1[8]=(-1.*t3210*t3221 - 1.*t279*t4594)*var2[4] - 1.*t279*t4437*var2[5] - 1.*t279*t4437*var2[6] + t4369*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_LeftThighJoint_mex.hh"

namespace SymExpression
{

void dR_LeftThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
