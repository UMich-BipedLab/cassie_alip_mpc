/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:20 GMT-04:00
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
  double t1216;
  double t1257;
  double t1278;
  double t1266;
  double t1284;
  double t1311;
  double t1312;
  double t1316;
  double t1318;
  double t1329;
  double t1331;
  double t1332;
  double t1277;
  double t1303;
  double t1310;
  double t1240;
  double t1317;
  double t1322;
  double t1323;
  double t1334;
  double t1337;
  double t1339;
  double t1385;
  double t1389;
  double t1390;
  double t1372;
  double t1374;
  double t1378;
  t1216 = Cos(var1[3]);
  t1257 = Cos(var1[5]);
  t1278 = Sin(var1[3]);
  t1266 = Sin(var1[4]);
  t1284 = Sin(var1[5]);
  t1311 = Cos(var1[6]);
  t1312 = -1.*t1311;
  t1316 = 1. + t1312;
  t1318 = Sin(var1[6]);
  t1329 = -1.*t1257*t1278;
  t1331 = t1216*t1266*t1284;
  t1332 = t1329 + t1331;
  t1277 = t1216*t1257*t1266;
  t1303 = t1278*t1284;
  t1310 = t1277 + t1303;
  t1240 = Cos(var1[4]);
  t1317 = 0.07996*t1316;
  t1322 = -0.135*t1318;
  t1323 = 0. + t1317 + t1322;
  t1334 = 0.135*t1316;
  t1337 = 0.07996*t1318;
  t1339 = 0. + t1334 + t1337;
  t1385 = t1216*t1257;
  t1389 = t1278*t1266*t1284;
  t1390 = t1385 + t1389;
  t1372 = t1257*t1278*t1266;
  t1374 = -1.*t1216*t1284;
  t1378 = t1372 + t1374;
  p_output1[0]=0. - 0.08055*t1216*t1240 + t1310*t1323 + 0.135*(t1310*t1318 + t1311*t1332) + 0.07996*(t1310*t1311 - 1.*t1318*t1332) + t1332*t1339 + var1[0];
  p_output1[1]=0. - 0.08055*t1240*t1278 + t1323*t1378 + t1339*t1390 + 0.135*(t1318*t1378 + t1311*t1390) + 0.07996*(t1311*t1378 - 1.*t1318*t1390) + var1[1];
  p_output1[2]=0. + 0.08055*t1266 + 0.135*(t1240*t1284*t1311 + t1240*t1257*t1318) + 0.07996*(t1240*t1257*t1311 - 1.*t1240*t1284*t1318) + t1240*t1257*t1323 + t1240*t1284*t1339 + var1[2];
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

#include "p_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void p_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
