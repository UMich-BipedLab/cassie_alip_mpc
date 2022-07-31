/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:30 GMT-04:00
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
  double t2257;
  double t1873;
  double t2314;
  double t2092;
  double t2323;
  double t1519;
  double t1660;
  double t2246;
  double t2331;
  double t2345;
  double t2431;
  double t3590;
  double t3632;
  double t3641;
  double t3937;
  double t3983;
  double t4047;
  double t4077;
  double t4244;
  double t4315;
  double t4332;
  double t4339;
  double t1259;
  double t1190;
  double t4403;
  double t4411;
  double t4413;
  double t4372;
  double t4371;
  double t4465;
  double t4466;
  double t4482;
  double t4400;
  double t4426;
  double t4451;
  double t4670;
  double t4672;
  double t4610;
  double t4612;
  double t4831;
  double t4834;
  double t4836;
  double t4756;
  double t4757;
  double t4790;
  double t4815;
  double t4820;
  double t4822;
  double t4931;
  double t4933;
  double t4942;
  double t4904;
  double t4925;
  double t4928;
  double t4971;
  double t4977;
  double t4980;
  double t4893;
  double t4930;
  double t4947;
  double t4957;
  double t4961;
  double t4962;
  double t5053;
  double t5067;
  double t5081;
  double t5134;
  double t5150;
  double t5156;
  double t5164;
  double t5293;
  double t5308;
  double t5312;
  double t5336;
  double t5350;
  double t5358;
  double t5365;
  double t5388;
  double t5389;
  double t5391;
  double t5399;
  double t5401;
  double t5451;
  double t5463;
  double t5431;
  double t5436;
  double t5439;
  double t5549;
  double t5560;
  double t5529;
  double t5534;
  double t5647;
  double t5653;
  double t5682;
  double t5613;
  double t5615;
  double t5618;
  double t5620;
  double t5621;
  double t5622;
  double t5729;
  double t5745;
  double t5750;
  double t5790;
  double t5791;
  double t5794;
  double t5796;
  double t5214;
  double t5233;
  double t5244;
  double t5881;
  double t5883;
  double t5886;
  double t5888;
  double t5889;
  double t5892;
  double t5965;
  double t5969;
  double t5975;
  double t5916;
  double t5920;
  double t5937;
  double t5942;
  double t5982;
  double t5987;
  double t5988;
  double t5989;
  double t6014;
  double t6031;
  double t6041;
  double t6042;
  double t6053;
  double t6055;
  double t6057;
  double t6082;
  double t6083;
  double t6084;
  double t6090;
  double t6186;
  double t6189;
  double t6190;
  double t6135;
  double t6136;
  double t6152;
  double t6155;
  double t6164;
  double t6170;
  double t4456;
  double t4483;
  double t4490;
  double t4534;
  double t4537;
  double t4538;
  double t4634;
  double t4702;
  double t4709;
  double t4725;
  double t4733;
  double t4738;
  double t4829;
  double t4841;
  double t4843;
  double t4859;
  double t4863;
  double t4868;
  double t4966;
  double t4987;
  double t4988;
  double t5008;
  double t5011;
  double t5012;
  double t5087;
  double t5097;
  double t5106;
  double t6406;
  double t5440;
  double t5465;
  double t5469;
  double t5496;
  double t5497;
  double t5498;
  double t5548;
  double t5563;
  double t5568;
  double t5582;
  double t5588;
  double t5589;
  double t5640;
  double t5685;
  double t5691;
  double t5705;
  double t5707;
  double t5716;
  double t5755;
  double t5756;
  double t5761;
  double t5811;
  double t5812;
  double t5823;
  double t6515;
  double t5272;
  double t5274;
  double t6574;
  double t6579;
  double t6582;
  double t6074;
  double t6077;
  double t6079;
  double t6103;
  double t6104;
  double t6105;
  double t6605;
  double t6172;
  double t6195;
  double t6197;
  double t6211;
  double t6217;
  double t6229;
  t2257 = Cos(var1[3]);
  t1873 = Cos(var1[5]);
  t2314 = Sin(var1[4]);
  t2092 = Sin(var1[3]);
  t2323 = Sin(var1[5]);
  t1519 = Cos(var1[7]);
  t1660 = Cos(var1[6]);
  t2246 = -1.*t1873*t2092;
  t2331 = t2257*t2314*t2323;
  t2345 = t2246 + t2331;
  t2431 = t1660*t2345;
  t3590 = t2257*t1873*t2314;
  t3632 = t2092*t2323;
  t3641 = t3590 + t3632;
  t3937 = Sin(var1[6]);
  t3983 = t3641*t3937;
  t4047 = t2431 + t3983;
  t4077 = t1519*t4047;
  t4244 = Cos(var1[4]);
  t4315 = Sin(var1[7]);
  t4332 = -1.*t2257*t4244*t4315;
  t4339 = t4077 + t4332;
  t1259 = Sin(var1[9]);
  t1190 = Cos(var1[8]);
  t4403 = t1873*t2092;
  t4411 = -1.*t2257*t2314*t2323;
  t4413 = t4403 + t4411;
  t4372 = Sin(var1[8]);
  t4371 = Cos(var1[9]);
  t4465 = t1660*t4413;
  t4466 = -1.*t3641*t3937;
  t4482 = t4465 + t4466;
  t4400 = t1660*t3641;
  t4426 = t4413*t3937;
  t4451 = t4400 + t4426;
  t4670 = -1.*t1660*t2345;
  t4672 = t4670 + t4466;
  t4610 = -1.*t2345*t3937;
  t4612 = t4400 + t4610;
  t4831 = t2257*t4244*t1873*t1660;
  t4834 = -1.*t2257*t4244*t2323*t3937;
  t4836 = t4831 + t4834;
  t4756 = -1.*t2257*t1519*t2314;
  t4757 = t2257*t4244*t1660*t2323;
  t4790 = t2257*t4244*t1873*t3937;
  t4815 = t4757 + t4790;
  t4820 = t4815*t4315;
  t4822 = t4756 + t4820;
  t4931 = -1.*t1873*t2092*t2314;
  t4933 = t2257*t2323;
  t4942 = t4931 + t4933;
  t4904 = -1.*t2257*t1873;
  t4925 = -1.*t2092*t2314*t2323;
  t4928 = t4904 + t4925;
  t4971 = t1660*t4942;
  t4977 = -1.*t4928*t3937;
  t4980 = t4971 + t4977;
  t4893 = -1.*t4244*t1519*t2092;
  t4930 = t1660*t4928;
  t4947 = t4942*t3937;
  t4957 = t4930 + t4947;
  t4961 = t4957*t4315;
  t4962 = t4893 + t4961;
  t5053 = t2257*t4244*t1519;
  t5067 = t4047*t4315;
  t5081 = t5053 + t5067;
  t5134 = t1190*t4612;
  t5150 = -1.*t5081*t4372;
  t5156 = t5134 + t5150;
  t5164 = t1259*t5156;
  t5293 = t2257*t1873;
  t5308 = t2092*t2314*t2323;
  t5312 = t5293 + t5308;
  t5336 = t1660*t5312;
  t5350 = t1873*t2092*t2314;
  t5358 = -1.*t2257*t2323;
  t5365 = t5350 + t5358;
  t5388 = t5365*t3937;
  t5389 = t5336 + t5388;
  t5391 = t1519*t5389;
  t5399 = -1.*t4244*t2092*t4315;
  t5401 = t5391 + t5399;
  t5451 = -1.*t5365*t3937;
  t5463 = t4930 + t5451;
  t5431 = t1660*t5365;
  t5436 = t4928*t3937;
  t5439 = t5431 + t5436;
  t5549 = -1.*t1660*t5312;
  t5560 = t5549 + t5451;
  t5529 = -1.*t5312*t3937;
  t5534 = t5431 + t5529;
  t5647 = t4244*t1873*t1660*t2092;
  t5653 = -1.*t4244*t2092*t2323*t3937;
  t5682 = t5647 + t5653;
  t5613 = -1.*t1519*t2092*t2314;
  t5615 = t4244*t1660*t2092*t2323;
  t5618 = t4244*t1873*t2092*t3937;
  t5620 = t5615 + t5618;
  t5621 = t5620*t4315;
  t5622 = t5613 + t5621;
  t5729 = t4244*t1519*t2092;
  t5745 = t5389*t4315;
  t5750 = t5729 + t5745;
  t5790 = t1190*t5534;
  t5791 = -1.*t5750*t4372;
  t5794 = t5790 + t5791;
  t5796 = t1259*t5794;
  t5214 = t1190*t5081;
  t5233 = t4612*t4372;
  t5244 = t5214 + t5233;
  t5881 = t4244*t1660*t2323;
  t5883 = t4244*t1873*t3937;
  t5886 = t5881 + t5883;
  t5888 = t1519*t5886;
  t5889 = t2314*t4315;
  t5892 = t5888 + t5889;
  t5965 = -1.*t4244*t1660*t2323;
  t5969 = -1.*t4244*t1873*t3937;
  t5975 = t5965 + t5969;
  t5916 = t4244*t1873*t1660;
  t5920 = -1.*t4244*t2323*t3937;
  t5937 = t5916 + t5920;
  t5942 = t1190*t5937*t4315;
  t5982 = t5975*t4372;
  t5987 = t5942 + t5982;
  t5988 = t1259*t5987;
  t5989 = t1190*t5975;
  t6014 = -1.*t5937*t4315*t4372;
  t6031 = t5989 + t6014;
  t6041 = -1.*t4371*t6031;
  t6042 = t5988 + t6041;
  t6053 = -1.*t1519*t2314;
  t6055 = t5886*t4315;
  t6057 = t6053 + t6055;
  t6082 = t1190*t5937;
  t6083 = -1.*t6057*t4372;
  t6084 = t6082 + t6083;
  t6090 = t1259*t6084;
  t6186 = -1.*t1873*t1660*t2314;
  t6189 = t2314*t2323*t3937;
  t6190 = t6186 + t6189;
  t6135 = -1.*t4244*t1519;
  t6136 = -1.*t1660*t2314*t2323;
  t6152 = -1.*t1873*t2314*t3937;
  t6155 = t6136 + t6152;
  t6164 = t6155*t4315;
  t6170 = t6135 + t6164;
  t4456 = t1190*t4451*t4315;
  t4483 = t4482*t4372;
  t4490 = t4456 + t4483;
  t4534 = t1190*t4482;
  t4537 = -1.*t4451*t4315*t4372;
  t4538 = t4534 + t4537;
  t4634 = t1190*t4612*t4315;
  t4702 = t4672*t4372;
  t4709 = t4634 + t4702;
  t4725 = t1190*t4672;
  t4733 = -1.*t4612*t4315*t4372;
  t4738 = t4725 + t4733;
  t4829 = t1190*t4822;
  t4841 = t4836*t4372;
  t4843 = t4829 + t4841;
  t4859 = t1190*t4836;
  t4863 = -1.*t4822*t4372;
  t4868 = t4859 + t4863;
  t4966 = t1190*t4962;
  t4987 = t4980*t4372;
  t4988 = t4966 + t4987;
  t5008 = t1190*t4980;
  t5011 = -1.*t4962*t4372;
  t5012 = t5008 + t5011;
  t5087 = -1.*t1190*t5081;
  t5097 = -1.*t4612*t4372;
  t5106 = t5087 + t5097;
  t6406 = t4371*t5156;
  t5440 = t1190*t5439*t4315;
  t5465 = t5463*t4372;
  t5469 = t5440 + t5465;
  t5496 = t1190*t5463;
  t5497 = -1.*t5439*t4315*t4372;
  t5498 = t5496 + t5497;
  t5548 = t1190*t5534*t4315;
  t5563 = t5560*t4372;
  t5568 = t5548 + t5563;
  t5582 = t1190*t5560;
  t5588 = -1.*t5534*t4315*t4372;
  t5589 = t5582 + t5588;
  t5640 = t1190*t5622;
  t5685 = t5682*t4372;
  t5691 = t5640 + t5685;
  t5705 = t1190*t5682;
  t5707 = -1.*t5622*t4372;
  t5716 = t5705 + t5707;
  t5755 = -1.*t1190*t5750;
  t5756 = -1.*t5534*t4372;
  t5761 = t5755 + t5756;
  t5811 = t1190*t5750;
  t5812 = t5534*t4372;
  t5823 = t5811 + t5812;
  t6515 = t4371*t5794;
  t5272 = t4371*t5244;
  t5274 = t5272 + t5164;
  t6574 = t4371*t5987;
  t6579 = t1259*t6031;
  t6582 = t6574 + t6579;
  t6074 = -1.*t1190*t6057;
  t6077 = -1.*t5937*t4372;
  t6079 = t6074 + t6077;
  t6103 = t1190*t6057;
  t6104 = t5937*t4372;
  t6105 = t6103 + t6104;
  t6605 = t4371*t6084;
  t6172 = t1190*t6170;
  t6195 = t6190*t4372;
  t6197 = t6172 + t6195;
  t6211 = t1190*t6190;
  t6217 = -1.*t6170*t4372;
  t6229 = t6211 + t6217;
  p_output1[0]=(t1259*t4988 - 1.*t4371*t5012)*var2[3] + (t1259*t4843 - 1.*t4371*t4868)*var2[4] + (t1259*t4490 - 1.*t4371*t4538)*var2[5] + (t1259*t4709 - 1.*t4371*t4738)*var2[6] + (t1190*t1259*t4339 + t4339*t4371*t4372)*var2[7] + (-1.*t4371*t5106 + t5164)*var2[8] + t5274*var2[9];
  p_output1[1]=(-1.*t4371*t5156 + t1259*t5244)*var2[3] + (t1259*t5691 - 1.*t4371*t5716)*var2[4] + (t1259*t5469 - 1.*t4371*t5498)*var2[5] + (t1259*t5568 - 1.*t4371*t5589)*var2[6] + (t1190*t1259*t5401 + t4371*t4372*t5401)*var2[7] + (-1.*t4371*t5761 + t5796)*var2[8] + (t5796 + t4371*t5823)*var2[9];
  p_output1[2]=(t1259*t6197 - 1.*t4371*t6229)*var2[4] + t6042*var2[5] + t6042*var2[6] + (t1190*t1259*t5892 + t4371*t4372*t5892)*var2[7] + (-1.*t4371*t6079 + t6090)*var2[8] + (t6090 + t4371*t6105)*var2[9];
  p_output1[3]=(t4371*t4988 + t1259*t5012)*var2[3] + (t4371*t4843 + t1259*t4868)*var2[4] + (t4371*t4490 + t1259*t4538)*var2[5] + (t4371*t4709 + t1259*t4738)*var2[6] + (t1190*t4339*t4371 - 1.*t1259*t4339*t4372)*var2[7] + (t1259*t5106 + t6406)*var2[8] + (-1.*t1259*t5244 + t6406)*var2[9];
  p_output1[4]=t5274*var2[3] + (t4371*t5691 + t1259*t5716)*var2[4] + (t4371*t5469 + t1259*t5498)*var2[5] + (t4371*t5568 + t1259*t5589)*var2[6] + (t1190*t4371*t5401 - 1.*t1259*t4372*t5401)*var2[7] + (t1259*t5761 + t6515)*var2[8] + (-1.*t1259*t5823 + t6515)*var2[9];
  p_output1[5]=(t4371*t6197 + t1259*t6229)*var2[4] + t6582*var2[5] + t6582*var2[6] + (t1190*t4371*t5892 - 1.*t1259*t4372*t5892)*var2[7] + (t1259*t6079 + t6605)*var2[8] + (-1.*t1259*t6105 + t6605)*var2[9];
  p_output1[6]=(-1.*t1519*t4957 + t5399)*var2[3] + (-1.*t2257*t2314*t4315 - 1.*t1519*t4815)*var2[4] - 1.*t1519*t4451*var2[5] - 1.*t1519*t4612*var2[6] + t5081*var2[7];
  p_output1[7]=(-1.*t1519*t4047 + t2257*t4244*t4315)*var2[3] + (-1.*t2092*t2314*t4315 - 1.*t1519*t5620)*var2[4] - 1.*t1519*t5439*var2[5] - 1.*t1519*t5534*var2[6] + t5750*var2[7];
  p_output1[8]=(-1.*t4244*t4315 - 1.*t1519*t6155)*var2[4] - 1.*t1519*t5937*var2[5] - 1.*t1519*t5937*var2[6] + t6057*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void dR_LeftKneeJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
