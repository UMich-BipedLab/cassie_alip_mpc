/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:39 GMT-04:00
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
  double t66;
  double t379;
  double t1670;
  double t2502;
  double t2550;
  double t2759;
  double t3340;
  double t852;
  double t1836;
  double t1839;
  double t3454;
  double t5083;
  double t5089;
  double t5105;
  double t5188;
  double t5192;
  double t5528;
  double t5631;
  double t4214;
  double t4261;
  double t6135;
  double t6198;
  double t6242;
  double t5635;
  double t6012;
  double t6128;
  double t6628;
  double t6638;
  double t6593;
  double t6615;
  double t6650;
  double t6658;
  double t6692;
  double t6790;
  double t6792;
  double t6648;
  double t6668;
  double t6673;
  double t719;
  double t826;
  double t2519;
  double t3807;
  double t3821;
  double t4100;
  double t4244;
  double t4282;
  double t4359;
  double t4472;
  double t4478;
  double t4625;
  double t4710;
  double t4788;
  double t5136;
  double t5181;
  double t5296;
  double t6131;
  double t6255;
  double t6302;
  double t6308;
  double t6322;
  double t6364;
  double t6464;
  double t6470;
  double t6476;
  double t6477;
  double t6558;
  double t6574;
  double t6616;
  double t6640;
  double t6645;
  double t6676;
  double t6798;
  double t6836;
  double t6837;
  double t6841;
  double t6885;
  double t6942;
  double t6943;
  double t6946;
  double t6948;
  double t6950;
  double t6963;
  t66 = Sin(var1[14]);
  t379 = 0. + t66;
  t1670 = Cos(var1[14]);
  t2502 = Cos(var1[5]);
  t2550 = Sin(var1[13]);
  t2759 = -1.*t1670*t2550;
  t3340 = 0. + t2759;
  t852 = Cos(var1[13]);
  t1836 = -1.*t852*t1670;
  t1839 = 0. + t1836;
  t3454 = Sin(var1[5]);
  t5083 = Cos(var1[15]);
  t5089 = t1670*t5083;
  t5105 = 0. + t5089;
  t5188 = Sin(var1[15]);
  t5192 = 0. + t5188;
  t5528 = t5083*t66;
  t5631 = 0. + t5528;
  t4214 = Sin(var1[4]);
  t4261 = Cos(var1[4]);
  t6135 = t2550*t5631;
  t6198 = t852*t5192;
  t6242 = 0. + t6135 + t6198;
  t5635 = t852*t5631;
  t6012 = -1.*t2550*t5192;
  t6128 = 0. + t5635 + t6012;
  t6628 = t1670*t5188;
  t6638 = 0. + t6628;
  t6593 = -1.*t5083;
  t6615 = 0. + t6593;
  t6650 = t66*t5188;
  t6658 = 0. + t6650;
  t6692 = t852*t6615;
  t6790 = t2550*t6658;
  t6792 = 0. + t6692 + t6790;
  t6648 = -1.*t6615*t2550;
  t6668 = t852*t6658;
  t6673 = 0. + t6648 + t6668;
  t719 = var2[13]*t379;
  t826 = var2[5]*t379;
  t2519 = t1839*t2502;
  t3807 = -1.*t3340*t3454;
  t3821 = 0. + t2519 + t3807;
  t4100 = var2[4]*t3821;
  t4244 = -1.*t379*t4214;
  t4282 = t2502*t3340;
  t4359 = t1839*t3454;
  t4472 = 0. + t4282 + t4359;
  t4478 = t4261*t4472;
  t4625 = 0. + t4244 + t4478;
  t4710 = var2[3]*t4625;
  t4788 = 0. + var2[15] + t719 + t826 + t4100 + t4710;
  t5136 = var2[13]*t5105;
  t5181 = var2[5]*t5105;
  t5296 = var2[14]*t5192;
  t6131 = t2502*t6128;
  t6255 = -1.*t6242*t3454;
  t6302 = 0. + t6131 + t6255;
  t6308 = var2[4]*t6302;
  t6322 = -1.*t5105*t4214;
  t6364 = t2502*t6242;
  t6464 = t6128*t3454;
  t6470 = 0. + t6364 + t6464;
  t6476 = t4261*t6470;
  t6477 = 0. + t6322 + t6476;
  t6558 = var2[3]*t6477;
  t6574 = 0. + t5136 + t5181 + t5296 + t6308 + t6558;
  t6616 = var2[14]*t6615;
  t6640 = var2[13]*t6638;
  t6645 = var2[5]*t6638;
  t6676 = t2502*t6673;
  t6798 = -1.*t6792*t3454;
  t6836 = 0. + t6676 + t6798;
  t6837 = var2[4]*t6836;
  t6841 = -1.*t6638*t4214;
  t6885 = t2502*t6792;
  t6942 = t6673*t3454;
  t6943 = 0. + t6885 + t6942;
  t6946 = t4261*t6943;
  t6948 = 0. + t6841 + t6946;
  t6950 = var2[3]*t6948;
  t6963 = 0. + t6616 + t6640 + t6645 + t6837 + t6950;
  p_output1[0]=0.0117*t4788 + 0.000284*t6574 + 0.018*t6963;
  p_output1[1]=0.000019*t4788 + 0.0563*t6574 + 0.000284*t6963;
  p_output1[2]=0.0498*t4788 + 0.000019*t6574 + 0.0117*t6963;
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

#include "AMBody_RightThigh_mex.hh"

namespace SymExpression
{

void AMBody_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
