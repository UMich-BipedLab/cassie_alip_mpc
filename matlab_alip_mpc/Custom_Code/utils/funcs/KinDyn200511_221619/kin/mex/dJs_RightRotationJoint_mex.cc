/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:10 GMT-04:00
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
  double t299;
  double t385;
  double t1404;
  double t1471;
  double t1423;
  double t1496;
  double t1572;
  double t1578;
  double t2523;
  double t2562;
  double t1796;
  double t1971;
  double t1987;
  double t1998;
  double t2704;
  double t2711;
  double t2728;
  double t3021;
  double t3039;
  double t3048;
  double t2084;
  double t2090;
  double t2102;
  double t2177;
  double t2207;
  double t2215;
  double t2216;
  double t2271;
  double t2337;
  double t2365;
  double t2373;
  double t2388;
  double t2408;
  double t2460;
  double t2485;
  double t3879;
  double t3520;
  double t3569;
  double t3589;
  double t3913;
  double t3894;
  double t3921;
  double t3932;
  double t4073;
  double t4077;
  double t3270;
  double t3273;
  double t3362;
  double t4167;
  double t4171;
  double t4182;
  double t4258;
  double t4262;
  double t4265;
  double t2869;
  double t2904;
  double t2932;
  double t4405;
  double t4410;
  double t4412;
  double t4359;
  double t4368;
  double t4383;
  double t4401;
  double t3979;
  double t3981;
  double t3987;
  double t4524;
  double t4532;
  double t4544;
  double t4545;
  double t4564;
  double t2746;
  double t2777;
  double t2814;
  double t4483;
  double t4436;
  double t4619;
  double t4621;
  double t4628;
  double t4639;
  double t4640;
  double t4667;
  double t4671;
  double t4714;
  double t4722;
  double t4739;
  double t5335;
  double t5339;
  double t5358;
  double t5799;
  double t5800;
  double t5801;
  double t5968;
  double t5970;
  double t5998;
  double t6032;
  double t6455;
  double t6583;
  double t5211;
  double t5224;
  double t5300;
  double t4239;
  double t4293;
  double t5802;
  double t5820;
  double t5867;
  double t7371;
  double t4846;
  double t6479;
  double t6505;
  double t7507;
  double t7518;
  double t7553;
  double t7639;
  double t7774;
  double t4493;
  double t4509;
  double t6737;
  double t6738;
  double t6288;
  double t6300;
  double t6343;
  t299 = Cos(var1[3]);
  t385 = Sin(var1[3]);
  t1404 = Cos(var1[4]);
  t1471 = Sin(var1[4]);
  t1423 = -1.*var2[2]*t1404*t385;
  t1496 = -1.*var2[1]*t1471;
  t1572 = -1.*var1[1]*t1404;
  t1578 = var1[2]*t385*t1471;
  t2523 = Cos(var1[5]);
  t2562 = Sin(var1[5]);
  t1796 = var2[2]*t299*t1404;
  t1971 = var2[0]*t1471;
  t1987 = var1[0]*t1404;
  t1998 = -1.*var1[2]*t299*t1471;
  t2704 = t299*t2523*t1471;
  t2711 = t385*t2562;
  t2728 = t2704 + t2711;
  t3021 = -1.*t299*t2523;
  t3039 = -1.*t385*t1471*t2562;
  t3048 = t3021 + t3039;
  t2084 = -1.*var2[1]*t299*t1404;
  t2090 = var2[0]*t1404*t385;
  t2102 = var1[0]*t299*t1404;
  t2177 = var1[1]*t1404*t385;
  t2207 = t2102 + t2177;
  t2215 = var2[3]*t2207;
  t2216 = var1[1]*t299*t1471;
  t2271 = -1.*var1[0]*t385*t1471;
  t2337 = -1.*var2[3]*t1404*t385;
  t2365 = -1.*var2[4]*t299*t1471;
  t2373 = t2337 + t2365;
  t2388 = var2[3]*t299*t1404;
  t2408 = -1.*var2[4]*t385*t1471;
  t2460 = t2388 + t2408;
  t2485 = -1.*var2[4]*t1404;
  t3879 = Cos(var1[13]);
  t3520 = t2523*t385*t1471;
  t3569 = -1.*t299*t2562;
  t3589 = t3520 + t3569;
  t3913 = Sin(var1[13]);
  t3894 = t3879*t1404*t2523;
  t3921 = -1.*t1404*t3913*t2562;
  t3932 = t3894 + t3921;
  t4073 = -1.*t3879;
  t4077 = 1. + t4073;
  t3270 = -1.*t2523*t385;
  t3273 = t299*t1471*t2562;
  t3362 = t3270 + t3273;
  t4167 = 0.07996*t4077;
  t4171 = 0.135*t3913;
  t4182 = 0. + t4167 + t4171;
  t4258 = -0.135*t4077;
  t4262 = 0.07996*t3913;
  t4265 = 0. + t4258 + t4262;
  t2869 = -1.*t2523*t385*t1471;
  t2904 = t299*t2562;
  t2932 = t2869 + t2904;
  t4405 = t3879*t2728;
  t4410 = -1.*t3913*t3362;
  t4412 = t4405 + t4410;
  t4359 = -1.*var1[2];
  t4368 = -1.*t1404*t2523*t4182;
  t4383 = -1.*t1404*t4265*t2562;
  t4401 = 0. + t4359 + t4368 + t4383;
  t3979 = t299*t2523;
  t3981 = t385*t1471*t2562;
  t3987 = t3979 + t3981;
  t4524 = 0.135*t3879;
  t4532 = t4524 + t4262;
  t4544 = 0.07996*t3879;
  t4545 = -0.135*t3913;
  t4564 = t4544 + t4545;
  t2746 = t2523*t385;
  t2777 = -1.*t299*t1471*t2562;
  t2814 = t2746 + t2777;
  t4483 = -1.*t3913*t3589;
  t4436 = t3879*t3048;
  t4619 = -1.*t1404*t2523*t3913;
  t4621 = -1.*t3879*t1404*t2562;
  t4628 = t4619 + t4621;
  t4639 = t4182*t3589;
  t4640 = t4265*t3987;
  t4667 = 0. + var1[1] + t4639 + t4640;
  t4671 = t4628*t4667;
  t4714 = t3879*t3589;
  t4722 = -1.*t3913*t3987;
  t4739 = t4714 + t4722;
  t5335 = -1.*t3879*t2523*t1471;
  t5339 = t3913*t1471*t2562;
  t5358 = t5335 + t5339;
  t5799 = t1404*t2523*t4182;
  t5800 = t1404*t4265*t2562;
  t5801 = 0. + var1[2] + t5799 + t5800;
  t5968 = -1.*var1[0];
  t5970 = -1.*t4182*t2728;
  t5998 = -1.*t4265*t3362;
  t6032 = 0. + t5968 + t5970 + t5998;
  t6455 = -1.*t3913*t2728;
  t6583 = t4628*t6032;
  t5211 = t3879*t1404*t2523*t385;
  t5224 = -1.*t1404*t3913*t385*t2562;
  t5300 = t5211 + t5224;
  t4239 = t4182*t2728;
  t4293 = t4265*t3362;
  t5802 = t3879*t299*t1404*t2523;
  t5820 = -1.*t299*t1404*t3913*t2562;
  t5867 = t5802 + t5820;
  t7371 = 0. + var1[0] + t4239 + t4293;
  t4846 = t4483 + t4436;
  t6479 = t3879*t2814;
  t6505 = t6455 + t6479;
  t7507 = -1.*var1[1];
  t7518 = -1.*t4182*t3589;
  t7553 = -1.*t4265*t3987;
  t7639 = 0. + t7507 + t7518 + t7553;
  t7774 = 0.08055*t3932;
  t4493 = -1.*t3879*t3987;
  t4509 = t4483 + t4493;
  t6737 = -1.*t3879*t3362;
  t6738 = t6455 + t6737;
  t6288 = t3879*t2932;
  t6300 = -1.*t3913*t3048;
  t6343 = t6288 + t6300;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t299*var2[2] + t385*var1[2]*var2[3];
  p_output1[25]=-1.*t385*var2[2] - 1.*t299*var1[2]*var2[3];
  p_output1[26]=t299*var2[0] + t385*var2[1] + (-1.*t385*var1[0] + t299*var1[1])*var2[3];
  p_output1[27]=-1.*t299*var2[3];
  p_output1[28]=-1.*t385*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1423 + t1496 - 1.*t1404*t299*var1[2]*var2[3] + (t1572 + t1578)*var2[4];
  p_output1[31]=t1796 + t1971 - 1.*t1404*t385*var1[2]*var2[3] + (t1987 + t1998)*var2[4];
  p_output1[32]=t2084 + t2090 + t2215 + (t2216 + t2271)*var2[4];
  p_output1[33]=t2373;
  p_output1[34]=t2460;
  p_output1[35]=t2485;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=t1423 + t1496 + (0.135*t2932 + 0.07996*t3048 - 1.*t1404*t299*var1[2])*var2[3] + (t1572 + t1578 + 0.135*t1404*t2523*t299 + 0.07996*t1404*t2562*t299)*var2[4] + (0.07996*t2728 + 0.135*t2814)*var2[5];
  p_output1[79]=t1796 + t1971 + (0.135*t2728 + 0.07996*t3362 - 1.*t1404*t385*var1[2])*var2[3] + (t1987 + t1998 + 0.135*t1404*t2523*t385 + 0.07996*t1404*t2562*t385)*var2[4] + (0.135*t3048 + 0.07996*t3589)*var2[5];
  p_output1[80]=t2084 + t2090 + t2215 + (t2216 + t2271 - 0.135*t1471*t2523 - 0.07996*t1471*t2562)*var2[4] + (0.07996*t1404*t2523 - 0.135*t1404*t2562)*var2[5];
  p_output1[81]=t2373;
  p_output1[82]=t2460;
  p_output1[83]=t2485;
  p_output1[84]=t3932*var2[1] + (-1.*t3589*t3879 + t3913*t3987)*var2[2] + (0.135*t1404*t385 + t3932*(t4239 + t4293) + t4401*t4412 + 0.08055*(t2932*t3913 + t4436))*var2[3] + (0.135*t1471*t299 + 0.08055*(t1404*t2562*t299*t3879 + t1404*t2523*t299*t3913) + t3932*(t1404*t2523*t385*t4182 + t1404*t2562*t385*t4265) + (t1471*t2523*t4182 + t1471*t2562*t4265)*t4739 + t4401*t5300 + t4667*t5358)*var2[4] + (t3932*(t3048*t4182 + t3589*t4265) + 0.08055*(t2814*t3913 + t4405) + t4671 + (t1404*t2562*t4182 - 1.*t1404*t2523*t4265)*t4739 + t4401*t4846)*var2[5] + (0.08055*t4412 + t4401*t4509 + t3932*(t3589*t4532 + t3987*t4564) + t4671 + (-1.*t1404*t2523*t4532 - 1.*t1404*t2562*t4564)*t4739)*var2[13];
  p_output1[85]=(-1.*t1404*t2523*t3879 + t1404*t2562*t3913)*var2[0] + t4412*var2[2] + (-0.135*t1404*t299 + 0.08055*(t3362*t3879 + t2728*t3913) + t3932*(-1.*t2932*t4182 - 1.*t3048*t4265) + t5801*t6343)*var2[3] + (0.135*t1471*t385 + 0.08055*(t1404*t2562*t385*t3879 + t1404*t2523*t385*t3913) + t3932*(-1.*t1404*t2523*t299*t4182 - 1.*t1404*t2562*t299*t4265) + (-1.*t1471*t2523*t4182 - 1.*t1471*t2562*t4265)*t4412 + t5801*t5867 + t5358*t6032)*var2[4] + (t3932*(-1.*t2814*t4182 - 1.*t2728*t4265) + (-1.*t1404*t2562*t4182 + t1404*t2523*t4265)*t4412 + 0.08055*(t3048*t3913 + t4714) + t5801*t6505 + t6583)*var2[5] + (t4412*(t1404*t2523*t4532 + t1404*t2562*t4564) + t3932*(-1.*t2728*t4532 - 1.*t3362*t4564) + 0.08055*t4739 + t6583 + t5801*t6738)*var2[13];
  p_output1[86]=t4739*var2[0] + (-1.*t2728*t3879 + t3362*t3913)*var2[1] + ((t2932*t4182 + t3048*t4265)*t4739 + t4412*(t5970 + t5998) + t4412*t7371 + t6343*t7639)*var2[3] + (0.135*t1404 + 0.08055*(-1.*t1471*t2562*t3879 - 1.*t1471*t2523*t3913) + (-1.*t1404*t2523*t385*t4182 - 1.*t1404*t2562*t385*t4265)*t4412 + (t1404*t2523*t299*t4182 + t1404*t2562*t299*t4265)*t4739 + t5300*t7371 + t5867*t7639)*var2[4] + ((-1.*t3048*t4182 - 1.*t3589*t4265)*t4412 + (t2814*t4182 + t2728*t4265)*t4739 + t4846*t7371 + t6505*t7639 + t7774)*var2[5] + (t4412*(-1.*t3589*t4532 - 1.*t3987*t4564) + (t2728*t4532 + t3362*t4564)*t4739 + t4509*t7371 + t6738*t7639 + t7774)*var2[13];
  p_output1[87]=t6343*var2[3] + t5867*var2[4] + t6505*var2[5] + t6738*var2[13];
  p_output1[88]=t4412*var2[3] + t5300*var2[4] + t4846*var2[5] + t4509*var2[13];
  p_output1[89]=t5358*var2[4] + t4628*var2[5] + t4628*var2[13];
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJs_RightRotationJoint_mex.hh"

namespace SymExpression
{

void dJs_RightRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
