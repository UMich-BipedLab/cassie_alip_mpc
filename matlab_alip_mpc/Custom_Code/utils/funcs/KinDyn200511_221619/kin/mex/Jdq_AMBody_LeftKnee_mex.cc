/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:23 GMT-04:00
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
  double t423;
  double t437;
  double t493;
  double t1483;
  double t4;
  double t696;
  double t1058;
  double t1977;
  double t1868;
  double t1914;
  double t2001;
  double t289;
  double t1574;
  double t1956;
  double t2223;
  double t2241;
  double t864;
  double t2600;
  double t2612;
  double t2784;
  double t2805;
  double t2907;
  double t3496;
  double t3590;
  double t3637;
  double t4026;
  double t4085;
  double t534;
  double t560;
  double t697;
  double t1073;
  double t1102;
  double t1118;
  double t1119;
  double t1128;
  double t1596;
  double t1687;
  double t1692;
  double t2253;
  double t2299;
  double t2538;
  double t2794;
  double t2926;
  double t2960;
  double t3023;
  double t3034;
  double t3042;
  double t3053;
  double t3118;
  double t3154;
  double t3324;
  double t3450;
  double t3668;
  double t3879;
  double t3885;
  double t3978;
  double t4233;
  double t4407;
  double t4661;
  double t4687;
  double t4712;
  double t4860;
  double t5027;
  double t5069;
  double t5146;
  double t5231;
  double t6177;
  double t6193;
  double t6234;
  double t6466;
  double t6468;
  double t6482;
  double t6522;
  double t6587;
  double t6597;
  double t7056;
  double t7088;
  double t7174;
  double t7185;
  double t7228;
  double t7309;
  double t7321;
  double t7355;
  double t7362;
  double t7363;
  double t7365;
  double t7396;
  t423 = Cos(var1[7]);
  t437 = -1.*t423;
  t493 = 0. + t437;
  t1483 = Sin(var1[4]);
  t4 = Cos(var1[4]);
  t696 = Sin(var1[5]);
  t1058 = Sin(var1[6]);
  t1977 = Cos(var1[9]);
  t1868 = Cos(var1[8]);
  t1914 = Sin(var1[9]);
  t2001 = Sin(var1[8]);
  t289 = Cos(var1[6]);
  t1574 = Sin(var1[7]);
  t1956 = t1868*t1914;
  t2223 = t1977*t2001;
  t2241 = 0. + t1956 + t2223;
  t864 = Cos(var1[5]);
  t2600 = -1.*t1977*t1868;
  t2612 = t1914*t2001;
  t2784 = 0. + t2600 + t2612;
  t2805 = t1574*t2241;
  t2907 = 0. + t2805;
  t3496 = t1977*t1868;
  t3590 = -1.*t1914*t2001;
  t3637 = 0. + t3496 + t3590;
  t4026 = t1574*t3637;
  t4085 = 0. + t4026;
  t534 = t289*t493;
  t560 = 0. + t534;
  t697 = t560*t696;
  t1073 = t493*t1058;
  t1102 = 0. + t1073;
  t1118 = t864*t1102;
  t1119 = 0. + t697 + t1118;
  t1128 = t4*t1119;
  t1596 = 0. + t1574;
  t1687 = -1.*t1483*t1596;
  t1692 = 0. + t1128 + t1687;
  t2253 = t423*t2241;
  t2299 = 0. + t2253;
  t2538 = -1.*t1483*t2299;
  t2794 = -1.*t1058*t2784;
  t2926 = t289*t2907;
  t2960 = 0. + t2794 + t2926;
  t3023 = t696*t2960;
  t3034 = t289*t2784;
  t3042 = t1058*t2907;
  t3053 = 0. + t3034 + t3042;
  t3118 = t864*t3053;
  t3154 = 0. + t3023 + t3118;
  t3324 = t4*t3154;
  t3450 = 0. + t2538 + t3324;
  t3668 = t423*t3637;
  t3879 = 0. + t3668;
  t3885 = -1.*t1483*t3879;
  t3978 = -1.*t1058*t2241;
  t4233 = t289*t4085;
  t4407 = 0. + t3978 + t4233;
  t4661 = t696*t4407;
  t4687 = t289*t2241;
  t4712 = t1058*t4085;
  t4860 = 0. + t4687 + t4712;
  t5027 = t864*t4860;
  t5069 = 0. + t4661 + t5027;
  t5146 = t4*t5069;
  t5231 = 0. + t3885 + t5146;
  t6177 = t864*t560;
  t6193 = -1.*t696*t1102;
  t6234 = 0. + t6177 + t6193;
  t6466 = t864*t2960;
  t6468 = -1.*t696*t3053;
  t6482 = 0. + t6466 + t6468;
  t6522 = t864*t4407;
  t6587 = -1.*t696*t4860;
  t6597 = 0. + t6522 + t6587;
  t7056 = 3.e-6*t1596;
  t7088 = 0.00216*t2299;
  t7174 = 0.000956*t3879;
  t7185 = t7056 + t7088 + t7174;
  t7228 = 1.e-6*t1596;
  t7309 = 0.000956*t2299;
  t7321 = 0.00144*t3879;
  t7355 = t7228 + t7309 + t7321;
  t7362 = 0.00334*t1596;
  t7363 = 3.e-6*t2299;
  t7365 = 1.e-6*t3879;
  t7396 = t7362 + t7363 + t7365;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=3.e-6*t1692 + 0.00216*t3450 + 0.000956*t5231;
  p_output1[10]=1.e-6*t1692 + 0.000956*t3450 + 0.00144*t5231;
  p_output1[11]=0.00334*t1692 + 3.e-6*t3450 + 1.e-6*t5231;
  p_output1[12]=3.e-6*t6234 + 0.00216*t6482 + 0.000956*t6597;
  p_output1[13]=1.e-6*t6234 + 0.000956*t6482 + 0.00144*t6597;
  p_output1[14]=0.00334*t6234 + 3.e-6*t6482 + 1.e-6*t6597;
  p_output1[15]=t7185;
  p_output1[16]=t7355;
  p_output1[17]=t7396;
  p_output1[18]=t7185;
  p_output1[19]=t7355;
  p_output1[20]=t7396;
  p_output1[21]=0.000956*t2241 + 0.00216*t2784;
  p_output1[22]=0.00144*t2241 + 0.000956*t2784;
  p_output1[23]=1.e-6*t2241 + 3.e-6*t2784;
  p_output1[24]=3.e-6;
  p_output1[25]=1.e-6;
  p_output1[26]=0.00334;
  p_output1[27]=3.e-6;
  p_output1[28]=1.e-6;
  p_output1[29]=0.00334;
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

#include "Jdq_AMBody_LeftKnee_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
