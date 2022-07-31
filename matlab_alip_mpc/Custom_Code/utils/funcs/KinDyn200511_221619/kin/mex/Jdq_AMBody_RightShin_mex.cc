/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:48 GMT-04:00
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
  double t688;
  double t380;
  double t506;
  double t705;
  double t982;
  double t597;
  double t753;
  double t759;
  double t338;
  double t1123;
  double t1409;
  double t1530;
  double t974;
  double t1541;
  double t1587;
  double t2913;
  double t2557;
  double t2603;
  double t2863;
  double t2495;
  double t3083;
  double t3290;
  double t3370;
  double t326;
  double t2084;
  double t2143;
  double t2242;
  double t5199;
  double t5611;
  double t5626;
  double t5694;
  double t5726;
  double t6097;
  double t6108;
  double t6336;
  double t6411;
  double t6423;
  double t4211;
  double t1726;
  double t1736;
  double t2138;
  double t2908;
  double t3495;
  double t3583;
  double t3705;
  double t3763;
  double t3765;
  double t3910;
  double t4231;
  double t4276;
  double t4548;
  double t4562;
  double t5831;
  double t5870;
  double t6096;
  double t6391;
  double t6439;
  double t6612;
  double t6626;
  double t6676;
  double t6702;
  double t6717;
  double t6747;
  double t6814;
  double t6854;
  double t6903;
  double t7033;
  double t7034;
  double t7174;
  double t7184;
  double t7222;
  double t7237;
  double t7240;
  double t7244;
  double t7118;
  double t7127;
  double t7074;
  double t7098;
  double t7029;
  double t7318;
  double t7339;
  double t7342;
  double t7347;
  double t7352;
  double t7353;
  double t7358;
  t688 = Cos(var1[16]);
  t380 = Cos(var1[17]);
  t506 = Sin(var1[16]);
  t705 = Sin(var1[17]);
  t982 = Cos(var1[15]);
  t597 = t380*t506;
  t753 = t688*t705;
  t759 = 0. + t597 + t753;
  t338 = Sin(var1[15]);
  t1123 = t688*t380;
  t1409 = -1.*t506*t705;
  t1530 = 0. + t1123 + t1409;
  t974 = -1.*t338*t759;
  t1541 = t982*t1530;
  t1587 = 0. + t974 + t1541;
  t2913 = Sin(var1[13]);
  t2557 = t982*t759;
  t2603 = t338*t1530;
  t2863 = 0. + t2557 + t2603;
  t2495 = Cos(var1[13]);
  t3083 = Sin(var1[14]);
  t3290 = t3083*t1587;
  t3370 = 0. + t3290;
  t326 = Cos(var1[14]);
  t2084 = Sin(var1[4]);
  t2143 = Cos(var1[4]);
  t2242 = Cos(var1[5]);
  t5199 = -1.*t688*t380;
  t5611 = t506*t705;
  t5626 = 0. + t5199 + t5611;
  t5694 = -1.*t338*t5626;
  t5726 = 0. + t2557 + t5694;
  t6097 = t338*t759;
  t6108 = t982*t5626;
  t6336 = 0. + t6097 + t6108;
  t6411 = t3083*t5726;
  t6423 = 0. + t6411;
  t4211 = Sin(var1[5]);
  t1726 = t326*t1587;
  t1736 = 0. + t1726;
  t2138 = -1.*t1736*t2084;
  t2908 = t2495*t2863;
  t3495 = t2913*t3370;
  t3583 = 0. + t2908 + t3495;
  t3705 = t2242*t3583;
  t3763 = -1.*t2913*t2863;
  t3765 = t2495*t3370;
  t3910 = 0. + t3763 + t3765;
  t4231 = t3910*t4211;
  t4276 = 0. + t3705 + t4231;
  t4548 = t2143*t4276;
  t4562 = 0. + t2138 + t4548;
  t5831 = t326*t5726;
  t5870 = 0. + t5831;
  t6096 = -1.*t5870*t2084;
  t6391 = t2495*t6336;
  t6439 = t2913*t6423;
  t6612 = 0. + t6391 + t6439;
  t6626 = t2242*t6612;
  t6676 = -1.*t2913*t6336;
  t6702 = t2495*t6423;
  t6717 = 0. + t6676 + t6702;
  t6747 = t6717*t4211;
  t6814 = 0. + t6626 + t6747;
  t6854 = t2143*t6814;
  t6903 = 0. + t6096 + t6854;
  t7033 = -1.*t326;
  t7034 = 0. + t7033;
  t7174 = t2242*t3910;
  t7184 = -1.*t3583*t4211;
  t7222 = 0. + t7174 + t7184;
  t7237 = t2242*t6717;
  t7240 = -1.*t6612*t4211;
  t7244 = 0. + t7237 + t7240;
  t7118 = t2495*t7034;
  t7127 = 0. + t7118;
  t7074 = t7034*t2913;
  t7098 = 0. + t7074;
  t7029 = 0. + t3083;
  t7318 = 0.000334*t1736;
  t7339 = 0.00036*t5870;
  t7342 = t7318 + t7339;
  t7347 = 0.0341*t1736;
  t7352 = 0.000334*t5870;
  t7353 = t7347 + t7352;
  t7358 = 0.0341*t7029;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000334*t4562 + 0.00036*t6903;
  p_output1[10]=0.0341*t4562 + 0.000334*t6903;
  p_output1[11]=0.0341*(0. - 1.*t2084*t7029 + t2143*(0. + t2242*t7098 + t4211*t7127));
  p_output1[12]=0.000334*t7222 + 0.00036*t7244;
  p_output1[13]=0.0341*t7222 + 0.000334*t7244;
  p_output1[14]=0.0341*(0. - 1.*t4211*t7098 + t2242*t7127);
  p_output1[15]=t7342;
  p_output1[16]=t7353;
  p_output1[17]=t7358;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t7342;
  p_output1[40]=t7353;
  p_output1[41]=t7358;
  p_output1[42]=0.000334*t2863 + 0.00036*t6336;
  p_output1[43]=0.0341*t2863 + 0.000334*t6336;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0.0341;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0.0341;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0.0341;
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

#include "Jdq_AMBody_RightShin_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
