/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:04 GMT-04:00
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
  double t131;
  double t170;
  double t217;
  double t231;
  double t219;
  double t259;
  double t376;
  double t414;
  double t287;
  double t292;
  double t353;
  double t356;
  double t366;
  double t369;
  double t371;
  double t390;
  double t427;
  double t438;
  double t486;
  double t518;
  double t526;
  double t717;
  double t702;
  double t570;
  double t572;
  double t581;
  double t780;
  double t785;
  double t605;
  double t606;
  double t618;
  double t790;
  double t791;
  double t802;
  double t825;
  double t830;
  double t838;
  double t735;
  double t761;
  double t762;
  double t72;
  double t980;
  double t1007;
  double t1028;
  double t903;
  double t906;
  double t910;
  double t712;
  double t729;
  double t731;
  double t870;
  double t881;
  double t1277;
  double t1305;
  double t888;
  double t1345;
  double t1380;
  double t1105;
  double t1114;
  double t1118;
  double t1051;
  double t1057;
  double t1063;
  double t1381;
  double t1384;
  double t1391;
  double t817;
  double t854;
  double t1424;
  double t1431;
  double t1432;
  double t961;
  double t966;
  double t1495;
  double t1500;
  double t1505;
  double t933;
  double t937;
  double t1178;
  double t1186;
  double t1464;
  double t1466;
  double t1473;
  double t1584;
  double t1601;
  double t1608;
  double t1145;
  double t1146;
  double t1157;
  double t1418;
  double t1444;
  double t1851;
  double t1857;
  double t1864;
  double t1876;
  double t1681;
  double t1685;
  double t1693;
  double t1303;
  double t1313;
  double t1318;
  double t1506;
  double t1539;
  double t1871;
  double t1877;
  double t1879;
  double t1908;
  double t1925;
  double t1933;
  double t1639;
  double t1643;
  double t1646;
  double t1570;
  double t1571;
  double t1620;
  double t1621;
  double t1711;
  double t1720;
  double t1738;
  double t1741;
  double t1772;
  double t1779;
  double t1785;
  double t1795;
  double t1828;
  double t1832;
  double t1834;
  double t1836;
  double t1843;
  double t1904;
  double t1939;
  double t2209;
  double t2213;
  double t2216;
  double t2349;
  double t2357;
  double t2360;
  double t2378;
  double t2228;
  double t2232;
  double t2236;
  double t1966;
  double t1967;
  double t1978;
  double t2008;
  double t2010;
  double t2011;
  double t2020;
  double t2024;
  double t2369;
  double t2383;
  double t2389;
  double t2120;
  double t2135;
  double t2149;
  double t2403;
  double t2408;
  double t2416;
  double t2155;
  double t2156;
  double t2161;
  double t2080;
  double t2089;
  double t2103;
  double t2109;
  double t2252;
  double t2257;
  double t2269;
  double t2274;
  t131 = Cos(var1[3]);
  t170 = Sin(var1[3]);
  t217 = Cos(var1[4]);
  t231 = Sin(var1[4]);
  t219 = -1.*var1[2]*t217*t170;
  t259 = -1.*var1[1]*t231;
  t376 = Cos(var1[5]);
  t414 = Sin(var1[5]);
  t287 = var1[2]*t131*t217;
  t292 = var1[0]*t231;
  t353 = -1.*var1[1]*t131*t217;
  t356 = var1[0]*t217*t170;
  t366 = t131*t217;
  t369 = t217*t170;
  t371 = -1.*t231;
  t390 = t131*t376*t231;
  t427 = t170*t414;
  t438 = t390 + t427;
  t486 = -1.*t376*t170;
  t518 = t131*t231*t414;
  t526 = t486 + t518;
  t717 = Cos(var1[13]);
  t702 = Sin(var1[13]);
  t570 = t376*t170*t231;
  t572 = -1.*t131*t414;
  t581 = t570 + t572;
  t780 = -1.*t717;
  t785 = 1. + t780;
  t605 = t131*t376;
  t606 = t170*t231*t414;
  t618 = t605 + t606;
  t790 = 0.07996*t785;
  t791 = 0.135*t702;
  t802 = 0. + t790 + t791;
  t825 = -0.135*t785;
  t830 = 0.07996*t702;
  t838 = 0. + t825 + t830;
  t735 = t717*t217*t376;
  t761 = -1.*t217*t702*t414;
  t762 = t735 + t761;
  t72 = -1.*var1[0];
  t980 = t717*t438;
  t1007 = -1.*t702*t526;
  t1028 = t980 + t1007;
  t903 = t717*t581;
  t906 = -1.*t702*t618;
  t910 = t903 + t906;
  t712 = t702*t438;
  t729 = t717*t526;
  t731 = t712 + t729;
  t870 = -1.*var1[2];
  t881 = -1.*t217*t376*t802;
  t1277 = Cos(var1[14]);
  t1305 = Sin(var1[14]);
  t888 = -1.*t217*t838*t414;
  t1345 = -1.*t1277;
  t1380 = 1. + t1345;
  t1105 = t217*t376*t702;
  t1114 = t717*t217*t414;
  t1118 = t1105 + t1114;
  t1051 = t702*t581;
  t1057 = t717*t618;
  t1063 = t1051 + t1057;
  t1381 = -0.08055*t1380;
  t1384 = -0.135*t1305;
  t1391 = 0. + t1381 + t1384;
  t817 = t802*t581;
  t854 = t838*t618;
  t1424 = -0.135*t1380;
  t1431 = 0.08055*t1305;
  t1432 = 0. + t1424 + t1431;
  t961 = t217*t376*t802;
  t966 = t217*t838*t414;
  t1495 = t1305*t231;
  t1500 = t1277*t1118;
  t1505 = t1495 + t1500;
  t933 = -1.*t802*t438;
  t937 = -1.*t838*t526;
  t1178 = t802*t438;
  t1186 = t838*t526;
  t1464 = -1.*t217*t1305*t170;
  t1466 = t1277*t1063;
  t1473 = t1464 + t1466;
  t1584 = -1.*t131*t217*t1305;
  t1601 = t1277*t731;
  t1608 = t1584 + t1601;
  t1145 = -1.*var1[1];
  t1146 = -1.*t802*t581;
  t1157 = -1.*t838*t618;
  t1418 = t1391*t231;
  t1444 = -1.*t1432*t1118;
  t1851 = Cos(var1[15]);
  t1857 = -1.*t1851;
  t1864 = 1. + t1857;
  t1876 = Sin(var1[15]);
  t1681 = -1.*t1277*t231;
  t1685 = t1305*t1118;
  t1693 = t1681 + t1685;
  t1303 = t1277*t131*t217;
  t1313 = t1305*t731;
  t1318 = t1303 + t1313;
  t1506 = t217*t1391*t170;
  t1539 = t1432*t1063;
  t1871 = -0.01004*t1864;
  t1877 = 0.08055*t1876;
  t1879 = 0. + t1871 + t1877;
  t1908 = -0.08055*t1864;
  t1925 = -0.01004*t1876;
  t1933 = 0. + t1908 + t1925;
  t1639 = t1277*t217*t170;
  t1643 = t1305*t1063;
  t1646 = t1639 + t1643;
  t1570 = -1.*t1391*t231;
  t1571 = t1432*t1118;
  t1620 = -1.*t131*t217*t1391;
  t1621 = -1.*t1432*t731;
  t1711 = t131*t217*t1391;
  t1720 = t1432*t731;
  t1738 = -1.*t217*t1391*t170;
  t1741 = -1.*t1432*t1063;
  t1772 = t131*t217*t1305;
  t1779 = -1.*t1277*t731;
  t1785 = 0. + t1772 + t1779;
  t1795 = t217*t1305*t170;
  t1828 = -1.*t1277*t1063;
  t1832 = 0. + t1795 + t1828;
  t1834 = -1.*t1305*t231;
  t1836 = -1.*t1277*t1118;
  t1843 = 0. + t1834 + t1836;
  t1904 = -1.*t1879*t762;
  t1939 = -1.*t1933*t1693;
  t2209 = t1876*t762;
  t2213 = t1851*t1693;
  t2216 = t2209 + t2213;
  t2349 = Cos(var1[16]);
  t2357 = -1.*t2349;
  t2360 = 1. + t2357;
  t2378 = Sin(var1[16]);
  t2228 = t1851*t762;
  t2232 = -1.*t1876*t1693;
  t2236 = t2228 + t2232;
  t1966 = t1876*t1028;
  t1967 = t1851*t1318;
  t1978 = t1966 + t1967;
  t2008 = t1851*t1028;
  t2010 = -1.*t1876*t1318;
  t2011 = t2008 + t2010;
  t2020 = t1879*t910;
  t2024 = t1933*t1646;
  t2369 = -0.08055*t2360;
  t2383 = -0.13004*t2378;
  t2389 = 0. + t2369 + t2383;
  t2120 = t1876*t910;
  t2135 = t1851*t1646;
  t2149 = t2120 + t2135;
  t2403 = -0.13004*t2360;
  t2408 = 0.08055*t2378;
  t2416 = 0. + t2403 + t2408;
  t2155 = t1851*t910;
  t2156 = -1.*t1876*t1646;
  t2161 = t2155 + t2156;
  t2080 = t1879*t762;
  t2089 = t1933*t1693;
  t2103 = -1.*t1879*t1028;
  t2109 = -1.*t1933*t1318;
  t2252 = t1879*t1028;
  t2257 = t1933*t1318;
  t2269 = -1.*t1879*t910;
  t2274 = -1.*t1933*t1646;
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
  p_output1[19]=t72;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t131*var1[2];
  p_output1[25]=-1.*t170*var1[2];
  p_output1[26]=t131*var1[0] + t170*var1[1];
  p_output1[27]=-1.*t170;
  p_output1[28]=t131;
  p_output1[29]=0;
  p_output1[30]=t219 + t259;
  p_output1[31]=t287 + t292;
  p_output1[32]=t353 + t356;
  p_output1[33]=t366;
  p_output1[34]=t369;
  p_output1[35]=t371;
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
  p_output1[78]=t219 + t259 + 0.135*t438 + 0.07996*t526;
  p_output1[79]=t287 + t292 + 0.135*t581 + 0.07996*t618;
  p_output1[80]=t353 + t356 + 0.135*t217*t376 + 0.07996*t217*t414;
  p_output1[81]=0. + t366;
  p_output1[82]=0. + t369;
  p_output1[83]=0. + t371;
  p_output1[84]=-0.135*t131*t217 + 0.08055*t731 + (0. + t870 + t881 + t888)*t910 + t762*(0. + t817 + t854 + var1[1]);
  p_output1[85]=0.08055*t1063 - 0.135*t170*t217 + t762*(0. + t72 + t933 + t937) + t1028*(0. + t961 + t966 + var1[2]);
  p_output1[86]=0.08055*t1118 + t1028*(0. + t1145 + t1146 + t1157) + 0.135*t231 + t910*(0. + t1178 + t1186 + var1[0]);
  p_output1[87]=0. + t1007 + t980;
  p_output1[88]=0. + t903 + t906;
  p_output1[89]=0. + t735 + t761;
  p_output1[90]=0.08055*t1028 - 0.01004*t1318 - 1.*t1473*(0. + t1418 + t1444 + t870 + t881 + t888) - 1.*t1505*(0. + t1506 + t1539 + t817 + t854 + var1[1]);
  p_output1[91]=-0.01004*t1646 + 0.08055*t910 - 1.*t1505*(0. + t1620 + t1621 + t72 + t933 + t937) - 1.*t1608*(0. + t1570 + t1571 + t961 + t966 + var1[2]);
  p_output1[92]=-0.01004*t1693 - 1.*t1608*(0. + t1145 + t1146 + t1157 + t1738 + t1741) + 0.08055*t762 - 1.*t1473*(0. + t1178 + t1186 + t1711 + t1720 + var1[0]);
  p_output1[93]=t1785;
  p_output1[94]=t1832;
  p_output1[95]=t1843;
  p_output1[96]=-0.13004*t1978 + 0.08055*t2011 - 1.*t1473*(0. + t1418 + t1444 + t1904 + t1939 + t870 + t881 + t888) - 1.*t1505*(0. + t1506 + t1539 + t2020 + t2024 + t817 + t854 + var1[1]);
  p_output1[97]=-0.13004*t2149 + 0.08055*t2161 - 1.*t1505*(0. + t1620 + t1621 + t2103 + t2109 + t72 + t933 + t937) - 1.*t1608*(0. + t1570 + t1571 + t2080 + t2089 + t961 + t966 + var1[2]);
  p_output1[98]=-0.13004*t2216 + 0.08055*t2236 - 1.*t1608*(0. + t1145 + t1146 + t1157 + t1738 + t1741 + t2269 + t2274) - 1.*t1473*(0. + t1178 + t1186 + t1711 + t1720 + t2252 + t2257 + var1[0]);
  p_output1[99]=t1785;
  p_output1[100]=t1832;
  p_output1[101]=t1843;
  p_output1[102]=0.03315*(t2011*t2349 - 1.*t1978*t2378) - 0.19074*(t1978*t2349 + t2011*t2378) - 1.*t1473*(0. + t1418 + t1444 + t1904 + t1939 - 1.*t2216*t2389 - 1.*t2236*t2416 + t870 + t881 + t888) - 1.*t1505*(0. + t1506 + t1539 + t2020 + t2024 + t2149*t2389 + t2161*t2416 + t817 + t854 + var1[1]);
  p_output1[103]=0.03315*(t2161*t2349 - 1.*t2149*t2378) - 0.19074*(t2149*t2349 + t2161*t2378) - 1.*t1505*(0. + t1620 + t1621 + t2103 + t2109 - 1.*t1978*t2389 - 1.*t2011*t2416 + t72 + t933 + t937) - 1.*t1608*(0. + t1570 + t1571 + t2080 + t2089 + t2216*t2389 + t2236*t2416 + t961 + t966 + var1[2]);
  p_output1[104]=0.03315*(t2236*t2349 - 1.*t2216*t2378) - 0.19074*(t2216*t2349 + t2236*t2378) - 1.*t1608*(0. + t1145 + t1146 + t1157 + t1738 + t1741 + t2269 + t2274 - 1.*t2149*t2389 - 1.*t2161*t2416) - 1.*t1473*(0. + t1178 + t1186 + t1711 + t1720 + t2252 + t2257 + t1978*t2389 + t2011*t2416 + var1[0]);
  p_output1[105]=t1785;
  p_output1[106]=t1832;
  p_output1[107]=t1843;
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

#include "Js_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void Js_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
