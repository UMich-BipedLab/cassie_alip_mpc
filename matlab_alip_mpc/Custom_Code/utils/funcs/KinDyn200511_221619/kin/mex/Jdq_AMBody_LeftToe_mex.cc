/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:11 GMT-04:00
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
  double t307;
  double t348;
  double t459;
  double t1261;
  double t1977;
  double t1854;
  double t1873;
  double t1983;
  double t2227;
  double t1904;
  double t2093;
  double t2193;
  double t1833;
  double t2272;
  double t2302;
  double t2529;
  double t2722;
  double t2207;
  double t2574;
  double t2641;
  double t1741;
  double t2728;
  double t2956;
  double t3031;
  double t32;
  double t766;
  double t825;
  double t1705;
  double t3129;
  double t3200;
  double t3205;
  double t2646;
  double t3085;
  double t3088;
  double t3222;
  double t78;
  double t1284;
  double t3103;
  double t3385;
  double t3465;
  double t820;
  double t3626;
  double t3697;
  double t3709;
  double t3886;
  double t4080;
  double t4875;
  double t4920;
  double t5117;
  double t4837;
  double t5191;
  double t5224;
  double t5338;
  double t5735;
  double t6137;
  double t6192;
  double t6317;
  double t5297;
  double t5788;
  double t5873;
  double t5996;
  double t6383;
  double t6495;
  double t6657;
  double t6668;
  double t6830;
  double t6916;
  double t6968;
  double t3497;
  double t3556;
  double t3589;
  double t3860;
  double t4124;
  double t4132;
  double t4174;
  double t4223;
  double t4245;
  double t4352;
  double t4361;
  double t4543;
  double t4693;
  double t4773;
  double t6516;
  double t6575;
  double t6639;
  double t6836;
  double t6988;
  double t7040;
  double t7060;
  double t7114;
  double t7158;
  double t7238;
  double t7245;
  double t7291;
  double t7331;
  double t7387;
  double t508;
  double t563;
  double t811;
  double t940;
  double t957;
  double t961;
  double t1001;
  double t1133;
  double t1288;
  double t1475;
  double t1499;
  double t7938;
  double t8003;
  double t8189;
  double t8235;
  double t8396;
  double t8465;
  double t7615;
  double t7709;
  double t7888;
  double t8758;
  double t8792;
  double t8796;
  double t8842;
  double t8874;
  double t8876;
  double t8881;
  double t8908;
  double t8910;
  double t8929;
  t307 = Cos(var1[7]);
  t348 = -1.*t307;
  t459 = 0. + t348;
  t1261 = Sin(var1[4]);
  t1977 = Cos(var1[11]);
  t1854 = Cos(var1[12]);
  t1873 = Sin(var1[11]);
  t1983 = Sin(var1[12]);
  t2227 = Cos(var1[10]);
  t1904 = t1854*t1873;
  t2093 = t1977*t1983;
  t2193 = 0. + t1904 + t2093;
  t1833 = Sin(var1[10]);
  t2272 = t1977*t1854;
  t2302 = -1.*t1873*t1983;
  t2529 = 0. + t2272 + t2302;
  t2722 = Sin(var1[9]);
  t2207 = -1.*t1833*t2193;
  t2574 = t2227*t2529;
  t2641 = 0. + t2207 + t2574;
  t1741 = Cos(var1[9]);
  t2728 = t2227*t2193;
  t2956 = t1833*t2529;
  t3031 = 0. + t2728 + t2956;
  t32 = Cos(var1[4]);
  t766 = Sin(var1[5]);
  t825 = Sin(var1[6]);
  t1705 = Cos(var1[8]);
  t3129 = t2722*t2641;
  t3200 = t1741*t3031;
  t3205 = 0. + t3129 + t3200;
  t2646 = t1741*t2641;
  t3085 = -1.*t2722*t3031;
  t3088 = 0. + t2646 + t3085;
  t3222 = Sin(var1[8]);
  t78 = Cos(var1[6]);
  t1284 = Sin(var1[7]);
  t3103 = t1705*t3088;
  t3385 = -1.*t3205*t3222;
  t3465 = 0. + t3103 + t3385;
  t820 = Cos(var1[5]);
  t3626 = t1705*t3205;
  t3697 = t3088*t3222;
  t3709 = 0. + t3626 + t3697;
  t3886 = t1284*t3465;
  t4080 = 0. + t3886;
  t4875 = -1.*t1977*t1854;
  t4920 = t1873*t1983;
  t5117 = 0. + t4875 + t4920;
  t4837 = t1833*t2193;
  t5191 = t2227*t5117;
  t5224 = 0. + t4837 + t5191;
  t5338 = -1.*t1833*t5117;
  t5735 = 0. + t2728 + t5338;
  t6137 = t1741*t5224;
  t6192 = t2722*t5735;
  t6317 = 0. + t6137 + t6192;
  t5297 = -1.*t2722*t5224;
  t5788 = t1741*t5735;
  t5873 = 0. + t5297 + t5788;
  t5996 = t1705*t5873;
  t6383 = -1.*t6317*t3222;
  t6495 = 0. + t5996 + t6383;
  t6657 = t1705*t6317;
  t6668 = t5873*t3222;
  t6830 = 0. + t6657 + t6668;
  t6916 = t1284*t6495;
  t6968 = 0. + t6916;
  t3497 = t307*t3465;
  t3556 = 0. + t3497;
  t3589 = -1.*t1261*t3556;
  t3860 = -1.*t825*t3709;
  t4124 = t78*t4080;
  t4132 = 0. + t3860 + t4124;
  t4174 = t766*t4132;
  t4223 = t78*t3709;
  t4245 = t825*t4080;
  t4352 = 0. + t4223 + t4245;
  t4361 = t820*t4352;
  t4543 = 0. + t4174 + t4361;
  t4693 = t32*t4543;
  t4773 = 0. + t3589 + t4693;
  t6516 = t307*t6495;
  t6575 = 0. + t6516;
  t6639 = -1.*t1261*t6575;
  t6836 = -1.*t825*t6830;
  t6988 = t78*t6968;
  t7040 = 0. + t6836 + t6988;
  t7060 = t766*t7040;
  t7114 = t78*t6830;
  t7158 = t825*t6968;
  t7238 = 0. + t7114 + t7158;
  t7245 = t820*t7238;
  t7291 = 0. + t7060 + t7245;
  t7331 = t32*t7291;
  t7387 = 0. + t6639 + t7331;
  t508 = t78*t459;
  t563 = 0. + t508;
  t811 = t563*t766;
  t940 = t459*t825;
  t957 = 0. + t940;
  t961 = t820*t957;
  t1001 = 0. + t811 + t961;
  t1133 = t32*t1001;
  t1288 = 0. + t1284;
  t1475 = -1.*t1261*t1288;
  t1499 = 0. + t1133 + t1475;
  t7938 = t820*t4132;
  t8003 = -1.*t766*t4352;
  t8189 = 0. + t7938 + t8003;
  t8235 = t820*t7040;
  t8396 = -1.*t766*t7238;
  t8465 = 0. + t8235 + t8396;
  t7615 = t820*t563;
  t7709 = -1.*t766*t957;
  t7888 = 0. + t7615 + t7709;
  t8758 = -1.e-6*t1288;
  t8792 = -0.000099*t3556;
  t8796 = 0.000287*t6575;
  t8842 = t8758 + t8792 + t8796;
  t8874 = 0.000171*t3556;
  t8876 = -0.000099*t6575;
  t8881 = t8874 + t8876;
  t8908 = 0.000449*t1288;
  t8910 = -1.e-6*t6575;
  t8929 = t8908 + t8910;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.e-6*t1499 - 0.000099*t4773 + 0.000287*t7387;
  p_output1[10]=0.000171*t4773 - 0.000099*t7387;
  p_output1[11]=0.000449*t1499 - 1.e-6*t7387;
  p_output1[12]=-1.e-6*t7888 - 0.000099*t8189 + 0.000287*t8465;
  p_output1[13]=0.000171*t8189 - 0.000099*t8465;
  p_output1[14]=0.000449*t7888 - 1.e-6*t8465;
  p_output1[15]=t8842;
  p_output1[16]=t8881;
  p_output1[17]=t8929;
  p_output1[18]=t8842;
  p_output1[19]=t8881;
  p_output1[20]=t8929;
  p_output1[21]=-0.000099*t3709 + 0.000287*t6830;
  p_output1[22]=0.000171*t3709 - 0.000099*t6830;
  p_output1[23]=-1.e-6*t6830;
  p_output1[24]=-1.e-6;
  p_output1[25]=0;
  p_output1[26]=0.000449;
  p_output1[27]=-1.e-6;
  p_output1[28]=0;
  p_output1[29]=0.000449;
  p_output1[30]=-1.e-6;
  p_output1[31]=0;
  p_output1[32]=0.000449;
  p_output1[33]=-1.e-6;
  p_output1[34]=0;
  p_output1[35]=0.000449;
  p_output1[36]=-1.e-6;
  p_output1[37]=0;
  p_output1[38]=0.000449;
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

#include "Jdq_AMBody_LeftToe_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_LeftToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
