/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:41 GMT-04:00
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
  double t58;
  double t104;
  double t212;
  double t230;
  double t229;
  double t232;
  double t332;
  double t345;
  double t241;
  double t246;
  double t280;
  double t283;
  double t305;
  double t306;
  double t329;
  double t458;
  double t459;
  double t461;
  double t550;
  double t553;
  double t555;
  double t638;
  double t639;
  double t654;
  double t678;
  double t386;
  double t390;
  double t398;
  double t336;
  double t350;
  double t361;
  double t657;
  double t689;
  double t694;
  double t708;
  double t731;
  double t737;
  double t25;
  double t773;
  double t778;
  double t779;
  double t1032;
  double t1048;
  double t1049;
  double t851;
  double t881;
  double t883;
  double t825;
  double t834;
  double t845;
  double t1107;
  double t1111;
  double t1113;
  double t1242;
  double t1253;
  double t1258;
  double t1281;
  double t982;
  double t984;
  double t1004;
  double t707;
  double t759;
  double t1267;
  double t1296;
  double t1297;
  double t1311;
  double t1313;
  double t1322;
  double t800;
  double t806;
  double t807;
  double t1013;
  double t1021;
  double t915;
  double t928;
  double t1376;
  double t1394;
  double t1420;
  double t1154;
  double t1159;
  double t1161;
  double t1502;
  double t1505;
  double t1511;
  double t1206;
  double t1208;
  double t1329;
  double t1351;
  double t1353;
  double t1302;
  double t1323;
  double t1631;
  double t1639;
  double t1658;
  double t1719;
  double t1723;
  double t1725;
  double t1734;
  double t1371;
  double t1372;
  double t1547;
  double t1553;
  double t1557;
  double t1727;
  double t1738;
  double t1747;
  double t1756;
  double t1760;
  double t1769;
  double t1442;
  double t1450;
  double t1452;
  double t1478;
  double t1489;
  double t1516;
  double t1521;
  double t1606;
  double t1608;
  double t1592;
  double t1594;
  double t1667;
  double t1670;
  double t1672;
  double t1679;
  double t1681;
  double t1688;
  double t1702;
  double t1703;
  double t1707;
  double t1750;
  double t1771;
  double t2143;
  double t2151;
  double t2152;
  double t2214;
  double t2216;
  double t2219;
  double t2251;
  double t2171;
  double t2172;
  double t2178;
  double t1797;
  double t1802;
  double t2230;
  double t2252;
  double t2270;
  double t1967;
  double t1977;
  double t1979;
  double t2288;
  double t2289;
  double t2293;
  double t2013;
  double t2018;
  double t2024;
  double t1819;
  double t1827;
  double t1832;
  double t1837;
  double t1844;
  double t1861;
  double t1883;
  double t1904;
  double t1931;
  double t1938;
  double t2100;
  double t2105;
  double t2048;
  double t2060;
  t58 = Cos(var1[3]);
  t104 = Sin(var1[3]);
  t212 = Cos(var1[4]);
  t230 = Sin(var1[4]);
  t229 = -1.*var1[2]*t212*t104;
  t232 = -1.*var1[1]*t230;
  t332 = Cos(var1[5]);
  t345 = Sin(var1[5]);
  t241 = var1[2]*t58*t212;
  t246 = var1[0]*t230;
  t280 = -1.*var1[1]*t58*t212;
  t283 = var1[0]*t212*t104;
  t305 = t58*t212;
  t306 = t212*t104;
  t329 = -1.*t230;
  t458 = t332*t104*t230;
  t459 = -1.*t58*t345;
  t461 = t458 + t459;
  t550 = t58*t332;
  t553 = t104*t230*t345;
  t555 = t550 + t553;
  t638 = Cos(var1[6]);
  t639 = -1.*t638;
  t654 = 1. + t639;
  t678 = Sin(var1[6]);
  t386 = -1.*t332*t104;
  t390 = t58*t230*t345;
  t398 = t386 + t390;
  t336 = t58*t332*t230;
  t350 = t104*t345;
  t361 = t336 + t350;
  t657 = 0.07996*t654;
  t689 = -0.135*t678;
  t694 = 0. + t657 + t689;
  t708 = 0.135*t654;
  t731 = 0.07996*t678;
  t737 = 0. + t708 + t731;
  t25 = -1.*var1[0];
  t773 = t212*t332*t638;
  t778 = -1.*t212*t345*t678;
  t779 = t773 + t778;
  t1032 = t638*t361;
  t1048 = -1.*t398*t678;
  t1049 = t1032 + t1048;
  t851 = t638*t461;
  t881 = -1.*t555*t678;
  t883 = t851 + t881;
  t825 = -1.*var1[2];
  t834 = -1.*t212*t332*t694;
  t845 = -1.*t212*t345*t737;
  t1107 = t212*t638*t345;
  t1111 = t212*t332*t678;
  t1113 = t1107 + t1111;
  t1242 = Cos(var1[7]);
  t1253 = -1.*t1242;
  t1258 = 1. + t1253;
  t1281 = Sin(var1[7]);
  t982 = t638*t555;
  t984 = t461*t678;
  t1004 = t982 + t984;
  t707 = t461*t694;
  t759 = t555*t737;
  t1267 = 0.135*t1258;
  t1296 = 0.08055*t1281;
  t1297 = 0. + t1267 + t1296;
  t1311 = -0.08055*t1258;
  t1313 = 0.135*t1281;
  t1322 = 0. + t1311 + t1313;
  t800 = t638*t398;
  t806 = t361*t678;
  t807 = t800 + t806;
  t1013 = t212*t332*t694;
  t1021 = t212*t345*t737;
  t915 = -1.*t361*t694;
  t928 = -1.*t398*t737;
  t1376 = t1242*t1113;
  t1394 = t230*t1281;
  t1420 = t1376 + t1394;
  t1154 = -1.*var1[1];
  t1159 = -1.*t461*t694;
  t1161 = -1.*t555*t737;
  t1502 = t1242*t807;
  t1505 = -1.*t58*t212*t1281;
  t1511 = t1502 + t1505;
  t1206 = t361*t694;
  t1208 = t398*t737;
  t1329 = t1242*t1004;
  t1351 = -1.*t212*t104*t1281;
  t1353 = t1329 + t1351;
  t1302 = -1.*t1113*t1297;
  t1323 = t230*t1322;
  t1631 = -1.*t1242*t230;
  t1639 = t1113*t1281;
  t1658 = t1631 + t1639;
  t1719 = Cos(var1[8]);
  t1723 = -1.*t1719;
  t1725 = 1. + t1723;
  t1734 = Sin(var1[8]);
  t1371 = t1004*t1297;
  t1372 = t212*t104*t1322;
  t1547 = t212*t1242*t104;
  t1553 = t1004*t1281;
  t1557 = t1547 + t1553;
  t1727 = -0.08055*t1725;
  t1738 = -0.01004*t1734;
  t1747 = 0. + t1727 + t1738;
  t1756 = -0.01004*t1725;
  t1760 = 0.08055*t1734;
  t1769 = 0. + t1756 + t1760;
  t1442 = t58*t212*t1242;
  t1450 = t807*t1281;
  t1452 = t1442 + t1450;
  t1478 = t1113*t1297;
  t1489 = -1.*t230*t1322;
  t1516 = -1.*t807*t1297;
  t1521 = -1.*t58*t212*t1322;
  t1606 = t807*t1297;
  t1608 = t58*t212*t1322;
  t1592 = -1.*t1004*t1297;
  t1594 = -1.*t212*t104*t1322;
  t1667 = -1.*t1242*t807;
  t1670 = t58*t212*t1281;
  t1672 = 0. + t1667 + t1670;
  t1679 = -1.*t1242*t1004;
  t1681 = t212*t104*t1281;
  t1688 = 0. + t1679 + t1681;
  t1702 = -1.*t1242*t1113;
  t1703 = -1.*t230*t1281;
  t1707 = 0. + t1702 + t1703;
  t1750 = -1.*t1658*t1747;
  t1771 = -1.*t779*t1769;
  t2143 = t1719*t1658;
  t2151 = t779*t1734;
  t2152 = t2143 + t2151;
  t2214 = Cos(var1[9]);
  t2216 = -1.*t2214;
  t2219 = 1. + t2216;
  t2251 = Sin(var1[9]);
  t2171 = t1719*t779;
  t2172 = -1.*t1658*t1734;
  t2178 = t2171 + t2172;
  t1797 = t1557*t1747;
  t1802 = t883*t1769;
  t2230 = -0.08055*t2219;
  t2252 = -0.13004*t2251;
  t2270 = 0. + t2230 + t2252;
  t1967 = t1719*t1557;
  t1977 = t883*t1734;
  t1979 = t1967 + t1977;
  t2288 = -0.13004*t2219;
  t2289 = 0.08055*t2251;
  t2293 = 0. + t2288 + t2289;
  t2013 = t1719*t883;
  t2018 = -1.*t1557*t1734;
  t2024 = t2013 + t2018;
  t1819 = t1719*t1452;
  t1827 = t1049*t1734;
  t1832 = t1819 + t1827;
  t1837 = t1719*t1049;
  t1844 = -1.*t1452*t1734;
  t1861 = t1837 + t1844;
  t1883 = t1658*t1747;
  t1904 = t779*t1769;
  t1931 = -1.*t1452*t1747;
  t1938 = -1.*t1049*t1769;
  t2100 = -1.*t1557*t1747;
  t2105 = -1.*t883*t1769;
  t2048 = t1452*t1747;
  t2060 = t1049*t1769;
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
  p_output1[24]=-1.*t58*var1[2];
  p_output1[25]=-1.*t104*var1[2];
  p_output1[26]=t58*var1[0] + t104*var1[1];
  p_output1[27]=-1.*t104;
  p_output1[28]=t58;
  p_output1[29]=0;
  p_output1[30]=t229 + t232;
  p_output1[31]=t241 + t246;
  p_output1[32]=t280 + t283;
  p_output1[33]=t305;
  p_output1[34]=t306;
  p_output1[35]=t329;
  p_output1[36]=t229 + t232 - 0.135*t361 + 0.07996*t398;
  p_output1[37]=t241 + t246 - 0.135*t461 + 0.07996*t555;
  p_output1[38]=t280 + t283 - 0.135*t212*t332 + 0.07996*t212*t345;
  p_output1[39]=0. + t305;
  p_output1[40]=0. + t306;
  p_output1[41]=0. + t329;
  p_output1[42]=0.135*t212*t58 + 0.08055*t807 + (0. + t825 + t834 + t845)*t883 + t779*(0. + t707 + t759 + var1[1]);
  p_output1[43]=0.08055*t1004 + 0.135*t104*t212 + t779*(0. + t25 + t915 + t928) + t1049*(0. + t1013 + t1021 + var1[2]);
  p_output1[44]=0.08055*t1113 + t1049*(0. + t1154 + t1159 + t1161) - 0.135*t230 + t883*(0. + t1206 + t1208 + var1[0]);
  p_output1[45]=0. + t1032 + t1048;
  p_output1[46]=0. + t851 + t881;
  p_output1[47]=0. + t773 + t778;
  p_output1[48]=0.08055*t1049 - 0.01004*t1452 - 1.*t1353*(0. + t1302 + t1323 + t825 + t834 + t845) - 1.*t1420*(0. + t1371 + t1372 + t707 + t759 + var1[1]);
  p_output1[49]=-0.01004*t1557 + 0.08055*t883 - 1.*t1420*(0. + t1516 + t1521 + t25 + t915 + t928) - 1.*t1511*(0. + t1013 + t1021 + t1478 + t1489 + var1[2]);
  p_output1[50]=-1.*t1511*(0. + t1154 + t1159 + t1161 + t1592 + t1594) - 0.01004*t1658 + 0.08055*t779 - 1.*t1353*(0. + t1206 + t1208 + t1606 + t1608 + var1[0]);
  p_output1[51]=t1672;
  p_output1[52]=t1688;
  p_output1[53]=t1707;
  p_output1[54]=-0.13004*t1832 + 0.08055*t1861 - 1.*t1353*(0. + t1302 + t1323 + t1750 + t1771 + t825 + t834 + t845) - 1.*t1420*(0. + t1371 + t1372 + t1797 + t1802 + t707 + t759 + var1[1]);
  p_output1[55]=-0.13004*t1979 + 0.08055*t2024 - 1.*t1420*(0. + t1516 + t1521 + t1931 + t1938 + t25 + t915 + t928) - 1.*t1511*(0. + t1013 + t1021 + t1478 + t1489 + t1883 + t1904 + var1[2]);
  p_output1[56]=-1.*t1511*(0. + t1154 + t1159 + t1161 + t1592 + t1594 + t2100 + t2105) - 0.13004*t2152 + 0.08055*t2178 - 1.*t1353*(0. + t1206 + t1208 + t1606 + t1608 + t2048 + t2060 + var1[0]);
  p_output1[57]=t1672;
  p_output1[58]=t1688;
  p_output1[59]=t1707;
  p_output1[60]=0.03315*(t1861*t2214 - 1.*t1832*t2251) - 0.19074*(t1832*t2214 + t1861*t2251) - 1.*t1353*(0. + t1302 + t1323 + t1750 + t1771 - 1.*t2152*t2270 - 1.*t2178*t2293 + t825 + t834 + t845) - 1.*t1420*(0. + t1371 + t1372 + t1797 + t1802 + t1979*t2270 + t2024*t2293 + t707 + t759 + var1[1]);
  p_output1[61]=0.03315*(t2024*t2214 - 1.*t1979*t2251) - 0.19074*(t1979*t2214 + t2024*t2251) - 1.*t1420*(0. + t1516 + t1521 + t1931 + t1938 - 1.*t1832*t2270 - 1.*t1861*t2293 + t25 + t915 + t928) - 1.*t1511*(0. + t1013 + t1021 + t1478 + t1489 + t1883 + t1904 + t2152*t2270 + t2178*t2293 + var1[2]);
  p_output1[62]=0.03315*(t2178*t2214 - 1.*t2152*t2251) - 0.19074*(t2152*t2214 + t2178*t2251) - 1.*t1511*(0. + t1154 + t1159 + t1161 + t1592 + t1594 + t2100 + t2105 - 1.*t1979*t2270 - 1.*t2024*t2293) - 1.*t1353*(0. + t1206 + t1208 + t1606 + t1608 + t2048 + t2060 + t1832*t2270 + t1861*t2293 + var1[0]);
  p_output1[63]=t1672;
  p_output1[64]=t1688;
  p_output1[65]=t1707;
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

#include "Js_LeftShin_mex.hh"

namespace SymExpression
{

void Js_LeftShin_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
