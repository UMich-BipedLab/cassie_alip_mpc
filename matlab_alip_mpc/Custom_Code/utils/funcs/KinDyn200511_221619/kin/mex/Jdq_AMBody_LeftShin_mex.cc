/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:55 GMT-04:00
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
  double t502;
  double t667;
  double t457;
  double t794;
  double t453;
  double t1039;
  double t1063;
  double t1068;
  double t594;
  double t832;
  double t946;
  double t1142;
  double t996;
  double t1252;
  double t1280;
  double t1850;
  double t1634;
  double t1701;
  double t1726;
  double t1620;
  double t1851;
  double t1915;
  double t1974;
  double t255;
  double t407;
  double t1438;
  double t1498;
  double t2607;
  double t2621;
  double t2650;
  double t2665;
  double t2693;
  double t2114;
  double t2862;
  double t2867;
  double t2986;
  double t3108;
  double t3296;
  double t1346;
  double t1367;
  double t1414;
  double t1741;
  double t1984;
  double t1993;
  double t2111;
  double t2236;
  double t2252;
  double t2397;
  double t2463;
  double t2489;
  double t2530;
  double t2561;
  double t2701;
  double t2733;
  double t2766;
  double t3027;
  double t3325;
  double t3333;
  double t3413;
  double t3425;
  double t3426;
  double t3430;
  double t3432;
  double t3477;
  double t3487;
  double t3556;
  double t3739;
  double t3757;
  double t4729;
  double t4750;
  double t4809;
  double t4916;
  double t4930;
  double t4955;
  double t3921;
  double t3933;
  double t4295;
  double t4309;
  double t4492;
  double t5282;
  double t5287;
  double t5306;
  double t5325;
  double t5362;
  double t5384;
  double t5397;
  t502 = Cos(var1[10]);
  t667 = Sin(var1[9]);
  t457 = Cos(var1[9]);
  t794 = Sin(var1[10]);
  t453 = Cos(var1[8]);
  t1039 = t502*t667;
  t1063 = t457*t794;
  t1068 = 0. + t1039 + t1063;
  t594 = t457*t502;
  t832 = -1.*t667*t794;
  t946 = 0. + t594 + t832;
  t1142 = Sin(var1[8]);
  t996 = t453*t946;
  t1252 = -1.*t1068*t1142;
  t1280 = 0. + t996 + t1252;
  t1850 = Cos(var1[6]);
  t1634 = t453*t1068;
  t1701 = t946*t1142;
  t1726 = 0. + t1634 + t1701;
  t1620 = Sin(var1[6]);
  t1851 = Sin(var1[7]);
  t1915 = t1851*t1280;
  t1974 = 0. + t1915;
  t255 = Sin(var1[4]);
  t407 = Cos(var1[7]);
  t1438 = Cos(var1[4]);
  t1498 = Sin(var1[5]);
  t2607 = -1.*t457*t502;
  t2621 = t667*t794;
  t2650 = 0. + t2607 + t2621;
  t2665 = -1.*t2650*t1142;
  t2693 = 0. + t1634 + t2665;
  t2114 = Cos(var1[5]);
  t2862 = t453*t2650;
  t2867 = t1068*t1142;
  t2986 = 0. + t2862 + t2867;
  t3108 = t1851*t2693;
  t3296 = 0. + t3108;
  t1346 = t407*t1280;
  t1367 = 0. + t1346;
  t1414 = -1.*t255*t1367;
  t1741 = -1.*t1620*t1726;
  t1984 = t1850*t1974;
  t1993 = 0. + t1741 + t1984;
  t2111 = t1498*t1993;
  t2236 = t1850*t1726;
  t2252 = t1620*t1974;
  t2397 = 0. + t2236 + t2252;
  t2463 = t2114*t2397;
  t2489 = 0. + t2111 + t2463;
  t2530 = t1438*t2489;
  t2561 = 0. + t1414 + t2530;
  t2701 = t407*t2693;
  t2733 = 0. + t2701;
  t2766 = -1.*t255*t2733;
  t3027 = -1.*t1620*t2986;
  t3325 = t1850*t3296;
  t3333 = 0. + t3027 + t3325;
  t3413 = t1498*t3333;
  t3425 = t1850*t2986;
  t3426 = t1620*t3296;
  t3430 = 0. + t3425 + t3426;
  t3432 = t2114*t3430;
  t3477 = 0. + t3413 + t3432;
  t3487 = t1438*t3477;
  t3556 = 0. + t2766 + t3487;
  t3739 = -1.*t407;
  t3757 = 0. + t3739;
  t4729 = t2114*t1993;
  t4750 = -1.*t1498*t2397;
  t4809 = 0. + t4729 + t4750;
  t4916 = t2114*t3333;
  t4930 = -1.*t1498*t3430;
  t4955 = 0. + t4916 + t4930;
  t3921 = t1850*t3757;
  t3933 = 0. + t3921;
  t4295 = t3757*t1620;
  t4309 = 0. + t4295;
  t4492 = 0. + t1851;
  t5282 = 0.000334*t1367;
  t5287 = 0.00036*t2733;
  t5306 = t5282 + t5287;
  t5325 = 0.0341*t1367;
  t5362 = 0.000334*t2733;
  t5384 = t5325 + t5362;
  t5397 = 0.0341*t4492;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000334*t2561 + 0.00036*t3556;
  p_output1[10]=0.0341*t2561 + 0.000334*t3556;
  p_output1[11]=0.0341*(0. + t1438*(0. + t1498*t3933 + t2114*t4309) - 1.*t255*t4492);
  p_output1[12]=0.000334*t4809 + 0.00036*t4955;
  p_output1[13]=0.0341*t4809 + 0.000334*t4955;
  p_output1[14]=0.0341*(0. + t2114*t3933 - 1.*t1498*t4309);
  p_output1[15]=t5306;
  p_output1[16]=t5384;
  p_output1[17]=t5397;
  p_output1[18]=t5306;
  p_output1[19]=t5384;
  p_output1[20]=t5397;
  p_output1[21]=0.000334*t1726 + 0.00036*t2986;
  p_output1[22]=0.0341*t1726 + 0.000334*t2986;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0.0341;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0.0341;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0.0341;
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

#include "Jdq_AMBody_LeftShin_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
