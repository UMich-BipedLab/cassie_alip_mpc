/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:02 GMT-04:00
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
  double t2807;
  double t3671;
  double t4005;
  double t4203;
  double t4312;
  double t5077;
  double t4809;
  double t4867;
  double t5136;
  double t784;
  double t1324;
  double t1376;
  double t1895;
  double t5015;
  double t5590;
  double t5788;
  double t6415;
  double t6429;
  double t6437;
  double t654;
  double t7144;
  double t7389;
  double t7409;
  double t1400;
  double t2022;
  double t2061;
  double t4297;
  double t4477;
  double t4511;
  double t5807;
  double t5810;
  double t6048;
  double t6524;
  double t6740;
  double t6809;
  double t9398;
  double t9400;
  double t9401;
  double t9407;
  double t9416;
  double t9417;
  double t9434;
  double t9435;
  double t9436;
  double t9485;
  double t9487;
  double t9494;
  double t9522;
  double t9523;
  double t9524;
  double t9543;
  double t9544;
  double t9545;
  double t9562;
  double t9563;
  double t9564;
  double t9438;
  double t9573;
  double t9574;
  double t9579;
  double t9580;
  double t9581;
  double t9587;
  double t9588;
  double t9589;
  double t9600;
  double t9601;
  double t9602;
  double t9567;
  double t9441;
  double t9442;
  double t9608;
  double t9609;
  double t9611;
  double t9612;
  double t9613;
  double t9584;
  double t9623;
  double t9624;
  double t9625;
  double t9632;
  double t9633;
  double t9596;
  double t9597;
  double t9598;
  double t9599;
  double t9604;
  double t9605;
  double t9606;
  double t9444;
  double t9448;
  double t9452;
  double t9643;
  double t9644;
  double t9645;
  double t9648;
  double t9650;
  double t9660;
  double t9661;
  double t9662;
  double t8302;
  double t9673;
  double t9674;
  double t9675;
  t2807 = Sin(var1[3]);
  t3671 = Cos(var1[13]);
  t4005 = -1.*t3671;
  t4203 = 1. + t4005;
  t4312 = Sin(var1[13]);
  t5077 = Cos(var1[3]);
  t4809 = Cos(var1[5]);
  t4867 = Sin(var1[4]);
  t5136 = Sin(var1[5]);
  t784 = Cos(var1[14]);
  t1324 = -1.*t784;
  t1376 = 1. + t1324;
  t1895 = Sin(var1[14]);
  t5015 = -1.*t4809*t2807*t4867;
  t5590 = t5077*t5136;
  t5788 = t5015 + t5590;
  t6415 = -1.*t5077*t4809;
  t6429 = -1.*t2807*t4867*t5136;
  t6437 = t6415 + t6429;
  t654 = Cos(var1[4]);
  t7144 = t4312*t5788;
  t7389 = t3671*t6437;
  t7409 = t7144 + t7389;
  t1400 = -0.08055*t1376;
  t2022 = -0.135*t1895;
  t2061 = 0. + t1400 + t2022;
  t4297 = 0.07996*t4203;
  t4477 = 0.135*t4312;
  t4511 = 0. + t4297 + t4477;
  t5807 = -0.135*t4203;
  t5810 = 0.07996*t4312;
  t6048 = 0. + t5807 + t5810;
  t6524 = -0.135*t1376;
  t6740 = 0.08055*t1895;
  t6809 = 0. + t6524 + t6740;
  t9398 = t5077*t4809*t4867;
  t9400 = t2807*t5136;
  t9401 = t9398 + t9400;
  t9407 = -1.*t4809*t2807;
  t9416 = t5077*t4867*t5136;
  t9417 = t9407 + t9416;
  t9434 = t4312*t9401;
  t9435 = t3671*t9417;
  t9436 = t9434 + t9435;
  t9485 = t5077*t654*t4809*t4312;
  t9487 = t3671*t5077*t654*t5136;
  t9494 = t9485 + t9487;
  t9522 = t654*t4809*t4312*t2807;
  t9523 = t3671*t654*t2807*t5136;
  t9524 = t9522 + t9523;
  t9543 = -1.*t4809*t4312*t4867;
  t9544 = -1.*t3671*t4867*t5136;
  t9545 = t9543 + t9544;
  t9562 = t4809*t2807;
  t9563 = -1.*t5077*t4867*t5136;
  t9564 = t9562 + t9563;
  t9438 = t3671*t9401;
  t9573 = t4312*t9564;
  t9574 = t9438 + t9573;
  t9579 = t4809*t2807*t4867;
  t9580 = -1.*t5077*t5136;
  t9581 = t9579 + t9580;
  t9587 = t3671*t9581;
  t9588 = t4312*t6437;
  t9589 = t9587 + t9588;
  t9600 = t3671*t654*t4809;
  t9601 = -1.*t654*t4312*t5136;
  t9602 = t9600 + t9601;
  t9567 = -1.*t4312*t9401;
  t9441 = -1.*t4312*t9417;
  t9442 = t9438 + t9441;
  t9608 = 0.135*t3671;
  t9609 = t9608 + t5810;
  t9611 = 0.07996*t3671;
  t9612 = -0.135*t4312;
  t9613 = t9611 + t9612;
  t9584 = -1.*t4312*t9581;
  t9623 = t5077*t4809;
  t9624 = t2807*t4867*t5136;
  t9625 = t9623 + t9624;
  t9632 = -1.*t4312*t9625;
  t9633 = t9587 + t9632;
  t9596 = -1.*t654*t4809*t4312;
  t9597 = -1.*t3671*t654*t5136;
  t9598 = t9596 + t9597;
  t9599 = -0.01004*t9598;
  t9604 = -0.135*t784*t9602;
  t9605 = t6809*t9602;
  t9606 = -0.08055*t1895*t9602;
  t9444 = -1.*t5077*t654*t1895;
  t9448 = t784*t9436;
  t9452 = t9444 + t9448;
  t9643 = -0.135*t784;
  t9644 = -0.08055*t1895;
  t9645 = t9643 + t9644;
  t9648 = 0.08055*t784;
  t9650 = t9648 + t2022;
  t9660 = t4312*t9581;
  t9661 = t3671*t9625;
  t9662 = t9660 + t9661;
  t8302 = -1.*t784*t654*t2807;
  t9673 = t654*t4809*t4312;
  t9674 = t3671*t654*t5136;
  t9675 = t9673 + t9674;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t4511*t5788 + t6048*t6437 - 0.01004*(t3671*t5788 - 1.*t4312*t6437) - 1.*t2061*t2807*t654 + t6809*t7409 - 0.135*(t1895*t2807*t654 + t7409*t784) - 0.08055*(t1895*t7409 + t8302);
  p_output1[10]=t2061*t5077*t654 + t4511*t9401 + t6048*t9417 + t6809*t9436 - 0.08055*(t5077*t654*t784 + t1895*t9436) - 0.01004*t9442 - 0.135*t9452;
  p_output1[11]=0;
  p_output1[12]=-1.*t2061*t4867*t5077 + t4511*t4809*t5077*t654 + t5077*t5136*t6048*t654 - 0.01004*(t3671*t4809*t5077*t654 - 1.*t4312*t5077*t5136*t654) + t6809*t9494 - 0.08055*(-1.*t4867*t5077*t784 + t1895*t9494) - 0.135*(t1895*t4867*t5077 + t784*t9494);
  p_output1[13]=-1.*t2061*t2807*t4867 + t2807*t4511*t4809*t654 + t2807*t5136*t6048*t654 - 0.01004*(t2807*t3671*t4809*t654 - 1.*t2807*t4312*t5136*t654) + t6809*t9524 - 0.08055*(-1.*t2807*t4867*t784 + t1895*t9524) - 0.135*(t1895*t2807*t4867 + t784*t9524);
  p_output1[14]=-1.*t4511*t4809*t4867 - 0.01004*(-1.*t3671*t4809*t4867 + t4312*t4867*t5136) - 1.*t4867*t5136*t6048 - 1.*t2061*t654 + t6809*t9545 - 0.08055*(-1.*t654*t784 + t1895*t9545) - 0.135*(t1895*t654 + t784*t9545);
  p_output1[15]=t6048*t9401 + t4511*t9564 - 0.01004*(t3671*t9564 + t9567) - 0.08055*t1895*t9574 + t6809*t9574 - 0.135*t784*t9574;
  p_output1[16]=t4511*t6437 + t6048*t9581 - 0.01004*(t7389 + t9584) - 0.08055*t1895*t9589 + t6809*t9589 - 0.135*t784*t9589;
  p_output1[17]=-1.*t4511*t5136*t654 + t4809*t6048*t654 + t9599 + t9604 + t9605 + t9606;
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
  p_output1[39]=-0.08055*t1895*t9442 + t6809*t9442 - 0.135*t784*t9442 - 0.01004*(-1.*t3671*t9417 + t9567) + t9401*t9609 + t9417*t9613;
  p_output1[40]=t9581*t9609 + t9613*t9625 - 0.01004*(t9584 - 1.*t3671*t9625) - 0.08055*t1895*t9633 + t6809*t9633 - 0.135*t784*t9633;
  p_output1[41]=t9599 + t9604 + t9605 + t9606 + t4809*t654*t9609 + t5136*t654*t9613;
  p_output1[42]=-0.135*(-1.*t5077*t654*t784 - 1.*t1895*t9436) - 0.08055*t9452 + t5077*t654*t9645 + t9436*t9650;
  p_output1[43]=t2807*t654*t9645 + t9650*t9662 - 0.135*(t8302 - 1.*t1895*t9662) - 0.08055*(-1.*t1895*t2807*t654 + t784*t9662);
  p_output1[44]=-1.*t4867*t9645 + t9650*t9675 - 0.135*(t4867*t784 - 1.*t1895*t9675) - 0.08055*(t1895*t4867 + t784*t9675);
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

#include "Jp_RightRotationJoint_mex.hh"

namespace SymExpression
{

void Jp_RightRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
