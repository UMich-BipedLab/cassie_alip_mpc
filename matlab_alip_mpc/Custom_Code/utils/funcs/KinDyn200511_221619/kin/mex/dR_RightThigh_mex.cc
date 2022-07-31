/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:35 GMT-04:00
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
  double t3440;
  double t3817;
  double t3820;
  double t4228;
  double t1971;
  double t4295;
  double t1608;
  double t4774;
  double t4984;
  double t4878;
  double t4676;
  double t4977;
  double t4997;
  double t5006;
  double t5023;
  double t5026;
  double t5033;
  double t4697;
  double t5015;
  double t5103;
  double t5106;
  double t5110;
  double t5062;
  double t5155;
  double t5180;
  double t5101;
  double t5111;
  double t5119;
  double t5352;
  double t5354;
  double t5370;
  double t5384;
  double t5414;
  double t5419;
  double t5479;
  double t5602;
  double t5608;
  double t5613;
  double t5615;
  double t5715;
  double t5729;
  double t5733;
  double t5639;
  double t5225;
  double t5245;
  double t5262;
  double t5795;
  double t5799;
  double t5711;
  double t5737;
  double t5743;
  double t5966;
  double t5969;
  double t5976;
  double t5980;
  double t5992;
  double t5996;
  double t6002;
  double t6003;
  double t6005;
  double t5941;
  double t5942;
  double t5947;
  double t4215;
  double t4430;
  double t4433;
  double t4874;
  double t4883;
  double t4908;
  double t4922;
  double t4924;
  double t4928;
  double t5048;
  double t5055;
  double t5069;
  double t5078;
  double t5096;
  double t5121;
  double t5122;
  double t5128;
  double t5131;
  double t5371;
  double t5434;
  double t5448;
  double t5464;
  double t5472;
  double t5489;
  double t5500;
  double t5502;
  double t5518;
  double t5520;
  double t5523;
  double t5545;
  double t5560;
  double t5580;
  double t5584;
  double t5586;
  double t5589;
  double t5623;
  double t5657;
  double t5658;
  double t5703;
  double t5751;
  double t5755;
  double t5777;
  double t5785;
  double t5220;
  double t5298;
  double t5318;
  double t5891;
  double t5893;
  double t5902;
  double t5937;
  double t5950;
  double t5956;
  double t6375;
  double t6377;
  double t6378;
  double t6011;
  double t6021;
  double t6025;
  double t6045;
  double t6046;
  double t6050;
  double t6056;
  double t6059;
  double t6060;
  double t6064;
  double t6066;
  double t6067;
  t3440 = Cos(var1[3]);
  t3817 = Cos(var1[4]);
  t3820 = Cos(var1[5]);
  t4228 = Sin(var1[13]);
  t1971 = Cos(var1[13]);
  t4295 = Sin(var1[5]);
  t1608 = Cos(var1[15]);
  t4774 = Sin(var1[4]);
  t4984 = Sin(var1[3]);
  t4878 = Sin(var1[14]);
  t4676 = Sin(var1[15]);
  t4977 = t3440*t3820*t4774;
  t4997 = t4984*t4295;
  t5006 = t4977 + t4997;
  t5023 = t3820*t4984;
  t5026 = -1.*t3440*t4774*t4295;
  t5033 = t5023 + t5026;
  t4697 = Cos(var1[14]);
  t5015 = -1.*t4228*t5006;
  t5103 = -1.*t3820*t4984;
  t5106 = t3440*t4774*t4295;
  t5110 = t5103 + t5106;
  t5062 = t1971*t5006;
  t5155 = -1.*t4228*t5110;
  t5180 = t5062 + t5155;
  t5101 = t4228*t5006;
  t5111 = t1971*t5110;
  t5119 = t5101 + t5111;
  t5352 = -1.*t3820*t4984*t4774;
  t5354 = t3440*t4295;
  t5370 = t5352 + t5354;
  t5384 = -1.*t3440*t3820;
  t5414 = -1.*t4984*t4774*t4295;
  t5419 = t5384 + t5414;
  t5479 = t1971*t5419;
  t5602 = t3820*t4984*t4774;
  t5608 = -1.*t3440*t4295;
  t5613 = t5602 + t5608;
  t5615 = -1.*t4228*t5613;
  t5715 = t3440*t3820;
  t5729 = t4984*t4774*t4295;
  t5733 = t5715 + t5729;
  t5639 = t1971*t5613;
  t5225 = t4697*t3440*t3817;
  t5245 = t4878*t5119;
  t5262 = t5225 + t5245;
  t5795 = -1.*t4228*t5733;
  t5799 = t5639 + t5795;
  t5711 = t4228*t5613;
  t5737 = t1971*t5733;
  t5743 = t5711 + t5737;
  t5966 = -1.*t3817*t3820*t4228;
  t5969 = -1.*t1971*t3817*t4295;
  t5976 = t5966 + t5969;
  t5980 = -1.*t1608*t5976;
  t5992 = t1971*t3817*t3820;
  t5996 = -1.*t3817*t4228*t4295;
  t6002 = t5992 + t5996;
  t6003 = t4878*t4676*t6002;
  t6005 = t5980 + t6003;
  t5941 = t3817*t3820*t4228;
  t5942 = t1971*t3817*t4295;
  t5947 = t5941 + t5942;
  t4215 = t1971*t3440*t3817*t3820;
  t4430 = -1.*t3440*t3817*t4228*t4295;
  t4433 = t4215 + t4430;
  t4874 = -1.*t4697*t3440*t4774;
  t4883 = t3440*t3817*t3820*t4228;
  t4908 = t1971*t3440*t3817*t4295;
  t4922 = t4883 + t4908;
  t4924 = t4878*t4922;
  t4928 = t4874 + t4924;
  t5048 = t1971*t5033;
  t5055 = t5015 + t5048;
  t5069 = t4228*t5033;
  t5078 = t5062 + t5069;
  t5096 = -1.*t3440*t3817*t4878;
  t5121 = t4697*t5119;
  t5122 = t5096 + t5121;
  t5128 = -1.*t1971*t5110;
  t5131 = t5015 + t5128;
  t5371 = t1971*t5370;
  t5434 = -1.*t4228*t5419;
  t5448 = t5371 + t5434;
  t5464 = -1.*t4697*t3817*t4984;
  t5472 = t4228*t5370;
  t5489 = t5472 + t5479;
  t5500 = t4878*t5489;
  t5502 = t5464 + t5500;
  t5518 = t1971*t3817*t3820*t4984;
  t5520 = -1.*t3817*t4228*t4984*t4295;
  t5523 = t5518 + t5520;
  t5545 = -1.*t4697*t4984*t4774;
  t5560 = t3817*t3820*t4228*t4984;
  t5580 = t1971*t3817*t4984*t4295;
  t5584 = t5560 + t5580;
  t5586 = t4878*t5584;
  t5589 = t5545 + t5586;
  t5623 = t5615 + t5479;
  t5657 = t4228*t5419;
  t5658 = t5639 + t5657;
  t5703 = -1.*t3817*t4878*t4984;
  t5751 = t4697*t5743;
  t5755 = t5703 + t5751;
  t5777 = -1.*t1971*t5733;
  t5785 = t5615 + t5777;
  t5220 = t4676*t5180;
  t5298 = t1608*t5262;
  t5318 = t5220 + t5298;
  t5891 = t4697*t3817*t4984;
  t5893 = t4878*t5743;
  t5902 = t5891 + t5893;
  t5937 = t4878*t4774;
  t5950 = t4697*t5947;
  t5956 = t5937 + t5950;
  t6375 = t4676*t5976;
  t6377 = t1608*t4878*t6002;
  t6378 = t6375 + t6377;
  t6011 = -1.*t4697*t4774;
  t6021 = t4878*t5947;
  t6025 = t6011 + t6021;
  t6045 = -1.*t1971*t3820*t4774;
  t6046 = t4228*t4774*t4295;
  t6050 = t6045 + t6046;
  t6056 = -1.*t4697*t3817;
  t6059 = -1.*t3820*t4228*t4774;
  t6060 = -1.*t1971*t4774*t4295;
  t6064 = t6059 + t6060;
  t6066 = t4878*t6064;
  t6067 = t6056 + t6066;
  p_output1[0]=(-1.*t1608*t5448 + t4676*t5502)*var2[3] + (-1.*t1608*t4433 + t4676*t4928)*var2[4] + (-1.*t1608*t5055 + t4676*t4878*t5078)*var2[5] + (-1.*t1608*t5131 + t4676*t4878*t5180)*var2[13] + t4676*t5122*var2[14] + t5318*var2[15];
  p_output1[1]=(-1.*t1608*t5180 + t4676*t5262)*var2[3] + (-1.*t1608*t5523 + t4676*t5589)*var2[4] + (-1.*t1608*t5623 + t4676*t4878*t5658)*var2[5] + (-1.*t1608*t5785 + t4676*t4878*t5799)*var2[13] + t4676*t5755*var2[14] + (t4676*t5799 + t1608*t5902)*var2[15];
  p_output1[2]=(-1.*t1608*t6050 + t4676*t6067)*var2[4] + t6005*var2[5] + t6005*var2[13] + t4676*t5956*var2[14] + (t4676*t6002 + t1608*t6025)*var2[15];
  p_output1[3]=(t4676*t5448 + t1608*t5502)*var2[3] + (t4433*t4676 + t1608*t4928)*var2[4] + (t4676*t5055 + t1608*t4878*t5078)*var2[5] + (t4676*t5131 + t1608*t4878*t5180)*var2[13] + t1608*t5122*var2[14] + (t1608*t5180 - 1.*t4676*t5262)*var2[15];
  p_output1[4]=t5318*var2[3] + (t4676*t5523 + t1608*t5589)*var2[4] + (t4676*t5623 + t1608*t4878*t5658)*var2[5] + (t4676*t5785 + t1608*t4878*t5799)*var2[13] + t1608*t5755*var2[14] + (t1608*t5799 - 1.*t4676*t5902)*var2[15];
  p_output1[5]=(t4676*t6050 + t1608*t6067)*var2[4] + t6378*var2[5] + t6378*var2[13] + t1608*t5956*var2[14] + (t1608*t6002 - 1.*t4676*t6025)*var2[15];
  p_output1[6]=(-1.*t4697*t5489 + t5703)*var2[3] + (-1.*t3440*t4774*t4878 - 1.*t4697*t4922)*var2[4] - 1.*t4697*t5078*var2[5] - 1.*t4697*t5180*var2[13] + t5262*var2[14];
  p_output1[7]=(t3440*t3817*t4878 - 1.*t4697*t5119)*var2[3] + (-1.*t4774*t4878*t4984 - 1.*t4697*t5584)*var2[4] - 1.*t4697*t5658*var2[5] - 1.*t4697*t5799*var2[13] + t5902*var2[14];
  p_output1[8]=(-1.*t3817*t4878 - 1.*t4697*t6064)*var2[4] - 1.*t4697*t6002*var2[5] - 1.*t4697*t6002*var2[13] + t6025*var2[14];
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

#include "dR_RightThigh_mex.hh"

namespace SymExpression
{

void dR_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
