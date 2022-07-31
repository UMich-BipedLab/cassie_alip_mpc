/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:30 GMT-04:00
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
  double t438;
  double t665;
  double t703;
  double t1552;
  double t2785;
  double t2444;
  double t2622;
  double t2932;
  double t3178;
  double t2643;
  double t2960;
  double t3001;
  double t2431;
  double t3239;
  double t3255;
  double t3270;
  double t310;
  double t1044;
  double t1222;
  double t2181;
  double t3491;
  double t3624;
  double t3644;
  double t3140;
  double t3274;
  double t3275;
  double t3648;
  double t400;
  double t1610;
  double t3375;
  double t3670;
  double t3685;
  double t1145;
  double t4005;
  double t4009;
  double t4012;
  double t4150;
  double t4245;
  double t5649;
  double t5836;
  double t5863;
  double t5984;
  double t5989;
  double t5997;
  double t5927;
  double t5967;
  double t5971;
  double t6073;
  double t6195;
  double t6682;
  double t6794;
  double t6805;
  double t6881;
  double t6939;
  double t866;
  double t921;
  double t1047;
  double t1306;
  double t1388;
  double t1397;
  double t1402;
  double t1550;
  double t1674;
  double t1726;
  double t1820;
  double t3734;
  double t3774;
  double t3974;
  double t4088;
  double t4734;
  double t4745;
  double t4755;
  double t5170;
  double t5258;
  double t5269;
  double t5288;
  double t5300;
  double t5382;
  double t5524;
  double t6246;
  double t6456;
  double t6608;
  double t6860;
  double t6946;
  double t6964;
  double t6979;
  double t7001;
  double t7072;
  double t7073;
  double t7092;
  double t7108;
  double t7163;
  double t7214;
  double t7409;
  double t7469;
  double t7503;
  double t7508;
  double t7542;
  double t7543;
  double t7555;
  double t7560;
  double t7564;
  double t7682;
  double t7688;
  double t7689;
  double t7694;
  double t7703;
  double t7704;
  double t7705;
  double t7706;
  double t7708;
  double t7718;
  double t7721;
  double t7722;
  t438 = Cos(var1[7]);
  t665 = -1.*t438;
  t703 = 0. + t665;
  t1552 = Sin(var1[4]);
  t2785 = Cos(var1[10]);
  t2444 = Cos(var1[11]);
  t2622 = Sin(var1[10]);
  t2932 = Sin(var1[11]);
  t3178 = Cos(var1[9]);
  t2643 = t2444*t2622;
  t2960 = t2785*t2932;
  t3001 = 0. + t2643 + t2960;
  t2431 = Sin(var1[9]);
  t3239 = t2785*t2444;
  t3255 = -1.*t2622*t2932;
  t3270 = 0. + t3239 + t3255;
  t310 = Cos(var1[4]);
  t1044 = Sin(var1[5]);
  t1222 = Sin(var1[6]);
  t2181 = Cos(var1[8]);
  t3491 = t3178*t3001;
  t3624 = t2431*t3270;
  t3644 = 0. + t3491 + t3624;
  t3140 = -1.*t2431*t3001;
  t3274 = t3178*t3270;
  t3275 = 0. + t3140 + t3274;
  t3648 = Sin(var1[8]);
  t400 = Cos(var1[6]);
  t1610 = Sin(var1[7]);
  t3375 = t2181*t3275;
  t3670 = -1.*t3644*t3648;
  t3685 = 0. + t3375 + t3670;
  t1145 = Cos(var1[5]);
  t4005 = t2181*t3644;
  t4009 = t3275*t3648;
  t4012 = 0. + t4005 + t4009;
  t4150 = t1610*t3685;
  t4245 = 0. + t4150;
  t5649 = -1.*t2785*t2444;
  t5836 = t2622*t2932;
  t5863 = 0. + t5649 + t5836;
  t5984 = t2431*t3001;
  t5989 = t3178*t5863;
  t5997 = 0. + t5984 + t5989;
  t5927 = -1.*t2431*t5863;
  t5967 = 0. + t3491 + t5927;
  t5971 = t2181*t5967;
  t6073 = -1.*t5997*t3648;
  t6195 = 0. + t5971 + t6073;
  t6682 = t2181*t5997;
  t6794 = t5967*t3648;
  t6805 = 0. + t6682 + t6794;
  t6881 = t1610*t6195;
  t6939 = 0. + t6881;
  t866 = t400*t703;
  t921 = 0. + t866;
  t1047 = t921*t1044;
  t1306 = t703*t1222;
  t1388 = 0. + t1306;
  t1397 = t1145*t1388;
  t1402 = 0. + t1047 + t1397;
  t1550 = t310*t1402;
  t1674 = 0. + t1610;
  t1726 = -1.*t1552*t1674;
  t1820 = 0. + t1550 + t1726;
  t3734 = t438*t3685;
  t3774 = 0. + t3734;
  t3974 = -1.*t1552*t3774;
  t4088 = -1.*t1222*t4012;
  t4734 = t400*t4245;
  t4745 = 0. + t4088 + t4734;
  t4755 = t1044*t4745;
  t5170 = t400*t4012;
  t5258 = t1222*t4245;
  t5269 = 0. + t5170 + t5258;
  t5288 = t1145*t5269;
  t5300 = 0. + t4755 + t5288;
  t5382 = t310*t5300;
  t5524 = 0. + t3974 + t5382;
  t6246 = t438*t6195;
  t6456 = 0. + t6246;
  t6608 = -1.*t1552*t6456;
  t6860 = -1.*t1222*t6805;
  t6946 = t400*t6939;
  t6964 = 0. + t6860 + t6946;
  t6979 = t1044*t6964;
  t7001 = t400*t6805;
  t7072 = t1222*t6939;
  t7073 = 0. + t7001 + t7072;
  t7092 = t1145*t7073;
  t7108 = 0. + t6979 + t7092;
  t7163 = t310*t7108;
  t7214 = 0. + t6608 + t7163;
  t7409 = t1145*t921;
  t7469 = -1.*t1044*t1388;
  t7503 = 0. + t7409 + t7469;
  t7508 = t1145*t4745;
  t7542 = -1.*t1044*t5269;
  t7543 = 0. + t7508 + t7542;
  t7555 = t1145*t6964;
  t7560 = -1.*t1044*t7073;
  t7564 = 0. + t7555 + t7560;
  t7682 = -0.000063*t1674;
  t7688 = -0.00288*t3774;
  t7689 = 0.00113*t6456;
  t7694 = t7682 + t7688 + t7689;
  t7703 = 0.000036*t1674;
  t7704 = 0.0231*t3774;
  t7705 = -0.00288*t6456;
  t7706 = t7703 + t7704 + t7705;
  t7708 = 0.0239*t1674;
  t7718 = 0.000036*t3774;
  t7721 = -0.000063*t6456;
  t7722 = t7708 + t7718 + t7721;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.000063*t1820 - 0.00288*t5524 + 0.00113*t7214;
  p_output1[10]=0.000036*t1820 + 0.0231*t5524 - 0.00288*t7214;
  p_output1[11]=0.0239*t1820 + 0.000036*t5524 - 0.000063*t7214;
  p_output1[12]=-0.000063*t7503 - 0.00288*t7543 + 0.00113*t7564;
  p_output1[13]=0.000036*t7503 + 0.0231*t7543 - 0.00288*t7564;
  p_output1[14]=0.0239*t7503 + 0.000036*t7543 - 0.000063*t7564;
  p_output1[15]=t7694;
  p_output1[16]=t7706;
  p_output1[17]=t7722;
  p_output1[18]=t7694;
  p_output1[19]=t7706;
  p_output1[20]=t7722;
  p_output1[21]=-0.00288*t4012 + 0.00113*t6805;
  p_output1[22]=0.0231*t4012 - 0.00288*t6805;
  p_output1[23]=0.000036*t4012 - 0.000063*t6805;
  p_output1[24]=-0.000063;
  p_output1[25]=0.000036;
  p_output1[26]=0.0239;
  p_output1[27]=-0.000063;
  p_output1[28]=0.000036;
  p_output1[29]=0.0239;
  p_output1[30]=-0.000063;
  p_output1[31]=0.000036;
  p_output1[32]=0.0239;
  p_output1[33]=-0.000063;
  p_output1[34]=0.000036;
  p_output1[35]=0.0239;
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

#include "Jdq_AMBody_LeftTarsus_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_LeftTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
