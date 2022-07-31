/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:07 GMT-04:00
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
  double t84;
  double t140;
  double t31;
  double t135;
  double t145;
  double t15;
  double t167;
  double t180;
  double t181;
  double t138;
  double t155;
  double t162;
  double t183;
  double t8;
  double t218;
  double t230;
  double t385;
  double t425;
  double t452;
  double t301;
  double t311;
  double t321;
  double t248;
  double t283;
  double t236;
  double t238;
  double t240;
  double t246;
  double t255;
  double t275;
  double t166;
  double t192;
  double t196;
  double t502;
  double t504;
  double t521;
  double t526;
  double t532;
  double t548;
  double t328;
  double t459;
  double t488;
  double t700;
  double t706;
  double t714;
  double t728;
  double t748;
  double t754;
  double t576;
  double t591;
  double t650;
  double t1106;
  double t1115;
  double t1222;
  double t1228;
  double t1365;
  double t1367;
  double t786;
  double t798;
  double t804;
  double t1123;
  double t1137;
  double t1147;
  double t1163;
  double t1181;
  double t1188;
  double t1248;
  double t1252;
  double t1255;
  double t1283;
  double t1302;
  double t1314;
  double t1381;
  double t1403;
  double t1410;
  double t1451;
  double t1462;
  double t1472;
  double t818;
  double t826;
  double t832;
  double t844;
  double t846;
  double t875;
  t84 = Cos(var1[5]);
  t140 = Sin(var1[3]);
  t31 = Cos(var1[3]);
  t135 = Sin(var1[4]);
  t145 = Sin(var1[5]);
  t15 = Cos(var1[6]);
  t167 = -1.*t84*t140;
  t180 = t31*t135*t145;
  t181 = t167 + t180;
  t138 = t31*t84*t135;
  t155 = t140*t145;
  t162 = t138 + t155;
  t183 = Sin(var1[6]);
  t8 = Cos(var1[8]);
  t218 = Cos(var1[4]);
  t230 = Cos(var1[7]);
  t385 = t31*t84;
  t425 = t140*t135*t145;
  t452 = t385 + t425;
  t301 = t84*t140*t135;
  t311 = -1.*t31*t145;
  t321 = t301 + t311;
  t248 = Sin(var1[7]);
  t283 = Sin(var1[8]);
  t236 = t31*t218*t230;
  t238 = t15*t181;
  t240 = t162*t183;
  t246 = t238 + t240;
  t255 = t246*t248;
  t275 = t236 + t255;
  t166 = t15*t162;
  t192 = -1.*t181*t183;
  t196 = t166 + t192;
  t502 = t218*t230*t140;
  t504 = t15*t452;
  t521 = t321*t183;
  t526 = t504 + t521;
  t532 = t526*t248;
  t548 = t502 + t532;
  t328 = t15*t321;
  t459 = -1.*t452*t183;
  t488 = t328 + t459;
  t700 = -1.*t230*t135;
  t706 = t218*t15*t145;
  t714 = t218*t84*t183;
  t728 = t706 + t714;
  t748 = t728*t248;
  t754 = t700 + t748;
  t576 = t218*t84*t15;
  t591 = -1.*t218*t145*t183;
  t650 = t576 + t591;
  t1106 = -1.*t15;
  t1115 = 1. + t1106;
  t1222 = -1.*t230;
  t1228 = 1. + t1222;
  t1365 = -1.*t8;
  t1367 = 1. + t1365;
  t786 = t8*t275;
  t798 = t196*t283;
  t804 = t786 + t798;
  t1123 = 0.07996*t1115;
  t1137 = -0.135*t183;
  t1147 = 0. + t1123 + t1137;
  t1163 = 0.135*t1115;
  t1181 = 0.07996*t183;
  t1188 = 0. + t1163 + t1181;
  t1248 = 0.135*t1228;
  t1252 = 0.08055*t248;
  t1255 = 0. + t1248 + t1252;
  t1283 = -0.08055*t1228;
  t1302 = 0.135*t248;
  t1314 = 0. + t1283 + t1302;
  t1381 = -0.08055*t1367;
  t1403 = -0.01004*t283;
  t1410 = 0. + t1381 + t1403;
  t1451 = -0.01004*t1367;
  t1462 = 0.08055*t283;
  t1472 = 0. + t1451 + t1462;
  t818 = t8*t548;
  t826 = t488*t283;
  t832 = t818 + t826;
  t844 = t8*t754;
  t846 = t650*t283;
  t875 = t844 + t846;
  p_output1[0]=t275*t283 - 1.*t196*t8;
  p_output1[1]=t283*t548 - 1.*t488*t8;
  p_output1[2]=t283*t754 - 1.*t650*t8;
  p_output1[3]=0.;
  p_output1[4]=t804;
  p_output1[5]=t832;
  p_output1[6]=t875;
  p_output1[7]=0.;
  p_output1[8]=-1.*t230*t246 + t218*t248*t31;
  p_output1[9]=t140*t218*t248 - 1.*t230*t526;
  p_output1[10]=-1.*t135*t248 - 1.*t230*t728;
  p_output1[11]=0.;
  p_output1[12]=0. + t1147*t162 + t1188*t181 + t1472*t196 + t1255*t246 + t1410*t275 + t1314*t218*t31 + 0.135*(t230*t246 - 1.*t218*t248*t31) - 0.01004*(-1.*t275*t283 + t196*t8) - 0.08055*t804 + var1[0];
  p_output1[13]=0. + t1314*t140*t218 + t1147*t321 + t1188*t452 + t1472*t488 + t1255*t526 + 0.135*(-1.*t140*t218*t248 + t230*t526) + t1410*t548 - 0.01004*(-1.*t283*t548 + t488*t8) - 0.08055*t832 + var1[1];
  p_output1[14]=0. - 1.*t1314*t135 + t1188*t145*t218 + t1472*t650 + t1255*t728 + 0.135*(t135*t248 + t230*t728) + t1410*t754 - 0.01004*(-1.*t283*t754 + t650*t8) + t1147*t218*t84 - 0.08055*t875 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_LeftThighJoint_mex.hh"

namespace SymExpression
{

void T_LeftThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
