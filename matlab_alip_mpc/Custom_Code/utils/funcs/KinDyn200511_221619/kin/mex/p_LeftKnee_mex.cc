/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:01 GMT-04:00
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
  double t1030;
  double t1342;
  double t244;
  double t1247;
  double t1511;
  double t2158;
  double t2205;
  double t2266;
  double t2331;
  double t2726;
  double t2961;
  double t2977;
  double t1321;
  double t1590;
  double t1764;
  double t4015;
  double t4103;
  double t4152;
  double t4273;
  double t3668;
  double t3675;
  double t3788;
  double t4353;
  double t4978;
  double t5047;
  double t5070;
  double t5145;
  double t4912;
  double t4915;
  double t4918;
  double t5264;
  double t5289;
  double t5292;
  double t5498;
  double t5554;
  double t5618;
  double t5714;
  double t5855;
  double t5941;
  double t5987;
  double t6155;
  double t6291;
  double t6313;
  double t2328;
  double t2386;
  double t2436;
  double t3089;
  double t3128;
  double t3385;
  double t6702;
  double t6739;
  double t6743;
  double t6527;
  double t6558;
  double t6605;
  double t4185;
  double t4274;
  double t4317;
  double t4365;
  double t4585;
  double t4698;
  double t6799;
  double t6860;
  double t6909;
  double t5106;
  double t5158;
  double t5161;
  double t5366;
  double t5381;
  double t5396;
  double t5694;
  double t5715;
  double t5729;
  double t7067;
  double t7117;
  double t7125;
  double t7162;
  double t7187;
  double t7199;
  double t6022;
  double t6042;
  double t6114;
  double t7206;
  double t7215;
  double t7220;
  double t7248;
  double t7250;
  double t7252;
  double t7337;
  double t7347;
  double t7353;
  double t7422;
  double t7426;
  double t7442;
  double t7455;
  double t7460;
  double t7463;
  double t7478;
  double t7486;
  double t7493;
  double t7517;
  double t7519;
  double t7520;
  t1030 = Cos(var1[5]);
  t1342 = Sin(var1[3]);
  t244 = Cos(var1[3]);
  t1247 = Sin(var1[4]);
  t1511 = Sin(var1[5]);
  t2158 = Cos(var1[6]);
  t2205 = -1.*t2158;
  t2266 = 1. + t2205;
  t2331 = Sin(var1[6]);
  t2726 = -1.*t1030*t1342;
  t2961 = t244*t1247*t1511;
  t2977 = t2726 + t2961;
  t1321 = t244*t1030*t1247;
  t1590 = t1342*t1511;
  t1764 = t1321 + t1590;
  t4015 = Cos(var1[7]);
  t4103 = -1.*t4015;
  t4152 = 1. + t4103;
  t4273 = Sin(var1[7]);
  t3668 = t2158*t2977;
  t3675 = t1764*t2331;
  t3788 = t3668 + t3675;
  t4353 = Cos(var1[4]);
  t4978 = Cos(var1[8]);
  t5047 = -1.*t4978;
  t5070 = 1. + t5047;
  t5145 = Sin(var1[8]);
  t4912 = t244*t4353*t4015;
  t4915 = t3788*t4273;
  t4918 = t4912 + t4915;
  t5264 = t2158*t1764;
  t5289 = -1.*t2977*t2331;
  t5292 = t5264 + t5289;
  t5498 = Cos(var1[9]);
  t5554 = -1.*t5498;
  t5618 = 1. + t5554;
  t5714 = Sin(var1[9]);
  t5855 = t4978*t4918;
  t5941 = t5292*t5145;
  t5987 = t5855 + t5941;
  t6155 = t4978*t5292;
  t6291 = -1.*t4918*t5145;
  t6313 = t6155 + t6291;
  t2328 = 0.07996*t2266;
  t2386 = -0.135*t2331;
  t2436 = 0. + t2328 + t2386;
  t3089 = 0.135*t2266;
  t3128 = 0.07996*t2331;
  t3385 = 0. + t3089 + t3128;
  t6702 = t244*t1030;
  t6739 = t1342*t1247*t1511;
  t6743 = t6702 + t6739;
  t6527 = t1030*t1342*t1247;
  t6558 = -1.*t244*t1511;
  t6605 = t6527 + t6558;
  t4185 = 0.135*t4152;
  t4274 = 0.08055*t4273;
  t4317 = 0. + t4185 + t4274;
  t4365 = -0.08055*t4152;
  t4585 = 0.135*t4273;
  t4698 = 0. + t4365 + t4585;
  t6799 = t2158*t6743;
  t6860 = t6605*t2331;
  t6909 = t6799 + t6860;
  t5106 = -0.08055*t5070;
  t5158 = -0.01004*t5145;
  t5161 = 0. + t5106 + t5158;
  t5366 = -0.01004*t5070;
  t5381 = 0.08055*t5145;
  t5396 = 0. + t5366 + t5381;
  t5694 = -0.08055*t5618;
  t5715 = -0.13004*t5714;
  t5729 = 0. + t5694 + t5715;
  t7067 = t4353*t4015*t1342;
  t7117 = t6909*t4273;
  t7125 = t7067 + t7117;
  t7162 = t2158*t6605;
  t7187 = -1.*t6743*t2331;
  t7199 = t7162 + t7187;
  t6022 = -0.13004*t5618;
  t6042 = 0.08055*t5714;
  t6114 = 0. + t6022 + t6042;
  t7206 = t4978*t7125;
  t7215 = t7199*t5145;
  t7220 = t7206 + t7215;
  t7248 = t4978*t7199;
  t7250 = -1.*t7125*t5145;
  t7252 = t7248 + t7250;
  t7337 = t4353*t2158*t1511;
  t7347 = t4353*t1030*t2331;
  t7353 = t7337 + t7347;
  t7422 = -1.*t4015*t1247;
  t7426 = t7353*t4273;
  t7442 = t7422 + t7426;
  t7455 = t4353*t1030*t2158;
  t7460 = -1.*t4353*t1511*t2331;
  t7463 = t7455 + t7460;
  t7478 = t4978*t7442;
  t7486 = t7463*t5145;
  t7493 = t7478 + t7486;
  t7517 = t4978*t7463;
  t7519 = -1.*t7442*t5145;
  t7520 = t7517 + t7519;
  p_output1[0]=0. + t1764*t2436 + t2977*t3385 + t3788*t4317 + 0.1327*(t3788*t4015 - 1.*t244*t4273*t4353) + t244*t4353*t4698 + t4918*t5161 + t5292*t5396 + t5729*t5987 + t6114*t6313 - 0.15304*(-1.*t5714*t5987 + t5498*t6313) - 0.04845*(t5498*t5987 + t5714*t6313) + var1[0];
  p_output1[1]=0. + t1342*t4353*t4698 + t2436*t6605 + t3385*t6743 + t4317*t6909 + 0.1327*(-1.*t1342*t4273*t4353 + t4015*t6909) + t5161*t7125 + t5396*t7199 + t5729*t7220 + t6114*t7252 - 0.15304*(-1.*t5714*t7220 + t5498*t7252) - 0.04845*(t5498*t7220 + t5714*t7252) + var1[1];
  p_output1[2]=0. + t1030*t2436*t4353 + t1511*t3385*t4353 - 1.*t1247*t4698 + t4317*t7353 + 0.1327*(t1247*t4273 + t4015*t7353) + t5161*t7442 + t5396*t7463 + t5729*t7493 + t6114*t7520 - 0.15304*(-1.*t5714*t7493 + t5498*t7520) - 0.04845*(t5498*t7493 + t5714*t7520) + var1[2];
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

#include "p_LeftKnee_mex.hh"

namespace SymExpression
{

void p_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
