/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:30 GMT-04:00
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
  double t329;
  double t61;
  double t565;
  double t480;
  double t761;
  double t913;
  double t745;
  double t1257;
  double t780;
  double t1084;
  double t1198;
  double t1306;
  double t1375;
  double t1495;
  double t1956;
  double t1997;
  double t2071;
  double t2606;
  double t2674;
  double t2678;
  double t3719;
  double t3721;
  double t1210;
  double t1512;
  double t1549;
  double t2992;
  double t3001;
  double t3046;
  double t3726;
  double t3771;
  double t3828;
  double t3906;
  double t3917;
  double t4078;
  double t2547;
  double t2708;
  double t2872;
  double t3086;
  double t3131;
  double t3255;
  double t2913;
  double t2941;
  double t2963;
  double t3276;
  double t3408;
  double t3578;
  t329 = Cos(var1[4]);
  t61 = Cos(var1[3]);
  t565 = Sin(var1[4]);
  t480 = Sin(var1[3]);
  t761 = Cos(var1[5]);
  t913 = Sin(var1[5]);
  t745 = Sin(var1[13]);
  t1257 = Cos(var1[13]);
  t780 = t61*t761*t565;
  t1084 = t480*t913;
  t1198 = t780 + t1084;
  t1306 = -1.*t761*t480;
  t1375 = t61*t565*t913;
  t1495 = t1306 + t1375;
  t1956 = t761*t480*t565;
  t1997 = -1.*t61*t913;
  t2071 = t1956 + t1997;
  t2606 = t61*t761;
  t2674 = t480*t565*t913;
  t2678 = t2606 + t2674;
  t3719 = -1.*t1257;
  t3721 = 1. + t3719;
  t1210 = t745*t1198;
  t1512 = t1257*t1495;
  t1549 = t1210 + t1512;
  t2992 = t1257*t1198;
  t3001 = -1.*t745*t1495;
  t3046 = t2992 + t3001;
  t3726 = 0.07996*t3721;
  t3771 = 0.135*t745;
  t3828 = 0. + t3726 + t3771;
  t3906 = -0.135*t3721;
  t3917 = 0.07996*t745;
  t4078 = 0. + t3906 + t3917;
  t2547 = t745*t2071;
  t2708 = t1257*t2678;
  t2872 = t2547 + t2708;
  t3086 = t1257*t2071;
  t3131 = -1.*t745*t2678;
  t3255 = t3086 + t3131;
  t2913 = t329*t761*t745;
  t2941 = t1257*t329*t913;
  t2963 = t2913 + t2941;
  t3276 = t1257*t329*t761;
  t3408 = -1.*t329*t745*t913;
  t3578 = t3276 + t3408;
  p_output1[0]=t329*t61;
  p_output1[1]=t329*t480;
  p_output1[2]=-1.*t565;
  p_output1[3]=0.;
  p_output1[4]=t1549;
  p_output1[5]=t2872;
  p_output1[6]=t2963;
  p_output1[7]=0.;
  p_output1[8]=t3046;
  p_output1[9]=t3255;
  p_output1[10]=t3578;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1351*t1549 + 0.09786*t3046 + t1198*t3828 + t1495*t4078 - 0.05485*t329*t61 + var1[0];
  p_output1[13]=0. - 0.1351*t2872 + 0.09786*t3255 + t2071*t3828 + t2678*t4078 - 0.05485*t329*t480 + var1[1];
  p_output1[14]=0. - 0.1351*t2963 + 0.09786*t3578 + 0.05485*t565 + t329*t3828*t761 + t329*t4078*t913 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void T_RightPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
