/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:08 GMT-04:00
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
  double t91;
  double t110;
  double t647;
  double t1031;
  double t1099;
  double t1350;
  double t1694;
  double t599;
  double t666;
  double t670;
  double t1733;
  double t2347;
  double t3768;
  double t2322;
  double t3939;
  double t3947;
  double t3847;
  double t3888;
  double t424;
  double t443;
  double t1037;
  double t1994;
  double t2176;
  double t2314;
  double t2344;
  double t2500;
  double t2545;
  double t2581;
  double t2642;
  double t2700;
  double t3026;
  double t3456;
  double t3523;
  double t3524;
  double t3529;
  double t3534;
  double t3538;
  double t3545;
  double t3571;
  double t3581;
  double t3587;
  double t3600;
  double t3677;
  double t3686;
  t91 = Sin(var1[14]);
  t110 = 0. + t91;
  t647 = Cos(var1[14]);
  t1031 = Cos(var1[5]);
  t1099 = Sin(var1[13]);
  t1350 = -1.*t647*t1099;
  t1694 = 0. + t1350;
  t599 = Cos(var1[13]);
  t666 = -1.*t599*t647;
  t670 = 0. + t666;
  t1733 = Sin(var1[5]);
  t2347 = Cos(var1[4]);
  t3768 = 0. + t647;
  t2322 = Sin(var1[4]);
  t3939 = t1099*t91;
  t3947 = 0. + t3939;
  t3847 = t599*t91;
  t3888 = 0. + t3847;
  t424 = var2[13]*t110;
  t443 = var2[5]*t110;
  t1037 = t670*t1031;
  t1994 = -1.*t1694*t1733;
  t2176 = 0. + t1037 + t1994;
  t2314 = var2[4]*t2176;
  t2344 = -1.*t110*t2322;
  t2500 = t1031*t1694;
  t2545 = t670*t1733;
  t2581 = 0. + t2500 + t2545;
  t2642 = t2347*t2581;
  t2700 = 0. + t2344 + t2642;
  t3026 = var2[3]*t2700;
  t3456 = 0. + t424 + t443 + t2314 + t3026;
  t3523 = -1.*var2[14];
  t3524 = t1031*t1099;
  t3529 = t599*t1733;
  t3534 = 0. + t3524 + t3529;
  t3538 = var2[4]*t3534;
  t3545 = -1.*t599*t1031;
  t3571 = t1099*t1733;
  t3581 = 0. + t3545 + t3571;
  t3587 = t2347*t3581;
  t3600 = 0. + t3587;
  t3677 = var2[3]*t3600;
  t3686 = 0. + t3523 + t3538 + t3677;
  p_output1[0]=0. - 1.e-6*t3456 + 0.000842*t3686;
  p_output1[1]=0. + 0.00608*(0. + (0. - 1.*t2322*t3768 + t2347*(0. + t1733*t3888 + t1031*t3947))*var2[3] + (0. + t1031*t3888 - 1.*t1733*t3947)*var2[4] + t3768*var2[5] + t3768*var2[13]);
  p_output1[2]=0. + 0.00644*t3456 - 1.e-6*t3686;
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

#include "AMBody_RightHip_mex.hh"

namespace SymExpression
{

void AMBody_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
