/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:46 GMT-04:00
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
  double t2599;
  double t583;
  double t1115;
  double t1213;
  double t1237;
  double t1622;
  double t928;
  double t3372;
  double t1479;
  double t1916;
  double t2245;
  double t4098;
  double t2754;
  double t3185;
  double t3233;
  double t3282;
  double t4158;
  double t4185;
  double t4247;
  double t4274;
  double t4346;
  double t4401;
  double t5203;
  double t5209;
  double t5215;
  double t5560;
  double t5662;
  double t5666;
  double t5715;
  double t6240;
  double t6408;
  double t6926;
  double t5932;
  double t8281;
  double t8282;
  double t8318;
  double t4609;
  double t5150;
  double t5186;
  double t5242;
  double t5292;
  double t5429;
  double t8341;
  double t8689;
  double t8690;
  double t8697;
  double t8483;
  double t6013;
  double t6050;
  double t7873;
  double t7976;
  double t8061;
  double t8891;
  double t8922;
  double t8926;
  double t8929;
  double t8930;
  double t2701;
  double t2769;
  double t3380;
  double t3517;
  double t3518;
  double t3662;
  double t3741;
  double t3777;
  double t3786;
  double t3869;
  double t3880;
  double t3962;
  double t4118;
  double t7703;
  double t7717;
  double t7730;
  double t7738;
  double t7740;
  double t7773;
  double t7776;
  double t8064;
  double t8266;
  double t9054;
  double t9080;
  double t9085;
  double t9088;
  double t9118;
  double t8759;
  double t9261;
  double t9262;
  double t9263;
  double t9264;
  double t9265;
  double t9266;
  double t9267;
  double t9268;
  double t8958;
  double t8959;
  double t8971;
  double t4255;
  double t4409;
  double t4567;
  double t4646;
  double t4655;
  double t4668;
  double t4714;
  double t4784;
  double t5024;
  double t8398;
  double t6173;
  double t6968;
  double t7099;
  double t7112;
  double t7194;
  double t7248;
  double t7342;
  double t7412;
  double t7431;
  double t9125;
  double t9134;
  double t9140;
  double t8338;
  double t8339;
  double t8467;
  double t8547;
  double t8617;
  double t8633;
  double t8638;
  double t9293;
  double t9294;
  double t9295;
  double t8799;
  double t8791;
  double t8797;
  double t8798;
  double t8833;
  double t8837;
  double t8838;
  double t9195;
  double t9201;
  double t9202;
  double t9204;
  double t9206;
  double t9243;
  double t9253;
  double t9254;
  double t9255;
  double t9256;
  double t9271;
  double t9272;
  double t9273;
  double t8889;
  double t8890;
  double t8953;
  double t9279;
  double t9280;
  double t9282;
  double t9283;
  double t9284;
  double t9285;
  double t9286;
  double t8722;
  double t8727;
  double t5222;
  double t5672;
  double t5760;
  double t5765;
  double t5831;
  double t6052;
  double t6121;
  double t9038;
  double t9039;
  double t9123;
  double t8688;
  double t8698;
  double t8737;
  double t8740;
  double t8741;
  double t8742;
  double t8747;
  double t9296;
  double t9297;
  double t9298;
  double t9299;
  double t9300;
  double t9301;
  double t9303;
  double t9304;
  double t9305;
  double t9322;
  double t9323;
  double t9324;
  double t9313;
  double t9314;
  double t9315;
  double t9259;
  double t9260;
  double t9269;
  t2599 = Sin(var1[3]);
  t583 = Cos(var1[4]);
  t1115 = Cos(var1[13]);
  t1213 = -1.*t1115;
  t1237 = 1. + t1213;
  t1622 = Sin(var1[13]);
  t928 = Cos(var1[5]);
  t3372 = Sin(var1[5]);
  t1479 = 0.07996*t1237;
  t1916 = 0.135*t1622;
  t2245 = 0. + t1479 + t1916;
  t4098 = Cos(var1[3]);
  t2754 = Sin(var1[4]);
  t3185 = -0.135*t1237;
  t3233 = 0.07996*t1622;
  t3282 = 0. + t3185 + t3233;
  t4158 = -1.*t4098*t928*t2754;
  t4185 = -1.*t2599*t3372;
  t4247 = t4158 + t4185;
  t4274 = t928*t2599;
  t4346 = -1.*t4098*t2754*t3372;
  t4401 = t4274 + t4346;
  t5203 = -1.*t928*t2599*t2754;
  t5209 = t4098*t3372;
  t5215 = t5203 + t5209;
  t5560 = -1.*t4098*t928;
  t5662 = -1.*t2599*t2754*t3372;
  t5666 = t5560 + t5662;
  t5715 = -1.*t1622*t5215;
  t6240 = t4098*t928;
  t6408 = t2599*t2754*t3372;
  t6926 = t6240 + t6408;
  t5932 = t1115*t5215;
  t8281 = t4098*t928*t2754;
  t8282 = t2599*t3372;
  t8318 = t8281 + t8282;
  t4609 = t1115*t4401;
  t5150 = 0.135*t1115;
  t5186 = t5150 + t3233;
  t5242 = 0.07996*t1115;
  t5292 = -0.135*t1622;
  t5429 = t5242 + t5292;
  t8341 = -1.*t1622*t8318;
  t8689 = -1.*t928*t2599;
  t8690 = t4098*t2754*t3372;
  t8697 = t8689 + t8690;
  t8483 = t1115*t8318;
  t6013 = -1.*t1622*t5666;
  t6050 = t5932 + t6013;
  t7873 = t1115*t4098*t583*t928;
  t7976 = -1.*t4098*t583*t1622*t3372;
  t8061 = t7873 + t7976;
  t8891 = -1.*t4098*t583*t928*t1622;
  t8922 = -1.*t1115*t4098*t583*t3372;
  t8926 = t8891 + t8922;
  t8929 = 0.07996*t8926;
  t8930 = -0.135*t8061;
  t2701 = -1.*t583*t928*t2245*t2599;
  t2769 = -0.08055*t2599*t2754;
  t3380 = -1.*t583*t3282*t2599*t3372;
  t3517 = -1.*t583*t928*t1622*t2599;
  t3518 = -1.*t1115*t583*t2599*t3372;
  t3662 = t3517 + t3518;
  t3741 = -0.135*t3662;
  t3777 = -1.*t1115*t583*t928*t2599;
  t3786 = t583*t1622*t2599*t3372;
  t3869 = t3777 + t3786;
  t3880 = 0.07996*t3869;
  t3962 = t2701 + t2769 + t3380 + t3741 + t3880;
  t4118 = 0.08055*t4098*t583;
  t7703 = t4098*t583*t928*t2245;
  t7717 = 0.08055*t4098*t2754;
  t7730 = t4098*t583*t3282*t3372;
  t7738 = t4098*t583*t928*t1622;
  t7740 = t1115*t4098*t583*t3372;
  t7773 = t7738 + t7740;
  t7776 = -0.135*t7773;
  t8064 = 0.07996*t8061;
  t8266 = t7703 + t7717 + t7730 + t7776 + t8064;
  t9054 = 0.07996*t3662;
  t9080 = t1115*t583*t928*t2599;
  t9085 = -1.*t583*t1622*t2599*t3372;
  t9088 = t9080 + t9085;
  t9118 = -0.135*t9088;
  t8759 = 0.08055*t583*t2599;
  t9261 = t928*t1622*t2754;
  t9262 = t1115*t2754*t3372;
  t9263 = t9261 + t9262;
  t9264 = 0.07996*t9263;
  t9265 = -1.*t1115*t928*t2754;
  t9266 = t1622*t2754*t3372;
  t9267 = t9265 + t9266;
  t9268 = -0.135*t9267;
  t8958 = t4098*t583*t928*t3282;
  t8959 = -1.*t4098*t583*t2245*t3372;
  t8971 = t8958 + t8959 + t8929 + t8930;
  t4255 = t2245*t4247;
  t4409 = t3282*t4401;
  t4567 = t1622*t4247;
  t4646 = t4567 + t4609;
  t4655 = -0.135*t4646;
  t4668 = t1115*t4247;
  t4714 = -1.*t1622*t4401;
  t4784 = t4668 + t4714;
  t5024 = 0.07996*t4784;
  t8398 = t8341 + t4609;
  t6173 = t3282*t5215;
  t6968 = t2245*t6926;
  t7099 = t1115*t6926;
  t7112 = t5715 + t7099;
  t7194 = 0.07996*t7112;
  t7248 = t1622*t6926;
  t7342 = t5932 + t7248;
  t7412 = -0.135*t7342;
  t7431 = t6173 + t6968 + t7194 + t7412;
  t9125 = t583*t928*t3282*t2599;
  t9134 = -1.*t583*t2245*t2599*t3372;
  t9140 = t9125 + t9134 + t9054 + t9118;
  t8338 = t3282*t8318;
  t8339 = t2245*t4401;
  t8467 = 0.07996*t8398;
  t8547 = t1622*t4401;
  t8617 = t8483 + t8547;
  t8633 = -0.135*t8617;
  t8638 = t8338 + t8339 + t8467 + t8633;
  t9293 = t928*t2599*t2754;
  t9294 = -1.*t4098*t3372;
  t9295 = t9293 + t9294;
  t8799 = t1115*t5666;
  t8791 = t2245*t5215;
  t8797 = t3282*t5666;
  t8798 = t1622*t5215;
  t8833 = t8798 + t8799;
  t8837 = -0.135*t8833;
  t8838 = 0.07996*t6050;
  t9195 = -1.*t583*t928*t2245;
  t9201 = -1.*t583*t3282*t3372;
  t9202 = -1.*t583*t928*t1622;
  t9204 = -1.*t1115*t583*t3372;
  t9206 = t9202 + t9204;
  t9243 = -0.135*t9206;
  t9253 = -1.*t1115*t583*t928;
  t9254 = t583*t1622*t3372;
  t9255 = t9253 + t9254;
  t9256 = 0.07996*t9255;
  t9271 = -1.*t928*t3282*t2754;
  t9272 = t2245*t2754*t3372;
  t9273 = t9271 + t9272 + t9264 + t9268;
  t8889 = t4098*t583*t928*t5186;
  t8890 = t4098*t583*t5429*t3372;
  t8953 = t8889 + t8890 + t8929 + t8930;
  t9279 = t5429*t8318;
  t9280 = t5186*t4401;
  t9282 = -0.135*t8398;
  t9283 = -1.*t1115*t8318;
  t9284 = t9283 + t4714;
  t9285 = 0.07996*t9284;
  t9286 = t9279 + t9280 + t9282 + t9285;
  t8722 = -1.*t1115*t8697;
  t8727 = t8341 + t8722;
  t5222 = t5186*t5215;
  t5672 = t5429*t5666;
  t5760 = -1.*t1115*t5666;
  t5765 = t5715 + t5760;
  t5831 = 0.07996*t5765;
  t6052 = -0.135*t6050;
  t6121 = t5222 + t5672 + t5831 + t6052;
  t9038 = t583*t928*t5186*t2599;
  t9039 = t583*t5429*t2599*t3372;
  t9123 = t9038 + t9039 + t9054 + t9118;
  t8688 = t5186*t8318;
  t8698 = t5429*t8697;
  t8737 = 0.07996*t8727;
  t8740 = -1.*t1622*t8697;
  t8741 = t8483 + t8740;
  t8742 = -0.135*t8741;
  t8747 = t8688 + t8698 + t8737 + t8742;
  t9296 = t5429*t9295;
  t9297 = t5186*t5666;
  t9298 = -1.*t1622*t9295;
  t9299 = t9298 + t8799;
  t9300 = -0.135*t9299;
  t9301 = -1.*t1115*t9295;
  t9303 = t9301 + t6013;
  t9304 = 0.07996*t9303;
  t9305 = t9296 + t9297 + t9300 + t9304;
  t9322 = -0.135*t1115;
  t9323 = -0.07996*t1622;
  t9324 = t9322 + t9323;
  t9313 = t583*t928*t5429;
  t9314 = -1.*t583*t5186*t3372;
  t9315 = t9313 + t9314 + t9243 + t9256;
  t9259 = -1.*t928*t5186*t2754;
  t9260 = -1.*t5429*t2754*t3372;
  t9269 = t9259 + t9260 + t9264 + t9268;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t4118 + t4255 + t4409 + t4655 + t5024)*var2[3] + t3962*var2[4] + t7431*var2[5] + t6121*var2[13];
  p_output1[10]=(t8759 + t8791 + t8797 + t8837 + t8838)*var2[3] + t8266*var2[4] + t8638*var2[5] + t8747*var2[13];
  p_output1[11]=0;
  p_output1[12]=t3962*var2[3] + (-1.*t2754*t3282*t3372*t4098 + t4118 - 1.*t2245*t2754*t4098*t928 + 0.07996*(t1622*t2754*t3372*t4098 - 1.*t1115*t2754*t4098*t928) - 0.135*(-1.*t1115*t2754*t3372*t4098 - 1.*t1622*t2754*t4098*t928))*var2[4] + t8971*var2[5] + t8953*var2[13];
  p_output1[13]=t8266*var2[3] + (-1.*t2599*t2754*t3282*t3372 + t8759 - 1.*t2245*t2599*t2754*t928 + 0.07996*(t1622*t2599*t2754*t3372 - 1.*t1115*t2599*t2754*t928) - 0.135*(-1.*t1115*t2599*t2754*t3372 - 1.*t1622*t2599*t2754*t928))*var2[4] + t9140*var2[5] + t9123*var2[13];
  p_output1[14]=(-0.08055*t2754 + t9195 + t9201 + t9243 + t9256)*var2[4] + t9273*var2[5] + t9269*var2[13];
  p_output1[15]=t7431*var2[3] + t8971*var2[4] + (t4255 + t4409 + t4655 + t5024)*var2[5] + t9286*var2[13];
  p_output1[16]=t8638*var2[3] + t9140*var2[4] + (t8791 + t8797 + t8837 + t8838)*var2[5] + t9305*var2[13];
  p_output1[17]=t9273*var2[4] + (t9195 + t9201 + t9243 + t9256)*var2[5] + t9315*var2[13];
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
  p_output1[39]=t6121*var2[3] + t8953*var2[4] + t9286*var2[5] + (-0.135*t8727 + t9279 + 0.07996*(t1622*t8697 + t9283) + t8697*t9324)*var2[13];
  p_output1[40]=t8747*var2[3] + t9123*var2[4] + t9305*var2[5] + (t9296 - 0.135*(-1.*t1115*t6926 + t9298) + 0.07996*(t7248 + t9301) + t6926*t9324)*var2[13];
  p_output1[41]=t9269*var2[4] + t9315*var2[5] + (t9243 + t9256 + t9313 + t3372*t583*t9324)*var2[13];
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

#include "dJp_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void dJp_RightAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
