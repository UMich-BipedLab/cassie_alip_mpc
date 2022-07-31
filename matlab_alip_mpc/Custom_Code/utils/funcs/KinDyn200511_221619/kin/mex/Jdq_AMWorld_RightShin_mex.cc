/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:53 GMT-04:00
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
  double t432;
  double t435;
  double t439;
  double t266;
  double t11;
  double t470;
  double t716;
  double t328;
  double t160;
  double t576;
  double t536;
  double t737;
  double t979;
  double t959;
  double t962;
  double t983;
  double t1121;
  double t966;
  double t1001;
  double t1054;
  double t930;
  double t1172;
  double t1229;
  double t1236;
  double t1119;
  double t1282;
  double t1333;
  double t1397;
  double t1434;
  double t1461;
  double t1471;
  double t1508;
  double t1790;
  double t1897;
  double t1905;
  double t1929;
  double t1945;
  double t1999;
  double t2029;
  double t2044;
  double t2053;
  double t2059;
  double t729;
  double t745;
  double t784;
  double t814;
  double t865;
  double t878;
  double t800;
  double t889;
  double t910;
  double t2521;
  double t2522;
  double t2560;
  double t2591;
  double t2612;
  double t2620;
  double t2572;
  double t2634;
  double t2637;
  double t2647;
  double t2659;
  double t2664;
  double t1337;
  double t1350;
  double t1373;
  double t1467;
  double t1520;
  double t1572;
  double t1582;
  double t1584;
  double t1607;
  double t1642;
  double t1652;
  double t1659;
  double t1732;
  double t1745;
  double t1948;
  double t1953;
  double t1983;
  double t2045;
  double t2117;
  double t2153;
  double t2199;
  double t2200;
  double t2201;
  double t2244;
  double t2261;
  double t2342;
  double t2350;
  double t2396;
  double t2644;
  double t2677;
  double t2678;
  double t2737;
  double t2791;
  double t2795;
  double t55;
  double t255;
  double t484;
  double t500;
  double t515;
  double t550;
  double t573;
  double t578;
  double t683;
  double t686;
  double t690;
  double t1782;
  double t2408;
  double t2414;
  double t3155;
  double t3166;
  double t3173;
  double t3204;
  double t3222;
  double t3236;
  double t3179;
  double t3245;
  double t3249;
  double t3310;
  double t3324;
  double t3338;
  double t3355;
  double t3392;
  double t3404;
  double t3353;
  double t3408;
  double t3409;
  double t3468;
  double t3478;
  double t3494;
  double t2924;
  double t3043;
  double t3049;
  double t3461;
  double t3499;
  double t3509;
  double t3547;
  double t3549;
  double t3550;
  double t3680;
  double t3692;
  double t3711;
  double t3774;
  double t3775;
  double t3818;
  double t3844;
  double t3848;
  double t3879;
  double t3821;
  double t3888;
  double t3900;
  double t3923;
  double t3934;
  double t3952;
  double t3901;
  double t4049;
  double t4110;
  double t4166;
  double t4171;
  double t4207;
  double t723;
  double t914;
  double t917;
  double t2728;
  double t2826;
  double t2916;
  double t4601;
  double t4616;
  double t4643;
  double t4668;
  double t4678;
  double t4681;
  double t3064;
  double t3067;
  double t3076;
  double t4531;
  double t4536;
  double t4562;
  double t3154;
  double t3251;
  double t3263;
  double t4664;
  double t4684;
  double t4732;
  double t3517;
  double t3577;
  double t3604;
  double t4771;
  double t4777;
  double t4784;
  double t3642;
  double t3643;
  double t3644;
  double t3666;
  double t3724;
  double t3752;
  double t4126;
  double t4252;
  double t4278;
  double t4301;
  double t4376;
  double t4391;
  double t5169;
  double t5189;
  double t5203;
  double t5242;
  double t5254;
  double t5299;
  double t5115;
  double t5214;
  double t5324;
  double t5326;
  double t5339;
  double t5357;
  double t5407;
  double t5415;
  double t5438;
  double t5463;
  double t5495;
  double t5544;
  double t5646;
  double t5652;
  double t5654;
  double t5762;
  double t5828;
  double t5868;
  double t6244;
  double t6261;
  double t6265;
  t432 = Cos(var1[14]);
  t435 = -1.*t432;
  t439 = 0. + t435;
  t266 = Cos(var1[4]);
  t11 = Sin(var1[14]);
  t470 = Sin(var1[13]);
  t716 = Cos(var1[3]);
  t328 = Cos(var1[5]);
  t160 = Sin(var1[4]);
  t576 = Sin(var1[5]);
  t536 = Cos(var1[13]);
  t737 = Sin(var1[3]);
  t979 = Cos(var1[16]);
  t959 = Cos(var1[17]);
  t962 = Sin(var1[16]);
  t983 = Sin(var1[17]);
  t1121 = Cos(var1[15]);
  t966 = t959*t962;
  t1001 = t979*t983;
  t1054 = 0. + t966 + t1001;
  t930 = Sin(var1[15]);
  t1172 = t979*t959;
  t1229 = -1.*t962*t983;
  t1236 = 0. + t1172 + t1229;
  t1119 = -1.*t930*t1054;
  t1282 = t1121*t1236;
  t1333 = 0. + t1119 + t1282;
  t1397 = t1121*t1054;
  t1434 = t930*t1236;
  t1461 = 0. + t1397 + t1434;
  t1471 = t11*t1333;
  t1508 = 0. + t1471;
  t1790 = -1.*t979*t959;
  t1897 = t962*t983;
  t1905 = 0. + t1790 + t1897;
  t1929 = -1.*t930*t1905;
  t1945 = 0. + t1397 + t1929;
  t1999 = t930*t1054;
  t2029 = t1121*t1905;
  t2044 = 0. + t1999 + t2029;
  t2053 = t11*t1945;
  t2059 = 0. + t2053;
  t729 = t716*t328*t160;
  t745 = t737*t576;
  t784 = t729 + t745;
  t814 = -1.*t328*t737;
  t865 = t716*t160*t576;
  t878 = t814 + t865;
  t800 = t470*t784;
  t889 = t536*t878;
  t910 = t800 + t889;
  t2521 = t536*t784;
  t2522 = -1.*t470*t878;
  t2560 = t2521 + t2522;
  t2591 = t432*t716*t266;
  t2612 = t11*t910;
  t2620 = t2591 + t2612;
  t2572 = t930*t2560;
  t2634 = t1121*t2620;
  t2637 = t2572 + t2634;
  t2647 = t1121*t2560;
  t2659 = -1.*t930*t2620;
  t2664 = t2647 + t2659;
  t1337 = t432*t1333;
  t1350 = 0. + t1337;
  t1373 = -1.*t1350*t160;
  t1467 = t536*t1461;
  t1520 = t470*t1508;
  t1572 = 0. + t1467 + t1520;
  t1582 = t328*t1572;
  t1584 = -1.*t470*t1461;
  t1607 = t536*t1508;
  t1642 = 0. + t1584 + t1607;
  t1652 = t1642*t576;
  t1659 = 0. + t1582 + t1652;
  t1732 = t266*t1659;
  t1745 = 0. + t1373 + t1732;
  t1948 = t432*t1945;
  t1953 = 0. + t1948;
  t1983 = -1.*t1953*t160;
  t2045 = t536*t2044;
  t2117 = t470*t2059;
  t2153 = 0. + t2045 + t2117;
  t2199 = t328*t2153;
  t2200 = -1.*t470*t2044;
  t2201 = t536*t2059;
  t2244 = 0. + t2200 + t2201;
  t2261 = t2244*t576;
  t2342 = 0. + t2199 + t2261;
  t2350 = t266*t2342;
  t2396 = 0. + t1983 + t2350;
  t2644 = -1.*t962*t2637;
  t2677 = t979*t2664;
  t2678 = t2644 + t2677;
  t2737 = t979*t2637;
  t2791 = t962*t2664;
  t2795 = t2737 + t2791;
  t55 = 0. + t11;
  t255 = -1.*t55*t160;
  t484 = t439*t470;
  t500 = 0. + t484;
  t515 = t328*t500;
  t550 = t536*t439;
  t573 = 0. + t550;
  t578 = t573*t576;
  t683 = 0. + t515 + t578;
  t686 = t266*t683;
  t690 = 0. + t255 + t686;
  t1782 = 0.0341*t1745;
  t2408 = 0.000334*t2396;
  t2414 = t1782 + t2408;
  t3155 = t328*t737*t160;
  t3166 = -1.*t716*t576;
  t3173 = t3155 + t3166;
  t3204 = t716*t328;
  t3222 = t737*t160*t576;
  t3236 = t3204 + t3222;
  t3179 = t470*t3173;
  t3245 = t536*t3236;
  t3249 = t3179 + t3245;
  t3310 = t536*t3173;
  t3324 = -1.*t470*t3236;
  t3338 = t3310 + t3324;
  t3355 = t432*t266*t737;
  t3392 = t11*t3249;
  t3404 = t3355 + t3392;
  t3353 = t930*t3338;
  t3408 = t1121*t3404;
  t3409 = t3353 + t3408;
  t3468 = t1121*t3338;
  t3478 = -1.*t930*t3404;
  t3494 = t3468 + t3478;
  t2924 = 0.000334*t1745;
  t3043 = 0.00036*t2396;
  t3049 = t2924 + t3043;
  t3461 = -1.*t962*t3409;
  t3499 = t979*t3494;
  t3509 = t3461 + t3499;
  t3547 = t979*t3409;
  t3549 = t962*t3494;
  t3550 = t3547 + t3549;
  t3680 = t266*t328*t470;
  t3692 = t536*t266*t576;
  t3711 = t3680 + t3692;
  t3774 = t536*t266*t328;
  t3775 = -1.*t266*t470*t576;
  t3818 = t3774 + t3775;
  t3844 = -1.*t432*t160;
  t3848 = t11*t3711;
  t3879 = t3844 + t3848;
  t3821 = t930*t3818;
  t3888 = t1121*t3879;
  t3900 = t3821 + t3888;
  t3923 = t1121*t3818;
  t3934 = -1.*t930*t3879;
  t3952 = t3923 + t3934;
  t3901 = -1.*t962*t3900;
  t4049 = t979*t3952;
  t4110 = t3901 + t4049;
  t4166 = t979*t3900;
  t4171 = t962*t3952;
  t4207 = t4166 + t4171;
  t723 = t716*t266*t11;
  t914 = -1.*t432*t910;
  t917 = t723 + t914;
  t2728 = t983*t2678;
  t2826 = t959*t2795;
  t2916 = t2728 + t2826;
  t4601 = t328*t1642;
  t4616 = -1.*t1572*t576;
  t4643 = 0. + t4601 + t4616;
  t4668 = t328*t2244;
  t4678 = -1.*t2153*t576;
  t4681 = 0. + t4668 + t4678;
  t3064 = -1.*t959*t2678;
  t3067 = t983*t2795;
  t3076 = t3064 + t3067;
  t4531 = t573*t328;
  t4536 = -1.*t500*t576;
  t4562 = 0. + t4531 + t4536;
  t3154 = t266*t11*t737;
  t3251 = -1.*t432*t3249;
  t3263 = t3154 + t3251;
  t4664 = 0.0341*t4643;
  t4684 = 0.000334*t4681;
  t4732 = t4664 + t4684;
  t3517 = t983*t3509;
  t3577 = t959*t3550;
  t3604 = t3517 + t3577;
  t4771 = 0.000334*t4643;
  t4777 = 0.00036*t4681;
  t4784 = t4771 + t4777;
  t3642 = -1.*t959*t3509;
  t3643 = t983*t3550;
  t3644 = t3642 + t3643;
  t3666 = -1.*t11*t160;
  t3724 = -1.*t432*t3711;
  t3752 = t3666 + t3724;
  t4126 = t983*t4110;
  t4252 = t959*t4207;
  t4278 = t4126 + t4252;
  t4301 = -1.*t959*t4110;
  t4376 = t983*t4207;
  t4391 = t4301 + t4376;
  t5169 = 0.0341*t1350;
  t5189 = 0.000334*t1953;
  t5203 = t5169 + t5189;
  t5242 = 0.000334*t1350;
  t5254 = 0.00036*t1953;
  t5299 = t5242 + t5254;
  t5115 = 0.0341*t55*t917;
  t5214 = t5203*t2916;
  t5324 = t5299*t3076;
  t5326 = t5115 + t5214 + t5324;
  t5339 = 0.0341*t55*t3263;
  t5357 = t5203*t3604;
  t5407 = t5299*t3644;
  t5415 = t5339 + t5357 + t5407;
  t5438 = 0.0341*t55*t3752;
  t5463 = t5203*t4278;
  t5495 = t5299*t4391;
  t5544 = t5438 + t5463 + t5495;
  t5646 = 0.0341*t1461;
  t5652 = 0.000334*t2044;
  t5654 = t5646 + t5652;
  t5762 = 0.000334*t1461;
  t5828 = 0.00036*t2044;
  t5868 = t5762 + t5828;
  t6244 = 0.0341*t917;
  t6261 = 0.0341*t3263;
  t6265 = 0.0341*t3752;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t2414*t2916 + t3049*t3076 + 0.0341*t690*t917;
  p_output1[10]=t2414*t3604 + t3049*t3644 + 0.0341*t3263*t690;
  p_output1[11]=t2414*t4278 + t3049*t4391 + 0.0341*t3752*t690;
  p_output1[12]=t2916*t4732 + t3076*t4784 + 0.0341*t4562*t917;
  p_output1[13]=0.0341*t3263*t4562 + t3604*t4732 + t3644*t4784;
  p_output1[14]=0.0341*t3752*t4562 + t4278*t4732 + t4391*t4784;
  p_output1[15]=t5326;
  p_output1[16]=t5415;
  p_output1[17]=t5544;
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
  p_output1[39]=t5326;
  p_output1[40]=t5415;
  p_output1[41]=t5544;
  p_output1[42]=t2916*t5654 + t3076*t5868;
  p_output1[43]=t3604*t5654 + t3644*t5868;
  p_output1[44]=t4278*t5654 + t4391*t5868;
  p_output1[45]=t6244;
  p_output1[46]=t6261;
  p_output1[47]=t6265;
  p_output1[48]=t6244;
  p_output1[49]=t6261;
  p_output1[50]=t6265;
  p_output1[51]=t6244;
  p_output1[52]=t6261;
  p_output1[53]=t6265;
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

#include "Jdq_AMWorld_RightShin_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
