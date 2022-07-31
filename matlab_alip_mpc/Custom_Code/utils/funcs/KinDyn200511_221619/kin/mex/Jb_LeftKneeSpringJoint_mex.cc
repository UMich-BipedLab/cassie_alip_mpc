/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:39 GMT-04:00
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
  double t113;
  double t145;
  double t108;
  double t147;
  double t95;
  double t182;
  double t186;
  double t188;
  double t119;
  double t150;
  double t151;
  double t189;
  double t291;
  double t175;
  double t193;
  double t228;
  double t85;
  double t294;
  double t311;
  double t313;
  double t361;
  double t389;
  double t395;
  double t444;
  double t272;
  double t397;
  double t404;
  double t61;
  double t447;
  double t452;
  double t459;
  double t34;
  double t648;
  double t649;
  double t651;
  double t655;
  double t670;
  double t679;
  double t689;
  double t690;
  double t698;
  double t699;
  double t492;
  double t493;
  double t497;
  double t594;
  double t672;
  double t731;
  double t737;
  double t747;
  double t754;
  double t759;
  double t833;
  double t835;
  double t836;
  double t862;
  double t916;
  double t918;
  double t430;
  double t460;
  double t484;
  double t523;
  double t529;
  double t550;
  double t596;
  double t600;
  double t622;
  double t623;
  double t624;
  double t746;
  double t766;
  double t770;
  double t806;
  double t807;
  double t808;
  double t812;
  double t815;
  double t820;
  double t822;
  double t828;
  double t902;
  double t923;
  double t924;
  double t934;
  double t935;
  double t937;
  double t939;
  double t940;
  double t944;
  double t945;
  double t1084;
  double t1092;
  double t1093;
  double t1154;
  double t1155;
  double t1146;
  double t1149;
  double t1195;
  double t1197;
  double t1202;
  double t1160;
  double t1167;
  double t1179;
  double t1125;
  double t1133;
  double t1234;
  double t1244;
  double t1263;
  double t1279;
  double t1281;
  double t1152;
  double t1184;
  double t1191;
  double t1204;
  double t1209;
  double t1105;
  double t1115;
  double t1135;
  double t1212;
  double t1224;
  double t1282;
  double t1288;
  double t1298;
  double t1315;
  double t1322;
  double t1325;
  double t1331;
  double t1332;
  double t1337;
  double t1345;
  double t1350;
  double t1351;
  double t1360;
  double t1377;
  double t1096;
  double t1097;
  double t1104;
  double t1118;
  double t1123;
  double t1292;
  double t1387;
  double t1391;
  double t1415;
  double t1423;
  double t1431;
  double t1434;
  double t1439;
  double t1460;
  double t1466;
  double t1468;
  double t1477;
  double t1481;
  double t1489;
  double t1495;
  double t1411;
  double t1441;
  double t1458;
  double t1479;
  double t1500;
  double t1504;
  double t1511;
  double t1515;
  double t1516;
  double t1040;
  double t1047;
  double t1075;
  double t1459;
  double t1547;
  double t1572;
  double t1586;
  double t1635;
  double t1673;
  double t1731;
  double t1741;
  double t1781;
  double t1815;
  double t1850;
  double t1865;
  double t2183;
  double t2212;
  t113 = Cos(var1[10]);
  t145 = Sin(var1[9]);
  t108 = Cos(var1[9]);
  t147 = Sin(var1[10]);
  t95 = Cos(var1[8]);
  t182 = t113*t145;
  t186 = t108*t147;
  t188 = 0. + t182 + t186;
  t119 = -1.*t108*t113;
  t150 = t145*t147;
  t151 = 0. + t119 + t150;
  t189 = Sin(var1[8]);
  t291 = Cos(var1[6]);
  t175 = t95*t151;
  t193 = t188*t189;
  t228 = 0. + t175 + t193;
  t85 = Sin(var1[6]);
  t294 = Sin(var1[7]);
  t311 = t95*t188;
  t313 = -1.*t151*t189;
  t361 = 0. + t311 + t313;
  t389 = t294*t361;
  t395 = 0. + t389;
  t444 = Sin(var1[5]);
  t272 = -1.*t85*t228;
  t397 = t291*t395;
  t404 = 0. + t272 + t397;
  t61 = Cos(var1[5]);
  t447 = t291*t228;
  t452 = t85*t395;
  t459 = 0. + t447 + t452;
  t34 = Sin(var1[3]);
  t648 = t108*t113;
  t649 = -1.*t145*t147;
  t651 = 0. + t648 + t649;
  t655 = t651*t189;
  t670 = 0. + t311 + t655;
  t679 = t95*t651;
  t689 = -1.*t188*t189;
  t690 = 0. + t679 + t689;
  t698 = t294*t690;
  t699 = 0. + t698;
  t492 = Cos(var1[3]);
  t493 = Cos(var1[4]);
  t497 = Cos(var1[7]);
  t594 = Sin(var1[4]);
  t672 = -1.*t85*t670;
  t731 = t291*t699;
  t737 = 0. + t672 + t731;
  t747 = t291*t670;
  t754 = t85*t699;
  t759 = 0. + t747 + t754;
  t833 = -1.*t497;
  t835 = 0. + t833;
  t836 = t291*t835;
  t862 = 0. + t836;
  t916 = t835*t85;
  t918 = 0. + t916;
  t430 = t61*t404;
  t460 = -1.*t444*t459;
  t484 = 0. + t430 + t460;
  t523 = t497*t361;
  t529 = 0. + t523;
  t550 = t493*t529;
  t596 = t444*t404;
  t600 = t61*t459;
  t622 = 0. + t596 + t600;
  t623 = t594*t622;
  t624 = 0. + t550 + t623;
  t746 = t61*t737;
  t766 = -1.*t444*t759;
  t770 = 0. + t746 + t766;
  t806 = t497*t690;
  t807 = 0. + t806;
  t808 = t493*t807;
  t812 = t444*t737;
  t815 = t61*t759;
  t820 = 0. + t812 + t815;
  t822 = t594*t820;
  t828 = 0. + t808 + t822;
  t902 = t61*t862;
  t923 = -1.*t444*t918;
  t924 = 0. + t902 + t923;
  t934 = t862*t444;
  t935 = t61*t918;
  t937 = 0. + t934 + t935;
  t939 = t594*t937;
  t940 = 0. + t294;
  t944 = t493*t940;
  t945 = 0. + t939 + t944;
  t1084 = -1.*t594*t807;
  t1092 = t493*t820;
  t1093 = 0. + t1084 + t1092;
  t1154 = -1.*t113;
  t1155 = 1. + t1154;
  t1146 = -1.*t108;
  t1149 = 1. + t1146;
  t1195 = -0.03315*t1155;
  t1197 = -0.03315*t113;
  t1202 = 0. + t1195 + t1197;
  t1160 = -0.19074*t1155;
  t1167 = -0.19074*t113;
  t1179 = 0. + t1160 + t1167;
  t1125 = -1.*t95;
  t1133 = 1. + t1125;
  t1234 = -0.08055*t1149;
  t1244 = t108*t1202;
  t1263 = -0.13004*t145;
  t1279 = -1.*t1179*t145;
  t1281 = 0. + t1234 + t1244 + t1263 + t1279;
  t1152 = -0.13004*t1149;
  t1184 = t108*t1179;
  t1191 = 0.08055*t145;
  t1204 = t1202*t145;
  t1209 = 0. + t1152 + t1184 + t1191 + t1204;
  t1105 = -1.*t291;
  t1115 = 1. + t1105;
  t1135 = -0.01004*t1133;
  t1212 = t95*t1209;
  t1224 = 0.08055*t189;
  t1282 = t1281*t189;
  t1288 = 0. + t1135 + t1212 + t1224 + t1282;
  t1298 = -1.*t497;
  t1315 = 1. + t1298;
  t1322 = 0.135*t1315;
  t1325 = 0.1305*t497;
  t1331 = 0.08055*t294;
  t1332 = -0.08055*t1133;
  t1337 = t95*t1281;
  t1345 = -0.01004*t189;
  t1350 = -1.*t1209*t189;
  t1351 = 0. + t1332 + t1337 + t1345 + t1350;
  t1360 = t294*t1351;
  t1377 = 0. + t1322 + t1325 + t1331 + t1360;
  t1096 = t493*t937;
  t1097 = -1.*t594*t940;
  t1104 = 0. + t1096 + t1097;
  t1118 = 0.135*t1115;
  t1123 = 0.07996*t85;
  t1292 = -1.*t85*t1288;
  t1387 = t291*t1377;
  t1391 = 0. + t1118 + t1123 + t1292 + t1387;
  t1415 = 0.07996*t1115;
  t1423 = -0.135*t85;
  t1431 = t291*t1288;
  t1434 = t85*t1377;
  t1439 = 0. + t1415 + t1423 + t1431 + t1434;
  t1460 = -0.08055*t1315;
  t1466 = 0.004500000000000004*t294;
  t1468 = t497*t1351;
  t1477 = 0. + t1460 + t1466 + t1468;
  t1481 = t444*t1391;
  t1489 = t61*t1439;
  t1495 = 0. + t1481 + t1489;
  t1411 = t61*t1391;
  t1441 = -1.*t444*t1439;
  t1458 = 0. + t1411 + t1441;
  t1479 = -1.*t594*t1477;
  t1500 = t493*t1495;
  t1504 = 0. + t1479 + t1500;
  t1511 = t493*t1477;
  t1515 = t594*t1495;
  t1516 = 0. + t1511 + t1515;
  t1040 = -1.*t594*t529;
  t1047 = t493*t622;
  t1075 = 0. + t1040 + t1047;
  t1459 = t924*t1458;
  t1547 = -1.*t1458*t770;
  t1572 = -1.*t924*t1458;
  t1586 = t1458*t484;
  t1635 = t1458*t770;
  t1673 = -1.*t1458*t484;
  t1731 = t940*t1477;
  t1741 = -1.*t1477*t807;
  t1781 = -1.*t940*t1477;
  t1815 = t1477*t529;
  t1850 = t1477*t807;
  t1865 = -1.*t1477*t529;
  t2183 = t1288*t670;
  t2212 = -1.*t1288*t228;
  p_output1[0]=0. - 1.*t34*t484 + t492*t624;
  p_output1[1]=0. - 1.*t34*t770 + t492*t828;
  p_output1[2]=0. - 1.*t34*t924 + t492*t945;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t484*t492 + t34*t624;
  p_output1[7]=0. + t492*t770 + t34*t828;
  p_output1[8]=0. + t492*t924 + t34*t945;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1075;
  p_output1[13]=t1093;
  p_output1[14]=t1104;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1104*(-1.*t1093*t1504 + t1547 - 1.*t1516*t828) + t1093*(t1459 + t1104*t1504 + t1516*t945);
  p_output1[19]=t1104*(t1075*t1504 + t1586 + t1516*t624) + t1075*(-1.*t1104*t1504 + t1572 - 1.*t1516*t945);
  p_output1[20]=t1093*(-1.*t1075*t1504 + t1673 - 1.*t1516*t624) + t1075*(t1093*t1504 + t1635 + t1516*t828);
  p_output1[21]=t1075;
  p_output1[22]=t1093;
  p_output1[23]=t1104;
  p_output1[24]=(t1547 + t1741 - 1.*t1495*t820)*t924 + t770*(t1459 + t1731 + t1495*t937);
  p_output1[25]=(t1586 + t1815 + t1495*t622)*t924 + t484*(t1572 + t1781 - 1.*t1495*t937);
  p_output1[26]=(t1673 + t1865 - 1.*t1495*t622)*t770 + t484*(t1635 + t1850 + t1495*t820);
  p_output1[27]=t484;
  p_output1[28]=t770;
  p_output1[29]=t924;
  p_output1[30]=t807*(t1731 + t1391*t862 + t1439*t918) + (t1741 - 1.*t1391*t737 - 1.*t1439*t759)*t940;
  p_output1[31]=t529*(t1781 - 1.*t1391*t862 - 1.*t1439*t918) + (t1815 + t1391*t404 + t1439*t459)*t940;
  p_output1[32]=t529*(t1850 + t1391*t737 + t1439*t759) + (t1865 - 1.*t1391*t404 - 1.*t1439*t459)*t807;
  p_output1[33]=t529;
  p_output1[34]=t807;
  p_output1[35]=t940;
  p_output1[36]=-0.135*t228 + 0.07996*t395 + t807*(0. + t1731 + t1377*t835) + (t1741 - 1.*t1288*t670 - 1.*t1377*t699)*t940;
  p_output1[37]=-0.135*t670 + 0.07996*t699 + t529*(0. + t1781 - 1.*t1377*t835) + (t1815 + t1288*t228 + t1377*t395)*t940;
  p_output1[38]=0. + t529*(t1850 + t2183 + t1377*t699) + (t1865 + t2212 - 1.*t1377*t395)*t807 + 0.07996*t835;
  p_output1[39]=t529;
  p_output1[40]=t807;
  p_output1[41]=t940;
  p_output1[42]=0. + 0.135*t361 - 0.1305*t670;
  p_output1[43]=0. + 0.1305*t228 + 0.135*t690;
  p_output1[44]=-0.08055 + (0. + t2212 - 1.*t1351*t361)*t670 + t228*(0. + t2183 + t1351*t690);
  p_output1[45]=t228;
  p_output1[46]=t670;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t151 - 0.01004*t188 - 1.*t1209*t188 - 1.*t1281*t651;
  p_output1[49]=0. + t1209*t151 + 0.08055*t188 + t1281*t188 - 0.01004*t651;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.08055*t113 - 1.*t113*t1202 - 0.13004*t147 - 1.*t1179*t147;
  p_output1[55]=0. - 0.13004*t113 - 1.*t113*t1179 + 0.08055*t147 + t1202*t147;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0.;
  p_output1[61]=0.;
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

#include "Jb_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
