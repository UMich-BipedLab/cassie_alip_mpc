/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:28 GMT-04:00
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
  double t165;
  double t27;
  double t191;
  double t37;
  double t199;
  double t700;
  double t5;
  double t3;
  double t751;
  double t763;
  double t558;
  double t708;
  double t941;
  double t924;
  double t928;
  double t952;
  double t937;
  double t993;
  double t1030;
  double t1070;
  double t1071;
  double t1092;
  double t1099;
  double t1137;
  double t1507;
  double t1512;
  double t1528;
  double t1671;
  double t1725;
  double t64;
  double t323;
  double t326;
  double t465;
  double t477;
  double t492;
  double t549;
  double t563;
  double t637;
  double t2155;
  double t2158;
  double t2180;
  double t2065;
  double t2085;
  double t2119;
  double t770;
  double t784;
  double t790;
  double t798;
  double t828;
  double t834;
  double t840;
  double t851;
  double t865;
  double t883;
  double t897;
  double t1034;
  double t1041;
  double t1048;
  double t1094;
  double t1169;
  double t1176;
  double t1189;
  double t1206;
  double t1250;
  double t1342;
  double t1360;
  double t1370;
  double t1469;
  double t1491;
  double t1544;
  double t1559;
  double t1568;
  double t1629;
  double t1757;
  double t1796;
  double t1843;
  double t1887;
  double t1918;
  double t1942;
  double t1957;
  double t1980;
  double t1990;
  double t2029;
  double t2128;
  double t2183;
  double t2190;
  double t2206;
  double t2207;
  double t2216;
  double t912;
  double t1503;
  double t2042;
  double t2043;
  double t2457;
  double t2502;
  double t2510;
  double t2545;
  double t2575;
  double t2582;
  double t2601;
  double t2661;
  double t2678;
  double t2884;
  double t2919;
  double t2925;
  double t2754;
  double t2755;
  double t2833;
  double t2317;
  double t2319;
  double t2333;
  double t2340;
  double t2863;
  double t2959;
  double t2966;
  double t3020;
  double t3105;
  double t3107;
  double t2385;
  double t2393;
  double t2394;
  double t2403;
  double t3179;
  double t3204;
  double t3210;
  double t3365;
  double t3371;
  double t3375;
  double t3295;
  double t3328;
  double t3337;
  double t3351;
  double t3389;
  double t3403;
  double t3448;
  double t3453;
  double t3457;
  double t639;
  double t719;
  double t746;
  double t2205;
  double t2302;
  double t2309;
  double t3581;
  double t3592;
  double t3596;
  double t3635;
  double t3654;
  double t3663;
  double t3670;
  double t3678;
  double t3681;
  double t2359;
  double t2369;
  double t2378;
  double t2685;
  double t2722;
  double t2726;
  double t3605;
  double t3666;
  double t3703;
  double t3736;
  double t2996;
  double t3113;
  double t3120;
  double t3760;
  double t3782;
  double t3800;
  double t3817;
  double t3136;
  double t3143;
  double t3148;
  double t3828;
  double t3861;
  double t3877;
  double t3910;
  double t3230;
  double t3253;
  double t3254;
  double t3417;
  double t3470;
  double t3483;
  double t3518;
  double t3528;
  double t3552;
  double t4118;
  double t4142;
  double t4151;
  double t4153;
  double t4240;
  double t4274;
  double t4286;
  double t4287;
  double t4318;
  double t4329;
  double t4338;
  double t4340;
  double t4178;
  double t4303;
  double t4357;
  double t4370;
  double t4379;
  double t4386;
  double t4389;
  double t4408;
  double t4427;
  double t4441;
  double t4479;
  double t4487;
  double t4489;
  double t4492;
  double t4512;
  double t4523;
  double t4539;
  double t4554;
  double t4581;
  double t4588;
  double t4590;
  double t4772;
  double t4777;
  double t4802;
  double t4821;
  double t4842;
  double t4852;
  double t4872;
  double t4881;
  double t4887;
  double t4945;
  double t4971;
  double t4980;
  t165 = Cos(var1[3]);
  t27 = Cos(var1[5]);
  t191 = Sin(var1[4]);
  t37 = Sin(var1[3]);
  t199 = Sin(var1[5]);
  t700 = Cos(var1[4]);
  t5 = Cos(var1[6]);
  t3 = Cos(var1[7]);
  t751 = -1.*t3;
  t763 = 0. + t751;
  t558 = Sin(var1[6]);
  t708 = Sin(var1[7]);
  t941 = Cos(var1[9]);
  t924 = Cos(var1[8]);
  t928 = Sin(var1[9]);
  t952 = Sin(var1[8]);
  t937 = t924*t928;
  t993 = t941*t952;
  t1030 = 0. + t937 + t993;
  t1070 = -1.*t941*t924;
  t1071 = t928*t952;
  t1092 = 0. + t1070 + t1071;
  t1099 = t708*t1030;
  t1137 = 0. + t1099;
  t1507 = t941*t924;
  t1512 = -1.*t928*t952;
  t1528 = 0. + t1507 + t1512;
  t1671 = t708*t1528;
  t1725 = 0. + t1671;
  t64 = -1.*t27*t37;
  t323 = t165*t191*t199;
  t326 = t64 + t323;
  t465 = t5*t326;
  t477 = t165*t27*t191;
  t492 = t37*t199;
  t549 = t477 + t492;
  t563 = t549*t558;
  t637 = t465 + t563;
  t2155 = t5*t549;
  t2158 = -1.*t326*t558;
  t2180 = t2155 + t2158;
  t2065 = t165*t700*t3;
  t2085 = t637*t708;
  t2119 = t2065 + t2085;
  t770 = t5*t763;
  t784 = 0. + t770;
  t790 = t784*t199;
  t798 = t763*t558;
  t828 = 0. + t798;
  t834 = t27*t828;
  t840 = 0. + t790 + t834;
  t851 = t700*t840;
  t865 = 0. + t708;
  t883 = -1.*t191*t865;
  t897 = 0. + t851 + t883;
  t1034 = t3*t1030;
  t1041 = 0. + t1034;
  t1048 = -1.*t191*t1041;
  t1094 = -1.*t558*t1092;
  t1169 = t5*t1137;
  t1176 = 0. + t1094 + t1169;
  t1189 = t199*t1176;
  t1206 = t5*t1092;
  t1250 = t558*t1137;
  t1342 = 0. + t1206 + t1250;
  t1360 = t27*t1342;
  t1370 = 0. + t1189 + t1360;
  t1469 = t700*t1370;
  t1491 = 0. + t1048 + t1469;
  t1544 = t3*t1528;
  t1559 = 0. + t1544;
  t1568 = -1.*t191*t1559;
  t1629 = -1.*t558*t1030;
  t1757 = t5*t1725;
  t1796 = 0. + t1629 + t1757;
  t1843 = t199*t1796;
  t1887 = t5*t1030;
  t1918 = t558*t1725;
  t1942 = 0. + t1887 + t1918;
  t1957 = t27*t1942;
  t1980 = 0. + t1843 + t1957;
  t1990 = t700*t1980;
  t2029 = 0. + t1568 + t1990;
  t2128 = t924*t2119;
  t2183 = t2180*t952;
  t2190 = t2128 + t2183;
  t2206 = t924*t2180;
  t2207 = -1.*t2119*t952;
  t2216 = t2206 + t2207;
  t912 = 0.00334*t897;
  t1503 = 3.e-6*t1491;
  t2042 = 1.e-6*t2029;
  t2043 = t912 + t1503 + t2042;
  t2457 = t165*t27;
  t2502 = t37*t191*t199;
  t2510 = t2457 + t2502;
  t2545 = t5*t2510;
  t2575 = t27*t37*t191;
  t2582 = -1.*t165*t199;
  t2601 = t2575 + t2582;
  t2661 = t2601*t558;
  t2678 = t2545 + t2661;
  t2884 = t5*t2601;
  t2919 = -1.*t2510*t558;
  t2925 = t2884 + t2919;
  t2754 = t700*t3*t37;
  t2755 = t2678*t708;
  t2833 = t2754 + t2755;
  t2317 = 3.e-6*t897;
  t2319 = 0.00216*t1491;
  t2333 = 0.000956*t2029;
  t2340 = t2317 + t2319 + t2333;
  t2863 = t924*t2833;
  t2959 = t2925*t952;
  t2966 = t2863 + t2959;
  t3020 = t924*t2925;
  t3105 = -1.*t2833*t952;
  t3107 = t3020 + t3105;
  t2385 = 1.e-6*t897;
  t2393 = 0.000956*t1491;
  t2394 = 0.00144*t2029;
  t2403 = t2385 + t2393 + t2394;
  t3179 = t700*t5*t199;
  t3204 = t700*t27*t558;
  t3210 = t3179 + t3204;
  t3365 = t700*t27*t5;
  t3371 = -1.*t700*t199*t558;
  t3375 = t3365 + t3371;
  t3295 = -1.*t3*t191;
  t3328 = t3210*t708;
  t3337 = t3295 + t3328;
  t3351 = t924*t3337;
  t3389 = t3375*t952;
  t3403 = t3351 + t3389;
  t3448 = t924*t3375;
  t3453 = -1.*t3337*t952;
  t3457 = t3448 + t3453;
  t639 = -1.*t3*t637;
  t719 = t165*t700*t708;
  t746 = t639 + t719;
  t2205 = t928*t2190;
  t2302 = -1.*t941*t2216;
  t2309 = t2205 + t2302;
  t3581 = t27*t784;
  t3592 = -1.*t199*t828;
  t3596 = 0. + t3581 + t3592;
  t3635 = t27*t1176;
  t3654 = -1.*t199*t1342;
  t3663 = 0. + t3635 + t3654;
  t3670 = t27*t1796;
  t3678 = -1.*t199*t1942;
  t3681 = 0. + t3670 + t3678;
  t2359 = t941*t2190;
  t2369 = t928*t2216;
  t2378 = t2359 + t2369;
  t2685 = -1.*t3*t2678;
  t2722 = t700*t37*t708;
  t2726 = t2685 + t2722;
  t3605 = 0.00334*t3596;
  t3666 = 3.e-6*t3663;
  t3703 = 1.e-6*t3681;
  t3736 = t3605 + t3666 + t3703;
  t2996 = t928*t2966;
  t3113 = -1.*t941*t3107;
  t3120 = t2996 + t3113;
  t3760 = 3.e-6*t3596;
  t3782 = 0.00216*t3663;
  t3800 = 0.000956*t3681;
  t3817 = t3760 + t3782 + t3800;
  t3136 = t941*t2966;
  t3143 = t928*t3107;
  t3148 = t3136 + t3143;
  t3828 = 1.e-6*t3596;
  t3861 = 0.000956*t3663;
  t3877 = 0.00144*t3681;
  t3910 = t3828 + t3861 + t3877;
  t3230 = -1.*t3*t3210;
  t3253 = -1.*t191*t708;
  t3254 = t3230 + t3253;
  t3417 = t928*t3403;
  t3470 = -1.*t941*t3457;
  t3483 = t3417 + t3470;
  t3518 = t941*t3403;
  t3528 = t928*t3457;
  t3552 = t3518 + t3528;
  t4118 = 0.00334*t865;
  t4142 = 3.e-6*t1041;
  t4151 = 1.e-6*t1559;
  t4153 = t4118 + t4142 + t4151;
  t4240 = 3.e-6*t865;
  t4274 = 0.00216*t1041;
  t4286 = 0.000956*t1559;
  t4287 = t4240 + t4274 + t4286;
  t4318 = 1.e-6*t865;
  t4329 = 0.000956*t1041;
  t4338 = 0.00144*t1559;
  t4340 = t4318 + t4329 + t4338;
  t4178 = t746*t4153;
  t4303 = t2309*t4287;
  t4357 = t2378*t4340;
  t4370 = t4178 + t4303 + t4357;
  t4379 = t2726*t4153;
  t4386 = t3120*t4287;
  t4389 = t3148*t4340;
  t4408 = t4379 + t4386 + t4389;
  t4427 = t3254*t4153;
  t4441 = t3483*t4287;
  t4479 = t3552*t4340;
  t4487 = t4427 + t4441 + t4479;
  t4489 = 1.e-6*t1030;
  t4492 = 3.e-6*t1092;
  t4512 = t4489 + t4492;
  t4523 = 0.000956*t1030;
  t4539 = 0.00216*t1092;
  t4554 = t4523 + t4539;
  t4581 = 0.00144*t1030;
  t4588 = 0.000956*t1092;
  t4590 = t4581 + t4588;
  t4772 = 0.00334*t746;
  t4777 = 3.e-6*t2309;
  t4802 = 1.e-6*t2378;
  t4821 = t4772 + t4777 + t4802;
  t4842 = 0.00334*t2726;
  t4852 = 3.e-6*t3120;
  t4872 = 1.e-6*t3148;
  t4881 = t4842 + t4852 + t4872;
  t4887 = 0.00334*t3254;
  t4945 = 3.e-6*t3483;
  t4971 = 1.e-6*t3552;
  t4980 = t4887 + t4945 + t4971;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2309*t2340 + t2378*t2403 + t2043*t746;
  p_output1[10]=t2043*t2726 + t2340*t3120 + t2403*t3148;
  p_output1[11]=t2043*t3254 + t2340*t3483 + t2403*t3552;
  p_output1[12]=t2309*t3817 + t2378*t3910 + t3736*t746;
  p_output1[13]=t2726*t3736 + t3120*t3817 + t3148*t3910;
  p_output1[14]=t3254*t3736 + t3483*t3817 + t3552*t3910;
  p_output1[15]=t4370;
  p_output1[16]=t4408;
  p_output1[17]=t4487;
  p_output1[18]=t4370;
  p_output1[19]=t4408;
  p_output1[20]=t4487;
  p_output1[21]=t2309*t4554 + t2378*t4590 + t4512*t746;
  p_output1[22]=t2726*t4512 + t3120*t4554 + t3148*t4590;
  p_output1[23]=t3254*t4512 + t3483*t4554 + t3552*t4590;
  p_output1[24]=t4821;
  p_output1[25]=t4881;
  p_output1[26]=t4980;
  p_output1[27]=t4821;
  p_output1[28]=t4881;
  p_output1[29]=t4980;
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

#include "Jdq_AMWorld_LeftKnee_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
