/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:42 GMT-04:00
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
  double t1345;
  double t1004;
  double t1034;
  double t1060;
  double t1543;
  double t3098;
  double t132;
  double t2437;
  double t3446;
  double t3453;
  double t3812;
  double t3977;
  double t2656;
  double t6102;
  double t6175;
  double t6364;
  double t6464;
  double t782;
  double t1008;
  double t1847;
  double t2293;
  double t2381;
  double t2533;
  double t2544;
  double t2660;
  double t2749;
  double t2761;
  double t2972;
  double t3164;
  double t3299;
  double t3414;
  double t3520;
  double t4100;
  double t4283;
  double t4403;
  double t4423;
  double t4460;
  double t4542;
  double t4625;
  double t4751;
  double t4804;
  double t5016;
  double t5295;
  double t5349;
  double t6080;
  double t6177;
  double t6546;
  double t6925;
  double t6973;
  double t7000;
  double t7019;
  double t7021;
  double t7031;
  double t7054;
  double t7063;
  double t7082;
  double t7161;
  double t7162;
  double t7165;
  double t7184;
  double t7196;
  double t7204;
  double t7208;
  double t7218;
  double t7219;
  double t7265;
  double t7269;
  double t7272;
  double t7277;
  double t7282;
  double t7283;
  double t7288;
  double t7300;
  double t7312;
  double t7313;
  double t7315;
  double t7318;
  t1345 = Cos(var1[14]);
  t1004 = Sin(var1[4]);
  t1034 = Cos(var1[4]);
  t1060 = Cos(var1[5]);
  t1543 = Sin(var1[13]);
  t3098 = Cos(var1[15]);
  t132 = Sin(var1[14]);
  t2437 = Cos(var1[13]);
  t3446 = t3098*t132;
  t3453 = 0. + t3446;
  t3812 = Sin(var1[15]);
  t3977 = 0. + t3812;
  t2656 = Sin(var1[5]);
  t6102 = -1.*t3098;
  t6175 = 0. + t6102;
  t6364 = t132*t3812;
  t6464 = 0. + t6364;
  t782 = 0. + t132;
  t1008 = -1.*t782*t1004;
  t1847 = -1.*t1345*t1543;
  t2293 = 0. + t1847;
  t2381 = t1060*t2293;
  t2533 = -1.*t2437*t1345;
  t2544 = 0. + t2533;
  t2660 = t2544*t2656;
  t2749 = 0. + t2381 + t2660;
  t2761 = t1034*t2749;
  t2972 = 0. + t1008 + t2761;
  t3164 = t1345*t3098;
  t3299 = 0. + t3164;
  t3414 = -1.*t3299*t1004;
  t3520 = t1543*t3453;
  t4100 = t2437*t3977;
  t4283 = 0. + t3520 + t4100;
  t4403 = t1060*t4283;
  t4423 = t2437*t3453;
  t4460 = -1.*t1543*t3977;
  t4542 = 0. + t4423 + t4460;
  t4625 = t4542*t2656;
  t4751 = 0. + t4403 + t4625;
  t4804 = t1034*t4751;
  t5016 = 0. + t3414 + t4804;
  t5295 = t1345*t3812;
  t5349 = 0. + t5295;
  t6080 = -1.*t5349*t1004;
  t6177 = t2437*t6175;
  t6546 = t1543*t6464;
  t6925 = 0. + t6177 + t6546;
  t6973 = t1060*t6925;
  t7000 = -1.*t6175*t1543;
  t7019 = t2437*t6464;
  t7021 = 0. + t7000 + t7019;
  t7031 = t7021*t2656;
  t7054 = 0. + t6973 + t7031;
  t7063 = t1034*t7054;
  t7082 = 0. + t6080 + t7063;
  t7161 = t2544*t1060;
  t7162 = -1.*t2293*t2656;
  t7165 = 0. + t7161 + t7162;
  t7184 = t1060*t4542;
  t7196 = -1.*t4283*t2656;
  t7204 = 0. + t7184 + t7196;
  t7208 = t1060*t7021;
  t7218 = -1.*t6925*t2656;
  t7219 = 0. + t7208 + t7218;
  t7265 = 0.000284*t3299;
  t7269 = 0.0117*t782;
  t7272 = 0.018*t5349;
  t7277 = t7265 + t7269 + t7272;
  t7282 = 0.0563*t3299;
  t7283 = 0.000019*t782;
  t7288 = 0.000284*t5349;
  t7300 = t7282 + t7283 + t7288;
  t7312 = 0.000019*t3299;
  t7313 = 0.0498*t782;
  t7315 = 0.0117*t5349;
  t7318 = t7312 + t7313 + t7315;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.0117*t2972 + 0.000284*t5016 + 0.018*t7082;
  p_output1[10]=0.000019*t2972 + 0.0563*t5016 + 0.000284*t7082;
  p_output1[11]=0.0498*t2972 + 0.000019*t5016 + 0.0117*t7082;
  p_output1[12]=0.0117*t7165 + 0.000284*t7204 + 0.018*t7219;
  p_output1[13]=0.000019*t7165 + 0.0563*t7204 + 0.000284*t7219;
  p_output1[14]=0.0498*t7165 + 0.000019*t7204 + 0.0117*t7219;
  p_output1[15]=t7277;
  p_output1[16]=t7300;
  p_output1[17]=t7318;
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
  p_output1[39]=t7277;
  p_output1[40]=t7300;
  p_output1[41]=t7318;
  p_output1[42]=0.000284*t3977 + 0.018*t6175;
  p_output1[43]=0.0563*t3977 + 0.000284*t6175;
  p_output1[44]=0.000019*t3977 + 0.0117*t6175;
  p_output1[45]=0.0117;
  p_output1[46]=0.000019;
  p_output1[47]=0.0498;
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

#include "Jdq_AMBody_RightThigh_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
