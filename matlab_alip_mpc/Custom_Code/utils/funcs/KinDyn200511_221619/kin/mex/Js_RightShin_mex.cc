/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:32 GMT-04:00
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
  double t37;
  double t42;
  double t103;
  double t142;
  double t123;
  double t161;
  double t381;
  double t411;
  double t249;
  double t274;
  double t327;
  double t343;
  double t361;
  double t377;
  double t378;
  double t392;
  double t412;
  double t424;
  double t429;
  double t451;
  double t464;
  double t721;
  double t715;
  double t527;
  double t534;
  double t546;
  double t808;
  double t809;
  double t581;
  double t583;
  double t603;
  double t816;
  double t819;
  double t824;
  double t841;
  double t842;
  double t844;
  double t776;
  double t783;
  double t802;
  double t32;
  double t1007;
  double t1015;
  double t1021;
  double t890;
  double t899;
  double t903;
  double t717;
  double t725;
  double t728;
  double t866;
  double t874;
  double t1260;
  double t1272;
  double t875;
  double t1298;
  double t1316;
  double t1097;
  double t1121;
  double t1126;
  double t1028;
  double t1031;
  double t1058;
  double t1331;
  double t1343;
  double t1365;
  double t839;
  double t852;
  double t1394;
  double t1402;
  double t1407;
  double t976;
  double t977;
  double t1438;
  double t1449;
  double t1456;
  double t945;
  double t961;
  double t1212;
  double t1221;
  double t1413;
  double t1417;
  double t1435;
  double t1523;
  double t1526;
  double t1540;
  double t1155;
  double t1172;
  double t1177;
  double t1378;
  double t1408;
  double t1755;
  double t1759;
  double t1761;
  double t1785;
  double t1639;
  double t1641;
  double t1645;
  double t1265;
  double t1287;
  double t1294;
  double t1466;
  double t1467;
  double t1778;
  double t1794;
  double t1805;
  double t1818;
  double t1832;
  double t1841;
  double t1607;
  double t1612;
  double t1616;
  double t1499;
  double t1513;
  double t1558;
  double t1561;
  double t1673;
  double t1675;
  double t1687;
  double t1688;
  double t1705;
  double t1716;
  double t1717;
  double t1723;
  double t1730;
  double t1733;
  double t1736;
  double t1739;
  double t1749;
  double t1806;
  double t1846;
  double t2115;
  double t2130;
  double t2133;
  double t2282;
  double t2291;
  double t2305;
  double t2315;
  double t2135;
  double t2141;
  double t2180;
  double t1858;
  double t1863;
  double t1878;
  double t1900;
  double t1909;
  double t1915;
  double t1924;
  double t1930;
  double t2309;
  double t2328;
  double t2330;
  double t2023;
  double t2035;
  double t2050;
  double t2346;
  double t2349;
  double t2351;
  double t2061;
  double t2079;
  double t2080;
  double t1953;
  double t1968;
  double t1997;
  double t2002;
  double t2203;
  double t2206;
  double t2220;
  double t2235;
  t37 = Cos(var1[3]);
  t42 = Sin(var1[3]);
  t103 = Cos(var1[4]);
  t142 = Sin(var1[4]);
  t123 = -1.*var1[2]*t103*t42;
  t161 = -1.*var1[1]*t142;
  t381 = Cos(var1[5]);
  t411 = Sin(var1[5]);
  t249 = var1[2]*t37*t103;
  t274 = var1[0]*t142;
  t327 = -1.*var1[1]*t37*t103;
  t343 = var1[0]*t103*t42;
  t361 = t37*t103;
  t377 = t103*t42;
  t378 = -1.*t142;
  t392 = t37*t381*t142;
  t412 = t42*t411;
  t424 = t392 + t412;
  t429 = -1.*t381*t42;
  t451 = t37*t142*t411;
  t464 = t429 + t451;
  t721 = Cos(var1[13]);
  t715 = Sin(var1[13]);
  t527 = t381*t42*t142;
  t534 = -1.*t37*t411;
  t546 = t527 + t534;
  t808 = -1.*t721;
  t809 = 1. + t808;
  t581 = t37*t381;
  t583 = t42*t142*t411;
  t603 = t581 + t583;
  t816 = 0.07996*t809;
  t819 = 0.135*t715;
  t824 = 0. + t816 + t819;
  t841 = -0.135*t809;
  t842 = 0.07996*t715;
  t844 = 0. + t841 + t842;
  t776 = t721*t103*t381;
  t783 = -1.*t103*t715*t411;
  t802 = t776 + t783;
  t32 = -1.*var1[0];
  t1007 = t721*t424;
  t1015 = -1.*t715*t464;
  t1021 = t1007 + t1015;
  t890 = t721*t546;
  t899 = -1.*t715*t603;
  t903 = t890 + t899;
  t717 = t715*t424;
  t725 = t721*t464;
  t728 = t717 + t725;
  t866 = -1.*var1[2];
  t874 = -1.*t103*t381*t824;
  t1260 = Cos(var1[14]);
  t1272 = Sin(var1[14]);
  t875 = -1.*t103*t844*t411;
  t1298 = -1.*t1260;
  t1316 = 1. + t1298;
  t1097 = t103*t381*t715;
  t1121 = t721*t103*t411;
  t1126 = t1097 + t1121;
  t1028 = t715*t546;
  t1031 = t721*t603;
  t1058 = t1028 + t1031;
  t1331 = -0.08055*t1316;
  t1343 = -0.135*t1272;
  t1365 = 0. + t1331 + t1343;
  t839 = t824*t546;
  t852 = t844*t603;
  t1394 = -0.135*t1316;
  t1402 = 0.08055*t1272;
  t1407 = 0. + t1394 + t1402;
  t976 = t103*t381*t824;
  t977 = t103*t844*t411;
  t1438 = t1272*t142;
  t1449 = t1260*t1126;
  t1456 = t1438 + t1449;
  t945 = -1.*t824*t424;
  t961 = -1.*t844*t464;
  t1212 = t824*t424;
  t1221 = t844*t464;
  t1413 = -1.*t103*t1272*t42;
  t1417 = t1260*t1058;
  t1435 = t1413 + t1417;
  t1523 = -1.*t37*t103*t1272;
  t1526 = t1260*t728;
  t1540 = t1523 + t1526;
  t1155 = -1.*var1[1];
  t1172 = -1.*t824*t546;
  t1177 = -1.*t844*t603;
  t1378 = t1365*t142;
  t1408 = -1.*t1407*t1126;
  t1755 = Cos(var1[15]);
  t1759 = -1.*t1755;
  t1761 = 1. + t1759;
  t1785 = Sin(var1[15]);
  t1639 = -1.*t1260*t142;
  t1641 = t1272*t1126;
  t1645 = t1639 + t1641;
  t1265 = t1260*t37*t103;
  t1287 = t1272*t728;
  t1294 = t1265 + t1287;
  t1466 = t103*t1365*t42;
  t1467 = t1407*t1058;
  t1778 = -0.01004*t1761;
  t1794 = 0.08055*t1785;
  t1805 = 0. + t1778 + t1794;
  t1818 = -0.08055*t1761;
  t1832 = -0.01004*t1785;
  t1841 = 0. + t1818 + t1832;
  t1607 = t1260*t103*t42;
  t1612 = t1272*t1058;
  t1616 = t1607 + t1612;
  t1499 = -1.*t1365*t142;
  t1513 = t1407*t1126;
  t1558 = -1.*t37*t103*t1365;
  t1561 = -1.*t1407*t728;
  t1673 = t37*t103*t1365;
  t1675 = t1407*t728;
  t1687 = -1.*t103*t1365*t42;
  t1688 = -1.*t1407*t1058;
  t1705 = t37*t103*t1272;
  t1716 = -1.*t1260*t728;
  t1717 = 0. + t1705 + t1716;
  t1723 = t103*t1272*t42;
  t1730 = -1.*t1260*t1058;
  t1733 = 0. + t1723 + t1730;
  t1736 = -1.*t1272*t142;
  t1739 = -1.*t1260*t1126;
  t1749 = 0. + t1736 + t1739;
  t1806 = -1.*t1805*t802;
  t1846 = -1.*t1841*t1645;
  t2115 = t1785*t802;
  t2130 = t1755*t1645;
  t2133 = t2115 + t2130;
  t2282 = Cos(var1[16]);
  t2291 = -1.*t2282;
  t2305 = 1. + t2291;
  t2315 = Sin(var1[16]);
  t2135 = t1755*t802;
  t2141 = -1.*t1785*t1645;
  t2180 = t2135 + t2141;
  t1858 = t1785*t1021;
  t1863 = t1755*t1294;
  t1878 = t1858 + t1863;
  t1900 = t1755*t1021;
  t1909 = -1.*t1785*t1294;
  t1915 = t1900 + t1909;
  t1924 = t1805*t903;
  t1930 = t1841*t1616;
  t2309 = -0.08055*t2305;
  t2328 = -0.13004*t2315;
  t2330 = 0. + t2309 + t2328;
  t2023 = t1785*t903;
  t2035 = t1755*t1616;
  t2050 = t2023 + t2035;
  t2346 = -0.13004*t2305;
  t2349 = 0.08055*t2315;
  t2351 = 0. + t2346 + t2349;
  t2061 = t1755*t903;
  t2079 = -1.*t1785*t1616;
  t2080 = t2061 + t2079;
  t1953 = t1805*t802;
  t1968 = t1841*t1645;
  t1997 = -1.*t1805*t1021;
  t2002 = -1.*t1841*t1294;
  t2203 = t1805*t1021;
  t2206 = t1841*t1294;
  t2220 = -1.*t1805*t903;
  t2235 = -1.*t1841*t1616;
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
  p_output1[19]=t32;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t37*var1[2];
  p_output1[25]=-1.*t42*var1[2];
  p_output1[26]=t37*var1[0] + t42*var1[1];
  p_output1[27]=-1.*t42;
  p_output1[28]=t37;
  p_output1[29]=0;
  p_output1[30]=t123 + t161;
  p_output1[31]=t249 + t274;
  p_output1[32]=t327 + t343;
  p_output1[33]=t361;
  p_output1[34]=t377;
  p_output1[35]=t378;
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
  p_output1[78]=t123 + t161 + 0.135*t424 + 0.07996*t464;
  p_output1[79]=t249 + t274 + 0.135*t546 + 0.07996*t603;
  p_output1[80]=t327 + t343 + 0.135*t103*t381 + 0.07996*t103*t411;
  p_output1[81]=0. + t361;
  p_output1[82]=0. + t377;
  p_output1[83]=0. + t378;
  p_output1[84]=-0.135*t103*t37 + 0.08055*t728 + (0. + t866 + t874 + t875)*t903 + t802*(0. + t839 + t852 + var1[1]);
  p_output1[85]=0.08055*t1058 - 0.135*t103*t42 + t802*(0. + t32 + t945 + t961) + t1021*(0. + t976 + t977 + var1[2]);
  p_output1[86]=0.08055*t1126 + t1021*(0. + t1155 + t1172 + t1177) + 0.135*t142 + t903*(0. + t1212 + t1221 + var1[0]);
  p_output1[87]=0. + t1007 + t1015;
  p_output1[88]=0. + t890 + t899;
  p_output1[89]=0. + t776 + t783;
  p_output1[90]=0.08055*t1021 - 0.01004*t1294 - 1.*t1435*(0. + t1378 + t1408 + t866 + t874 + t875) - 1.*t1456*(0. + t1466 + t1467 + t839 + t852 + var1[1]);
  p_output1[91]=-0.01004*t1616 + 0.08055*t903 - 1.*t1456*(0. + t1558 + t1561 + t32 + t945 + t961) - 1.*t1540*(0. + t1499 + t1513 + t976 + t977 + var1[2]);
  p_output1[92]=-0.01004*t1645 - 1.*t1540*(0. + t1155 + t1172 + t1177 + t1687 + t1688) + 0.08055*t802 - 1.*t1435*(0. + t1212 + t1221 + t1673 + t1675 + var1[0]);
  p_output1[93]=t1717;
  p_output1[94]=t1733;
  p_output1[95]=t1749;
  p_output1[96]=-0.13004*t1878 + 0.08055*t1915 - 1.*t1435*(0. + t1378 + t1408 + t1806 + t1846 + t866 + t874 + t875) - 1.*t1456*(0. + t1466 + t1467 + t1924 + t1930 + t839 + t852 + var1[1]);
  p_output1[97]=-0.13004*t2050 + 0.08055*t2080 - 1.*t1456*(0. + t1558 + t1561 + t1997 + t2002 + t32 + t945 + t961) - 1.*t1540*(0. + t1499 + t1513 + t1953 + t1968 + t976 + t977 + var1[2]);
  p_output1[98]=-0.13004*t2133 + 0.08055*t2180 - 1.*t1540*(0. + t1155 + t1172 + t1177 + t1687 + t1688 + t2220 + t2235) - 1.*t1435*(0. + t1212 + t1221 + t1673 + t1675 + t2203 + t2206 + var1[0]);
  p_output1[99]=t1717;
  p_output1[100]=t1733;
  p_output1[101]=t1749;
  p_output1[102]=0.03315*(t1915*t2282 - 1.*t1878*t2315) - 0.19074*(t1878*t2282 + t1915*t2315) - 1.*t1435*(0. + t1378 + t1408 + t1806 + t1846 - 1.*t2133*t2330 - 1.*t2180*t2351 + t866 + t874 + t875) - 1.*t1456*(0. + t1466 + t1467 + t1924 + t1930 + t2050*t2330 + t2080*t2351 + t839 + t852 + var1[1]);
  p_output1[103]=0.03315*(t2080*t2282 - 1.*t2050*t2315) - 0.19074*(t2050*t2282 + t2080*t2315) - 1.*t1456*(0. + t1558 + t1561 + t1997 + t2002 - 1.*t1878*t2330 - 1.*t1915*t2351 + t32 + t945 + t961) - 1.*t1540*(0. + t1499 + t1513 + t1953 + t1968 + t2133*t2330 + t2180*t2351 + t976 + t977 + var1[2]);
  p_output1[104]=0.03315*(t2180*t2282 - 1.*t2133*t2315) - 0.19074*(t2133*t2282 + t2180*t2315) - 1.*t1540*(0. + t1155 + t1172 + t1177 + t1687 + t1688 + t2220 + t2235 - 1.*t2050*t2330 - 1.*t2080*t2351) - 1.*t1435*(0. + t1212 + t1221 + t1673 + t1675 + t2203 + t2206 + t1878*t2330 + t1915*t2351 + var1[0]);
  p_output1[105]=t1717;
  p_output1[106]=t1733;
  p_output1[107]=t1749;
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

#include "Js_RightShin_mex.hh"

namespace SymExpression
{

void Js_RightShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
