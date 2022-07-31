/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:52 GMT-04:00
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
  double t513;
  double t1383;
  double t1460;
  double t3042;
  double t472;
  double t3517;
  double t3785;
  double t2087;
  double t3573;
  double t3575;
  double t284;
  double t3833;
  double t3838;
  double t4024;
  double t4027;
  double t4052;
  double t4153;
  double t4164;
  double t4181;
  double t4185;
  double t78;
  double t4257;
  double t4251;
  double t4269;
  double t4285;
  double t4288;
  double t4290;
  double t4294;
  double t4198;
  double t4287;
  double t4296;
  double t4304;
  double t4321;
  double t4328;
  double t4333;
  double t4435;
  double t4471;
  double t4472;
  double t4473;
  double t4479;
  double t4485;
  double t4490;
  double t4499;
  double t4513;
  double t4562;
  double t4570;
  double t4586;
  double t4590;
  double t4655;
  double t4657;
  double t4661;
  double t4671;
  double t4678;
  double t4684;
  double t4686;
  double t4719;
  double t4731;
  double t4734;
  double t4741;
  double t4742;
  double t4755;
  double t4738;
  double t4757;
  double t4758;
  double t4763;
  double t4774;
  double t4776;
  double t4778;
  double t4788;
  double t4790;
  double t4827;
  double t4834;
  double t4836;
  double t4843;
  double t4853;
  double t4855;
  double t4863;
  double t4871;
  double t4872;
  double t4912;
  double t4920;
  double t4929;
  double t4932;
  double t4936;
  double t4941;
  double t4955;
  double t4956;
  double t5016;
  double t5018;
  double t5023;
  double t5025;
  double t5026;
  double t5039;
  double t5048;
  double t5049;
  double t5051;
  double t5087;
  double t5092;
  double t5095;
  double t5102;
  double t4692;
  double t4693;
  double t4699;
  double t5163;
  double t5166;
  double t5184;
  double t5201;
  double t5202;
  double t5205;
  double t5209;
  double t5248;
  double t5249;
  double t5251;
  double t5259;
  double t5269;
  double t5270;
  double t5281;
  double t5290;
  double t5296;
  double t5300;
  double t5301;
  double t5302;
  double t5299;
  double t5310;
  double t5311;
  double t5313;
  double t5314;
  double t5315;
  double t5319;
  double t5322;
  double t5323;
  double t5335;
  double t5346;
  double t5352;
  double t5367;
  double t5371;
  double t5375;
  double t5377;
  double t5402;
  double t5406;
  double t5407;
  double t5414;
  double t5415;
  double t5418;
  double t5420;
  double t5422;
  double t5425;
  double t3779;
  double t4188;
  double t4193;
  double t4208;
  double t4224;
  double t4225;
  double t4318;
  double t4357;
  double t4365;
  double t4382;
  double t4383;
  double t4399;
  double t4584;
  double t4599;
  double t4601;
  double t4616;
  double t4629;
  double t4634;
  double t4645;
  double t4662;
  double t4665;
  double t5529;
  double t4759;
  double t4791;
  double t4794;
  double t4797;
  double t4798;
  double t4808;
  double t4840;
  double t4874;
  double t4881;
  double t4896;
  double t4898;
  double t4901;
  double t4938;
  double t4961;
  double t4968;
  double t4974;
  double t4976;
  double t4988;
  double t5094;
  double t5103;
  double t5106;
  double t5108;
  double t5110;
  double t5123;
  double t4703;
  double t4710;
  double t5160;
  double t5190;
  double t5191;
  double t5215;
  double t5223;
  double t5225;
  double t5738;
  double t5773;
  double t5778;
  double t5779;
  double t5330;
  double t5353;
  double t5359;
  double t5390;
  double t5391;
  double t5395;
  double t5820;
  double t5413;
  double t5427;
  double t5429;
  double t5439;
  double t5440;
  double t5444;
  t513 = Cos(var1[3]);
  t1383 = Cos(var1[4]);
  t1460 = Cos(var1[5]);
  t3042 = Sin(var1[13]);
  t472 = Cos(var1[13]);
  t3517 = Sin(var1[5]);
  t3785 = Cos(var1[15]);
  t2087 = t472*t513*t1383*t1460;
  t3573 = -1.*t513*t1383*t3042*t3517;
  t3575 = t2087 + t3573;
  t284 = Sin(var1[15]);
  t3833 = Cos(var1[14]);
  t3838 = Sin(var1[4]);
  t4024 = -1.*t3833*t513*t3838;
  t4027 = Sin(var1[14]);
  t4052 = t513*t1383*t1460*t3042;
  t4153 = t472*t513*t1383*t3517;
  t4164 = t4052 + t4153;
  t4181 = t4027*t4164;
  t4185 = t4024 + t4181;
  t78 = Sin(var1[16]);
  t4257 = Sin(var1[3]);
  t4251 = t513*t1460*t3838;
  t4269 = t4257*t3517;
  t4285 = t4251 + t4269;
  t4288 = t1460*t4257;
  t4290 = -1.*t513*t3838*t3517;
  t4294 = t4288 + t4290;
  t4198 = Cos(var1[16]);
  t4287 = -1.*t3042*t4285;
  t4296 = t472*t4294;
  t4304 = t4287 + t4296;
  t4321 = t472*t4285;
  t4328 = t3042*t4294;
  t4333 = t4321 + t4328;
  t4435 = -1.*t513*t1383*t4027;
  t4471 = t3042*t4285;
  t4472 = -1.*t1460*t4257;
  t4473 = t513*t3838*t3517;
  t4479 = t4472 + t4473;
  t4485 = t472*t4479;
  t4490 = t4471 + t4485;
  t4499 = t3833*t4490;
  t4513 = t4435 + t4499;
  t4562 = -1.*t472*t4479;
  t4570 = t4287 + t4562;
  t4586 = -1.*t3042*t4479;
  t4590 = t4321 + t4586;
  t4655 = t3833*t513*t1383;
  t4657 = t4027*t4490;
  t4661 = t4655 + t4657;
  t4671 = t3785*t4590;
  t4678 = -1.*t284*t4661;
  t4684 = t4671 + t4678;
  t4686 = t78*t4684;
  t4719 = -1.*t1460*t4257*t3838;
  t4731 = t513*t3517;
  t4734 = t4719 + t4731;
  t4741 = -1.*t513*t1460;
  t4742 = -1.*t4257*t3838*t3517;
  t4755 = t4741 + t4742;
  t4738 = t472*t4734;
  t4757 = -1.*t3042*t4755;
  t4758 = t4738 + t4757;
  t4763 = -1.*t3833*t1383*t4257;
  t4774 = t3042*t4734;
  t4776 = t472*t4755;
  t4778 = t4774 + t4776;
  t4788 = t4027*t4778;
  t4790 = t4763 + t4788;
  t4827 = t472*t1383*t1460*t4257;
  t4834 = -1.*t1383*t3042*t4257*t3517;
  t4836 = t4827 + t4834;
  t4843 = -1.*t3833*t4257*t3838;
  t4853 = t1383*t1460*t3042*t4257;
  t4855 = t472*t1383*t4257*t3517;
  t4863 = t4853 + t4855;
  t4871 = t4027*t4863;
  t4872 = t4843 + t4871;
  t4912 = t1460*t4257*t3838;
  t4920 = -1.*t513*t3517;
  t4929 = t4912 + t4920;
  t4932 = -1.*t3042*t4929;
  t4936 = t4932 + t4776;
  t4941 = t472*t4929;
  t4955 = t3042*t4755;
  t4956 = t4941 + t4955;
  t5016 = -1.*t1383*t4027*t4257;
  t5018 = t3042*t4929;
  t5023 = t513*t1460;
  t5025 = t4257*t3838*t3517;
  t5026 = t5023 + t5025;
  t5039 = t472*t5026;
  t5048 = t5018 + t5039;
  t5049 = t3833*t5048;
  t5051 = t5016 + t5049;
  t5087 = -1.*t472*t5026;
  t5092 = t4932 + t5087;
  t5095 = -1.*t3042*t5026;
  t5102 = t4941 + t5095;
  t4692 = t284*t4590;
  t4693 = t3785*t4661;
  t4699 = t4692 + t4693;
  t5163 = t3833*t1383*t4257;
  t5166 = t4027*t5048;
  t5184 = t5163 + t5166;
  t5201 = t3785*t5102;
  t5202 = -1.*t284*t5184;
  t5205 = t5201 + t5202;
  t5209 = t78*t5205;
  t5248 = t4027*t3838;
  t5249 = t1383*t1460*t3042;
  t5251 = t472*t1383*t3517;
  t5259 = t5249 + t5251;
  t5269 = t3833*t5259;
  t5270 = t5248 + t5269;
  t5281 = -1.*t1383*t1460*t3042;
  t5290 = -1.*t472*t1383*t3517;
  t5296 = t5281 + t5290;
  t5300 = t472*t1383*t1460;
  t5301 = -1.*t1383*t3042*t3517;
  t5302 = t5300 + t5301;
  t5299 = t284*t5296;
  t5310 = t3785*t4027*t5302;
  t5311 = t5299 + t5310;
  t5313 = t78*t5311;
  t5314 = t3785*t5296;
  t5315 = -1.*t4027*t284*t5302;
  t5319 = t5314 + t5315;
  t5322 = -1.*t4198*t5319;
  t5323 = t5313 + t5322;
  t5335 = -1.*t3833*t3838;
  t5346 = t4027*t5259;
  t5352 = t5335 + t5346;
  t5367 = t3785*t5302;
  t5371 = -1.*t284*t5352;
  t5375 = t5367 + t5371;
  t5377 = t78*t5375;
  t5402 = -1.*t472*t1460*t3838;
  t5406 = t3042*t3838*t3517;
  t5407 = t5402 + t5406;
  t5414 = -1.*t3833*t1383;
  t5415 = -1.*t1460*t3042*t3838;
  t5418 = -1.*t472*t3838*t3517;
  t5420 = t5415 + t5418;
  t5422 = t4027*t5420;
  t5425 = t5414 + t5422;
  t3779 = t284*t3575;
  t4188 = t3785*t4185;
  t4193 = t3779 + t4188;
  t4208 = t3785*t3575;
  t4224 = -1.*t284*t4185;
  t4225 = t4208 + t4224;
  t4318 = t284*t4304;
  t4357 = t3785*t4027*t4333;
  t4365 = t4318 + t4357;
  t4382 = t3785*t4304;
  t4383 = -1.*t4027*t284*t4333;
  t4399 = t4382 + t4383;
  t4584 = t284*t4570;
  t4599 = t3785*t4027*t4590;
  t4601 = t4584 + t4599;
  t4616 = t3785*t4570;
  t4629 = -1.*t4027*t284*t4590;
  t4634 = t4616 + t4629;
  t4645 = -1.*t284*t4590;
  t4662 = -1.*t3785*t4661;
  t4665 = t4645 + t4662;
  t5529 = t4198*t4684;
  t4759 = t284*t4758;
  t4791 = t3785*t4790;
  t4794 = t4759 + t4791;
  t4797 = t3785*t4758;
  t4798 = -1.*t284*t4790;
  t4808 = t4797 + t4798;
  t4840 = t284*t4836;
  t4874 = t3785*t4872;
  t4881 = t4840 + t4874;
  t4896 = t3785*t4836;
  t4898 = -1.*t284*t4872;
  t4901 = t4896 + t4898;
  t4938 = t284*t4936;
  t4961 = t3785*t4027*t4956;
  t4968 = t4938 + t4961;
  t4974 = t3785*t4936;
  t4976 = -1.*t4027*t284*t4956;
  t4988 = t4974 + t4976;
  t5094 = t284*t5092;
  t5103 = t3785*t4027*t5102;
  t5106 = t5094 + t5103;
  t5108 = t3785*t5092;
  t5110 = -1.*t4027*t284*t5102;
  t5123 = t5108 + t5110;
  t4703 = t4198*t4699;
  t4710 = t4703 + t4686;
  t5160 = -1.*t284*t5102;
  t5190 = -1.*t3785*t5184;
  t5191 = t5160 + t5190;
  t5215 = t284*t5102;
  t5223 = t3785*t5184;
  t5225 = t5215 + t5223;
  t5738 = t4198*t5205;
  t5773 = t4198*t5311;
  t5778 = t78*t5319;
  t5779 = t5773 + t5778;
  t5330 = -1.*t284*t5302;
  t5353 = -1.*t3785*t5352;
  t5359 = t5330 + t5353;
  t5390 = t284*t5302;
  t5391 = t3785*t5352;
  t5395 = t5390 + t5391;
  t5820 = t4198*t5375;
  t5413 = t284*t5407;
  t5427 = t3785*t5425;
  t5429 = t5413 + t5427;
  t5439 = t3785*t5407;
  t5440 = -1.*t284*t5425;
  t5444 = t5439 + t5440;
  p_output1[0]=(-1.*t4198*t4808 + t4794*t78)*var2[3] + (-1.*t4198*t4225 + t4193*t78)*var2[4] + (-1.*t4198*t4399 + t4365*t78)*var2[5] + (-1.*t4198*t4634 + t4601*t78)*var2[13] + (t284*t4198*t4513 + t3785*t4513*t78)*var2[14] + (-1.*t4198*t4665 + t4686)*var2[15] + t4710*var2[16];
  p_output1[1]=(-1.*t4198*t4684 + t4699*t78)*var2[3] + (-1.*t4198*t4901 + t4881*t78)*var2[4] + (-1.*t4198*t4988 + t4968*t78)*var2[5] + (-1.*t4198*t5123 + t5106*t78)*var2[13] + (t284*t4198*t5051 + t3785*t5051*t78)*var2[14] + (-1.*t4198*t5191 + t5209)*var2[15] + (t5209 + t4198*t5225)*var2[16];
  p_output1[2]=(-1.*t4198*t5444 + t5429*t78)*var2[4] + t5323*var2[5] + t5323*var2[13] + (t284*t4198*t5270 + t3785*t5270*t78)*var2[14] + (-1.*t4198*t5359 + t5377)*var2[15] + (t5377 + t4198*t5395)*var2[16];
  p_output1[3]=(t4198*t4794 + t4808*t78)*var2[3] + (t4193*t4198 + t4225*t78)*var2[4] + (t4198*t4365 + t4399*t78)*var2[5] + (t4198*t4601 + t4634*t78)*var2[13] + (t3785*t4198*t4513 - 1.*t284*t4513*t78)*var2[14] + (t5529 + t4665*t78)*var2[15] + (t5529 - 1.*t4699*t78)*var2[16];
  p_output1[4]=t4710*var2[3] + (t4198*t4881 + t4901*t78)*var2[4] + (t4198*t4968 + t4988*t78)*var2[5] + (t4198*t5106 + t5123*t78)*var2[13] + (t3785*t4198*t5051 - 1.*t284*t5051*t78)*var2[14] + (t5738 + t5191*t78)*var2[15] + (t5738 - 1.*t5225*t78)*var2[16];
  p_output1[5]=(t4198*t5429 + t5444*t78)*var2[4] + t5779*var2[5] + t5779*var2[13] + (t3785*t4198*t5270 - 1.*t284*t5270*t78)*var2[14] + (t5820 + t5359*t78)*var2[15] + (t5820 - 1.*t5395*t78)*var2[16];
  p_output1[6]=(-1.*t3833*t4778 + t5016)*var2[3] + (-1.*t3833*t4164 - 1.*t3838*t4027*t513)*var2[4] - 1.*t3833*t4333*var2[5] - 1.*t3833*t4590*var2[13] + t4661*var2[14];
  p_output1[7]=(-1.*t3833*t4490 + t1383*t4027*t513)*var2[3] + (-1.*t3838*t4027*t4257 - 1.*t3833*t4863)*var2[4] - 1.*t3833*t4956*var2[5] - 1.*t3833*t5102*var2[13] + t5184*var2[14];
  p_output1[8]=(-1.*t1383*t4027 - 1.*t3833*t5420)*var2[4] - 1.*t3833*t5302*var2[5] - 1.*t3833*t5302*var2[13] + t5352*var2[14];
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

#include "dR_RightKneeJoint_mex.hh"

namespace SymExpression
{

void dR_RightKneeJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
