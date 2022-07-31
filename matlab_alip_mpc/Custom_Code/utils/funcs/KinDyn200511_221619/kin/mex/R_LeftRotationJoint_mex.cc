/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:52 GMT-04:00
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
  double t464;
  double t761;
  double t436;
  double t542;
  double t868;
  double t94;
  double t1506;
  double t1834;
  double t1302;
  double t1354;
  double t1452;
  double t650;
  double t1115;
  double t1116;
  double t2165;
  double t1777;
  double t1782;
  double t1810;
  double t1552;
  double t1581;
  double t1747;
  double t2756;
  double t2504;
  double t2662;
  double t2720;
  double t3215;
  double t3228;
  double t3297;
  double t3366;
  double t3386;
  double t3393;
  t464 = Cos(var1[5]);
  t761 = Sin(var1[3]);
  t436 = Cos(var1[3]);
  t542 = Sin(var1[4]);
  t868 = Sin(var1[5]);
  t94 = Cos(var1[6]);
  t1506 = Sin(var1[6]);
  t1834 = Cos(var1[4]);
  t1302 = -1.*t464*t761;
  t1354 = t436*t542*t868;
  t1452 = t1302 + t1354;
  t650 = t436*t464*t542;
  t1115 = t761*t868;
  t1116 = t650 + t1115;
  t2165 = Cos(var1[7]);
  t1777 = t436*t464;
  t1782 = t761*t542*t868;
  t1810 = t1777 + t1782;
  t1552 = t464*t761*t542;
  t1581 = -1.*t436*t868;
  t1747 = t1552 + t1581;
  t2756 = Sin(var1[7]);
  t2504 = t94*t1452;
  t2662 = t1116*t1506;
  t2720 = t2504 + t2662;
  t3215 = t94*t1810;
  t3228 = t1747*t1506;
  t3297 = t3215 + t3228;
  t3366 = t1834*t94*t868;
  t3386 = t1834*t464*t1506;
  t3393 = t3366 + t3386;
  p_output1[0]=t1452*t1506 - 1.*t1116*t94;
  p_output1[1]=t1506*t1810 - 1.*t1747*t94;
  p_output1[2]=t1506*t1834*t868 - 1.*t1834*t464*t94;
  p_output1[3]=t2720*t2756 + t1834*t2165*t436;
  p_output1[4]=t2756*t3297 + t1834*t2165*t761;
  p_output1[5]=t2756*t3393 - 1.*t2165*t542;
  p_output1[6]=-1.*t2165*t2720 + t1834*t2756*t436;
  p_output1[7]=-1.*t2165*t3297 + t1834*t2756*t761;
  p_output1[8]=-1.*t2165*t3393 - 1.*t2756*t542;
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

#include "R_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void R_LeftRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
