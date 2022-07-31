/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:51 GMT-04:00
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
  double t221;
  double t624;
  double t717;
  double t649;
  double t1343;
  double t2039;
  double t1818;
  double t1431;
  double t2510;
  double t2583;
  double t2589;
  double t2691;
  double t3902;
  double t4018;
  double t4047;
  double t4752;
  double t4778;
  double t4790;
  double t4854;
  double t3004;
  double t3215;
  double t3329;
  double t5085;
  double t5094;
  double t5102;
  double t2009;
  double t2179;
  double t2231;
  double t5163;
  double t5185;
  double t3349;
  double t3513;
  double t5234;
  double t3604;
  double t3606;
  double t3629;
  double t4195;
  double t5454;
  double t5020;
  double t5022;
  double t5027;
  double t5031;
  double t5034;
  double t5568;
  double t5569;
  double t5570;
  double t5170;
  double t5173;
  double t5215;
  double t5227;
  double t5382;
  double t5390;
  double t5399;
  double t5479;
  double t5334;
  double t5337;
  double t5344;
  double t5542;
  double t5548;
  double t5551;
  double t5458;
  double t5464;
  double t5470;
  double t5509;
  double t5517;
  double t5521;
  double t5588;
  double t5591;
  double t5594;
  double t5730;
  double t5735;
  double t5751;
  double t5769;
  double t5778;
  double t5783;
  double t5784;
  double t5803;
  double t5808;
  double t5737;
  double t5739;
  double t5746;
  double t5750;
  double t5765;
  double t5332;
  double t5359;
  double t5362;
  double t5854;
  double t5856;
  double t5857;
  double t5378;
  double t5400;
  double t5407;
  double t5265;
  double t5274;
  double t5311;
  double t5814;
  double t5817;
  double t5820;
  double t5823;
  double t5825;
  double t5924;
  double t5495;
  double t5526;
  double t5536;
  double t5902;
  double t5903;
  double t5905;
  double t5907;
  double t5908;
  double t5478;
  double t5480;
  double t6002;
  double t6003;
  double t6004;
  double t6009;
  double t6010;
  double t6011;
  double t6012;
  double t5575;
  double t5577;
  double t5578;
  double t5585;
  double t5597;
  double t5608;
  t221 = Cos(var1[3]);
  t624 = Cos(var1[4]);
  t717 = Cos(var1[6]);
  t649 = Cos(var1[5]);
  t1343 = Sin(var1[5]);
  t2039 = Sin(var1[4]);
  t1818 = Sin(var1[3]);
  t1431 = Sin(var1[6]);
  t2510 = t221*t649*t2039;
  t2583 = t1818*t1343;
  t2589 = t2510 + t2583;
  t2691 = t2589*t1431;
  t3902 = -1.*t221*t649;
  t4018 = -1.*t1818*t2039*t1343;
  t4047 = t3902 + t4018;
  t4752 = t649*t1818*t2039;
  t4778 = -1.*t221*t1343;
  t4790 = t4752 + t4778;
  t4854 = t4790*t1431;
  t3004 = -1.*t649*t1818;
  t3215 = t221*t2039*t1343;
  t3329 = t3004 + t3215;
  t5085 = t624*t717*t1343;
  t5094 = t624*t649*t1431;
  t5102 = t5085 + t5094;
  t2009 = t649*t1818;
  t2179 = -1.*t221*t2039*t1343;
  t2231 = t2009 + t2179;
  t5163 = t717*t2589;
  t5185 = Sin(var1[7]);
  t3349 = t717*t3329;
  t3513 = t3349 + t2691;
  t5234 = Cos(var1[7]);
  t3604 = -1.*t649*t1818*t2039;
  t3606 = t221*t1343;
  t3629 = t3604 + t3606;
  t4195 = t4047*t1431;
  t5454 = t717*t4790;
  t5020 = t221*t649;
  t5022 = t1818*t2039*t1343;
  t5027 = t5020 + t5022;
  t5031 = t717*t5027;
  t5034 = t5031 + t4854;
  t5568 = t624*t649*t717;
  t5569 = -1.*t624*t1343*t1431;
  t5570 = t5568 + t5569;
  t5170 = t2231*t1431;
  t5173 = t5163 + t5170;
  t5215 = -1.*t3329*t1431;
  t5227 = t5163 + t5215;
  t5382 = t717*t4047;
  t5390 = t3629*t1431;
  t5399 = t5382 + t5390;
  t5479 = -1.*t624*t1818*t5185;
  t5334 = t221*t624*t717*t1343;
  t5337 = t221*t624*t649*t1431;
  t5344 = t5334 + t5337;
  t5542 = t221*t624*t5234;
  t5548 = t3513*t5185;
  t5551 = t5542 + t5548;
  t5458 = t5454 + t4195;
  t5464 = -1.*t5027*t1431;
  t5470 = t5454 + t5464;
  t5509 = t624*t717*t1818*t1343;
  t5517 = t624*t649*t1818*t1431;
  t5521 = t5509 + t5517;
  t5588 = -1.*t717*t2039*t1343;
  t5591 = -1.*t649*t2039*t1431;
  t5594 = t5588 + t5591;
  t5730 = -1.*t717;
  t5735 = 1. + t5730;
  t5751 = 0.07996*t1431;
  t5769 = -1.*t2589*t1431;
  t5778 = -1.*t5234;
  t5783 = 1. + t5778;
  t5784 = 0.135*t5783;
  t5803 = 0.08055*t5185;
  t5808 = 0. + t5784 + t5803;
  t5737 = 0.07996*t5735;
  t5739 = -0.135*t1431;
  t5746 = 0. + t5737 + t5739;
  t5750 = 0.135*t5735;
  t5765 = 0. + t5750 + t5751;
  t5332 = -1.*t221*t5234*t2039;
  t5359 = t5344*t5185;
  t5362 = t5332 + t5359;
  t5854 = -0.08055*t5783;
  t5856 = 0.135*t5185;
  t5857 = 0. + t5854 + t5856;
  t5378 = -1.*t624*t5234*t1818;
  t5400 = t5399*t5185;
  t5407 = t5378 + t5400;
  t5265 = t5234*t3513;
  t5274 = -1.*t221*t624*t5185;
  t5311 = t5265 + t5274;
  t5814 = -0.135*t717;
  t5817 = t5814 + t5751;
  t5820 = 0.07996*t717;
  t5823 = 0.135*t1431;
  t5825 = t5820 + t5823;
  t5924 = -1.*t4790*t1431;
  t5495 = -1.*t5234*t1818*t2039;
  t5526 = t5521*t5185;
  t5536 = t5495 + t5526;
  t5902 = 0.135*t5234;
  t5903 = -0.08055*t5185;
  t5905 = t5902 + t5903;
  t5907 = 0.08055*t5234;
  t5908 = t5907 + t5856;
  t5478 = t5234*t5034;
  t5480 = t5478 + t5479;
  t6002 = -1.*t624*t717*t1343;
  t6003 = -1.*t624*t649*t1431;
  t6004 = t6002 + t6003;
  t6009 = -0.01004*t6004;
  t6010 = 0.135*t5234*t5570;
  t6011 = t5570*t5808;
  t6012 = -0.08055*t5570*t5185;
  t5575 = t5234*t5102;
  t5577 = t2039*t5185;
  t5578 = t5575 + t5577;
  t5585 = -1.*t624*t5234;
  t5597 = t5594*t5185;
  t5608 = t5585 + t5597;
  p_output1[0]=(t4195 - 1.*t3629*t717)*var2[3] + (t1343*t1431*t221*t624 - 1.*t221*t624*t649*t717)*var2[4] + (t2691 - 1.*t2231*t717)*var2[5] + t3513*var2[6];
  p_output1[1]=(t1431*t3329 - 1.*t2589*t717)*var2[3] + (t1343*t1431*t1818*t624 - 1.*t1818*t624*t649*t717)*var2[4] + (t4854 - 1.*t4047*t717)*var2[5] + t5034*var2[6];
  p_output1[2]=(-1.*t1343*t1431*t2039 + t2039*t649*t717)*var2[4] + t5102*var2[5] + t5102*var2[6];
  p_output1[3]=0;
  p_output1[4]=t5407*var2[3] + t5362*var2[4] + t5173*t5185*var2[5] + t5185*t5227*var2[6] + t5311*var2[7];
  p_output1[5]=t5551*var2[3] + t5536*var2[4] + t5185*t5458*var2[5] + t5185*t5470*var2[6] + t5480*var2[7];
  p_output1[6]=t5608*var2[4] + t5185*t5570*var2[5] + t5185*t5570*var2[6] + t5578*var2[7];
  p_output1[7]=0;
  p_output1[8]=(-1.*t5234*t5399 + t5479)*var2[3] + (-1.*t2039*t221*t5185 - 1.*t5234*t5344)*var2[4] - 1.*t5173*t5234*var2[5] - 1.*t5227*t5234*var2[6] + t5551*var2[7];
  p_output1[9]=(-1.*t3513*t5234 + t221*t5185*t624)*var2[3] + (-1.*t1818*t2039*t5185 - 1.*t5234*t5521)*var2[4] - 1.*t5234*t5458*var2[5] - 1.*t5234*t5470*var2[6] + (t5034*t5185 + t1818*t5234*t624)*var2[7];
  p_output1[10]=(-1.*t5234*t5594 - 1.*t5185*t624)*var2[4] - 1.*t5234*t5570*var2[5] - 1.*t5234*t5570*var2[6] + (t5102*t5185 - 1.*t2039*t5234)*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t5407 + t3629*t5746 + t4047*t5765 + t5399*t5808 - 1.*t1818*t5857*t624 + 0.135*(t5234*t5399 + t1818*t5185*t624) - 0.01004*(-1.*t1431*t4047 + t3629*t717))*var2[3] + (0.135*(t2039*t221*t5185 + t5234*t5344) - 0.08055*t5362 + t5344*t5808 - 1.*t2039*t221*t5857 + t1343*t221*t5765*t624 + t221*t5746*t624*t649 - 0.01004*(-1.*t1343*t1431*t221*t624 + t221*t624*t649*t717))*var2[4] + (-0.08055*t5173*t5185 + 0.135*t5173*t5234 + t2231*t5746 + t2589*t5765 + t5173*t5808 - 0.01004*(t5769 + t2231*t717))*var2[5] + (-0.08055*t5185*t5227 + 0.135*t5227*t5234 + t5227*t5808 + t2589*t5817 + t3329*t5825 - 0.01004*(t5769 - 1.*t3329*t717))*var2[6] + (-0.08055*t5311 + t3513*t5908 + t221*t5905*t624 + 0.135*(-1.*t3513*t5185 - 1.*t221*t5234*t624))*var2[7];
  p_output1[13]=var2[1] + (-0.01004*t5227 + 0.135*t5311 - 0.08055*t5551 + t2589*t5746 + t3329*t5765 + t3513*t5808 + t221*t5857*t624)*var2[3] + (0.135*(t1818*t2039*t5185 + t5234*t5521) - 0.08055*t5536 + t5521*t5808 - 1.*t1818*t2039*t5857 + t1343*t1818*t5765*t624 + t1818*t5746*t624*t649 - 0.01004*(-1.*t1343*t1431*t1818*t624 + t1818*t624*t649*t717))*var2[4] + (-0.08055*t5185*t5458 + 0.135*t5234*t5458 + t4047*t5746 + t4790*t5765 + t5458*t5808 - 0.01004*(t5382 + t5924))*var2[5] + (-0.08055*t5185*t5470 + 0.135*t5234*t5470 + t5470*t5808 + t4790*t5817 + t5027*t5825 - 0.01004*(t5924 - 1.*t5027*t717))*var2[6] + (0.135*(-1.*t5034*t5185 + t5378) - 0.08055*t5480 + t5034*t5908 + t1818*t5905*t624)*var2[7];
  p_output1[14]=var2[2] + (-0.08055*t5608 - 1.*t1343*t2039*t5765 + t5594*t5808 - 1.*t5857*t624 + 0.135*(t5234*t5594 + t5185*t624) - 1.*t2039*t5746*t649 - 0.01004*(t1343*t1431*t2039 - 1.*t2039*t649*t717))*var2[4] + (t6009 + t6010 + t6011 + t6012 - 1.*t1343*t5746*t624 + t5765*t624*t649)*var2[5] + (t6009 + t6010 + t6011 + t6012 + t1343*t5825*t624 + t5817*t624*t649)*var2[6] + (0.135*(-1.*t5102*t5185 + t2039*t5234) - 0.08055*t5578 - 1.*t2039*t5905 + t5102*t5908)*var2[7];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void dT_LeftRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
