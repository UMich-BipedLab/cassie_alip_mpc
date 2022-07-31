/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:44 GMT-04:00
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
  double t62;
  double t83;
  double t121;
  double t148;
  double t129;
  double t171;
  double t366;
  double t393;
  double t219;
  double t220;
  double t266;
  double t278;
  double t315;
  double t330;
  double t357;
  double t371;
  double t412;
  double t418;
  double t449;
  double t466;
  double t474;
  double t733;
  double t720;
  double t497;
  double t498;
  double t508;
  double t845;
  double t850;
  double t521;
  double t524;
  double t578;
  double t851;
  double t880;
  double t900;
  double t915;
  double t918;
  double t920;
  double t761;
  double t769;
  double t775;
  double t52;
  double t1107;
  double t1108;
  double t1125;
  double t968;
  double t970;
  double t978;
  double t723;
  double t737;
  double t742;
  double t953;
  double t954;
  double t1306;
  double t1338;
  double t956;
  double t1359;
  double t1361;
  double t1158;
  double t1199;
  double t1206;
  double t1134;
  double t1137;
  double t1140;
  double t1370;
  double t1378;
  double t1379;
  double t904;
  double t925;
  double t1392;
  double t1394;
  double t1396;
  double t1060;
  double t1062;
  double t1450;
  double t1452;
  double t1461;
  double t1017;
  double t1029;
  double t1259;
  double t1260;
  double t1421;
  double t1436;
  double t1440;
  double t1510;
  double t1519;
  double t1528;
  double t1224;
  double t1226;
  double t1234;
  double t1390;
  double t1406;
  double t1782;
  double t1788;
  double t1794;
  double t1823;
  double t1613;
  double t1629;
  double t1639;
  double t1313;
  double t1346;
  double t1348;
  double t1473;
  double t1479;
  double t1807;
  double t1824;
  double t1825;
  double t1845;
  double t1866;
  double t1881;
  double t1573;
  double t1574;
  double t1585;
  double t1504;
  double t1505;
  double t1530;
  double t1553;
  double t1657;
  double t1658;
  double t1675;
  double t1687;
  double t1701;
  double t1714;
  double t1716;
  double t1724;
  double t1751;
  double t1755;
  double t1756;
  double t1772;
  double t1779;
  t62 = Cos(var1[3]);
  t83 = Sin(var1[3]);
  t121 = Cos(var1[4]);
  t148 = Sin(var1[4]);
  t129 = -1.*var1[2]*t121*t83;
  t171 = -1.*var1[1]*t148;
  t366 = Cos(var1[5]);
  t393 = Sin(var1[5]);
  t219 = var1[2]*t62*t121;
  t220 = var1[0]*t148;
  t266 = -1.*var1[1]*t62*t121;
  t278 = var1[0]*t121*t83;
  t315 = t62*t121;
  t330 = t121*t83;
  t357 = -1.*t148;
  t371 = t62*t366*t148;
  t412 = t83*t393;
  t418 = t371 + t412;
  t449 = -1.*t366*t83;
  t466 = t62*t148*t393;
  t474 = t449 + t466;
  t733 = Cos(var1[13]);
  t720 = Sin(var1[13]);
  t497 = t366*t83*t148;
  t498 = -1.*t62*t393;
  t508 = t497 + t498;
  t845 = -1.*t733;
  t850 = 1. + t845;
  t521 = t62*t366;
  t524 = t83*t148*t393;
  t578 = t521 + t524;
  t851 = 0.07996*t850;
  t880 = 0.135*t720;
  t900 = 0. + t851 + t880;
  t915 = -0.135*t850;
  t918 = 0.07996*t720;
  t920 = 0. + t915 + t918;
  t761 = t733*t121*t366;
  t769 = -1.*t121*t720*t393;
  t775 = t761 + t769;
  t52 = -1.*var1[0];
  t1107 = t733*t418;
  t1108 = -1.*t720*t474;
  t1125 = t1107 + t1108;
  t968 = t733*t508;
  t970 = -1.*t720*t578;
  t978 = t968 + t970;
  t723 = t720*t418;
  t737 = t733*t474;
  t742 = t723 + t737;
  t953 = -1.*var1[2];
  t954 = -1.*t121*t366*t900;
  t1306 = Cos(var1[14]);
  t1338 = Sin(var1[14]);
  t956 = -1.*t121*t920*t393;
  t1359 = -1.*t1306;
  t1361 = 1. + t1359;
  t1158 = t121*t366*t720;
  t1199 = t733*t121*t393;
  t1206 = t1158 + t1199;
  t1134 = t720*t508;
  t1137 = t733*t578;
  t1140 = t1134 + t1137;
  t1370 = -0.08055*t1361;
  t1378 = -0.135*t1338;
  t1379 = 0. + t1370 + t1378;
  t904 = t900*t508;
  t925 = t920*t578;
  t1392 = -0.135*t1361;
  t1394 = 0.08055*t1338;
  t1396 = 0. + t1392 + t1394;
  t1060 = t121*t366*t900;
  t1062 = t121*t920*t393;
  t1450 = t1338*t148;
  t1452 = t1306*t1206;
  t1461 = t1450 + t1452;
  t1017 = -1.*t900*t418;
  t1029 = -1.*t920*t474;
  t1259 = t900*t418;
  t1260 = t920*t474;
  t1421 = -1.*t121*t1338*t83;
  t1436 = t1306*t1140;
  t1440 = t1421 + t1436;
  t1510 = -1.*t62*t121*t1338;
  t1519 = t1306*t742;
  t1528 = t1510 + t1519;
  t1224 = -1.*var1[1];
  t1226 = -1.*t900*t508;
  t1234 = -1.*t920*t578;
  t1390 = t1379*t148;
  t1406 = -1.*t1396*t1206;
  t1782 = Cos(var1[15]);
  t1788 = -1.*t1782;
  t1794 = 1. + t1788;
  t1823 = Sin(var1[15]);
  t1613 = -1.*t1306*t148;
  t1629 = t1338*t1206;
  t1639 = t1613 + t1629;
  t1313 = t1306*t62*t121;
  t1346 = t1338*t742;
  t1348 = t1313 + t1346;
  t1473 = t121*t1379*t83;
  t1479 = t1396*t1140;
  t1807 = -0.01004*t1794;
  t1824 = 0.08055*t1823;
  t1825 = 0. + t1807 + t1824;
  t1845 = -0.08055*t1794;
  t1866 = -0.01004*t1823;
  t1881 = 0. + t1845 + t1866;
  t1573 = t1306*t121*t83;
  t1574 = t1338*t1140;
  t1585 = t1573 + t1574;
  t1504 = -1.*t1379*t148;
  t1505 = t1396*t1206;
  t1530 = -1.*t62*t121*t1379;
  t1553 = -1.*t1396*t742;
  t1657 = t62*t121*t1379;
  t1658 = t1396*t742;
  t1675 = -1.*t121*t1379*t83;
  t1687 = -1.*t1396*t1140;
  t1701 = t62*t121*t1338;
  t1714 = -1.*t1306*t742;
  t1716 = 0. + t1701 + t1714;
  t1724 = t121*t1338*t83;
  t1751 = -1.*t1306*t1140;
  t1755 = 0. + t1724 + t1751;
  t1756 = -1.*t1338*t148;
  t1772 = -1.*t1306*t1206;
  t1779 = 0. + t1756 + t1772;
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
  p_output1[19]=t52;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t62*var1[2];
  p_output1[25]=-1.*t83*var1[2];
  p_output1[26]=t62*var1[0] + t83*var1[1];
  p_output1[27]=-1.*t83;
  p_output1[28]=t62;
  p_output1[29]=0;
  p_output1[30]=t129 + t171;
  p_output1[31]=t219 + t220;
  p_output1[32]=t266 + t278;
  p_output1[33]=t315;
  p_output1[34]=t330;
  p_output1[35]=t357;
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
  p_output1[78]=t129 + t171 + 0.135*t418 + 0.07996*t474;
  p_output1[79]=t219 + t220 + 0.135*t508 + 0.07996*t578;
  p_output1[80]=t266 + t278 + 0.135*t121*t366 + 0.07996*t121*t393;
  p_output1[81]=0. + t315;
  p_output1[82]=0. + t330;
  p_output1[83]=0. + t357;
  p_output1[84]=-0.135*t121*t62 + 0.08055*t742 + (0. + t953 + t954 + t956)*t978 + t775*(0. + t904 + t925 + var1[1]);
  p_output1[85]=0.08055*t1140 + (0. + t1017 + t1029 + t52)*t775 - 0.135*t121*t83 + t1125*(0. + t1060 + t1062 + var1[2]);
  p_output1[86]=0.08055*t1206 + t1125*(0. + t1224 + t1226 + t1234) + 0.135*t148 + t978*(0. + t1259 + t1260 + var1[0]);
  p_output1[87]=0. + t1107 + t1108;
  p_output1[88]=0. + t968 + t970;
  p_output1[89]=0. + t761 + t769;
  p_output1[90]=0.08055*t1125 - 0.01004*t1348 - 1.*t1440*(0. + t1390 + t1406 + t953 + t954 + t956) - 1.*t1461*(0. + t1473 + t1479 + t904 + t925 + var1[1]);
  p_output1[91]=-0.01004*t1585 - 1.*t1461*(0. + t1017 + t1029 + t1530 + t1553 + t52) + 0.08055*t978 - 1.*t1528*(0. + t1060 + t1062 + t1504 + t1505 + var1[2]);
  p_output1[92]=-0.01004*t1639 - 1.*t1528*(0. + t1224 + t1226 + t1234 + t1675 + t1687) + 0.08055*t775 - 1.*t1440*(0. + t1259 + t1260 + t1657 + t1658 + var1[0]);
  p_output1[93]=t1716;
  p_output1[94]=t1755;
  p_output1[95]=t1779;
  p_output1[96]=-0.13004*(t1348*t1782 + t1125*t1823) + 0.08055*(t1125*t1782 - 1.*t1348*t1823) - 1.*t1440*(0. + t1390 + t1406 - 1.*t1639*t1881 - 1.*t1825*t775 + t953 + t954 + t956) - 1.*t1461*(0. + t1473 + t1479 + t1585*t1881 + t904 + t925 + t1825*t978 + var1[1]);
  p_output1[97]=-1.*t1461*(0. + t1017 + t1029 + t1530 + t1553 - 1.*t1125*t1825 - 1.*t1348*t1881 + t52) + 0.08055*(-1.*t1585*t1823 + t1782*t978) - 0.13004*(t1585*t1782 + t1823*t978) - 1.*t1528*(0. + t1060 + t1062 + t1504 + t1505 + t1639*t1881 + t1825*t775 + var1[2]);
  p_output1[98]=0.08055*(-1.*t1639*t1823 + t1782*t775) - 0.13004*(t1639*t1782 + t1823*t775) - 1.*t1528*(0. + t1224 + t1226 + t1234 + t1675 + t1687 - 1.*t1585*t1881 - 1.*t1825*t978) - 1.*t1440*(0. + t1259 + t1260 + t1657 + t1658 + t1125*t1825 + t1348*t1881 + var1[0]);
  p_output1[99]=t1716;
  p_output1[100]=t1755;
  p_output1[101]=t1779;
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

#include "Js_RightKneeJoint_mex.hh"

namespace SymExpression
{

void Js_RightKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
