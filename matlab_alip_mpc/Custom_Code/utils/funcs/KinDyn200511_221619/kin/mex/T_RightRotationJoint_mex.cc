/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:11 GMT-04:00
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
  double t121;
  double t208;
  double t70;
  double t187;
  double t209;
  double t10;
  double t266;
  double t763;
  double t200;
  double t232;
  double t254;
  double t284;
  double t304;
  double t371;
  double t842;
  double t861;
  double t422;
  double t472;
  double t497;
  double t535;
  double t543;
  double t578;
  double t979;
  double t1009;
  double t1023;
  double t1190;
  double t1205;
  double t1234;
  double t1408;
  double t1418;
  double t1422;
  double t2111;
  double t2162;
  double t2051;
  double t2053;
  double t846;
  double t1085;
  double t1135;
  double t2055;
  double t2065;
  double t2074;
  double t2206;
  double t2278;
  double t2286;
  double t2318;
  double t2326;
  double t2370;
  double t2460;
  double t2522;
  double t2540;
  double t1172;
  double t1259;
  double t1280;
  double t1287;
  double t1667;
  double t1711;
  t121 = Cos(var1[5]);
  t208 = Sin(var1[3]);
  t70 = Cos(var1[3]);
  t187 = Sin(var1[4]);
  t209 = Sin(var1[5]);
  t10 = Cos(var1[13]);
  t266 = Sin(var1[13]);
  t763 = Cos(var1[4]);
  t200 = t70*t121*t187;
  t232 = t208*t209;
  t254 = t200 + t232;
  t284 = -1.*t121*t208;
  t304 = t70*t187*t209;
  t371 = t284 + t304;
  t842 = Cos(var1[14]);
  t861 = Sin(var1[14]);
  t422 = t121*t208*t187;
  t472 = -1.*t70*t209;
  t497 = t422 + t472;
  t535 = t70*t121;
  t543 = t208*t187*t209;
  t578 = t535 + t543;
  t979 = t266*t254;
  t1009 = t10*t371;
  t1023 = t979 + t1009;
  t1190 = t266*t497;
  t1205 = t10*t578;
  t1234 = t1190 + t1205;
  t1408 = t763*t121*t266;
  t1418 = t10*t763*t209;
  t1422 = t1408 + t1418;
  t2111 = -1.*t10;
  t2162 = 1. + t2111;
  t2051 = -1.*t842;
  t2053 = 1. + t2051;
  t846 = t842*t70*t763;
  t1085 = t861*t1023;
  t1135 = t846 + t1085;
  t2055 = -0.08055*t2053;
  t2065 = -0.135*t861;
  t2074 = 0. + t2055 + t2065;
  t2206 = 0.07996*t2162;
  t2278 = 0.135*t266;
  t2286 = 0. + t2206 + t2278;
  t2318 = -0.135*t2162;
  t2326 = 0.07996*t266;
  t2370 = 0. + t2318 + t2326;
  t2460 = -0.135*t2053;
  t2522 = 0.08055*t861;
  t2540 = 0. + t2460 + t2522;
  t1172 = t842*t763*t208;
  t1259 = t861*t1234;
  t1280 = t1172 + t1259;
  t1287 = -1.*t842*t187;
  t1667 = t861*t1422;
  t1711 = t1287 + t1667;
  p_output1[0]=-1.*t10*t254 + t266*t371;
  p_output1[1]=-1.*t10*t497 + t266*t578;
  p_output1[2]=-1.*t10*t121*t763 + t209*t266*t763;
  p_output1[3]=0.;
  p_output1[4]=t1135;
  p_output1[5]=t1280;
  p_output1[6]=t1711;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1023*t842 + t70*t763*t861;
  p_output1[9]=-1.*t1234*t842 + t208*t763*t861;
  p_output1[10]=-1.*t1422*t842 - 1.*t187*t861;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1135 + t2286*t254 + t1023*t2540 + t2370*t371 - 0.01004*(t10*t254 - 1.*t266*t371) + t2074*t70*t763 - 0.135*(t1023*t842 - 1.*t70*t763*t861) + var1[0];
  p_output1[13]=0. - 0.08055*t1280 + t1234*t2540 + t2286*t497 + t2370*t578 - 0.01004*(t10*t497 - 1.*t266*t578) + t2074*t208*t763 - 0.135*(t1234*t842 - 1.*t208*t763*t861) + var1[1];
  p_output1[14]=0. - 0.08055*t1711 - 1.*t187*t2074 + t1422*t2540 + t121*t2286*t763 + t209*t2370*t763 - 0.01004*(t10*t121*t763 - 1.*t209*t266*t763) - 0.135*(t1422*t842 + t187*t861) + var1[2];
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

#include "T_RightRotationJoint_mex.hh"

namespace SymExpression
{

void T_RightRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
