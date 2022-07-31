/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:00 GMT-04:00
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
  double t15;
  double t974;
  double t1007;
  double t1152;
  double t1275;
  double t1617;
  double t1879;
  double t1691;
  double t1892;
  double t288;
  double t321;
  double t479;
  double t739;
  double t1694;
  double t1895;
  double t1904;
  double t3036;
  double t3368;
  double t3389;
  double t256;
  double t4203;
  double t4312;
  double t4326;
  double t737;
  double t841;
  double t855;
  double t1161;
  double t1366;
  double t1393;
  double t2807;
  double t2997;
  double t3032;
  double t3467;
  double t3604;
  double t3783;
  double t6524;
  double t7078;
  double t7092;
  double t7389;
  double t7409;
  double t7602;
  double t7776;
  double t7829;
  double t7830;
  double t9416;
  double t9417;
  double t9427;
  t15 = Cos(var1[3]);
  t974 = Cos(var1[13]);
  t1007 = -1.*t974;
  t1152 = 1. + t1007;
  t1275 = Sin(var1[13]);
  t1617 = Cos(var1[5]);
  t1879 = Sin(var1[3]);
  t1691 = Sin(var1[4]);
  t1892 = Sin(var1[5]);
  t288 = Cos(var1[14]);
  t321 = -1.*t288;
  t479 = 1. + t321;
  t739 = Sin(var1[14]);
  t1694 = t15*t1617*t1691;
  t1895 = t1879*t1892;
  t1904 = t1694 + t1895;
  t3036 = -1.*t1617*t1879;
  t3368 = t15*t1691*t1892;
  t3389 = t3036 + t3368;
  t256 = Cos(var1[4]);
  t4203 = t1275*t1904;
  t4312 = t974*t3389;
  t4326 = t4203 + t4312;
  t737 = -0.08055*t479;
  t841 = -0.135*t739;
  t855 = 0. + t737 + t841;
  t1161 = 0.07996*t1152;
  t1366 = 0.135*t1275;
  t1393 = 0. + t1161 + t1366;
  t2807 = -0.135*t1152;
  t2997 = 0.07996*t1275;
  t3032 = 0. + t2807 + t2997;
  t3467 = -0.135*t479;
  t3604 = 0.08055*t739;
  t3783 = 0. + t3467 + t3604;
  t6524 = t1617*t1879*t1691;
  t7078 = -1.*t15*t1892;
  t7092 = t6524 + t7078;
  t7389 = t15*t1617;
  t7409 = t1879*t1691*t1892;
  t7602 = t7389 + t7409;
  t7776 = t1275*t7092;
  t7829 = t974*t7602;
  t7830 = t7776 + t7829;
  t9416 = t256*t1617*t1275;
  t9417 = t974*t256*t1892;
  t9427 = t9416 + t9417;
  p_output1[0]=0. + t1393*t1904 + t3032*t3389 + t3783*t4326 - 0.135*(t288*t4326 - 1.*t15*t256*t739) - 0.08055*(t15*t256*t288 + t4326*t739) + t15*t256*t855 - 0.01004*(-1.*t1275*t3389 + t1904*t974) + var1[0];
  p_output1[1]=0. + t1393*t7092 + t3032*t7602 + t3783*t7830 - 0.135*(-1.*t1879*t256*t739 + t288*t7830) - 0.08055*(t1879*t256*t288 + t739*t7830) + t1879*t256*t855 - 0.01004*(-1.*t1275*t7602 + t7092*t974) + var1[1];
  p_output1[2]=0. + t1393*t1617*t256 + t1892*t256*t3032 - 1.*t1691*t855 + t3783*t9427 - 0.135*(t1691*t739 + t288*t9427) - 0.08055*(-1.*t1691*t288 + t739*t9427) - 0.01004*(-1.*t1275*t1892*t256 + t1617*t256*t974) + var1[2];
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

#include "p_RightRotationJoint_mex.hh"

namespace SymExpression
{

void p_RightRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
