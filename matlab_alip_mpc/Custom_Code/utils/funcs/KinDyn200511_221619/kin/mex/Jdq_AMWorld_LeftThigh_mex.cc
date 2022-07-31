/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:58 GMT-04:00
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
  double t522;
  double t165;
  double t565;
  double t323;
  double t602;
  double t991;
  double t78;
  double t69;
  double t867;
  double t1019;
  double t1818;
  double t1947;
  double t2080;
  double t2205;
  double t2216;
  double t2785;
  double t2898;
  double t2961;
  double t2962;
  double t492;
  double t697;
  double t700;
  double t739;
  double t752;
  double t756;
  double t786;
  double t935;
  double t937;
  double t1321;
  double t1380;
  double t1435;
  double t1474;
  double t1484;
  double t1500;
  double t1590;
  double t1598;
  double t1658;
  double t1740;
  double t1764;
  double t1826;
  double t1844;
  double t1853;
  double t2158;
  double t2218;
  double t2219;
  double t2263;
  double t2266;
  double t2319;
  double t2328;
  double t2350;
  double t2386;
  double t2481;
  double t2568;
  double t2726;
  double t2756;
  double t2773;
  double t2946;
  double t2977;
  double t3057;
  double t3069;
  double t3089;
  double t3280;
  double t3327;
  double t3373;
  double t3452;
  double t3549;
  double t3668;
  double t3799;
  double t3800;
  double t4066;
  double t3756;
  double t3772;
  double t3785;
  double t1804;
  double t2725;
  double t3675;
  double t3715;
  double t4791;
  double t4795;
  double t4847;
  double t4863;
  double t4888;
  double t4896;
  double t4912;
  double t4918;
  double t4942;
  double t4185;
  double t4273;
  double t4284;
  double t4332;
  double t5289;
  double t5327;
  double t5348;
  double t5145;
  double t5158;
  double t5161;
  double t4504;
  double t4581;
  double t4584;
  double t4585;
  double t5498;
  double t5554;
  double t5559;
  double t5729;
  double t5775;
  double t5776;
  double t5654;
  double t5694;
  double t5714;
  double t952;
  double t1272;
  double t1303;
  double t3788;
  double t4152;
  double t4157;
  double t6042;
  double t6099;
  double t6108;
  double t6147;
  double t6155;
  double t6165;
  double t6257;
  double t6279;
  double t6313;
  double t4376;
  double t4476;
  double t4491;
  double t4954;
  double t4978;
  double t5070;
  double t6114;
  double t6250;
  double t6345;
  double t6368;
  double t5288;
  double t5361;
  double t5366;
  double t6431;
  double t6432;
  double t6443;
  double t6449;
  double t5382;
  double t5383;
  double t5396;
  double t6478;
  double t6480;
  double t6496;
  double t6516;
  double t5586;
  double t5590;
  double t5614;
  double t5715;
  double t5814;
  double t5835;
  double t5911;
  double t5941;
  double t5987;
  double t6755;
  double t6799;
  double t6806;
  double t6813;
  double t6860;
  double t6909;
  double t6918;
  double t6926;
  double t6982;
  double t7011;
  double t7027;
  double t7040;
  double t6845;
  double t6976;
  double t7043;
  double t7067;
  double t7080;
  double t7117;
  double t7125;
  double t7136;
  double t7162;
  double t7187;
  double t7191;
  double t7199;
  double t7203;
  double t7204;
  double t7206;
  double t7220;
  double t7231;
  double t7242;
  double t7250;
  double t7252;
  double t7255;
  t522 = Cos(var1[3]);
  t165 = Cos(var1[5]);
  t565 = Sin(var1[4]);
  t323 = Sin(var1[3]);
  t602 = Sin(var1[5]);
  t991 = Cos(var1[4]);
  t78 = Cos(var1[6]);
  t69 = Cos(var1[7]);
  t867 = Sin(var1[6]);
  t1019 = Sin(var1[7]);
  t1818 = Cos(var1[8]);
  t1947 = t1818*t1019;
  t2080 = 0. + t1947;
  t2205 = Sin(var1[8]);
  t2216 = 0. + t2205;
  t2785 = -1.*t1818;
  t2898 = 0. + t2785;
  t2961 = t1019*t2205;
  t2962 = 0. + t2961;
  t492 = -1.*t165*t323;
  t697 = t522*t565*t602;
  t700 = t492 + t697;
  t739 = t78*t700;
  t752 = t522*t165*t565;
  t756 = t323*t602;
  t786 = t752 + t756;
  t935 = t786*t867;
  t937 = t739 + t935;
  t1321 = -1.*t78*t69;
  t1380 = 0. + t1321;
  t1435 = t1380*t602;
  t1474 = -1.*t69*t867;
  t1484 = 0. + t1474;
  t1500 = t165*t1484;
  t1590 = 0. + t1435 + t1500;
  t1598 = t991*t1590;
  t1658 = 0. + t1019;
  t1740 = -1.*t565*t1658;
  t1764 = 0. + t1598 + t1740;
  t1826 = t69*t1818;
  t1844 = 0. + t1826;
  t1853 = -1.*t1844*t565;
  t2158 = t867*t2080;
  t2218 = t78*t2216;
  t2219 = 0. + t2158 + t2218;
  t2263 = t165*t2219;
  t2266 = t78*t2080;
  t2319 = -1.*t867*t2216;
  t2328 = 0. + t2266 + t2319;
  t2350 = t602*t2328;
  t2386 = 0. + t2263 + t2350;
  t2481 = t991*t2386;
  t2568 = 0. + t1853 + t2481;
  t2726 = t69*t2205;
  t2756 = 0. + t2726;
  t2773 = -1.*t565*t2756;
  t2946 = -1.*t2898*t867;
  t2977 = t78*t2962;
  t3057 = 0. + t2946 + t2977;
  t3069 = t602*t3057;
  t3089 = t78*t2898;
  t3280 = t867*t2962;
  t3327 = 0. + t3089 + t3280;
  t3373 = t165*t3327;
  t3452 = 0. + t3069 + t3373;
  t3549 = t991*t3452;
  t3668 = 0. + t2773 + t3549;
  t3799 = t78*t786;
  t3800 = -1.*t700*t867;
  t4066 = t3799 + t3800;
  t3756 = t522*t991*t69;
  t3772 = t937*t1019;
  t3785 = t3756 + t3772;
  t1804 = 0.0498*t1764;
  t2725 = -0.000019*t2568;
  t3675 = -0.0117*t3668;
  t3715 = t1804 + t2725 + t3675;
  t4791 = t522*t165;
  t4795 = t323*t565*t602;
  t4847 = t4791 + t4795;
  t4863 = t78*t4847;
  t4888 = t165*t323*t565;
  t4896 = -1.*t522*t602;
  t4912 = t4888 + t4896;
  t4918 = t4912*t867;
  t4942 = t4863 + t4918;
  t4185 = -0.000019*t1764;
  t4273 = 0.0563*t2568;
  t4284 = 0.000284*t3668;
  t4332 = t4185 + t4273 + t4284;
  t5289 = t78*t4912;
  t5327 = -1.*t4847*t867;
  t5348 = t5289 + t5327;
  t5145 = t991*t69*t323;
  t5158 = t4942*t1019;
  t5161 = t5145 + t5158;
  t4504 = -0.0117*t1764;
  t4581 = 0.000284*t2568;
  t4584 = 0.018*t3668;
  t4585 = t4504 + t4581 + t4584;
  t5498 = t991*t78*t602;
  t5554 = t991*t165*t867;
  t5559 = t5498 + t5554;
  t5729 = t991*t165*t78;
  t5775 = -1.*t991*t602*t867;
  t5776 = t5729 + t5775;
  t5654 = -1.*t69*t565;
  t5694 = t5559*t1019;
  t5714 = t5654 + t5694;
  t952 = -1.*t69*t937;
  t1272 = t522*t991*t1019;
  t1303 = t952 + t1272;
  t3788 = t1818*t3785;
  t4152 = t4066*t2205;
  t4157 = t3788 + t4152;
  t6042 = t165*t1380;
  t6099 = -1.*t602*t1484;
  t6108 = 0. + t6042 + t6099;
  t6147 = -1.*t602*t2219;
  t6155 = t165*t2328;
  t6165 = 0. + t6147 + t6155;
  t6257 = t165*t3057;
  t6279 = -1.*t602*t3327;
  t6313 = 0. + t6257 + t6279;
  t4376 = -1.*t1818*t4066;
  t4476 = t3785*t2205;
  t4491 = t4376 + t4476;
  t4954 = -1.*t69*t4942;
  t4978 = t991*t323*t1019;
  t5070 = t4954 + t4978;
  t6114 = 0.0498*t6108;
  t6250 = -0.000019*t6165;
  t6345 = -0.0117*t6313;
  t6368 = t6114 + t6250 + t6345;
  t5288 = t1818*t5161;
  t5361 = t5348*t2205;
  t5366 = t5288 + t5361;
  t6431 = -0.000019*t6108;
  t6432 = 0.0563*t6165;
  t6443 = 0.000284*t6313;
  t6449 = t6431 + t6432 + t6443;
  t5382 = -1.*t1818*t5348;
  t5383 = t5161*t2205;
  t5396 = t5382 + t5383;
  t6478 = -0.0117*t6108;
  t6480 = 0.000284*t6165;
  t6496 = 0.018*t6313;
  t6516 = t6478 + t6480 + t6496;
  t5586 = -1.*t69*t5559;
  t5590 = -1.*t565*t1019;
  t5614 = t5586 + t5590;
  t5715 = t1818*t5714;
  t5814 = t5776*t2205;
  t5835 = t5715 + t5814;
  t5911 = -1.*t1818*t5776;
  t5941 = t5714*t2205;
  t5987 = t5911 + t5941;
  t6755 = -0.000019*t1844;
  t6799 = 0.0498*t1658;
  t6806 = -0.0117*t2756;
  t6813 = t6755 + t6799 + t6806;
  t6860 = 0.0563*t1844;
  t6909 = -0.000019*t1658;
  t6918 = 0.000284*t2756;
  t6926 = t6860 + t6909 + t6918;
  t6982 = 0.000284*t1844;
  t7011 = -0.0117*t1658;
  t7027 = 0.018*t2756;
  t7040 = t6982 + t7011 + t7027;
  t6845 = t1303*t6813;
  t6976 = t4157*t6926;
  t7043 = t4491*t7040;
  t7067 = t6845 + t6976 + t7043;
  t7080 = t5070*t6813;
  t7117 = t5366*t6926;
  t7125 = t5396*t7040;
  t7136 = t7080 + t7117 + t7125;
  t7162 = t5614*t6813;
  t7187 = t5835*t6926;
  t7191 = t5987*t7040;
  t7199 = t7162 + t7187 + t7191;
  t7203 = -0.0117*t2898;
  t7204 = -0.000019*t2216;
  t7206 = t7203 + t7204;
  t7220 = 0.018*t2898;
  t7231 = 0.000284*t2216;
  t7242 = t7220 + t7231;
  t7250 = 0.000284*t2898;
  t7252 = 0.0563*t2216;
  t7255 = t7250 + t7252;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1303*t3715 + t4157*t4332 + t4491*t4585;
  p_output1[10]=t3715*t5070 + t4332*t5366 + t4585*t5396;
  p_output1[11]=t3715*t5614 + t4332*t5835 + t4585*t5987;
  p_output1[12]=t1303*t6368 + t4157*t6449 + t4491*t6516;
  p_output1[13]=t5070*t6368 + t5366*t6449 + t5396*t6516;
  p_output1[14]=t5614*t6368 + t5835*t6449 + t5987*t6516;
  p_output1[15]=t7067;
  p_output1[16]=t7136;
  p_output1[17]=t7199;
  p_output1[18]=t7067;
  p_output1[19]=t7136;
  p_output1[20]=t7199;
  p_output1[21]=t1303*t7206 + t4491*t7242 + t4157*t7255;
  p_output1[22]=t5070*t7206 + t5396*t7242 + t5366*t7255;
  p_output1[23]=t5614*t7206 + t5987*t7242 + t5835*t7255;
  p_output1[24]=0.0498*t1303 - 0.000019*t4157 - 0.0117*t4491;
  p_output1[25]=0.0498*t5070 - 0.000019*t5366 - 0.0117*t5396;
  p_output1[26]=0.0498*t5614 - 0.000019*t5835 - 0.0117*t5987;
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

#include "Jdq_AMWorld_LeftThigh_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
