/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:37 GMT-04:00
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
  double t122;
  double t169;
  double t114;
  double t311;
  double t107;
  double t425;
  double t435;
  double t443;
  double t162;
  double t324;
  double t395;
  double t444;
  double t478;
  double t415;
  double t452;
  double t455;
  double t80;
  double t488;
  double t509;
  double t516;
  double t530;
  double t535;
  double t538;
  double t573;
  double t475;
  double t541;
  double t547;
  double t46;
  double t596;
  double t653;
  double t674;
  double t40;
  double t873;
  double t885;
  double t951;
  double t964;
  double t971;
  double t994;
  double t999;
  double t1017;
  double t1047;
  double t1052;
  double t739;
  double t740;
  double t741;
  double t787;
  double t990;
  double t1061;
  double t1065;
  double t1072;
  double t1074;
  double t1081;
  double t1236;
  double t1258;
  double t1268;
  double t1269;
  double t1309;
  double t1345;
  double t553;
  double t682;
  double t711;
  double t745;
  double t748;
  double t775;
  double t795;
  double t823;
  double t842;
  double t850;
  double t852;
  double t1067;
  double t1084;
  double t1085;
  double t1091;
  double t1098;
  double t1107;
  double t1114;
  double t1127;
  double t1147;
  double t1156;
  double t1164;
  double t1280;
  double t1355;
  double t1359;
  double t1381;
  double t1390;
  double t1400;
  double t1405;
  double t1410;
  double t1421;
  double t1422;
  double t1533;
  double t1536;
  double t1543;
  double t1666;
  double t1668;
  double t1635;
  double t1650;
  double t1669;
  double t1674;
  double t1686;
  double t1693;
  double t1704;
  double t1705;
  double t1716;
  double t1722;
  double t1611;
  double t1614;
  double t1771;
  double t1815;
  double t1818;
  double t1821;
  double t1826;
  double t1654;
  double t1660;
  double t1697;
  double t1729;
  double t1743;
  double t1567;
  double t1572;
  double t1624;
  double t1762;
  double t1770;
  double t1829;
  double t1830;
  double t1849;
  double t1852;
  double t1856;
  double t1860;
  double t1874;
  double t1877;
  double t1881;
  double t1888;
  double t1894;
  double t1907;
  double t1910;
  double t1913;
  double t1551;
  double t1552;
  double t1563;
  double t1573;
  double t1576;
  double t1835;
  double t1922;
  double t1926;
  double t1945;
  double t1946;
  double t1955;
  double t1959;
  double t1966;
  double t1987;
  double t1991;
  double t2003;
  double t2009;
  double t2031;
  double t2034;
  double t2035;
  double t1937;
  double t1971;
  double t1975;
  double t2026;
  double t2049;
  double t2053;
  double t2066;
  double t2076;
  double t2080;
  double t1515;
  double t1519;
  double t1530;
  double t1978;
  double t2103;
  double t2144;
  double t2158;
  double t2237;
  double t2263;
  double t2358;
  double t2380;
  double t2411;
  double t2461;
  double t2481;
  double t2505;
  double t2929;
  double t2956;
  t122 = Cos(var1[10]);
  t169 = Sin(var1[9]);
  t114 = Cos(var1[9]);
  t311 = Sin(var1[10]);
  t107 = Cos(var1[8]);
  t425 = t122*t169;
  t435 = t114*t311;
  t443 = 0. + t425 + t435;
  t162 = -1.*t114*t122;
  t324 = t169*t311;
  t395 = 0. + t162 + t324;
  t444 = Sin(var1[8]);
  t478 = Cos(var1[6]);
  t415 = t107*t395;
  t452 = t443*t444;
  t455 = 0. + t415 + t452;
  t80 = Sin(var1[6]);
  t488 = Sin(var1[7]);
  t509 = t107*t443;
  t516 = -1.*t395*t444;
  t530 = 0. + t509 + t516;
  t535 = t488*t530;
  t538 = 0. + t535;
  t573 = Sin(var1[5]);
  t475 = -1.*t80*t455;
  t541 = t478*t538;
  t547 = 0. + t475 + t541;
  t46 = Cos(var1[5]);
  t596 = t478*t455;
  t653 = t80*t538;
  t674 = 0. + t596 + t653;
  t40 = Sin(var1[3]);
  t873 = t114*t122;
  t885 = -1.*t169*t311;
  t951 = 0. + t873 + t885;
  t964 = t951*t444;
  t971 = 0. + t509 + t964;
  t994 = t107*t951;
  t999 = -1.*t443*t444;
  t1017 = 0. + t994 + t999;
  t1047 = t488*t1017;
  t1052 = 0. + t1047;
  t739 = Cos(var1[3]);
  t740 = Cos(var1[4]);
  t741 = Cos(var1[7]);
  t787 = Sin(var1[4]);
  t990 = -1.*t80*t971;
  t1061 = t478*t1052;
  t1065 = 0. + t990 + t1061;
  t1072 = t478*t971;
  t1074 = t80*t1052;
  t1081 = 0. + t1072 + t1074;
  t1236 = -1.*t741;
  t1258 = 0. + t1236;
  t1268 = t478*t1258;
  t1269 = 0. + t1268;
  t1309 = t1258*t80;
  t1345 = 0. + t1309;
  t553 = t46*t547;
  t682 = -1.*t573*t674;
  t711 = 0. + t553 + t682;
  t745 = t741*t530;
  t748 = 0. + t745;
  t775 = t740*t748;
  t795 = t573*t547;
  t823 = t46*t674;
  t842 = 0. + t795 + t823;
  t850 = t787*t842;
  t852 = 0. + t775 + t850;
  t1067 = t46*t1065;
  t1084 = -1.*t573*t1081;
  t1085 = 0. + t1067 + t1084;
  t1091 = t741*t1017;
  t1098 = 0. + t1091;
  t1107 = t740*t1098;
  t1114 = t573*t1065;
  t1127 = t46*t1081;
  t1147 = 0. + t1114 + t1127;
  t1156 = t787*t1147;
  t1164 = 0. + t1107 + t1156;
  t1280 = t46*t1269;
  t1355 = -1.*t573*t1345;
  t1359 = 0. + t1280 + t1355;
  t1381 = t1269*t573;
  t1390 = t46*t1345;
  t1400 = 0. + t1381 + t1390;
  t1405 = t787*t1400;
  t1410 = 0. + t488;
  t1421 = t740*t1410;
  t1422 = 0. + t1405 + t1421;
  t1533 = -1.*t787*t1098;
  t1536 = t740*t1147;
  t1543 = 0. + t1533 + t1536;
  t1666 = -1.*t122;
  t1668 = 1. + t1666;
  t1635 = -1.*t114;
  t1650 = 1. + t1635;
  t1669 = -0.19074*t1668;
  t1674 = -0.37414*t122;
  t1686 = 0.0011999999999999997*t311;
  t1693 = 0. + t1669 + t1674 + t1686;
  t1704 = -0.03315*t1668;
  t1705 = -0.03195*t122;
  t1716 = 0.18339999999999998*t311;
  t1722 = 0. + t1704 + t1705 + t1716;
  t1611 = -1.*t107;
  t1614 = 1. + t1611;
  t1771 = -0.08055*t1650;
  t1815 = -0.13004*t169;
  t1818 = -1.*t169*t1693;
  t1821 = t114*t1722;
  t1826 = 0. + t1771 + t1815 + t1818 + t1821;
  t1654 = -0.13004*t1650;
  t1660 = 0.08055*t169;
  t1697 = t114*t1693;
  t1729 = t169*t1722;
  t1743 = 0. + t1654 + t1660 + t1697 + t1729;
  t1567 = -1.*t478;
  t1572 = 1. + t1567;
  t1624 = -0.01004*t1614;
  t1762 = t107*t1743;
  t1770 = 0.08055*t444;
  t1829 = t1826*t444;
  t1830 = 0. + t1624 + t1762 + t1770 + t1829;
  t1849 = -1.*t741;
  t1852 = 1. + t1849;
  t1856 = 0.135*t1852;
  t1860 = 0.1303*t741;
  t1874 = 0.08055*t488;
  t1877 = -0.08055*t1614;
  t1881 = t107*t1826;
  t1888 = -0.01004*t444;
  t1894 = -1.*t1743*t444;
  t1907 = 0. + t1877 + t1881 + t1888 + t1894;
  t1910 = t488*t1907;
  t1913 = 0. + t1856 + t1860 + t1874 + t1910;
  t1551 = t740*t1400;
  t1552 = -1.*t787*t1410;
  t1563 = 0. + t1551 + t1552;
  t1573 = 0.135*t1572;
  t1576 = 0.07996*t80;
  t1835 = -1.*t80*t1830;
  t1922 = t478*t1913;
  t1926 = 0. + t1573 + t1576 + t1835 + t1922;
  t1945 = 0.07996*t1572;
  t1946 = -0.135*t80;
  t1955 = t478*t1830;
  t1959 = t80*t1913;
  t1966 = 0. + t1945 + t1946 + t1955 + t1959;
  t1987 = -0.08055*t1852;
  t1991 = 0.00470000000000001*t488;
  t2003 = t741*t1907;
  t2009 = 0. + t1987 + t1991 + t2003;
  t2031 = t573*t1926;
  t2034 = t46*t1966;
  t2035 = 0. + t2031 + t2034;
  t1937 = t46*t1926;
  t1971 = -1.*t573*t1966;
  t1975 = 0. + t1937 + t1971;
  t2026 = -1.*t787*t2009;
  t2049 = t740*t2035;
  t2053 = 0. + t2026 + t2049;
  t2066 = t740*t2009;
  t2076 = t787*t2035;
  t2080 = 0. + t2066 + t2076;
  t1515 = -1.*t787*t748;
  t1519 = t740*t842;
  t1530 = 0. + t1515 + t1519;
  t1978 = t1359*t1975;
  t2103 = -1.*t1975*t1085;
  t2144 = -1.*t1359*t1975;
  t2158 = t1975*t711;
  t2237 = t1975*t1085;
  t2263 = -1.*t1975*t711;
  t2358 = t1410*t2009;
  t2380 = -1.*t2009*t1098;
  t2411 = -1.*t1410*t2009;
  t2461 = t2009*t748;
  t2481 = t2009*t1098;
  t2505 = -1.*t2009*t748;
  t2929 = t1830*t971;
  t2956 = -1.*t1830*t455;
  p_output1[0]=0. - 1.*t40*t711 + t739*t852;
  p_output1[1]=0. - 1.*t1085*t40 + t1164*t739;
  p_output1[2]=0. - 1.*t1359*t40 + t1422*t739;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t711*t739 + t40*t852;
  p_output1[7]=0. + t1164*t40 + t1085*t739;
  p_output1[8]=0. + t1422*t40 + t1359*t739;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1530;
  p_output1[13]=t1543;
  p_output1[14]=t1563;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1543*(t1978 + t1563*t2053 + t1422*t2080) + t1563*(-1.*t1543*t2053 - 1.*t1164*t2080 + t2103);
  p_output1[19]=t1530*(-1.*t1563*t2053 - 1.*t1422*t2080 + t2144) + t1563*(t1530*t2053 + t2158 + t2080*t852);
  p_output1[20]=t1530*(t1543*t2053 + t1164*t2080 + t2237) + t1543*(-1.*t1530*t2053 + t2263 - 1.*t2080*t852);
  p_output1[21]=t1530;
  p_output1[22]=t1543;
  p_output1[23]=t1563;
  p_output1[24]=t1085*(t1978 + t1400*t2035 + t2358) + t1359*(-1.*t1147*t2035 + t2103 + t2380);
  p_output1[25]=(-1.*t1400*t2035 + t2144 + t2411)*t711 + t1359*(t2158 + t2461 + t2035*t842);
  p_output1[26]=(t1147*t2035 + t2237 + t2481)*t711 + t1085*(t2263 + t2505 - 1.*t2035*t842);
  p_output1[27]=t711;
  p_output1[28]=t1085;
  p_output1[29]=t1359;
  p_output1[30]=t1098*(t1269*t1926 + t1345*t1966 + t2358) + t1410*(-1.*t1065*t1926 - 1.*t1081*t1966 + t2380);
  p_output1[31]=t1410*(t2461 + t1926*t547 + t1966*t674) + (-1.*t1269*t1926 - 1.*t1345*t1966 + t2411)*t748;
  p_output1[32]=t1098*(t2505 - 1.*t1926*t547 - 1.*t1966*t674) + (t1065*t1926 + t1081*t1966 + t2481)*t748;
  p_output1[33]=t748;
  p_output1[34]=t1098;
  p_output1[35]=t1410;
  p_output1[36]=t1098*(0. + t1258*t1913 + t2358) - 0.135*t455 + 0.07996*t538 + t1410*(-1.*t1052*t1913 + t2380 - 1.*t1830*t971);
  p_output1[37]=0.07996*t1052 + t1410*(t2461 + t1830*t455 + t1913*t538) + (0. - 1.*t1258*t1913 + t2411)*t748 - 0.135*t971;
  p_output1[38]=0. + 0.07996*t1258 + t1098*(t2505 + t2956 - 1.*t1913*t538) + (t1052*t1913 + t2481 + t2929)*t748;
  p_output1[39]=t748;
  p_output1[40]=t1098;
  p_output1[41]=t1410;
  p_output1[42]=0. + 0.135*t530 - 0.1303*t971;
  p_output1[43]=0. + 0.135*t1017 + 0.1303*t455;
  p_output1[44]=-0.08055 + (0. + t1017*t1907 + t2929)*t455 + (0. + t2956 - 1.*t1907*t530)*t971;
  p_output1[45]=t455;
  p_output1[46]=t971;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t395 - 0.01004*t443 - 1.*t1743*t443 - 1.*t1826*t951;
  p_output1[49]=0. + t1743*t395 + 0.08055*t443 + t1826*t443 - 0.01004*t951;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.08055*t122 - 1.*t122*t1722 - 0.13004*t311 - 1.*t1693*t311;
  p_output1[55]=0. - 0.13004*t122 - 1.*t122*t1693 + 0.08055*t311 + t1722*t311;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=-0.0011999999999999997;
  p_output1[61]=0.18339999999999998;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
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

#include "Jb_LeftShin_mex.hh"

namespace SymExpression
{

void Jb_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
