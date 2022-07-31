/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:01 GMT-04:00
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
  double t1632;
  double t2613;
  double t651;
  double t2024;
  double t2666;
  double t3084;
  double t3220;
  double t3315;
  double t3449;
  double t2474;
  double t2916;
  double t3048;
  double t4172;
  double t4326;
  double t4386;
  double t5793;
  double t5902;
  double t6239;
  double t6522;
  double t5726;
  double t5749;
  double t5763;
  double t7652;
  double t3400;
  double t3698;
  double t3997;
  double t4829;
  double t5095;
  double t5170;
  double t9479;
  double t9485;
  double t9497;
  double t9505;
  double t9506;
  double t9513;
  double t6473;
  double t6909;
  double t7301;
  double t7810;
  double t7910;
  double t8585;
  double t9538;
  double t9542;
  double t9543;
  double t9587;
  double t9599;
  double t9602;
  t1632 = Cos(var1[5]);
  t2613 = Sin(var1[3]);
  t651 = Cos(var1[3]);
  t2024 = Sin(var1[4]);
  t2666 = Sin(var1[5]);
  t3084 = Cos(var1[6]);
  t3220 = -1.*t3084;
  t3315 = 1. + t3220;
  t3449 = Sin(var1[6]);
  t2474 = t651*t1632*t2024;
  t2916 = t2613*t2666;
  t3048 = t2474 + t2916;
  t4172 = -1.*t1632*t2613;
  t4326 = t651*t2024*t2666;
  t4386 = t4172 + t4326;
  t5793 = Cos(var1[7]);
  t5902 = -1.*t5793;
  t6239 = 1. + t5902;
  t6522 = Sin(var1[7]);
  t5726 = t3084*t4386;
  t5749 = t3048*t3449;
  t5763 = t5726 + t5749;
  t7652 = Cos(var1[4]);
  t3400 = 0.07996*t3315;
  t3698 = -0.135*t3449;
  t3997 = 0. + t3400 + t3698;
  t4829 = 0.135*t3315;
  t5095 = 0.07996*t3449;
  t5170 = 0. + t4829 + t5095;
  t9479 = t1632*t2613*t2024;
  t9485 = -1.*t651*t2666;
  t9497 = t9479 + t9485;
  t9505 = t651*t1632;
  t9506 = t2613*t2024*t2666;
  t9513 = t9505 + t9506;
  t6473 = 0.135*t6239;
  t6909 = 0.08055*t6522;
  t7301 = 0. + t6473 + t6909;
  t7810 = -0.08055*t6239;
  t7910 = 0.135*t6522;
  t8585 = 0. + t7810 + t7910;
  t9538 = t3084*t9513;
  t9542 = t9497*t3449;
  t9543 = t9538 + t9542;
  t9587 = t7652*t3084*t2666;
  t9599 = t7652*t1632*t3449;
  t9602 = t9587 + t9599;
  p_output1[0]=0. + t3048*t3997 + 0.04566*(t3048*t3084 - 1.*t3449*t4386) + t4386*t5170 + t5763*t7301 - 0.08055*(t5763*t6522 + t5793*t651*t7652) + 0.135*(t5763*t5793 - 1.*t651*t6522*t7652) + t651*t7652*t8585 + var1[0];
  p_output1[1]=0. + t2613*t7652*t8585 + t3997*t9497 + t5170*t9513 + 0.04566*(t3084*t9497 - 1.*t3449*t9513) + t7301*t9543 + 0.135*(-1.*t2613*t6522*t7652 + t5793*t9543) - 0.08055*(t2613*t5793*t7652 + t6522*t9543) + var1[1];
  p_output1[2]=0. + t1632*t3997*t7652 + t2666*t5170*t7652 + 0.04566*(t1632*t3084*t7652 - 1.*t2666*t3449*t7652) - 1.*t2024*t8585 + t7301*t9602 + 0.135*(t2024*t6522 + t5793*t9602) - 0.08055*(-1.*t2024*t5793 + t6522*t9602) + var1[2];
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

#include "p_LeftHip_mex.hh"

namespace SymExpression
{

void p_LeftHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
