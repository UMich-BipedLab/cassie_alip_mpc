/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:14 GMT-04:00
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
  double t481;
  double t640;
  double t813;
  double t798;
  double t897;
  double t1370;
  double t1143;
  double t920;
  double t1745;
  double t1755;
  double t1990;
  double t1998;
  double t2675;
  double t2684;
  double t2685;
  double t3073;
  double t3085;
  double t3089;
  double t3107;
  double t2263;
  double t2268;
  double t2310;
  double t3626;
  double t3642;
  double t3654;
  double t1227;
  double t1405;
  double t1666;
  double t3898;
  double t3924;
  double t2375;
  double t2513;
  double t4023;
  double t2568;
  double t2618;
  double t2647;
  double t2721;
  double t4323;
  double t3151;
  double t3157;
  double t3233;
  double t3325;
  double t3470;
  double t4659;
  double t4698;
  double t4704;
  double t3912;
  double t3913;
  double t3967;
  double t3970;
  double t4154;
  double t4155;
  double t4165;
  double t4380;
  double t4101;
  double t4107;
  double t4118;
  double t4569;
  double t4571;
  double t4617;
  double t4333;
  double t4370;
  double t4372;
  double t4428;
  double t4448;
  double t4449;
  double t4856;
  double t4864;
  double t4866;
  double t5367;
  double t5371;
  double t5445;
  double t5529;
  double t5557;
  double t5563;
  double t5565;
  double t5567;
  double t5579;
  double t5379;
  double t5421;
  double t5423;
  double t5437;
  double t5486;
  double t4086;
  double t4132;
  double t4144;
  double t5999;
  double t6015;
  double t6029;
  double t4149;
  double t4237;
  double t4270;
  double t4028;
  double t4033;
  double t4060;
  double t5677;
  double t5681;
  double t5702;
  double t5723;
  double t5728;
  double t6564;
  double t4404;
  double t4455;
  double t4523;
  double t6340;
  double t6357;
  double t6367;
  double t6374;
  double t6391;
  double t4376;
  double t4392;
  double t7135;
  double t7136;
  double t7148;
  double t7166;
  double t7170;
  double t7198;
  double t7214;
  double t4726;
  double t4728;
  double t4749;
  double t4851;
  double t4899;
  double t4900;
  t481 = Cos(var1[3]);
  t640 = Cos(var1[4]);
  t813 = Cos(var1[6]);
  t798 = Cos(var1[5]);
  t897 = Sin(var1[5]);
  t1370 = Sin(var1[4]);
  t1143 = Sin(var1[3]);
  t920 = Sin(var1[6]);
  t1745 = t481*t798*t1370;
  t1755 = t1143*t897;
  t1990 = t1745 + t1755;
  t1998 = t1990*t920;
  t2675 = -1.*t481*t798;
  t2684 = -1.*t1143*t1370*t897;
  t2685 = t2675 + t2684;
  t3073 = t798*t1143*t1370;
  t3085 = -1.*t481*t897;
  t3089 = t3073 + t3085;
  t3107 = t3089*t920;
  t2263 = -1.*t798*t1143;
  t2268 = t481*t1370*t897;
  t2310 = t2263 + t2268;
  t3626 = t640*t813*t897;
  t3642 = t640*t798*t920;
  t3654 = t3626 + t3642;
  t1227 = t798*t1143;
  t1405 = -1.*t481*t1370*t897;
  t1666 = t1227 + t1405;
  t3898 = t813*t1990;
  t3924 = Sin(var1[7]);
  t2375 = t813*t2310;
  t2513 = t2375 + t1998;
  t4023 = Cos(var1[7]);
  t2568 = -1.*t798*t1143*t1370;
  t2618 = t481*t897;
  t2647 = t2568 + t2618;
  t2721 = t2685*t920;
  t4323 = t813*t3089;
  t3151 = t481*t798;
  t3157 = t1143*t1370*t897;
  t3233 = t3151 + t3157;
  t3325 = t813*t3233;
  t3470 = t3325 + t3107;
  t4659 = t640*t798*t813;
  t4698 = -1.*t640*t897*t920;
  t4704 = t4659 + t4698;
  t3912 = t1666*t920;
  t3913 = t3898 + t3912;
  t3967 = -1.*t2310*t920;
  t3970 = t3898 + t3967;
  t4154 = t813*t2685;
  t4155 = t2647*t920;
  t4165 = t4154 + t4155;
  t4380 = -1.*t640*t1143*t3924;
  t4101 = t481*t640*t813*t897;
  t4107 = t481*t640*t798*t920;
  t4118 = t4101 + t4107;
  t4569 = t481*t640*t4023;
  t4571 = t2513*t3924;
  t4617 = t4569 + t4571;
  t4333 = t4323 + t2721;
  t4370 = -1.*t3233*t920;
  t4372 = t4323 + t4370;
  t4428 = t640*t813*t1143*t897;
  t4448 = t640*t798*t1143*t920;
  t4449 = t4428 + t4448;
  t4856 = -1.*t813*t1370*t897;
  t4864 = -1.*t798*t1370*t920;
  t4866 = t4856 + t4864;
  t5367 = -1.*t813;
  t5371 = 1. + t5367;
  t5445 = 0.07996*t920;
  t5529 = -1.*t1990*t920;
  t5557 = -1.*t4023;
  t5563 = 1. + t5557;
  t5565 = 0.135*t5563;
  t5567 = 0.08055*t3924;
  t5579 = 0. + t5565 + t5567;
  t5379 = 0.07996*t5371;
  t5421 = -0.135*t920;
  t5423 = 0. + t5379 + t5421;
  t5437 = 0.135*t5371;
  t5486 = 0. + t5437 + t5445;
  t4086 = -1.*t481*t4023*t1370;
  t4132 = t4118*t3924;
  t4144 = t4086 + t4132;
  t5999 = -0.08055*t5563;
  t6015 = 0.135*t3924;
  t6029 = 0. + t5999 + t6015;
  t4149 = -1.*t640*t4023*t1143;
  t4237 = t4165*t3924;
  t4270 = t4149 + t4237;
  t4028 = t4023*t2513;
  t4033 = -1.*t481*t640*t3924;
  t4060 = t4028 + t4033;
  t5677 = -0.135*t813;
  t5681 = t5677 + t5445;
  t5702 = 0.07996*t813;
  t5723 = 0.135*t920;
  t5728 = t5702 + t5723;
  t6564 = -1.*t3089*t920;
  t4404 = -1.*t4023*t1143*t1370;
  t4455 = t4449*t3924;
  t4523 = t4404 + t4455;
  t6340 = 0.135*t4023;
  t6357 = -0.08055*t3924;
  t6367 = t6340 + t6357;
  t6374 = 0.08055*t4023;
  t6391 = t6374 + t6015;
  t4376 = t4023*t3470;
  t4392 = t4376 + t4380;
  t7135 = -1.*t640*t813*t897;
  t7136 = -1.*t640*t798*t920;
  t7148 = t7135 + t7136;
  t7166 = 0.04566*t7148;
  t7170 = 0.135*t4023*t4704;
  t7198 = t4704*t5579;
  t7214 = -0.08055*t4704*t3924;
  t4726 = t4023*t3654;
  t4728 = t1370*t3924;
  t4749 = t4726 + t4728;
  t4851 = -1.*t640*t4023;
  t4899 = t4866*t3924;
  t4900 = t4851 + t4899;
  p_output1[0]=(t2721 - 1.*t2647*t813)*var2[3] + (-1.*t481*t640*t798*t813 + t481*t640*t897*t920)*var2[4] + (t1998 - 1.*t1666*t813)*var2[5] + t2513*var2[6];
  p_output1[1]=(-1.*t1990*t813 + t2310*t920)*var2[3] + (-1.*t1143*t640*t798*t813 + t1143*t640*t897*t920)*var2[4] + (t3107 - 1.*t2685*t813)*var2[5] + t3470*var2[6];
  p_output1[2]=(t1370*t798*t813 - 1.*t1370*t897*t920)*var2[4] + t3654*var2[5] + t3654*var2[6];
  p_output1[3]=0;
  p_output1[4]=t4270*var2[3] + t4144*var2[4] + t3913*t3924*var2[5] + t3924*t3970*var2[6] + t4060*var2[7];
  p_output1[5]=t4617*var2[3] + t4523*var2[4] + t3924*t4333*var2[5] + t3924*t4372*var2[6] + t4392*var2[7];
  p_output1[6]=t4900*var2[4] + t3924*t4704*var2[5] + t3924*t4704*var2[6] + t4749*var2[7];
  p_output1[7]=0;
  p_output1[8]=(-1.*t4023*t4165 + t4380)*var2[3] + (-1.*t4023*t4118 - 1.*t1370*t3924*t481)*var2[4] - 1.*t3913*t4023*var2[5] - 1.*t3970*t4023*var2[6] + t4617*var2[7];
  p_output1[9]=(-1.*t2513*t4023 + t3924*t481*t640)*var2[3] + (-1.*t1143*t1370*t3924 - 1.*t4023*t4449)*var2[4] - 1.*t4023*t4333*var2[5] - 1.*t4023*t4372*var2[6] + (t3470*t3924 + t1143*t4023*t640)*var2[7];
  p_output1[10]=(-1.*t4023*t4866 - 1.*t3924*t640)*var2[4] - 1.*t4023*t4704*var2[5] - 1.*t4023*t4704*var2[6] + (t3654*t3924 - 1.*t1370*t4023)*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t4270 + t2647*t5423 + t2685*t5486 + t4165*t5579 - 1.*t1143*t6029*t640 + 0.135*(t4023*t4165 + t1143*t3924*t640) + 0.04566*(t2647*t813 - 1.*t2685*t920))*var2[3] + (-0.08055*t4144 + 0.135*(t4023*t4118 + t1370*t3924*t481) + t4118*t5579 - 1.*t1370*t481*t6029 + t481*t5423*t640*t798 + t481*t5486*t640*t897 + 0.04566*(t481*t640*t798*t813 - 1.*t481*t640*t897*t920))*var2[4] + (-0.08055*t3913*t3924 + 0.135*t3913*t4023 + t1666*t5423 + t1990*t5486 + t3913*t5579 + 0.04566*(t5529 + t1666*t813))*var2[5] + (-0.08055*t3924*t3970 + 0.135*t3970*t4023 + t3970*t5579 + t1990*t5681 + t2310*t5728 + 0.04566*(t5529 - 1.*t2310*t813))*var2[6] + (-0.08055*t4060 + t2513*t6391 + t481*t6367*t640 + 0.135*(-1.*t2513*t3924 - 1.*t4023*t481*t640))*var2[7];
  p_output1[13]=var2[1] + (0.04566*t3970 + 0.135*t4060 - 0.08055*t4617 + t1990*t5423 + t2310*t5486 + t2513*t5579 + t481*t6029*t640)*var2[3] + (0.135*(t1143*t1370*t3924 + t4023*t4449) - 0.08055*t4523 + t4449*t5579 - 1.*t1143*t1370*t6029 + t1143*t5423*t640*t798 + t1143*t5486*t640*t897 + 0.04566*(t1143*t640*t798*t813 - 1.*t1143*t640*t897*t920))*var2[4] + (-0.08055*t3924*t4333 + 0.135*t4023*t4333 + t2685*t5423 + t3089*t5486 + t4333*t5579 + 0.04566*(t4154 + t6564))*var2[5] + (-0.08055*t3924*t4372 + 0.135*t4023*t4372 + t4372*t5579 + t3089*t5681 + t3233*t5728 + 0.04566*(t6564 - 1.*t3233*t813))*var2[6] + (0.135*(-1.*t3470*t3924 + t4149) - 0.08055*t4392 + t3470*t6391 + t1143*t6367*t640)*var2[7];
  p_output1[14]=var2[2] + (-0.08055*t4900 + t4866*t5579 - 1.*t6029*t640 + 0.135*(t4023*t4866 + t3924*t640) - 1.*t1370*t5423*t798 - 1.*t1370*t5486*t897 + 0.04566*(-1.*t1370*t798*t813 + t1370*t897*t920))*var2[4] + (t7166 + t7170 + t7198 + t7214 + t5486*t640*t798 - 1.*t5423*t640*t897)*var2[5] + (t7166 + t7170 + t7198 + t7214 + t5681*t640*t798 + t5728*t640*t897)*var2[6] + (0.135*(-1.*t3654*t3924 + t1370*t4023) - 0.08055*t4749 - 1.*t1370*t6367 + t3654*t6391)*var2[7];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_LeftHip_mex.hh"

namespace SymExpression
{

void dT_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
