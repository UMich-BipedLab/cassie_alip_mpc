/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:00 GMT-04:00
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
  double t510;
  double t64;
  double t526;
  double t362;
  double t566;
  double t1209;
  double t37;
  double t27;
  double t1339;
  double t1357;
  double t988;
  double t1224;
  double t468;
  double t688;
  double t717;
  double t774;
  double t842;
  double t899;
  double t970;
  double t1023;
  double t1069;
  double t1722;
  double t1884;
  double t1940;
  double t1964;
  double t1731;
  double t1792;
  double t1800;
  double t1965;
  double t2172;
  double t1849;
  double t1967;
  double t2079;
  double t1714;
  double t2203;
  double t2241;
  double t2266;
  double t2374;
  double t1685;
  double t2728;
  double t2747;
  double t2780;
  double t2653;
  double t2671;
  double t2699;
  double t2727;
  double t2789;
  double t2828;
  double t2914;
  double t2971;
  double t2979;
  double t3011;
  double t3032;
  double t3369;
  double t3429;
  double t3433;
  double t3531;
  double t3555;
  double t3788;
  double t3800;
  double t3948;
  double t3983;
  double t3987;
  double t2163;
  double t2267;
  double t2268;
  double t2445;
  double t2495;
  double t2539;
  double t2843;
  double t2849;
  double t2889;
  double t2998;
  double t3052;
  double t3073;
  double t3168;
  double t3169;
  double t3199;
  double t3213;
  double t3239;
  double t3270;
  double t3302;
  double t3350;
  double t3575;
  double t3727;
  double t3756;
  double t3978;
  double t3996;
  double t4071;
  double t4100;
  double t4140;
  double t4158;
  double t4159;
  double t4203;
  double t4223;
  double t4226;
  double t4249;
  double t1418;
  double t1434;
  double t1452;
  double t1462;
  double t1479;
  double t1482;
  double t1499;
  double t1517;
  double t1521;
  double t1551;
  double t1598;
  double t4592;
  double t4607;
  double t4610;
  double t4614;
  double t4622;
  double t4625;
  double t4678;
  double t4682;
  double t4709;
  double t4893;
  double t4940;
  double t5004;
  double t4801;
  double t4833;
  double t4842;
  double t4860;
  double t5040;
  double t5110;
  double t5181;
  double t5250;
  double t5256;
  double t3356;
  double t4256;
  double t4257;
  double t5146;
  double t5294;
  double t5325;
  double t5350;
  double t5357;
  double t5473;
  double t4327;
  double t4407;
  double t4519;
  double t5837;
  double t5853;
  double t5897;
  double t6032;
  double t6033;
  double t6059;
  double t5952;
  double t5958;
  double t5963;
  double t5970;
  double t6061;
  double t6062;
  double t6070;
  double t6073;
  double t6074;
  double t6063;
  double t6083;
  double t6108;
  double t6141;
  double t6162;
  double t6176;
  double t1086;
  double t1225;
  double t1329;
  double t2312;
  double t2613;
  double t2620;
  double t4286;
  double t4291;
  double t4301;
  double t6504;
  double t6587;
  double t6648;
  double t6709;
  double t6759;
  double t6771;
  double t6276;
  double t6281;
  double t6366;
  double t4710;
  double t4718;
  double t4760;
  double t5327;
  double t5562;
  double t5606;
  double t6685;
  double t6774;
  double t6802;
  double t5716;
  double t5723;
  double t5725;
  double t6891;
  double t6924;
  double t7001;
  double t5898;
  double t5911;
  double t5924;
  double t6138;
  double t6193;
  double t6195;
  double t6213;
  double t6229;
  double t6241;
  double t7141;
  double t7154;
  double t7165;
  double t7208;
  double t7216;
  double t7226;
  double t7137;
  double t7173;
  double t7229;
  double t7248;
  double t7261;
  double t7268;
  double t7276;
  double t7278;
  double t7285;
  double t7287;
  double t7303;
  double t7332;
  double t7338;
  double t7344;
  double t7349;
  double t7367;
  double t7371;
  double t7379;
  double t7436;
  double t7438;
  double t7441;
  t510 = Cos(var1[3]);
  t64 = Cos(var1[5]);
  t526 = Sin(var1[4]);
  t362 = Sin(var1[3]);
  t566 = Sin(var1[5]);
  t1209 = Cos(var1[4]);
  t37 = Cos(var1[6]);
  t27 = Cos(var1[7]);
  t1339 = -1.*t27;
  t1357 = 0. + t1339;
  t988 = Sin(var1[6]);
  t1224 = Sin(var1[7]);
  t468 = -1.*t64*t362;
  t688 = t510*t526*t566;
  t717 = t468 + t688;
  t774 = t37*t717;
  t842 = t510*t64*t526;
  t899 = t362*t566;
  t970 = t842 + t899;
  t1023 = t970*t988;
  t1069 = t774 + t1023;
  t1722 = Cos(var1[8]);
  t1884 = t37*t970;
  t1940 = -1.*t717*t988;
  t1964 = t1884 + t1940;
  t1731 = t510*t1209*t27;
  t1792 = t1069*t1224;
  t1800 = t1731 + t1792;
  t1965 = Sin(var1[8]);
  t2172 = Cos(var1[9]);
  t1849 = t1722*t1800;
  t1967 = t1964*t1965;
  t2079 = t1849 + t1967;
  t1714 = Sin(var1[9]);
  t2203 = t1722*t1964;
  t2241 = -1.*t1800*t1965;
  t2266 = t2203 + t2241;
  t2374 = Cos(var1[10]);
  t1685 = Sin(var1[10]);
  t2728 = t2374*t1714;
  t2747 = t2172*t1685;
  t2780 = 0. + t2728 + t2747;
  t2653 = t2172*t2374;
  t2671 = -1.*t1714*t1685;
  t2699 = 0. + t2653 + t2671;
  t2727 = t1722*t2699;
  t2789 = -1.*t2780*t1965;
  t2828 = 0. + t2727 + t2789;
  t2914 = t1722*t2780;
  t2971 = t2699*t1965;
  t2979 = 0. + t2914 + t2971;
  t3011 = t1224*t2828;
  t3032 = 0. + t3011;
  t3369 = -1.*t2172*t2374;
  t3429 = t1714*t1685;
  t3433 = 0. + t3369 + t3429;
  t3531 = -1.*t3433*t1965;
  t3555 = 0. + t2914 + t3531;
  t3788 = t1722*t3433;
  t3800 = t2780*t1965;
  t3948 = 0. + t3788 + t3800;
  t3983 = t1224*t3555;
  t3987 = 0. + t3983;
  t2163 = -1.*t1714*t2079;
  t2267 = t2172*t2266;
  t2268 = t2163 + t2267;
  t2445 = t2172*t2079;
  t2495 = t1714*t2266;
  t2539 = t2445 + t2495;
  t2843 = t27*t2828;
  t2849 = 0. + t2843;
  t2889 = -1.*t526*t2849;
  t2998 = -1.*t988*t2979;
  t3052 = t37*t3032;
  t3073 = 0. + t2998 + t3052;
  t3168 = t566*t3073;
  t3169 = t37*t2979;
  t3199 = t988*t3032;
  t3213 = 0. + t3169 + t3199;
  t3239 = t64*t3213;
  t3270 = 0. + t3168 + t3239;
  t3302 = t1209*t3270;
  t3350 = 0. + t2889 + t3302;
  t3575 = t27*t3555;
  t3727 = 0. + t3575;
  t3756 = -1.*t526*t3727;
  t3978 = -1.*t988*t3948;
  t3996 = t37*t3987;
  t4071 = 0. + t3978 + t3996;
  t4100 = t566*t4071;
  t4140 = t37*t3948;
  t4158 = t988*t3987;
  t4159 = 0. + t4140 + t4158;
  t4203 = t64*t4159;
  t4223 = 0. + t4100 + t4203;
  t4226 = t1209*t4223;
  t4249 = 0. + t3756 + t4226;
  t1418 = t37*t1357;
  t1434 = 0. + t1418;
  t1452 = t1434*t566;
  t1462 = t1357*t988;
  t1479 = 0. + t1462;
  t1482 = t64*t1479;
  t1499 = 0. + t1452 + t1482;
  t1517 = t1209*t1499;
  t1521 = 0. + t1224;
  t1551 = -1.*t526*t1521;
  t1598 = 0. + t1517 + t1551;
  t4592 = t510*t64;
  t4607 = t362*t526*t566;
  t4610 = t4592 + t4607;
  t4614 = t37*t4610;
  t4622 = t64*t362*t526;
  t4625 = -1.*t510*t566;
  t4678 = t4622 + t4625;
  t4682 = t4678*t988;
  t4709 = t4614 + t4682;
  t4893 = t37*t4678;
  t4940 = -1.*t4610*t988;
  t5004 = t4893 + t4940;
  t4801 = t1209*t27*t362;
  t4833 = t4709*t1224;
  t4842 = t4801 + t4833;
  t4860 = t1722*t4842;
  t5040 = t5004*t1965;
  t5110 = t4860 + t5040;
  t5181 = t1722*t5004;
  t5250 = -1.*t4842*t1965;
  t5256 = t5181 + t5250;
  t3356 = 0.0341*t3350;
  t4256 = 0.000334*t4249;
  t4257 = t3356 + t4256;
  t5146 = -1.*t1714*t5110;
  t5294 = t2172*t5256;
  t5325 = t5146 + t5294;
  t5350 = t2172*t5110;
  t5357 = t1714*t5256;
  t5473 = t5350 + t5357;
  t4327 = 0.000334*t3350;
  t4407 = 0.00036*t4249;
  t4519 = t4327 + t4407;
  t5837 = t1209*t37*t566;
  t5853 = t1209*t64*t988;
  t5897 = t5837 + t5853;
  t6032 = t1209*t64*t37;
  t6033 = -1.*t1209*t566*t988;
  t6059 = t6032 + t6033;
  t5952 = -1.*t27*t526;
  t5958 = t5897*t1224;
  t5963 = t5952 + t5958;
  t5970 = t1722*t5963;
  t6061 = t6059*t1965;
  t6062 = t5970 + t6061;
  t6070 = t1722*t6059;
  t6073 = -1.*t5963*t1965;
  t6074 = t6070 + t6073;
  t6063 = -1.*t1714*t6062;
  t6083 = t2172*t6074;
  t6108 = t6063 + t6083;
  t6141 = t2172*t6062;
  t6162 = t1714*t6074;
  t6176 = t6141 + t6162;
  t1086 = -1.*t27*t1069;
  t1225 = t510*t1209*t1224;
  t1329 = t1086 + t1225;
  t2312 = t1685*t2268;
  t2613 = t2374*t2539;
  t2620 = t2312 + t2613;
  t4286 = -1.*t2374*t2268;
  t4291 = t1685*t2539;
  t4301 = t4286 + t4291;
  t6504 = t64*t3073;
  t6587 = -1.*t566*t3213;
  t6648 = 0. + t6504 + t6587;
  t6709 = t64*t4071;
  t6759 = -1.*t566*t4159;
  t6771 = 0. + t6709 + t6759;
  t6276 = t64*t1434;
  t6281 = -1.*t566*t1479;
  t6366 = 0. + t6276 + t6281;
  t4710 = -1.*t27*t4709;
  t4718 = t1209*t362*t1224;
  t4760 = t4710 + t4718;
  t5327 = t1685*t5325;
  t5562 = t2374*t5473;
  t5606 = t5327 + t5562;
  t6685 = 0.0341*t6648;
  t6774 = 0.000334*t6771;
  t6802 = t6685 + t6774;
  t5716 = -1.*t2374*t5325;
  t5723 = t1685*t5473;
  t5725 = t5716 + t5723;
  t6891 = 0.000334*t6648;
  t6924 = 0.00036*t6771;
  t7001 = t6891 + t6924;
  t5898 = -1.*t27*t5897;
  t5911 = -1.*t526*t1224;
  t5924 = t5898 + t5911;
  t6138 = t1685*t6108;
  t6193 = t2374*t6176;
  t6195 = t6138 + t6193;
  t6213 = -1.*t2374*t6108;
  t6229 = t1685*t6176;
  t6241 = t6213 + t6229;
  t7141 = 0.0341*t2849;
  t7154 = 0.000334*t3727;
  t7165 = t7141 + t7154;
  t7208 = 0.000334*t2849;
  t7216 = 0.00036*t3727;
  t7226 = t7208 + t7216;
  t7137 = 0.0341*t1521*t1329;
  t7173 = t7165*t2620;
  t7229 = t7226*t4301;
  t7248 = t7137 + t7173 + t7229;
  t7261 = 0.0341*t1521*t4760;
  t7268 = t7165*t5606;
  t7276 = t7226*t5725;
  t7278 = t7261 + t7268 + t7276;
  t7285 = 0.0341*t1521*t5924;
  t7287 = t7165*t6195;
  t7303 = t7226*t6241;
  t7332 = t7285 + t7287 + t7303;
  t7338 = 0.000334*t3948;
  t7344 = 0.0341*t2979;
  t7349 = t7338 + t7344;
  t7367 = 0.00036*t3948;
  t7371 = 0.000334*t2979;
  t7379 = t7367 + t7371;
  t7436 = 0.0341*t1329;
  t7438 = 0.0341*t4760;
  t7441 = 0.0341*t5924;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.0341*t1329*t1598 + t2620*t4257 + t4301*t4519;
  p_output1[10]=0.0341*t1598*t4760 + t4257*t5606 + t4519*t5725;
  p_output1[11]=0.0341*t1598*t5924 + t4257*t6195 + t4519*t6241;
  p_output1[12]=0.0341*t1329*t6366 + t2620*t6802 + t4301*t7001;
  p_output1[13]=0.0341*t4760*t6366 + t5606*t6802 + t5725*t7001;
  p_output1[14]=0.0341*t5924*t6366 + t6195*t6802 + t6241*t7001;
  p_output1[15]=t7248;
  p_output1[16]=t7278;
  p_output1[17]=t7332;
  p_output1[18]=t7248;
  p_output1[19]=t7278;
  p_output1[20]=t7332;
  p_output1[21]=t2620*t7349 + t4301*t7379;
  p_output1[22]=t5606*t7349 + t5725*t7379;
  p_output1[23]=t6195*t7349 + t6241*t7379;
  p_output1[24]=t7436;
  p_output1[25]=t7438;
  p_output1[26]=t7441;
  p_output1[27]=t7436;
  p_output1[28]=t7438;
  p_output1[29]=t7441;
  p_output1[30]=t7436;
  p_output1[31]=t7438;
  p_output1[32]=t7441;
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

#include "Jdq_AMWorld_LeftShin_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
