/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:50 GMT-04:00
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
  double t4737;
  double t5401;
  double t5403;
  double t5865;
  double t6440;
  double t6815;
  double t6652;
  double t6656;
  double t6892;
  double t1984;
  double t2209;
  double t4105;
  double t4285;
  double t6694;
  double t6924;
  double t6925;
  double t7176;
  double t7314;
  double t7357;
  double t1057;
  double t7577;
  double t7601;
  double t7623;
  double t4168;
  double t4600;
  double t4650;
  double t5923;
  double t6632;
  double t6643;
  double t7096;
  double t7113;
  double t7127;
  double t7532;
  double t7537;
  double t7576;
  double t8224;
  double t8228;
  double t8246;
  double t8276;
  double t8303;
  double t8309;
  double t8320;
  double t8335;
  double t8386;
  double t8909;
  double t8945;
  double t8953;
  double t9147;
  double t9148;
  double t9154;
  double t9297;
  double t9301;
  double t9304;
  double t9437;
  double t9439;
  double t9450;
  double t8425;
  double t9490;
  double t9496;
  double t9515;
  double t9517;
  double t9520;
  double t9574;
  double t9584;
  double t9595;
  double t9645;
  double t9649;
  double t9651;
  double t9466;
  double t8440;
  double t8562;
  double t9673;
  double t9674;
  double t9687;
  double t9692;
  double t9694;
  double t9548;
  double t9741;
  double t9744;
  double t9747;
  double t9770;
  double t9773;
  double t9631;
  double t9632;
  double t9639;
  double t9642;
  double t9655;
  double t9662;
  double t9664;
  double t8644;
  double t8715;
  double t8742;
  double t9842;
  double t9846;
  double t9848;
  double t9853;
  double t9858;
  double t9905;
  double t9910;
  double t9911;
  double t8129;
  double t9935;
  double t9938;
  double t9942;
  t4737 = Sin(var1[3]);
  t5401 = Cos(var1[13]);
  t5403 = -1.*t5401;
  t5865 = 1. + t5403;
  t6440 = Sin(var1[13]);
  t6815 = Cos(var1[3]);
  t6652 = Cos(var1[5]);
  t6656 = Sin(var1[4]);
  t6892 = Sin(var1[5]);
  t1984 = Cos(var1[14]);
  t2209 = -1.*t1984;
  t4105 = 1. + t2209;
  t4285 = Sin(var1[14]);
  t6694 = -1.*t6652*t4737*t6656;
  t6924 = t6815*t6892;
  t6925 = t6694 + t6924;
  t7176 = -1.*t6815*t6652;
  t7314 = -1.*t4737*t6656*t6892;
  t7357 = t7176 + t7314;
  t1057 = Cos(var1[4]);
  t7577 = t6440*t6925;
  t7601 = t5401*t7357;
  t7623 = t7577 + t7601;
  t4168 = -0.08055*t4105;
  t4600 = -0.135*t4285;
  t4650 = 0. + t4168 + t4600;
  t5923 = 0.07996*t5865;
  t6632 = 0.135*t6440;
  t6643 = 0. + t5923 + t6632;
  t7096 = -0.135*t5865;
  t7113 = 0.07996*t6440;
  t7127 = 0. + t7096 + t7113;
  t7532 = -0.135*t4105;
  t7537 = 0.08055*t4285;
  t7576 = 0. + t7532 + t7537;
  t8224 = t6815*t6652*t6656;
  t8228 = t4737*t6892;
  t8246 = t8224 + t8228;
  t8276 = -1.*t6652*t4737;
  t8303 = t6815*t6656*t6892;
  t8309 = t8276 + t8303;
  t8320 = t6440*t8246;
  t8335 = t5401*t8309;
  t8386 = t8320 + t8335;
  t8909 = t6815*t1057*t6652*t6440;
  t8945 = t5401*t6815*t1057*t6892;
  t8953 = t8909 + t8945;
  t9147 = t1057*t6652*t6440*t4737;
  t9148 = t5401*t1057*t4737*t6892;
  t9154 = t9147 + t9148;
  t9297 = -1.*t6652*t6440*t6656;
  t9301 = -1.*t5401*t6656*t6892;
  t9304 = t9297 + t9301;
  t9437 = t6652*t4737;
  t9439 = -1.*t6815*t6656*t6892;
  t9450 = t9437 + t9439;
  t8425 = t5401*t8246;
  t9490 = t6440*t9450;
  t9496 = t8425 + t9490;
  t9515 = t6652*t4737*t6656;
  t9517 = -1.*t6815*t6892;
  t9520 = t9515 + t9517;
  t9574 = t5401*t9520;
  t9584 = t6440*t7357;
  t9595 = t9574 + t9584;
  t9645 = t5401*t1057*t6652;
  t9649 = -1.*t1057*t6440*t6892;
  t9651 = t9645 + t9649;
  t9466 = -1.*t6440*t8246;
  t8440 = -1.*t6440*t8309;
  t8562 = t8425 + t8440;
  t9673 = 0.135*t5401;
  t9674 = t9673 + t7113;
  t9687 = 0.07996*t5401;
  t9692 = -0.135*t6440;
  t9694 = t9687 + t9692;
  t9548 = -1.*t6440*t9520;
  t9741 = t6815*t6652;
  t9744 = t4737*t6656*t6892;
  t9747 = t9741 + t9744;
  t9770 = -1.*t6440*t9747;
  t9773 = t9574 + t9770;
  t9631 = -1.*t1057*t6652*t6440;
  t9632 = -1.*t5401*t1057*t6892;
  t9639 = t9631 + t9632;
  t9642 = 0.04566*t9639;
  t9655 = -0.135*t1984*t9651;
  t9662 = t7576*t9651;
  t9664 = -0.08055*t4285*t9651;
  t8644 = -1.*t6815*t1057*t4285;
  t8715 = t1984*t8386;
  t8742 = t8644 + t8715;
  t9842 = -0.135*t1984;
  t9846 = -0.08055*t4285;
  t9848 = t9842 + t9846;
  t9853 = 0.08055*t1984;
  t9858 = t9853 + t4600;
  t9905 = t6440*t9520;
  t9910 = t5401*t9747;
  t9911 = t9905 + t9910;
  t8129 = -1.*t1984*t1057*t4737;
  t9935 = t1057*t6652*t6440;
  t9938 = t5401*t1057*t6892;
  t9942 = t9935 + t9938;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1057*t4650*t4737 + t6643*t6925 + t7127*t7357 + 0.04566*(t5401*t6925 - 1.*t6440*t7357) + t7576*t7623 - 0.135*(t1057*t4285*t4737 + t1984*t7623) - 0.08055*(t4285*t7623 + t8129);
  p_output1[10]=t1057*t4650*t6815 + t6643*t8246 + t7127*t8309 + t7576*t8386 - 0.08055*(t1057*t1984*t6815 + t4285*t8386) + 0.04566*t8562 - 0.135*t8742;
  p_output1[11]=0;
  p_output1[12]=t1057*t6643*t6652*t6815 - 1.*t4650*t6656*t6815 + 0.04566*(t1057*t5401*t6652*t6815 - 1.*t1057*t6440*t6815*t6892) + t1057*t6815*t6892*t7127 + t7576*t8953 - 0.135*(t4285*t6656*t6815 + t1984*t8953) - 0.08055*(-1.*t1984*t6656*t6815 + t4285*t8953);
  p_output1[13]=t1057*t4737*t6643*t6652 - 1.*t4650*t4737*t6656 + 0.04566*(t1057*t4737*t5401*t6652 - 1.*t1057*t4737*t6440*t6892) + t1057*t4737*t6892*t7127 + t7576*t9154 - 0.135*(t4285*t4737*t6656 + t1984*t9154) - 0.08055*(-1.*t1984*t4737*t6656 + t4285*t9154);
  p_output1[14]=-1.*t1057*t4650 - 1.*t6643*t6652*t6656 + 0.04566*(-1.*t5401*t6652*t6656 + t6440*t6656*t6892) - 1.*t6656*t6892*t7127 + t7576*t9304 - 0.135*(t1057*t4285 + t1984*t9304) - 0.08055*(-1.*t1057*t1984 + t4285*t9304);
  p_output1[15]=t7127*t8246 + t6643*t9450 + 0.04566*(t5401*t9450 + t9466) - 0.135*t1984*t9496 - 0.08055*t4285*t9496 + t7576*t9496;
  p_output1[16]=t6643*t7357 + t7127*t9520 + 0.04566*(t7601 + t9548) - 0.135*t1984*t9595 - 0.08055*t4285*t9595 + t7576*t9595;
  p_output1[17]=-1.*t1057*t6643*t6892 + t1057*t6652*t7127 + t9642 + t9655 + t9662 + t9664;
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
  p_output1[39]=-0.135*t1984*t8562 - 0.08055*t4285*t8562 + t7576*t8562 + 0.04566*(-1.*t5401*t8309 + t9466) + t8246*t9674 + t8309*t9694;
  p_output1[40]=t9520*t9674 + t9694*t9747 + 0.04566*(t9548 - 1.*t5401*t9747) - 0.135*t1984*t9773 - 0.08055*t4285*t9773 + t7576*t9773;
  p_output1[41]=t9642 + t9655 + t9662 + t9664 + t1057*t6652*t9674 + t1057*t6892*t9694;
  p_output1[42]=-0.135*(-1.*t1057*t1984*t6815 - 1.*t4285*t8386) - 0.08055*t8742 + t1057*t6815*t9848 + t8386*t9858;
  p_output1[43]=t1057*t4737*t9848 + t9858*t9911 - 0.08055*(-1.*t1057*t4285*t4737 + t1984*t9911) - 0.135*(t8129 - 1.*t4285*t9911);
  p_output1[44]=-1.*t6656*t9848 + t9858*t9942 - 0.08055*(t4285*t6656 + t1984*t9942) - 0.135*(t1984*t6656 - 1.*t4285*t9942);
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

#include "Jp_RightHip_mex.hh"

namespace SymExpression
{

void Jp_RightHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
