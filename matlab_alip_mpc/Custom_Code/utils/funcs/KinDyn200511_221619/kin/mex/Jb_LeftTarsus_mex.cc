/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:11 GMT-04:00
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
  double t150;
  double t120;
  double t123;
  double t168;
  double t211;
  double t144;
  double t183;
  double t193;
  double t88;
  double t259;
  double t261;
  double t271;
  double t77;
  double t312;
  double t317;
  double t319;
  double t197;
  double t293;
  double t299;
  double t339;
  double t365;
  double t306;
  double t350;
  double t353;
  double t65;
  double t372;
  double t373;
  double t383;
  double t385;
  double t396;
  double t398;
  double t444;
  double t364;
  double t400;
  double t405;
  double t48;
  double t446;
  double t457;
  double t462;
  double t18;
  double t592;
  double t603;
  double t606;
  double t620;
  double t635;
  double t643;
  double t613;
  double t616;
  double t619;
  double t657;
  double t658;
  double t685;
  double t687;
  double t690;
  double t693;
  double t699;
  double t477;
  double t484;
  double t485;
  double t518;
  double t684;
  double t701;
  double t704;
  double t721;
  double t724;
  double t730;
  double t778;
  double t786;
  double t789;
  double t790;
  double t793;
  double t796;
  double t414;
  double t464;
  double t466;
  double t488;
  double t501;
  double t506;
  double t521;
  double t522;
  double t527;
  double t529;
  double t558;
  double t720;
  double t733;
  double t736;
  double t743;
  double t746;
  double t754;
  double t756;
  double t761;
  double t767;
  double t769;
  double t771;
  double t791;
  double t798;
  double t802;
  double t807;
  double t809;
  double t810;
  double t813;
  double t816;
  double t820;
  double t822;
  double t895;
  double t913;
  double t923;
  double t1006;
  double t1007;
  double t995;
  double t998;
  double t1011;
  double t1017;
  double t1028;
  double t1032;
  double t1038;
  double t1043;
  double t1044;
  double t1046;
  double t979;
  double t983;
  double t1001;
  double t1003;
  double t1034;
  double t1048;
  double t1050;
  double t1056;
  double t1058;
  double t1061;
  double t1073;
  double t1094;
  double t967;
  double t971;
  double t1132;
  double t1134;
  double t1136;
  double t1137;
  double t1144;
  double t985;
  double t993;
  double t1052;
  double t1105;
  double t1109;
  double t938;
  double t946;
  double t974;
  double t1111;
  double t1130;
  double t1147;
  double t1156;
  double t1170;
  double t1178;
  double t1186;
  double t1202;
  double t1206;
  double t1226;
  double t1229;
  double t1234;
  double t1250;
  double t1253;
  double t1258;
  double t1264;
  double t925;
  double t928;
  double t931;
  double t947;
  double t955;
  double t1159;
  double t1269;
  double t1271;
  double t1277;
  double t1278;
  double t1284;
  double t1291;
  double t1293;
  double t1316;
  double t1317;
  double t1319;
  double t1322;
  double t1326;
  double t1343;
  double t1345;
  double t1275;
  double t1297;
  double t1302;
  double t1325;
  double t1348;
  double t1354;
  double t1362;
  double t1376;
  double t1377;
  double t884;
  double t890;
  double t891;
  double t1309;
  double t1391;
  double t1411;
  double t1457;
  double t1474;
  double t1510;
  double t1542;
  double t1562;
  double t1591;
  double t1601;
  double t1626;
  double t1666;
  double t1912;
  double t1923;
  t150 = Cos(var1[10]);
  t120 = Cos(var1[11]);
  t123 = Sin(var1[10]);
  t168 = Sin(var1[11]);
  t211 = Cos(var1[9]);
  t144 = t120*t123;
  t183 = t150*t168;
  t193 = 0. + t144 + t183;
  t88 = Sin(var1[9]);
  t259 = -1.*t150*t120;
  t261 = t123*t168;
  t271 = 0. + t259 + t261;
  t77 = Cos(var1[8]);
  t312 = t211*t193;
  t317 = -1.*t88*t271;
  t319 = 0. + t312 + t317;
  t197 = t88*t193;
  t293 = t211*t271;
  t299 = 0. + t197 + t293;
  t339 = Sin(var1[8]);
  t365 = Cos(var1[6]);
  t306 = t77*t299;
  t350 = t319*t339;
  t353 = 0. + t306 + t350;
  t65 = Sin(var1[6]);
  t372 = Sin(var1[7]);
  t373 = t77*t319;
  t383 = -1.*t299*t339;
  t385 = 0. + t373 + t383;
  t396 = t372*t385;
  t398 = 0. + t396;
  t444 = Sin(var1[5]);
  t364 = -1.*t65*t353;
  t400 = t365*t398;
  t405 = 0. + t364 + t400;
  t48 = Cos(var1[5]);
  t446 = t365*t353;
  t457 = t65*t398;
  t462 = 0. + t446 + t457;
  t18 = Sin(var1[3]);
  t592 = t150*t120;
  t603 = -1.*t123*t168;
  t606 = 0. + t592 + t603;
  t620 = -1.*t88*t193;
  t635 = t211*t606;
  t643 = 0. + t620 + t635;
  t613 = t88*t606;
  t616 = 0. + t312 + t613;
  t619 = t77*t616;
  t657 = t643*t339;
  t658 = 0. + t619 + t657;
  t685 = t77*t643;
  t687 = -1.*t616*t339;
  t690 = 0. + t685 + t687;
  t693 = t372*t690;
  t699 = 0. + t693;
  t477 = Cos(var1[3]);
  t484 = Cos(var1[4]);
  t485 = Cos(var1[7]);
  t518 = Sin(var1[4]);
  t684 = -1.*t65*t658;
  t701 = t365*t699;
  t704 = 0. + t684 + t701;
  t721 = t365*t658;
  t724 = t65*t699;
  t730 = 0. + t721 + t724;
  t778 = -1.*t485;
  t786 = 0. + t778;
  t789 = t365*t786;
  t790 = 0. + t789;
  t793 = t786*t65;
  t796 = 0. + t793;
  t414 = t48*t405;
  t464 = -1.*t444*t462;
  t466 = 0. + t414 + t464;
  t488 = t485*t385;
  t501 = 0. + t488;
  t506 = t484*t501;
  t521 = t444*t405;
  t522 = t48*t462;
  t527 = 0. + t521 + t522;
  t529 = t518*t527;
  t558 = 0. + t506 + t529;
  t720 = t48*t704;
  t733 = -1.*t444*t730;
  t736 = 0. + t720 + t733;
  t743 = t485*t690;
  t746 = 0. + t743;
  t754 = t484*t746;
  t756 = t444*t704;
  t761 = t48*t730;
  t767 = 0. + t756 + t761;
  t769 = t518*t767;
  t771 = 0. + t754 + t769;
  t791 = t48*t790;
  t798 = -1.*t444*t796;
  t802 = 0. + t791 + t798;
  t807 = t790*t444;
  t809 = t48*t796;
  t810 = 0. + t807 + t809;
  t813 = t518*t810;
  t816 = 0. + t372;
  t820 = t484*t816;
  t822 = 0. + t813 + t820;
  t895 = -1.*t518*t746;
  t913 = t484*t767;
  t923 = 0. + t895 + t913;
  t1006 = -1.*t120;
  t1007 = 1. + t1006;
  t995 = -1.*t150;
  t998 = 1. + t995;
  t1011 = -0.62554*t1007;
  t1017 = -0.73604*t120;
  t1028 = -0.030599999999999995*t168;
  t1032 = 0. + t1011 + t1017 + t1028;
  t1038 = -0.01315*t1007;
  t1043 = -0.04375*t120;
  t1044 = 0.11050000000000004*t168;
  t1046 = 0. + t1038 + t1043 + t1044;
  t979 = -1.*t211;
  t983 = 1. + t979;
  t1001 = -0.03315*t998;
  t1003 = -0.19074*t123;
  t1034 = -1.*t123*t1032;
  t1048 = t150*t1046;
  t1050 = 0. + t1001 + t1003 + t1034 + t1048;
  t1056 = -0.19074*t998;
  t1058 = 0.03315*t123;
  t1061 = t150*t1032;
  t1073 = t123*t1046;
  t1094 = 0. + t1056 + t1058 + t1061 + t1073;
  t967 = -1.*t77;
  t971 = 1. + t967;
  t1132 = -0.08055*t983;
  t1134 = -0.13004*t88;
  t1136 = t211*t1050;
  t1137 = -1.*t88*t1094;
  t1144 = 0. + t1132 + t1134 + t1136 + t1137;
  t985 = -0.13004*t983;
  t993 = 0.08055*t88;
  t1052 = t88*t1050;
  t1105 = t211*t1094;
  t1109 = 0. + t985 + t993 + t1052 + t1105;
  t938 = -1.*t365;
  t946 = 1. + t938;
  t974 = -0.01004*t971;
  t1111 = t77*t1109;
  t1130 = 0.08055*t339;
  t1147 = t1144*t339;
  t1156 = 0. + t974 + t1111 + t1130 + t1147;
  t1170 = -1.*t485;
  t1178 = 1. + t1170;
  t1186 = 0.135*t1178;
  t1202 = 0.1318*t485;
  t1206 = 0.08055*t372;
  t1226 = -0.08055*t971;
  t1229 = t77*t1144;
  t1234 = -0.01004*t339;
  t1250 = -1.*t1109*t339;
  t1253 = 0. + t1226 + t1229 + t1234 + t1250;
  t1258 = t372*t1253;
  t1264 = 0. + t1186 + t1202 + t1206 + t1258;
  t925 = t484*t810;
  t928 = -1.*t518*t816;
  t931 = 0. + t925 + t928;
  t947 = 0.135*t946;
  t955 = 0.07996*t65;
  t1159 = -1.*t65*t1156;
  t1269 = t365*t1264;
  t1271 = 0. + t947 + t955 + t1159 + t1269;
  t1277 = 0.07996*t946;
  t1278 = -0.135*t65;
  t1284 = t365*t1156;
  t1291 = t65*t1264;
  t1293 = 0. + t1277 + t1278 + t1284 + t1291;
  t1316 = -0.08055*t1178;
  t1317 = 0.0032000000000000084*t372;
  t1319 = t485*t1253;
  t1322 = 0. + t1316 + t1317 + t1319;
  t1326 = t444*t1271;
  t1343 = t48*t1293;
  t1345 = 0. + t1326 + t1343;
  t1275 = t48*t1271;
  t1297 = -1.*t444*t1293;
  t1302 = 0. + t1275 + t1297;
  t1325 = -1.*t518*t1322;
  t1348 = t484*t1345;
  t1354 = 0. + t1325 + t1348;
  t1362 = t484*t1322;
  t1376 = t518*t1345;
  t1377 = 0. + t1362 + t1376;
  t884 = -1.*t518*t501;
  t890 = t484*t527;
  t891 = 0. + t884 + t890;
  t1309 = t802*t1302;
  t1391 = -1.*t1302*t736;
  t1411 = -1.*t802*t1302;
  t1457 = t1302*t466;
  t1474 = t1302*t736;
  t1510 = -1.*t1302*t466;
  t1542 = t816*t1322;
  t1562 = -1.*t1322*t746;
  t1591 = -1.*t816*t1322;
  t1601 = t1322*t501;
  t1626 = t1322*t746;
  t1666 = -1.*t1322*t501;
  t1912 = t1156*t658;
  t1923 = -1.*t1156*t353;
  p_output1[0]=0. - 1.*t18*t466 + t477*t558;
  p_output1[1]=0. - 1.*t18*t736 + t477*t771;
  p_output1[2]=0. - 1.*t18*t802 + t477*t822;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t466*t477 + t18*t558;
  p_output1[7]=0. + t477*t736 + t18*t771;
  p_output1[8]=0. + t477*t802 + t18*t822;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t891;
  p_output1[13]=t923;
  p_output1[14]=t931;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t1391 - 1.*t1377*t771 - 1.*t1354*t923)*t931 + t923*(t1309 + t1377*t822 + t1354*t931);
  p_output1[19]=(t1457 + t1377*t558 + t1354*t891)*t931 + t891*(t1411 - 1.*t1377*t822 - 1.*t1354*t931);
  p_output1[20]=(t1510 - 1.*t1377*t558 - 1.*t1354*t891)*t923 + t891*(t1474 + t1377*t771 + t1354*t923);
  p_output1[21]=t891;
  p_output1[22]=t923;
  p_output1[23]=t931;
  p_output1[24]=(t1391 + t1562 - 1.*t1345*t767)*t802 + t736*(t1309 + t1542 + t1345*t810);
  p_output1[25]=(t1457 + t1601 + t1345*t527)*t802 + t466*(t1411 + t1591 - 1.*t1345*t810);
  p_output1[26]=(t1510 + t1666 - 1.*t1345*t527)*t736 + t466*(t1474 + t1626 + t1345*t767);
  p_output1[27]=t466;
  p_output1[28]=t736;
  p_output1[29]=t802;
  p_output1[30]=t746*(t1542 + t1271*t790 + t1293*t796) + (t1562 - 1.*t1271*t704 - 1.*t1293*t730)*t816;
  p_output1[31]=t501*(t1591 - 1.*t1271*t790 - 1.*t1293*t796) + (t1601 + t1271*t405 + t1293*t462)*t816;
  p_output1[32]=t501*(t1626 + t1271*t704 + t1293*t730) + (t1666 - 1.*t1271*t405 - 1.*t1293*t462)*t746;
  p_output1[33]=t501;
  p_output1[34]=t746;
  p_output1[35]=t816;
  p_output1[36]=-0.135*t353 + 0.07996*t398 + t746*(0. + t1542 + t1264*t786) + (t1562 - 1.*t1156*t658 - 1.*t1264*t699)*t816;
  p_output1[37]=-0.135*t658 + 0.07996*t699 + t501*(0. + t1591 - 1.*t1264*t786) + (t1601 + t1156*t353 + t1264*t398)*t816;
  p_output1[38]=0. + t501*(t1626 + t1912 + t1264*t699) + (t1666 + t1923 - 1.*t1264*t398)*t746 + 0.07996*t786;
  p_output1[39]=t501;
  p_output1[40]=t746;
  p_output1[41]=t816;
  p_output1[42]=0. + 0.135*t385 - 0.1318*t658;
  p_output1[43]=0. + 0.1318*t353 + 0.135*t690;
  p_output1[44]=-0.08055 + (0. + t1923 - 1.*t1253*t385)*t658 + t353*(0. + t1912 + t1253*t690);
  p_output1[45]=t353;
  p_output1[46]=t658;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t299 - 0.01004*t319 - 1.*t1109*t616 - 1.*t1144*t643;
  p_output1[49]=0. + t1109*t299 + t1144*t319 + 0.08055*t616 - 0.01004*t643;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.13004*t193 - 1.*t1094*t193 + 0.08055*t271 - 1.*t1050*t606;
  p_output1[55]=0. + 0.08055*t193 + t1050*t193 + t1094*t271 - 0.13004*t606;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.03315*t120 - 1.*t1046*t120 - 0.19074*t168 - 1.*t1032*t168;
  p_output1[61]=0. - 0.19074*t120 - 1.*t1032*t120 + 0.03315*t168 + t1046*t168;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0.030599999999999995;
  p_output1[67]=0.11050000000000004;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
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

#include "Jb_LeftTarsus_mex.hh"

namespace SymExpression
{

void Jb_LeftTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
