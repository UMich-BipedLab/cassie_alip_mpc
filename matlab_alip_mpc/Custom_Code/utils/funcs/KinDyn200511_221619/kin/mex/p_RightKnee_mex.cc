/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:50 GMT-04:00
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
  double t410;
  double t1694;
  double t1704;
  double t1718;
  double t1860;
  double t1994;
  double t2113;
  double t1999;
  double t2151;
  double t1375;
  double t1395;
  double t1406;
  double t1503;
  double t2052;
  double t2185;
  double t2193;
  double t2370;
  double t2393;
  double t2722;
  double t1211;
  double t3003;
  double t3077;
  double t3173;
  double t3218;
  double t3225;
  double t3271;
  double t3305;
  double t3450;
  double t3516;
  double t3523;
  double t4268;
  double t4280;
  double t4281;
  double t4348;
  double t4423;
  double t4530;
  double t4594;
  double t4638;
  double t4652;
  double t4691;
  double t5117;
  double t5172;
  double t5197;
  double t1500;
  double t1508;
  double t1561;
  double t1752;
  double t1960;
  double t1970;
  double t2214;
  double t2288;
  double t2364;
  double t2847;
  double t2873;
  double t2944;
  double t5989;
  double t6038;
  double t6206;
  double t6237;
  double t6248;
  double t6284;
  double t3300;
  double t3365;
  double t3444;
  double t6432;
  double t6497;
  double t6509;
  double t3954;
  double t4224;
  double t4225;
  double t4574;
  double t4632;
  double t4633;
  double t6553;
  double t6611;
  double t6814;
  double t7146;
  double t7147;
  double t7165;
  double t4830;
  double t4835;
  double t4931;
  double t7182;
  double t7201;
  double t7230;
  double t7304;
  double t7326;
  double t7334;
  double t7883;
  double t7885;
  double t7895;
  double t7907;
  double t7914;
  double t7917;
  double t7964;
  double t7969;
  double t7971;
  double t7984;
  double t7989;
  double t8000;
  double t8016;
  double t8025;
  double t8030;
  t410 = Cos(var1[3]);
  t1694 = Cos(var1[13]);
  t1704 = -1.*t1694;
  t1718 = 1. + t1704;
  t1860 = Sin(var1[13]);
  t1994 = Cos(var1[5]);
  t2113 = Sin(var1[3]);
  t1999 = Sin(var1[4]);
  t2151 = Sin(var1[5]);
  t1375 = Cos(var1[14]);
  t1395 = -1.*t1375;
  t1406 = 1. + t1395;
  t1503 = Sin(var1[14]);
  t2052 = t410*t1994*t1999;
  t2185 = t2113*t2151;
  t2193 = t2052 + t2185;
  t2370 = -1.*t1994*t2113;
  t2393 = t410*t1999*t2151;
  t2722 = t2370 + t2393;
  t1211 = Cos(var1[4]);
  t3003 = t1860*t2193;
  t3077 = t1694*t2722;
  t3173 = t3003 + t3077;
  t3218 = Cos(var1[15]);
  t3225 = -1.*t3218;
  t3271 = 1. + t3225;
  t3305 = Sin(var1[15]);
  t3450 = t1694*t2193;
  t3516 = -1.*t1860*t2722;
  t3523 = t3450 + t3516;
  t4268 = t1375*t410*t1211;
  t4280 = t1503*t3173;
  t4281 = t4268 + t4280;
  t4348 = Cos(var1[16]);
  t4423 = -1.*t4348;
  t4530 = 1. + t4423;
  t4594 = Sin(var1[16]);
  t4638 = t3305*t3523;
  t4652 = t3218*t4281;
  t4691 = t4638 + t4652;
  t5117 = t3218*t3523;
  t5172 = -1.*t3305*t4281;
  t5197 = t5117 + t5172;
  t1500 = -0.08055*t1406;
  t1508 = -0.135*t1503;
  t1561 = 0. + t1500 + t1508;
  t1752 = 0.07996*t1718;
  t1960 = 0.135*t1860;
  t1970 = 0. + t1752 + t1960;
  t2214 = -0.135*t1718;
  t2288 = 0.07996*t1860;
  t2364 = 0. + t2214 + t2288;
  t2847 = -0.135*t1406;
  t2873 = 0.08055*t1503;
  t2944 = 0. + t2847 + t2873;
  t5989 = t1994*t2113*t1999;
  t6038 = -1.*t410*t2151;
  t6206 = t5989 + t6038;
  t6237 = t410*t1994;
  t6248 = t2113*t1999*t2151;
  t6284 = t6237 + t6248;
  t3300 = -0.01004*t3271;
  t3365 = 0.08055*t3305;
  t3444 = 0. + t3300 + t3365;
  t6432 = t1860*t6206;
  t6497 = t1694*t6284;
  t6509 = t6432 + t6497;
  t3954 = -0.08055*t3271;
  t4224 = -0.01004*t3305;
  t4225 = 0. + t3954 + t4224;
  t4574 = -0.08055*t4530;
  t4632 = -0.13004*t4594;
  t4633 = 0. + t4574 + t4632;
  t6553 = t1694*t6206;
  t6611 = -1.*t1860*t6284;
  t6814 = t6553 + t6611;
  t7146 = t1375*t1211*t2113;
  t7147 = t1503*t6509;
  t7165 = t7146 + t7147;
  t4830 = -0.13004*t4530;
  t4835 = 0.08055*t4594;
  t4931 = 0. + t4830 + t4835;
  t7182 = t3305*t6814;
  t7201 = t3218*t7165;
  t7230 = t7182 + t7201;
  t7304 = t3218*t6814;
  t7326 = -1.*t3305*t7165;
  t7334 = t7304 + t7326;
  t7883 = t1211*t1994*t1860;
  t7885 = t1694*t1211*t2151;
  t7895 = t7883 + t7885;
  t7907 = t1694*t1211*t1994;
  t7914 = -1.*t1211*t1860*t2151;
  t7917 = t7907 + t7914;
  t7964 = -1.*t1375*t1999;
  t7969 = t1503*t7895;
  t7971 = t7964 + t7969;
  t7984 = t3305*t7917;
  t7989 = t3218*t7971;
  t8000 = t7984 + t7989;
  t8016 = t3218*t7917;
  t8025 = -1.*t3305*t7971;
  t8030 = t8016 + t8025;
  p_output1[0]=0. + t1970*t2193 + t2364*t2722 + t2944*t3173 + t3444*t3523 + t1211*t1561*t410 - 0.1327*(t1375*t3173 - 1.*t1211*t1503*t410) + t4225*t4281 + t4633*t4691 + t4931*t5197 - 0.15304*(-1.*t4594*t4691 + t4348*t5197) - 0.04845*(t4348*t4691 + t4594*t5197) + var1[0];
  p_output1[1]=0. + t1211*t1561*t2113 + t1970*t6206 + t2364*t6284 + t2944*t6509 - 0.1327*(-1.*t1211*t1503*t2113 + t1375*t6509) + t3444*t6814 + t4225*t7165 + t4633*t7230 + t4931*t7334 - 0.15304*(-1.*t4594*t7230 + t4348*t7334) - 0.04845*(t4348*t7230 + t4594*t7334) + var1[1];
  p_output1[2]=0. + t1211*t1970*t1994 - 1.*t1561*t1999 + t1211*t2151*t2364 + t2944*t7895 - 0.1327*(t1503*t1999 + t1375*t7895) + t3444*t7917 + t4225*t7971 + t4633*t8000 + t4931*t8030 - 0.15304*(-1.*t4594*t8000 + t4348*t8030) - 0.04845*(t4348*t8000 + t4594*t8030) + var1[2];
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

#include "p_RightKnee_mex.hh"

namespace SymExpression
{

void p_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
