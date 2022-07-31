/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:22 GMT-04:00
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
  double t46;
  double t975;
  double t1208;
  double t894;
  double t1536;
  double t1267;
  double t3996;
  double t4004;
  double t1188;
  double t1373;
  double t1408;
  double t1690;
  double t1765;
  double t1826;
  double t2090;
  double t2472;
  double t2509;
  double t3303;
  double t3441;
  double t4312;
  double t4442;
  double t4443;
  double t4582;
  double t4583;
  double t4650;
  double t4678;
  double t4904;
  double t4915;
  double t4931;
  double t5000;
  double t5004;
  double t5011;
  double t5019;
  double t5020;
  double t5039;
  double t5057;
  double t5083;
  double t5112;
  double t5126;
  double t5127;
  double t5148;
  double t5157;
  double t5166;
  double t5174;
  double t5042;
  double t5238;
  double t5257;
  double t5258;
  double t5260;
  double t5262;
  double t5278;
  double t5283;
  double t5285;
  double t5286;
  double t5289;
  double t5305;
  double t5306;
  double t5307;
  double t5321;
  double t5323;
  double t5327;
  double t5334;
  double t5344;
  double t5361;
  double t5363;
  double t5375;
  double t5379;
  double t5390;
  double t5398;
  t46 = Sin(var1[4]);
  t975 = Cos(var1[6]);
  t1208 = Sin(var1[5]);
  t894 = Cos(var1[5]);
  t1536 = Cos(var1[7]);
  t1267 = Sin(var1[6]);
  t3996 = Cos(var1[4]);
  t4004 = Sin(var1[7]);
  t1188 = -1.*t894*t975;
  t1373 = t1208*t1267;
  t1408 = 0. + t1188 + t1373;
  t1690 = -1.*t975*t1536;
  t1765 = 0. + t1690;
  t1826 = t1765*t1208;
  t2090 = -1.*t1536*t1267;
  t2472 = 0. + t2090;
  t2509 = t894*t2472;
  t3303 = 0. + t1826 + t2509;
  t3441 = -1.*t46*t3303;
  t4312 = 0. + t4004;
  t4442 = -1.*t3996*t4312;
  t4443 = t3441 + t4442;
  t4582 = t975*t4004;
  t4583 = 0. + t4582;
  t4650 = t1267*t4004;
  t4678 = 0. + t4650;
  t4904 = t975*t1208;
  t4915 = t894*t1267;
  t4931 = t4904 + t4915;
  t5000 = var2[3]*t3996*t4931;
  t5004 = t894*t975;
  t5011 = -1.*t1208*t1267;
  t5019 = t5004 + t5011;
  t5020 = var2[4]*t5019;
  t5039 = t5000 + t5020;
  t5057 = -1.*t1765*t1208;
  t5083 = -1.*t894*t2472;
  t5112 = t5057 + t5083;
  t5126 = var2[4]*t5112;
  t5127 = t894*t1765;
  t5148 = -1.*t1208*t2472;
  t5157 = t5127 + t5148;
  t5166 = var2[3]*t3996*t5157;
  t5174 = t5126 + t5166;
  t5042 = 0.000842*t5039;
  t5238 = -1.e-6*t5039;
  t5257 = t975*t1536*t1208;
  t5258 = t894*t1536*t1267;
  t5260 = t5257 + t5258;
  t5262 = var2[4]*t5260;
  t5278 = -1.*t894*t975*t1536;
  t5283 = t1536*t1208*t1267;
  t5285 = t5278 + t5283;
  t5286 = var2[3]*t3996*t5285;
  t5289 = t5262 + t5286;
  t5305 = t894*t975*t4004;
  t5306 = -1.*t1208*t1267*t4004;
  t5307 = t5305 + t5306;
  t5321 = var2[5]*t1536;
  t5323 = var2[6]*t1536;
  t5327 = var2[4]*t5307;
  t5334 = -1.*t1536*t46;
  t5344 = t975*t1208*t4004;
  t5361 = t894*t1267*t4004;
  t5363 = t5344 + t5361;
  t5375 = t3996*t5363;
  t5379 = t5334 + t5375;
  t5390 = var2[3]*t5379;
  t5398 = t5321 + t5323 + t5327 + t5390;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=-1.e-6*t4443*var2[3] - 0.000842*t1408*t46*var2[3];
  p_output1[13]=0.00608*(-1.*(0. + t1536)*t3996 - 1.*t46*(0. + t1208*t4583 + t4678*t894))*var2[3];
  p_output1[14]=0.00644*t4443*var2[3] + 1.e-6*t1408*t46*var2[3];
  p_output1[15]=t5042 - 1.e-6*t5174;
  p_output1[16]=0.00608*(t3996*(-1.*t1208*t4678 + t4583*t894)*var2[3] + (-1.*t1208*t4583 - 1.*t4678*t894)*var2[4]);
  p_output1[17]=0.00644*t5174 + t5238;
  p_output1[18]=t5042 - 1.e-6*t5289;
  p_output1[19]=0.00608*(t3996*t5307*var2[3] + (-1.*t1267*t4004*t894 - 1.*t1208*t4004*t975)*var2[4]);
  p_output1[20]=t5238 + 0.00644*t5289;
  p_output1[21]=-1.e-6*t5398;
  p_output1[22]=0.00608*((t4004*t46 + t3996*t5260)*var2[3] + (-1.*t1208*t1267*t1536 + t1536*t894*t975)*var2[4] - 1.*t4004*var2[5] - 1.*t4004*var2[6]);
  p_output1[23]=0.00644*t5398;
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

#include "Jq_AMBody_LeftHip_mex.hh"

namespace SymExpression
{

void Jq_AMBody_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
