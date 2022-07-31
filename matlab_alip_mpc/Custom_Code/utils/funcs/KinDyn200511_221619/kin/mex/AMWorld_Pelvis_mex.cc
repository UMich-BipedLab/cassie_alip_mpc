/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:27 GMT-04:00
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
  double t2983;
  double t4040;
  double t4216;
  double t2786;
  double t3013;
  double t3485;
  double t3868;
  double t4208;
  double t4230;
  double t4250;
  double t4302;
  double t4376;
  double t4515;
  double t4675;
  double t3928;
  double t4286;
  double t4517;
  double t4615;
  double t4695;
  double t4731;
  double t4745;
  double t4750;
  double t4825;
  double t4889;
  double t4907;
  double t4932;
  t2983 = Cos(var1[4]);
  t4040 = Cos(var1[5]);
  t4216 = Sin(var1[5]);
  t2786 = Cos(var1[3]);
  t3013 = Sin(var1[4]);
  t3485 = -1.*var2[3]*t3013;
  t3868 = var2[5] + t3485;
  t4208 = var2[3]*t2983*t4040;
  t4230 = -1.*var2[4]*t4216;
  t4250 = 0. + t4208 + t4230;
  t4302 = var2[4]*t4040;
  t4376 = var2[3]*t2983*t4216;
  t4515 = 0. + t4302 + t4376;
  t4675 = Sin(var1[3]);
  t3928 = 0.0942*t3868;
  t4286 = 0.015*t4250;
  t4517 = 0.000169*t4515;
  t4615 = t3928 + t4286 + t4517;
  t4695 = 0.015*t3868;
  t4731 = 0.113*t4250;
  t4745 = 0.000516*t4515;
  t4750 = t4695 + t4731 + t4745;
  t4825 = 0.000169*t3868;
  t4889 = 0.000516*t4250;
  t4907 = 0.084*t4515;
  t4932 = t4825 + t4889 + t4907;
  p_output1[0]=t2786*t2983*t4615 + (t2786*t3013*t4040 + t4216*t4675)*t4750 + (t2786*t3013*t4216 - 1.*t4040*t4675)*t4932;
  p_output1[1]=t2983*t4615*t4675 + (-1.*t2786*t4216 + t3013*t4040*t4675)*t4750 + (t2786*t4040 + t3013*t4216*t4675)*t4932;
  p_output1[2]=-1.*t3013*t4615 + t2983*t4040*t4750 + t2983*t4216*t4932;
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

#include "AMWorld_Pelvis_mex.hh"

namespace SymExpression
{

void AMWorld_Pelvis_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
