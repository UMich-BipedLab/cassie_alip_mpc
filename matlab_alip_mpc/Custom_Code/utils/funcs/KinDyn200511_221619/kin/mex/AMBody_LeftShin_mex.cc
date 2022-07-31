/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:52 GMT-04:00
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
  double t223;
  double t98;
  double t178;
  double t348;
  double t80;
  double t475;
  double t476;
  double t876;
  double t179;
  double t449;
  double t455;
  double t999;
  double t1426;
  double t1441;
  double t1493;
  double t1575;
  double t1600;
  double t1614;
  double t465;
  double t1067;
  double t1217;
  double t1980;
  double t1766;
  double t2042;
  double t2071;
  double t2108;
  double t2189;
  double t1785;
  double t2125;
  double t2169;
  double t1764;
  double t2192;
  double t2200;
  double t2206;
  double t2965;
  double t2980;
  double t2997;
  double t3246;
  double t3250;
  double t3283;
  double t3336;
  double t3036;
  double t3045;
  double t3050;
  double t3438;
  double t3486;
  double t2508;
  double t2540;
  double t3407;
  double t3510;
  double t3629;
  double t3722;
  double t3757;
  double t3778;
  double t1220;
  double t1654;
  double t1667;
  double t2185;
  double t2287;
  double t2417;
  double t2446;
  double t2534;
  double t2544;
  double t2607;
  double t2693;
  double t2721;
  double t2733;
  double t2881;
  double t2886;
  double t3065;
  double t3341;
  double t3354;
  double t3641;
  double t3810;
  double t3858;
  double t3896;
  double t3935;
  double t3939;
  double t4042;
  double t4075;
  double t4247;
  double t4285;
  double t4340;
  double t4363;
  double t4871;
  double t4955;
  double t5337;
  double t5193;
  double t5203;
  double t5216;
  double t5303;
  t223 = Cos(var1[9]);
  t98 = Cos(var1[10]);
  t178 = Sin(var1[9]);
  t348 = Sin(var1[10]);
  t80 = Cos(var1[8]);
  t475 = t223*t98;
  t476 = -1.*t178*t348;
  t876 = 0. + t475 + t476;
  t179 = t98*t178;
  t449 = t223*t348;
  t455 = 0. + t179 + t449;
  t999 = Sin(var1[8]);
  t1426 = Cos(var1[7]);
  t1441 = t80*t876;
  t1493 = -1.*t455*t999;
  t1575 = 0. + t1441 + t1493;
  t1600 = t1426*t1575;
  t1614 = 0. + t1600;
  t465 = t80*t455;
  t1067 = t876*t999;
  t1217 = 0. + t465 + t1067;
  t1980 = Cos(var1[6]);
  t1766 = Sin(var1[6]);
  t2042 = Sin(var1[7]);
  t2071 = t2042*t1575;
  t2108 = 0. + t2071;
  t2189 = Sin(var1[5]);
  t1785 = -1.*t1766*t1217;
  t2125 = t1980*t2108;
  t2169 = 0. + t1785 + t2125;
  t1764 = Cos(var1[5]);
  t2192 = t1980*t1217;
  t2200 = t1766*t2108;
  t2206 = 0. + t2192 + t2200;
  t2965 = -1.*t223*t98;
  t2980 = t178*t348;
  t2997 = 0. + t2965 + t2980;
  t3246 = -1.*t2997*t999;
  t3250 = 0. + t465 + t3246;
  t3283 = t1426*t3250;
  t3336 = 0. + t3283;
  t3036 = t80*t2997;
  t3045 = t455*t999;
  t3050 = 0. + t3036 + t3045;
  t3438 = t2042*t3250;
  t3486 = 0. + t3438;
  t2508 = Sin(var1[4]);
  t2540 = Cos(var1[4]);
  t3407 = -1.*t1766*t3050;
  t3510 = t1980*t3486;
  t3629 = 0. + t3407 + t3510;
  t3722 = t1980*t3050;
  t3757 = t1766*t3486;
  t3778 = 0. + t3722 + t3757;
  t1220 = var2[7]*t1217;
  t1654 = var2[5]*t1614;
  t1667 = var2[6]*t1614;
  t2185 = t1764*t2169;
  t2287 = -1.*t2189*t2206;
  t2417 = 0. + t2185 + t2287;
  t2446 = var2[4]*t2417;
  t2534 = -1.*t2508*t1614;
  t2544 = t2189*t2169;
  t2607 = t1764*t2206;
  t2693 = 0. + t2544 + t2607;
  t2721 = t2540*t2693;
  t2733 = 0. + t2534 + t2721;
  t2881 = var2[3]*t2733;
  t2886 = 0. + t1220 + t1654 + t1667 + t2446 + t2881;
  t3065 = var2[7]*t3050;
  t3341 = var2[5]*t3336;
  t3354 = var2[6]*t3336;
  t3641 = t1764*t3629;
  t3810 = -1.*t2189*t3778;
  t3858 = 0. + t3641 + t3810;
  t3896 = var2[4]*t3858;
  t3935 = -1.*t2508*t3336;
  t3939 = t2189*t3629;
  t4042 = t1764*t3778;
  t4075 = 0. + t3939 + t4042;
  t4247 = t2540*t4075;
  t4285 = 0. + t3935 + t4247;
  t4340 = var2[3]*t4285;
  t4363 = 0. + t3065 + t3341 + t3354 + t3896 + t4340;
  t4871 = -1.*t1426;
  t4955 = 0. + t4871;
  t5337 = 0. + t2042;
  t5193 = t1980*t4955;
  t5203 = 0. + t5193;
  t5216 = t4955*t1766;
  t5303 = 0. + t5216;
  p_output1[0]=0. + 0.000334*t2886 + 0.00036*t4363;
  p_output1[1]=0. + 0.0341*t2886 + 0.000334*t4363;
  p_output1[2]=0. + 0.0341*(0. + (0. + t2540*(0. + t2189*t5203 + t1764*t5303) - 1.*t2508*t5337)*var2[3] + (0. + t1764*t5203 - 1.*t2189*t5303)*var2[4] + t5337*var2[5] + t5337*var2[6] + var2[8] + var2[9] + var2[10]);
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

#include "AMBody_LeftShin_mex.hh"

namespace SymExpression
{

void AMBody_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
