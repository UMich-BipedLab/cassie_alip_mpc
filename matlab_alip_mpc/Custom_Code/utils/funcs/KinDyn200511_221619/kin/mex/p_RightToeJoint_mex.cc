/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:43 GMT-04:00
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
  double t16;
  double t232;
  double t265;
  double t285;
  double t492;
  double t648;
  double t686;
  double t668;
  double t892;
  double t44;
  double t99;
  double t114;
  double t185;
  double t674;
  double t930;
  double t957;
  double t1183;
  double t1287;
  double t1303;
  double t28;
  double t1581;
  double t1642;
  double t1643;
  double t1797;
  double t1809;
  double t1881;
  double t1966;
  double t2183;
  double t2266;
  double t2284;
  double t2596;
  double t2599;
  double t2730;
  double t2809;
  double t2839;
  double t2989;
  double t3077;
  double t3370;
  double t3420;
  double t3459;
  double t3651;
  double t3704;
  double t3773;
  double t3874;
  double t3891;
  double t3896;
  double t3920;
  double t3982;
  double t4012;
  double t4047;
  double t4190;
  double t4229;
  double t4232;
  double t4366;
  double t4444;
  double t4498;
  double t4517;
  double t4741;
  double t4813;
  double t4815;
  double t4874;
  double t4881;
  double t4956;
  double t4970;
  double t4976;
  double t4989;
  double t5013;
  double t5082;
  double t5084;
  double t5119;
  double t5269;
  double t5320;
  double t5336;
  double t182;
  double t186;
  double t202;
  double t364;
  double t515;
  double t584;
  double t1098;
  double t1109;
  double t1132;
  double t1365;
  double t1430;
  double t1451;
  double t5631;
  double t5687;
  double t5744;
  double t6001;
  double t6033;
  double t6043;
  double t1896;
  double t2091;
  double t2131;
  double t6068;
  double t6092;
  double t6098;
  double t2476;
  double t2530;
  double t2592;
  double t3019;
  double t3289;
  double t3367;
  double t6265;
  double t6266;
  double t6309;
  double t6538;
  double t6547;
  double t6645;
  double t3498;
  double t3534;
  double t3567;
  double t3911;
  double t3939;
  double t3975;
  double t6712;
  double t6964;
  double t6980;
  double t7047;
  double t7053;
  double t7055;
  double t4104;
  double t4109;
  double t4145;
  double t4508;
  double t4543;
  double t4618;
  double t7216;
  double t7285;
  double t7294;
  double t7308;
  double t7309;
  double t7312;
  double t4828;
  double t4833;
  double t4846;
  double t4994;
  double t5026;
  double t5067;
  double t7316;
  double t7318;
  double t7383;
  double t7403;
  double t7404;
  double t7406;
  double t5158;
  double t5179;
  double t5240;
  double t7462;
  double t7469;
  double t7470;
  double t7528;
  double t7536;
  double t7537;
  double t7644;
  double t7647;
  double t7666;
  double t7676;
  double t7683;
  double t7684;
  double t7731;
  double t7732;
  double t7733;
  double t7771;
  double t7772;
  double t7804;
  double t7811;
  double t7812;
  double t7814;
  double t7838;
  double t7840;
  double t7841;
  double t7848;
  double t7852;
  double t7863;
  double t7870;
  double t7871;
  double t7874;
  double t7890;
  double t7933;
  double t7944;
  double t7946;
  double t7948;
  double t7949;
  double t7953;
  double t7954;
  double t7955;
  t16 = Cos(var1[3]);
  t232 = Cos(var1[13]);
  t265 = -1.*t232;
  t285 = 1. + t265;
  t492 = Sin(var1[13]);
  t648 = Cos(var1[5]);
  t686 = Sin(var1[3]);
  t668 = Sin(var1[4]);
  t892 = Sin(var1[5]);
  t44 = Cos(var1[14]);
  t99 = -1.*t44;
  t114 = 1. + t99;
  t185 = Sin(var1[14]);
  t674 = t16*t648*t668;
  t930 = t686*t892;
  t957 = t674 + t930;
  t1183 = -1.*t648*t686;
  t1287 = t16*t668*t892;
  t1303 = t1183 + t1287;
  t28 = Cos(var1[4]);
  t1581 = t492*t957;
  t1642 = t232*t1303;
  t1643 = t1581 + t1642;
  t1797 = Cos(var1[15]);
  t1809 = -1.*t1797;
  t1881 = 1. + t1809;
  t1966 = Sin(var1[15]);
  t2183 = t232*t957;
  t2266 = -1.*t492*t1303;
  t2284 = t2183 + t2266;
  t2596 = t44*t16*t28;
  t2599 = t185*t1643;
  t2730 = t2596 + t2599;
  t2809 = Cos(var1[16]);
  t2839 = -1.*t2809;
  t2989 = 1. + t2839;
  t3077 = Sin(var1[16]);
  t3370 = t1966*t2284;
  t3420 = t1797*t2730;
  t3459 = t3370 + t3420;
  t3651 = t1797*t2284;
  t3704 = -1.*t1966*t2730;
  t3773 = t3651 + t3704;
  t3874 = Cos(var1[17]);
  t3891 = -1.*t3874;
  t3896 = 1. + t3891;
  t3920 = Sin(var1[17]);
  t3982 = -1.*t3077*t3459;
  t4012 = t2809*t3773;
  t4047 = t3982 + t4012;
  t4190 = t2809*t3459;
  t4229 = t3077*t3773;
  t4232 = t4190 + t4229;
  t4366 = Cos(var1[18]);
  t4444 = -1.*t4366;
  t4498 = 1. + t4444;
  t4517 = Sin(var1[18]);
  t4741 = t3920*t4047;
  t4813 = t3874*t4232;
  t4815 = t4741 + t4813;
  t4874 = t3874*t4047;
  t4881 = -1.*t3920*t4232;
  t4956 = t4874 + t4881;
  t4970 = Cos(var1[19]);
  t4976 = -1.*t4970;
  t4989 = 1. + t4976;
  t5013 = Sin(var1[19]);
  t5082 = -1.*t4517*t4815;
  t5084 = t4366*t4956;
  t5119 = t5082 + t5084;
  t5269 = t4366*t4815;
  t5320 = t4517*t4956;
  t5336 = t5269 + t5320;
  t182 = -0.08055*t114;
  t186 = -0.135*t185;
  t202 = 0. + t182 + t186;
  t364 = 0.07996*t285;
  t515 = 0.135*t492;
  t584 = 0. + t364 + t515;
  t1098 = -0.135*t285;
  t1109 = 0.07996*t492;
  t1132 = 0. + t1098 + t1109;
  t1365 = -0.135*t114;
  t1430 = 0.08055*t185;
  t1451 = 0. + t1365 + t1430;
  t5631 = t648*t686*t668;
  t5687 = -1.*t16*t892;
  t5744 = t5631 + t5687;
  t6001 = t16*t648;
  t6033 = t686*t668*t892;
  t6043 = t6001 + t6033;
  t1896 = -0.01004*t1881;
  t2091 = 0.08055*t1966;
  t2131 = 0. + t1896 + t2091;
  t6068 = t492*t5744;
  t6092 = t232*t6043;
  t6098 = t6068 + t6092;
  t2476 = -0.08055*t1881;
  t2530 = -0.01004*t1966;
  t2592 = 0. + t2476 + t2530;
  t3019 = -0.08055*t2989;
  t3289 = -0.13004*t3077;
  t3367 = 0. + t3019 + t3289;
  t6265 = t232*t5744;
  t6266 = -1.*t492*t6043;
  t6309 = t6265 + t6266;
  t6538 = t44*t28*t686;
  t6547 = t185*t6098;
  t6645 = t6538 + t6547;
  t3498 = -0.13004*t2989;
  t3534 = 0.08055*t3077;
  t3567 = 0. + t3498 + t3534;
  t3911 = -0.19074*t3896;
  t3939 = 0.03315*t3920;
  t3975 = 0. + t3911 + t3939;
  t6712 = t1966*t6309;
  t6964 = t1797*t6645;
  t6980 = t6712 + t6964;
  t7047 = t1797*t6309;
  t7053 = -1.*t1966*t6645;
  t7055 = t7047 + t7053;
  t4104 = -0.03315*t3896;
  t4109 = -0.19074*t3920;
  t4145 = 0. + t4104 + t4109;
  t4508 = -0.01315*t4498;
  t4543 = -0.62554*t4517;
  t4618 = 0. + t4508 + t4543;
  t7216 = -1.*t3077*t6980;
  t7285 = t2809*t7055;
  t7294 = t7216 + t7285;
  t7308 = t2809*t6980;
  t7309 = t3077*t7055;
  t7312 = t7308 + t7309;
  t4828 = -0.62554*t4498;
  t4833 = 0.01315*t4517;
  t4846 = 0. + t4828 + t4833;
  t4994 = -1.03354*t4989;
  t5026 = 0.05315*t5013;
  t5067 = 0. + t4994 + t5026;
  t7316 = t3920*t7294;
  t7318 = t3874*t7312;
  t7383 = t7316 + t7318;
  t7403 = t3874*t7294;
  t7404 = -1.*t3920*t7312;
  t7406 = t7403 + t7404;
  t5158 = -0.05315*t4989;
  t5179 = -1.03354*t5013;
  t5240 = 0. + t5158 + t5179;
  t7462 = -1.*t4517*t7383;
  t7469 = t4366*t7406;
  t7470 = t7462 + t7469;
  t7528 = t4366*t7383;
  t7536 = t4517*t7406;
  t7537 = t7528 + t7536;
  t7644 = t28*t648*t492;
  t7647 = t232*t28*t892;
  t7666 = t7644 + t7647;
  t7676 = t232*t28*t648;
  t7683 = -1.*t28*t492*t892;
  t7684 = t7676 + t7683;
  t7731 = -1.*t44*t668;
  t7732 = t185*t7666;
  t7733 = t7731 + t7732;
  t7771 = t1966*t7684;
  t7772 = t1797*t7733;
  t7804 = t7771 + t7772;
  t7811 = t1797*t7684;
  t7812 = -1.*t1966*t7733;
  t7814 = t7811 + t7812;
  t7838 = -1.*t3077*t7804;
  t7840 = t2809*t7814;
  t7841 = t7838 + t7840;
  t7848 = t2809*t7804;
  t7852 = t3077*t7814;
  t7863 = t7848 + t7852;
  t7870 = t3920*t7841;
  t7871 = t3874*t7863;
  t7874 = t7870 + t7871;
  t7890 = t3874*t7841;
  t7933 = -1.*t3920*t7863;
  t7944 = t7890 + t7933;
  t7946 = -1.*t4517*t7874;
  t7948 = t4366*t7944;
  t7949 = t7946 + t7948;
  t7953 = t4366*t7874;
  t7954 = t4517*t7944;
  t7955 = t7953 + t7954;
  p_output1[0]=0. + t1132*t1303 + t1451*t1643 + t2131*t2284 + t2592*t2730 + t16*t202*t28 + t3367*t3459 + t3567*t3773 + t3975*t4047 + t4145*t4232 - 0.1305*(-1.*t16*t185*t28 + t1643*t44) + t4618*t4815 + t4846*t4956 + t5067*t5119 + t5240*t5336 - 0.05315*(t5013*t5119 + t4970*t5336) - 1.03354*(t4970*t5119 - 1.*t5013*t5336) + t584*t957 + var1[0];
  p_output1[1]=0. + t5744*t584 + t1132*t6043 + t1451*t6098 + t2131*t6309 + t2592*t6645 + t202*t28*t686 - 0.1305*(t44*t6098 - 1.*t185*t28*t686) + t3367*t6980 + t3567*t7055 + t3975*t7294 + t4145*t7312 + t4618*t7383 + t4846*t7406 + t5067*t7470 + t5240*t7537 - 0.05315*(t5013*t7470 + t4970*t7537) - 1.03354*(t4970*t7470 - 1.*t5013*t7537) + var1[1];
  p_output1[2]=0. + t28*t584*t648 - 1.*t202*t668 + t1451*t7666 - 0.1305*(t185*t668 + t44*t7666) + t2131*t7684 + t2592*t7733 + t3367*t7804 + t3567*t7814 + t3975*t7841 + t4145*t7863 + t4618*t7874 + t4846*t7944 + t5067*t7949 + t5240*t7955 - 0.05315*(t5013*t7949 + t4970*t7955) - 1.03354*(t4970*t7949 - 1.*t5013*t7955) + t1132*t28*t892 + var1[2];
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

#include "p_RightToeJoint_mex.hh"

namespace SymExpression
{

void p_RightToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
