/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:39 GMT-04:00
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
  double t74;
  double t157;
  double t248;
  double t269;
  double t262;
  double t300;
  double t409;
  double t440;
  double t314;
  double t322;
  double t349;
  double t362;
  double t380;
  double t382;
  double t406;
  double t531;
  double t555;
  double t585;
  double t599;
  double t608;
  double t612;
  double t728;
  double t731;
  double t751;
  double t791;
  double t488;
  double t495;
  double t515;
  double t424;
  double t450;
  double t462;
  double t757;
  double t804;
  double t810;
  double t851;
  double t871;
  double t922;
  double t15;
  double t942;
  double t967;
  double t968;
  double t1270;
  double t1283;
  double t1289;
  double t1049;
  double t1059;
  double t1075;
  double t1005;
  double t1022;
  double t1027;
  double t1329;
  double t1337;
  double t1343;
  double t1491;
  double t1492;
  double t1515;
  double t1524;
  double t1201;
  double t1209;
  double t1230;
  double t824;
  double t927;
  double t1523;
  double t1532;
  double t1535;
  double t1588;
  double t1589;
  double t1593;
  double t988;
  double t990;
  double t993;
  double t1243;
  double t1254;
  double t1170;
  double t1172;
  double t1734;
  double t1752;
  double t1764;
  double t1359;
  double t1377;
  double t1382;
  double t1907;
  double t1919;
  double t1959;
  double t1397;
  double t1420;
  double t1617;
  double t1622;
  double t1636;
  t74 = Cos(var1[3]);
  t157 = Sin(var1[3]);
  t248 = Cos(var1[4]);
  t269 = Sin(var1[4]);
  t262 = -1.*var1[2]*t248*t157;
  t300 = -1.*var1[1]*t269;
  t409 = Cos(var1[5]);
  t440 = Sin(var1[5]);
  t314 = var1[2]*t74*t248;
  t322 = var1[0]*t269;
  t349 = -1.*var1[1]*t74*t248;
  t362 = var1[0]*t248*t157;
  t380 = t74*t248;
  t382 = t248*t157;
  t406 = -1.*t269;
  t531 = t409*t157*t269;
  t555 = -1.*t74*t440;
  t585 = t531 + t555;
  t599 = t74*t409;
  t608 = t157*t269*t440;
  t612 = t599 + t608;
  t728 = Cos(var1[6]);
  t731 = -1.*t728;
  t751 = 1. + t731;
  t791 = Sin(var1[6]);
  t488 = -1.*t409*t157;
  t495 = t74*t269*t440;
  t515 = t488 + t495;
  t424 = t74*t409*t269;
  t450 = t157*t440;
  t462 = t424 + t450;
  t757 = 0.07996*t751;
  t804 = -0.135*t791;
  t810 = 0. + t757 + t804;
  t851 = 0.135*t751;
  t871 = 0.07996*t791;
  t922 = 0. + t851 + t871;
  t15 = -1.*var1[0];
  t942 = t248*t409*t728;
  t967 = -1.*t248*t440*t791;
  t968 = t942 + t967;
  t1270 = t728*t462;
  t1283 = -1.*t515*t791;
  t1289 = t1270 + t1283;
  t1049 = t728*t585;
  t1059 = -1.*t612*t791;
  t1075 = t1049 + t1059;
  t1005 = -1.*var1[2];
  t1022 = -1.*t248*t409*t810;
  t1027 = -1.*t248*t440*t922;
  t1329 = t248*t728*t440;
  t1337 = t248*t409*t791;
  t1343 = t1329 + t1337;
  t1491 = Cos(var1[7]);
  t1492 = -1.*t1491;
  t1515 = 1. + t1492;
  t1524 = Sin(var1[7]);
  t1201 = t728*t612;
  t1209 = t585*t791;
  t1230 = t1201 + t1209;
  t824 = t585*t810;
  t927 = t612*t922;
  t1523 = 0.135*t1515;
  t1532 = 0.08055*t1524;
  t1535 = 0. + t1523 + t1532;
  t1588 = -0.08055*t1515;
  t1589 = 0.135*t1524;
  t1593 = 0. + t1588 + t1589;
  t988 = t728*t515;
  t990 = t462*t791;
  t993 = t988 + t990;
  t1243 = t248*t409*t810;
  t1254 = t248*t440*t922;
  t1170 = -1.*t462*t810;
  t1172 = -1.*t515*t922;
  t1734 = t1491*t1343;
  t1752 = t269*t1524;
  t1764 = t1734 + t1752;
  t1359 = -1.*var1[1];
  t1377 = -1.*t585*t810;
  t1382 = -1.*t612*t922;
  t1907 = t1491*t993;
  t1919 = -1.*t74*t248*t1524;
  t1959 = t1907 + t1919;
  t1397 = t462*t810;
  t1420 = t515*t922;
  t1617 = t1491*t1230;
  t1622 = -1.*t248*t157*t1524;
  t1636 = t1617 + t1622;
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
  p_output1[19]=t15;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t74*var1[2];
  p_output1[25]=-1.*t157*var1[2];
  p_output1[26]=t74*var1[0] + t157*var1[1];
  p_output1[27]=-1.*t157;
  p_output1[28]=t74;
  p_output1[29]=0;
  p_output1[30]=t262 + t300;
  p_output1[31]=t314 + t322;
  p_output1[32]=t349 + t362;
  p_output1[33]=t380;
  p_output1[34]=t382;
  p_output1[35]=t406;
  p_output1[36]=t262 + t300 - 0.135*t462 + 0.07996*t515;
  p_output1[37]=t314 + t322 - 0.135*t585 + 0.07996*t612;
  p_output1[38]=t349 + t362 - 0.135*t248*t409 + 0.07996*t248*t440;
  p_output1[39]=0. + t380;
  p_output1[40]=0. + t382;
  p_output1[41]=0. + t406;
  p_output1[42]=(0. + t1005 + t1022 + t1027)*t1075 + 0.135*t248*t74 + 0.08055*t993 + t968*(0. + t824 + t927 + var1[1]);
  p_output1[43]=0.08055*t1230 + 0.135*t157*t248 + (0. + t1170 + t1172 + t15)*t968 + t1289*(0. + t1243 + t1254 + var1[2]);
  p_output1[44]=0.08055*t1343 + t1289*(0. + t1359 + t1377 + t1382) - 0.135*t269 + t1075*(0. + t1397 + t1420 + var1[0]);
  p_output1[45]=0. + t1270 + t1283;
  p_output1[46]=0. + t1049 + t1059;
  p_output1[47]=0. + t942 + t967;
  p_output1[48]=0.08055*t1289 - 1.*t1636*(0. + t1005 + t1022 + t1027 - 1.*t1343*t1535 + t1593*t269) - 0.01004*(t1491*t248*t74 + t1524*t993) - 1.*t1764*(0. + t1230*t1535 + t157*t1593*t248 + t824 + t927 + var1[1]);
  p_output1[49]=0.08055*t1075 - 0.01004*(t1230*t1524 + t1491*t157*t248) - 1.*t1764*(0. + t1170 + t1172 + t15 - 1.*t1593*t248*t74 - 1.*t1535*t993) - 1.*t1959*(0. + t1243 + t1254 + t1343*t1535 - 1.*t1593*t269 + var1[2]);
  p_output1[50]=-1.*t1959*(0. + t1359 + t1377 + t1382 - 1.*t1230*t1535 - 1.*t157*t1593*t248) - 0.01004*(t1343*t1524 - 1.*t1491*t269) + 0.08055*t968 - 1.*t1636*(0. + t1397 + t1420 + t1593*t248*t74 + t1535*t993 + var1[0]);
  p_output1[51]=0. + t1524*t248*t74 - 1.*t1491*t993;
  p_output1[52]=0. - 1.*t1230*t1491 + t1524*t157*t248;
  p_output1[53]=0. - 1.*t1343*t1491 - 1.*t1524*t269;
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

#include "Js_LeftThigh_mex.hh"

namespace SymExpression
{

void Js_LeftThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
