/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:34 GMT-04:00
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
  double t3377;
  double t3399;
  double t3442;
  double t3657;
  double t3003;
  double t3806;
  double t1267;
  double t4022;
  double t4212;
  double t4081;
  double t3995;
  double t4194;
  double t4221;
  double t4251;
  double t4254;
  double t4255;
  double t4257;
  double t4001;
  double t4253;
  double t4303;
  double t4304;
  double t4315;
  double t4270;
  double t4365;
  double t4380;
  double t4296;
  double t4321;
  double t4325;
  double t4471;
  double t4472;
  double t4473;
  double t4515;
  double t4537;
  double t4538;
  double t4590;
  double t4715;
  double t4717;
  double t4719;
  double t4722;
  double t4788;
  double t4797;
  double t4804;
  double t4731;
  double t4400;
  double t4406;
  double t4413;
  double t4904;
  double t4911;
  double t4787;
  double t4808;
  double t4811;
  double t5051;
  double t5054;
  double t5055;
  double t5060;
  double t5073;
  double t5085;
  double t5086;
  double t5087;
  double t5089;
  double t5020;
  double t5022;
  double t5037;
  double t3446;
  double t3812;
  double t3848;
  double t4046;
  double t4122;
  double t4136;
  double t4150;
  double t4151;
  double t4155;
  double t4263;
  double t4268;
  double t4272;
  double t4279;
  double t4294;
  double t4330;
  double t4336;
  double t4342;
  double t4358;
  double t4490;
  double t4547;
  double t4555;
  double t4579;
  double t4583;
  double t4598;
  double t4601;
  double t4605;
  double t4657;
  double t4659;
  double t4666;
  double t4678;
  double t4690;
  double t4691;
  double t4699;
  double t4703;
  double t4705;
  double t4727;
  double t4740;
  double t4753;
  double t4780;
  double t4834;
  double t4841;
  double t4872;
  double t4882;
  double t4396;
  double t4428;
  double t4443;
  double t4979;
  double t4980;
  double t4985;
  double t5018;
  double t5039;
  double t5040;
  double t5375;
  double t5376;
  double t5378;
  double t5106;
  double t5108;
  double t5116;
  double t5137;
  double t5139;
  double t5149;
  double t5163;
  double t5164;
  double t5184;
  double t5188;
  double t5192;
  double t5198;
  t3377 = Cos(var1[3]);
  t3399 = Cos(var1[4]);
  t3442 = Cos(var1[5]);
  t3657 = Sin(var1[13]);
  t3003 = Cos(var1[13]);
  t3806 = Sin(var1[5]);
  t1267 = Cos(var1[15]);
  t4022 = Sin(var1[4]);
  t4212 = Sin(var1[3]);
  t4081 = Sin(var1[14]);
  t3995 = Sin(var1[15]);
  t4194 = t3377*t3442*t4022;
  t4221 = t4212*t3806;
  t4251 = t4194 + t4221;
  t4254 = t3442*t4212;
  t4255 = -1.*t3377*t4022*t3806;
  t4257 = t4254 + t4255;
  t4001 = Cos(var1[14]);
  t4253 = -1.*t3657*t4251;
  t4303 = -1.*t3442*t4212;
  t4304 = t3377*t4022*t3806;
  t4315 = t4303 + t4304;
  t4270 = t3003*t4251;
  t4365 = -1.*t3657*t4315;
  t4380 = t4270 + t4365;
  t4296 = t3657*t4251;
  t4321 = t3003*t4315;
  t4325 = t4296 + t4321;
  t4471 = -1.*t3442*t4212*t4022;
  t4472 = t3377*t3806;
  t4473 = t4471 + t4472;
  t4515 = -1.*t3377*t3442;
  t4537 = -1.*t4212*t4022*t3806;
  t4538 = t4515 + t4537;
  t4590 = t3003*t4538;
  t4715 = t3442*t4212*t4022;
  t4717 = -1.*t3377*t3806;
  t4719 = t4715 + t4717;
  t4722 = -1.*t3657*t4719;
  t4788 = t3377*t3442;
  t4797 = t4212*t4022*t3806;
  t4804 = t4788 + t4797;
  t4731 = t3003*t4719;
  t4400 = t4001*t3377*t3399;
  t4406 = t4081*t4325;
  t4413 = t4400 + t4406;
  t4904 = -1.*t3657*t4804;
  t4911 = t4731 + t4904;
  t4787 = t3657*t4719;
  t4808 = t3003*t4804;
  t4811 = t4787 + t4808;
  t5051 = -1.*t3399*t3442*t3657;
  t5054 = -1.*t3003*t3399*t3806;
  t5055 = t5051 + t5054;
  t5060 = -1.*t1267*t5055;
  t5073 = t3003*t3399*t3442;
  t5085 = -1.*t3399*t3657*t3806;
  t5086 = t5073 + t5085;
  t5087 = t4081*t3995*t5086;
  t5089 = t5060 + t5087;
  t5020 = t3399*t3442*t3657;
  t5022 = t3003*t3399*t3806;
  t5037 = t5020 + t5022;
  t3446 = t3003*t3377*t3399*t3442;
  t3812 = -1.*t3377*t3399*t3657*t3806;
  t3848 = t3446 + t3812;
  t4046 = -1.*t4001*t3377*t4022;
  t4122 = t3377*t3399*t3442*t3657;
  t4136 = t3003*t3377*t3399*t3806;
  t4150 = t4122 + t4136;
  t4151 = t4081*t4150;
  t4155 = t4046 + t4151;
  t4263 = t3003*t4257;
  t4268 = t4253 + t4263;
  t4272 = t3657*t4257;
  t4279 = t4270 + t4272;
  t4294 = -1.*t3377*t3399*t4081;
  t4330 = t4001*t4325;
  t4336 = t4294 + t4330;
  t4342 = -1.*t3003*t4315;
  t4358 = t4253 + t4342;
  t4490 = t3003*t4473;
  t4547 = -1.*t3657*t4538;
  t4555 = t4490 + t4547;
  t4579 = -1.*t4001*t3399*t4212;
  t4583 = t3657*t4473;
  t4598 = t4583 + t4590;
  t4601 = t4081*t4598;
  t4605 = t4579 + t4601;
  t4657 = t3003*t3399*t3442*t4212;
  t4659 = -1.*t3399*t3657*t4212*t3806;
  t4666 = t4657 + t4659;
  t4678 = -1.*t4001*t4212*t4022;
  t4690 = t3399*t3442*t3657*t4212;
  t4691 = t3003*t3399*t4212*t3806;
  t4699 = t4690 + t4691;
  t4703 = t4081*t4699;
  t4705 = t4678 + t4703;
  t4727 = t4722 + t4590;
  t4740 = t3657*t4538;
  t4753 = t4731 + t4740;
  t4780 = -1.*t3399*t4081*t4212;
  t4834 = t4001*t4811;
  t4841 = t4780 + t4834;
  t4872 = -1.*t3003*t4804;
  t4882 = t4722 + t4872;
  t4396 = t3995*t4380;
  t4428 = t1267*t4413;
  t4443 = t4396 + t4428;
  t4979 = t4001*t3399*t4212;
  t4980 = t4081*t4811;
  t4985 = t4979 + t4980;
  t5018 = t4081*t4022;
  t5039 = t4001*t5037;
  t5040 = t5018 + t5039;
  t5375 = t3995*t5055;
  t5376 = t1267*t4081*t5086;
  t5378 = t5375 + t5376;
  t5106 = -1.*t4001*t4022;
  t5108 = t4081*t5037;
  t5116 = t5106 + t5108;
  t5137 = -1.*t3003*t3442*t4022;
  t5139 = t3657*t4022*t3806;
  t5149 = t5137 + t5139;
  t5163 = -1.*t4001*t3399;
  t5164 = -1.*t3442*t3657*t4022;
  t5184 = -1.*t3003*t4022*t3806;
  t5188 = t5164 + t5184;
  t5192 = t4081*t5188;
  t5198 = t5163 + t5192;
  p_output1[0]=(-1.*t1267*t4555 + t3995*t4605)*var2[3] + (-1.*t1267*t3848 + t3995*t4155)*var2[4] + (-1.*t1267*t4268 + t3995*t4081*t4279)*var2[5] + (-1.*t1267*t4358 + t3995*t4081*t4380)*var2[13] + t3995*t4336*var2[14] + t4443*var2[15];
  p_output1[1]=(-1.*t1267*t4380 + t3995*t4413)*var2[3] + (-1.*t1267*t4666 + t3995*t4705)*var2[4] + (-1.*t1267*t4727 + t3995*t4081*t4753)*var2[5] + (-1.*t1267*t4882 + t3995*t4081*t4911)*var2[13] + t3995*t4841*var2[14] + (t3995*t4911 + t1267*t4985)*var2[15];
  p_output1[2]=(-1.*t1267*t5149 + t3995*t5198)*var2[4] + t5089*var2[5] + t5089*var2[13] + t3995*t5040*var2[14] + (t3995*t5086 + t1267*t5116)*var2[15];
  p_output1[3]=(t3995*t4555 + t1267*t4605)*var2[3] + (t3848*t3995 + t1267*t4155)*var2[4] + (t3995*t4268 + t1267*t4081*t4279)*var2[5] + (t3995*t4358 + t1267*t4081*t4380)*var2[13] + t1267*t4336*var2[14] + (t1267*t4380 - 1.*t3995*t4413)*var2[15];
  p_output1[4]=t4443*var2[3] + (t3995*t4666 + t1267*t4705)*var2[4] + (t3995*t4727 + t1267*t4081*t4753)*var2[5] + (t3995*t4882 + t1267*t4081*t4911)*var2[13] + t1267*t4841*var2[14] + (t1267*t4911 - 1.*t3995*t4985)*var2[15];
  p_output1[5]=(t3995*t5149 + t1267*t5198)*var2[4] + t5378*var2[5] + t5378*var2[13] + t1267*t5040*var2[14] + (t1267*t5086 - 1.*t3995*t5116)*var2[15];
  p_output1[6]=(-1.*t4001*t4598 + t4780)*var2[3] + (-1.*t3377*t4022*t4081 - 1.*t4001*t4150)*var2[4] - 1.*t4001*t4279*var2[5] - 1.*t4001*t4380*var2[13] + t4413*var2[14];
  p_output1[7]=(t3377*t3399*t4081 - 1.*t4001*t4325)*var2[3] + (-1.*t4022*t4081*t4212 - 1.*t4001*t4699)*var2[4] - 1.*t4001*t4753*var2[5] - 1.*t4001*t4911*var2[13] + t4985*var2[14];
  p_output1[8]=(-1.*t3399*t4081 - 1.*t4001*t5188)*var2[4] - 1.*t4001*t5086*var2[5] - 1.*t4001*t5086*var2[13] + t5116*var2[14];
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

#include "dR_RightThighJoint_mex.hh"

namespace SymExpression
{

void dR_RightThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
