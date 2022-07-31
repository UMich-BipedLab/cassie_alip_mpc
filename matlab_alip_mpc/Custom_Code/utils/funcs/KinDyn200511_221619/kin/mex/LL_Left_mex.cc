/*
 * Automatically Generated from Mathematica.
 * Tue 2 Jun 2020 15:03:38 GMT-04:00
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
  double t866;
  double t1299;
  double t1150;
  double t1262;
  double t1333;
  double t302;
  double t1271;
  double t1524;
  double t1556;
  double t558;
  double t1800;
  double t168;
  double t768;
  double t1814;
  double t2001;
  double t2104;
  double t2236;
  double t2364;
  double t2371;
  double t2589;
  double t2784;
  double t3249;
  double t4256;
  double t4450;
  double t4514;
  double t4562;
  double t4724;
  double t4736;
  double t4739;
  double t4865;
  double t4867;
  double t4896;
  double t4958;
  double t4975;
  double t4987;
  double t5000;
  double t5071;
  double t5082;
  double t5092;
  double t5105;
  double t5107;
  double t5117;
  double t5133;
  double t5170;
  double t5174;
  double t5177;
  double t5193;
  double t5200;
  double t5221;
  double t5238;
  double t5242;
  double t5252;
  double t5263;
  double t5275;
  double t5278;
  double t5280;
  double t5301;
  double t5307;
  double t5312;
  double t5371;
  double t5375;
  double t5386;
  double t5391;
  double t5393;
  double t5379;
  double t5380;
  double t5381;
  double t5383;
  double t5398;
  double t5399;
  double t5372;
  double t5401;
  double t5402;
  double t5405;
  double t5408;
  double t5409;
  double t5415;
  double t5421;
  double t5424;
  double t4533;
  double t4570;
  double t4636;
  double t4795;
  double t4817;
  double t4826;
  double t5446;
  double t5449;
  double t5452;
  double t4929;
  double t4965;
  double t4968;
  double t5006;
  double t5026;
  double t5060;
  double t5131;
  double t5145;
  double t5159;
  double t5459;
  double t5461;
  double t5464;
  double t5468;
  double t5471;
  double t5474;
  double t5185;
  double t5186;
  double t5188;
  double t5262;
  double t5267;
  double t5270;
  double t5479;
  double t5480;
  double t5486;
  double t5492;
  double t5497;
  double t5499;
  double t5295;
  double t5297;
  double t5300;
  double t5507;
  double t5512;
  double t5513;
  double t5522;
  double t5529;
  double t5533;
  double t5590;
  double t5594;
  double t5597;
  double t5571;
  double t5574;
  double t5580;
  double t5588;
  double t5602;
  double t5603;
  double t5570;
  double t5607;
  double t5610;
  double t5616;
  double t5617;
  double t5626;
  double t5628;
  double t5634;
  double t5637;
  double t5653;
  double t5658;
  double t5660;
  double t5667;
  double t5673;
  double t5674;
  double t5677;
  double t5678;
  double t5679;
  double t5686;
  double t5700;
  double t5703;
  double t5710;
  double t5712;
  double t5713;
  double t5717;
  double t5722;
  double t5724;
  double t5732;
  double t5738;
  double t5740;
  double t3298;
  double t3633;
  double t3947;
  double t4204;
  double t4237;
  double t4693;
  double t4761;
  double t4864;
  double t5004;
  double t5102;
  double t5178;
  double t5233;
  double t5294;
  double t5317;
  double t5320;
  double t5321;
  double t5326;
  double t5342;
  double t5347;
  double t5350;
  double t5351;
  double t5353;
  double t5358;
  double t5430;
  double t5433;
  double t5438;
  double t5439;
  double t5440;
  double t5442;
  double t5454;
  double t5458;
  double t5465;
  double t5476;
  double t5488;
  double t5500;
  double t5520;
  double t5536;
  double t5541;
  double t5542;
  double t5546;
  double t5548;
  double t5550;
  double t5553;
  double t5556;
  double t5558;
  double t5560;
  double t5639;
  double t5642;
  double t5644;
  double t5645;
  double t5647;
  double t5651;
  double t5663;
  double t5666;
  double t5676;
  double t5684;
  double t5709;
  double t5714;
  double t5726;
  double t5741;
  double t5744;
  double t5747;
  double t5748;
  double t5750;
  double t5751;
  double t5754;
  double t5758;
  double t5761;
  double t5771;
  t866 = Cos(var1[4]);
  t1299 = Cos(var1[5]);
  t1150 = Cos(var1[6]);
  t1262 = Sin(var1[5]);
  t1333 = Sin(var1[6]);
  t302 = Cos(var1[7]);
  t1271 = t866*t1150*t1262;
  t1524 = t866*t1299*t1333;
  t1556 = t1271 + t1524;
  t558 = Sin(var1[4]);
  t1800 = Sin(var1[7]);
  t168 = Cos(var1[8]);
  t768 = -1.*t302*t558;
  t1814 = t1556*t1800;
  t2001 = t768 + t1814;
  t2104 = t168*t2001;
  t2236 = t866*t1299*t1150;
  t2364 = -1.*t866*t1262*t1333;
  t2371 = t2236 + t2364;
  t2589 = Sin(var1[8]);
  t2784 = t2371*t2589;
  t3249 = t2104 + t2784;
  t4256 = Cos(var1[9]);
  t4450 = -1.*t4256;
  t4514 = 1. + t4450;
  t4562 = Sin(var1[9]);
  t4724 = t168*t2371;
  t4736 = -1.*t2001*t2589;
  t4739 = t4724 + t4736;
  t4865 = Cos(var1[10]);
  t4867 = -1.*t4865;
  t4896 = 1. + t4867;
  t4958 = Sin(var1[10]);
  t4975 = -1.*t4562*t3249;
  t4987 = t4256*t4739;
  t5000 = t4975 + t4987;
  t5071 = t4256*t3249;
  t5082 = t4562*t4739;
  t5092 = t5071 + t5082;
  t5105 = Cos(var1[11]);
  t5107 = -1.*t5105;
  t5117 = 1. + t5107;
  t5133 = Sin(var1[11]);
  t5170 = t4958*t5000;
  t5174 = t4865*t5092;
  t5177 = t5170 + t5174;
  t5193 = t4865*t5000;
  t5200 = -1.*t4958*t5092;
  t5221 = t5193 + t5200;
  t5238 = Cos(var1[12]);
  t5242 = -1.*t5238;
  t5252 = 1. + t5242;
  t5263 = Sin(var1[12]);
  t5275 = -1.*t5133*t5177;
  t5278 = t5105*t5221;
  t5280 = t5275 + t5278;
  t5301 = t5105*t5177;
  t5307 = t5133*t5221;
  t5312 = t5301 + t5307;
  t5371 = Sin(var1[3]);
  t5375 = Cos(var1[3]);
  t5386 = t1299*t5371*t558;
  t5391 = -1.*t5375*t1262;
  t5393 = t5386 + t5391;
  t5379 = t5375*t1299;
  t5380 = t5371*t558*t1262;
  t5381 = t5379 + t5380;
  t5383 = t1150*t5381;
  t5398 = t5393*t1333;
  t5399 = t5383 + t5398;
  t5372 = t866*t302*t5371;
  t5401 = t5399*t1800;
  t5402 = t5372 + t5401;
  t5405 = t168*t5402;
  t5408 = t1150*t5393;
  t5409 = -1.*t5381*t1333;
  t5415 = t5408 + t5409;
  t5421 = t5415*t2589;
  t5424 = t5405 + t5421;
  t4533 = -0.08055*t4514;
  t4570 = -0.13004*t4562;
  t4636 = 0. + t4533 + t4570;
  t4795 = -0.13004*t4514;
  t4817 = 0.08055*t4562;
  t4826 = 0. + t4795 + t4817;
  t5446 = t168*t5415;
  t5449 = -1.*t5402*t2589;
  t5452 = t5446 + t5449;
  t4929 = -0.19074*t4896;
  t4965 = 0.03315*t4958;
  t4968 = 0. + t4929 + t4965;
  t5006 = -0.03315*t4896;
  t5026 = -0.19074*t4958;
  t5060 = 0. + t5006 + t5026;
  t5131 = -0.01315*t5117;
  t5145 = -0.62554*t5133;
  t5159 = 0. + t5131 + t5145;
  t5459 = -1.*t4562*t5424;
  t5461 = t4256*t5452;
  t5464 = t5459 + t5461;
  t5468 = t4256*t5424;
  t5471 = t4562*t5452;
  t5474 = t5468 + t5471;
  t5185 = -0.62554*t5117;
  t5186 = 0.01315*t5133;
  t5188 = 0. + t5185 + t5186;
  t5262 = -1.03354*t5252;
  t5267 = 0.05315*t5263;
  t5270 = 0. + t5262 + t5267;
  t5479 = t4958*t5464;
  t5480 = t4865*t5474;
  t5486 = t5479 + t5480;
  t5492 = t4865*t5464;
  t5497 = -1.*t4958*t5474;
  t5499 = t5492 + t5497;
  t5295 = -0.05315*t5252;
  t5297 = -1.03354*t5263;
  t5300 = 0. + t5295 + t5297;
  t5507 = -1.*t5133*t5486;
  t5512 = t5105*t5499;
  t5513 = t5507 + t5512;
  t5522 = t5105*t5486;
  t5529 = t5133*t5499;
  t5533 = t5522 + t5529;
  t5590 = t5375*t1299*t558;
  t5594 = t5371*t1262;
  t5597 = t5590 + t5594;
  t5571 = -1.*t1299*t5371;
  t5574 = t5375*t558*t1262;
  t5580 = t5571 + t5574;
  t5588 = t1150*t5580;
  t5602 = t5597*t1333;
  t5603 = t5588 + t5602;
  t5570 = t5375*t866*t302;
  t5607 = t5603*t1800;
  t5610 = t5570 + t5607;
  t5616 = t168*t5610;
  t5617 = t1150*t5597;
  t5626 = -1.*t5580*t1333;
  t5628 = t5617 + t5626;
  t5634 = t5628*t2589;
  t5637 = t5616 + t5634;
  t5653 = t168*t5628;
  t5658 = -1.*t5610*t2589;
  t5660 = t5653 + t5658;
  t5667 = -1.*t4562*t5637;
  t5673 = t4256*t5660;
  t5674 = t5667 + t5673;
  t5677 = t4256*t5637;
  t5678 = t4562*t5660;
  t5679 = t5677 + t5678;
  t5686 = t4958*t5674;
  t5700 = t4865*t5679;
  t5703 = t5686 + t5700;
  t5710 = t4865*t5674;
  t5712 = -1.*t4958*t5679;
  t5713 = t5710 + t5712;
  t5717 = -1.*t5133*t5703;
  t5722 = t5105*t5713;
  t5724 = t5717 + t5722;
  t5732 = t5105*t5703;
  t5738 = t5133*t5713;
  t5740 = t5732 + t5738;
  t3298 = t302*t1556;
  t3633 = t558*t1800;
  t3947 = t3298 + t3633;
  t4204 = -0.004500000000000004*t3947;
  t4237 = 0.08055*t3249;
  t4693 = t4636*t3249;
  t4761 = 0.01004*t4739;
  t4864 = t4826*t4739;
  t5004 = t4968*t5000;
  t5102 = t5060*t5092;
  t5178 = t5159*t5177;
  t5233 = t5188*t5221;
  t5294 = t5270*t5280;
  t5317 = t5300*t5312;
  t5320 = t5263*t5280;
  t5321 = t5238*t5312;
  t5326 = t5320 + t5321;
  t5342 = -0.05315*t5326;
  t5347 = t5238*t5280;
  t5350 = -1.*t5263*t5312;
  t5351 = t5347 + t5350;
  t5353 = -1.03354*t5351;
  t5358 = 0. + t4204 + t4237 + t4693 + t4761 + t4864 + t5004 + t5102 + t5178 + t5233 + t5294 + t5317 + t5342 + t5353;
  t5430 = t302*t5399;
  t5433 = -1.*t866*t5371*t1800;
  t5438 = t5430 + t5433;
  t5439 = -0.004500000000000004*t5438;
  t5440 = 0.08055*t5424;
  t5442 = t4636*t5424;
  t5454 = 0.01004*t5452;
  t5458 = t4826*t5452;
  t5465 = t4968*t5464;
  t5476 = t5060*t5474;
  t5488 = t5159*t5486;
  t5500 = t5188*t5499;
  t5520 = t5270*t5513;
  t5536 = t5300*t5533;
  t5541 = t5263*t5513;
  t5542 = t5238*t5533;
  t5546 = t5541 + t5542;
  t5548 = -0.05315*t5546;
  t5550 = t5238*t5513;
  t5553 = -1.*t5263*t5533;
  t5556 = t5550 + t5553;
  t5558 = -1.03354*t5556;
  t5560 = 0. + t5439 + t5440 + t5442 + t5454 + t5458 + t5465 + t5476 + t5488 + t5500 + t5520 + t5536 + t5548 + t5558;
  t5639 = t302*t5603;
  t5642 = -1.*t5375*t866*t1800;
  t5644 = t5639 + t5642;
  t5645 = -0.004500000000000004*t5644;
  t5647 = 0.08055*t5637;
  t5651 = t4636*t5637;
  t5663 = 0.01004*t5660;
  t5666 = t4826*t5660;
  t5676 = t4968*t5674;
  t5684 = t5060*t5679;
  t5709 = t5159*t5703;
  t5714 = t5188*t5713;
  t5726 = t5270*t5724;
  t5741 = t5300*t5740;
  t5744 = t5263*t5724;
  t5747 = t5238*t5740;
  t5748 = t5744 + t5747;
  t5750 = -0.05315*t5748;
  t5751 = t5238*t5724;
  t5754 = -1.*t5263*t5740;
  t5758 = t5751 + t5754;
  t5761 = -1.03354*t5758;
  t5771 = 0. + t5645 + t5647 + t5651 + t5663 + t5666 + t5676 + t5684 + t5709 + t5714 + t5726 + t5741 + t5750 + t5761;
  p_output1[0]=Sqrt(Power((-1.*t168*t2371 + t2001*t2589)*t5358 + (t2589*t5402 - 1.*t168*t5415)*t5560 + (t2589*t5610 - 1.*t168*t5628)*t5771,2) + Power(t3249*t5358 + t5424*t5560 + t5637*t5771,2));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "LL_Left_mex.hh"

namespace SymExpression
{

void LL_Left_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
