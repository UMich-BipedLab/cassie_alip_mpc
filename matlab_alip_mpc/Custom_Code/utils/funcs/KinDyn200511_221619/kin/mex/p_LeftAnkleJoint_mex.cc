/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:55 GMT-04:00
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
  double t18;
  double t215;
  double t16;
  double t60;
  double t281;
  double t304;
  double t323;
  double t326;
  double t399;
  double t682;
  double t905;
  double t922;
  double t202;
  double t295;
  double t297;
  double t1529;
  double t1555;
  double t1587;
  double t1613;
  double t1262;
  double t1378;
  double t1387;
  double t2046;
  double t2668;
  double t2670;
  double t2675;
  double t2722;
  double t2488;
  double t2503;
  double t2551;
  double t2831;
  double t2836;
  double t2857;
  double t2906;
  double t2909;
  double t2924;
  double t2951;
  double t3071;
  double t3134;
  double t3141;
  double t3207;
  double t3259;
  double t3344;
  double t3539;
  double t3631;
  double t3684;
  double t3748;
  double t3974;
  double t4080;
  double t4134;
  double t4328;
  double t4383;
  double t4407;
  double t4597;
  double t4694;
  double t4744;
  double t4750;
  double t4968;
  double t4970;
  double t5063;
  double t5229;
  double t5286;
  double t5307;
  double t388;
  double t431;
  double t475;
  double t1129;
  double t1133;
  double t1177;
  double t5742;
  double t5877;
  double t5887;
  double t5476;
  double t5498;
  double t5500;
  double t1612;
  double t1681;
  double t1762;
  double t2143;
  double t2197;
  double t2323;
  double t5998;
  double t6011;
  double t6016;
  double t2717;
  double t2726;
  double t2743;
  double t2875;
  double t2878;
  double t2884;
  double t2940;
  double t3011;
  double t3070;
  double t6170;
  double t6182;
  double t6192;
  double t6246;
  double t6263;
  double t6272;
  double t3179;
  double t3188;
  double t3194;
  double t3720;
  double t3872;
  double t3921;
  double t6298;
  double t6304;
  double t6362;
  double t6379;
  double t6381;
  double t6382;
  double t4237;
  double t4296;
  double t4327;
  double t4747;
  double t4759;
  double t4958;
  double t6432;
  double t6440;
  double t6446;
  double t6501;
  double t6523;
  double t6542;
  double t5107;
  double t5152;
  double t5222;
  double t6546;
  double t6559;
  double t6605;
  double t6613;
  double t6619;
  double t6660;
  double t6728;
  double t6729;
  double t6731;
  double t6886;
  double t6966;
  double t6978;
  double t7003;
  double t7006;
  double t7018;
  double t7054;
  double t7062;
  double t7065;
  double t7081;
  double t7090;
  double t7174;
  double t7203;
  double t7204;
  double t7211;
  double t7216;
  double t7218;
  double t7225;
  double t7233;
  double t7243;
  double t7244;
  double t7251;
  double t7260;
  double t7277;
  t18 = Cos(var1[5]);
  t215 = Sin(var1[3]);
  t16 = Cos(var1[3]);
  t60 = Sin(var1[4]);
  t281 = Sin(var1[5]);
  t304 = Cos(var1[6]);
  t323 = -1.*t304;
  t326 = 1. + t323;
  t399 = Sin(var1[6]);
  t682 = -1.*t18*t215;
  t905 = t16*t60*t281;
  t922 = t682 + t905;
  t202 = t16*t18*t60;
  t295 = t215*t281;
  t297 = t202 + t295;
  t1529 = Cos(var1[7]);
  t1555 = -1.*t1529;
  t1587 = 1. + t1555;
  t1613 = Sin(var1[7]);
  t1262 = t304*t922;
  t1378 = t297*t399;
  t1387 = t1262 + t1378;
  t2046 = Cos(var1[4]);
  t2668 = Cos(var1[8]);
  t2670 = -1.*t2668;
  t2675 = 1. + t2670;
  t2722 = Sin(var1[8]);
  t2488 = t16*t2046*t1529;
  t2503 = t1387*t1613;
  t2551 = t2488 + t2503;
  t2831 = t304*t297;
  t2836 = -1.*t922*t399;
  t2857 = t2831 + t2836;
  t2906 = Cos(var1[9]);
  t2909 = -1.*t2906;
  t2924 = 1. + t2909;
  t2951 = Sin(var1[9]);
  t3071 = t2668*t2551;
  t3134 = t2857*t2722;
  t3141 = t3071 + t3134;
  t3207 = t2668*t2857;
  t3259 = -1.*t2551*t2722;
  t3344 = t3207 + t3259;
  t3539 = Cos(var1[10]);
  t3631 = -1.*t3539;
  t3684 = 1. + t3631;
  t3748 = Sin(var1[10]);
  t3974 = -1.*t2951*t3141;
  t4080 = t2906*t3344;
  t4134 = t3974 + t4080;
  t4328 = t2906*t3141;
  t4383 = t2951*t3344;
  t4407 = t4328 + t4383;
  t4597 = Cos(var1[11]);
  t4694 = -1.*t4597;
  t4744 = 1. + t4694;
  t4750 = Sin(var1[11]);
  t4968 = t3748*t4134;
  t4970 = t3539*t4407;
  t5063 = t4968 + t4970;
  t5229 = t3539*t4134;
  t5286 = -1.*t3748*t4407;
  t5307 = t5229 + t5286;
  t388 = 0.07996*t326;
  t431 = -0.135*t399;
  t475 = 0. + t388 + t431;
  t1129 = 0.135*t326;
  t1133 = 0.07996*t399;
  t1177 = 0. + t1129 + t1133;
  t5742 = t16*t18;
  t5877 = t215*t60*t281;
  t5887 = t5742 + t5877;
  t5476 = t18*t215*t60;
  t5498 = -1.*t16*t281;
  t5500 = t5476 + t5498;
  t1612 = 0.135*t1587;
  t1681 = 0.08055*t1613;
  t1762 = 0. + t1612 + t1681;
  t2143 = -0.08055*t1587;
  t2197 = 0.135*t1613;
  t2323 = 0. + t2143 + t2197;
  t5998 = t304*t5887;
  t6011 = t5500*t399;
  t6016 = t5998 + t6011;
  t2717 = -0.08055*t2675;
  t2726 = -0.01004*t2722;
  t2743 = 0. + t2717 + t2726;
  t2875 = -0.01004*t2675;
  t2878 = 0.08055*t2722;
  t2884 = 0. + t2875 + t2878;
  t2940 = -0.08055*t2924;
  t3011 = -0.13004*t2951;
  t3070 = 0. + t2940 + t3011;
  t6170 = t2046*t1529*t215;
  t6182 = t6016*t1613;
  t6192 = t6170 + t6182;
  t6246 = t304*t5500;
  t6263 = -1.*t5887*t399;
  t6272 = t6246 + t6263;
  t3179 = -0.13004*t2924;
  t3188 = 0.08055*t2951;
  t3194 = 0. + t3179 + t3188;
  t3720 = -0.19074*t3684;
  t3872 = 0.03315*t3748;
  t3921 = 0. + t3720 + t3872;
  t6298 = t2668*t6192;
  t6304 = t6272*t2722;
  t6362 = t6298 + t6304;
  t6379 = t2668*t6272;
  t6381 = -1.*t6192*t2722;
  t6382 = t6379 + t6381;
  t4237 = -0.03315*t3684;
  t4296 = -0.19074*t3748;
  t4327 = 0. + t4237 + t4296;
  t4747 = -0.01315*t4744;
  t4759 = -0.62554*t4750;
  t4958 = 0. + t4747 + t4759;
  t6432 = -1.*t2951*t6362;
  t6440 = t2906*t6382;
  t6446 = t6432 + t6440;
  t6501 = t2906*t6362;
  t6523 = t2951*t6382;
  t6542 = t6501 + t6523;
  t5107 = -0.62554*t4744;
  t5152 = 0.01315*t4750;
  t5222 = 0. + t5107 + t5152;
  t6546 = t3748*t6446;
  t6559 = t3539*t6542;
  t6605 = t6546 + t6559;
  t6613 = t3539*t6446;
  t6619 = -1.*t3748*t6542;
  t6660 = t6613 + t6619;
  t6728 = t2046*t304*t281;
  t6729 = t2046*t18*t399;
  t6731 = t6728 + t6729;
  t6886 = -1.*t1529*t60;
  t6966 = t6731*t1613;
  t6978 = t6886 + t6966;
  t7003 = t2046*t18*t304;
  t7006 = -1.*t2046*t281*t399;
  t7018 = t7003 + t7006;
  t7054 = t2668*t6978;
  t7062 = t7018*t2722;
  t7065 = t7054 + t7062;
  t7081 = t2668*t7018;
  t7090 = -1.*t6978*t2722;
  t7174 = t7081 + t7090;
  t7203 = -1.*t2951*t7065;
  t7204 = t2906*t7174;
  t7211 = t7203 + t7204;
  t7216 = t2906*t7065;
  t7218 = t2951*t7174;
  t7225 = t7216 + t7218;
  t7233 = t3748*t7211;
  t7243 = t3539*t7225;
  t7244 = t7233 + t7243;
  t7251 = t3539*t7211;
  t7260 = -1.*t3748*t7225;
  t7277 = t7251 + t7260;
  p_output1[0]=0. + t1387*t1762 + 0.1305*(t1387*t1529 - 1.*t16*t1613*t2046) + t16*t2046*t2323 + t2551*t2743 + t2857*t2884 + t3070*t3141 + t3194*t3344 + t3921*t4134 + t4327*t4407 + t297*t475 + t4958*t5063 + t5222*t5307 - 0.62554*(-1.*t4750*t5063 + t4597*t5307) - 0.01315*(t4597*t5063 + t4750*t5307) + t1177*t922 + var1[0];
  p_output1[1]=0. + t2046*t215*t2323 + t475*t5500 + t1177*t5887 + t1762*t6016 + 0.1305*(-1.*t1613*t2046*t215 + t1529*t6016) + t2743*t6192 + t2884*t6272 + t3070*t6362 + t3194*t6382 + t3921*t6446 + t4327*t6542 + t4958*t6605 + t5222*t6660 - 0.62554*(-1.*t4750*t6605 + t4597*t6660) - 0.01315*(t4597*t6605 + t4750*t6660) + var1[1];
  p_output1[2]=0. + t1177*t2046*t281 + t18*t2046*t475 - 1.*t2323*t60 + t1762*t6731 + 0.1305*(t1613*t60 + t1529*t6731) + t2743*t6978 + t2884*t7018 + t3070*t7065 + t3194*t7174 + t3921*t7211 + t4327*t7225 + t4958*t7244 + t5222*t7277 - 0.62554*(-1.*t4750*t7244 + t4597*t7277) - 0.01315*(t4597*t7244 + t4750*t7277) + var1[2];
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

#include "p_LeftAnkleJoint_mex.hh"

namespace SymExpression
{

void p_LeftAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
