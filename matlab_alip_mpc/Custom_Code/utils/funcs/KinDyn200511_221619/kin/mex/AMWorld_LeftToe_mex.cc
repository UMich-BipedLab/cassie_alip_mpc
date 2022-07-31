/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:13 GMT-04:00
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
  double t508;
  double t1149;
  double t1561;
  double t1213;
  double t1572;
  double t1080;
  double t2574;
  double t2956;
  double t3103;
  double t1499;
  double t1878;
  double t2051;
  double t3465;
  double t459;
  double t4223;
  double t4543;
  double t4661;
  double t527;
  double t820;
  double t940;
  double t2529;
  double t3682;
  double t3789;
  double t4080;
  double t4084;
  double t4174;
  double t4773;
  double t5788;
  double t4186;
  double t4793;
  double t4870;
  double t348;
  double t6086;
  double t6098;
  double t6237;
  double t7060;
  double t5051;
  double t6657;
  double t6668;
  double t307;
  double t7245;
  double t7291;
  double t7331;
  double t7506;
  double t6988;
  double t7388;
  double t7399;
  double t78;
  double t7615;
  double t7638;
  double t7642;
  double t7856;
  double t32;
  double t8758;
  double t8792;
  double t8862;
  double t8910;
  double t8929;
  double t8951;
  double t8874;
  double t8952;
  double t8963;
  double t9034;
  double t9096;
  double t9100;
  double t9141;
  double t9192;
  double t9199;
  double t8964;
  double t9115;
  double t9119;
  double t9204;
  double t9205;
  double t9206;
  double t9208;
  double t9211;
  double t9133;
  double t9201;
  double t9202;
  double t9217;
  double t9218;
  double t9216;
  double t9220;
  double t9224;
  double t9230;
  double t9233;
  double t9234;
  double t9268;
  double t9270;
  double t9271;
  double t9266;
  double t9272;
  double t9274;
  double t9279;
  double t9280;
  double t9293;
  double t9295;
  double t9296;
  double t9277;
  double t9282;
  double t9289;
  double t9310;
  double t9313;
  double t9314;
  double t9317;
  double t9318;
  double t9290;
  double t9298;
  double t9299;
  double t9328;
  double t9336;
  double t9324;
  double t9342;
  double t9343;
  double t9349;
  double t9350;
  double t9352;
  double t9418;
  double t9419;
  double t9435;
  double t9420;
  double t9421;
  double t9426;
  double t9428;
  double t9305;
  double t9319;
  double t9323;
  double t9345;
  double t9353;
  double t9367;
  double t9368;
  double t9373;
  double t9375;
  double t9376;
  double t9379;
  double t9380;
  double t9382;
  double t9383;
  double t9385;
  double t7496;
  double t7662;
  double t7753;
  double t7896;
  double t8597;
  double t8615;
  double t9425;
  double t9429;
  double t9431;
  double t9434;
  double t9437;
  double t9439;
  double t9440;
  double t9444;
  double t9447;
  double t9452;
  double t9454;
  double t9461;
  double t9462;
  double t9467;
  double t9203;
  double t9212;
  double t9213;
  double t9229;
  double t9235;
  double t9236;
  double t9241;
  double t9245;
  double t9247;
  double t9248;
  double t9252;
  double t9254;
  double t9258;
  double t9260;
  double t9261;
  double t9533;
  double t9536;
  double t9542;
  double t9516;
  double t9517;
  double t9518;
  double t9559;
  double t9564;
  double t9567;
  double t9514;
  double t9520;
  double t9549;
  double t9550;
  double t9553;
  double t9555;
  double t9556;
  double t9570;
  double t9575;
  double t9585;
  double t9586;
  double t9590;
  double t9576;
  double t9591;
  double t9593;
  double t9596;
  double t9603;
  double t9605;
  double t9595;
  double t9606;
  double t9608;
  double t9611;
  double t9613;
  double t9616;
  double t9262;
  double t9389;
  double t9390;
  double t9470;
  double t9476;
  double t9477;
  double t9609;
  double t9617;
  double t9619;
  double t9623;
  double t9624;
  double t9628;
  double t9488;
  double t9497;
  double t9498;
  double t9504;
  double t9671;
  double t9677;
  double t9678;
  double t9662;
  double t9663;
  double t9665;
  double t9666;
  double t9667;
  double t9668;
  double t9670;
  double t9679;
  double t9682;
  double t9691;
  double t9693;
  double t9694;
  double t9690;
  double t9697;
  double t9698;
  double t9706;
  double t9709;
  double t9710;
  double t9702;
  double t9711;
  double t9712;
  double t9716;
  double t9717;
  double t9718;
  double t9715;
  double t9719;
  double t9720;
  double t9722;
  double t9723;
  double t9724;
  t508 = Cos(var1[3]);
  t1149 = Cos(var1[5]);
  t1561 = Sin(var1[4]);
  t1213 = Sin(var1[3]);
  t1572 = Sin(var1[5]);
  t1080 = Cos(var1[6]);
  t2574 = t508*t1149*t1561;
  t2956 = t1213*t1572;
  t3103 = t2574 + t2956;
  t1499 = -1.*t1149*t1213;
  t1878 = t508*t1561*t1572;
  t2051 = t1499 + t1878;
  t3465 = Sin(var1[6]);
  t459 = Cos(var1[8]);
  t4223 = t1080*t3103;
  t4543 = -1.*t2051*t3465;
  t4661 = t4223 + t4543;
  t527 = Cos(var1[4]);
  t820 = Cos(var1[7]);
  t940 = t508*t527*t820;
  t2529 = t1080*t2051;
  t3682 = t3103*t3465;
  t3789 = t2529 + t3682;
  t4080 = Sin(var1[7]);
  t4084 = t3789*t4080;
  t4174 = t940 + t4084;
  t4773 = Sin(var1[8]);
  t5788 = Cos(var1[9]);
  t4186 = t459*t4174;
  t4793 = t4661*t4773;
  t4870 = t4186 + t4793;
  t348 = Sin(var1[9]);
  t6086 = t459*t4661;
  t6098 = -1.*t4174*t4773;
  t6237 = t6086 + t6098;
  t7060 = Cos(var1[10]);
  t5051 = -1.*t348*t4870;
  t6657 = t5788*t6237;
  t6668 = t5051 + t6657;
  t307 = Sin(var1[10]);
  t7245 = t5788*t4870;
  t7291 = t348*t6237;
  t7331 = t7245 + t7291;
  t7506 = Cos(var1[11]);
  t6988 = t307*t6668;
  t7388 = t7060*t7331;
  t7399 = t6988 + t7388;
  t78 = Sin(var1[11]);
  t7615 = t7060*t6668;
  t7638 = -1.*t307*t7331;
  t7642 = t7615 + t7638;
  t7856 = Cos(var1[12]);
  t32 = Sin(var1[12]);
  t8758 = t7856*t78;
  t8792 = t7506*t32;
  t8862 = 0. + t8758 + t8792;
  t8910 = t7506*t7856;
  t8929 = -1.*t78*t32;
  t8951 = 0. + t8910 + t8929;
  t8874 = -1.*t307*t8862;
  t8952 = t7060*t8951;
  t8963 = 0. + t8874 + t8952;
  t9034 = t7060*t8862;
  t9096 = t307*t8951;
  t9100 = 0. + t9034 + t9096;
  t9141 = t5788*t8963;
  t9192 = -1.*t348*t9100;
  t9199 = 0. + t9141 + t9192;
  t8964 = t348*t8963;
  t9115 = t5788*t9100;
  t9119 = 0. + t8964 + t9115;
  t9204 = t459*t9199;
  t9205 = -1.*t9119*t4773;
  t9206 = 0. + t9204 + t9205;
  t9208 = t820*t9206;
  t9211 = 0. + t9208;
  t9133 = t459*t9119;
  t9201 = t9199*t4773;
  t9202 = 0. + t9133 + t9201;
  t9217 = t4080*t9206;
  t9218 = 0. + t9217;
  t9216 = -1.*t3465*t9202;
  t9220 = t1080*t9218;
  t9224 = 0. + t9216 + t9220;
  t9230 = t1080*t9202;
  t9233 = t3465*t9218;
  t9234 = 0. + t9230 + t9233;
  t9268 = -1.*t7506*t7856;
  t9270 = t78*t32;
  t9271 = 0. + t9268 + t9270;
  t9266 = t307*t8862;
  t9272 = t7060*t9271;
  t9274 = 0. + t9266 + t9272;
  t9279 = -1.*t307*t9271;
  t9280 = 0. + t9034 + t9279;
  t9293 = -1.*t348*t9274;
  t9295 = t5788*t9280;
  t9296 = 0. + t9293 + t9295;
  t9277 = t5788*t9274;
  t9282 = t348*t9280;
  t9289 = 0. + t9277 + t9282;
  t9310 = t459*t9296;
  t9313 = -1.*t9289*t4773;
  t9314 = 0. + t9310 + t9313;
  t9317 = t820*t9314;
  t9318 = 0. + t9317;
  t9290 = t459*t9289;
  t9298 = t9296*t4773;
  t9299 = 0. + t9290 + t9298;
  t9328 = t4080*t9314;
  t9336 = 0. + t9328;
  t9324 = -1.*t3465*t9299;
  t9342 = t1080*t9336;
  t9343 = 0. + t9324 + t9342;
  t9349 = t1080*t9299;
  t9350 = t3465*t9336;
  t9352 = 0. + t9349 + t9350;
  t9418 = -1.*t820;
  t9419 = 0. + t9418;
  t9435 = 0. + t4080;
  t9420 = t1080*t9419;
  t9421 = 0. + t9420;
  t9426 = t9419*t3465;
  t9428 = 0. + t9426;
  t9305 = var2[7]*t9299;
  t9319 = var2[5]*t9318;
  t9323 = var2[6]*t9318;
  t9345 = t1149*t9343;
  t9353 = -1.*t1572*t9352;
  t9367 = 0. + t9345 + t9353;
  t9368 = var2[4]*t9367;
  t9373 = -1.*t1561*t9318;
  t9375 = t1572*t9343;
  t9376 = t1149*t9352;
  t9379 = 0. + t9375 + t9376;
  t9380 = t527*t9379;
  t9382 = 0. + t9373 + t9380;
  t9383 = var2[3]*t9382;
  t9385 = 0. + t9305 + t9319 + t9323 + t9368 + t9383;
  t7496 = -1.*t78*t7399;
  t7662 = t7506*t7642;
  t7753 = t7496 + t7662;
  t7896 = t7506*t7399;
  t8597 = t78*t7642;
  t8615 = t7896 + t8597;
  t9425 = t1149*t9421;
  t9429 = -1.*t1572*t9428;
  t9431 = 0. + t9425 + t9429;
  t9434 = var2[4]*t9431;
  t9437 = var2[5]*t9435;
  t9439 = var2[6]*t9435;
  t9440 = t9421*t1572;
  t9444 = t1149*t9428;
  t9447 = 0. + t9440 + t9444;
  t9452 = t527*t9447;
  t9454 = -1.*t1561*t9435;
  t9461 = 0. + t9452 + t9454;
  t9462 = var2[3]*t9461;
  t9467 = 0. + var2[9] + var2[10] + var2[11] + var2[12] + var2[8] + t9434 + t9437 + t9439 + t9462;
  t9203 = var2[7]*t9202;
  t9212 = var2[5]*t9211;
  t9213 = var2[6]*t9211;
  t9229 = t1149*t9224;
  t9235 = -1.*t1572*t9234;
  t9236 = 0. + t9229 + t9235;
  t9241 = var2[4]*t9236;
  t9245 = -1.*t1561*t9211;
  t9247 = t1572*t9224;
  t9248 = t1149*t9234;
  t9252 = 0. + t9247 + t9248;
  t9254 = t527*t9252;
  t9258 = 0. + t9245 + t9254;
  t9260 = var2[3]*t9258;
  t9261 = 0. + t9203 + t9212 + t9213 + t9241 + t9260;
  t9533 = t1149*t1213*t1561;
  t9536 = -1.*t508*t1572;
  t9542 = t9533 + t9536;
  t9516 = t508*t1149;
  t9517 = t1213*t1561*t1572;
  t9518 = t9516 + t9517;
  t9559 = t1080*t9542;
  t9564 = -1.*t9518*t3465;
  t9567 = t9559 + t9564;
  t9514 = t527*t820*t1213;
  t9520 = t1080*t9518;
  t9549 = t9542*t3465;
  t9550 = t9520 + t9549;
  t9553 = t9550*t4080;
  t9555 = t9514 + t9553;
  t9556 = t459*t9555;
  t9570 = t9567*t4773;
  t9575 = t9556 + t9570;
  t9585 = t459*t9567;
  t9586 = -1.*t9555*t4773;
  t9590 = t9585 + t9586;
  t9576 = -1.*t348*t9575;
  t9591 = t5788*t9590;
  t9593 = t9576 + t9591;
  t9596 = t5788*t9575;
  t9603 = t348*t9590;
  t9605 = t9596 + t9603;
  t9595 = t307*t9593;
  t9606 = t7060*t9605;
  t9608 = t9595 + t9606;
  t9611 = t7060*t9593;
  t9613 = -1.*t307*t9605;
  t9616 = t9611 + t9613;
  t9262 = 0.000171*t9261;
  t9389 = -0.000099*t9385;
  t9390 = 0. + t9262 + t9389;
  t9470 = 0.000449*t9467;
  t9476 = -1.e-6*t9385;
  t9477 = 0. + t9470 + t9476;
  t9609 = -1.*t78*t9608;
  t9617 = t7506*t9616;
  t9619 = t9609 + t9617;
  t9623 = t7506*t9608;
  t9624 = t78*t9616;
  t9628 = t9623 + t9624;
  t9488 = -1.e-6*t9467;
  t9497 = -0.000099*t9261;
  t9498 = 0.000287*t9385;
  t9504 = t9488 + t9497 + t9498;
  t9671 = t527*t1149*t1080;
  t9677 = -1.*t527*t1572*t3465;
  t9678 = t9671 + t9677;
  t9662 = -1.*t820*t1561;
  t9663 = t527*t1080*t1572;
  t9665 = t527*t1149*t3465;
  t9666 = t9663 + t9665;
  t9667 = t9666*t4080;
  t9668 = t9662 + t9667;
  t9670 = t459*t9668;
  t9679 = t9678*t4773;
  t9682 = t9670 + t9679;
  t9691 = t459*t9678;
  t9693 = -1.*t9668*t4773;
  t9694 = t9691 + t9693;
  t9690 = -1.*t348*t9682;
  t9697 = t5788*t9694;
  t9698 = t9690 + t9697;
  t9706 = t5788*t9682;
  t9709 = t348*t9694;
  t9710 = t9706 + t9709;
  t9702 = t307*t9698;
  t9711 = t7060*t9710;
  t9712 = t9702 + t9711;
  t9716 = t7060*t9698;
  t9717 = -1.*t307*t9710;
  t9718 = t9716 + t9717;
  t9715 = -1.*t78*t9712;
  t9719 = t7506*t9718;
  t9720 = t9715 + t9719;
  t9722 = t7506*t9712;
  t9723 = t78*t9718;
  t9724 = t9722 + t9723;
  p_output1[0]=(t32*t7753 + t7856*t8615)*t9390 + (t4080*t508*t527 - 1.*t3789*t820)*t9477 + (-1.*t7753*t7856 + t32*t8615)*t9504;
  p_output1[1]=t9477*(t1213*t4080*t527 - 1.*t820*t9550) + t9504*(-1.*t7856*t9619 + t32*t9628) + t9390*(t32*t9619 + t7856*t9628);
  p_output1[2]=t9477*(-1.*t1561*t4080 - 1.*t820*t9666) + t9504*(-1.*t7856*t9720 + t32*t9724) + t9390*(t32*t9720 + t7856*t9724);
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

#include "AMWorld_LeftToe_mex.hh"

namespace SymExpression
{

void AMWorld_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
