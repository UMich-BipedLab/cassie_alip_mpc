/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:02 GMT-04:00
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
  double t72;
  double t76;
  double t94;
  double t75;
  double t79;
  double t85;
  double t71;
  double t100;
  double t103;
  double t115;
  double t136;
  double t89;
  double t116;
  double t117;
  double t65;
  double t141;
  double t142;
  double t152;
  double t207;
  double t118;
  double t154;
  double t163;
  double t63;
  double t208;
  double t225;
  double t226;
  double t59;
  double t253;
  double t259;
  double t262;
  double t186;
  double t239;
  double t241;
  double t264;
  double t274;
  double t249;
  double t271;
  double t272;
  double t33;
  double t277;
  double t288;
  double t291;
  double t301;
  double t304;
  double t321;
  double t340;
  double t273;
  double t324;
  double t330;
  double t32;
  double t342;
  double t346;
  double t347;
  double t22;
  double t382;
  double t442;
  double t366;
  double t408;
  double t446;
  double t449;
  double t454;
  double t455;
  double t380;
  double t531;
  double t540;
  double t546;
  double t528;
  double t552;
  double t555;
  double t571;
  double t575;
  double t563;
  double t576;
  double t582;
  double t587;
  double t592;
  double t593;
  double t605;
  double t608;
  double t610;
  double t586;
  double t599;
  double t602;
  double t603;
  double t617;
  double t619;
  double t626;
  double t627;
  double t630;
  double t632;
  double t639;
  double t625;
  double t640;
  double t645;
  double t648;
  double t649;
  double t650;
  double t336;
  double t349;
  double t351;
  double t387;
  double t397;
  double t405;
  double t410;
  double t411;
  double t413;
  double t420;
  double t424;
  double t453;
  double t466;
  double t485;
  double t492;
  double t495;
  double t497;
  double t498;
  double t501;
  double t510;
  double t513;
  double t518;
  double t646;
  double t654;
  double t660;
  double t665;
  double t666;
  double t676;
  double t679;
  double t680;
  double t681;
  double t684;
  double t686;
  double t731;
  double t732;
  double t737;
  double t830;
  double t832;
  double t812;
  double t820;
  double t839;
  double t840;
  double t841;
  double t842;
  double t847;
  double t848;
  double t851;
  double t855;
  double t804;
  double t805;
  double t827;
  double t828;
  double t844;
  double t856;
  double t860;
  double t862;
  double t863;
  double t866;
  double t867;
  double t868;
  double t784;
  double t785;
  double t809;
  double t811;
  double t861;
  double t872;
  double t873;
  double t875;
  double t877;
  double t878;
  double t882;
  double t886;
  double t771;
  double t775;
  double t897;
  double t900;
  double t903;
  double t906;
  double t911;
  double t792;
  double t793;
  double t874;
  double t888;
  double t889;
  double t740;
  double t752;
  double t776;
  double t895;
  double t896;
  double t913;
  double t915;
  double t922;
  double t924;
  double t929;
  double t930;
  double t935;
  double t936;
  double t937;
  double t940;
  double t942;
  double t946;
  double t947;
  double t948;
  double t715;
  double t717;
  double t729;
  double t753;
  double t758;
  double t918;
  double t951;
  double t952;
  double t954;
  double t956;
  double t959;
  double t960;
  double t961;
  double t971;
  double t978;
  double t980;
  double t981;
  double t986;
  double t988;
  double t993;
  double t953;
  double t966;
  double t967;
  double t984;
  double t997;
  double t999;
  double t1001;
  double t1009;
  double t1011;
  double t710;
  double t711;
  double t713;
  double t968;
  double t1025;
  double t1046;
  double t1074;
  double t1091;
  double t1106;
  double t1123;
  double t1134;
  double t1156;
  double t1168;
  double t1182;
  double t1197;
  double t1308;
  double t1322;
  t72 = Cos(var1[12]);
  t76 = Sin(var1[12]);
  t94 = Cos(var1[11]);
  t75 = 0.642788*t72;
  t79 = -0.766044*t76;
  t85 = t75 + t79;
  t71 = Sin(var1[11]);
  t100 = 0.766044*t72;
  t103 = 0.642788*t76;
  t115 = t100 + t103;
  t136 = Cos(var1[10]);
  t89 = t71*t85;
  t116 = t94*t115;
  t117 = 0. + t89 + t116;
  t65 = Sin(var1[10]);
  t141 = t94*t85;
  t142 = -1.*t71*t115;
  t152 = 0. + t141 + t142;
  t207 = Cos(var1[9]);
  t118 = -1.*t65*t117;
  t154 = t136*t152;
  t163 = 0. + t118 + t154;
  t63 = Sin(var1[9]);
  t208 = t136*t117;
  t225 = t65*t152;
  t226 = 0. + t208 + t225;
  t59 = Cos(var1[8]);
  t253 = t207*t163;
  t259 = -1.*t63*t226;
  t262 = 0. + t253 + t259;
  t186 = t63*t163;
  t239 = t207*t226;
  t241 = 0. + t186 + t239;
  t264 = Sin(var1[8]);
  t274 = Cos(var1[6]);
  t249 = t59*t241;
  t271 = t262*t264;
  t272 = 0. + t249 + t271;
  t33 = Sin(var1[6]);
  t277 = Sin(var1[7]);
  t288 = t59*t262;
  t291 = -1.*t241*t264;
  t301 = 0. + t288 + t291;
  t304 = t277*t301;
  t321 = 0. + t304;
  t340 = Sin(var1[5]);
  t273 = -1.*t33*t272;
  t324 = t274*t321;
  t330 = 0. + t273 + t324;
  t32 = Cos(var1[5]);
  t342 = t274*t272;
  t346 = t33*t321;
  t347 = 0. + t342 + t346;
  t22 = Sin(var1[3]);
  t382 = Cos(var1[7]);
  t442 = 0. + t382;
  t366 = Cos(var1[3]);
  t408 = Sin(var1[4]);
  t446 = t274*t442;
  t449 = 0. + t446;
  t454 = t442*t33;
  t455 = 0. + t454;
  t380 = Cos(var1[4]);
  t531 = -0.766044*t72;
  t540 = -0.642788*t76;
  t546 = t531 + t540;
  t528 = -1.*t71*t85;
  t552 = t94*t546;
  t555 = 0. + t528 + t552;
  t571 = t71*t546;
  t575 = 0. + t141 + t571;
  t563 = t65*t555;
  t576 = t136*t575;
  t582 = 0. + t563 + t576;
  t587 = t136*t555;
  t592 = -1.*t65*t575;
  t593 = 0. + t587 + t592;
  t605 = -1.*t63*t582;
  t608 = t207*t593;
  t610 = 0. + t605 + t608;
  t586 = t207*t582;
  t599 = t63*t593;
  t602 = 0. + t586 + t599;
  t603 = t59*t602;
  t617 = t610*t264;
  t619 = 0. + t603 + t617;
  t626 = t59*t610;
  t627 = -1.*t602*t264;
  t630 = 0. + t626 + t627;
  t632 = t277*t630;
  t639 = 0. + t632;
  t625 = -1.*t33*t619;
  t640 = t274*t639;
  t645 = 0. + t625 + t640;
  t648 = t274*t619;
  t649 = t33*t639;
  t650 = 0. + t648 + t649;
  t336 = t32*t330;
  t349 = -1.*t340*t347;
  t351 = 0. + t336 + t349;
  t387 = t382*t301;
  t397 = 0. + t387;
  t405 = t380*t397;
  t410 = t340*t330;
  t411 = t32*t347;
  t413 = 0. + t410 + t411;
  t420 = t408*t413;
  t424 = 0. + t405 + t420;
  t453 = t32*t449;
  t466 = -1.*t340*t455;
  t485 = 0. + t453 + t466;
  t492 = t449*t340;
  t495 = t32*t455;
  t497 = 0. + t492 + t495;
  t498 = t408*t497;
  t501 = -1.*t277;
  t510 = 0. + t501;
  t513 = t380*t510;
  t518 = 0. + t498 + t513;
  t646 = t32*t645;
  t654 = -1.*t340*t650;
  t660 = 0. + t646 + t654;
  t665 = t382*t630;
  t666 = 0. + t665;
  t676 = t380*t666;
  t679 = t340*t645;
  t680 = t32*t650;
  t681 = 0. + t679 + t680;
  t684 = t408*t681;
  t686 = 0. + t676 + t684;
  t731 = -1.*t408*t666;
  t732 = t380*t681;
  t737 = 0. + t731 + t732;
  t830 = -1.*t72;
  t832 = 1. + t830;
  t812 = -1.*t94;
  t820 = 1. + t812;
  t839 = -1.03354*t832;
  t840 = -1.109926*t72;
  t841 = -0.010096999999999995*t76;
  t842 = 0. + t839 + t840 + t841;
  t847 = -0.05315*t832;
  t848 = -0.063247*t72;
  t851 = 0.07638600000000006*t76;
  t855 = 0. + t847 + t848 + t851;
  t804 = -1.*t136;
  t805 = 1. + t804;
  t827 = -0.01315*t820;
  t828 = -0.62554*t71;
  t844 = -1.*t71*t842;
  t856 = t94*t855;
  t860 = 0. + t827 + t828 + t844 + t856;
  t862 = -0.62554*t820;
  t863 = 0.01315*t71;
  t866 = t94*t842;
  t867 = t71*t855;
  t868 = 0. + t862 + t863 + t866 + t867;
  t784 = -1.*t207;
  t785 = 1. + t784;
  t809 = -0.19074*t805;
  t811 = 0.03315*t65;
  t861 = t65*t860;
  t872 = t136*t868;
  t873 = 0. + t809 + t811 + t861 + t872;
  t875 = -0.03315*t805;
  t877 = -0.19074*t65;
  t878 = t136*t860;
  t882 = -1.*t65*t868;
  t886 = 0. + t875 + t877 + t878 + t882;
  t771 = -1.*t59;
  t775 = 1. + t771;
  t897 = -0.08055*t785;
  t900 = -0.13004*t63;
  t903 = -1.*t63*t873;
  t906 = t207*t886;
  t911 = 0. + t897 + t900 + t903 + t906;
  t792 = -0.13004*t785;
  t793 = 0.08055*t63;
  t874 = t207*t873;
  t888 = t63*t886;
  t889 = 0. + t792 + t793 + t874 + t888;
  t740 = -1.*t274;
  t752 = 1. + t740;
  t776 = -0.01004*t775;
  t895 = t59*t889;
  t896 = 0.08055*t264;
  t913 = t911*t264;
  t915 = 0. + t776 + t895 + t896 + t913;
  t922 = -1.*t382;
  t924 = 1. + t922;
  t929 = 0.135*t924;
  t930 = 0.1305*t382;
  t935 = 0.08055*t277;
  t936 = -0.08055*t775;
  t937 = t59*t911;
  t940 = -0.01004*t264;
  t942 = -1.*t889*t264;
  t946 = 0. + t936 + t937 + t940 + t942;
  t947 = t277*t946;
  t948 = 0. + t929 + t930 + t935 + t947;
  t715 = t380*t497;
  t717 = -1.*t408*t510;
  t729 = 0. + t715 + t717;
  t753 = 0.135*t752;
  t758 = 0.07996*t33;
  t918 = -1.*t33*t915;
  t951 = t274*t948;
  t952 = 0. + t753 + t758 + t918 + t951;
  t954 = 0.07996*t752;
  t956 = -0.135*t33;
  t959 = t274*t915;
  t960 = t33*t948;
  t961 = 0. + t954 + t956 + t959 + t960;
  t971 = -0.08055*t924;
  t978 = 0.004500000000000004*t277;
  t980 = t382*t946;
  t981 = 0. + t971 + t978 + t980;
  t986 = t340*t952;
  t988 = t32*t961;
  t993 = 0. + t986 + t988;
  t953 = t32*t952;
  t966 = -1.*t340*t961;
  t967 = 0. + t953 + t966;
  t984 = -1.*t408*t981;
  t997 = t380*t993;
  t999 = 0. + t984 + t997;
  t1001 = t380*t981;
  t1009 = t408*t993;
  t1011 = 0. + t1001 + t1009;
  t710 = -1.*t408*t397;
  t711 = t380*t413;
  t713 = 0. + t710 + t711;
  t968 = -1.*t485*t967;
  t1025 = t660*t967;
  t1046 = -1.*t660*t967;
  t1074 = t967*t351;
  t1091 = t485*t967;
  t1106 = -1.*t967*t351;
  t1123 = -1.*t510*t981;
  t1134 = t666*t981;
  t1156 = -1.*t666*t981;
  t1168 = t981*t397;
  t1182 = t510*t981;
  t1197 = -1.*t981*t397;
  t1308 = -1.*t619*t915;
  t1322 = t915*t272;
  p_output1[0]=0. - 1.*t22*t351 + t366*t424;
  p_output1[1]=0. - 1.*t22*t485 + t366*t518;
  p_output1[2]=0. - 1.*t22*t660 + t366*t686;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t351*t366 + t22*t424;
  p_output1[7]=0. + t366*t485 + t22*t518;
  p_output1[8]=0. + t366*t660 + t22*t686;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t713;
  p_output1[13]=t729;
  p_output1[14]=t737;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t737*(-1.*t1011*t518 + t968 - 1.*t729*t999) + t729*(t1025 + t1011*t686 + t737*t999);
  p_output1[19]=t737*(t1074 + t1011*t424 + t713*t999) + t713*(t1046 - 1.*t1011*t686 - 1.*t737*t999);
  p_output1[20]=t729*(t1106 - 1.*t1011*t424 - 1.*t713*t999) + t713*(t1091 + t1011*t518 + t729*t999);
  p_output1[21]=t713;
  p_output1[22]=t729;
  p_output1[23]=t737;
  p_output1[24]=t660*(t1123 + t968 - 1.*t497*t993) + t485*(t1025 + t1134 + t681*t993);
  p_output1[25]=t660*(t1074 + t1168 + t413*t993) + t351*(t1046 + t1156 - 1.*t681*t993);
  p_output1[26]=t485*(t1106 + t1197 - 1.*t413*t993) + t351*(t1091 + t1182 + t497*t993);
  p_output1[27]=t351;
  p_output1[28]=t485;
  p_output1[29]=t660;
  p_output1[30]=t666*(t1123 - 1.*t449*t952 - 1.*t455*t961) + t510*(t1134 + t645*t952 + t650*t961);
  p_output1[31]=t666*(t1168 + t330*t952 + t347*t961) + t397*(t1156 - 1.*t645*t952 - 1.*t650*t961);
  p_output1[32]=t510*(t1197 - 1.*t330*t952 - 1.*t347*t961) + t397*(t1182 + t449*t952 + t455*t961);
  p_output1[33]=t397;
  p_output1[34]=t510;
  p_output1[35]=t666;
  p_output1[36]=-0.135*t272 + 0.07996*t321 + t666*(0. + t1123 - 1.*t442*t948) + t510*(t1134 + t619*t915 + t639*t948);
  p_output1[37]=0. + 0.07996*t442 + t666*(t1168 + t1322 + t321*t948) + t397*(t1156 + t1308 - 1.*t639*t948);
  p_output1[38]=-0.135*t619 + 0.07996*t639 + t510*(t1197 - 1.*t272*t915 - 1.*t321*t948) + t397*(0. + t1182 + t442*t948);
  p_output1[39]=t397;
  p_output1[40]=t510;
  p_output1[41]=t666;
  p_output1[42]=0. + 0.135*t301 - 0.1305*t619;
  p_output1[43]=0.08055 + t619*(0. + t1322 + t301*t946) + t272*(0. + t1308 - 1.*t630*t946);
  p_output1[44]=0. + 0.1305*t272 + 0.135*t630;
  p_output1[45]=t272;
  p_output1[46]=0.;
  p_output1[47]=t619;
  p_output1[48]=0. + 0.08055*t241 - 0.01004*t262 - 1.*t602*t889 - 1.*t610*t911;
  p_output1[49]=0.;
  p_output1[50]=0. + 0.08055*t602 - 0.01004*t610 + t241*t889 + t262*t911;
  p_output1[51]=0.;
  p_output1[52]=-1.;
  p_output1[53]=0.;
  p_output1[54]=0. - 0.13004*t163 + 0.08055*t226 - 1.*t582*t873 - 1.*t593*t886;
  p_output1[55]=0.;
  p_output1[56]=0. + 0.08055*t582 - 0.13004*t593 + t226*t873 + t163*t886;
  p_output1[57]=0.;
  p_output1[58]=-1.;
  p_output1[59]=0.;
  p_output1[60]=0. + 0.03315*t117 - 0.19074*t152 - 1.*t555*t860 - 1.*t575*t868;
  p_output1[61]=0.;
  p_output1[62]=0. - 0.19074*t555 + 0.03315*t575 + t152*t860 + t117*t868;
  p_output1[63]=0.;
  p_output1[64]=-1.;
  p_output1[65]=0.;
  p_output1[66]=0. + 0.01315*t115 - 0.62554*t85 - 1.*t842*t85 - 1.*t546*t855;
  p_output1[67]=0.;
  p_output1[68]=0. - 0.62554*t546 + t115*t842 + 0.01315*t85 + t85*t855;
  p_output1[69]=0.;
  p_output1[70]=-1.;
  p_output1[71]=0.;
  p_output1[72]=0.04136525790000001;
  p_output1[73]=0.;
  p_output1[74]=-0.06500526742000012;
  p_output1[75]=0.;
  p_output1[76]=-1.;
  p_output1[77]=0.;
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

#include "Jb_LeftToeBottomBack_mex.hh"

namespace SymExpression
{

void Jb_LeftToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
