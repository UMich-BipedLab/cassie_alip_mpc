/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftThighJoint_src.h"

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
  double t32;
  double t61;
  double t203;
  double t210;
  double t208;
  double t282;
  double t467;
  double t492;
  double t291;
  double t294;
  double t313;
  double t367;
  double t431;
  double t461;
  double t466;
  double t533;
  double t538;
  double t571;
  double t605;
  double t614;
  double t623;
  double t1062;
  double t1079;
  double t1103;
  double t1117;
  double t514;
  double t517;
  double t522;
  double t488;
  double t497;
  double t511;
  double t1110;
  double t1125;
  double t1129;
  double t1139;
  double t1154;
  double t1161;
  double t13;
  double t1178;
  double t1191;
  double t1212;
  double t1501;
  double t1508;
  double t1514;
  double t1331;
  double t1332;
  double t1335;
  double t1286;
  double t1290;
  double t1310;
  double t1587;
  double t1593;
  double t1597;
  double t1814;
  double t1826;
  double t1828;
  double t1856;
  double t1411;
  double t1417;
  double t1430;
  double t1130;
  double t1167;
  double t1833;
  double t1865;
  double t1873;
  double t1889;
  double t1890;
  double t1907;
  double t1228;
  double t1252;
  double t1265;
  double t1441;
  double t1451;
  double t1371;
  double t1386;
  double t2036;
  double t2041;
  double t2046;
  double t1614;
  double t1615;
  double t1649;
  double t2140;
  double t2145;
  double t2162;
  double t1710;
  double t1720;
  double t1946;
  double t1972;
  double t1981;
  t32 = Cos(var1[3]);
  t61 = Sin(var1[3]);
  t203 = Cos(var1[4]);
  t210 = Sin(var1[4]);
  t208 = -1.*var1[2]*t203*t61;
  t282 = -1.*var1[1]*t210;
  t467 = Cos(var1[5]);
  t492 = Sin(var1[5]);
  t291 = var1[2]*t32*t203;
  t294 = var1[0]*t210;
  t313 = -1.*var1[1]*t32*t203;
  t367 = var1[0]*t203*t61;
  t431 = t32*t203;
  t461 = t203*t61;
  t466 = -1.*t210;
  t533 = t467*t61*t210;
  t538 = -1.*t32*t492;
  t571 = t533 + t538;
  t605 = t32*t467;
  t614 = t61*t210*t492;
  t623 = t605 + t614;
  t1062 = Cos(var1[6]);
  t1079 = -1.*t1062;
  t1103 = 1. + t1079;
  t1117 = Sin(var1[6]);
  t514 = -1.*t467*t61;
  t517 = t32*t210*t492;
  t522 = t514 + t517;
  t488 = t32*t467*t210;
  t497 = t61*t492;
  t511 = t488 + t497;
  t1110 = 0.07996*t1103;
  t1125 = -0.135*t1117;
  t1129 = 0. + t1110 + t1125;
  t1139 = 0.135*t1103;
  t1154 = 0.07996*t1117;
  t1161 = 0. + t1139 + t1154;
  t13 = -1.*var1[0];
  t1178 = t203*t467*t1062;
  t1191 = -1.*t203*t492*t1117;
  t1212 = t1178 + t1191;
  t1501 = t1062*t511;
  t1508 = -1.*t522*t1117;
  t1514 = t1501 + t1508;
  t1331 = t1062*t571;
  t1332 = -1.*t623*t1117;
  t1335 = t1331 + t1332;
  t1286 = -1.*var1[2];
  t1290 = -1.*t203*t467*t1129;
  t1310 = -1.*t203*t492*t1161;
  t1587 = t203*t1062*t492;
  t1593 = t203*t467*t1117;
  t1597 = t1587 + t1593;
  t1814 = Cos(var1[7]);
  t1826 = -1.*t1814;
  t1828 = 1. + t1826;
  t1856 = Sin(var1[7]);
  t1411 = t1062*t623;
  t1417 = t571*t1117;
  t1430 = t1411 + t1417;
  t1130 = t571*t1129;
  t1167 = t623*t1161;
  t1833 = 0.135*t1828;
  t1865 = 0.08055*t1856;
  t1873 = 0. + t1833 + t1865;
  t1889 = -0.08055*t1828;
  t1890 = 0.135*t1856;
  t1907 = 0. + t1889 + t1890;
  t1228 = t1062*t522;
  t1252 = t511*t1117;
  t1265 = t1228 + t1252;
  t1441 = t203*t467*t1129;
  t1451 = t203*t492*t1161;
  t1371 = -1.*t511*t1129;
  t1386 = -1.*t522*t1161;
  t2036 = t1814*t1597;
  t2041 = t210*t1856;
  t2046 = t2036 + t2041;
  t1614 = -1.*var1[1];
  t1615 = -1.*t571*t1129;
  t1649 = -1.*t623*t1161;
  t2140 = t1814*t1265;
  t2145 = -1.*t32*t203*t1856;
  t2162 = t2140 + t2145;
  t1710 = t511*t1129;
  t1720 = t522*t1161;
  t1946 = t1814*t1430;
  t1972 = -1.*t203*t61*t1856;
  t1981 = t1946 + t1972;
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
  p_output1[19]=t13;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t32*var1[2];
  p_output1[25]=-1.*t61*var1[2];
  p_output1[26]=t32*var1[0] + t61*var1[1];
  p_output1[27]=-1.*t61;
  p_output1[28]=t32;
  p_output1[29]=0;
  p_output1[30]=t208 + t282;
  p_output1[31]=t291 + t294;
  p_output1[32]=t313 + t367;
  p_output1[33]=t431;
  p_output1[34]=t461;
  p_output1[35]=t466;
  p_output1[36]=t208 + t282 - 0.135*t511 + 0.07996*t522;
  p_output1[37]=t291 + t294 - 0.135*t571 + 0.07996*t623;
  p_output1[38]=t313 + t367 - 0.135*t203*t467 + 0.07996*t203*t492;
  p_output1[39]=0. + t431;
  p_output1[40]=0. + t461;
  p_output1[41]=0. + t466;
  p_output1[42]=0.08055*t1265 + (0. + t1286 + t1290 + t1310)*t1335 + 0.135*t203*t32 + t1212*(0. + t1130 + t1167 + var1[1]);
  p_output1[43]=t1212*(0. + t13 + t1371 + t1386) + 0.08055*t1430 + 0.135*t203*t61 + t1514*(0. + t1441 + t1451 + var1[2]);
  p_output1[44]=0.08055*t1597 + t1514*(0. + t1614 + t1615 + t1649) - 0.135*t210 + t1335*(0. + t1710 + t1720 + var1[0]);
  p_output1[45]=0. + t1501 + t1508;
  p_output1[46]=0. + t1331 + t1332;
  p_output1[47]=0. + t1178 + t1191;
  p_output1[48]=0.08055*t1514 - 1.*t1981*(0. + t1286 + t1290 + t1310 - 1.*t1597*t1873 + t1907*t210) - 0.01004*(t1265*t1856 + t1814*t203*t32) - 1.*t2046*(0. + t1130 + t1167 + t1430*t1873 + t1907*t203*t61 + var1[1]);
  p_output1[49]=0.08055*t1335 - 1.*t2046*(0. + t13 + t1371 + t1386 - 1.*t1265*t1873 - 1.*t1907*t203*t32) - 0.01004*(t1430*t1856 + t1814*t203*t61) - 1.*t2162*(0. + t1441 + t1451 + t1597*t1873 - 1.*t1907*t210 + var1[2]);
  p_output1[50]=0.08055*t1212 - 0.01004*(t1597*t1856 - 1.*t1814*t210) - 1.*t2162*(0. + t1614 + t1615 + t1649 - 1.*t1430*t1873 - 1.*t1907*t203*t61) - 1.*t1981*(0. + t1710 + t1720 + t1265*t1873 + t1907*t203*t32 + var1[0]);
  p_output1[51]=0. - 1.*t1265*t1814 + t1856*t203*t32;
  p_output1[52]=0. - 1.*t1430*t1814 + t1856*t203*t61;
  p_output1[53]=0. - 1.*t1597*t1814 - 1.*t1856*t210;
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



void Js_LeftThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
