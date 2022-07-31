/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:30 GMT-04:00
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
  double t328;
  double t482;
  double t1032;
  double t1225;
  double t79;
  double t3839;
  double t596;
  double t1049;
  double t1437;
  double t1478;
  double t1714;
  double t2053;
  double t2209;
  double t3147;
  double t4552;
  double t4655;
  double t4695;
  double t4722;
  double t3723;
  double t3888;
  double t4213;
  double t4731;
  double t4803;
  double t4825;
  double t6161;
  double t6224;
  double t6227;
  double t6335;
  double t6336;
  double t6344;
  double t5283;
  double t5366;
  double t5398;
  double t6458;
  double t6535;
  double t6611;
  double t5644;
  double t5668;
  double t5669;
  t328 = Cos(var1[4]);
  t482 = Cos(var1[5]);
  t1032 = Sin(var1[4]);
  t1225 = Sin(var1[5]);
  t79 = Cos(var1[3]);
  t3839 = Sin(var1[3]);
  t596 = 0.015*t328*t482;
  t1049 = -0.0942*t1032;
  t1437 = 0.000169*t328*t1225;
  t1478 = t596 + t1049 + t1437;
  t1714 = 0.113*t328*t482;
  t2053 = -0.015*t1032;
  t2209 = 0.000516*t328*t1225;
  t3147 = t1714 + t2053 + t2209;
  t4552 = 0.000516*t328*t482;
  t4655 = -0.000169*t1032;
  t4695 = 0.084*t328*t1225;
  t4722 = t4552 + t4655 + t4695;
  t3723 = t79*t482*t1032;
  t3888 = t3839*t1225;
  t4213 = t3723 + t3888;
  t4731 = -1.*t482*t3839;
  t4803 = t79*t1032*t1225;
  t4825 = t4731 + t4803;
  t6161 = 0.000169*t482;
  t6224 = -0.015*t1225;
  t6227 = t6161 + t6224;
  t6335 = 0.000516*t482;
  t6336 = -0.113*t1225;
  t6344 = t6335 + t6336;
  t5283 = t482*t3839*t1032;
  t5366 = -1.*t79*t1225;
  t5398 = t5283 + t5366;
  t6458 = 0.084*t482;
  t6535 = -0.000516*t1225;
  t6611 = t6458 + t6535;
  t5644 = t79*t482;
  t5668 = t3839*t1032*t1225;
  t5669 = t5644 + t5668;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3147*t4213 + t4722*t4825 + t1478*t328*t79;
  p_output1[10]=t1478*t328*t3839 + t3147*t5398 + t4722*t5669;
  p_output1[11]=-1.*t1032*t1478 + t1225*t328*t4722 + t3147*t328*t482;
  p_output1[12]=t4213*t6344 + t4825*t6611 + t328*t6227*t79;
  p_output1[13]=t328*t3839*t6227 + t5398*t6344 + t5669*t6611;
  p_output1[14]=-1.*t1032*t6227 + t328*t482*t6344 + t1225*t328*t6611;
  p_output1[15]=0.015*t4213 + 0.000169*t4825 + 0.0942*t328*t79;
  p_output1[16]=0.0942*t328*t3839 + 0.015*t5398 + 0.000169*t5669;
  p_output1[17]=t1478;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMWorld_Pelvis_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_Pelvis_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
