/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:22 GMT-04:00
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
  double t175;
  double t422;
  double t531;
  double t476;
  double t561;
  double t349;
  double t678;
  double t682;
  double t718;
  double t518;
  double t605;
  double t629;
  double t725;
  double t174;
  double t820;
  double t844;
  double t874;
  double t245;
  double t281;
  double t328;
  double t656;
  double t754;
  double t764;
  double t790;
  double t796;
  double t815;
  double t893;
  double t972;
  double t817;
  double t910;
  double t936;
  double t118;
  double t973;
  double t981;
  double t986;
  double t1053;
  double t944;
  double t1014;
  double t1038;
  double t67;
  double t1067;
  double t1070;
  double t1077;
  double t24;
  double t1175;
  double t1190;
  double t1195;
  double t1153;
  double t1155;
  double t1160;
  double t1289;
  double t1300;
  double t1318;
  double t1141;
  double t1167;
  double t1197;
  double t1234;
  double t1254;
  double t1263;
  double t1270;
  double t1320;
  double t1325;
  double t1381;
  double t1392;
  double t1396;
  double t1097;
  double t1347;
  double t1416;
  double t1425;
  double t1442;
  double t1450;
  double t1464;
  double t1615;
  double t1631;
  double t1643;
  double t1565;
  double t1574;
  double t1588;
  double t1589;
  double t1590;
  double t1607;
  double t1608;
  double t1655;
  double t1661;
  double t1665;
  double t1678;
  double t1684;
  double t1663;
  double t1690;
  double t1720;
  double t1763;
  double t1764;
  double t1777;
  double t1052;
  double t1080;
  double t1082;
  double t1102;
  double t1104;
  double t1129;
  double t1430;
  double t1487;
  double t1504;
  double t1512;
  double t1514;
  double t1529;
  double t1731;
  double t1781;
  double t1786;
  double t1794;
  double t1798;
  double t1806;
  t175 = Cos(var1[3]);
  t422 = Cos(var1[5]);
  t531 = Sin(var1[4]);
  t476 = Sin(var1[3]);
  t561 = Sin(var1[5]);
  t349 = Cos(var1[6]);
  t678 = t175*t422*t531;
  t682 = t476*t561;
  t718 = t678 + t682;
  t518 = -1.*t422*t476;
  t605 = t175*t531*t561;
  t629 = t518 + t605;
  t725 = Sin(var1[6]);
  t174 = Cos(var1[8]);
  t820 = t349*t718;
  t844 = -1.*t629*t725;
  t874 = t820 + t844;
  t245 = Cos(var1[4]);
  t281 = Cos(var1[7]);
  t328 = t175*t245*t281;
  t656 = t349*t629;
  t754 = t718*t725;
  t764 = t656 + t754;
  t790 = Sin(var1[7]);
  t796 = t764*t790;
  t815 = t328 + t796;
  t893 = Sin(var1[8]);
  t972 = Cos(var1[9]);
  t817 = t174*t815;
  t910 = t874*t893;
  t936 = t817 + t910;
  t118 = Sin(var1[9]);
  t973 = t174*t874;
  t981 = -1.*t815*t893;
  t986 = t973 + t981;
  t1053 = Cos(var1[10]);
  t944 = -1.*t118*t936;
  t1014 = t972*t986;
  t1038 = t944 + t1014;
  t67 = Sin(var1[10]);
  t1067 = t972*t936;
  t1070 = t118*t986;
  t1077 = t1067 + t1070;
  t24 = Sin(var1[11]);
  t1175 = t422*t476*t531;
  t1190 = -1.*t175*t561;
  t1195 = t1175 + t1190;
  t1153 = t175*t422;
  t1155 = t476*t531*t561;
  t1160 = t1153 + t1155;
  t1289 = t349*t1195;
  t1300 = -1.*t1160*t725;
  t1318 = t1289 + t1300;
  t1141 = t245*t281*t476;
  t1167 = t349*t1160;
  t1197 = t1195*t725;
  t1234 = t1167 + t1197;
  t1254 = t1234*t790;
  t1263 = t1141 + t1254;
  t1270 = t174*t1263;
  t1320 = t1318*t893;
  t1325 = t1270 + t1320;
  t1381 = t174*t1318;
  t1392 = -1.*t1263*t893;
  t1396 = t1381 + t1392;
  t1097 = Cos(var1[11]);
  t1347 = -1.*t118*t1325;
  t1416 = t972*t1396;
  t1425 = t1347 + t1416;
  t1442 = t972*t1325;
  t1450 = t118*t1396;
  t1464 = t1442 + t1450;
  t1615 = t245*t422*t349;
  t1631 = -1.*t245*t561*t725;
  t1643 = t1615 + t1631;
  t1565 = -1.*t281*t531;
  t1574 = t245*t349*t561;
  t1588 = t245*t422*t725;
  t1589 = t1574 + t1588;
  t1590 = t1589*t790;
  t1607 = t1565 + t1590;
  t1608 = t174*t1607;
  t1655 = t1643*t893;
  t1661 = t1608 + t1655;
  t1665 = t174*t1643;
  t1678 = -1.*t1607*t893;
  t1684 = t1665 + t1678;
  t1663 = -1.*t118*t1661;
  t1690 = t972*t1684;
  t1720 = t1663 + t1690;
  t1763 = t972*t1661;
  t1764 = t118*t1684;
  t1777 = t1763 + t1764;
  t1052 = t67*t1038;
  t1080 = t1053*t1077;
  t1082 = t1052 + t1080;
  t1102 = t1053*t1038;
  t1104 = -1.*t67*t1077;
  t1129 = t1102 + t1104;
  t1430 = t67*t1425;
  t1487 = t1053*t1464;
  t1504 = t1430 + t1487;
  t1512 = t1053*t1425;
  t1514 = -1.*t67*t1464;
  t1529 = t1512 + t1514;
  t1731 = t67*t1720;
  t1781 = t1053*t1777;
  t1786 = t1731 + t1781;
  t1794 = t1053*t1720;
  t1798 = -1.*t67*t1777;
  t1806 = t1794 + t1798;
  p_output1[0]=-1.*t1097*t1129 + t1082*t24;
  p_output1[1]=-1.*t1097*t1529 + t1504*t24;
  p_output1[2]=-1.*t1097*t1806 + t1786*t24;
  p_output1[3]=t1082*t1097 + t1129*t24;
  p_output1[4]=t1097*t1504 + t1529*t24;
  p_output1[5]=t1097*t1786 + t1806*t24;
  p_output1[6]=-1.*t281*t764 + t175*t245*t790;
  p_output1[7]=-1.*t1234*t281 + t245*t476*t790;
  p_output1[8]=-1.*t1589*t281 - 1.*t531*t790;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_LeftTarsus_mex.hh"

namespace SymExpression
{

void R_LeftTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
