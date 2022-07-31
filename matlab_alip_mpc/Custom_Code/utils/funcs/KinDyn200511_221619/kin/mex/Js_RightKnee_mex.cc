/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:59 GMT-04:00
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
  double t103;
  double t164;
  double t278;
  double t328;
  double t286;
  double t368;
  double t527;
  double t565;
  double t384;
  double t387;
  double t414;
  double t417;
  double t435;
  double t512;
  double t521;
  double t544;
  double t573;
  double t575;
  double t619;
  double t626;
  double t630;
  double t815;
  double t809;
  double t650;
  double t651;
  double t652;
  double t921;
  double t927;
  double t675;
  double t693;
  double t728;
  double t935;
  double t940;
  double t942;
  double t955;
  double t967;
  double t969;
  double t864;
  double t874;
  double t917;
  double t70;
  double t1131;
  double t1142;
  double t1146;
  double t1031;
  double t1033;
  double t1036;
  double t812;
  double t831;
  double t842;
  double t987;
  double t988;
  double t1364;
  double t1374;
  double t993;
  double t1399;
  double t1405;
  double t1182;
  double t1185;
  double t1201;
  double t1153;
  double t1156;
  double t1162;
  double t1409;
  double t1427;
  double t1430;
  double t950;
  double t973;
  double t1466;
  double t1467;
  double t1474;
  double t1093;
  double t1105;
  double t1529;
  double t1541;
  double t1553;
  double t1068;
  double t1074;
  double t1282;
  double t1294;
  double t1493;
  double t1494;
  double t1518;
  double t1659;
  double t1660;
  double t1664;
  double t1209;
  double t1212;
  double t1227;
  double t1455;
  double t1486;
  double t1993;
  double t1996;
  double t2012;
  double t2031;
  double t1790;
  double t1793;
  double t1805;
  double t1369;
  double t1382;
  double t1386;
  double t1567;
  double t1572;
  double t2013;
  double t2038;
  double t2039;
  double t2054;
  double t2064;
  double t2088;
  double t1744;
  double t1745;
  double t1751;
  double t1605;
  double t1641;
  double t1693;
  double t1700;
  double t1811;
  double t1812;
  double t1828;
  double t1855;
  double t1892;
  double t1893;
  double t1941;
  double t1953;
  double t1954;
  double t1964;
  double t1965;
  double t1966;
  double t1987;
  t103 = Cos(var1[3]);
  t164 = Sin(var1[3]);
  t278 = Cos(var1[4]);
  t328 = Sin(var1[4]);
  t286 = -1.*var1[2]*t278*t164;
  t368 = -1.*var1[1]*t328;
  t527 = Cos(var1[5]);
  t565 = Sin(var1[5]);
  t384 = var1[2]*t103*t278;
  t387 = var1[0]*t328;
  t414 = -1.*var1[1]*t103*t278;
  t417 = var1[0]*t278*t164;
  t435 = t103*t278;
  t512 = t278*t164;
  t521 = -1.*t328;
  t544 = t103*t527*t328;
  t573 = t164*t565;
  t575 = t544 + t573;
  t619 = -1.*t527*t164;
  t626 = t103*t328*t565;
  t630 = t619 + t626;
  t815 = Cos(var1[13]);
  t809 = Sin(var1[13]);
  t650 = t527*t164*t328;
  t651 = -1.*t103*t565;
  t652 = t650 + t651;
  t921 = -1.*t815;
  t927 = 1. + t921;
  t675 = t103*t527;
  t693 = t164*t328*t565;
  t728 = t675 + t693;
  t935 = 0.07996*t927;
  t940 = 0.135*t809;
  t942 = 0. + t935 + t940;
  t955 = -0.135*t927;
  t967 = 0.07996*t809;
  t969 = 0. + t955 + t967;
  t864 = t815*t278*t527;
  t874 = -1.*t278*t809*t565;
  t917 = t864 + t874;
  t70 = -1.*var1[0];
  t1131 = t815*t575;
  t1142 = -1.*t809*t630;
  t1146 = t1131 + t1142;
  t1031 = t815*t652;
  t1033 = -1.*t809*t728;
  t1036 = t1031 + t1033;
  t812 = t809*t575;
  t831 = t815*t630;
  t842 = t812 + t831;
  t987 = -1.*var1[2];
  t988 = -1.*t278*t527*t942;
  t1364 = Cos(var1[14]);
  t1374 = Sin(var1[14]);
  t993 = -1.*t278*t969*t565;
  t1399 = -1.*t1364;
  t1405 = 1. + t1399;
  t1182 = t278*t527*t809;
  t1185 = t815*t278*t565;
  t1201 = t1182 + t1185;
  t1153 = t809*t652;
  t1156 = t815*t728;
  t1162 = t1153 + t1156;
  t1409 = -0.08055*t1405;
  t1427 = -0.135*t1374;
  t1430 = 0. + t1409 + t1427;
  t950 = t942*t652;
  t973 = t969*t728;
  t1466 = -0.135*t1405;
  t1467 = 0.08055*t1374;
  t1474 = 0. + t1466 + t1467;
  t1093 = t278*t527*t942;
  t1105 = t278*t969*t565;
  t1529 = t1374*t328;
  t1541 = t1364*t1201;
  t1553 = t1529 + t1541;
  t1068 = -1.*t942*t575;
  t1074 = -1.*t969*t630;
  t1282 = t942*t575;
  t1294 = t969*t630;
  t1493 = -1.*t278*t1374*t164;
  t1494 = t1364*t1162;
  t1518 = t1493 + t1494;
  t1659 = -1.*t103*t278*t1374;
  t1660 = t1364*t842;
  t1664 = t1659 + t1660;
  t1209 = -1.*var1[1];
  t1212 = -1.*t942*t652;
  t1227 = -1.*t969*t728;
  t1455 = t1430*t328;
  t1486 = -1.*t1474*t1201;
  t1993 = Cos(var1[15]);
  t1996 = -1.*t1993;
  t2012 = 1. + t1996;
  t2031 = Sin(var1[15]);
  t1790 = -1.*t1364*t328;
  t1793 = t1374*t1201;
  t1805 = t1790 + t1793;
  t1369 = t1364*t103*t278;
  t1382 = t1374*t842;
  t1386 = t1369 + t1382;
  t1567 = t278*t1430*t164;
  t1572 = t1474*t1162;
  t2013 = -0.01004*t2012;
  t2038 = 0.08055*t2031;
  t2039 = 0. + t2013 + t2038;
  t2054 = -0.08055*t2012;
  t2064 = -0.01004*t2031;
  t2088 = 0. + t2054 + t2064;
  t1744 = t1364*t278*t164;
  t1745 = t1374*t1162;
  t1751 = t1744 + t1745;
  t1605 = -1.*t1430*t328;
  t1641 = t1474*t1201;
  t1693 = -1.*t103*t278*t1430;
  t1700 = -1.*t1474*t842;
  t1811 = t103*t278*t1430;
  t1812 = t1474*t842;
  t1828 = -1.*t278*t1430*t164;
  t1855 = -1.*t1474*t1162;
  t1892 = t103*t278*t1374;
  t1893 = -1.*t1364*t842;
  t1941 = 0. + t1892 + t1893;
  t1953 = t278*t1374*t164;
  t1954 = -1.*t1364*t1162;
  t1964 = 0. + t1953 + t1954;
  t1965 = -1.*t1374*t328;
  t1966 = -1.*t1364*t1201;
  t1987 = 0. + t1965 + t1966;
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
  p_output1[19]=t70;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t103*var1[2];
  p_output1[25]=-1.*t164*var1[2];
  p_output1[26]=t103*var1[0] + t164*var1[1];
  p_output1[27]=-1.*t164;
  p_output1[28]=t103;
  p_output1[29]=0;
  p_output1[30]=t286 + t368;
  p_output1[31]=t384 + t387;
  p_output1[32]=t414 + t417;
  p_output1[33]=t435;
  p_output1[34]=t512;
  p_output1[35]=t521;
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
  p_output1[78]=t286 + t368 + 0.135*t575 + 0.07996*t630;
  p_output1[79]=t384 + t387 + 0.135*t652 + 0.07996*t728;
  p_output1[80]=t414 + t417 + 0.135*t278*t527 + 0.07996*t278*t565;
  p_output1[81]=0. + t435;
  p_output1[82]=0. + t512;
  p_output1[83]=0. + t521;
  p_output1[84]=-0.135*t103*t278 + 0.08055*t842 + t1036*(0. + t987 + t988 + t993) + t917*(0. + t950 + t973 + var1[1]);
  p_output1[85]=0.08055*t1162 - 0.135*t164*t278 + (0. + t1068 + t1074 + t70)*t917 + t1146*(0. + t1093 + t1105 + var1[2]);
  p_output1[86]=0.08055*t1201 + t1146*(0. + t1209 + t1212 + t1227) + 0.135*t328 + t1036*(0. + t1282 + t1294 + var1[0]);
  p_output1[87]=0. + t1131 + t1142;
  p_output1[88]=0. + t1031 + t1033;
  p_output1[89]=0. + t864 + t874;
  p_output1[90]=0.08055*t1146 - 0.01004*t1386 - 1.*t1518*(0. + t1455 + t1486 + t987 + t988 + t993) - 1.*t1553*(0. + t1567 + t1572 + t950 + t973 + var1[1]);
  p_output1[91]=0.08055*t1036 - 0.01004*t1751 - 1.*t1553*(0. + t1068 + t1074 + t1693 + t1700 + t70) - 1.*t1664*(0. + t1093 + t1105 + t1605 + t1641 + var1[2]);
  p_output1[92]=-0.01004*t1805 - 1.*t1664*(0. + t1209 + t1212 + t1227 + t1828 + t1855) + 0.08055*t917 - 1.*t1518*(0. + t1282 + t1294 + t1811 + t1812 + var1[0]);
  p_output1[93]=t1941;
  p_output1[94]=t1964;
  p_output1[95]=t1987;
  p_output1[96]=-0.13004*(t1386*t1993 + t1146*t2031) + 0.08055*(t1146*t1993 - 1.*t1386*t2031) - 1.*t1518*(0. + t1455 + t1486 - 1.*t1805*t2088 - 1.*t2039*t917 + t987 + t988 + t993) - 1.*t1553*(0. + t1567 + t1572 + t1036*t2039 + t1751*t2088 + t950 + t973 + var1[1]);
  p_output1[97]=-0.13004*(t1751*t1993 + t1036*t2031) + 0.08055*(t1036*t1993 - 1.*t1751*t2031) - 1.*t1553*(0. + t1068 + t1074 + t1693 + t1700 - 1.*t1146*t2039 - 1.*t1386*t2088 + t70) - 1.*t1664*(0. + t1093 + t1105 + t1605 + t1641 + t1805*t2088 + t2039*t917 + var1[2]);
  p_output1[98]=-1.*t1664*(0. + t1209 + t1212 + t1227 + t1828 + t1855 - 1.*t1036*t2039 - 1.*t1751*t2088) + 0.08055*(-1.*t1805*t2031 + t1993*t917) - 0.13004*(t1805*t1993 + t2031*t917) - 1.*t1518*(0. + t1282 + t1294 + t1811 + t1812 + t1146*t2039 + t1386*t2088 + var1[0]);
  p_output1[99]=t1941;
  p_output1[100]=t1964;
  p_output1[101]=t1987;
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

#include "Js_RightKnee_mex.hh"

namespace SymExpression
{

void Js_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
