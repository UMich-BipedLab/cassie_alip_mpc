/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:56 GMT-04:00
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
  double t149;
  double t303;
  double t30;
  double t211;
  double t346;
  double t575;
  double t637;
  double t794;
  double t876;
  double t1001;
  double t1093;
  double t1100;
  double t212;
  double t395;
  double t513;
  double t1483;
  double t1529;
  double t1555;
  double t1746;
  double t1320;
  double t1461;
  double t1467;
  double t2198;
  double t3273;
  double t3304;
  double t3306;
  double t3345;
  double t3239;
  double t3265;
  double t3269;
  double t4445;
  double t4526;
  double t4540;
  double t838;
  double t950;
  double t976;
  double t1186;
  double t1190;
  double t1296;
  double t5833;
  double t5842;
  double t5845;
  double t5729;
  double t5737;
  double t5751;
  double t1660;
  double t1821;
  double t2100;
  double t2230;
  double t2238;
  double t2273;
  double t5854;
  double t5856;
  double t5900;
  double t3340;
  double t3756;
  double t3773;
  double t4607;
  double t4667;
  double t4711;
  double t5955;
  double t5956;
  double t5965;
  double t5975;
  double t5976;
  double t5981;
  double t6022;
  double t6026;
  double t6027;
  double t6048;
  double t6051;
  double t6052;
  double t6054;
  double t6055;
  double t6058;
  t149 = Cos(var1[5]);
  t303 = Sin(var1[3]);
  t30 = Cos(var1[3]);
  t211 = Sin(var1[4]);
  t346 = Sin(var1[5]);
  t575 = Cos(var1[6]);
  t637 = -1.*t575;
  t794 = 1. + t637;
  t876 = Sin(var1[6]);
  t1001 = -1.*t149*t303;
  t1093 = t30*t211*t346;
  t1100 = t1001 + t1093;
  t212 = t30*t149*t211;
  t395 = t303*t346;
  t513 = t212 + t395;
  t1483 = Cos(var1[7]);
  t1529 = -1.*t1483;
  t1555 = 1. + t1529;
  t1746 = Sin(var1[7]);
  t1320 = t575*t1100;
  t1461 = t513*t876;
  t1467 = t1320 + t1461;
  t2198 = Cos(var1[4]);
  t3273 = Cos(var1[8]);
  t3304 = -1.*t3273;
  t3306 = 1. + t3304;
  t3345 = Sin(var1[8]);
  t3239 = t30*t2198*t1483;
  t3265 = t1467*t1746;
  t3269 = t3239 + t3265;
  t4445 = t575*t513;
  t4526 = -1.*t1100*t876;
  t4540 = t4445 + t4526;
  t838 = 0.07996*t794;
  t950 = -0.135*t876;
  t976 = 0. + t838 + t950;
  t1186 = 0.135*t794;
  t1190 = 0.07996*t876;
  t1296 = 0. + t1186 + t1190;
  t5833 = t30*t149;
  t5842 = t303*t211*t346;
  t5845 = t5833 + t5842;
  t5729 = t149*t303*t211;
  t5737 = -1.*t30*t346;
  t5751 = t5729 + t5737;
  t1660 = 0.135*t1555;
  t1821 = 0.08055*t1746;
  t2100 = 0. + t1660 + t1821;
  t2230 = -0.08055*t1555;
  t2238 = 0.135*t1746;
  t2273 = 0. + t2230 + t2238;
  t5854 = t575*t5845;
  t5856 = t5751*t876;
  t5900 = t5854 + t5856;
  t3340 = -0.08055*t3306;
  t3756 = -0.01004*t3345;
  t3773 = 0. + t3340 + t3756;
  t4607 = -0.01004*t3306;
  t4667 = 0.08055*t3345;
  t4711 = 0. + t4607 + t4667;
  t5955 = t2198*t1483*t303;
  t5956 = t5900*t1746;
  t5965 = t5955 + t5956;
  t5975 = t575*t5751;
  t5976 = -1.*t5845*t876;
  t5981 = t5975 + t5976;
  t6022 = t2198*t575*t346;
  t6026 = t2198*t149*t876;
  t6027 = t6022 + t6026;
  t6048 = -1.*t1483*t211;
  t6051 = t6027*t1746;
  t6052 = t6048 + t6051;
  t6054 = t2198*t149*t575;
  t6055 = -1.*t2198*t346*t876;
  t6058 = t6054 + t6055;
  p_output1[0]=0. + t1100*t1296 + t1467*t2100 + t2198*t2273*t30 + 0.135*(t1467*t1483 - 1.*t1746*t2198*t30) + t3269*t3773 - 0.01004*(-1.*t3269*t3345 + t3273*t4540) - 0.08055*(t3269*t3273 + t3345*t4540) + t4540*t4711 + t513*t976 + var1[0];
  p_output1[1]=0. + t2198*t2273*t303 + t1296*t5845 + t2100*t5900 + 0.135*(-1.*t1746*t2198*t303 + t1483*t5900) + t3773*t5965 + t4711*t5981 - 0.01004*(-1.*t3345*t5965 + t3273*t5981) - 0.08055*(t3273*t5965 + t3345*t5981) + t5751*t976 + var1[1];
  p_output1[2]=0. - 1.*t211*t2273 + t1296*t2198*t346 + t2100*t6027 + 0.135*(t1746*t211 + t1483*t6027) + t3773*t6052 + t4711*t6058 - 0.01004*(-1.*t3345*t6052 + t3273*t6058) - 0.08055*(t3273*t6052 + t3345*t6058) + t149*t2198*t976 + var1[2];
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

#include "p_LeftThighJoint_mex.hh"

namespace SymExpression
{

void p_LeftThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
