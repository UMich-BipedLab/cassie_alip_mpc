/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:42 GMT-04:00
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
  double t43;
  double t101;
  double t224;
  double t229;
  double t225;
  double t245;
  double t358;
  double t383;
  double t252;
  double t258;
  double t295;
  double t296;
  double t321;
  double t328;
  double t346;
  double t521;
  double t526;
  double t530;
  double t564;
  double t566;
  double t573;
  double t681;
  double t687;
  double t701;
  double t730;
  double t428;
  double t476;
  double t499;
  double t381;
  double t398;
  double t400;
  double t727;
  double t733;
  double t748;
  double t755;
  double t772;
  double t776;
  double t25;
  double t795;
  double t798;
  double t804;
  double t1035;
  double t1061;
  double t1070;
  double t920;
  double t922;
  double t931;
  double t883;
  double t897;
  double t901;
  double t1092;
  double t1094;
  double t1098;
  double t1278;
  double t1284;
  double t1302;
  double t1312;
  double t989;
  double t1010;
  double t1012;
  double t751;
  double t777;
  double t1308;
  double t1314;
  double t1329;
  double t1340;
  double t1366;
  double t1368;
  double t861;
  double t866;
  double t873;
  double t1016;
  double t1028;
  double t969;
  double t971;
  double t1465;
  double t1474;
  double t1490;
  double t1103;
  double t1108;
  double t1131;
  double t1631;
  double t1640;
  double t1649;
  double t1141;
  double t1151;
  double t1384;
  double t1392;
  double t1394;
  double t1332;
  double t1369;
  double t1778;
  double t1800;
  double t1801;
  double t1883;
  double t1886;
  double t1892;
  double t1931;
  double t1401;
  double t1432;
  double t1691;
  double t1693;
  double t1697;
  double t1918;
  double t1948;
  double t1949;
  double t1955;
  double t1958;
  double t1960;
  double t1501;
  double t1512;
  double t1525;
  double t1612;
  double t1615;
  double t1663;
  double t1664;
  double t1766;
  double t1767;
  double t1720;
  double t1721;
  double t1813;
  double t1816;
  double t1821;
  double t1825;
  double t1828;
  double t1835;
  double t1853;
  double t1872;
  double t1882;
  double t1954;
  double t1964;
  double t2283;
  double t2288;
  double t2289;
  double t2320;
  double t2329;
  double t2332;
  double t2339;
  double t2300;
  double t2301;
  double t2307;
  double t1981;
  double t1987;
  double t2333;
  double t2343;
  double t2346;
  double t2126;
  double t2138;
  double t2177;
  double t2356;
  double t2362;
  double t2367;
  double t2193;
  double t2203;
  double t2208;
  double t2010;
  double t2020;
  double t2029;
  double t2045;
  double t2046;
  double t2049;
  double t2069;
  double t2076;
  double t2101;
  double t2109;
  double t2249;
  double t2254;
  double t2221;
  double t2231;
  t43 = Cos(var1[3]);
  t101 = Sin(var1[3]);
  t224 = Cos(var1[4]);
  t229 = Sin(var1[4]);
  t225 = -1.*var1[2]*t224*t101;
  t245 = -1.*var1[1]*t229;
  t358 = Cos(var1[5]);
  t383 = Sin(var1[5]);
  t252 = var1[2]*t43*t224;
  t258 = var1[0]*t229;
  t295 = -1.*var1[1]*t43*t224;
  t296 = var1[0]*t224*t101;
  t321 = t43*t224;
  t328 = t224*t101;
  t346 = -1.*t229;
  t521 = t358*t101*t229;
  t526 = -1.*t43*t383;
  t530 = t521 + t526;
  t564 = t43*t358;
  t566 = t101*t229*t383;
  t573 = t564 + t566;
  t681 = Cos(var1[6]);
  t687 = -1.*t681;
  t701 = 1. + t687;
  t730 = Sin(var1[6]);
  t428 = -1.*t358*t101;
  t476 = t43*t229*t383;
  t499 = t428 + t476;
  t381 = t43*t358*t229;
  t398 = t101*t383;
  t400 = t381 + t398;
  t727 = 0.07996*t701;
  t733 = -0.135*t730;
  t748 = 0. + t727 + t733;
  t755 = 0.135*t701;
  t772 = 0.07996*t730;
  t776 = 0. + t755 + t772;
  t25 = -1.*var1[0];
  t795 = t224*t358*t681;
  t798 = -1.*t224*t383*t730;
  t804 = t795 + t798;
  t1035 = t681*t400;
  t1061 = -1.*t499*t730;
  t1070 = t1035 + t1061;
  t920 = t681*t530;
  t922 = -1.*t573*t730;
  t931 = t920 + t922;
  t883 = -1.*var1[2];
  t897 = -1.*t224*t358*t748;
  t901 = -1.*t224*t383*t776;
  t1092 = t224*t681*t383;
  t1094 = t224*t358*t730;
  t1098 = t1092 + t1094;
  t1278 = Cos(var1[7]);
  t1284 = -1.*t1278;
  t1302 = 1. + t1284;
  t1312 = Sin(var1[7]);
  t989 = t681*t573;
  t1010 = t530*t730;
  t1012 = t989 + t1010;
  t751 = t530*t748;
  t777 = t573*t776;
  t1308 = 0.135*t1302;
  t1314 = 0.08055*t1312;
  t1329 = 0. + t1308 + t1314;
  t1340 = -0.08055*t1302;
  t1366 = 0.135*t1312;
  t1368 = 0. + t1340 + t1366;
  t861 = t681*t499;
  t866 = t400*t730;
  t873 = t861 + t866;
  t1016 = t224*t358*t748;
  t1028 = t224*t383*t776;
  t969 = -1.*t400*t748;
  t971 = -1.*t499*t776;
  t1465 = t1278*t1098;
  t1474 = t229*t1312;
  t1490 = t1465 + t1474;
  t1103 = -1.*var1[1];
  t1108 = -1.*t530*t748;
  t1131 = -1.*t573*t776;
  t1631 = t1278*t873;
  t1640 = -1.*t43*t224*t1312;
  t1649 = t1631 + t1640;
  t1141 = t400*t748;
  t1151 = t499*t776;
  t1384 = t1278*t1012;
  t1392 = -1.*t224*t101*t1312;
  t1394 = t1384 + t1392;
  t1332 = -1.*t1098*t1329;
  t1369 = t229*t1368;
  t1778 = -1.*t1278*t229;
  t1800 = t1098*t1312;
  t1801 = t1778 + t1800;
  t1883 = Cos(var1[8]);
  t1886 = -1.*t1883;
  t1892 = 1. + t1886;
  t1931 = Sin(var1[8]);
  t1401 = t1012*t1329;
  t1432 = t224*t101*t1368;
  t1691 = t224*t1278*t101;
  t1693 = t1012*t1312;
  t1697 = t1691 + t1693;
  t1918 = -0.08055*t1892;
  t1948 = -0.01004*t1931;
  t1949 = 0. + t1918 + t1948;
  t1955 = -0.01004*t1892;
  t1958 = 0.08055*t1931;
  t1960 = 0. + t1955 + t1958;
  t1501 = t43*t224*t1278;
  t1512 = t873*t1312;
  t1525 = t1501 + t1512;
  t1612 = t1098*t1329;
  t1615 = -1.*t229*t1368;
  t1663 = -1.*t873*t1329;
  t1664 = -1.*t43*t224*t1368;
  t1766 = t873*t1329;
  t1767 = t43*t224*t1368;
  t1720 = -1.*t1012*t1329;
  t1721 = -1.*t224*t101*t1368;
  t1813 = -1.*t1278*t873;
  t1816 = t43*t224*t1312;
  t1821 = 0. + t1813 + t1816;
  t1825 = -1.*t1278*t1012;
  t1828 = t224*t101*t1312;
  t1835 = 0. + t1825 + t1828;
  t1853 = -1.*t1278*t1098;
  t1872 = -1.*t229*t1312;
  t1882 = 0. + t1853 + t1872;
  t1954 = -1.*t1801*t1949;
  t1964 = -1.*t804*t1960;
  t2283 = t1883*t1801;
  t2288 = t804*t1931;
  t2289 = t2283 + t2288;
  t2320 = Cos(var1[9]);
  t2329 = -1.*t2320;
  t2332 = 1. + t2329;
  t2339 = Sin(var1[9]);
  t2300 = t1883*t804;
  t2301 = -1.*t1801*t1931;
  t2307 = t2300 + t2301;
  t1981 = t1697*t1949;
  t1987 = t931*t1960;
  t2333 = -0.08055*t2332;
  t2343 = -0.13004*t2339;
  t2346 = 0. + t2333 + t2343;
  t2126 = t1883*t1697;
  t2138 = t931*t1931;
  t2177 = t2126 + t2138;
  t2356 = -0.13004*t2332;
  t2362 = 0.08055*t2339;
  t2367 = 0. + t2356 + t2362;
  t2193 = t1883*t931;
  t2203 = -1.*t1697*t1931;
  t2208 = t2193 + t2203;
  t2010 = t1883*t1525;
  t2020 = t1070*t1931;
  t2029 = t2010 + t2020;
  t2045 = t1883*t1070;
  t2046 = -1.*t1525*t1931;
  t2049 = t2045 + t2046;
  t2069 = t1801*t1949;
  t2076 = t804*t1960;
  t2101 = -1.*t1525*t1949;
  t2109 = -1.*t1070*t1960;
  t2249 = -1.*t1697*t1949;
  t2254 = -1.*t931*t1960;
  t2221 = t1525*t1949;
  t2231 = t1070*t1960;
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
  p_output1[19]=t25;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t43*var1[2];
  p_output1[25]=-1.*t101*var1[2];
  p_output1[26]=t43*var1[0] + t101*var1[1];
  p_output1[27]=-1.*t101;
  p_output1[28]=t43;
  p_output1[29]=0;
  p_output1[30]=t225 + t245;
  p_output1[31]=t252 + t258;
  p_output1[32]=t295 + t296;
  p_output1[33]=t321;
  p_output1[34]=t328;
  p_output1[35]=t346;
  p_output1[36]=t225 + t245 - 0.135*t400 + 0.07996*t499;
  p_output1[37]=t252 + t258 - 0.135*t530 + 0.07996*t573;
  p_output1[38]=t295 + t296 - 0.135*t224*t358 + 0.07996*t224*t383;
  p_output1[39]=0. + t321;
  p_output1[40]=0. + t328;
  p_output1[41]=0. + t346;
  p_output1[42]=0.135*t224*t43 + 0.08055*t873 + (0. + t883 + t897 + t901)*t931 + t804*(0. + t751 + t777 + var1[1]);
  p_output1[43]=0.08055*t1012 + 0.135*t101*t224 + t804*(0. + t25 + t969 + t971) + t1070*(0. + t1016 + t1028 + var1[2]);
  p_output1[44]=0.08055*t1098 + t1070*(0. + t1103 + t1108 + t1131) - 0.135*t229 + t931*(0. + t1141 + t1151 + var1[0]);
  p_output1[45]=0. + t1035 + t1061;
  p_output1[46]=0. + t920 + t922;
  p_output1[47]=0. + t795 + t798;
  p_output1[48]=0.08055*t1070 - 0.01004*t1525 - 1.*t1394*(0. + t1332 + t1369 + t883 + t897 + t901) - 1.*t1490*(0. + t1401 + t1432 + t751 + t777 + var1[1]);
  p_output1[49]=-0.01004*t1697 + 0.08055*t931 - 1.*t1490*(0. + t1663 + t1664 + t25 + t969 + t971) - 1.*t1649*(0. + t1016 + t1028 + t1612 + t1615 + var1[2]);
  p_output1[50]=-1.*t1649*(0. + t1103 + t1108 + t1131 + t1720 + t1721) - 0.01004*t1801 + 0.08055*t804 - 1.*t1394*(0. + t1141 + t1151 + t1766 + t1767 + var1[0]);
  p_output1[51]=t1821;
  p_output1[52]=t1835;
  p_output1[53]=t1882;
  p_output1[54]=-0.13004*t2029 + 0.08055*t2049 - 1.*t1394*(0. + t1332 + t1369 + t1954 + t1964 + t883 + t897 + t901) - 1.*t1490*(0. + t1401 + t1432 + t1981 + t1987 + t751 + t777 + var1[1]);
  p_output1[55]=-0.13004*t2177 + 0.08055*t2208 - 1.*t1490*(0. + t1663 + t1664 + t2101 + t2109 + t25 + t969 + t971) - 1.*t1649*(0. + t1016 + t1028 + t1612 + t1615 + t2069 + t2076 + var1[2]);
  p_output1[56]=-1.*t1649*(0. + t1103 + t1108 + t1131 + t1720 + t1721 + t2249 + t2254) - 0.13004*t2289 + 0.08055*t2307 - 1.*t1394*(0. + t1141 + t1151 + t1766 + t1767 + t2221 + t2231 + var1[0]);
  p_output1[57]=t1821;
  p_output1[58]=t1835;
  p_output1[59]=t1882;
  p_output1[60]=0.03315*(t2049*t2320 - 1.*t2029*t2339) - 0.19074*(t2029*t2320 + t2049*t2339) - 1.*t1394*(0. + t1332 + t1369 + t1954 + t1964 - 1.*t2289*t2346 - 1.*t2307*t2367 + t883 + t897 + t901) - 1.*t1490*(0. + t1401 + t1432 + t1981 + t1987 + t2177*t2346 + t2208*t2367 + t751 + t777 + var1[1]);
  p_output1[61]=0.03315*(t2208*t2320 - 1.*t2177*t2339) - 0.19074*(t2177*t2320 + t2208*t2339) - 1.*t1490*(0. + t1663 + t1664 + t2101 + t2109 - 1.*t2029*t2346 - 1.*t2049*t2367 + t25 + t969 + t971) - 1.*t1649*(0. + t1016 + t1028 + t1612 + t1615 + t2069 + t2076 + t2289*t2346 + t2307*t2367 + var1[2]);
  p_output1[62]=0.03315*(t2307*t2320 - 1.*t2289*t2339) - 0.19074*(t2289*t2320 + t2307*t2339) - 1.*t1649*(0. + t1103 + t1108 + t1131 + t1720 + t1721 + t2249 + t2254 - 1.*t2177*t2346 - 1.*t2208*t2367) - 1.*t1394*(0. + t1141 + t1151 + t1766 + t1767 + t2221 + t2231 + t2029*t2346 + t2049*t2367 + var1[0]);
  p_output1[63]=t1821;
  p_output1[64]=t1835;
  p_output1[65]=t1882;
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

#include "Js_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void Js_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
