/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:55 GMT-04:00
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
  double t692;
  double t414;
  double t1006;
  double t475;
  double t1732;
  double t303;
  double t230;
  double t4118;
  double t5337;
  double t6157;
  double t5254;
  double t5858;
  double t5877;
  double t6022;
  double t6025;
  double t6311;
  double t6318;
  double t6332;
  double t6362;
  double t6364;
  double t6390;
  double t6397;
  double t6398;
  double t6428;
  double t6429;
  double t6445;
  double t6459;
  double t6477;
  double t6594;
  double t6597;
  double t6562;
  double t6566;
  double t6605;
  double t6611;
  double t6604;
  double t6620;
  double t6629;
  double t6673;
  double t6678;
  double t6690;
  double t567;
  double t2342;
  double t2399;
  double t2640;
  double t2741;
  double t3070;
  double t3497;
  double t4311;
  double t4442;
  double t6002;
  double t6038;
  double t6139;
  double t6144;
  double t6161;
  double t6163;
  double t6195;
  double t6242;
  double t6247;
  double t6257;
  double t6259;
  double t6261;
  double t6262;
  double t6279;
  double t6335;
  double t6356;
  double t6366;
  double t6438;
  double t6485;
  double t6487;
  double t6491;
  double t6502;
  double t6521;
  double t6522;
  double t6529;
  double t6533;
  double t6538;
  double t6549;
  double t6558;
  double t6568;
  double t6598;
  double t6600;
  double t6648;
  double t6692;
  double t6705;
  double t6731;
  double t6736;
  double t6737;
  double t6739;
  double t6751;
  double t6755;
  double t6761;
  double t6763;
  double t6764;
  double t6791;
  double t6792;
  double t6827;
  double t6773;
  double t6774;
  double t6777;
  double t6307;
  double t6560;
  double t6768;
  double t6771;
  double t6960;
  double t6962;
  double t6965;
  double t6966;
  double t6969;
  double t6971;
  double t6973;
  double t6974;
  double t6979;
  double t6845;
  double t6856;
  double t6860;
  double t6861;
  double t7012;
  double t7013;
  double t7022;
  double t7004;
  double t7006;
  double t7009;
  double t6873;
  double t6874;
  double t6899;
  double t6902;
  double t7070;
  double t7071;
  double t7073;
  double t7117;
  double t7122;
  double t7124;
  double t7103;
  double t7107;
  double t7109;
  t692 = Cos(var1[3]);
  t414 = Cos(var1[5]);
  t1006 = Sin(var1[4]);
  t475 = Sin(var1[3]);
  t1732 = Sin(var1[5]);
  t303 = Cos(var1[6]);
  t230 = Cos(var1[7]);
  t4118 = Sin(var1[6]);
  t5337 = Sin(var1[7]);
  t6157 = 0. + t5337;
  t5254 = Cos(var1[4]);
  t5858 = -1.*t303*t230;
  t5877 = 0. + t5858;
  t6022 = -1.*t230*t4118;
  t6025 = 0. + t6022;
  t6311 = Cos(var1[8]);
  t6318 = t230*t6311;
  t6332 = 0. + t6318;
  t6362 = Sin(var1[8]);
  t6364 = 0. + t6362;
  t6390 = t6311*t5337;
  t6397 = 0. + t6390;
  t6398 = t4118*t6397;
  t6428 = t303*t6364;
  t6429 = 0. + t6398 + t6428;
  t6445 = t303*t6397;
  t6459 = -1.*t4118*t6364;
  t6477 = 0. + t6445 + t6459;
  t6594 = t230*t6362;
  t6597 = 0. + t6594;
  t6562 = -1.*t6311;
  t6566 = 0. + t6562;
  t6605 = t5337*t6362;
  t6611 = 0. + t6605;
  t6604 = -1.*t6566*t4118;
  t6620 = t303*t6611;
  t6629 = 0. + t6604 + t6620;
  t6673 = t303*t6566;
  t6678 = t4118*t6611;
  t6690 = 0. + t6673 + t6678;
  t567 = -1.*t414*t475;
  t2342 = t692*t1006*t1732;
  t2399 = t567 + t2342;
  t2640 = t303*t2399;
  t2741 = t692*t414*t1006;
  t3070 = t475*t1732;
  t3497 = t2741 + t3070;
  t4311 = t3497*t4118;
  t4442 = t2640 + t4311;
  t6002 = t414*t5877;
  t6038 = -1.*t1732*t6025;
  t6139 = 0. + t6002 + t6038;
  t6144 = var2[4]*t6139;
  t6161 = var2[5]*t6157;
  t6163 = var2[6]*t6157;
  t6195 = t5877*t1732;
  t6242 = t414*t6025;
  t6247 = 0. + t6195 + t6242;
  t6257 = t5254*t6247;
  t6259 = -1.*t1006*t6157;
  t6261 = 0. + t6257 + t6259;
  t6262 = var2[3]*t6261;
  t6279 = 0. + var2[8] + t6144 + t6161 + t6163 + t6262;
  t6335 = var2[5]*t6332;
  t6356 = var2[6]*t6332;
  t6366 = var2[7]*t6364;
  t6438 = -1.*t1732*t6429;
  t6485 = t414*t6477;
  t6487 = 0. + t6438 + t6485;
  t6491 = var2[4]*t6487;
  t6502 = -1.*t6332*t1006;
  t6521 = t414*t6429;
  t6522 = t1732*t6477;
  t6529 = 0. + t6521 + t6522;
  t6533 = t5254*t6529;
  t6538 = 0. + t6502 + t6533;
  t6549 = var2[3]*t6538;
  t6558 = 0. + t6335 + t6356 + t6366 + t6491 + t6549;
  t6568 = var2[7]*t6566;
  t6598 = var2[5]*t6597;
  t6600 = var2[6]*t6597;
  t6648 = t414*t6629;
  t6692 = -1.*t1732*t6690;
  t6705 = 0. + t6648 + t6692;
  t6731 = var2[4]*t6705;
  t6736 = -1.*t1006*t6597;
  t6737 = t1732*t6629;
  t6739 = t414*t6690;
  t6751 = 0. + t6737 + t6739;
  t6755 = t5254*t6751;
  t6761 = 0. + t6736 + t6755;
  t6763 = var2[3]*t6761;
  t6764 = 0. + t6568 + t6598 + t6600 + t6731 + t6763;
  t6791 = t303*t3497;
  t6792 = -1.*t2399*t4118;
  t6827 = t6791 + t6792;
  t6773 = t692*t5254*t230;
  t6774 = t4442*t5337;
  t6777 = t6773 + t6774;
  t6307 = 0.0498*t6279;
  t6560 = -0.000019*t6558;
  t6768 = -0.0117*t6764;
  t6771 = t6307 + t6560 + t6768;
  t6960 = t692*t414;
  t6962 = t475*t1006*t1732;
  t6965 = t6960 + t6962;
  t6966 = t303*t6965;
  t6969 = t414*t475*t1006;
  t6971 = -1.*t692*t1732;
  t6973 = t6969 + t6971;
  t6974 = t6973*t4118;
  t6979 = t6966 + t6974;
  t6845 = -0.000019*t6279;
  t6856 = 0.0563*t6558;
  t6860 = 0.000284*t6764;
  t6861 = t6845 + t6856 + t6860;
  t7012 = t303*t6973;
  t7013 = -1.*t6965*t4118;
  t7022 = t7012 + t7013;
  t7004 = t5254*t230*t475;
  t7006 = t6979*t5337;
  t7009 = t7004 + t7006;
  t6873 = -0.0117*t6279;
  t6874 = 0.000284*t6558;
  t6899 = 0.018*t6764;
  t6902 = t6873 + t6874 + t6899;
  t7070 = t5254*t303*t1732;
  t7071 = t5254*t414*t4118;
  t7073 = t7070 + t7071;
  t7117 = t5254*t414*t303;
  t7122 = -1.*t5254*t1732*t4118;
  t7124 = t7117 + t7122;
  t7103 = -1.*t230*t1006;
  t7107 = t7073*t5337;
  t7109 = t7103 + t7107;
  p_output1[0]=(t6311*t6777 + t6362*t6827)*t6861 + (t6362*t6777 - 1.*t6311*t6827)*t6902 + t6771*(-1.*t230*t4442 + t5254*t5337*t692);
  p_output1[1]=t6771*(t475*t5254*t5337 - 1.*t230*t6979) + t6902*(t6362*t7009 - 1.*t6311*t7022) + t6861*(t6311*t7009 + t6362*t7022);
  p_output1[2]=t6771*(-1.*t1006*t5337 - 1.*t230*t7073) + t6902*(t6362*t7109 - 1.*t6311*t7124) + t6861*(t6311*t7109 + t6362*t7124);
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

#include "AMWorld_LeftThigh_mex.hh"

namespace SymExpression
{

void AMWorld_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
