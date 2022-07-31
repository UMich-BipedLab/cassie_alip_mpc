/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:28 GMT-04:00
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
  double t176;
  double t116;
  double t118;
  double t201;
  double t238;
  double t130;
  double t205;
  double t211;
  double t75;
  double t280;
  double t323;
  double t326;
  double t356;
  double t225;
  double t330;
  double t340;
  double t61;
  double t363;
  double t368;
  double t380;
  double t430;
  double t434;
  double t455;
  double t44;
  double t492;
  double t519;
  double t551;
  double t354;
  double t458;
  double t460;
  double t566;
  double t26;
  double t741;
  double t752;
  double t755;
  double t772;
  double t777;
  double t795;
  double t806;
  double t818;
  double t834;
  double t855;
  double t640;
  double t658;
  double t660;
  double t674;
  double t932;
  double t941;
  double t953;
  double t791;
  double t856;
  double t884;
  double t1087;
  double t1088;
  double t1119;
  double t1122;
  double t1095;
  double t1111;
  double t474;
  double t571;
  double t574;
  double t662;
  double t671;
  double t672;
  double t686;
  double t697;
  double t710;
  double t713;
  double t724;
  double t928;
  double t957;
  double t958;
  double t988;
  double t989;
  double t1000;
  double t1005;
  double t1006;
  double t1016;
  double t1033;
  double t1046;
  double t1118;
  double t1139;
  double t1140;
  double t1151;
  double t1152;
  double t1154;
  double t1161;
  double t1181;
  double t1193;
  double t1204;
  double t1339;
  double t1340;
  double t1368;
  double t1602;
  double t1605;
  double t1571;
  double t1577;
  double t1609;
  double t1610;
  double t1618;
  double t1622;
  double t1644;
  double t1655;
  double t1664;
  double t1674;
  double t1530;
  double t1559;
  double t1588;
  double t1599;
  double t1625;
  double t1697;
  double t1709;
  double t1715;
  double t1718;
  double t1721;
  double t1722;
  double t1731;
  double t1406;
  double t1436;
  double t1454;
  double t1455;
  double t1505;
  double t1508;
  double t1519;
  double t1560;
  double t1562;
  double t1710;
  double t1737;
  double t1753;
  double t1758;
  double t1765;
  double t1799;
  double t1805;
  double t1845;
  double t1850;
  double t1851;
  double t1376;
  double t1396;
  double t1398;
  double t1897;
  double t1900;
  double t1904;
  double t1905;
  double t1908;
  double t1443;
  double t1446;
  double t1771;
  double t1867;
  double t1869;
  double t1981;
  double t1983;
  double t1989;
  double t2008;
  double t2020;
  double t2022;
  double t2040;
  double t1888;
  double t1914;
  double t1927;
  double t2013;
  double t2041;
  double t2049;
  double t2062;
  double t2064;
  double t2065;
  double t1317;
  double t1319;
  double t1328;
  double t1973;
  double t2094;
  double t2128;
  double t2155;
  double t2224;
  double t2264;
  double t2296;
  double t2321;
  double t2368;
  double t2392;
  double t2422;
  double t2435;
  double t2832;
  double t2850;
  t176 = Cos(var1[16]);
  t116 = Cos(var1[17]);
  t118 = Sin(var1[16]);
  t201 = Sin(var1[17]);
  t238 = Cos(var1[15]);
  t130 = t116*t118;
  t205 = t176*t201;
  t211 = 0. + t130 + t205;
  t75 = Sin(var1[15]);
  t280 = -1.*t176*t116;
  t323 = t118*t201;
  t326 = 0. + t280 + t323;
  t356 = Cos(var1[13]);
  t225 = t75*t211;
  t330 = t238*t326;
  t340 = 0. + t225 + t330;
  t61 = Sin(var1[13]);
  t363 = Sin(var1[14]);
  t368 = t238*t211;
  t380 = -1.*t75*t326;
  t430 = 0. + t368 + t380;
  t434 = t363*t430;
  t455 = 0. + t434;
  t44 = Cos(var1[5]);
  t492 = t356*t340;
  t519 = t61*t455;
  t551 = 0. + t492 + t519;
  t354 = -1.*t61*t340;
  t458 = t356*t455;
  t460 = 0. + t354 + t458;
  t566 = Sin(var1[5]);
  t26 = Sin(var1[3]);
  t741 = t176*t116;
  t752 = -1.*t118*t201;
  t755 = 0. + t741 + t752;
  t772 = t75*t755;
  t777 = 0. + t368 + t772;
  t795 = -1.*t75*t211;
  t806 = t238*t755;
  t818 = 0. + t795 + t806;
  t834 = t363*t818;
  t855 = 0. + t834;
  t640 = Cos(var1[3]);
  t658 = Cos(var1[4]);
  t660 = Cos(var1[14]);
  t674 = Sin(var1[4]);
  t932 = t356*t777;
  t941 = t61*t855;
  t953 = 0. + t932 + t941;
  t791 = -1.*t61*t777;
  t856 = t356*t855;
  t884 = 0. + t791 + t856;
  t1087 = -1.*t660;
  t1088 = 0. + t1087;
  t1119 = t1088*t61;
  t1122 = 0. + t1119;
  t1095 = t356*t1088;
  t1111 = 0. + t1095;
  t474 = t44*t460;
  t571 = -1.*t551*t566;
  t574 = 0. + t474 + t571;
  t662 = t660*t430;
  t671 = 0. + t662;
  t672 = t658*t671;
  t686 = t44*t551;
  t697 = t460*t566;
  t710 = 0. + t686 + t697;
  t713 = t674*t710;
  t724 = 0. + t672 + t713;
  t928 = t44*t884;
  t957 = -1.*t953*t566;
  t958 = 0. + t928 + t957;
  t988 = t660*t818;
  t989 = 0. + t988;
  t1000 = t658*t989;
  t1005 = t44*t953;
  t1006 = t884*t566;
  t1016 = 0. + t1005 + t1006;
  t1033 = t674*t1016;
  t1046 = 0. + t1000 + t1033;
  t1118 = t1111*t44;
  t1139 = -1.*t1122*t566;
  t1140 = 0. + t1118 + t1139;
  t1151 = 0. + t363;
  t1152 = t658*t1151;
  t1154 = t44*t1122;
  t1161 = t1111*t566;
  t1181 = 0. + t1154 + t1161;
  t1193 = t674*t1181;
  t1204 = 0. + t1152 + t1193;
  t1339 = -1.*t989*t674;
  t1340 = t658*t1016;
  t1368 = 0. + t1339 + t1340;
  t1602 = -1.*t116;
  t1605 = 1. + t1602;
  t1571 = -1.*t176;
  t1577 = 1. + t1571;
  t1609 = -0.19074*t1605;
  t1610 = -0.37414*t116;
  t1618 = 0.0011999999999999997*t201;
  t1622 = 0. + t1609 + t1610 + t1618;
  t1644 = -0.03315*t1605;
  t1655 = -0.03195*t116;
  t1664 = 0.18339999999999998*t201;
  t1674 = 0. + t1644 + t1655 + t1664;
  t1530 = -1.*t238;
  t1559 = 1. + t1530;
  t1588 = -0.08055*t1577;
  t1599 = -0.13004*t118;
  t1625 = -1.*t118*t1622;
  t1697 = t176*t1674;
  t1709 = 0. + t1588 + t1599 + t1625 + t1697;
  t1715 = -0.13004*t1577;
  t1718 = 0.08055*t118;
  t1721 = t176*t1622;
  t1722 = t118*t1674;
  t1731 = 0. + t1715 + t1718 + t1721 + t1722;
  t1406 = -1.*t356;
  t1436 = 1. + t1406;
  t1454 = -1.*t660;
  t1455 = 1. + t1454;
  t1505 = -0.135*t1455;
  t1508 = -0.1303*t660;
  t1519 = 0.08055*t363;
  t1560 = -0.08055*t1559;
  t1562 = -0.01004*t75;
  t1710 = t238*t1709;
  t1737 = -1.*t75*t1731;
  t1753 = 0. + t1560 + t1562 + t1710 + t1737;
  t1758 = t363*t1753;
  t1765 = 0. + t1505 + t1508 + t1519 + t1758;
  t1799 = -0.01004*t1559;
  t1805 = 0.08055*t75;
  t1845 = t75*t1709;
  t1850 = t238*t1731;
  t1851 = 0. + t1799 + t1805 + t1845 + t1850;
  t1376 = -1.*t1151*t674;
  t1396 = t658*t1181;
  t1398 = 0. + t1376 + t1396;
  t1897 = 0.07996*t1436;
  t1900 = 0.135*t61;
  t1904 = t61*t1765;
  t1905 = t356*t1851;
  t1908 = 0. + t1897 + t1900 + t1904 + t1905;
  t1443 = -0.135*t1436;
  t1446 = 0.07996*t61;
  t1771 = t356*t1765;
  t1867 = -1.*t61*t1851;
  t1869 = 0. + t1443 + t1446 + t1771 + t1867;
  t1981 = -0.08055*t1455;
  t1983 = -0.00470000000000001*t363;
  t1989 = t660*t1753;
  t2008 = 0. + t1981 + t1983 + t1989;
  t2020 = t44*t1908;
  t2022 = t1869*t566;
  t2040 = 0. + t2020 + t2022;
  t1888 = t44*t1869;
  t1914 = -1.*t1908*t566;
  t1927 = 0. + t1888 + t1914;
  t2013 = -1.*t2008*t674;
  t2041 = t658*t2040;
  t2049 = 0. + t2013 + t2041;
  t2062 = t658*t2008;
  t2064 = t674*t2040;
  t2065 = 0. + t2062 + t2064;
  t1317 = -1.*t671*t674;
  t1319 = t658*t710;
  t1328 = 0. + t1317 + t1319;
  t1973 = t1140*t1927;
  t2094 = -1.*t1927*t958;
  t2128 = -1.*t1140*t1927;
  t2155 = t1927*t574;
  t2224 = t1927*t958;
  t2264 = -1.*t1927*t574;
  t2296 = t1151*t2008;
  t2321 = -1.*t2008*t989;
  t2368 = -1.*t1151*t2008;
  t2392 = t2008*t671;
  t2422 = t2008*t989;
  t2435 = -1.*t2008*t671;
  t2832 = t1851*t777;
  t2850 = -1.*t1851*t340;
  p_output1[0]=0. - 1.*t26*t574 + t640*t724;
  p_output1[1]=0. + t1046*t640 - 1.*t26*t958;
  p_output1[2]=0. - 1.*t1140*t26 + t1204*t640;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t574*t640 + t26*t724;
  p_output1[7]=0. + t1046*t26 + t640*t958;
  p_output1[8]=0. + t1204*t26 + t1140*t640;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1328;
  p_output1[13]=t1368;
  p_output1[14]=t1398;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1368*(t1973 + t1398*t2049 + t1204*t2065) + t1398*(-1.*t1368*t2049 - 1.*t1046*t2065 + t2094);
  p_output1[19]=t1328*(-1.*t1398*t2049 - 1.*t1204*t2065 + t2128) + t1398*(t1328*t2049 + t2155 + t2065*t724);
  p_output1[20]=t1328*(t1368*t2049 + t1046*t2065 + t2224) + t1368*(-1.*t1328*t2049 + t2264 - 1.*t2065*t724);
  p_output1[21]=t1328;
  p_output1[22]=t1368;
  p_output1[23]=t1398;
  p_output1[24]=t1140*(-1.*t1016*t2040 + t2094 + t2321) + (t1973 + t1181*t2040 + t2296)*t958;
  p_output1[25]=(-1.*t1181*t2040 + t2128 + t2368)*t574 + t1140*(t2155 + t2392 + t2040*t710);
  p_output1[26]=(t1016*t2040 + t2224 + t2422)*t574 + (t2264 + t2435 - 1.*t2040*t710)*t958;
  p_output1[27]=t574;
  p_output1[28]=t958;
  p_output1[29]=t1140;
  p_output1[30]=t1151*(t2321 - 1.*t1869*t884 - 1.*t1908*t953) + (t1111*t1869 + t1122*t1908 + t2296)*t989;
  p_output1[31]=t1151*(t2392 + t1869*t460 + t1908*t551) + (-1.*t1111*t1869 - 1.*t1122*t1908 + t2368)*t671;
  p_output1[32]=t671*(t2422 + t1869*t884 + t1908*t953) + (t2435 - 1.*t1869*t460 - 1.*t1908*t551)*t989;
  p_output1[33]=t671;
  p_output1[34]=t989;
  p_output1[35]=t1151;
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
  p_output1[78]=0.135*t340 + 0.07996*t455 + t1151*(t2321 - 1.*t1851*t777 - 1.*t1765*t855) + (0. + t1088*t1765 + t2296)*t989;
  p_output1[79]=t1151*(t2392 + t1851*t340 + t1765*t455) + (0. - 1.*t1088*t1765 + t2368)*t671 + 0.135*t777 + 0.07996*t855;
  p_output1[80]=0. + 0.07996*t1088 + t671*(t2422 + t2832 + t1765*t855) + (t2435 + t2850 - 1.*t1765*t455)*t989;
  p_output1[81]=t671;
  p_output1[82]=t989;
  p_output1[83]=t1151;
  p_output1[84]=0. - 0.135*t430 + 0.1303*t777;
  p_output1[85]=0. - 0.1303*t340 - 0.135*t818;
  p_output1[86]=-0.08055 + (0. + t2850 - 1.*t1753*t430)*t777 + t340*(0. + t2832 + t1753*t818);
  p_output1[87]=t340;
  p_output1[88]=t777;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.01004*t211 - 1.*t1731*t211 + 0.08055*t326 - 1.*t1709*t755;
  p_output1[91]=0. + 0.08055*t211 + t1709*t211 + t1731*t326 - 0.01004*t755;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.08055*t116 - 1.*t116*t1674 - 0.13004*t201 - 1.*t1622*t201;
  p_output1[97]=0. - 0.13004*t116 - 1.*t116*t1622 + 0.08055*t201 + t1674*t201;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=-0.0011999999999999997;
  p_output1[103]=0.18339999999999998;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
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

#include "Jb_RightShin_mex.hh"

namespace SymExpression
{

void Jb_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
