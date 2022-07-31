/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:19 GMT-04:00
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
  double t427;
  double t433;
  double t445;
  double t233;
  double t261;
  double t338;
  double t564;
  double t861;
  double t798;
  double t822;
  double t875;
  double t500;
  double t121;
  double t833;
  double t1069;
  double t1076;
  double t1313;
  double t1350;
  double t1365;
  double t1384;
  double t1459;
  double t726;
  double t1841;
  double t1877;
  double t1878;
  double t1988;
  double t2019;
  double t2372;
  double t2557;
  double t132;
  double t243;
  double t529;
  double t536;
  double t540;
  double t680;
  double t694;
  double t739;
  double t756;
  double t764;
  double t771;
  double t1199;
  double t1230;
  double t1235;
  double t1373;
  double t1557;
  double t1637;
  double t1706;
  double t1716;
  double t1738;
  double t1742;
  double t1747;
  double t1766;
  double t1809;
  double t1814;
  double t1886;
  double t1907;
  double t1923;
  double t1959;
  double t2071;
  double t2150;
  double t2169;
  double t2219;
  double t2220;
  double t2241;
  double t2251;
  double t2275;
  double t2280;
  double t2303;
  double t2537;
  double t2565;
  double t2566;
  double t2603;
  double t2610;
  double t2646;
  double t2600;
  double t2682;
  double t2772;
  double t2907;
  double t2929;
  double t2974;
  double t2995;
  double t3012;
  double t3026;
  double t2977;
  double t3042;
  double t3047;
  double t3070;
  double t3076;
  double t3104;
  double t784;
  double t1833;
  double t2315;
  double t2351;
  double t2823;
  double t2872;
  double t2880;
  double t2900;
  double t3620;
  double t3626;
  double t3643;
  double t3682;
  double t3691;
  double t3775;
  double t3659;
  double t3798;
  double t3833;
  double t3917;
  double t3934;
  double t3948;
  double t3965;
  double t3976;
  double t3990;
  double t3303;
  double t3360;
  double t3364;
  double t3390;
  double t3958;
  double t3997;
  double t4016;
  double t4070;
  double t4081;
  double t4124;
  double t4387;
  double t4400;
  double t4413;
  double t4536;
  double t4598;
  double t4605;
  double t4612;
  double t4616;
  double t4636;
  double t4609;
  double t4687;
  double t4710;
  double t4723;
  double t4753;
  double t4780;
  double t2486;
  double t2779;
  double t2782;
  double t4961;
  double t4964;
  double t4985;
  double t5002;
  double t5013;
  double t5018;
  double t5051;
  double t5063;
  double t5064;
  double t3049;
  double t3237;
  double t3241;
  double t3448;
  double t3449;
  double t3454;
  double t4996;
  double t5040;
  double t5082;
  double t5087;
  double t3588;
  double t3847;
  double t3874;
  double t5203;
  double t5214;
  double t5270;
  double t5271;
  double t4030;
  double t4161;
  double t4170;
  double t5332;
  double t5378;
  double t5392;
  double t5396;
  double t4223;
  double t4266;
  double t4296;
  double t4382;
  double t4429;
  double t4476;
  double t4713;
  double t4788;
  double t4828;
  double t4844;
  double t4846;
  double t4899;
  double t5596;
  double t5618;
  double t5619;
  double t5624;
  double t5661;
  double t5676;
  double t5682;
  double t5717;
  double t5769;
  double t5790;
  double t5791;
  double t5794;
  double t5630;
  double t5735;
  double t5820;
  double t5823;
  double t5828;
  double t5834;
  double t5836;
  double t5841;
  double t5854;
  double t5857;
  double t5881;
  double t5882;
  double t5905;
  double t5918;
  double t5919;
  double t5958;
  double t5994;
  double t6007;
  double t6016;
  double t6029;
  double t6034;
  double t6098;
  double t6099;
  double t6104;
  double t6108;
  double t6115;
  double t6120;
  double t6128;
  double t6143;
  double t6147;
  double t6149;
  double t6154;
  double t6171;
  t427 = Cos(var1[14]);
  t433 = -1.*t427;
  t445 = 0. + t433;
  t233 = Sin(var1[4]);
  t261 = Cos(var1[4]);
  t338 = Cos(var1[5]);
  t564 = Cos(var1[13]);
  t861 = Cos(var1[15]);
  t798 = Cos(var1[16]);
  t822 = Sin(var1[15]);
  t875 = Sin(var1[16]);
  t500 = Sin(var1[13]);
  t121 = Sin(var1[14]);
  t833 = t798*t822;
  t1069 = t861*t875;
  t1076 = 0. + t833 + t1069;
  t1313 = -1.*t861*t798;
  t1350 = t822*t875;
  t1365 = 0. + t1313 + t1350;
  t1384 = t121*t1076;
  t1459 = 0. + t1384;
  t726 = Sin(var1[5]);
  t1841 = t861*t798;
  t1877 = -1.*t822*t875;
  t1878 = 0. + t1841 + t1877;
  t1988 = t121*t1878;
  t2019 = 0. + t1988;
  t2372 = Cos(var1[3]);
  t2557 = Sin(var1[3]);
  t132 = 0. + t121;
  t243 = -1.*t132*t233;
  t529 = t445*t500;
  t536 = 0. + t529;
  t540 = t338*t536;
  t680 = t564*t445;
  t694 = 0. + t680;
  t739 = t694*t726;
  t756 = 0. + t540 + t739;
  t764 = t261*t756;
  t771 = 0. + t243 + t764;
  t1199 = t427*t1076;
  t1230 = 0. + t1199;
  t1235 = -1.*t1230*t233;
  t1373 = t564*t1365;
  t1557 = t500*t1459;
  t1637 = 0. + t1373 + t1557;
  t1706 = t338*t1637;
  t1716 = -1.*t500*t1365;
  t1738 = t564*t1459;
  t1742 = 0. + t1716 + t1738;
  t1747 = t1742*t726;
  t1766 = 0. + t1706 + t1747;
  t1809 = t261*t1766;
  t1814 = 0. + t1235 + t1809;
  t1886 = t427*t1878;
  t1907 = 0. + t1886;
  t1923 = -1.*t1907*t233;
  t1959 = t564*t1076;
  t2071 = t500*t2019;
  t2150 = 0. + t1959 + t2071;
  t2169 = t338*t2150;
  t2219 = -1.*t500*t1076;
  t2220 = t564*t2019;
  t2241 = 0. + t2219 + t2220;
  t2251 = t2241*t726;
  t2275 = 0. + t2169 + t2251;
  t2280 = t261*t2275;
  t2303 = 0. + t1923 + t2280;
  t2537 = t2372*t338*t233;
  t2565 = t2557*t726;
  t2566 = t2537 + t2565;
  t2603 = -1.*t338*t2557;
  t2610 = t2372*t233*t726;
  t2646 = t2603 + t2610;
  t2600 = t500*t2566;
  t2682 = t564*t2646;
  t2772 = t2600 + t2682;
  t2907 = t564*t2566;
  t2929 = -1.*t500*t2646;
  t2974 = t2907 + t2929;
  t2995 = t427*t2372*t261;
  t3012 = t121*t2772;
  t3026 = t2995 + t3012;
  t2977 = t822*t2974;
  t3042 = t861*t3026;
  t3047 = t2977 + t3042;
  t3070 = t861*t2974;
  t3076 = -1.*t822*t3026;
  t3104 = t3070 + t3076;
  t784 = 0.00334*t771;
  t1833 = -3.e-6*t1814;
  t2315 = -1.e-6*t2303;
  t2351 = t784 + t1833 + t2315;
  t2823 = -3.e-6*t771;
  t2872 = 0.00216*t1814;
  t2880 = 0.000956*t2303;
  t2900 = t2823 + t2872 + t2880;
  t3620 = t338*t2557*t233;
  t3626 = -1.*t2372*t726;
  t3643 = t3620 + t3626;
  t3682 = t2372*t338;
  t3691 = t2557*t233*t726;
  t3775 = t3682 + t3691;
  t3659 = t500*t3643;
  t3798 = t564*t3775;
  t3833 = t3659 + t3798;
  t3917 = t564*t3643;
  t3934 = -1.*t500*t3775;
  t3948 = t3917 + t3934;
  t3965 = t427*t261*t2557;
  t3976 = t121*t3833;
  t3990 = t3965 + t3976;
  t3303 = -1.e-6*t771;
  t3360 = 0.000956*t1814;
  t3364 = 0.00144*t2303;
  t3390 = t3303 + t3360 + t3364;
  t3958 = t822*t3948;
  t3997 = t861*t3990;
  t4016 = t3958 + t3997;
  t4070 = t861*t3948;
  t4081 = -1.*t822*t3990;
  t4124 = t4070 + t4081;
  t4387 = t261*t338*t500;
  t4400 = t564*t261*t726;
  t4413 = t4387 + t4400;
  t4536 = t564*t261*t338;
  t4598 = -1.*t261*t500*t726;
  t4605 = t4536 + t4598;
  t4612 = -1.*t427*t233;
  t4616 = t121*t4413;
  t4636 = t4612 + t4616;
  t4609 = t822*t4605;
  t4687 = t861*t4636;
  t4710 = t4609 + t4687;
  t4723 = t861*t4605;
  t4753 = -1.*t822*t4636;
  t4780 = t4723 + t4753;
  t2486 = t2372*t261*t121;
  t2779 = -1.*t427*t2772;
  t2782 = t2486 + t2779;
  t4961 = t694*t338;
  t4964 = -1.*t536*t726;
  t4985 = 0. + t4961 + t4964;
  t5002 = t338*t1742;
  t5013 = -1.*t1637*t726;
  t5018 = 0. + t5002 + t5013;
  t5051 = t338*t2241;
  t5063 = -1.*t2150*t726;
  t5064 = 0. + t5051 + t5063;
  t3049 = t875*t3047;
  t3237 = -1.*t798*t3104;
  t3241 = t3049 + t3237;
  t3448 = t798*t3047;
  t3449 = t875*t3104;
  t3454 = t3448 + t3449;
  t4996 = 0.00334*t4985;
  t5040 = -3.e-6*t5018;
  t5082 = -1.e-6*t5064;
  t5087 = t4996 + t5040 + t5082;
  t3588 = t261*t121*t2557;
  t3847 = -1.*t427*t3833;
  t3874 = t3588 + t3847;
  t5203 = -3.e-6*t4985;
  t5214 = 0.00216*t5018;
  t5270 = 0.000956*t5064;
  t5271 = t5203 + t5214 + t5270;
  t4030 = t875*t4016;
  t4161 = -1.*t798*t4124;
  t4170 = t4030 + t4161;
  t5332 = -1.e-6*t4985;
  t5378 = 0.000956*t5018;
  t5392 = 0.00144*t5064;
  t5396 = t5332 + t5378 + t5392;
  t4223 = t798*t4016;
  t4266 = t875*t4124;
  t4296 = t4223 + t4266;
  t4382 = -1.*t121*t233;
  t4429 = -1.*t427*t4413;
  t4476 = t4382 + t4429;
  t4713 = t875*t4710;
  t4788 = -1.*t798*t4780;
  t4828 = t4713 + t4788;
  t4844 = t798*t4710;
  t4846 = t875*t4780;
  t4899 = t4844 + t4846;
  t5596 = 0.00334*t132;
  t5618 = -3.e-6*t1230;
  t5619 = -1.e-6*t1907;
  t5624 = t5596 + t5618 + t5619;
  t5661 = -3.e-6*t132;
  t5676 = 0.00216*t1230;
  t5682 = 0.000956*t1907;
  t5717 = t5661 + t5676 + t5682;
  t5769 = -1.e-6*t132;
  t5790 = 0.000956*t1230;
  t5791 = 0.00144*t1907;
  t5794 = t5769 + t5790 + t5791;
  t5630 = t5624*t2782;
  t5735 = t5717*t3241;
  t5820 = t5794*t3454;
  t5823 = t5630 + t5735 + t5820;
  t5828 = t5624*t3874;
  t5834 = t5717*t4170;
  t5836 = t5794*t4296;
  t5841 = t5828 + t5834 + t5836;
  t5854 = t5624*t4476;
  t5857 = t5717*t4828;
  t5881 = t5794*t4899;
  t5882 = t5854 + t5857 + t5881;
  t5905 = -1.e-6*t1076;
  t5918 = -3.e-6*t1365;
  t5919 = t5905 + t5918;
  t5958 = 0.000956*t1076;
  t5994 = 0.00216*t1365;
  t6007 = t5958 + t5994;
  t6016 = 0.00144*t1076;
  t6029 = 0.000956*t1365;
  t6034 = t6016 + t6029;
  t6098 = 0.00334*t2782;
  t6099 = -3.e-6*t3241;
  t6104 = -1.e-6*t3454;
  t6108 = t6098 + t6099 + t6104;
  t6115 = 0.00334*t3874;
  t6120 = -3.e-6*t4170;
  t6128 = -1.e-6*t4296;
  t6143 = t6115 + t6120 + t6128;
  t6147 = 0.00334*t4476;
  t6149 = -3.e-6*t4828;
  t6154 = -1.e-6*t4899;
  t6171 = t6147 + t6149 + t6154;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2351*t2782 + t2900*t3241 + t3390*t3454;
  p_output1[10]=t2351*t3874 + t2900*t4170 + t3390*t4296;
  p_output1[11]=t2351*t4476 + t2900*t4828 + t3390*t4899;
  p_output1[12]=t2782*t5087 + t3241*t5271 + t3454*t5396;
  p_output1[13]=t3874*t5087 + t4170*t5271 + t4296*t5396;
  p_output1[14]=t4476*t5087 + t4828*t5271 + t4899*t5396;
  p_output1[15]=t5823;
  p_output1[16]=t5841;
  p_output1[17]=t5882;
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
  p_output1[39]=t5823;
  p_output1[40]=t5841;
  p_output1[41]=t5882;
  p_output1[42]=t2782*t5919 + t3241*t6007 + t3454*t6034;
  p_output1[43]=t3874*t5919 + t4170*t6007 + t4296*t6034;
  p_output1[44]=t4476*t5919 + t4828*t6007 + t4899*t6034;
  p_output1[45]=t6108;
  p_output1[46]=t6143;
  p_output1[47]=t6171;
  p_output1[48]=t6108;
  p_output1[49]=t6143;
  p_output1[50]=t6171;
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

#include "Jdq_AMWorld_RightKnee_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
