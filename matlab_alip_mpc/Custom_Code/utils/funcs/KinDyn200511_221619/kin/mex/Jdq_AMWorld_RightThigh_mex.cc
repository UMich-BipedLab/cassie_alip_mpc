/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:47 GMT-04:00
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
  double t402;
  double t242;
  double t291;
  double t329;
  double t489;
  double t1279;
  double t72;
  double t864;
  double t1358;
  double t1375;
  double t1406;
  double t1428;
  double t913;
  double t1900;
  double t1917;
  double t2023;
  double t2026;
  double t2290;
  double t2391;
  double t152;
  double t286;
  double t692;
  double t849;
  double t855;
  double t869;
  double t905;
  double t946;
  double t1050;
  double t1147;
  double t1167;
  double t1280;
  double t1338;
  double t1347;
  double t1395;
  double t1508;
  double t1570;
  double t1591;
  double t1610;
  double t1613;
  double t1623;
  double t1639;
  double t1704;
  double t1718;
  double t1749;
  double t1857;
  double t1895;
  double t1897;
  double t1999;
  double t2052;
  double t2062;
  double t2069;
  double t2149;
  double t2151;
  double t2176;
  double t2214;
  double t2228;
  double t2243;
  double t2247;
  double t2370;
  double t2393;
  double t2441;
  double t2524;
  double t2570;
  double t2591;
  double t2511;
  double t2619;
  double t2652;
  double t3031;
  double t3049;
  double t3058;
  double t3077;
  double t3173;
  double t3194;
  double t1211;
  double t1752;
  double t2263;
  double t2288;
  double t2722;
  double t2755;
  double t2847;
  double t2881;
  double t3516;
  double t3520;
  double t3523;
  double t3745;
  double t3756;
  double t3783;
  double t3604;
  double t3861;
  double t3900;
  double t3253;
  double t3271;
  double t3326;
  double t3365;
  double t3979;
  double t4023;
  double t4251;
  double t4332;
  double t4348;
  double t4423;
  double t4830;
  double t4835;
  double t4848;
  double t4691;
  double t4703;
  double t4756;
  double t4785;
  double t4915;
  double t4931;
  double t2364;
  double t2667;
  double t2685;
  double t5723;
  double t5756;
  double t5952;
  double t6004;
  double t6014;
  double t6122;
  double t6145;
  double t6172;
  double t6201;
  double t3070;
  double t3210;
  double t3218;
  double t3366;
  double t3408;
  double t3432;
  double t5974;
  double t6141;
  double t6206;
  double t6209;
  double t3496;
  double t3915;
  double t3922;
  double t6237;
  double t6248;
  double t6284;
  double t6316;
  double t4281;
  double t4530;
  double t4568;
  double t6432;
  double t6468;
  double t6471;
  double t6497;
  double t4582;
  double t4594;
  double t4638;
  double t5205;
  double t5279;
  double t5358;
  double t4776;
  double t4948;
  double t4991;
  double t5550;
  double t5564;
  double t5573;
  double t6976;
  double t7038;
  double t7048;
  double t7082;
  double t7146;
  double t7147;
  double t7165;
  double t7182;
  double t7201;
  double t7230;
  double t7234;
  double t7285;
  double t7142;
  double t7195;
  double t7304;
  double t7326;
  double t7334;
  double t7365;
  double t7380;
  double t7401;
  double t7421;
  double t7454;
  double t7471;
  double t7487;
  double t7589;
  double t7643;
  double t7666;
  double t7691;
  double t7755;
  double t7762;
  double t7846;
  double t7883;
  double t7885;
  t402 = Cos(var1[14]);
  t242 = Sin(var1[4]);
  t291 = Cos(var1[4]);
  t329 = Cos(var1[5]);
  t489 = Sin(var1[13]);
  t1279 = Cos(var1[15]);
  t72 = Sin(var1[14]);
  t864 = Cos(var1[13]);
  t1358 = t1279*t72;
  t1375 = 0. + t1358;
  t1406 = Sin(var1[15]);
  t1428 = 0. + t1406;
  t913 = Sin(var1[5]);
  t1900 = -1.*t1279;
  t1917 = 0. + t1900;
  t2023 = t72*t1406;
  t2026 = 0. + t2023;
  t2290 = Cos(var1[3]);
  t2391 = Sin(var1[3]);
  t152 = 0. + t72;
  t286 = -1.*t152*t242;
  t692 = -1.*t402*t489;
  t849 = 0. + t692;
  t855 = t329*t849;
  t869 = -1.*t864*t402;
  t905 = 0. + t869;
  t946 = t905*t913;
  t1050 = 0. + t855 + t946;
  t1147 = t291*t1050;
  t1167 = 0. + t286 + t1147;
  t1280 = t402*t1279;
  t1338 = 0. + t1280;
  t1347 = -1.*t1338*t242;
  t1395 = t489*t1375;
  t1508 = t864*t1428;
  t1570 = 0. + t1395 + t1508;
  t1591 = t329*t1570;
  t1610 = t864*t1375;
  t1613 = -1.*t489*t1428;
  t1623 = 0. + t1610 + t1613;
  t1639 = t1623*t913;
  t1704 = 0. + t1591 + t1639;
  t1718 = t291*t1704;
  t1749 = 0. + t1347 + t1718;
  t1857 = t402*t1406;
  t1895 = 0. + t1857;
  t1897 = -1.*t1895*t242;
  t1999 = t864*t1917;
  t2052 = t489*t2026;
  t2062 = 0. + t1999 + t2052;
  t2069 = t329*t2062;
  t2149 = -1.*t1917*t489;
  t2151 = t864*t2026;
  t2176 = 0. + t2149 + t2151;
  t2214 = t2176*t913;
  t2228 = 0. + t2069 + t2214;
  t2243 = t291*t2228;
  t2247 = 0. + t1897 + t2243;
  t2370 = t2290*t329*t242;
  t2393 = t2391*t913;
  t2441 = t2370 + t2393;
  t2524 = -1.*t329*t2391;
  t2570 = t2290*t242*t913;
  t2591 = t2524 + t2570;
  t2511 = t489*t2441;
  t2619 = t864*t2591;
  t2652 = t2511 + t2619;
  t3031 = t864*t2441;
  t3049 = -1.*t489*t2591;
  t3058 = t3031 + t3049;
  t3077 = t402*t2290*t291;
  t3173 = t72*t2652;
  t3194 = t3077 + t3173;
  t1211 = 0.0498*t1167;
  t1752 = 0.000019*t1749;
  t2263 = 0.0117*t2247;
  t2288 = t1211 + t1752 + t2263;
  t2722 = 0.000019*t1167;
  t2755 = 0.0563*t1749;
  t2847 = 0.000284*t2247;
  t2881 = t2722 + t2755 + t2847;
  t3516 = t329*t2391*t242;
  t3520 = -1.*t2290*t913;
  t3523 = t3516 + t3520;
  t3745 = t2290*t329;
  t3756 = t2391*t242*t913;
  t3783 = t3745 + t3756;
  t3604 = t489*t3523;
  t3861 = t864*t3783;
  t3900 = t3604 + t3861;
  t3253 = 0.0117*t1167;
  t3271 = 0.000284*t1749;
  t3326 = 0.018*t2247;
  t3365 = t3253 + t3271 + t3326;
  t3979 = t864*t3523;
  t4023 = -1.*t489*t3783;
  t4251 = t3979 + t4023;
  t4332 = t402*t291*t2391;
  t4348 = t72*t3900;
  t4423 = t4332 + t4348;
  t4830 = t291*t329*t489;
  t4835 = t864*t291*t913;
  t4848 = t4830 + t4835;
  t4691 = t864*t291*t329;
  t4703 = -1.*t291*t489*t913;
  t4756 = t4691 + t4703;
  t4785 = -1.*t402*t242;
  t4915 = t72*t4848;
  t4931 = t4785 + t4915;
  t2364 = t2290*t291*t72;
  t2667 = -1.*t402*t2652;
  t2685 = t2364 + t2667;
  t5723 = t905*t329;
  t5756 = -1.*t849*t913;
  t5952 = 0. + t5723 + t5756;
  t6004 = t329*t1623;
  t6014 = -1.*t1570*t913;
  t6122 = 0. + t6004 + t6014;
  t6145 = t329*t2176;
  t6172 = -1.*t2062*t913;
  t6201 = 0. + t6145 + t6172;
  t3070 = t1406*t3058;
  t3210 = t1279*t3194;
  t3218 = t3070 + t3210;
  t3366 = -1.*t1279*t3058;
  t3408 = t1406*t3194;
  t3432 = t3366 + t3408;
  t5974 = 0.0498*t5952;
  t6141 = 0.000019*t6122;
  t6206 = 0.0117*t6201;
  t6209 = t5974 + t6141 + t6206;
  t3496 = t291*t72*t2391;
  t3915 = -1.*t402*t3900;
  t3922 = t3496 + t3915;
  t6237 = 0.000019*t5952;
  t6248 = 0.0563*t6122;
  t6284 = 0.000284*t6201;
  t6316 = t6237 + t6248 + t6284;
  t4281 = t1406*t4251;
  t4530 = t1279*t4423;
  t4568 = t4281 + t4530;
  t6432 = 0.0117*t5952;
  t6468 = 0.000284*t6122;
  t6471 = 0.018*t6201;
  t6497 = t6432 + t6468 + t6471;
  t4582 = -1.*t1279*t4251;
  t4594 = t1406*t4423;
  t4638 = t4582 + t4594;
  t5205 = -1.*t72*t242;
  t5279 = -1.*t402*t4848;
  t5358 = t5205 + t5279;
  t4776 = t1406*t4756;
  t4948 = t1279*t4931;
  t4991 = t4776 + t4948;
  t5550 = -1.*t1279*t4756;
  t5564 = t1406*t4931;
  t5573 = t5550 + t5564;
  t6976 = 0.000019*t1338;
  t7038 = 0.0498*t152;
  t7048 = 0.0117*t1895;
  t7082 = t6976 + t7038 + t7048;
  t7146 = 0.0563*t1338;
  t7147 = 0.000019*t152;
  t7165 = 0.000284*t1895;
  t7182 = t7146 + t7147 + t7165;
  t7201 = 0.000284*t1338;
  t7230 = 0.0117*t152;
  t7234 = 0.018*t1895;
  t7285 = t7201 + t7230 + t7234;
  t7142 = t7082*t2685;
  t7195 = t7182*t3218;
  t7304 = t7285*t3432;
  t7326 = t7142 + t7195 + t7304;
  t7334 = t7082*t3922;
  t7365 = t7182*t4568;
  t7380 = t7285*t4638;
  t7401 = t7334 + t7365 + t7380;
  t7421 = t7082*t5358;
  t7454 = t7182*t4991;
  t7471 = t7285*t5573;
  t7487 = t7421 + t7454 + t7471;
  t7589 = 0.0117*t1917;
  t7643 = 0.000019*t1428;
  t7666 = t7589 + t7643;
  t7691 = 0.000284*t1917;
  t7755 = 0.0563*t1428;
  t7762 = t7691 + t7755;
  t7846 = 0.018*t1917;
  t7883 = 0.000284*t1428;
  t7885 = t7846 + t7883;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2288*t2685 + t2881*t3218 + t3365*t3432;
  p_output1[10]=t2288*t3922 + t2881*t4568 + t3365*t4638;
  p_output1[11]=t2881*t4991 + t2288*t5358 + t3365*t5573;
  p_output1[12]=t2685*t6209 + t3218*t6316 + t3432*t6497;
  p_output1[13]=t3922*t6209 + t4568*t6316 + t4638*t6497;
  p_output1[14]=t5358*t6209 + t4991*t6316 + t5573*t6497;
  p_output1[15]=t7326;
  p_output1[16]=t7401;
  p_output1[17]=t7487;
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
  p_output1[39]=t7326;
  p_output1[40]=t7401;
  p_output1[41]=t7487;
  p_output1[42]=t2685*t7666 + t3218*t7762 + t3432*t7885;
  p_output1[43]=t3922*t7666 + t4568*t7762 + t4638*t7885;
  p_output1[44]=t5358*t7666 + t4991*t7762 + t5573*t7885;
  p_output1[45]=0.0498*t2685 + 0.000019*t3218 + 0.0117*t3432;
  p_output1[46]=0.0498*t3922 + 0.000019*t4568 + 0.0117*t4638;
  p_output1[47]=0.000019*t4991 + 0.0498*t5358 + 0.0117*t5573;
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

#include "Jdq_AMWorld_RightThigh_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
