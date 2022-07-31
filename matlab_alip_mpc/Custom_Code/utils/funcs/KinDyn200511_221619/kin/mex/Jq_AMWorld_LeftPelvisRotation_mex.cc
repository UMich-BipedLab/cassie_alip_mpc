/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:58 GMT-04:00
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
  double t412;
  double t5725;
  double t6153;
  double t5706;
  double t6463;
  double t5726;
  double t6493;
  double t6521;
  double t453;
  double t868;
  double t9336;
  double t1250;
  double t3037;
  double t3315;
  double t3630;
  double t6552;
  double t6570;
  double t6740;
  double t6741;
  double t7032;
  double t7630;
  double t7648;
  double t7652;
  double t8626;
  double t9009;
  double t9131;
  double t9162;
  double t9187;
  double t9221;
  double t9294;
  double t9298;
  double t9393;
  double t9395;
  double t9397;
  double t9348;
  double t9362;
  double t9382;
  double t3691;
  double t8399;
  double t9327;
  double t9333;
  double t9403;
  double t9404;
  double t9410;
  double t9411;
  double t9456;
  double t9457;
  double t9459;
  double t9450;
  double t9453;
  double t9454;
  double t9432;
  double t9434;
  double t9437;
  double t9438;
  double t9471;
  double t9472;
  double t9475;
  double t9455;
  double t9460;
  double t9462;
  double t9480;
  double t9481;
  double t9482;
  double t9483;
  double t9513;
  double t9514;
  double t9518;
  double t9509;
  double t9510;
  double t9511;
  double t9485;
  double t9486;
  double t9487;
  double t9488;
  double t9490;
  double t9491;
  double t9492;
  double t9493;
  double t9566;
  double t9567;
  double t9568;
  double t9569;
  double t9570;
  double t9572;
  double t9575;
  double t9576;
  double t9579;
  double t9580;
  double t9581;
  double t9593;
  double t9594;
  double t9595;
  double t9571;
  double t9582;
  double t9583;
  double t9522;
  double t9525;
  double t9526;
  double t9585;
  double t9586;
  double t9587;
  double t9512;
  double t9519;
  double t9520;
  double t9589;
  double t9590;
  double t9591;
  double t9389;
  double t9543;
  double t9544;
  double t9545;
  double t9539;
  double t9540;
  double t9541;
  double t9584;
  double t9588;
  double t9592;
  double t9604;
  double t9608;
  double t9609;
  double t9611;
  double t9615;
  double t9620;
  double t9621;
  double t9622;
  double t9623;
  double t9624;
  double t9625;
  double t9626;
  double t9627;
  double t9628;
  t412 = Cos(var1[4]);
  t5725 = Cos(var1[6]);
  t6153 = Sin(var1[5]);
  t5706 = Cos(var1[5]);
  t6463 = Sin(var1[6]);
  t5726 = t5706*t5725;
  t6493 = -1.*t6153*t6463;
  t6521 = 0. + t5726 + t6493;
  t453 = Sin(var1[3]);
  t868 = Sin(var1[4]);
  t9336 = Cos(var1[3]);
  t1250 = -1.*t868;
  t3037 = 0. + t1250;
  t3315 = var2[3]*t3037;
  t3630 = 0. + var2[5] + var2[6] + t3315;
  t6552 = var2[4]*t6521;
  t6570 = t5725*t6153;
  t6740 = t5706*t6463;
  t6741 = 0. + t6570 + t6740;
  t7032 = t412*t6741;
  t7630 = 0. + t7032;
  t7648 = var2[3]*t7630;
  t7652 = 0. + t6552 + t7648;
  t8626 = -1.*t5725*t6153;
  t9009 = -1.*t5706*t6463;
  t9131 = 0. + t8626 + t9009;
  t9162 = var2[4]*t9131;
  t9187 = t412*t6521;
  t9221 = 0. + t9187;
  t9294 = var2[3]*t9221;
  t9298 = 0. + t9162 + t9294;
  t9393 = -1.*t5706*t453*t868;
  t9395 = t9336*t6153;
  t9397 = t9393 + t9395;
  t9348 = -1.*t9336*t5706;
  t9362 = -1.*t453*t868*t6153;
  t9382 = t9348 + t9362;
  t3691 = 0.00272*t3630;
  t8399 = 1.e-6*t7652;
  t9327 = 2.e-6*t9298;
  t9333 = t3691 + t8399 + t9327;
  t9403 = 1.e-6*t3630;
  t9404 = 0.00559*t7652;
  t9410 = 3.e-6*t9298;
  t9411 = t9403 + t9404 + t9410;
  t9456 = t9336*t5706*t868;
  t9457 = t453*t6153;
  t9459 = t9456 + t9457;
  t9450 = -1.*t5706*t453;
  t9453 = t9336*t868*t6153;
  t9454 = t9450 + t9453;
  t9432 = 2.e-6*t3630;
  t9434 = 3.e-6*t7652;
  t9437 = 0.00464*t9298;
  t9438 = t9432 + t9434 + t9437;
  t9471 = t5725*t9459;
  t9472 = -1.*t9454*t6463;
  t9475 = t9471 + t9472;
  t9455 = t5725*t9454;
  t9460 = t9459*t6463;
  t9462 = t9455 + t9460;
  t9480 = -2.e-6*var2[3]*t412;
  t9481 = -3.e-6*var2[3]*t868*t6741;
  t9482 = -0.00464*var2[3]*t868*t6521;
  t9483 = t9480 + t9481 + t9482;
  t9513 = t9336*t5706;
  t9514 = t453*t868*t6153;
  t9518 = t9513 + t9514;
  t9509 = t5706*t453*t868;
  t9510 = -1.*t9336*t6153;
  t9511 = t9509 + t9510;
  t9485 = -1.e-6*var2[3]*t412;
  t9486 = -0.00559*var2[3]*t868*t6741;
  t9487 = -3.e-6*var2[3]*t868*t6521;
  t9488 = t9485 + t9486 + t9487;
  t9490 = -0.00272*var2[3]*t412;
  t9491 = -1.e-6*var2[3]*t868*t6741;
  t9492 = -2.e-6*var2[3]*t868*t6521;
  t9493 = t9490 + t9491 + t9492;
  t9566 = t8626 + t9009;
  t9567 = var2[4]*t9566;
  t9568 = t5726 + t6493;
  t9569 = var2[3]*t412*t9568;
  t9570 = t9567 + t9569;
  t9572 = var2[3]*t412*t9566;
  t9575 = -1.*t5706*t5725;
  t9576 = t6153*t6463;
  t9579 = t9575 + t9576;
  t9580 = var2[4]*t9579;
  t9581 = t9572 + t9580;
  t9593 = t5706*t453;
  t9594 = -1.*t9336*t868*t6153;
  t9595 = t9593 + t9594;
  t9571 = 1.e-6*t9570;
  t9582 = 2.e-6*t9581;
  t9583 = t9571 + t9582;
  t9522 = t5725*t9518;
  t9525 = t9511*t6463;
  t9526 = t9522 + t9525;
  t9585 = 0.00559*t9570;
  t9586 = 3.e-6*t9581;
  t9587 = t9585 + t9586;
  t9512 = t5725*t9511;
  t9519 = -1.*t9518*t6463;
  t9520 = t9512 + t9519;
  t9589 = 3.e-6*t9570;
  t9590 = 0.00464*t9581;
  t9591 = t9589 + t9590;
  t9389 = t5725*t9382;
  t9543 = t412*t5725*t6153;
  t9544 = t412*t5706*t6463;
  t9545 = t9543 + t9544;
  t9539 = t412*t5706*t5725;
  t9540 = -1.*t412*t6153*t6463;
  t9541 = t9539 + t9540;
  t9584 = t9336*t412*t9583;
  t9588 = t9462*t9587;
  t9592 = t9475*t9591;
  t9604 = -1.*t9459*t6463;
  t9608 = t412*t453*t9583;
  t9609 = t9526*t9587;
  t9611 = t9520*t9591;
  t9615 = -1.*t9511*t6463;
  t9620 = -1.*t868*t9583;
  t9621 = t9545*t9587;
  t9622 = t9541*t9591;
  t9623 = t9541*t9411;
  t9624 = -1.*t412*t5725*t6153;
  t9625 = -1.*t412*t5706*t6463;
  t9626 = t9624 + t9625;
  t9627 = t9626*t9438;
  t9628 = t9620 + t9621 + t9622 + t9623 + t9627;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.*t412*t453*t9333 + (t9389 + t6463*t9397)*t9411 + (-1.*t6463*t9382 + t5725*t9397)*t9438;
  p_output1[10]=t412*t9333*t9336 + t9411*t9462 + t9438*t9475;
  p_output1[11]=0;
  p_output1[12]=-1.*t868*t9333*t9336 + (t412*t5725*t6153*t9336 + t412*t5706*t6463*t9336)*t9411 + (t412*t5706*t5725*t9336 - 1.*t412*t6153*t6463*t9336)*t9438 + t9475*t9483 + t9462*t9488 + t412*t9336*t9493;
  p_output1[13]=-1.*t453*t868*t9333 + (t412*t453*t5725*t6153 + t412*t453*t5706*t6463)*t9411 + (t412*t453*t5706*t5725 - 1.*t412*t453*t6153*t6463)*t9438 + t412*t453*t9493 + t9483*t9520 + t9488*t9526;
  p_output1[14]=-1.*t412*t9333 + (-1.*t5725*t6153*t868 - 1.*t5706*t6463*t868)*t9411 + (-1.*t5706*t5725*t868 + t6153*t6463*t868)*t9438 - 1.*t868*t9493 + t9483*t9541 + t9488*t9545;
  p_output1[15]=t9584 + t9588 + t9592 + t9411*(t9471 + t6463*t9595) + t9438*(t5725*t9595 + t9604);
  p_output1[16]=t9411*(t6463*t9382 + t9512) + t9608 + t9609 + t9611 + t9438*(t9389 + t9615);
  p_output1[17]=t9628;
  p_output1[18]=t9411*t9475 + t9584 + t9588 + t9592 + t9438*(-1.*t5725*t9454 + t9604);
  p_output1[19]=t9411*t9520 + t9608 + t9609 + t9611 + t9438*(-1.*t5725*t9518 + t9615);
  p_output1[20]=t9628;
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

#include "Jq_AMWorld_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
