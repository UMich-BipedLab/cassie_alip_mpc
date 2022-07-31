/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_LeftHip_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t99;
  double t333;
  double t1288;
  double t1424;
  double t1412;
  double t1444;
  double t1476;
  double t1573;
  double t2835;
  double t2865;
  double t2016;
  double t2152;
  double t2172;
  double t2180;
  double t2947;
  double t2957;
  double t2974;
  double t3381;
  double t3399;
  double t3405;
  double t2332;
  double t2358;
  double t2399;
  double t2445;
  double t2464;
  double t2473;
  double t2483;
  double t2534;
  double t2620;
  double t2713;
  double t2719;
  double t2727;
  double t2734;
  double t2765;
  double t2817;
  double t4160;
  double t3737;
  double t3834;
  double t3853;
  double t4178;
  double t3576;
  double t3599;
  double t3619;
  double t4416;
  double t4421;
  double t4166;
  double t4222;
  double t4238;
  double t3226;
  double t3233;
  double t3308;
  double t4428;
  double t4448;
  double t4454;
  double t4501;
  double t4519;
  double t4520;
  double t4285;
  double t4323;
  double t4357;
  double t4761;
  double t4763;
  double t4764;
  double t4768;
  double t4597;
  double t4784;
  double t2997;
  double t3004;
  double t3005;
  double t4901;
  double t4915;
  double t4967;
  double t5198;
  double t5202;
  double t5204;
  double t4979;
  double t4992;
  double t5010;
  double t5014;
  double t5100;
  double t4793;
  double t4805;
  double t5445;
  double t5462;
  double t5482;
  double t5486;
  double t5506;
  double t5366;
  double t5367;
  double t5371;
  double t5874;
  double t5877;
  double t5889;
  double t5979;
  double t5987;
  double t6000;
  double t6015;
  double t6346;
  double t6415;
  double t5905;
  double t5908;
  double t5936;
  double t4455;
  double t4565;
  double t5318;
  double t5331;
  double t5361;
  double t7227;
  double t5101;
  double t7013;
  double t7021;
  double t7065;
  double t7072;
  double t6414;
  double t6519;
  double t6154;
  double t6174;
  double t6230;
  double t7504;
  double t5544;
  double t5545;
  double t6728;
  double t6738;
  t99 = Cos(var1[3]);
  t333 = Sin(var1[3]);
  t1288 = Cos(var1[4]);
  t1424 = Sin(var1[4]);
  t1412 = -1.*var2[2]*t1288*t333;
  t1444 = -1.*var2[1]*t1424;
  t1476 = -1.*var1[1]*t1288;
  t1573 = var1[2]*t333*t1424;
  t2835 = Cos(var1[5]);
  t2865 = Sin(var1[5]);
  t2016 = var2[2]*t99*t1288;
  t2152 = var2[0]*t1424;
  t2172 = var1[0]*t1288;
  t2180 = -1.*var1[2]*t99*t1424;
  t2947 = t99*t2835*t1424;
  t2957 = t333*t2865;
  t2974 = t2947 + t2957;
  t3381 = -1.*t99*t2835;
  t3399 = -1.*t333*t1424*t2865;
  t3405 = t3381 + t3399;
  t2332 = -1.*var2[1]*t99*t1288;
  t2358 = var2[0]*t1288*t333;
  t2399 = var1[0]*t99*t1288;
  t2445 = var1[1]*t1288*t333;
  t2464 = t2399 + t2445;
  t2473 = var2[3]*t2464;
  t2483 = var1[1]*t99*t1424;
  t2534 = -1.*var1[0]*t333*t1424;
  t2620 = -1.*var2[3]*t1288*t333;
  t2713 = -1.*var2[4]*t99*t1424;
  t2719 = t2620 + t2713;
  t2727 = var2[3]*t99*t1288;
  t2734 = -1.*var2[4]*t333*t1424;
  t2765 = t2727 + t2734;
  t2817 = -1.*var2[4]*t1288;
  t4160 = Cos(var1[6]);
  t3737 = t2835*t333*t1424;
  t3834 = -1.*t99*t2865;
  t3853 = t3737 + t3834;
  t4178 = Sin(var1[6]);
  t3576 = -1.*t2835*t333;
  t3599 = t99*t1424*t2865;
  t3619 = t3576 + t3599;
  t4416 = -1.*t4160;
  t4421 = 1. + t4416;
  t4166 = t1288*t2835*t4160;
  t4222 = -1.*t1288*t2865*t4178;
  t4238 = t4166 + t4222;
  t3226 = -1.*t2835*t333*t1424;
  t3233 = t99*t2865;
  t3308 = t3226 + t3233;
  t4428 = 0.07996*t4421;
  t4448 = -0.135*t4178;
  t4454 = 0. + t4428 + t4448;
  t4501 = 0.135*t4421;
  t4519 = 0.07996*t4178;
  t4520 = 0. + t4501 + t4519;
  t4285 = t99*t2835;
  t4323 = t333*t1424*t2865;
  t4357 = t4285 + t4323;
  t4761 = -1.*var1[2];
  t4763 = -1.*t1288*t2835*t4454;
  t4764 = -1.*t1288*t2865*t4520;
  t4768 = 0. + t4761 + t4763 + t4764;
  t4597 = t4160*t3405;
  t4784 = t4160*t2974;
  t2997 = t2835*t333;
  t3004 = -1.*t99*t1424*t2865;
  t3005 = t2997 + t3004;
  t4901 = t3853*t4454;
  t4915 = t4357*t4520;
  t4967 = 0. + var1[1] + t4901 + t4915;
  t5198 = t4160*t3853;
  t5202 = -1.*t4357*t4178;
  t5204 = t5198 + t5202;
  t4979 = -1.*t1288*t4160*t2865;
  t4992 = -1.*t1288*t2835*t4178;
  t5010 = t4979 + t4992;
  t5014 = t4967*t5010;
  t5100 = -1.*t3853*t4178;
  t4793 = -1.*t3619*t4178;
  t4805 = t4784 + t4793;
  t5445 = -0.135*t4160;
  t5462 = t5445 + t4519;
  t5482 = 0.07996*t4160;
  t5486 = 0.135*t4178;
  t5506 = t5482 + t5486;
  t5366 = -1.*t2835*t4160*t1424;
  t5367 = t1424*t2865*t4178;
  t5371 = t5366 + t5367;
  t5874 = t1288*t2835*t4454;
  t5877 = t1288*t2865*t4520;
  t5889 = 0. + var1[2] + t5874 + t5877;
  t5979 = -1.*var1[0];
  t5987 = -1.*t2974*t4454;
  t6000 = -1.*t3619*t4520;
  t6015 = 0. + t5979 + t5987 + t6000;
  t6346 = t6015*t5010;
  t6415 = -1.*t2974*t4178;
  t5905 = t99*t1288*t2835*t4160;
  t5908 = -1.*t99*t1288*t2865*t4178;
  t5936 = t5905 + t5908;
  t4455 = t2974*t4454;
  t4565 = t3619*t4520;
  t5318 = t1288*t2835*t4160*t333;
  t5331 = -1.*t1288*t333*t2865*t4178;
  t5361 = t5318 + t5331;
  t7227 = 0. + var1[0] + t4455 + t4565;
  t5101 = t4597 + t5100;
  t7013 = -1.*var1[1];
  t7021 = -1.*t3853*t4454;
  t7065 = -1.*t4357*t4520;
  t7072 = 0. + t7013 + t7021 + t7065;
  t6414 = t4160*t3005;
  t6519 = t6414 + t6415;
  t6154 = t4160*t3308;
  t6174 = -1.*t3405*t4178;
  t6230 = t6154 + t6174;
  t7504 = 0.08055*t4238;
  t5544 = -1.*t4160*t4357;
  t5545 = t5544 + t5100;
  t6728 = -1.*t4160*t3619;
  t6738 = t6728 + t6415;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t99*var2[2] + t333*var1[2]*var2[3];
  p_output1[25]=-1.*t333*var2[2] - 1.*t99*var1[2]*var2[3];
  p_output1[26]=t99*var2[0] + t333*var2[1] + (-1.*t333*var1[0] + t99*var1[1])*var2[3];
  p_output1[27]=-1.*t99*var2[3];
  p_output1[28]=-1.*t333*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1412 + t1444 - 1.*t1288*t99*var1[2]*var2[3] + (t1476 + t1573)*var2[4];
  p_output1[31]=t2016 + t2152 - 1.*t1288*t333*var1[2]*var2[3] + (t2172 + t2180)*var2[4];
  p_output1[32]=t2332 + t2358 + t2473 + (t2483 + t2534)*var2[4];
  p_output1[33]=t2719;
  p_output1[34]=t2765;
  p_output1[35]=t2817;
  p_output1[36]=t1412 + t1444 + (-0.135*t3308 + 0.07996*t3405 - 1.*t1288*t99*var1[2])*var2[3] + (t1476 + t1573 - 0.135*t1288*t2835*t99 + 0.07996*t1288*t2865*t99)*var2[4] + (0.07996*t2974 - 0.135*t3005)*var2[5];
  p_output1[37]=t2016 + t2152 + (-0.135*t2974 + 0.07996*t3619 - 1.*t1288*t333*var1[2])*var2[3] + (t2172 + t2180 - 0.135*t1288*t2835*t333 + 0.07996*t1288*t2865*t333)*var2[4] + (-0.135*t3405 + 0.07996*t3853)*var2[5];
  p_output1[38]=t2332 + t2358 + t2473 + (t2483 + t2534 + 0.135*t1424*t2835 - 0.07996*t1424*t2865)*var2[4] + (0.07996*t1288*t2835 + 0.135*t1288*t2865)*var2[5];
  p_output1[39]=t2719;
  p_output1[40]=t2765;
  p_output1[41]=t2817;
  p_output1[42]=t4238*var2[1] + (-1.*t3853*t4160 + t4178*t4357)*var2[2] + (-0.135*t1288*t333 + t4238*(t4455 + t4565) + 0.08055*(t3308*t4178 + t4597) + t4768*t4805)*var2[3] + (t4238*(t1288*t2835*t333*t4454 + t1288*t2865*t333*t4520) + (t1424*t2835*t4454 + t1424*t2865*t4520)*t5204 + t4768*t5361 + t4967*t5371 - 0.135*t1424*t99 + 0.08055*(t1288*t2865*t4160*t99 + t1288*t2835*t4178*t99))*var2[4] + (t4238*(t3405*t4454 + t3853*t4520) + 0.08055*(t3005*t4178 + t4784) + t5014 + t4768*t5101 + (t1288*t2865*t4454 - 1.*t1288*t2835*t4520)*t5204)*var2[5] + (0.08055*t4805 + t5014 + t5204*(-1.*t1288*t2835*t5462 - 1.*t1288*t2865*t5506) + t4238*(t3853*t5462 + t4357*t5506) + t4768*t5545)*var2[6];
  p_output1[43]=(-1.*t1288*t2835*t4160 + t1288*t2865*t4178)*var2[0] + t4805*var2[2] + (0.08055*(t3619*t4160 + t2974*t4178) + t4238*(-1.*t3308*t4454 - 1.*t3405*t4520) + t5889*t6230 + 0.135*t1288*t99)*var2[3] + (-0.135*t1424*t333 + 0.08055*(t1288*t2865*t333*t4160 + t1288*t2835*t333*t4178) + (-1.*t1424*t2835*t4454 - 1.*t1424*t2865*t4520)*t4805 + t5889*t5936 + t5371*t6015 + t4238*(-1.*t1288*t2835*t4454*t99 - 1.*t1288*t2865*t4520*t99))*var2[4] + (t4238*(-1.*t3005*t4454 - 1.*t2974*t4520) + (-1.*t1288*t2865*t4454 + t1288*t2835*t4520)*t4805 + 0.08055*(t3405*t4178 + t5198) + t6346 + t5889*t6519)*var2[5] + (0.08055*t5204 + t4805*(t1288*t2835*t5462 + t1288*t2865*t5506) + t4238*(-1.*t2974*t5462 - 1.*t3619*t5506) + t6346 + t5889*t6738)*var2[6];
  p_output1[44]=t5204*var2[0] + (-1.*t2974*t4160 + t3619*t4178)*var2[1] + ((t3308*t4454 + t3405*t4520)*t5204 + t4805*(t5987 + t6000) + t6230*t7072 + t4805*t7227)*var2[3] + (-0.135*t1288 + 0.08055*(-1.*t1424*t2865*t4160 - 1.*t1424*t2835*t4178) + (-1.*t1288*t2835*t333*t4454 - 1.*t1288*t2865*t333*t4520)*t4805 + t5936*t7072 + t5361*t7227 + t5204*(t1288*t2835*t4454*t99 + t1288*t2865*t4520*t99))*var2[4] + ((-1.*t3405*t4454 - 1.*t3853*t4520)*t4805 + (t3005*t4454 + t2974*t4520)*t5204 + t6519*t7072 + t5101*t7227 + t7504)*var2[5] + (t5204*(t2974*t5462 + t3619*t5506) + t4805*(-1.*t3853*t5462 - 1.*t4357*t5506) + t6738*t7072 + t5545*t7227 + t7504)*var2[6];
  p_output1[45]=t6230*var2[3] + t5936*var2[4] + t6519*var2[5] + t6738*var2[6];
  p_output1[46]=t4805*var2[3] + t5361*var2[4] + t5101*var2[5] + t5545*var2[6];
  p_output1[47]=t5371*var2[4] + t5010*var2[5] + t5010*var2[6];
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



void dJs_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
