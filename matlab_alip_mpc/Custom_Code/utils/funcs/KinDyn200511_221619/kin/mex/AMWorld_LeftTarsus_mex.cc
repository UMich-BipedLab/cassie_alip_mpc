/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:32 GMT-04:00
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
  double t310;
  double t665;
  double t921;
  double t750;
  double t1072;
  double t657;
  double t1397;
  double t1418;
  double t2169;
  double t866;
  double t1119;
  double t1156;
  double t2235;
  double t276;
  double t4005;
  double t4009;
  double t4150;
  double t353;
  double t400;
  double t438;
  double t1329;
  double t2643;
  double t2865;
  double t2931;
  double t3270;
  double t3635;
  double t4158;
  double t4570;
  double t3706;
  double t4283;
  double t4499;
  double t251;
  double t4592;
  double t4755;
  double t5471;
  double t5960;
  double t4566;
  double t5606;
  double t5676;
  double t70;
  double t5967;
  double t5989;
  double t6001;
  double t7108;
  double t7247;
  double t7650;
  double t7342;
  double t7390;
  double t7409;
  double t7508;
  double t47;
  double t6682;
  double t7708;
  double t7718;
  double t7721;
  double t7727;
  double t7732;
  double t7733;
  double t7744;
  double t7754;
  double t7760;
  double t7724;
  double t7740;
  double t7741;
  double t7785;
  double t7786;
  double t7787;
  double t7788;
  double t7789;
  double t7742;
  double t7774;
  double t7775;
  double t7795;
  double t7802;
  double t7792;
  double t7804;
  double t7805;
  double t7808;
  double t7809;
  double t7812;
  double t7864;
  double t7865;
  double t7866;
  double t7872;
  double t7877;
  double t7859;
  double t7868;
  double t7870;
  double t7897;
  double t7901;
  double t7909;
  double t7912;
  double t7914;
  double t7871;
  double t7880;
  double t7889;
  double t7921;
  double t7922;
  double t7917;
  double t7925;
  double t7927;
  double t7930;
  double t7933;
  double t7934;
  double t7393;
  double t7533;
  double t7564;
  double t7567;
  double t7651;
  double t7658;
  double t7660;
  double t7661;
  double t7679;
  double t7680;
  double t7688;
  double t7689;
  double t7703;
  double t7704;
  double t7778;
  double t7790;
  double t7791;
  double t7807;
  double t7814;
  double t7823;
  double t7824;
  double t7831;
  double t7832;
  double t7833;
  double t7835;
  double t7836;
  double t7837;
  double t7838;
  double t7840;
  double t7890;
  double t7915;
  double t7916;
  double t7929;
  double t7938;
  double t7939;
  double t7950;
  double t7951;
  double t7958;
  double t7961;
  double t7976;
  double t7978;
  double t7983;
  double t7984;
  double t7989;
  double t5829;
  double t6195;
  double t6310;
  double t6794;
  double t6946;
  double t7001;
  double t8101;
  double t8103;
  double t8108;
  double t8073;
  double t8074;
  double t8090;
  double t8123;
  double t8125;
  double t8131;
  double t8065;
  double t8092;
  double t8113;
  double t8114;
  double t8117;
  double t8118;
  double t8120;
  double t8133;
  double t8134;
  double t8140;
  double t8157;
  double t8159;
  double t8138;
  double t8169;
  double t8170;
  double t8172;
  double t8176;
  double t8177;
  double t7705;
  double t7850;
  double t7992;
  double t8002;
  double t8015;
  double t8018;
  double t8019;
  double t8025;
  double t8171;
  double t8181;
  double t8184;
  double t8188;
  double t8190;
  double t8191;
  double t8040;
  double t8046;
  double t8054;
  double t8055;
  double t8256;
  double t8268;
  double t8272;
  double t8236;
  double t8243;
  double t8245;
  double t8247;
  double t8249;
  double t8251;
  double t8252;
  double t8277;
  double t8280;
  double t8284;
  double t8285;
  double t8287;
  double t8282;
  double t8288;
  double t8291;
  double t8295;
  double t8296;
  double t8299;
  double t8292;
  double t8300;
  double t8301;
  double t8310;
  double t8311;
  double t8314;
  t310 = Cos(var1[3]);
  t665 = Cos(var1[5]);
  t921 = Sin(var1[4]);
  t750 = Sin(var1[3]);
  t1072 = Sin(var1[5]);
  t657 = Cos(var1[6]);
  t1397 = t310*t665*t921;
  t1418 = t750*t1072;
  t2169 = t1397 + t1418;
  t866 = -1.*t665*t750;
  t1119 = t310*t921*t1072;
  t1156 = t866 + t1119;
  t2235 = Sin(var1[6]);
  t276 = Cos(var1[8]);
  t4005 = t657*t2169;
  t4009 = -1.*t1156*t2235;
  t4150 = t4005 + t4009;
  t353 = Cos(var1[4]);
  t400 = Cos(var1[7]);
  t438 = t310*t353*t400;
  t1329 = t657*t1156;
  t2643 = t2169*t2235;
  t2865 = t1329 + t2643;
  t2931 = Sin(var1[7]);
  t3270 = t2865*t2931;
  t3635 = t438 + t3270;
  t4158 = Sin(var1[8]);
  t4570 = Cos(var1[9]);
  t3706 = t276*t3635;
  t4283 = t4150*t4158;
  t4499 = t3706 + t4283;
  t251 = Sin(var1[9]);
  t4592 = t276*t4150;
  t4755 = -1.*t3635*t4158;
  t5471 = t4592 + t4755;
  t5960 = Cos(var1[10]);
  t4566 = -1.*t251*t4499;
  t5606 = t4570*t5471;
  t5676 = t4566 + t5606;
  t70 = Sin(var1[10]);
  t5967 = t4570*t4499;
  t5989 = t251*t5471;
  t6001 = t5967 + t5989;
  t7108 = -1.*t400;
  t7247 = 0. + t7108;
  t7650 = 0. + t2931;
  t7342 = t657*t7247;
  t7390 = 0. + t7342;
  t7409 = t7247*t2235;
  t7508 = 0. + t7409;
  t47 = Cos(var1[11]);
  t6682 = Sin(var1[11]);
  t7708 = t47*t70;
  t7718 = t5960*t6682;
  t7721 = 0. + t7708 + t7718;
  t7727 = t5960*t47;
  t7732 = -1.*t70*t6682;
  t7733 = 0. + t7727 + t7732;
  t7744 = -1.*t251*t7721;
  t7754 = t4570*t7733;
  t7760 = 0. + t7744 + t7754;
  t7724 = t4570*t7721;
  t7740 = t251*t7733;
  t7741 = 0. + t7724 + t7740;
  t7785 = t276*t7760;
  t7786 = -1.*t7741*t4158;
  t7787 = 0. + t7785 + t7786;
  t7788 = t400*t7787;
  t7789 = 0. + t7788;
  t7742 = t276*t7741;
  t7774 = t7760*t4158;
  t7775 = 0. + t7742 + t7774;
  t7795 = t2931*t7787;
  t7802 = 0. + t7795;
  t7792 = -1.*t2235*t7775;
  t7804 = t657*t7802;
  t7805 = 0. + t7792 + t7804;
  t7808 = t657*t7775;
  t7809 = t2235*t7802;
  t7812 = 0. + t7808 + t7809;
  t7864 = -1.*t5960*t47;
  t7865 = t70*t6682;
  t7866 = 0. + t7864 + t7865;
  t7872 = -1.*t251*t7866;
  t7877 = 0. + t7724 + t7872;
  t7859 = t251*t7721;
  t7868 = t4570*t7866;
  t7870 = 0. + t7859 + t7868;
  t7897 = t276*t7877;
  t7901 = -1.*t7870*t4158;
  t7909 = 0. + t7897 + t7901;
  t7912 = t400*t7909;
  t7914 = 0. + t7912;
  t7871 = t276*t7870;
  t7880 = t7877*t4158;
  t7889 = 0. + t7871 + t7880;
  t7921 = t2931*t7909;
  t7922 = 0. + t7921;
  t7917 = -1.*t2235*t7889;
  t7925 = t657*t7922;
  t7927 = 0. + t7917 + t7925;
  t7930 = t657*t7889;
  t7933 = t2235*t7922;
  t7934 = 0. + t7930 + t7933;
  t7393 = t665*t7390;
  t7533 = -1.*t1072*t7508;
  t7564 = 0. + t7393 + t7533;
  t7567 = var2[4]*t7564;
  t7651 = var2[5]*t7650;
  t7658 = var2[6]*t7650;
  t7660 = t7390*t1072;
  t7661 = t665*t7508;
  t7679 = 0. + t7660 + t7661;
  t7680 = t353*t7679;
  t7688 = -1.*t921*t7650;
  t7689 = 0. + t7680 + t7688;
  t7703 = var2[3]*t7689;
  t7704 = 0. + var2[9] + var2[10] + var2[11] + var2[8] + t7567 + t7651 + t7658 + t7703;
  t7778 = var2[7]*t7775;
  t7790 = var2[5]*t7789;
  t7791 = var2[6]*t7789;
  t7807 = t665*t7805;
  t7814 = -1.*t1072*t7812;
  t7823 = 0. + t7807 + t7814;
  t7824 = var2[4]*t7823;
  t7831 = -1.*t921*t7789;
  t7832 = t1072*t7805;
  t7833 = t665*t7812;
  t7835 = 0. + t7832 + t7833;
  t7836 = t353*t7835;
  t7837 = 0. + t7831 + t7836;
  t7838 = var2[3]*t7837;
  t7840 = 0. + t7778 + t7790 + t7791 + t7824 + t7838;
  t7890 = var2[7]*t7889;
  t7915 = var2[5]*t7914;
  t7916 = var2[6]*t7914;
  t7929 = t665*t7927;
  t7938 = -1.*t1072*t7934;
  t7939 = 0. + t7929 + t7938;
  t7950 = var2[4]*t7939;
  t7951 = -1.*t921*t7914;
  t7958 = t1072*t7927;
  t7961 = t665*t7934;
  t7976 = 0. + t7958 + t7961;
  t7978 = t353*t7976;
  t7983 = 0. + t7951 + t7978;
  t7984 = var2[3]*t7983;
  t7989 = 0. + t7890 + t7915 + t7916 + t7950 + t7984;
  t5829 = t70*t5676;
  t6195 = t5960*t6001;
  t6310 = t5829 + t6195;
  t6794 = t5960*t5676;
  t6946 = -1.*t70*t6001;
  t7001 = t6794 + t6946;
  t8101 = t665*t750*t921;
  t8103 = -1.*t310*t1072;
  t8108 = t8101 + t8103;
  t8073 = t310*t665;
  t8074 = t750*t921*t1072;
  t8090 = t8073 + t8074;
  t8123 = t657*t8108;
  t8125 = -1.*t8090*t2235;
  t8131 = t8123 + t8125;
  t8065 = t353*t400*t750;
  t8092 = t657*t8090;
  t8113 = t8108*t2235;
  t8114 = t8092 + t8113;
  t8117 = t8114*t2931;
  t8118 = t8065 + t8117;
  t8120 = t276*t8118;
  t8133 = t8131*t4158;
  t8134 = t8120 + t8133;
  t8140 = t276*t8131;
  t8157 = -1.*t8118*t4158;
  t8159 = t8140 + t8157;
  t8138 = -1.*t251*t8134;
  t8169 = t4570*t8159;
  t8170 = t8138 + t8169;
  t8172 = t4570*t8134;
  t8176 = t251*t8159;
  t8177 = t8172 + t8176;
  t7705 = 0.000036*t7704;
  t7850 = 0.0231*t7840;
  t7992 = -0.00288*t7989;
  t8002 = t7705 + t7850 + t7992;
  t8015 = 0.0239*t7704;
  t8018 = 0.000036*t7840;
  t8019 = -0.000063*t7989;
  t8025 = t8015 + t8018 + t8019;
  t8171 = t70*t8170;
  t8181 = t5960*t8177;
  t8184 = t8171 + t8181;
  t8188 = t5960*t8170;
  t8190 = -1.*t70*t8177;
  t8191 = t8188 + t8190;
  t8040 = -0.000063*t7704;
  t8046 = -0.00288*t7840;
  t8054 = 0.00113*t7989;
  t8055 = t8040 + t8046 + t8054;
  t8256 = t353*t665*t657;
  t8268 = -1.*t353*t1072*t2235;
  t8272 = t8256 + t8268;
  t8236 = -1.*t400*t921;
  t8243 = t353*t657*t1072;
  t8245 = t353*t665*t2235;
  t8247 = t8243 + t8245;
  t8249 = t8247*t2931;
  t8251 = t8236 + t8249;
  t8252 = t276*t8251;
  t8277 = t8272*t4158;
  t8280 = t8252 + t8277;
  t8284 = t276*t8272;
  t8285 = -1.*t8251*t4158;
  t8287 = t8284 + t8285;
  t8282 = -1.*t251*t8280;
  t8288 = t4570*t8287;
  t8291 = t8282 + t8288;
  t8295 = t4570*t8280;
  t8296 = t251*t8287;
  t8299 = t8295 + t8296;
  t8292 = t70*t8291;
  t8300 = t5960*t8299;
  t8301 = t8292 + t8300;
  t8310 = t5960*t8291;
  t8311 = -1.*t70*t8299;
  t8314 = t8310 + t8311;
  p_output1[0]=(t47*t6310 + t6682*t7001)*t8002 + (t2931*t310*t353 - 1.*t2865*t400)*t8025 + (t6310*t6682 - 1.*t47*t7001)*t8055;
  p_output1[1]=t8025*(t2931*t353*t750 - 1.*t400*t8114) + t8055*(t6682*t8184 - 1.*t47*t8191) + t8002*(t47*t8184 + t6682*t8191);
  p_output1[2]=t8055*(t6682*t8301 - 1.*t47*t8314) + t8002*(t47*t8301 + t6682*t8314) + t8025*(-1.*t400*t8247 - 1.*t2931*t921);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMWorld_LeftTarsus_mex.hh"

namespace SymExpression
{

void AMWorld_LeftTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
