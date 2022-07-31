/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:32 GMT-04:00
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
  double t2043;
  double t266;
  double t1197;
  double t1654;
  double t2405;
  double t2958;
  double t3189;
  double t3242;
  double t3456;
  double t3720;
  double t3769;
  double t3820;
  double t1848;
  double t2599;
  double t2649;
  double t4568;
  double t4591;
  double t4687;
  double t4841;
  double t4403;
  double t4508;
  double t4558;
  double t5259;
  double t5796;
  double t5885;
  double t5900;
  double t5930;
  double t5734;
  double t5764;
  double t5779;
  double t5985;
  double t5998;
  double t5999;
  double t3430;
  double t3513;
  double t3527;
  double t3874;
  double t3947;
  double t4258;
  double t6127;
  double t6133;
  double t6137;
  double t6100;
  double t6102;
  double t6119;
  double t4698;
  double t5102;
  double t5221;
  double t5364;
  double t5430;
  double t5440;
  double t6177;
  double t6182;
  double t6184;
  double t5901;
  double t5931;
  double t5954;
  double t6001;
  double t6023;
  double t6042;
  double t6217;
  double t6230;
  double t6250;
  double t6266;
  double t6278;
  double t6281;
  double t6395;
  double t6402;
  double t6417;
  double t6475;
  double t6482;
  double t6484;
  double t6486;
  double t6490;
  double t6494;
  double t6562;
  double t6563;
  double t6580;
  double t6594;
  double t6600;
  double t6602;
  double t6606;
  double t6614;
  double t6615;
  double t6690;
  double t6699;
  double t6700;
  double t6721;
  double t6722;
  double t6735;
  double t6746;
  double t6749;
  double t6754;
  double t6827;
  double t6828;
  double t6836;
  double t6853;
  double t6857;
  double t6878;
  double t6880;
  double t6881;
  double t6904;
  double t6905;
  double t6906;
  double t6908;
  double t6910;
  double t6911;
  double t6920;
  double t6921;
  double t6959;
  double t6961;
  double t6964;
  double t6977;
  double t6978;
  double t6983;
  double t7044;
  double t7045;
  double t7022;
  double t7023;
  double t7027;
  double t7030;
  double t7037;
  double t7090;
  double t7092;
  double t7096;
  double t7101;
  double t7102;
  double t7116;
  double t7121;
  double t6967;
  double t6970;
  double t6972;
  double t6986;
  double t6988;
  double t6997;
  double t6998;
  double t7002;
  double t7003;
  double t7010;
  double t7011;
  double t7017;
  double t6196;
  double t6206;
  double t6212;
  double t7162;
  double t7167;
  double t7168;
  double t7180;
  double t7185;
  double t7221;
  double t7222;
  double t7225;
  double t7239;
  double t7241;
  double t7248;
  double t7279;
  double t7280;
  double t7281;
  double t7283;
  double t7284;
  double t7285;
  double t6358;
  double t6368;
  double t6376;
  double t7311;
  double t7313;
  double t7316;
  double t7326;
  double t7327;
  double t7342;
  double t7343;
  double t7344;
  double t7388;
  double t7389;
  double t7393;
  t2043 = Cos(var1[3]);
  t266 = Cos(var1[5]);
  t1197 = Sin(var1[3]);
  t1654 = Sin(var1[4]);
  t2405 = Sin(var1[5]);
  t2958 = Cos(var1[6]);
  t3189 = -1.*t2958;
  t3242 = 1. + t3189;
  t3456 = Sin(var1[6]);
  t3720 = -1.*t2043*t266;
  t3769 = -1.*t1197*t1654*t2405;
  t3820 = t3720 + t3769;
  t1848 = -1.*t266*t1197*t1654;
  t2599 = t2043*t2405;
  t2649 = t1848 + t2599;
  t4568 = Cos(var1[7]);
  t4591 = -1.*t4568;
  t4687 = 1. + t4591;
  t4841 = Sin(var1[7]);
  t4403 = t2958*t3820;
  t4508 = t2649*t3456;
  t4558 = t4403 + t4508;
  t5259 = Cos(var1[4]);
  t5796 = Cos(var1[8]);
  t5885 = -1.*t5796;
  t5900 = 1. + t5885;
  t5930 = Sin(var1[8]);
  t5734 = -1.*t5259*t4568*t1197;
  t5764 = t4558*t4841;
  t5779 = t5734 + t5764;
  t5985 = t2958*t2649;
  t5998 = -1.*t3820*t3456;
  t5999 = t5985 + t5998;
  t3430 = 0.07996*t3242;
  t3513 = -0.135*t3456;
  t3527 = 0. + t3430 + t3513;
  t3874 = 0.135*t3242;
  t3947 = 0.07996*t3456;
  t4258 = 0. + t3874 + t3947;
  t6127 = -1.*t266*t1197;
  t6133 = t2043*t1654*t2405;
  t6137 = t6127 + t6133;
  t6100 = t2043*t266*t1654;
  t6102 = t1197*t2405;
  t6119 = t6100 + t6102;
  t4698 = 0.135*t4687;
  t5102 = 0.08055*t4841;
  t5221 = 0. + t4698 + t5102;
  t5364 = -0.08055*t4687;
  t5430 = 0.135*t4841;
  t5440 = 0. + t5364 + t5430;
  t6177 = t2958*t6137;
  t6182 = t6119*t3456;
  t6184 = t6177 + t6182;
  t5901 = -0.08055*t5900;
  t5931 = -0.01004*t5930;
  t5954 = 0. + t5901 + t5931;
  t6001 = -0.01004*t5900;
  t6023 = 0.08055*t5930;
  t6042 = 0. + t6001 + t6023;
  t6217 = t2043*t5259*t4568;
  t6230 = t6184*t4841;
  t6250 = t6217 + t6230;
  t6266 = t2958*t6119;
  t6278 = -1.*t6137*t3456;
  t6281 = t6266 + t6278;
  t6395 = t2043*t5259*t2958*t2405;
  t6402 = t2043*t5259*t266*t3456;
  t6417 = t6395 + t6402;
  t6475 = -1.*t2043*t4568*t1654;
  t6482 = t6417*t4841;
  t6484 = t6475 + t6482;
  t6486 = t2043*t5259*t266*t2958;
  t6490 = -1.*t2043*t5259*t2405*t3456;
  t6494 = t6486 + t6490;
  t6562 = t5259*t2958*t1197*t2405;
  t6563 = t5259*t266*t1197*t3456;
  t6580 = t6562 + t6563;
  t6594 = -1.*t4568*t1197*t1654;
  t6600 = t6580*t4841;
  t6602 = t6594 + t6600;
  t6606 = t5259*t266*t2958*t1197;
  t6614 = -1.*t5259*t1197*t2405*t3456;
  t6615 = t6606 + t6614;
  t6690 = -1.*t2958*t1654*t2405;
  t6699 = -1.*t266*t1654*t3456;
  t6700 = t6690 + t6699;
  t6721 = -1.*t5259*t4568;
  t6722 = t6700*t4841;
  t6735 = t6721 + t6722;
  t6746 = -1.*t266*t2958*t1654;
  t6749 = t1654*t2405*t3456;
  t6754 = t6746 + t6749;
  t6827 = t266*t1197;
  t6828 = -1.*t2043*t1654*t2405;
  t6836 = t6827 + t6828;
  t6853 = t6836*t3456;
  t6857 = t6266 + t6853;
  t6878 = t2958*t6836;
  t6880 = -1.*t6119*t3456;
  t6881 = t6878 + t6880;
  t6904 = t266*t1197*t1654;
  t6905 = -1.*t2043*t2405;
  t6906 = t6904 + t6905;
  t6908 = t2958*t6906;
  t6910 = t3820*t3456;
  t6911 = t6908 + t6910;
  t6920 = -1.*t6906*t3456;
  t6921 = t4403 + t6920;
  t6959 = t5259*t266*t2958;
  t6961 = -1.*t5259*t2405*t3456;
  t6964 = t6959 + t6961;
  t6977 = -1.*t5259*t2958*t2405;
  t6978 = -1.*t5259*t266*t3456;
  t6983 = t6977 + t6978;
  t7044 = -1.*t2958*t6137;
  t7045 = t7044 + t6880;
  t7022 = -0.135*t2958;
  t7023 = t7022 + t3947;
  t7027 = 0.07996*t2958;
  t7030 = 0.135*t3456;
  t7037 = t7027 + t7030;
  t7090 = t2043*t266;
  t7092 = t1197*t1654*t2405;
  t7096 = t7090 + t7092;
  t7101 = -1.*t7096*t3456;
  t7102 = t6908 + t7101;
  t7116 = -1.*t2958*t7096;
  t7121 = t7116 + t6920;
  t6967 = 0.1708*t4568*t6964;
  t6970 = t6964*t5221;
  t6972 = t6964*t4841*t5954;
  t6986 = t6983*t6042;
  t6988 = t5796*t6964*t4841;
  t6997 = t6983*t5930;
  t6998 = t6988 + t6997;
  t7002 = -0.08045*t6998;
  t7003 = t5796*t6983;
  t7010 = -1.*t6964*t4841*t5930;
  t7011 = t7003 + t7010;
  t7017 = -0.06984*t7011;
  t6196 = t4568*t6184;
  t6206 = -1.*t2043*t5259*t4841;
  t6212 = t6196 + t6206;
  t7162 = 0.135*t4568;
  t7167 = -0.08055*t4841;
  t7168 = t7162 + t7167;
  t7180 = 0.08055*t4568;
  t7185 = t7180 + t5430;
  t7221 = t2958*t7096;
  t7222 = t6906*t3456;
  t7225 = t7221 + t7222;
  t7239 = t4568*t7225;
  t7241 = -1.*t5259*t1197*t4841;
  t7248 = t7239 + t7241;
  t7279 = t5259*t2958*t2405;
  t7280 = t5259*t266*t3456;
  t7281 = t7279 + t7280;
  t7283 = t4568*t7281;
  t7284 = t1654*t4841;
  t7285 = t7283 + t7284;
  t6358 = t5796*t6281;
  t6368 = -1.*t6250*t5930;
  t6376 = t6358 + t6368;
  t7311 = -0.01004*t5796;
  t7313 = -0.08055*t5930;
  t7316 = t7311 + t7313;
  t7326 = 0.08055*t5796;
  t7327 = t7326 + t5931;
  t7342 = t5259*t4568*t1197;
  t7343 = t7225*t4841;
  t7344 = t7342 + t7343;
  t7388 = -1.*t4568*t1654;
  t7389 = t7281*t4841;
  t7393 = t7388 + t7389;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2649*t3527 + t3820*t4258 + t4558*t5221 + 0.1708*(t4558*t4568 + t1197*t4841*t5259) - 1.*t1197*t5259*t5440 + t5779*t5954 - 0.06984*(-1.*t5779*t5930 + t5796*t5999) - 0.08045*(t5779*t5796 + t5930*t5999) + t5999*t6042;
  p_output1[10]=t2043*t5259*t5440 + t3527*t6119 + t4258*t6137 + t5221*t6184 + 0.1708*t6212 + t5954*t6250 + t6042*t6281 - 0.08045*(t5796*t6250 + t5930*t6281) - 0.06984*t6376;
  p_output1[11]=0;
  p_output1[12]=t2043*t266*t3527*t5259 + t2043*t2405*t4258*t5259 - 1.*t1654*t2043*t5440 + t5221*t6417 + 0.1708*(t1654*t2043*t4841 + t4568*t6417) + t5954*t6484 + t6042*t6494 - 0.06984*(-1.*t5930*t6484 + t5796*t6494) - 0.08045*(t5796*t6484 + t5930*t6494);
  p_output1[13]=t1197*t266*t3527*t5259 + t1197*t2405*t4258*t5259 - 1.*t1197*t1654*t5440 + t5221*t6580 + 0.1708*(t1197*t1654*t4841 + t4568*t6580) + t5954*t6602 + t6042*t6615 - 0.06984*(-1.*t5930*t6602 + t5796*t6615) - 0.08045*(t5796*t6602 + t5930*t6615);
  p_output1[14]=-1.*t1654*t266*t3527 - 1.*t1654*t2405*t4258 - 1.*t5259*t5440 + t5221*t6700 + 0.1708*(t4841*t5259 + t4568*t6700) + t5954*t6735 + t6042*t6754 - 0.06984*(-1.*t5930*t6735 + t5796*t6754) - 0.08045*(t5796*t6735 + t5930*t6754);
  p_output1[15]=t4258*t6119 + t3527*t6836 + 0.1708*t4568*t6857 + t5221*t6857 + t4841*t5954*t6857 + t6042*t6881 - 0.06984*(-1.*t4841*t5930*t6857 + t5796*t6881) - 0.08045*(t4841*t5796*t6857 + t5930*t6881);
  p_output1[16]=t3527*t3820 + t4258*t6906 + 0.1708*t4568*t6911 + t5221*t6911 + t4841*t5954*t6911 + t6042*t6921 - 0.06984*(-1.*t4841*t5930*t6911 + t5796*t6921) - 0.08045*(t4841*t5796*t6911 + t5930*t6921);
  p_output1[17]=-1.*t2405*t3527*t5259 + t266*t4258*t5259 + t6967 + t6970 + t6972 + t6986 + t7002 + t7017;
  p_output1[18]=0.1708*t4568*t6281 + t5221*t6281 + t4841*t5954*t6281 + t6119*t7023 + t6137*t7037 + t6042*t7045 - 0.06984*(-1.*t4841*t5930*t6281 + t5796*t7045) - 0.08045*(t4841*t5796*t6281 + t5930*t7045);
  p_output1[19]=t6906*t7023 + t7037*t7096 + 0.1708*t4568*t7102 + t5221*t7102 + t4841*t5954*t7102 + t6042*t7121 - 0.06984*(-1.*t4841*t5930*t7102 + t5796*t7121) - 0.08045*(t4841*t5796*t7102 + t5930*t7121);
  p_output1[20]=t6967 + t6970 + t6972 + t6986 + t7002 + t7017 + t266*t5259*t7023 + t2405*t5259*t7037;
  p_output1[21]=0.1708*(-1.*t2043*t4568*t5259 - 1.*t4841*t6184) - 0.08045*t5796*t6212 + 0.06984*t5930*t6212 + t5954*t6212 + t2043*t5259*t7168 + t6184*t7185;
  p_output1[22]=t1197*t5259*t7168 + t7185*t7225 + 0.1708*(t5734 - 1.*t4841*t7225) - 0.08045*t5796*t7248 + 0.06984*t5930*t7248 + t5954*t7248;
  p_output1[23]=-1.*t1654*t7168 + t7185*t7281 + 0.1708*(t1654*t4568 - 1.*t4841*t7281) - 0.08045*t5796*t7285 + 0.06984*t5930*t7285 + t5954*t7285;
  p_output1[24]=-0.06984*(-1.*t5796*t6250 - 1.*t5930*t6281) - 0.08045*t6376 + t6250*t7316 + t6281*t7327;
  p_output1[25]=t7102*t7327 + t7316*t7344 - 0.06984*(-1.*t5930*t7102 - 1.*t5796*t7344) - 0.08045*(t5796*t7102 - 1.*t5930*t7344);
  p_output1[26]=t6964*t7327 + t7316*t7393 - 0.06984*(-1.*t5930*t6964 - 1.*t5796*t7393) - 0.08045*(t5796*t6964 - 1.*t5930*t7393);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftThigh_mex.hh"

namespace SymExpression
{

void Jp_LeftThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
