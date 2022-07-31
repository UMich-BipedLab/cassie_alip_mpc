/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:56 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t31;
  double t80;
  double t284;
  double t314;
  double t311;
  double t322;
  double t588;
  double t659;
  double t339;
  double t362;
  double t410;
  double t421;
  double t468;
  double t523;
  double t566;
  double t608;
  double t692;
  double t712;
  double t725;
  double t749;
  double t777;
  double t1034;
  double t953;
  double t803;
  double t806;
  double t835;
  double t1060;
  double t1078;
  double t855;
  double t873;
  double t900;
  double t1095;
  double t1109;
  double t1115;
  double t1130;
  double t1131;
  double t1135;
  double t1055;
  double t1056;
  double t1059;
  double t12;
  double t1386;
  double t1398;
  double t1444;
  double t1194;
  double t1201;
  double t1227;
  t31 = Cos(var1[3]);
  t80 = Sin(var1[3]);
  t284 = Cos(var1[4]);
  t314 = Sin(var1[4]);
  t311 = -1.*var1[2]*t284*t80;
  t322 = -1.*var1[1]*t314;
  t588 = Cos(var1[5]);
  t659 = Sin(var1[5]);
  t339 = var1[2]*t31*t284;
  t362 = var1[0]*t314;
  t410 = -1.*var1[1]*t31*t284;
  t421 = var1[0]*t284*t80;
  t468 = t31*t284;
  t523 = t284*t80;
  t566 = -1.*t314;
  t608 = t31*t588*t314;
  t692 = t80*t659;
  t712 = t608 + t692;
  t725 = -1.*t588*t80;
  t749 = t31*t314*t659;
  t777 = t725 + t749;
  t1034 = Cos(var1[13]);
  t953 = Sin(var1[13]);
  t803 = t588*t80*t314;
  t806 = -1.*t31*t659;
  t835 = t803 + t806;
  t1060 = -1.*t1034;
  t1078 = 1. + t1060;
  t855 = t31*t588;
  t873 = t80*t314*t659;
  t900 = t855 + t873;
  t1095 = 0.07996*t1078;
  t1109 = 0.135*t953;
  t1115 = 0. + t1095 + t1109;
  t1130 = -0.135*t1078;
  t1131 = 0.07996*t953;
  t1135 = 0. + t1130 + t1131;
  t1055 = t1034*t284*t588;
  t1056 = -1.*t284*t953*t659;
  t1059 = t1055 + t1056;
  t12 = -1.*var1[0];
  t1386 = t1034*t712;
  t1398 = -1.*t953*t777;
  t1444 = t1386 + t1398;
  t1194 = t1034*t835;
  t1201 = -1.*t953*t900;
  t1227 = t1194 + t1201;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t12;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t31*var1[2];
  p_output1[25]=-1.*t80*var1[2];
  p_output1[26]=t31*var1[0] + t80*var1[1];
  p_output1[27]=-1.*t80;
  p_output1[28]=t31;
  p_output1[29]=0;
  p_output1[30]=t311 + t322;
  p_output1[31]=t339 + t362;
  p_output1[32]=t410 + t421;
  p_output1[33]=t468;
  p_output1[34]=t523;
  p_output1[35]=t566;
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
  p_output1[78]=t311 + t322 + 0.135*t712 + 0.07996*t777;
  p_output1[79]=t339 + t362 + 0.135*t835 + 0.07996*t900;
  p_output1[80]=t410 + t421 + 0.135*t284*t588 + 0.07996*t284*t659;
  p_output1[81]=0. + t468;
  p_output1[82]=0. + t523;
  p_output1[83]=0. + t566;
  p_output1[84]=-0.135*t284*t31 + 0.08055*(t1034*t777 + t712*t953) + t1059*(0. + t1115*t835 + t1135*t900 + var1[1]) + t1227*(0. - 1.*t1115*t284*t588 - 1.*t1135*t284*t659 - 1.*var1[2]);
  p_output1[85]=t1059*(0. + t12 - 1.*t1115*t712 - 1.*t1135*t777) - 0.135*t284*t80 + 0.08055*(t1034*t900 + t835*t953) + t1444*(0. + t1115*t284*t588 + t1135*t284*t659 + var1[2]);
  p_output1[86]=0.135*t314 + 0.08055*(t1034*t284*t659 + t284*t588*t953) + t1227*(0. + t1115*t712 + t1135*t777 + var1[0]) + t1444*(0. - 1.*t1115*t835 - 1.*t1135*t900 - 1.*var1[1]);
  p_output1[87]=0. + t1386 + t1398;
  p_output1[88]=0. + t1194 + t1201;
  p_output1[89]=0. + t1055 + t1056;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_RightHip_mex.hh"

namespace SymExpression
{

void Js_RightHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
