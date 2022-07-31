/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:22 GMT-04:00
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
  double t57;
  double t275;
  double t301;
  double t2203;
  double t17;
  double t430;
  double t1636;
  double t3512;
  double t3481;
  double t3487;
  double t3623;
  double t50;
  double t2262;
  double t3492;
  double t3668;
  double t4052;
  double t704;
  double t5130;
  double t5205;
  double t5542;
  double t5731;
  double t5989;
  double t6526;
  double t6659;
  double t6679;
  double t6874;
  double t6915;
  double t366;
  double t381;
  double t610;
  double t1836;
  double t1873;
  double t1915;
  double t2011;
  double t2174;
  double t2414;
  double t2524;
  double t2795;
  double t4908;
  double t4938;
  double t4941;
  double t5569;
  double t6152;
  double t6168;
  double t6175;
  double t6177;
  double t6193;
  double t6228;
  double t6234;
  double t6256;
  double t6360;
  double t6468;
  double t6705;
  double t6774;
  double t6819;
  double t6848;
  double t6952;
  double t6994;
  double t7027;
  double t7056;
  double t7080;
  double t7085;
  double t7211;
  double t7243;
  double t7313;
  double t7321;
  double t7488;
  double t7513;
  double t7514;
  double t7528;
  double t7534;
  double t7535;
  double t7536;
  double t7537;
  double t7538;
  double t7542;
  double t7551;
  double t7561;
  double t7563;
  double t7566;
  double t7568;
  double t7573;
  double t7574;
  double t7584;
  double t7599;
  double t7610;
  double t7629;
  double t7630;
  double t7632;
  double t7654;
  double t7665;
  double t7666;
  double t7672;
  double t7773;
  double t7788;
  double t7791;
  double t7793;
  double t7814;
  double t7826;
  double t7829;
  double t7834;
  double t7746;
  double t7753;
  double t7754;
  double t7759;
  double t7762;
  double t7766;
  double t7767;
  double t7768;
  double t7769;
  double t7783;
  double t7795;
  double t7796;
  double t7797;
  double t7798;
  double t7800;
  double t7801;
  double t7809;
  double t7812;
  double t7816;
  double t7845;
  double t7852;
  double t7855;
  double t7856;
  double t7871;
  double t7873;
  double t7874;
  double t7883;
  double t7910;
  double t7913;
  double t7914;
  double t7921;
  double t7922;
  double t7925;
  double t7930;
  double t7931;
  double t7940;
  double t7945;
  double t7967;
  double t7968;
  double t7971;
  double t7985;
  double t7992;
  double t7996;
  double t7999;
  double t8003;
  double t8005;
  double t8008;
  double t8021;
  double t8022;
  double t8042;
  double t8044;
  double t8061;
  double t8062;
  double t8067;
  double t8076;
  double t8083;
  double t8086;
  double t8091;
  double t8097;
  double t8098;
  double t8103;
  double t8104;
  double t8105;
  double t8112;
  double t8122;
  double t8126;
  double t8137;
  double t8143;
  double t8179;
  double t8216;
  double t8226;
  double t8231;
  double t8240;
  double t8246;
  double t8250;
  double t8260;
  double t8272;
  double t8274;
  double t8278;
  double t8359;
  double t8389;
  double t8400;
  double t8418;
  double t8424;
  double t8447;
  double t8448;
  double t8232;
  double t8239;
  double t8244;
  double t8268;
  double t8279;
  double t8280;
  double t8293;
  double t8297;
  double t8306;
  double t8321;
  double t8323;
  double t8326;
  double t8331;
  double t8339;
  double t8340;
  double t8379;
  double t8380;
  double t8388;
  double t8420;
  double t8459;
  double t8462;
  double t8464;
  double t8466;
  double t8469;
  double t8478;
  double t8479;
  double t8490;
  double t8526;
  double t8530;
  double t8531;
  double t8341;
  double t8532;
  double t8536;
  double t8542;
  double t8544;
  double t8547;
  double t8549;
  double t8552;
  double t8553;
  t57 = Cos(var1[7]);
  t275 = -1.*t57;
  t301 = 0. + t275;
  t2203 = Cos(var1[4]);
  t17 = Sin(var1[4]);
  t430 = Sin(var1[5]);
  t1636 = Sin(var1[6]);
  t3512 = Cos(var1[9]);
  t3481 = Cos(var1[8]);
  t3487 = Sin(var1[9]);
  t3623 = Sin(var1[8]);
  t50 = Cos(var1[6]);
  t2262 = Sin(var1[7]);
  t3492 = t3481*t3487;
  t3668 = t3512*t3623;
  t4052 = 0. + t3492 + t3668;
  t704 = Cos(var1[5]);
  t5130 = -1.*t3512*t3481;
  t5205 = t3487*t3623;
  t5542 = 0. + t5130 + t5205;
  t5731 = t2262*t4052;
  t5989 = 0. + t5731;
  t6526 = t3512*t3481;
  t6659 = -1.*t3487*t3623;
  t6679 = 0. + t6526 + t6659;
  t6874 = t2262*t6679;
  t6915 = 0. + t6874;
  t366 = t50*t301;
  t381 = 0. + t366;
  t610 = t381*t430;
  t1836 = t301*t1636;
  t1873 = 0. + t1836;
  t1915 = t704*t1873;
  t2011 = 0. + t610 + t1915;
  t2174 = -1.*t17*t2011;
  t2414 = 0. + t2262;
  t2524 = -1.*t2203*t2414;
  t2795 = t2174 + t2524;
  t4908 = t57*t4052;
  t4938 = 0. + t4908;
  t4941 = -1.*t2203*t4938;
  t5569 = -1.*t1636*t5542;
  t6152 = t50*t5989;
  t6168 = 0. + t5569 + t6152;
  t6175 = t430*t6168;
  t6177 = t50*t5542;
  t6193 = t1636*t5989;
  t6228 = 0. + t6177 + t6193;
  t6234 = t704*t6228;
  t6256 = 0. + t6175 + t6234;
  t6360 = -1.*t17*t6256;
  t6468 = t4941 + t6360;
  t6705 = t57*t6679;
  t6774 = 0. + t6705;
  t6819 = -1.*t2203*t6774;
  t6848 = -1.*t1636*t4052;
  t6952 = t50*t6915;
  t6994 = 0. + t6848 + t6952;
  t7027 = t430*t6994;
  t7056 = t50*t4052;
  t7080 = t1636*t6915;
  t7085 = 0. + t7056 + t7080;
  t7211 = t704*t7085;
  t7243 = 0. + t7027 + t7211;
  t7313 = -1.*t17*t7243;
  t7321 = t6819 + t7313;
  t7488 = -1.*t381*t430;
  t7513 = -1.*t704*t1873;
  t7514 = t7488 + t7513;
  t7528 = var2[4]*t7514;
  t7534 = t704*t381;
  t7535 = -1.*t430*t1873;
  t7536 = t7534 + t7535;
  t7537 = var2[3]*t2203*t7536;
  t7538 = t7528 + t7537;
  t7542 = -1.*t430*t6168;
  t7551 = -1.*t704*t6228;
  t7561 = t7542 + t7551;
  t7563 = var2[4]*t7561;
  t7566 = t704*t6168;
  t7568 = -1.*t430*t6228;
  t7573 = t7566 + t7568;
  t7574 = var2[3]*t2203*t7573;
  t7584 = t7563 + t7574;
  t7599 = -1.*t430*t6994;
  t7610 = -1.*t704*t7085;
  t7629 = t7599 + t7610;
  t7630 = var2[4]*t7629;
  t7632 = t704*t6994;
  t7654 = -1.*t430*t7085;
  t7665 = t7632 + t7654;
  t7666 = var2[3]*t2203*t7665;
  t7672 = t7630 + t7666;
  t7773 = t5569 + t6152;
  t7788 = -1.*t50*t5542;
  t7791 = -1.*t1636*t5989;
  t7793 = t7788 + t7791;
  t7814 = t6848 + t6952;
  t7826 = -1.*t50*t4052;
  t7829 = -1.*t1636*t6915;
  t7834 = t7826 + t7829;
  t7746 = -1.*t50*t301*t430;
  t7753 = -1.*t704*t301*t1636;
  t7754 = t7746 + t7753;
  t7759 = var2[4]*t7754;
  t7762 = t704*t50*t301;
  t7766 = -1.*t301*t430*t1636;
  t7767 = t7762 + t7766;
  t7768 = var2[3]*t2203*t7767;
  t7769 = t7759 + t7768;
  t7783 = -1.*t430*t7773;
  t7795 = t704*t7793;
  t7796 = t7783 + t7795;
  t7797 = var2[4]*t7796;
  t7798 = t704*t7773;
  t7800 = t430*t7793;
  t7801 = t7798 + t7800;
  t7809 = var2[3]*t2203*t7801;
  t7812 = t7797 + t7809;
  t7816 = -1.*t430*t7814;
  t7845 = t704*t7834;
  t7852 = t7816 + t7845;
  t7855 = var2[4]*t7852;
  t7856 = t704*t7814;
  t7871 = t430*t7834;
  t7873 = t7856 + t7871;
  t7874 = var2[3]*t2203*t7873;
  t7883 = t7855 + t7874;
  t7910 = var2[5]*t57;
  t7913 = var2[6]*t57;
  t7914 = t704*t50*t2262;
  t7921 = -1.*t430*t1636*t2262;
  t7922 = t7914 + t7921;
  t7925 = var2[4]*t7922;
  t7930 = -1.*t57*t17;
  t7931 = t50*t430*t2262;
  t7940 = t704*t1636*t2262;
  t7945 = t7931 + t7940;
  t7967 = t2203*t7945;
  t7968 = t7930 + t7967;
  t7971 = var2[3]*t7968;
  t7985 = t7910 + t7913 + t7925 + t7971;
  t7992 = -1.*var2[5]*t2262*t4052;
  t7996 = -1.*var2[6]*t2262*t4052;
  t7999 = t704*t50*t57*t4052;
  t8003 = -1.*t57*t430*t1636*t4052;
  t8005 = t7999 + t8003;
  t8008 = var2[4]*t8005;
  t8021 = t17*t2262*t4052;
  t8022 = t50*t57*t430*t4052;
  t8042 = t704*t57*t1636*t4052;
  t8044 = t8022 + t8042;
  t8061 = t2203*t8044;
  t8062 = t8021 + t8061;
  t8067 = var2[3]*t8062;
  t8076 = t7992 + t7996 + t8008 + t8067;
  t8083 = -1.*var2[5]*t2262*t6679;
  t8086 = -1.*var2[6]*t2262*t6679;
  t8091 = t704*t50*t57*t6679;
  t8097 = -1.*t57*t430*t1636*t6679;
  t8098 = t8091 + t8097;
  t8103 = var2[4]*t8098;
  t8104 = t17*t2262*t6679;
  t8105 = t50*t57*t430*t6679;
  t8112 = t704*t57*t1636*t6679;
  t8122 = t8105 + t8112;
  t8126 = t2203*t8122;
  t8137 = t8104 + t8126;
  t8143 = var2[3]*t8137;
  t8179 = t8083 + t8086 + t8103 + t8143;
  t8216 = -1.*t3481*t3487;
  t8226 = -1.*t3512*t3623;
  t8231 = t8216 + t8226;
  t8240 = t6526 + t6659;
  t8246 = t1636*t2262*t8231;
  t8250 = t50*t8240;
  t8260 = t8246 + t8250;
  t8272 = t50*t2262*t8231;
  t8274 = -1.*t1636*t8240;
  t8278 = t8272 + t8274;
  t8359 = t3492 + t3668;
  t8389 = -1.*t1636*t8359;
  t8400 = t50*t2262*t8240;
  t8418 = t8389 + t8400;
  t8424 = t50*t8359;
  t8447 = t1636*t2262*t8240;
  t8448 = t8424 + t8447;
  t8232 = var2[5]*t57*t8231;
  t8239 = var2[6]*t57*t8231;
  t8244 = var2[7]*t8240;
  t8268 = -1.*t430*t8260;
  t8279 = t704*t8278;
  t8280 = t8268 + t8279;
  t8293 = var2[4]*t8280;
  t8297 = -1.*t57*t17*t8231;
  t8306 = t704*t8260;
  t8321 = t430*t8278;
  t8323 = t8306 + t8321;
  t8326 = t2203*t8323;
  t8331 = t8297 + t8326;
  t8339 = var2[3]*t8331;
  t8340 = t8232 + t8239 + t8244 + t8293 + t8339;
  t8379 = var2[7]*t8359;
  t8380 = var2[5]*t57*t8240;
  t8388 = var2[6]*t57*t8240;
  t8420 = t704*t8418;
  t8459 = -1.*t430*t8448;
  t8462 = t8420 + t8459;
  t8464 = var2[4]*t8462;
  t8466 = -1.*t57*t17*t8240;
  t8469 = t430*t8418;
  t8478 = t704*t8448;
  t8479 = t8469 + t8478;
  t8490 = t2203*t8479;
  t8526 = t8466 + t8490;
  t8530 = var2[3]*t8526;
  t8531 = t8379 + t8380 + t8388 + t8464 + t8530;
  t8341 = 0.000956*t8340;
  t8532 = 0.00216*t8531;
  t8536 = t8341 + t8532;
  t8542 = 0.00144*t8340;
  t8544 = 0.000956*t8531;
  t8547 = t8542 + t8544;
  t8549 = 1.e-6*t8340;
  t8552 = 3.e-6*t8531;
  t8553 = t8549 + t8552;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=3.e-6*t2795*var2[3] + 0.00216*t6468*var2[3] + 0.000956*t7321*var2[3];
  p_output1[13]=1.e-6*t2795*var2[3] + 0.000956*t6468*var2[3] + 0.00144*t7321*var2[3];
  p_output1[14]=0.00334*t2795*var2[3] + 3.e-6*t6468*var2[3] + 1.e-6*t7321*var2[3];
  p_output1[15]=3.e-6*t7538 + 0.00216*t7584 + 0.000956*t7672;
  p_output1[16]=1.e-6*t7538 + 0.000956*t7584 + 0.00144*t7672;
  p_output1[17]=0.00334*t7538 + 3.e-6*t7584 + 1.e-6*t7672;
  p_output1[18]=3.e-6*t7769 + 0.00216*t7812 + 0.000956*t7883;
  p_output1[19]=1.e-6*t7769 + 0.000956*t7812 + 0.00144*t7883;
  p_output1[20]=0.00334*t7769 + 3.e-6*t7812 + 1.e-6*t7883;
  p_output1[21]=3.e-6*t7985 + 0.00216*t8076 + 0.000956*t8179;
  p_output1[22]=1.e-6*t7985 + 0.000956*t8076 + 0.00144*t8179;
  p_output1[23]=0.00334*t7985 + 3.e-6*t8076 + 1.e-6*t8179;
  p_output1[24]=t8536;
  p_output1[25]=t8547;
  p_output1[26]=t8553;
  p_output1[27]=t8536;
  p_output1[28]=t8547;
  p_output1[29]=t8553;
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

#include "Jq_AMBody_LeftKnee_mex.hh"

namespace SymExpression
{

void Jq_AMBody_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
