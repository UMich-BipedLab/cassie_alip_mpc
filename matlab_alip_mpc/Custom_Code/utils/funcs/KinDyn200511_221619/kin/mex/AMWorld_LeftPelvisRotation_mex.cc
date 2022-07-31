/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:56 GMT-04:00
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
  double t353;
  double t6944;
  double t7676;
  double t6933;
  double t7771;
  double t7035;
  double t8687;
  double t8887;
  double t337;
  double t768;
  double t9360;
  double t1236;
  double t2130;
  double t5706;
  double t6463;
  double t9009;
  double t9131;
  double t9162;
  double t9187;
  double t9221;
  double t9242;
  double t9286;
  double t9294;
  double t9299;
  double t9314;
  double t9327;
  double t9329;
  double t9331;
  double t9333;
  double t9335;
  double t9336;
  double t9370;
  double t9371;
  double t9372;
  double t9361;
  double t9362;
  double t9368;
  double t6914;
  double t9298;
  double t9348;
  double t9353;
  double t9382;
  double t9383;
  double t9384;
  double t9388;
  double t9411;
  double t9412;
  double t9413;
  double t9404;
  double t9405;
  double t9406;
  double t9396;
  double t9397;
  double t9398;
  double t9399;
  t353 = Cos(var1[4]);
  t6944 = Cos(var1[6]);
  t7676 = Sin(var1[5]);
  t6933 = Cos(var1[5]);
  t7771 = Sin(var1[6]);
  t7035 = t6933*t6944;
  t8687 = -1.*t7676*t7771;
  t8887 = 0. + t7035 + t8687;
  t337 = Cos(var1[3]);
  t768 = Sin(var1[4]);
  t9360 = Sin(var1[3]);
  t1236 = -1.*t768;
  t2130 = 0. + t1236;
  t5706 = var2[3]*t2130;
  t6463 = 0. + var2[5] + var2[6] + t5706;
  t9009 = var2[4]*t8887;
  t9131 = t6944*t7676;
  t9162 = t6933*t7771;
  t9187 = 0. + t9131 + t9162;
  t9221 = t353*t9187;
  t9242 = 0. + t9221;
  t9286 = var2[3]*t9242;
  t9294 = 0. + t9009 + t9286;
  t9299 = -1.*t6944*t7676;
  t9314 = -1.*t6933*t7771;
  t9327 = 0. + t9299 + t9314;
  t9329 = var2[4]*t9327;
  t9331 = t353*t8887;
  t9333 = 0. + t9331;
  t9335 = var2[3]*t9333;
  t9336 = 0. + t9329 + t9335;
  t9370 = t337*t6933*t768;
  t9371 = t9360*t7676;
  t9372 = t9370 + t9371;
  t9361 = -1.*t6933*t9360;
  t9362 = t337*t768*t7676;
  t9368 = t9361 + t9362;
  t6914 = 0.00272*t6463;
  t9298 = 1.e-6*t9294;
  t9348 = 2.e-6*t9336;
  t9353 = t6914 + t9298 + t9348;
  t9382 = 1.e-6*t6463;
  t9383 = 0.00559*t9294;
  t9384 = 3.e-6*t9336;
  t9388 = t9382 + t9383 + t9384;
  t9411 = t6933*t9360*t768;
  t9412 = -1.*t337*t7676;
  t9413 = t9411 + t9412;
  t9404 = t337*t6933;
  t9405 = t9360*t768*t7676;
  t9406 = t9404 + t9405;
  t9396 = 2.e-6*t6463;
  t9397 = 3.e-6*t9294;
  t9398 = 0.00464*t9336;
  t9399 = t9396 + t9397 + t9398;
  p_output1[0]=t337*t353*t9353 + (t6944*t9368 + t7771*t9372)*t9388 + (-1.*t7771*t9368 + t6944*t9372)*t9399;
  p_output1[1]=t353*t9353*t9360 + t9399*(-1.*t7771*t9406 + t6944*t9413) + t9388*(t6944*t9406 + t7771*t9413);
  p_output1[2]=-1.*t768*t9353 + (t353*t6944*t7676 + t353*t6933*t7771)*t9388 + (t353*t6933*t6944 - 1.*t353*t7676*t7771)*t9399;
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

#include "AMWorld_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void AMWorld_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
