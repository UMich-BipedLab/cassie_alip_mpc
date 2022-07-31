/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:22 GMT-04:00
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
  double t100;
  double t82;
  double t90;
  double t113;
  double t210;
  double t97;
  double t154;
  double t176;
  double t75;
  double t215;
  double t233;
  double t235;
  double t259;
  double t208;
  double t240;
  double t246;
  double t73;
  double t263;
  double t264;
  double t269;
  double t288;
  double t251;
  double t272;
  double t280;
  double t39;
  double t299;
  double t301;
  double t302;
  double t313;
  double t321;
  double t322;
  double t25;
  double t350;
  double t355;
  double t362;
  double t284;
  double t325;
  double t330;
  double t371;
  double t24;
  double t504;
  double t506;
  double t516;
  double t486;
  double t528;
  double t538;
  double t544;
  double t555;
  double t540;
  double t556;
  double t563;
  double t585;
  double t592;
  double t607;
  double t609;
  double t626;
  double t389;
  double t394;
  double t400;
  double t442;
  double t649;
  double t650;
  double t661;
  double t568;
  double t631;
  double t634;
  double t770;
  double t785;
  double t815;
  double t817;
  double t792;
  double t797;
  double t337;
  double t374;
  double t376;
  double t410;
  double t415;
  double t418;
  double t450;
  double t461;
  double t463;
  double t468;
  double t480;
  double t641;
  double t665;
  double t666;
  double t677;
  double t683;
  double t689;
  double t694;
  double t700;
  double t728;
  double t733;
  double t738;
  double t810;
  double t822;
  double t826;
  double t835;
  double t842;
  double t843;
  double t844;
  double t845;
  double t848;
  double t849;
  double t928;
  double t934;
  double t935;
  double t1085;
  double t1090;
  double t1040;
  double t1050;
  double t1142;
  double t1144;
  double t1147;
  double t1101;
  double t1108;
  double t1114;
  double t1014;
  double t1028;
  double t1082;
  double t1122;
  double t1137;
  double t1150;
  double t1151;
  double t1164;
  double t1165;
  double t1166;
  double t1168;
  double t1187;
  double t992;
  double t1008;
  double t1034;
  double t1036;
  double t1153;
  double t1190;
  double t1205;
  double t1212;
  double t1217;
  double t1224;
  double t1226;
  double t1231;
  double t960;
  double t961;
  double t1009;
  double t1013;
  double t1207;
  double t1238;
  double t1241;
  double t1256;
  double t1259;
  double t1261;
  double t1278;
  double t1290;
  double t1296;
  double t1298;
  double t1310;
  double t1312;
  double t1316;
  double t1317;
  double t1334;
  double t936;
  double t942;
  double t943;
  double t1367;
  double t1377;
  double t1382;
  double t1385;
  double t1401;
  double t972;
  double t988;
  double t1243;
  double t1337;
  double t1338;
  double t1422;
  double t1427;
  double t1436;
  double t1441;
  double t1449;
  double t1450;
  double t1452;
  double t1346;
  double t1405;
  double t1416;
  double t1444;
  double t1476;
  double t1480;
  double t1484;
  double t1485;
  double t1487;
  double t922;
  double t923;
  double t926;
  double t1419;
  double t1523;
  double t1588;
  double t1615;
  double t1646;
  double t1681;
  double t1710;
  double t1723;
  double t1765;
  double t1788;
  double t1799;
  double t1839;
  double t2197;
  double t2223;
  t100 = Cos(var1[17]);
  t82 = Cos(var1[18]);
  t90 = Sin(var1[17]);
  t113 = Sin(var1[18]);
  t210 = Cos(var1[16]);
  t97 = t82*t90;
  t154 = t100*t113;
  t176 = 0. + t97 + t154;
  t75 = Sin(var1[16]);
  t215 = -1.*t100*t82;
  t233 = t90*t113;
  t235 = 0. + t215 + t233;
  t259 = Sin(var1[15]);
  t208 = t75*t176;
  t240 = t210*t235;
  t246 = 0. + t208 + t240;
  t73 = Cos(var1[15]);
  t263 = t210*t176;
  t264 = -1.*t75*t235;
  t269 = 0. + t263 + t264;
  t288 = Cos(var1[13]);
  t251 = t73*t246;
  t272 = t259*t269;
  t280 = 0. + t251 + t272;
  t39 = Sin(var1[13]);
  t299 = Sin(var1[14]);
  t301 = -1.*t259*t246;
  t302 = t73*t269;
  t313 = 0. + t301 + t302;
  t321 = t299*t313;
  t322 = 0. + t321;
  t25 = Cos(var1[5]);
  t350 = t288*t280;
  t355 = t39*t322;
  t362 = 0. + t350 + t355;
  t284 = -1.*t39*t280;
  t325 = t288*t322;
  t330 = 0. + t284 + t325;
  t371 = Sin(var1[5]);
  t24 = Sin(var1[3]);
  t504 = t100*t82;
  t506 = -1.*t90*t113;
  t516 = 0. + t504 + t506;
  t486 = -1.*t75*t176;
  t528 = t210*t516;
  t538 = 0. + t486 + t528;
  t544 = t75*t516;
  t555 = 0. + t263 + t544;
  t540 = t259*t538;
  t556 = t73*t555;
  t563 = 0. + t540 + t556;
  t585 = t73*t538;
  t592 = -1.*t259*t555;
  t607 = 0. + t585 + t592;
  t609 = t299*t607;
  t626 = 0. + t609;
  t389 = Cos(var1[3]);
  t394 = Cos(var1[4]);
  t400 = Cos(var1[14]);
  t442 = Sin(var1[4]);
  t649 = t288*t563;
  t650 = t39*t626;
  t661 = 0. + t649 + t650;
  t568 = -1.*t39*t563;
  t631 = t288*t626;
  t634 = 0. + t568 + t631;
  t770 = -1.*t400;
  t785 = 0. + t770;
  t815 = t785*t39;
  t817 = 0. + t815;
  t792 = t288*t785;
  t797 = 0. + t792;
  t337 = t25*t330;
  t374 = -1.*t362*t371;
  t376 = 0. + t337 + t374;
  t410 = t400*t313;
  t415 = 0. + t410;
  t418 = t394*t415;
  t450 = t25*t362;
  t461 = t330*t371;
  t463 = 0. + t450 + t461;
  t468 = t442*t463;
  t480 = 0. + t418 + t468;
  t641 = t25*t634;
  t665 = -1.*t661*t371;
  t666 = 0. + t641 + t665;
  t677 = t400*t607;
  t683 = 0. + t677;
  t689 = t394*t683;
  t694 = t25*t661;
  t700 = t634*t371;
  t728 = 0. + t694 + t700;
  t733 = t442*t728;
  t738 = 0. + t689 + t733;
  t810 = t797*t25;
  t822 = -1.*t817*t371;
  t826 = 0. + t810 + t822;
  t835 = 0. + t299;
  t842 = t394*t835;
  t843 = t25*t817;
  t844 = t797*t371;
  t845 = 0. + t843 + t844;
  t848 = t442*t845;
  t849 = 0. + t842 + t848;
  t928 = -1.*t683*t442;
  t934 = t394*t728;
  t935 = 0. + t928 + t934;
  t1085 = -1.*t82;
  t1090 = 1. + t1085;
  t1040 = -1.*t100;
  t1050 = 1. + t1040;
  t1142 = -0.62554*t1090;
  t1144 = -0.62554*t82;
  t1147 = 0. + t1142 + t1144;
  t1101 = -0.01315*t1090;
  t1108 = -0.01315*t82;
  t1114 = 0. + t1101 + t1108;
  t1014 = -1.*t210;
  t1028 = 1. + t1014;
  t1082 = -0.03315*t1050;
  t1122 = t100*t1114;
  t1137 = -0.19074*t90;
  t1150 = -1.*t1147*t90;
  t1151 = 0. + t1082 + t1122 + t1137 + t1150;
  t1164 = -0.19074*t1050;
  t1165 = t100*t1147;
  t1166 = 0.03315*t90;
  t1168 = t1114*t90;
  t1187 = 0. + t1164 + t1165 + t1166 + t1168;
  t992 = -1.*t73;
  t1008 = 1. + t992;
  t1034 = -0.13004*t1028;
  t1036 = 0.08055*t75;
  t1153 = t75*t1151;
  t1190 = t210*t1187;
  t1205 = 0. + t1034 + t1036 + t1153 + t1190;
  t1212 = -0.08055*t1028;
  t1217 = -0.13004*t75;
  t1224 = t210*t1151;
  t1226 = -1.*t75*t1187;
  t1231 = 0. + t1212 + t1217 + t1224 + t1226;
  t960 = -1.*t288;
  t961 = 1. + t960;
  t1009 = -0.01004*t1008;
  t1013 = 0.08055*t259;
  t1207 = t73*t1205;
  t1238 = t259*t1231;
  t1241 = 0. + t1009 + t1013 + t1207 + t1238;
  t1256 = -1.*t400;
  t1259 = 1. + t1256;
  t1261 = -0.135*t1259;
  t1278 = -0.1305*t400;
  t1290 = 0.08055*t299;
  t1296 = -0.08055*t1008;
  t1298 = -0.01004*t259;
  t1310 = -1.*t259*t1205;
  t1312 = t73*t1231;
  t1316 = 0. + t1296 + t1298 + t1310 + t1312;
  t1317 = t299*t1316;
  t1334 = 0. + t1261 + t1278 + t1290 + t1317;
  t936 = -1.*t835*t442;
  t942 = t394*t845;
  t943 = 0. + t936 + t942;
  t1367 = 0.07996*t961;
  t1377 = 0.135*t39;
  t1382 = t288*t1241;
  t1385 = t39*t1334;
  t1401 = 0. + t1367 + t1377 + t1382 + t1385;
  t972 = -0.135*t961;
  t988 = 0.07996*t39;
  t1243 = -1.*t39*t1241;
  t1337 = t288*t1334;
  t1338 = 0. + t972 + t988 + t1243 + t1337;
  t1422 = -0.08055*t1259;
  t1427 = -0.004500000000000004*t299;
  t1436 = t400*t1316;
  t1441 = 0. + t1422 + t1427 + t1436;
  t1449 = t25*t1401;
  t1450 = t1338*t371;
  t1452 = 0. + t1449 + t1450;
  t1346 = t25*t1338;
  t1405 = -1.*t1401*t371;
  t1416 = 0. + t1346 + t1405;
  t1444 = -1.*t1441*t442;
  t1476 = t394*t1452;
  t1480 = 0. + t1444 + t1476;
  t1484 = t394*t1441;
  t1485 = t442*t1452;
  t1487 = 0. + t1484 + t1485;
  t922 = -1.*t415*t442;
  t923 = t394*t463;
  t926 = 0. + t922 + t923;
  t1419 = t826*t1416;
  t1523 = -1.*t1416*t666;
  t1588 = -1.*t826*t1416;
  t1615 = t1416*t376;
  t1646 = t1416*t666;
  t1681 = -1.*t1416*t376;
  t1710 = t835*t1441;
  t1723 = -1.*t1441*t683;
  t1765 = -1.*t835*t1441;
  t1788 = t1441*t415;
  t1799 = t1441*t683;
  t1839 = -1.*t1441*t415;
  t2197 = t1241*t563;
  t2223 = -1.*t1241*t280;
  p_output1[0]=0. - 1.*t24*t376 + t389*t480;
  p_output1[1]=0. - 1.*t24*t666 + t389*t738;
  p_output1[2]=0. - 1.*t24*t826 + t389*t849;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t376*t389 + t24*t480;
  p_output1[7]=0. + t389*t666 + t24*t738;
  p_output1[8]=0. + t389*t826 + t24*t849;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t926;
  p_output1[13]=t935;
  p_output1[14]=t943;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1523 - 1.*t1487*t738 - 1.*t1480*t935)*t943 + t935*(t1419 + t1487*t849 + t1480*t943);
  p_output1[19]=(t1615 + t1487*t480 + t1480*t926)*t943 + t926*(t1588 - 1.*t1487*t849 - 1.*t1480*t943);
  p_output1[20]=(t1681 - 1.*t1487*t480 - 1.*t1480*t926)*t935 + t926*(t1646 + t1487*t738 + t1480*t935);
  p_output1[21]=t926;
  p_output1[22]=t935;
  p_output1[23]=t943;
  p_output1[24]=(t1523 + t1723 - 1.*t1452*t728)*t826 + t666*(t1419 + t1710 + t1452*t845);
  p_output1[25]=(t1615 + t1788 + t1452*t463)*t826 + t376*(t1588 + t1765 - 1.*t1452*t845);
  p_output1[26]=(t1681 + t1839 - 1.*t1452*t463)*t666 + t376*(t1646 + t1799 + t1452*t728);
  p_output1[27]=t376;
  p_output1[28]=t666;
  p_output1[29]=t826;
  p_output1[30]=t683*(t1710 + t1338*t797 + t1401*t817) + (t1723 - 1.*t1338*t634 - 1.*t1401*t661)*t835;
  p_output1[31]=t415*(t1765 - 1.*t1338*t797 - 1.*t1401*t817) + (t1788 + t1338*t330 + t1401*t362)*t835;
  p_output1[32]=t415*(t1799 + t1338*t634 + t1401*t661) + (t1839 - 1.*t1338*t330 - 1.*t1401*t362)*t683;
  p_output1[33]=t415;
  p_output1[34]=t683;
  p_output1[35]=t835;
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
  p_output1[78]=0.135*t280 + 0.07996*t322 + t683*(0. + t1710 + t1334*t785) + (t1723 - 1.*t1241*t563 - 1.*t1334*t626)*t835;
  p_output1[79]=0.135*t563 + 0.07996*t626 + t415*(0. + t1765 - 1.*t1334*t785) + (t1788 + t1241*t280 + t1334*t322)*t835;
  p_output1[80]=0. + t415*(t1799 + t2197 + t1334*t626) + (t1839 + t2223 - 1.*t1334*t322)*t683 + 0.07996*t785;
  p_output1[81]=t415;
  p_output1[82]=t683;
  p_output1[83]=t835;
  p_output1[84]=0. - 0.135*t313 + 0.1305*t563;
  p_output1[85]=0. - 0.1305*t280 - 0.135*t607;
  p_output1[86]=-0.08055 + (0. + t2223 - 1.*t1316*t313)*t563 + t280*(0. + t2197 + t1316*t607);
  p_output1[87]=t280;
  p_output1[88]=t563;
  p_output1[89]=0.;
  p_output1[90]=0. + 0.08055*t246 - 0.01004*t269 - 1.*t1231*t538 - 1.*t1205*t555;
  p_output1[91]=0. + t1205*t246 + t1231*t269 - 0.01004*t538 + 0.08055*t555;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.13004*t176 - 1.*t1187*t176 + 0.08055*t235 - 1.*t1151*t516;
  p_output1[97]=0. + 0.08055*t176 + t1151*t176 + t1187*t235 - 0.13004*t516;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.19074*t113 - 1.*t113*t1147 - 0.03315*t82 - 1.*t1114*t82;
  p_output1[103]=0. + 0.03315*t113 + t1114*t113 - 0.19074*t82 - 1.*t1147*t82;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0.;
  p_output1[109]=0.;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
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

#include "Jb_RightAnkleJoint_mex.hh"

namespace SymExpression
{

void Jb_RightAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
