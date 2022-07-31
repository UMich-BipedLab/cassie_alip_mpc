/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftThighJoint_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t438;
  double t215;
  double t281;
  double t388;
  double t563;
  double t993;
  double t1070;
  double t1072;
  double t1180;
  double t1894;
  double t1944;
  double t1963;
  double t399;
  double t586;
  double t610;
  double t2600;
  double t2635;
  double t2681;
  double t2943;
  double t2497;
  double t2546;
  double t2559;
  double t3103;
  double t4723;
  double t4783;
  double t4818;
  double t5260;
  double t4128;
  double t4495;
  double t4667;
  double t5728;
  double t5729;
  double t5747;
  double t1122;
  double t1596;
  double t1621;
  double t2100;
  double t2127;
  double t2336;
  double t6049;
  double t6051;
  double t6054;
  double t6027;
  double t6028;
  double t6029;
  double t2806;
  double t2964;
  double t3064;
  double t3107;
  double t3117;
  double t3147;
  double t6061;
  double t6063;
  double t6064;
  double t4979;
  double t5364;
  double t5505;
  double t5749;
  double t5751;
  double t5826;
  double t6077;
  double t6096;
  double t6098;
  double t6101;
  double t6103;
  double t6105;
  double t6134;
  double t6135;
  double t6137;
  double t6146;
  double t6147;
  double t6152;
  double t6154;
  double t6155;
  double t6156;
  double t6178;
  double t6179;
  double t6180;
  double t6189;
  double t6191;
  double t6192;
  double t6196;
  double t6197;
  double t6202;
  double t6218;
  double t6222;
  double t6223;
  double t6234;
  double t6236;
  double t6238;
  double t6240;
  double t6241;
  double t6242;
  double t6259;
  double t6260;
  double t6261;
  double t6266;
  double t6267;
  double t6272;
  double t6273;
  double t6274;
  double t6297;
  double t6298;
  double t6299;
  double t6301;
  double t6302;
  double t6303;
  double t6308;
  double t6309;
  double t6336;
  double t6337;
  double t6338;
  double t6345;
  double t6346;
  double t6347;
  double t6376;
  double t6377;
  double t6362;
  double t6365;
  double t6367;
  double t6370;
  double t6371;
  double t6390;
  double t6391;
  double t6392;
  double t6395;
  double t6396;
  double t6401;
  double t6403;
  double t6340;
  double t6341;
  double t6344;
  double t6348;
  double t6349;
  double t6351;
  double t6352;
  double t6353;
  double t6354;
  double t6355;
  double t6356;
  double t6357;
  double t6068;
  double t6069;
  double t6071;
  double t6432;
  double t6433;
  double t6434;
  double t6437;
  double t6439;
  double t6456;
  double t6457;
  double t6459;
  double t6463;
  double t6465;
  double t6466;
  double t6479;
  double t6482;
  double t6484;
  double t6487;
  double t6488;
  double t6489;
  double t6115;
  double t6119;
  double t6120;
  double t6503;
  double t6504;
  double t6506;
  double t6510;
  double t6511;
  double t6526;
  double t6527;
  double t6528;
  double t6543;
  double t6545;
  double t6546;
  t438 = Cos(var1[3]);
  t215 = Cos(var1[5]);
  t281 = Sin(var1[3]);
  t388 = Sin(var1[4]);
  t563 = Sin(var1[5]);
  t993 = Cos(var1[6]);
  t1070 = -1.*t993;
  t1072 = 1. + t1070;
  t1180 = Sin(var1[6]);
  t1894 = -1.*t438*t215;
  t1944 = -1.*t281*t388*t563;
  t1963 = t1894 + t1944;
  t399 = -1.*t215*t281*t388;
  t586 = t438*t563;
  t610 = t399 + t586;
  t2600 = Cos(var1[7]);
  t2635 = -1.*t2600;
  t2681 = 1. + t2635;
  t2943 = Sin(var1[7]);
  t2497 = t993*t1963;
  t2546 = t610*t1180;
  t2559 = t2497 + t2546;
  t3103 = Cos(var1[4]);
  t4723 = Cos(var1[8]);
  t4783 = -1.*t4723;
  t4818 = 1. + t4783;
  t5260 = Sin(var1[8]);
  t4128 = -1.*t3103*t2600*t281;
  t4495 = t2559*t2943;
  t4667 = t4128 + t4495;
  t5728 = t993*t610;
  t5729 = -1.*t1963*t1180;
  t5747 = t5728 + t5729;
  t1122 = 0.07996*t1072;
  t1596 = -0.135*t1180;
  t1621 = 0. + t1122 + t1596;
  t2100 = 0.135*t1072;
  t2127 = 0.07996*t1180;
  t2336 = 0. + t2100 + t2127;
  t6049 = -1.*t215*t281;
  t6051 = t438*t388*t563;
  t6054 = t6049 + t6051;
  t6027 = t438*t215*t388;
  t6028 = t281*t563;
  t6029 = t6027 + t6028;
  t2806 = 0.135*t2681;
  t2964 = 0.08055*t2943;
  t3064 = 0. + t2806 + t2964;
  t3107 = -0.08055*t2681;
  t3117 = 0.135*t2943;
  t3147 = 0. + t3107 + t3117;
  t6061 = t993*t6054;
  t6063 = t6029*t1180;
  t6064 = t6061 + t6063;
  t4979 = -0.08055*t4818;
  t5364 = -0.01004*t5260;
  t5505 = 0. + t4979 + t5364;
  t5749 = -0.01004*t4818;
  t5751 = 0.08055*t5260;
  t5826 = 0. + t5749 + t5751;
  t6077 = t438*t3103*t2600;
  t6096 = t6064*t2943;
  t6098 = t6077 + t6096;
  t6101 = t993*t6029;
  t6103 = -1.*t6054*t1180;
  t6105 = t6101 + t6103;
  t6134 = t438*t3103*t993*t563;
  t6135 = t438*t3103*t215*t1180;
  t6137 = t6134 + t6135;
  t6146 = -1.*t438*t2600*t388;
  t6147 = t6137*t2943;
  t6152 = t6146 + t6147;
  t6154 = t438*t3103*t215*t993;
  t6155 = -1.*t438*t3103*t563*t1180;
  t6156 = t6154 + t6155;
  t6178 = t3103*t993*t281*t563;
  t6179 = t3103*t215*t281*t1180;
  t6180 = t6178 + t6179;
  t6189 = -1.*t2600*t281*t388;
  t6191 = t6180*t2943;
  t6192 = t6189 + t6191;
  t6196 = t3103*t215*t993*t281;
  t6197 = -1.*t3103*t281*t563*t1180;
  t6202 = t6196 + t6197;
  t6218 = -1.*t993*t388*t563;
  t6222 = -1.*t215*t388*t1180;
  t6223 = t6218 + t6222;
  t6234 = -1.*t3103*t2600;
  t6236 = t6223*t2943;
  t6238 = t6234 + t6236;
  t6240 = -1.*t215*t993*t388;
  t6241 = t388*t563*t1180;
  t6242 = t6240 + t6241;
  t6259 = t215*t281;
  t6260 = -1.*t438*t388*t563;
  t6261 = t6259 + t6260;
  t6266 = t6261*t1180;
  t6267 = t6101 + t6266;
  t6272 = t993*t6261;
  t6273 = -1.*t6029*t1180;
  t6274 = t6272 + t6273;
  t6297 = t215*t281*t388;
  t6298 = -1.*t438*t563;
  t6299 = t6297 + t6298;
  t6301 = t993*t6299;
  t6302 = t1963*t1180;
  t6303 = t6301 + t6302;
  t6308 = -1.*t6299*t1180;
  t6309 = t2497 + t6308;
  t6336 = t3103*t215*t993;
  t6337 = -1.*t3103*t563*t1180;
  t6338 = t6336 + t6337;
  t6345 = -1.*t3103*t993*t563;
  t6346 = -1.*t3103*t215*t1180;
  t6347 = t6345 + t6346;
  t6376 = -1.*t993*t6054;
  t6377 = t6376 + t6273;
  t6362 = -0.135*t993;
  t6365 = t6362 + t2127;
  t6367 = 0.07996*t993;
  t6370 = 0.135*t1180;
  t6371 = t6367 + t6370;
  t6390 = t438*t215;
  t6391 = t281*t388*t563;
  t6392 = t6390 + t6391;
  t6395 = -1.*t6392*t1180;
  t6396 = t6301 + t6395;
  t6401 = -1.*t993*t6392;
  t6403 = t6401 + t6308;
  t6340 = 0.135*t2600*t6338;
  t6341 = t6338*t3064;
  t6344 = t6338*t2943*t5505;
  t6348 = t6347*t5826;
  t6349 = t4723*t6338*t2943;
  t6351 = t6347*t5260;
  t6352 = t6349 + t6351;
  t6353 = -0.08055*t6352;
  t6354 = t4723*t6347;
  t6355 = -1.*t6338*t2943*t5260;
  t6356 = t6354 + t6355;
  t6357 = -0.01004*t6356;
  t6068 = t2600*t6064;
  t6069 = -1.*t438*t3103*t2943;
  t6071 = t6068 + t6069;
  t6432 = 0.135*t2600;
  t6433 = -0.08055*t2943;
  t6434 = t6432 + t6433;
  t6437 = 0.08055*t2600;
  t6439 = t6437 + t3117;
  t6456 = t993*t6392;
  t6457 = t6299*t1180;
  t6459 = t6456 + t6457;
  t6463 = t2600*t6459;
  t6465 = -1.*t3103*t281*t2943;
  t6466 = t6463 + t6465;
  t6479 = t3103*t993*t563;
  t6482 = t3103*t215*t1180;
  t6484 = t6479 + t6482;
  t6487 = t2600*t6484;
  t6488 = t388*t2943;
  t6489 = t6487 + t6488;
  t6115 = t4723*t6105;
  t6119 = -1.*t6098*t5260;
  t6120 = t6115 + t6119;
  t6503 = -0.01004*t4723;
  t6504 = -0.08055*t5260;
  t6506 = t6503 + t6504;
  t6510 = 0.08055*t4723;
  t6511 = t6510 + t5364;
  t6526 = t3103*t2600*t281;
  t6527 = t6459*t2943;
  t6528 = t6526 + t6527;
  t6543 = -1.*t2600*t388;
  t6545 = t6484*t2943;
  t6546 = t6543 + t6545;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1963*t2336 + t2559*t3064 + 0.135*(t2559*t2600 + t281*t2943*t3103) - 1.*t281*t3103*t3147 + t4667*t5505 - 0.01004*(-1.*t4667*t5260 + t4723*t5747) - 0.08055*(t4667*t4723 + t5260*t5747) + t5747*t5826 + t1621*t610;
  p_output1[10]=t3103*t3147*t438 + t1621*t6029 + t2336*t6054 + t3064*t6064 + 0.135*t6071 + t5505*t6098 + t5826*t6105 - 0.08055*(t4723*t6098 + t5260*t6105) - 0.01004*t6120;
  p_output1[11]=0;
  p_output1[12]=t1621*t215*t3103*t438 - 1.*t3147*t388*t438 + t2336*t3103*t438*t563 + t3064*t6137 + 0.135*(t2943*t388*t438 + t2600*t6137) + t5505*t6152 + t5826*t6156 - 0.01004*(-1.*t5260*t6152 + t4723*t6156) - 0.08055*(t4723*t6152 + t5260*t6156);
  p_output1[13]=t1621*t215*t281*t3103 - 1.*t281*t3147*t388 + t2336*t281*t3103*t563 + t3064*t6180 + 0.135*(t281*t2943*t388 + t2600*t6180) + t5505*t6192 + t5826*t6202 - 0.01004*(-1.*t5260*t6192 + t4723*t6202) - 0.08055*(t4723*t6192 + t5260*t6202);
  p_output1[14]=-1.*t3103*t3147 - 1.*t1621*t215*t388 - 1.*t2336*t388*t563 + t3064*t6223 + 0.135*(t2943*t3103 + t2600*t6223) + t5505*t6238 + t5826*t6242 - 0.01004*(-1.*t5260*t6238 + t4723*t6242) - 0.08055*(t4723*t6238 + t5260*t6242);
  p_output1[15]=t2336*t6029 + t1621*t6261 + 0.135*t2600*t6267 + t3064*t6267 + t2943*t5505*t6267 + t5826*t6274 - 0.01004*(-1.*t2943*t5260*t6267 + t4723*t6274) - 0.08055*(t2943*t4723*t6267 + t5260*t6274);
  p_output1[16]=t1621*t1963 + t2336*t6299 + 0.135*t2600*t6303 + t3064*t6303 + t2943*t5505*t6303 + t5826*t6309 - 0.01004*(-1.*t2943*t5260*t6303 + t4723*t6309) - 0.08055*(t2943*t4723*t6303 + t5260*t6309);
  p_output1[17]=t215*t2336*t3103 - 1.*t1621*t3103*t563 + t6340 + t6341 + t6344 + t6348 + t6353 + t6357;
  p_output1[18]=0.135*t2600*t6105 + t3064*t6105 + t2943*t5505*t6105 + t6029*t6365 + t6054*t6371 + t5826*t6377 - 0.01004*(-1.*t2943*t5260*t6105 + t4723*t6377) - 0.08055*(t2943*t4723*t6105 + t5260*t6377);
  p_output1[19]=t6299*t6365 + t6371*t6392 + 0.135*t2600*t6396 + t3064*t6396 + t2943*t5505*t6396 + t5826*t6403 - 0.01004*(-1.*t2943*t5260*t6396 + t4723*t6403) - 0.08055*(t2943*t4723*t6396 + t5260*t6403);
  p_output1[20]=t6340 + t6341 + t6344 + t6348 + t6353 + t6357 + t215*t3103*t6365 + t3103*t563*t6371;
  p_output1[21]=0.135*(-1.*t2600*t3103*t438 - 1.*t2943*t6064) - 0.08055*t4723*t6071 + 0.01004*t5260*t6071 + t5505*t6071 + t3103*t438*t6434 + t6064*t6439;
  p_output1[22]=t281*t3103*t6434 + t6439*t6459 + 0.135*(t4128 - 1.*t2943*t6459) - 0.08055*t4723*t6466 + 0.01004*t5260*t6466 + t5505*t6466;
  p_output1[23]=-1.*t388*t6434 + t6439*t6484 + 0.135*(t2600*t388 - 1.*t2943*t6484) - 0.08055*t4723*t6489 + 0.01004*t5260*t6489 + t5505*t6489;
  p_output1[24]=-0.01004*(-1.*t4723*t6098 - 1.*t5260*t6105) - 0.08055*t6120 + t6098*t6506 + t6105*t6511;
  p_output1[25]=t6396*t6511 + t6506*t6528 - 0.01004*(-1.*t5260*t6396 - 1.*t4723*t6528) - 0.08055*(t4723*t6396 - 1.*t5260*t6528);
  p_output1[26]=t6338*t6511 + t6506*t6546 - 0.01004*(-1.*t5260*t6338 - 1.*t4723*t6546) - 0.08055*(t4723*t6338 - 1.*t5260*t6546);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
}



void Jp_LeftThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
