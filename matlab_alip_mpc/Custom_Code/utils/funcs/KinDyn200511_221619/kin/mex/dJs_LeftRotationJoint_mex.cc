/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:47 GMT-04:00
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
  double t653;
  double t680;
  double t2378;
  double t2640;
  double t2531;
  double t2768;
  double t2970;
  double t3017;
  double t4578;
  double t4623;
  double t3425;
  double t3462;
  double t3610;
  double t3653;
  double t4700;
  double t4731;
  double t4765;
  double t4947;
  double t4953;
  double t4970;
  double t3937;
  double t4017;
  double t4030;
  double t4047;
  double t4049;
  double t4195;
  double t4231;
  double t4258;
  double t4379;
  double t4382;
  double t4401;
  double t4410;
  double t4470;
  double t4473;
  double t4505;
  double t5101;
  double t5051;
  double t5058;
  double t5059;
  double t5103;
  double t5037;
  double t5039;
  double t5043;
  double t5134;
  double t5135;
  double t5102;
  double t5104;
  double t5106;
  double t4923;
  double t4927;
  double t4931;
  double t5136;
  double t5137;
  double t5140;
  double t5145;
  double t5146;
  double t5148;
  double t5111;
  double t5113;
  double t5116;
  double t5176;
  double t5179;
  double t5182;
  double t5185;
  double t5163;
  double t5196;
  double t4854;
  double t4862;
  double t4872;
  double t5227;
  double t5232;
  double t5234;
  double t5362;
  double t5363;
  double t5366;
  double t5248;
  double t5252;
  double t5265;
  double t5274;
  double t5314;
  double t5197;
  double t5207;
  double t5480;
  double t5492;
  double t5494;
  double t5495;
  double t5496;
  double t5456;
  double t5458;
  double t5461;
  double t5585;
  double t5588;
  double t5591;
  double t5598;
  double t5599;
  double t5604;
  double t5608;
  double t5657;
  double t5684;
  double t5592;
  double t5593;
  double t5594;
  double t5144;
  double t5153;
  double t5445;
  double t5452;
  double t5454;
  double t5764;
  double t5318;
  double t5752;
  double t5753;
  double t5754;
  double t5762;
  double t5682;
  double t5689;
  double t5641;
  double t5642;
  double t5645;
  double t5788;
  double t5518;
  double t5520;
  double t5714;
  double t5715;
  t653 = Cos(var1[3]);
  t680 = Sin(var1[3]);
  t2378 = Cos(var1[4]);
  t2640 = Sin(var1[4]);
  t2531 = -1.*var2[2]*t2378*t680;
  t2768 = -1.*var2[1]*t2640;
  t2970 = -1.*var1[1]*t2378;
  t3017 = var1[2]*t680*t2640;
  t4578 = Cos(var1[5]);
  t4623 = Sin(var1[5]);
  t3425 = var2[2]*t653*t2378;
  t3462 = var2[0]*t2640;
  t3610 = var1[0]*t2378;
  t3653 = -1.*var1[2]*t653*t2640;
  t4700 = t653*t4578*t2640;
  t4731 = t680*t4623;
  t4765 = t4700 + t4731;
  t4947 = -1.*t653*t4578;
  t4953 = -1.*t680*t2640*t4623;
  t4970 = t4947 + t4953;
  t3937 = -1.*var2[1]*t653*t2378;
  t4017 = var2[0]*t2378*t680;
  t4030 = var1[0]*t653*t2378;
  t4047 = var1[1]*t2378*t680;
  t4049 = t4030 + t4047;
  t4195 = var2[3]*t4049;
  t4231 = var1[1]*t653*t2640;
  t4258 = -1.*var1[0]*t680*t2640;
  t4379 = -1.*var2[3]*t2378*t680;
  t4382 = -1.*var2[4]*t653*t2640;
  t4401 = t4379 + t4382;
  t4410 = var2[3]*t653*t2378;
  t4470 = -1.*var2[4]*t680*t2640;
  t4473 = t4410 + t4470;
  t4505 = -1.*var2[4]*t2378;
  t5101 = Cos(var1[6]);
  t5051 = t4578*t680*t2640;
  t5058 = -1.*t653*t4623;
  t5059 = t5051 + t5058;
  t5103 = Sin(var1[6]);
  t5037 = -1.*t4578*t680;
  t5039 = t653*t2640*t4623;
  t5043 = t5037 + t5039;
  t5134 = -1.*t5101;
  t5135 = 1. + t5134;
  t5102 = t2378*t4578*t5101;
  t5104 = -1.*t2378*t4623*t5103;
  t5106 = t5102 + t5104;
  t4923 = -1.*t4578*t680*t2640;
  t4927 = t653*t4623;
  t4931 = t4923 + t4927;
  t5136 = 0.07996*t5135;
  t5137 = -0.135*t5103;
  t5140 = 0. + t5136 + t5137;
  t5145 = 0.135*t5135;
  t5146 = 0.07996*t5103;
  t5148 = 0. + t5145 + t5146;
  t5111 = t653*t4578;
  t5113 = t680*t2640*t4623;
  t5116 = t5111 + t5113;
  t5176 = -1.*var1[2];
  t5179 = -1.*t2378*t4578*t5140;
  t5182 = -1.*t2378*t4623*t5148;
  t5185 = 0. + t5176 + t5179 + t5182;
  t5163 = t5101*t4970;
  t5196 = t5101*t4765;
  t4854 = t4578*t680;
  t4862 = -1.*t653*t2640*t4623;
  t4872 = t4854 + t4862;
  t5227 = t5059*t5140;
  t5232 = t5116*t5148;
  t5234 = 0. + var1[1] + t5227 + t5232;
  t5362 = t5101*t5059;
  t5363 = -1.*t5116*t5103;
  t5366 = t5362 + t5363;
  t5248 = -1.*t2378*t5101*t4623;
  t5252 = -1.*t2378*t4578*t5103;
  t5265 = t5248 + t5252;
  t5274 = t5234*t5265;
  t5314 = -1.*t5059*t5103;
  t5197 = -1.*t5043*t5103;
  t5207 = t5196 + t5197;
  t5480 = -0.135*t5101;
  t5492 = t5480 + t5146;
  t5494 = 0.07996*t5101;
  t5495 = 0.135*t5103;
  t5496 = t5494 + t5495;
  t5456 = -1.*t4578*t5101*t2640;
  t5458 = t2640*t4623*t5103;
  t5461 = t5456 + t5458;
  t5585 = t2378*t4578*t5140;
  t5588 = t2378*t4623*t5148;
  t5591 = 0. + var1[2] + t5585 + t5588;
  t5598 = -1.*var1[0];
  t5599 = -1.*t4765*t5140;
  t5604 = -1.*t5043*t5148;
  t5608 = 0. + t5598 + t5599 + t5604;
  t5657 = t5608*t5265;
  t5684 = -1.*t4765*t5103;
  t5592 = t653*t2378*t4578*t5101;
  t5593 = -1.*t653*t2378*t4623*t5103;
  t5594 = t5592 + t5593;
  t5144 = t4765*t5140;
  t5153 = t5043*t5148;
  t5445 = t2378*t4578*t5101*t680;
  t5452 = -1.*t2378*t680*t4623*t5103;
  t5454 = t5445 + t5452;
  t5764 = 0. + var1[0] + t5144 + t5153;
  t5318 = t5163 + t5314;
  t5752 = -1.*var1[1];
  t5753 = -1.*t5059*t5140;
  t5754 = -1.*t5116*t5148;
  t5762 = 0. + t5752 + t5753 + t5754;
  t5682 = t5101*t4872;
  t5689 = t5682 + t5684;
  t5641 = t5101*t4931;
  t5642 = -1.*t4970*t5103;
  t5645 = t5641 + t5642;
  t5788 = 0.08055*t5106;
  t5518 = -1.*t5101*t5116;
  t5520 = t5518 + t5314;
  t5714 = -1.*t5101*t5043;
  t5715 = t5714 + t5684;
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
  p_output1[24]=-1.*t653*var2[2] + t680*var1[2]*var2[3];
  p_output1[25]=-1.*t680*var2[2] - 1.*t653*var1[2]*var2[3];
  p_output1[26]=t653*var2[0] + t680*var2[1] + (-1.*t680*var1[0] + t653*var1[1])*var2[3];
  p_output1[27]=-1.*t653*var2[3];
  p_output1[28]=-1.*t680*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2531 + t2768 - 1.*t2378*t653*var1[2]*var2[3] + (t2970 + t3017)*var2[4];
  p_output1[31]=t3425 + t3462 - 1.*t2378*t680*var1[2]*var2[3] + (t3610 + t3653)*var2[4];
  p_output1[32]=t3937 + t4017 + t4195 + (t4231 + t4258)*var2[4];
  p_output1[33]=t4401;
  p_output1[34]=t4473;
  p_output1[35]=t4505;
  p_output1[36]=t2531 + t2768 + (-0.135*t4931 + 0.07996*t4970 - 1.*t2378*t653*var1[2])*var2[3] + (t2970 + t3017 - 0.135*t2378*t4578*t653 + 0.07996*t2378*t4623*t653)*var2[4] + (0.07996*t4765 - 0.135*t4872)*var2[5];
  p_output1[37]=t3425 + t3462 + (-0.135*t4765 + 0.07996*t5043 - 1.*t2378*t680*var1[2])*var2[3] + (t3610 + t3653 - 0.135*t2378*t4578*t680 + 0.07996*t2378*t4623*t680)*var2[4] + (-0.135*t4970 + 0.07996*t5059)*var2[5];
  p_output1[38]=t3937 + t4017 + t4195 + (t4231 + t4258 + 0.135*t2640*t4578 - 0.07996*t2640*t4623)*var2[4] + (0.07996*t2378*t4578 + 0.135*t2378*t4623)*var2[5];
  p_output1[39]=t4401;
  p_output1[40]=t4473;
  p_output1[41]=t4505;
  p_output1[42]=t5106*var2[1] + (-1.*t5059*t5101 + t5103*t5116)*var2[2] + (t5106*(t5144 + t5153) + 0.08055*(t4931*t5103 + t5163) + t5185*t5207 - 0.135*t2378*t680)*var2[3] + ((t2640*t4578*t5140 + t2640*t4623*t5148)*t5366 + t5185*t5454 + t5234*t5461 - 0.135*t2640*t653 + 0.08055*(t2378*t4623*t5101*t653 + t2378*t4578*t5103*t653) + t5106*(t2378*t4578*t5140*t680 + t2378*t4623*t5148*t680))*var2[4] + (t5106*(t4970*t5140 + t5059*t5148) + 0.08055*(t4872*t5103 + t5196) + t5274 + t5185*t5318 + (t2378*t4623*t5140 - 1.*t2378*t4578*t5148)*t5366)*var2[5] + (0.08055*t5207 + t5274 + t5366*(-1.*t2378*t4578*t5492 - 1.*t2378*t4623*t5496) + t5106*(t5059*t5492 + t5116*t5496) + t5185*t5520)*var2[6];
  p_output1[43]=(-1.*t2378*t4578*t5101 + t2378*t4623*t5103)*var2[0] + t5207*var2[2] + (0.08055*(t5043*t5101 + t4765*t5103) + t5106*(-1.*t4931*t5140 - 1.*t4970*t5148) + t5591*t5645 + 0.135*t2378*t653)*var2[3] + ((-1.*t2640*t4578*t5140 - 1.*t2640*t4623*t5148)*t5207 + t5591*t5594 + t5461*t5608 + t5106*(-1.*t2378*t4578*t5140*t653 - 1.*t2378*t4623*t5148*t653) - 0.135*t2640*t680 + 0.08055*(t2378*t4623*t5101*t680 + t2378*t4578*t5103*t680))*var2[4] + (t5106*(-1.*t4872*t5140 - 1.*t4765*t5148) + (-1.*t2378*t4623*t5140 + t2378*t4578*t5148)*t5207 + 0.08055*(t4970*t5103 + t5362) + t5657 + t5591*t5689)*var2[5] + (0.08055*t5366 + t5207*(t2378*t4578*t5492 + t2378*t4623*t5496) + t5106*(-1.*t4765*t5492 - 1.*t5043*t5496) + t5657 + t5591*t5715)*var2[6];
  p_output1[44]=t5366*var2[0] + (-1.*t4765*t5101 + t5043*t5103)*var2[1] + ((t4931*t5140 + t4970*t5148)*t5366 + t5207*(t5599 + t5604) + t5645*t5762 + t5207*t5764)*var2[3] + (-0.135*t2378 + 0.08055*(-1.*t2640*t4623*t5101 - 1.*t2640*t4578*t5103) + t5594*t5762 + t5454*t5764 + t5366*(t2378*t4578*t5140*t653 + t2378*t4623*t5148*t653) + t5207*(-1.*t2378*t4578*t5140*t680 - 1.*t2378*t4623*t5148*t680))*var2[4] + ((-1.*t4970*t5140 - 1.*t5059*t5148)*t5207 + (t4872*t5140 + t4765*t5148)*t5366 + t5689*t5762 + t5318*t5764 + t5788)*var2[5] + (t5366*(t4765*t5492 + t5043*t5496) + t5207*(-1.*t5059*t5492 - 1.*t5116*t5496) + t5715*t5762 + t5520*t5764 + t5788)*var2[6];
  p_output1[45]=t5645*var2[3] + t5594*var2[4] + t5689*var2[5] + t5715*var2[6];
  p_output1[46]=t5207*var2[3] + t5454*var2[4] + t5318*var2[5] + t5520*var2[6];
  p_output1[47]=t5461*var2[4] + t5265*var2[5] + t5265*var2[6];
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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

#include "dJs_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void dJs_LeftRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
