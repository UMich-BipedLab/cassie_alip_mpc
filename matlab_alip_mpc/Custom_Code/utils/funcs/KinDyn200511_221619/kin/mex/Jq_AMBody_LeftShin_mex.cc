/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:54 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t134;
  double t343;
  double t129;
  double t355;
  double t80;
  double t654;
  double t656;
  double t676;
  double t289;
  double t473;
  double t561;
  double t764;
  double t599;
  double t857;
  double t903;
  double t1235;
  double t1142;
  double t1220;
  double t1221;
  double t1140;
  double t1256;
  double t1308;
  double t1315;
  double t26;
  double t66;
  double t1031;
  double t1106;
  double t1808;
  double t1871;
  double t1880;
  double t1882;
  double t1893;
  double t1603;
  double t1949;
  double t1974;
  double t1980;
  double t1993;
  double t1997;
  double t907;
  double t987;
  double t1029;
  double t1234;
  double t1374;
  double t1475;
  double t1527;
  double t1630;
  double t1637;
  double t1649;
  double t1654;
  double t1755;
  double t1790;
  double t1805;
  double t1906;
  double t1912;
  double t1932;
  double t1983;
  double t2055;
  double t2108;
  double t2117;
  double t2141;
  double t2185;
  double t2200;
  double t2264;
  double t2325;
  double t2332;
  double t2348;
  double t2493;
  double t2519;
  double t2903;
  double t3341;
  double t3354;
  double t3438;
  double t3486;
  double t3510;
  double t3556;
  double t3560;
  double t3641;
  double t4075;
  double t4103;
  double t4340;
  double t4478;
  double t4492;
  double t4707;
  double t4728;
  double t4729;
  double t4750;
  double t2540;
  double t2555;
  double t2607;
  double t2609;
  double t6075;
  double t6287;
  double t6293;
  double t6299;
  double t6617;
  double t6640;
  double t6641;
  double t6644;
  double t6227;
  double t6364;
  double t6369;
  double t6483;
  double t6509;
  double t6549;
  double t6585;
  double t6598;
  double t6600;
  double t6630;
  double t6668;
  double t6673;
  double t6675;
  double t6676;
  double t6732;
  double t6750;
  double t6753;
  double t6780;
  double t6855;
  double t6857;
  double t6887;
  double t6888;
  double t6889;
  double t6909;
  double t6916;
  double t6919;
  double t6920;
  double t6922;
  double t6936;
  double t6937;
  double t6941;
  double t6946;
  double t6949;
  double t6978;
  double t6983;
  double t6985;
  double t6986;
  double t6987;
  double t6990;
  double t6991;
  double t6995;
  double t6997;
  double t6999;
  double t7000;
  double t7001;
  double t7002;
  double t7061;
  double t7062;
  double t7064;
  double t7054;
  double t7068;
  double t7069;
  double t7070;
  double t7072;
  double t7073;
  double t7074;
  double t7100;
  double t7101;
  double t7106;
  double t7108;
  double t7111;
  double t7112;
  double t7117;
  double t7123;
  double t7126;
  double t7056;
  double t7066;
  double t7067;
  double t7071;
  double t7075;
  double t7077;
  double t7082;
  double t7084;
  double t7087;
  double t7088;
  double t7089;
  double t7090;
  double t7091;
  double t7093;
  double t7094;
  double t7102;
  double t7103;
  double t7107;
  double t7115;
  double t7128;
  double t7129;
  double t7130;
  double t7131;
  double t7134;
  double t7136;
  double t7138;
  double t7139;
  double t7140;
  double t7142;
  double t7143;
  double t7156;
  double t7157;
  double t7158;
  double t7152;
  double t7163;
  double t7164;
  double t7166;
  double t7153;
  double t7159;
  double t7160;
  double t7169;
  double t7170;
  double t7171;
  double t7173;
  double t7174;
  double t7176;
  double t7200;
  double t7201;
  double t7202;
  double t7205;
  double t7206;
  double t7207;
  double t7210;
  double t7212;
  double t7213;
  double t7215;
  double t7217;
  double t7218;
  double t7161;
  double t7167;
  double t7168;
  double t7172;
  double t7177;
  double t7178;
  double t7179;
  double t7184;
  double t7187;
  double t7188;
  double t7189;
  double t7190;
  double t7193;
  double t7194;
  double t7195;
  double t7203;
  double t7204;
  double t7208;
  double t7214;
  double t7219;
  double t7220;
  double t7221;
  double t7222;
  double t7223;
  double t7224;
  double t7226;
  double t7227;
  double t7229;
  double t7230;
  double t7231;
  double t7196;
  double t7232;
  double t7233;
  double t7234;
  double t7235;
  double t7239;
  t134 = Cos(var1[10]);
  t343 = Sin(var1[9]);
  t129 = Cos(var1[9]);
  t355 = Sin(var1[10]);
  t80 = Cos(var1[8]);
  t654 = t134*t343;
  t656 = t129*t355;
  t676 = 0. + t654 + t656;
  t289 = t129*t134;
  t473 = -1.*t343*t355;
  t561 = 0. + t289 + t473;
  t764 = Sin(var1[8]);
  t599 = t80*t561;
  t857 = -1.*t676*t764;
  t903 = 0. + t599 + t857;
  t1235 = Cos(var1[6]);
  t1142 = t80*t676;
  t1220 = t561*t764;
  t1221 = 0. + t1142 + t1220;
  t1140 = Sin(var1[6]);
  t1256 = Sin(var1[7]);
  t1308 = t1256*t903;
  t1315 = 0. + t1308;
  t26 = Cos(var1[4]);
  t66 = Cos(var1[7]);
  t1031 = Sin(var1[4]);
  t1106 = Sin(var1[5]);
  t1808 = -1.*t129*t134;
  t1871 = t343*t355;
  t1880 = 0. + t1808 + t1871;
  t1882 = -1.*t1880*t764;
  t1893 = 0. + t1142 + t1882;
  t1603 = Cos(var1[5]);
  t1949 = t80*t1880;
  t1974 = t676*t764;
  t1980 = 0. + t1949 + t1974;
  t1993 = t1256*t1893;
  t1997 = 0. + t1993;
  t907 = t66*t903;
  t987 = 0. + t907;
  t1029 = -1.*t26*t987;
  t1234 = -1.*t1140*t1221;
  t1374 = t1235*t1315;
  t1475 = 0. + t1234 + t1374;
  t1527 = t1106*t1475;
  t1630 = t1235*t1221;
  t1637 = t1140*t1315;
  t1649 = 0. + t1630 + t1637;
  t1654 = t1603*t1649;
  t1755 = 0. + t1527 + t1654;
  t1790 = -1.*t1031*t1755;
  t1805 = t1029 + t1790;
  t1906 = t66*t1893;
  t1912 = 0. + t1906;
  t1932 = -1.*t26*t1912;
  t1983 = -1.*t1140*t1980;
  t2055 = t1235*t1997;
  t2108 = 0. + t1983 + t2055;
  t2117 = t1106*t2108;
  t2141 = t1235*t1980;
  t2185 = t1140*t1997;
  t2200 = 0. + t2141 + t2185;
  t2264 = t1603*t2200;
  t2325 = 0. + t2117 + t2264;
  t2332 = -1.*t1031*t2325;
  t2348 = t1932 + t2332;
  t2493 = -1.*t66;
  t2519 = 0. + t2493;
  t2903 = -1.*t1106*t1475;
  t3341 = -1.*t1603*t1649;
  t3354 = t2903 + t3341;
  t3438 = var2[4]*t3354;
  t3486 = t1603*t1475;
  t3510 = -1.*t1106*t1649;
  t3556 = t3486 + t3510;
  t3560 = var2[3]*t26*t3556;
  t3641 = t3438 + t3560;
  t4075 = -1.*t1106*t2108;
  t4103 = -1.*t1603*t2200;
  t4340 = t4075 + t4103;
  t4478 = var2[4]*t4340;
  t4492 = t1603*t2108;
  t4707 = -1.*t1106*t2200;
  t4728 = t4492 + t4707;
  t4729 = var2[3]*t26*t4728;
  t4750 = t4478 + t4729;
  t2540 = t1235*t2519;
  t2555 = 0. + t2540;
  t2607 = t2519*t1140;
  t2609 = 0. + t2607;
  t6075 = t1234 + t1374;
  t6287 = -1.*t1235*t1221;
  t6293 = -1.*t1140*t1315;
  t6299 = t6287 + t6293;
  t6617 = t1983 + t2055;
  t6640 = -1.*t1235*t1980;
  t6641 = -1.*t1140*t1997;
  t6644 = t6640 + t6641;
  t6227 = -1.*t1106*t6075;
  t6364 = t1603*t6299;
  t6369 = t6227 + t6364;
  t6483 = var2[4]*t6369;
  t6509 = t1603*t6075;
  t6549 = t1106*t6299;
  t6585 = t6509 + t6549;
  t6598 = var2[3]*t26*t6585;
  t6600 = t6483 + t6598;
  t6630 = -1.*t1106*t6617;
  t6668 = t1603*t6644;
  t6673 = t6630 + t6668;
  t6675 = var2[4]*t6673;
  t6676 = t1603*t6617;
  t6732 = t1106*t6644;
  t6750 = t6676 + t6732;
  t6753 = var2[3]*t26*t6750;
  t6780 = t6675 + t6753;
  t6855 = -1.*var2[5]*t1256*t903;
  t6857 = -1.*var2[6]*t1256*t903;
  t6887 = t1603*t1235*t66*t903;
  t6888 = -1.*t66*t1106*t1140*t903;
  t6889 = t6887 + t6888;
  t6909 = var2[4]*t6889;
  t6916 = t1031*t1256*t903;
  t6919 = t1235*t66*t1106*t903;
  t6920 = t1603*t66*t1140*t903;
  t6922 = t6919 + t6920;
  t6936 = t26*t6922;
  t6937 = t6916 + t6936;
  t6941 = var2[3]*t6937;
  t6946 = t6855 + t6857 + t6909 + t6941;
  t6949 = -1.*var2[5]*t1256*t1893;
  t6978 = -1.*var2[6]*t1256*t1893;
  t6983 = t1603*t1235*t66*t1893;
  t6985 = -1.*t66*t1106*t1140*t1893;
  t6986 = t6983 + t6985;
  t6987 = var2[4]*t6986;
  t6990 = t1031*t1256*t1893;
  t6991 = t1235*t66*t1106*t1893;
  t6995 = t1603*t66*t1140*t1893;
  t6997 = t6991 + t6995;
  t6999 = t26*t6997;
  t7000 = t6990 + t6999;
  t7001 = var2[3]*t7000;
  t7002 = t6949 + t6978 + t6987 + t7001;
  t7061 = -1.*t80*t676;
  t7062 = -1.*t561*t764;
  t7064 = t7061 + t7062;
  t7054 = t599 + t857;
  t7068 = -1.*t1140*t7054;
  t7069 = t1235*t1256*t7064;
  t7070 = t7068 + t7069;
  t7072 = t1235*t7054;
  t7073 = t1140*t1256*t7064;
  t7074 = t7072 + t7073;
  t7100 = -1.*t80*t1880;
  t7101 = t7100 + t857;
  t7106 = t1142 + t1882;
  t7108 = t1140*t1256*t7101;
  t7111 = t1235*t7106;
  t7112 = t7108 + t7111;
  t7117 = t1235*t1256*t7101;
  t7123 = -1.*t1140*t7106;
  t7126 = t7117 + t7123;
  t7056 = var2[7]*t7054;
  t7066 = var2[5]*t66*t7064;
  t7067 = var2[6]*t66*t7064;
  t7071 = t1603*t7070;
  t7075 = -1.*t1106*t7074;
  t7077 = t7071 + t7075;
  t7082 = var2[4]*t7077;
  t7084 = -1.*t66*t1031*t7064;
  t7087 = t1106*t7070;
  t7088 = t1603*t7074;
  t7089 = t7087 + t7088;
  t7090 = t26*t7089;
  t7091 = t7084 + t7090;
  t7093 = var2[3]*t7091;
  t7094 = t7056 + t7066 + t7067 + t7082 + t7093;
  t7102 = var2[5]*t66*t7101;
  t7103 = var2[6]*t66*t7101;
  t7107 = var2[7]*t7106;
  t7115 = -1.*t1106*t7112;
  t7128 = t1603*t7126;
  t7129 = t7115 + t7128;
  t7130 = var2[4]*t7129;
  t7131 = -1.*t66*t1031*t7101;
  t7134 = t1603*t7112;
  t7136 = t1106*t7126;
  t7138 = t7134 + t7136;
  t7139 = t26*t7138;
  t7140 = t7131 + t7139;
  t7142 = var2[3]*t7140;
  t7143 = t7102 + t7103 + t7107 + t7130 + t7142;
  t7156 = -1.*t134*t343;
  t7157 = -1.*t129*t355;
  t7158 = t7156 + t7157;
  t7152 = t289 + t473;
  t7163 = t80*t7158;
  t7164 = -1.*t7152*t764;
  t7166 = t7163 + t7164;
  t7153 = t80*t7152;
  t7159 = t7158*t764;
  t7160 = t7153 + t7159;
  t7169 = -1.*t1140*t7160;
  t7170 = t1235*t1256*t7166;
  t7171 = t7169 + t7170;
  t7173 = t1235*t7160;
  t7174 = t1140*t1256*t7166;
  t7176 = t7173 + t7174;
  t7200 = t654 + t656;
  t7201 = -1.*t7200*t764;
  t7202 = t7153 + t7201;
  t7205 = t80*t7200;
  t7206 = t7152*t764;
  t7207 = t7205 + t7206;
  t7210 = t1140*t1256*t7202;
  t7212 = t1235*t7207;
  t7213 = t7210 + t7212;
  t7215 = t1235*t1256*t7202;
  t7217 = -1.*t1140*t7207;
  t7218 = t7215 + t7217;
  t7161 = var2[7]*t7160;
  t7167 = var2[5]*t66*t7166;
  t7168 = var2[6]*t66*t7166;
  t7172 = t1603*t7171;
  t7177 = -1.*t1106*t7176;
  t7178 = t7172 + t7177;
  t7179 = var2[4]*t7178;
  t7184 = -1.*t66*t1031*t7166;
  t7187 = t1106*t7171;
  t7188 = t1603*t7176;
  t7189 = t7187 + t7188;
  t7190 = t26*t7189;
  t7193 = t7184 + t7190;
  t7194 = var2[3]*t7193;
  t7195 = t7161 + t7167 + t7168 + t7179 + t7194;
  t7203 = var2[5]*t66*t7202;
  t7204 = var2[6]*t66*t7202;
  t7208 = var2[7]*t7207;
  t7214 = -1.*t1106*t7213;
  t7219 = t1603*t7218;
  t7220 = t7214 + t7219;
  t7221 = var2[4]*t7220;
  t7222 = -1.*t66*t1031*t7202;
  t7223 = t1603*t7213;
  t7224 = t1106*t7218;
  t7226 = t7223 + t7224;
  t7227 = t26*t7226;
  t7229 = t7222 + t7227;
  t7230 = var2[3]*t7229;
  t7231 = t7203 + t7204 + t7208 + t7221 + t7230;
  t7196 = 0.000334*t7195;
  t7232 = 0.00036*t7231;
  t7233 = t7196 + t7232;
  t7234 = 0.0341*t7195;
  t7235 = 0.000334*t7231;
  t7239 = t7234 + t7235;
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
  p_output1[12]=0.000334*t1805*var2[3] + 0.00036*t2348*var2[3];
  p_output1[13]=0.0341*t1805*var2[3] + 0.000334*t2348*var2[3];
  p_output1[14]=0.0341*(-1.*(0. + t1256)*t26 - 1.*t1031*(0. + t1106*t2555 + t1603*t2609))*var2[3];
  p_output1[15]=0.000334*t3641 + 0.00036*t4750;
  p_output1[16]=0.0341*t3641 + 0.000334*t4750;
  p_output1[17]=0.0341*(t26*(t1603*t2555 - 1.*t1106*t2609)*var2[3] + (-1.*t1106*t2555 - 1.*t1603*t2609)*var2[4]);
  p_output1[18]=0.000334*t6600 + 0.00036*t6780;
  p_output1[19]=0.0341*t6600 + 0.000334*t6780;
  p_output1[20]=0.0341*((-1.*t1106*t1140*t2519 + t1235*t1603*t2519)*t26*var2[3] + (-1.*t1106*t1235*t2519 - 1.*t1140*t1603*t2519)*var2[4]);
  p_output1[21]=0.000334*t6946 + 0.00036*t7002;
  p_output1[22]=0.0341*t6946 + 0.000334*t7002;
  p_output1[23]=0.0341*(((t1106*t1235*t1256 + t1140*t1256*t1603)*t26 - 1.*t1031*t66)*var2[3] + (-1.*t1106*t1140*t1256 + t1235*t1256*t1603)*var2[4] + t66*var2[5] + t66*var2[6]);
  p_output1[24]=0.000334*t7094 + 0.00036*t7143;
  p_output1[25]=0.0341*t7094 + 0.000334*t7143;
  p_output1[26]=0;
  p_output1[27]=t7233;
  p_output1[28]=t7239;
  p_output1[29]=0;
  p_output1[30]=t7233;
  p_output1[31]=t7239;
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



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jq_AMBody_LeftShin_mex.hh"

namespace SymExpression
{

void Jq_AMBody_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
