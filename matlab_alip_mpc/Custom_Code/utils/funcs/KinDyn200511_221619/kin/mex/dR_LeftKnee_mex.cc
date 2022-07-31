/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:17 GMT-04:00
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
  double t3231;
  double t2045;
  double t3742;
  double t2092;
  double t3807;
  double t1418;
  double t1819;
  double t2399;
  double t4054;
  double t4094;
  double t4158;
  double t4159;
  double t4186;
  double t4187;
  double t4327;
  double t4336;
  double t4448;
  double t4472;
  double t4482;
  double t4738;
  double t4800;
  double t4830;
  double t969;
  double t690;
  double t4900;
  double t4905;
  double t4909;
  double t4865;
  double t4864;
  double t4950;
  double t4951;
  double t4957;
  double t4891;
  double t4930;
  double t4931;
  double t5088;
  double t5092;
  double t5068;
  double t5075;
  double t5325;
  double t5328;
  double t5340;
  double t5248;
  double t5264;
  double t5285;
  double t5289;
  double t5308;
  double t5309;
  double t5455;
  double t5458;
  double t5462;
  double t5430;
  double t5432;
  double t5437;
  double t5504;
  double t5520;
  double t5521;
  double t5425;
  double t5450;
  double t5467;
  double t5473;
  double t5483;
  double t5489;
  double t5607;
  double t5613;
  double t5616;
  double t5647;
  double t5648;
  double t5657;
  double t5669;
  double t5715;
  double t5719;
  double t5729;
  double t5732;
  double t5754;
  double t5755;
  double t5783;
  double t5791;
  double t5792;
  double t5801;
  double t5806;
  double t5814;
  double t5890;
  double t5891;
  double t5865;
  double t5869;
  double t5877;
  double t5969;
  double t5971;
  double t5960;
  double t5964;
  double t6046;
  double t6048;
  double t6053;
  double t6030;
  double t6035;
  double t6038;
  double t6040;
  double t6041;
  double t6043;
  double t6104;
  double t6107;
  double t6121;
  double t6151;
  double t6154;
  double t6161;
  double t6171;
  double t5678;
  double t5681;
  double t5689;
  double t6225;
  double t6230;
  double t6231;
  double t6249;
  double t6255;
  double t6260;
  double t6290;
  double t6292;
  double t6293;
  double t6280;
  double t6282;
  double t6284;
  double t6285;
  double t6307;
  double t6323;
  double t6328;
  double t6350;
  double t6352;
  double t6353;
  double t6358;
  double t6385;
  double t6397;
  double t6408;
  double t6421;
  double t6444;
  double t6449;
  double t6458;
  double t6464;
  double t6576;
  double t6585;
  double t6590;
  double t6527;
  double t6531;
  double t6532;
  double t6538;
  double t6541;
  double t6569;
  double t4937;
  double t4965;
  double t4969;
  double t5002;
  double t5003;
  double t5011;
  double t5087;
  double t5110;
  double t5126;
  double t5135;
  double t5164;
  double t5177;
  double t5313;
  double t5361;
  double t5377;
  double t5383;
  double t5386;
  double t5396;
  double t5496;
  double t5522;
  double t5524;
  double t5545;
  double t5553;
  double t5570;
  double t5617;
  double t5638;
  double t5642;
  double t6760;
  double t5881;
  double t5899;
  double t5903;
  double t5933;
  double t5939;
  double t5940;
  double t5967;
  double t5972;
  double t5978;
  double t5987;
  double t5988;
  double t5990;
  double t6044;
  double t6065;
  double t6066;
  double t6082;
  double t6091;
  double t6097;
  double t6124;
  double t6134;
  double t6137;
  double t6179;
  double t6182;
  double t6183;
  double t6828;
  double t5690;
  double t5693;
  double t6883;
  double t6885;
  double t6887;
  double t6430;
  double t6435;
  double t6439;
  double t6485;
  double t6499;
  double t6507;
  double t6899;
  double t6571;
  double t6591;
  double t6593;
  double t6613;
  double t6625;
  double t6626;
  t3231 = Cos(var1[3]);
  t2045 = Cos(var1[5]);
  t3742 = Sin(var1[4]);
  t2092 = Sin(var1[3]);
  t3807 = Sin(var1[5]);
  t1418 = Cos(var1[7]);
  t1819 = Cos(var1[6]);
  t2399 = -1.*t2045*t2092;
  t4054 = t3231*t3742*t3807;
  t4094 = t2399 + t4054;
  t4158 = t1819*t4094;
  t4159 = t3231*t2045*t3742;
  t4186 = t2092*t3807;
  t4187 = t4159 + t4186;
  t4327 = Sin(var1[6]);
  t4336 = t4187*t4327;
  t4448 = t4158 + t4336;
  t4472 = t1418*t4448;
  t4482 = Cos(var1[4]);
  t4738 = Sin(var1[7]);
  t4800 = -1.*t3231*t4482*t4738;
  t4830 = t4472 + t4800;
  t969 = Sin(var1[9]);
  t690 = Cos(var1[8]);
  t4900 = t2045*t2092;
  t4905 = -1.*t3231*t3742*t3807;
  t4909 = t4900 + t4905;
  t4865 = Sin(var1[8]);
  t4864 = Cos(var1[9]);
  t4950 = t1819*t4909;
  t4951 = -1.*t4187*t4327;
  t4957 = t4950 + t4951;
  t4891 = t1819*t4187;
  t4930 = t4909*t4327;
  t4931 = t4891 + t4930;
  t5088 = -1.*t1819*t4094;
  t5092 = t5088 + t4951;
  t5068 = -1.*t4094*t4327;
  t5075 = t4891 + t5068;
  t5325 = t3231*t4482*t2045*t1819;
  t5328 = -1.*t3231*t4482*t3807*t4327;
  t5340 = t5325 + t5328;
  t5248 = -1.*t3231*t1418*t3742;
  t5264 = t3231*t4482*t1819*t3807;
  t5285 = t3231*t4482*t2045*t4327;
  t5289 = t5264 + t5285;
  t5308 = t5289*t4738;
  t5309 = t5248 + t5308;
  t5455 = -1.*t2045*t2092*t3742;
  t5458 = t3231*t3807;
  t5462 = t5455 + t5458;
  t5430 = -1.*t3231*t2045;
  t5432 = -1.*t2092*t3742*t3807;
  t5437 = t5430 + t5432;
  t5504 = t1819*t5462;
  t5520 = -1.*t5437*t4327;
  t5521 = t5504 + t5520;
  t5425 = -1.*t4482*t1418*t2092;
  t5450 = t1819*t5437;
  t5467 = t5462*t4327;
  t5473 = t5450 + t5467;
  t5483 = t5473*t4738;
  t5489 = t5425 + t5483;
  t5607 = t3231*t4482*t1418;
  t5613 = t4448*t4738;
  t5616 = t5607 + t5613;
  t5647 = t690*t5075;
  t5648 = -1.*t5616*t4865;
  t5657 = t5647 + t5648;
  t5669 = t969*t5657;
  t5715 = t3231*t2045;
  t5719 = t2092*t3742*t3807;
  t5729 = t5715 + t5719;
  t5732 = t1819*t5729;
  t5754 = t2045*t2092*t3742;
  t5755 = -1.*t3231*t3807;
  t5783 = t5754 + t5755;
  t5791 = t5783*t4327;
  t5792 = t5732 + t5791;
  t5801 = t1418*t5792;
  t5806 = -1.*t4482*t2092*t4738;
  t5814 = t5801 + t5806;
  t5890 = -1.*t5783*t4327;
  t5891 = t5450 + t5890;
  t5865 = t1819*t5783;
  t5869 = t5437*t4327;
  t5877 = t5865 + t5869;
  t5969 = -1.*t1819*t5729;
  t5971 = t5969 + t5890;
  t5960 = -1.*t5729*t4327;
  t5964 = t5865 + t5960;
  t6046 = t4482*t2045*t1819*t2092;
  t6048 = -1.*t4482*t2092*t3807*t4327;
  t6053 = t6046 + t6048;
  t6030 = -1.*t1418*t2092*t3742;
  t6035 = t4482*t1819*t2092*t3807;
  t6038 = t4482*t2045*t2092*t4327;
  t6040 = t6035 + t6038;
  t6041 = t6040*t4738;
  t6043 = t6030 + t6041;
  t6104 = t4482*t1418*t2092;
  t6107 = t5792*t4738;
  t6121 = t6104 + t6107;
  t6151 = t690*t5964;
  t6154 = -1.*t6121*t4865;
  t6161 = t6151 + t6154;
  t6171 = t969*t6161;
  t5678 = t690*t5616;
  t5681 = t5075*t4865;
  t5689 = t5678 + t5681;
  t6225 = t4482*t1819*t3807;
  t6230 = t4482*t2045*t4327;
  t6231 = t6225 + t6230;
  t6249 = t1418*t6231;
  t6255 = t3742*t4738;
  t6260 = t6249 + t6255;
  t6290 = -1.*t4482*t1819*t3807;
  t6292 = -1.*t4482*t2045*t4327;
  t6293 = t6290 + t6292;
  t6280 = t4482*t2045*t1819;
  t6282 = -1.*t4482*t3807*t4327;
  t6284 = t6280 + t6282;
  t6285 = t690*t6284*t4738;
  t6307 = t6293*t4865;
  t6323 = t6285 + t6307;
  t6328 = t969*t6323;
  t6350 = t690*t6293;
  t6352 = -1.*t6284*t4738*t4865;
  t6353 = t6350 + t6352;
  t6358 = -1.*t4864*t6353;
  t6385 = t6328 + t6358;
  t6397 = -1.*t1418*t3742;
  t6408 = t6231*t4738;
  t6421 = t6397 + t6408;
  t6444 = t690*t6284;
  t6449 = -1.*t6421*t4865;
  t6458 = t6444 + t6449;
  t6464 = t969*t6458;
  t6576 = -1.*t2045*t1819*t3742;
  t6585 = t3742*t3807*t4327;
  t6590 = t6576 + t6585;
  t6527 = -1.*t4482*t1418;
  t6531 = -1.*t1819*t3742*t3807;
  t6532 = -1.*t2045*t3742*t4327;
  t6538 = t6531 + t6532;
  t6541 = t6538*t4738;
  t6569 = t6527 + t6541;
  t4937 = t690*t4931*t4738;
  t4965 = t4957*t4865;
  t4969 = t4937 + t4965;
  t5002 = t690*t4957;
  t5003 = -1.*t4931*t4738*t4865;
  t5011 = t5002 + t5003;
  t5087 = t690*t5075*t4738;
  t5110 = t5092*t4865;
  t5126 = t5087 + t5110;
  t5135 = t690*t5092;
  t5164 = -1.*t5075*t4738*t4865;
  t5177 = t5135 + t5164;
  t5313 = t690*t5309;
  t5361 = t5340*t4865;
  t5377 = t5313 + t5361;
  t5383 = t690*t5340;
  t5386 = -1.*t5309*t4865;
  t5396 = t5383 + t5386;
  t5496 = t690*t5489;
  t5522 = t5521*t4865;
  t5524 = t5496 + t5522;
  t5545 = t690*t5521;
  t5553 = -1.*t5489*t4865;
  t5570 = t5545 + t5553;
  t5617 = -1.*t690*t5616;
  t5638 = -1.*t5075*t4865;
  t5642 = t5617 + t5638;
  t6760 = t4864*t5657;
  t5881 = t690*t5877*t4738;
  t5899 = t5891*t4865;
  t5903 = t5881 + t5899;
  t5933 = t690*t5891;
  t5939 = -1.*t5877*t4738*t4865;
  t5940 = t5933 + t5939;
  t5967 = t690*t5964*t4738;
  t5972 = t5971*t4865;
  t5978 = t5967 + t5972;
  t5987 = t690*t5971;
  t5988 = -1.*t5964*t4738*t4865;
  t5990 = t5987 + t5988;
  t6044 = t690*t6043;
  t6065 = t6053*t4865;
  t6066 = t6044 + t6065;
  t6082 = t690*t6053;
  t6091 = -1.*t6043*t4865;
  t6097 = t6082 + t6091;
  t6124 = -1.*t690*t6121;
  t6134 = -1.*t5964*t4865;
  t6137 = t6124 + t6134;
  t6179 = t690*t6121;
  t6182 = t5964*t4865;
  t6183 = t6179 + t6182;
  t6828 = t4864*t6161;
  t5690 = t4864*t5689;
  t5693 = t5690 + t5669;
  t6883 = t4864*t6323;
  t6885 = t969*t6353;
  t6887 = t6883 + t6885;
  t6430 = -1.*t690*t6421;
  t6435 = -1.*t6284*t4865;
  t6439 = t6430 + t6435;
  t6485 = t690*t6421;
  t6499 = t6284*t4865;
  t6507 = t6485 + t6499;
  t6899 = t4864*t6458;
  t6571 = t690*t6569;
  t6591 = t6590*t4865;
  t6593 = t6571 + t6591;
  t6613 = t690*t6590;
  t6625 = -1.*t6569*t4865;
  t6626 = t6613 + t6625;
  p_output1[0]=(-1.*t4864*t5570 + t5524*t969)*var2[3] + (-1.*t4864*t5396 + t5377*t969)*var2[4] + (-1.*t4864*t5011 + t4969*t969)*var2[5] + (-1.*t4864*t5177 + t5126*t969)*var2[6] + (t4830*t4864*t4865 + t4830*t690*t969)*var2[7] + (-1.*t4864*t5642 + t5669)*var2[8] + t5693*var2[9];
  p_output1[1]=(-1.*t4864*t5657 + t5689*t969)*var2[3] + (-1.*t4864*t6097 + t6066*t969)*var2[4] + (-1.*t4864*t5940 + t5903*t969)*var2[5] + (-1.*t4864*t5990 + t5978*t969)*var2[6] + (t4864*t4865*t5814 + t5814*t690*t969)*var2[7] + (-1.*t4864*t6137 + t6171)*var2[8] + (t6171 + t4864*t6183)*var2[9];
  p_output1[2]=(-1.*t4864*t6626 + t6593*t969)*var2[4] + t6385*var2[5] + t6385*var2[6] + (t4864*t4865*t6260 + t6260*t690*t969)*var2[7] + (-1.*t4864*t6439 + t6464)*var2[8] + (t6464 + t4864*t6507)*var2[9];
  p_output1[3]=(t4864*t5524 + t5570*t969)*var2[3] + (t4864*t5377 + t5396*t969)*var2[4] + (t4864*t4969 + t5011*t969)*var2[5] + (t4864*t5126 + t5177*t969)*var2[6] + (t4830*t4864*t690 - 1.*t4830*t4865*t969)*var2[7] + (t6760 + t5642*t969)*var2[8] + (t6760 - 1.*t5689*t969)*var2[9];
  p_output1[4]=t5693*var2[3] + (t4864*t6066 + t6097*t969)*var2[4] + (t4864*t5903 + t5940*t969)*var2[5] + (t4864*t5978 + t5990*t969)*var2[6] + (t4864*t5814*t690 - 1.*t4865*t5814*t969)*var2[7] + (t6828 + t6137*t969)*var2[8] + (t6828 - 1.*t6183*t969)*var2[9];
  p_output1[5]=(t4864*t6593 + t6626*t969)*var2[4] + t6887*var2[5] + t6887*var2[6] + (t4864*t6260*t690 - 1.*t4865*t6260*t969)*var2[7] + (t6899 + t6439*t969)*var2[8] + (t6899 - 1.*t6507*t969)*var2[9];
  p_output1[6]=(-1.*t1418*t5473 + t5806)*var2[3] + (-1.*t3231*t3742*t4738 - 1.*t1418*t5289)*var2[4] - 1.*t1418*t4931*var2[5] - 1.*t1418*t5075*var2[6] + t5616*var2[7];
  p_output1[7]=(-1.*t1418*t4448 + t3231*t4482*t4738)*var2[3] + (-1.*t2092*t3742*t4738 - 1.*t1418*t6040)*var2[4] - 1.*t1418*t5877*var2[5] - 1.*t1418*t5964*var2[6] + t6121*var2[7];
  p_output1[8]=(-1.*t4482*t4738 - 1.*t1418*t6538)*var2[4] - 1.*t1418*t6284*var2[5] - 1.*t1418*t6284*var2[6] + t6421*var2[7];
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

#include "dR_LeftKnee_mex.hh"

namespace SymExpression
{

void dR_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
