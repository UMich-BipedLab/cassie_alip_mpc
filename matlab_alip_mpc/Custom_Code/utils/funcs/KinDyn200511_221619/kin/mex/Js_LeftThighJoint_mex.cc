/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:04 GMT-04:00
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
  double t9;
  double t35;
  double t104;
  double t153;
  double t105;
  double t174;
  double t297;
  double t309;
  double t203;
  double t208;
  double t229;
  double t282;
  double t291;
  double t294;
  double t295;
  double t467;
  double t475;
  double t482;
  double t492;
  double t497;
  double t500;
  double t549;
  double t550;
  double t551;
  double t573;
  double t379;
  double t431;
  double t451;
  double t308;
  double t313;
  double t325;
  double t571;
  double t577;
  double t587;
  double t614;
  double t623;
  double t644;
  double t5;
  double t726;
  double t727;
  double t740;
  double t1178;
  double t1184;
  double t1191;
  double t1062;
  double t1065;
  double t1079;
  double t903;
  double t923;
  double t948;
  double t1252;
  double t1265;
  double t1266;
  double t1372;
  double t1376;
  double t1378;
  double t1389;
  double t1130;
  double t1139;
  double t1146;
  double t605;
  double t677;
  double t1386;
  double t1395;
  double t1406;
  double t1411;
  double t1417;
  double t1427;
  double t800;
  double t816;
  double t848;
  double t1161;
  double t1167;
  double t1121;
  double t1124;
  double t1541;
  double t1557;
  double t1587;
  double t1272;
  double t1277;
  double t1281;
  double t1737;
  double t1742;
  double t1753;
  double t1310;
  double t1328;
  double t1451;
  double t1471;
  double t1500;
  t9 = Cos(var1[3]);
  t35 = Sin(var1[3]);
  t104 = Cos(var1[4]);
  t153 = Sin(var1[4]);
  t105 = -1.*var1[2]*t104*t35;
  t174 = -1.*var1[1]*t153;
  t297 = Cos(var1[5]);
  t309 = Sin(var1[5]);
  t203 = var1[2]*t9*t104;
  t208 = var1[0]*t153;
  t229 = -1.*var1[1]*t9*t104;
  t282 = var1[0]*t104*t35;
  t291 = t9*t104;
  t294 = t104*t35;
  t295 = -1.*t153;
  t467 = t297*t35*t153;
  t475 = -1.*t9*t309;
  t482 = t467 + t475;
  t492 = t9*t297;
  t497 = t35*t153*t309;
  t500 = t492 + t497;
  t549 = Cos(var1[6]);
  t550 = -1.*t549;
  t551 = 1. + t550;
  t573 = Sin(var1[6]);
  t379 = -1.*t297*t35;
  t431 = t9*t153*t309;
  t451 = t379 + t431;
  t308 = t9*t297*t153;
  t313 = t35*t309;
  t325 = t308 + t313;
  t571 = 0.07996*t551;
  t577 = -0.135*t573;
  t587 = 0. + t571 + t577;
  t614 = 0.135*t551;
  t623 = 0.07996*t573;
  t644 = 0. + t614 + t623;
  t5 = -1.*var1[0];
  t726 = t104*t297*t549;
  t727 = -1.*t104*t309*t573;
  t740 = t726 + t727;
  t1178 = t549*t325;
  t1184 = -1.*t451*t573;
  t1191 = t1178 + t1184;
  t1062 = t549*t482;
  t1065 = -1.*t500*t573;
  t1079 = t1062 + t1065;
  t903 = -1.*var1[2];
  t923 = -1.*t104*t297*t587;
  t948 = -1.*t104*t309*t644;
  t1252 = t104*t549*t309;
  t1265 = t104*t297*t573;
  t1266 = t1252 + t1265;
  t1372 = Cos(var1[7]);
  t1376 = -1.*t1372;
  t1378 = 1. + t1376;
  t1389 = Sin(var1[7]);
  t1130 = t549*t500;
  t1139 = t482*t573;
  t1146 = t1130 + t1139;
  t605 = t482*t587;
  t677 = t500*t644;
  t1386 = 0.135*t1378;
  t1395 = 0.08055*t1389;
  t1406 = 0. + t1386 + t1395;
  t1411 = -0.08055*t1378;
  t1417 = 0.135*t1389;
  t1427 = 0. + t1411 + t1417;
  t800 = t549*t451;
  t816 = t325*t573;
  t848 = t800 + t816;
  t1161 = t104*t297*t587;
  t1167 = t104*t309*t644;
  t1121 = -1.*t325*t587;
  t1124 = -1.*t451*t644;
  t1541 = t1372*t1266;
  t1557 = t153*t1389;
  t1587 = t1541 + t1557;
  t1272 = -1.*var1[1];
  t1277 = -1.*t482*t587;
  t1281 = -1.*t500*t644;
  t1737 = t1372*t848;
  t1742 = -1.*t9*t104*t1389;
  t1753 = t1737 + t1742;
  t1310 = t325*t587;
  t1328 = t451*t644;
  t1451 = t1372*t1146;
  t1471 = -1.*t104*t35*t1389;
  t1500 = t1451 + t1471;
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
  p_output1[19]=t5;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t9*var1[2];
  p_output1[25]=-1.*t35*var1[2];
  p_output1[26]=t9*var1[0] + t35*var1[1];
  p_output1[27]=-1.*t35;
  p_output1[28]=t9;
  p_output1[29]=0;
  p_output1[30]=t105 + t174;
  p_output1[31]=t203 + t208;
  p_output1[32]=t229 + t282;
  p_output1[33]=t291;
  p_output1[34]=t294;
  p_output1[35]=t295;
  p_output1[36]=t105 + t174 - 0.135*t325 + 0.07996*t451;
  p_output1[37]=t203 + t208 - 0.135*t482 + 0.07996*t500;
  p_output1[38]=t229 + t282 - 0.135*t104*t297 + 0.07996*t104*t309;
  p_output1[39]=0. + t291;
  p_output1[40]=0. + t294;
  p_output1[41]=0. + t295;
  p_output1[42]=0.08055*t848 + 0.135*t104*t9 + t1079*(0. + t903 + t923 + t948) + t740*(0. + t605 + t677 + var1[1]);
  p_output1[43]=0.08055*t1146 + 0.135*t104*t35 + (0. + t1121 + t1124 + t5)*t740 + t1191*(0. + t1161 + t1167 + var1[2]);
  p_output1[44]=0.08055*t1266 + t1191*(0. + t1272 + t1277 + t1281) - 0.135*t153 + t1079*(0. + t1310 + t1328 + var1[0]);
  p_output1[45]=0. + t1178 + t1184;
  p_output1[46]=0. + t1062 + t1065;
  p_output1[47]=0. + t726 + t727;
  p_output1[48]=0.08055*t1191 - 0.01004*(t1389*t848 + t104*t1372*t9) - 1.*t1500*(0. - 1.*t1266*t1406 + t1427*t153 + t903 + t923 + t948) - 1.*t1587*(0. + t1146*t1406 + t104*t1427*t35 + t605 + t677 + var1[1]);
  p_output1[49]=0.08055*t1079 - 0.01004*(t1146*t1389 + t104*t1372*t35) - 1.*t1587*(0. + t1121 + t1124 + t5 - 1.*t1406*t848 - 1.*t104*t1427*t9) - 1.*t1753*(0. + t1161 + t1167 + t1266*t1406 - 1.*t1427*t153 + var1[2]);
  p_output1[50]=-0.01004*(t1266*t1389 - 1.*t1372*t153) - 1.*t1753*(0. + t1272 + t1277 + t1281 - 1.*t1146*t1406 - 1.*t104*t1427*t35) + 0.08055*t740 - 1.*t1500*(0. + t1310 + t1328 + t1406*t848 + t104*t1427*t9 + var1[0]);
  p_output1[51]=0. - 1.*t1372*t848 + t104*t1389*t9;
  p_output1[52]=0. - 1.*t1146*t1372 + t104*t1389*t35;
  p_output1[53]=0. - 1.*t1266*t1372 - 1.*t1389*t153;
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

#include "Js_LeftThighJoint_mex.hh"

namespace SymExpression
{

void Js_LeftThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
