/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:29 GMT-04:00
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
  double t1190;
  double t4517;
  double t4689;
  double t1201;
  double t2346;
  double t3928;
  double t4208;
  double t4656;
  double t4692;
  double t4695;
  double t4798;
  double t4803;
  double t4825;
  double t5093;
  double t4286;
  double t4731;
  double t4889;
  double t4907;
  double t5111;
  double t5125;
  double t5136;
  double t5153;
  double t5378;
  double t5398;
  double t5547;
  double t5596;
  double t5668;
  double t5669;
  double t5724;
  double t5865;
  double t5921;
  double t5928;
  double t6060;
  double t6084;
  double t6109;
  double t6113;
  double t6161;
  double t6224;
  double t6227;
  double t6231;
  double t6298;
  double t6318;
  double t6335;
  double t6341;
  double t7294;
  double t7490;
  double t7496;
  double t7510;
  double t6716;
  double t6748;
  double t6781;
  double t7332;
  double t7607;
  double t7627;
  double t7850;
  double t7851;
  double t7853;
  double t6535;
  double t6540;
  double t6609;
  double t7906;
  double t7946;
  double t8050;
  double t5314;
  double t5315;
  double t5377;
  t1190 = Cos(var1[4]);
  t4517 = Cos(var1[5]);
  t4689 = Sin(var1[5]);
  t1201 = Sin(var1[3]);
  t2346 = Sin(var1[4]);
  t3928 = -1.*var2[3]*t2346;
  t4208 = var2[5] + t3928;
  t4656 = var2[3]*t1190*t4517;
  t4692 = -1.*var2[4]*t4689;
  t4695 = 0. + t4656 + t4692;
  t4798 = var2[4]*t4517;
  t4803 = var2[3]*t1190*t4689;
  t4825 = 0. + t4798 + t4803;
  t5093 = Cos(var1[3]);
  t4286 = 0.0942*t4208;
  t4731 = 0.015*t4695;
  t4889 = 0.000169*t4825;
  t4907 = t4286 + t4731 + t4889;
  t5111 = 0.015*t4208;
  t5125 = 0.113*t4695;
  t5136 = 0.000516*t4825;
  t5153 = t5111 + t5125 + t5136;
  t5378 = 0.000169*t4208;
  t5398 = 0.000516*t4695;
  t5547 = 0.084*t4825;
  t5596 = t5378 + t5398 + t5547;
  t5668 = t5093*t4517*t2346;
  t5669 = t1201*t4689;
  t5724 = t5668 + t5669;
  t5865 = -1.*t4517*t1201;
  t5921 = t5093*t2346*t4689;
  t5928 = t5865 + t5921;
  t6060 = -0.015*var2[3]*t1190;
  t6084 = -0.113*var2[3]*t4517*t2346;
  t6109 = -0.000516*var2[3]*t2346*t4689;
  t6113 = t6060 + t6084 + t6109;
  t6161 = -0.0942*var2[3]*t1190;
  t6224 = -0.015*var2[3]*t4517*t2346;
  t6227 = -0.000169*var2[3]*t2346*t4689;
  t6231 = t6161 + t6224 + t6227;
  t6298 = -0.000169*var2[3]*t1190;
  t6318 = -0.000516*var2[3]*t4517*t2346;
  t6335 = -0.084*var2[3]*t2346*t4689;
  t6341 = t6298 + t6318 + t6335;
  t7294 = t4656 + t4692;
  t7490 = -1.*var2[4]*t4517;
  t7496 = -1.*var2[3]*t1190*t4689;
  t7510 = t7490 + t7496;
  t6716 = t5093*t4517;
  t6748 = t1201*t2346*t4689;
  t6781 = t6716 + t6748;
  t7332 = 0.084*t7294;
  t7607 = 0.000516*t7510;
  t7627 = t7332 + t7607;
  t7850 = 0.000169*t7294;
  t7851 = 0.015*t7510;
  t7853 = t7850 + t7851;
  t6535 = t4517*t1201*t2346;
  t6540 = -1.*t5093*t4689;
  t6609 = t6535 + t6540;
  t7906 = 0.000516*t7294;
  t7946 = 0.113*t7510;
  t8050 = t7906 + t7946;
  t5314 = -1.*t5093*t4517;
  t5315 = -1.*t1201*t2346*t4689;
  t5377 = t5314 + t5315;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.*t1190*t1201*t4907 + (-1.*t1201*t2346*t4517 + t4689*t5093)*t5153 + t5377*t5596;
  p_output1[10]=t1190*t4907*t5093 + t5153*t5724 + t5596*t5928;
  p_output1[11]=0;
  p_output1[12]=-1.*t2346*t4907*t5093 + t1190*t4517*t5093*t5153 + t1190*t4689*t5093*t5596 + t5724*t6113 + t1190*t5093*t6231 + t5928*t6341;
  p_output1[13]=-1.*t1201*t2346*t4907 + t1190*t1201*t4517*t5153 + t1190*t1201*t4689*t5596 + t1190*t1201*t6231 + t6113*t6609 + t6341*t6781;
  p_output1[14]=-1.*t1190*t4907 - 1.*t2346*t4517*t5153 - 1.*t2346*t4689*t5596 + t1190*t4517*t6113 - 1.*t2346*t6231 + t1190*t4689*t6341;
  p_output1[15]=(t1201*t4517 - 1.*t2346*t4689*t5093)*t5153 + t5596*t5724 + t5928*t7627 + t1190*t5093*t7853 + t5724*t8050;
  p_output1[16]=t5153*t5377 + t5596*t6609 + t6781*t7627 + t1190*t1201*t7853 + t6609*t8050;
  p_output1[17]=-1.*t1190*t4689*t5153 + t1190*t4517*t5596 + t1190*t4689*t7627 - 1.*t2346*t7853 + t1190*t4517*t8050;
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

#include "Jq_AMWorld_Pelvis_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_Pelvis_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
