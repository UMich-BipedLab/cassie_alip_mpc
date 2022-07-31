/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:14 GMT-04:00
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
  double t495;
  double t638;
  double t440;
  double t514;
  double t661;
  double t87;
  double t880;
  double t1421;
  double t521;
  double t706;
  double t742;
  double t900;
  double t954;
  double t983;
  double t1492;
  double t1502;
  double t1129;
  double t1143;
  double t1199;
  double t1259;
  double t1261;
  double t1276;
  double t1505;
  double t1510;
  double t1530;
  double t1639;
  double t1794;
  double t1824;
  double t1975;
  double t1978;
  double t1980;
  t495 = Cos(var1[5]);
  t638 = Sin(var1[3]);
  t440 = Cos(var1[3]);
  t514 = Sin(var1[4]);
  t661 = Sin(var1[5]);
  t87 = Cos(var1[13]);
  t880 = Sin(var1[13]);
  t1421 = Cos(var1[4]);
  t521 = t440*t495*t514;
  t706 = t638*t661;
  t742 = t521 + t706;
  t900 = -1.*t495*t638;
  t954 = t440*t514*t661;
  t983 = t900 + t954;
  t1492 = Cos(var1[14]);
  t1502 = Sin(var1[14]);
  t1129 = t495*t638*t514;
  t1143 = -1.*t440*t661;
  t1199 = t1129 + t1143;
  t1259 = t440*t495;
  t1261 = t638*t514*t661;
  t1276 = t1259 + t1261;
  t1505 = t880*t742;
  t1510 = t87*t983;
  t1530 = t1505 + t1510;
  t1639 = t880*t1199;
  t1794 = t87*t1276;
  t1824 = t1639 + t1794;
  t1975 = t1421*t495*t880;
  t1978 = t87*t1421*t661;
  t1980 = t1975 + t1978;
  p_output1[0]=-1.*t742*t87 + t880*t983;
  p_output1[1]=-1.*t1199*t87 + t1276*t880;
  p_output1[2]=-1.*t1421*t495*t87 + t1421*t661*t880;
  p_output1[3]=t1502*t1530 + t1421*t1492*t440;
  p_output1[4]=t1502*t1824 + t1421*t1492*t638;
  p_output1[5]=t1502*t1980 - 1.*t1492*t514;
  p_output1[6]=-1.*t1492*t1530 + t1421*t1502*t440;
  p_output1[7]=-1.*t1492*t1824 + t1421*t1502*t638;
  p_output1[8]=-1.*t1492*t1980 - 1.*t1502*t514;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_RightRotationJoint_mex.hh"

namespace SymExpression
{

void R_RightRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
