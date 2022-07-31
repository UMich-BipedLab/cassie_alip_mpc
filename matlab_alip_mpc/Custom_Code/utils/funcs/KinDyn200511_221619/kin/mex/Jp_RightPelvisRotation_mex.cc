/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:20 GMT-04:00
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
  double t1268;
  double t1683;
  double t1693;
  double t1762;
  double t1937;
  double t2275;
  double t2085;
  double t2089;
  double t2316;
  double t2192;
  double t2317;
  double t2341;
  double t2452;
  double t2566;
  double t2571;
  double t673;
  double t1864;
  double t2049;
  double t2069;
  double t2379;
  double t2434;
  double t2437;
  double t2931;
  double t2993;
  double t3020;
  double t3038;
  double t3089;
  double t3147;
  double t4389;
  double t4391;
  double t4393;
  double t3219;
  double t4487;
  double t4534;
  double t4551;
  double t2753;
  double t4410;
  double t3321;
  double t3327;
  double t5288;
  double t5296;
  double t5325;
  double t5333;
  double t5343;
  double t4624;
  double t5388;
  double t5395;
  double t5411;
  double t4718;
  double t5046;
  double t5049;
  double t5069;
  double t5075;
  double t5103;
  double t5116;
  double t5210;
  double t5236;
  t1268 = Sin(var1[3]);
  t1683 = Cos(var1[13]);
  t1693 = -1.*t1683;
  t1762 = 1. + t1693;
  t1937 = Sin(var1[13]);
  t2275 = Cos(var1[3]);
  t2085 = Cos(var1[5]);
  t2089 = Sin(var1[4]);
  t2316 = Sin(var1[5]);
  t2192 = -1.*t2085*t1268*t2089;
  t2317 = t2275*t2316;
  t2341 = t2192 + t2317;
  t2452 = -1.*t2275*t2085;
  t2566 = -1.*t1268*t2089*t2316;
  t2571 = t2452 + t2566;
  t673 = Cos(var1[4]);
  t1864 = 0.07996*t1762;
  t2049 = 0.135*t1937;
  t2069 = 0. + t1864 + t2049;
  t2379 = -0.135*t1762;
  t2434 = 0.07996*t1937;
  t2437 = 0. + t2379 + t2434;
  t2931 = t2275*t2085*t2089;
  t2993 = t1268*t2316;
  t3020 = t2931 + t2993;
  t3038 = -1.*t2085*t1268;
  t3089 = t2275*t2089*t2316;
  t3147 = t3038 + t3089;
  t4389 = t2085*t1268;
  t4391 = -1.*t2275*t2089*t2316;
  t4393 = t4389 + t4391;
  t3219 = t1683*t3020;
  t4487 = t2085*t1268*t2089;
  t4534 = -1.*t2275*t2316;
  t4551 = t4487 + t4534;
  t2753 = t1683*t2571;
  t4410 = -1.*t1937*t3020;
  t3321 = -1.*t1937*t3147;
  t3327 = t3219 + t3321;
  t5288 = 0.135*t1683;
  t5296 = t5288 + t2434;
  t5325 = 0.07996*t1683;
  t5333 = -0.135*t1937;
  t5343 = t5325 + t5333;
  t4624 = -1.*t1937*t4551;
  t5388 = t2275*t2085;
  t5395 = t1268*t2089*t2316;
  t5411 = t5388 + t5395;
  t4718 = t1683*t4551;
  t5046 = -1.*t673*t2085*t1937;
  t5049 = -1.*t1683*t673*t2316;
  t5069 = t5046 + t5049;
  t5075 = 0.09786*t5069;
  t5103 = t1683*t673*t2085;
  t5116 = -1.*t673*t1937*t2316;
  t5210 = t5103 + t5116;
  t5236 = -0.1351*t5210;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2069*t2341 + t2437*t2571 + 0.09786*(t1683*t2341 - 1.*t1937*t2571) - 0.1351*(t1937*t2341 + t2753) + 0.05485*t1268*t673;
  p_output1[10]=t2069*t3020 + t2437*t3147 - 0.1351*(t1937*t3020 + t1683*t3147) + 0.09786*t3327 - 0.05485*t2275*t673;
  p_output1[11]=0;
  p_output1[12]=0.05485*t2089*t2275 + t2069*t2085*t2275*t673 + t2275*t2316*t2437*t673 - 0.1351*(t1937*t2085*t2275*t673 + t1683*t2275*t2316*t673) + 0.09786*(t1683*t2085*t2275*t673 - 1.*t1937*t2275*t2316*t673);
  p_output1[13]=0.05485*t1268*t2089 + t1268*t2069*t2085*t673 + t1268*t2316*t2437*t673 - 0.1351*(t1268*t1937*t2085*t673 + t1268*t1683*t2316*t673) + 0.09786*(t1268*t1683*t2085*t673 - 1.*t1268*t1937*t2316*t673);
  p_output1[14]=-1.*t2069*t2085*t2089 - 0.1351*(-1.*t1937*t2085*t2089 - 1.*t1683*t2089*t2316) + 0.09786*(-1.*t1683*t2085*t2089 + t1937*t2089*t2316) - 1.*t2089*t2316*t2437 + 0.05485*t673;
  p_output1[15]=t2437*t3020 + t2069*t4393 - 0.1351*(t3219 + t1937*t4393) + 0.09786*(t1683*t4393 + t4410);
  p_output1[16]=t2069*t2571 + t2437*t4551 + 0.09786*(t2753 + t4624) - 0.1351*(t1937*t2571 + t4718);
  p_output1[17]=t5075 + t5236 - 1.*t2069*t2316*t673 + t2085*t2437*t673;
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
  p_output1[39]=-0.1351*t3327 + 0.09786*(-1.*t1683*t3147 + t4410) + t3020*t5296 + t3147*t5343;
  p_output1[40]=t4551*t5296 + t5343*t5411 + 0.09786*(t4624 - 1.*t1683*t5411) - 0.1351*(t4718 - 1.*t1937*t5411);
  p_output1[41]=t5075 + t5236 + t2085*t5296*t673 + t2316*t5343*t673;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void Jp_RightPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
