/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:23 GMT-04:00
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
  double t489;
  double t533;
  double t550;
  double t49;
  double t2316;
  double t2063;
  double t2272;
  double t2584;
  double t3324;
  double t2306;
  double t2634;
  double t2815;
  double t2043;
  double t3402;
  double t3510;
  double t3595;
  double t470;
  double t483;
  double t984;
  double t3959;
  double t2912;
  double t3623;
  double t3660;
  double t1933;
  double t4034;
  double t4091;
  double t4267;
  double t579;
  double t77;
  double t3752;
  double t4329;
  double t4373;
  double t4842;
  double t5017;
  double t5050;
  double t5255;
  double t5258;
  double t1287;
  double t6860;
  double t7121;
  double t7236;
  double t6726;
  double t7259;
  double t7272;
  double t7483;
  double t7606;
  double t7316;
  double t7607;
  double t7608;
  double t7671;
  double t7676;
  double t7677;
  double t7736;
  double t7751;
  double t181;
  double t450;
  double t616;
  double t639;
  double t661;
  double t1133;
  double t1279;
  double t1439;
  double t1643;
  double t1687;
  double t1797;
  double t4471;
  double t4771;
  double t4809;
  double t5130;
  double t5495;
  double t5621;
  double t5877;
  double t5924;
  double t5998;
  double t6062;
  double t6129;
  double t6235;
  double t6372;
  double t6386;
  double t7617;
  double t7620;
  double t7666;
  double t7696;
  double t7773;
  double t7775;
  double t7807;
  double t7808;
  double t7812;
  double t7827;
  double t7841;
  double t7846;
  double t7847;
  double t7848;
  double t7917;
  double t7918;
  double t7919;
  double t7926;
  double t7930;
  double t7931;
  double t7936;
  double t7937;
  double t7938;
  double t7959;
  double t7967;
  double t7969;
  double t7970;
  double t8014;
  double t8015;
  double t8047;
  double t8054;
  double t8058;
  double t8073;
  double t8077;
  double t8080;
  double t8082;
  double t8085;
  double t8090;
  double t8097;
  double t8099;
  double t8100;
  double t8177;
  double t8173;
  double t8174;
  double t8175;
  double t8193;
  double t8187;
  double t8188;
  double t8189;
  double t8160;
  double t8161;
  double t8163;
  double t8164;
  double t8165;
  double t8166;
  double t8167;
  double t8168;
  double t8169;
  double t8176;
  double t8178;
  double t8179;
  double t8180;
  double t8181;
  double t8182;
  double t8183;
  double t8184;
  double t8185;
  double t8192;
  double t8194;
  double t8195;
  double t8198;
  double t8199;
  double t8203;
  double t8204;
  double t8205;
  double t8206;
  double t8220;
  double t8221;
  double t8228;
  double t8229;
  double t8232;
  double t8233;
  double t8234;
  double t8235;
  double t8236;
  double t8237;
  double t8242;
  double t8244;
  double t8245;
  double t8246;
  double t8249;
  double t8250;
  double t8251;
  double t8254;
  double t8255;
  double t8256;
  double t8257;
  double t8260;
  double t8261;
  double t8262;
  double t8265;
  double t8266;
  double t8268;
  double t8273;
  double t8275;
  double t8277;
  double t8278;
  double t8279;
  double t8280;
  double t8281;
  double t8282;
  double t8283;
  double t8284;
  double t8287;
  double t8288;
  double t8289;
  double t8290;
  double t8291;
  double t8308;
  double t8309;
  double t8310;
  double t8314;
  double t8321;
  double t8322;
  double t8323;
  double t8317;
  double t8318;
  double t8319;
  double t8340;
  double t8342;
  double t8343;
  double t8337;
  double t8351;
  double t8352;
  double t8354;
  double t8346;
  double t8348;
  double t8349;
  double t8311;
  double t8312;
  double t8315;
  double t8320;
  double t8324;
  double t8325;
  double t8326;
  double t8327;
  double t8328;
  double t8329;
  double t8330;
  double t8331;
  double t8332;
  double t8333;
  double t8334;
  double t8338;
  double t8344;
  double t8345;
  double t8350;
  double t8355;
  double t8356;
  double t8357;
  double t8360;
  double t8362;
  double t8363;
  double t8364;
  double t8365;
  double t8366;
  double t8368;
  double t8369;
  double t8379;
  double t8380;
  double t8381;
  double t8383;
  double t8385;
  double t8387;
  double t8389;
  double t8392;
  double t8393;
  double t8394;
  double t8406;
  double t8409;
  double t8410;
  double t8397;
  double t8398;
  double t8403;
  double t8429;
  double t8430;
  double t8434;
  double t8440;
  double t8441;
  double t8443;
  double t8433;
  double t8435;
  double t8436;
  double t8457;
  double t8458;
  double t8459;
  double t8451;
  double t8452;
  double t8453;
  double t8390;
  double t8391;
  double t8395;
  double t8404;
  double t8411;
  double t8412;
  double t8413;
  double t8414;
  double t8415;
  double t8416;
  double t8421;
  double t8422;
  double t8423;
  double t8424;
  double t8426;
  double t8438;
  double t8448;
  double t8449;
  double t8456;
  double t8460;
  double t8461;
  double t8462;
  double t8465;
  double t8466;
  double t8472;
  double t8473;
  double t8474;
  double t8475;
  double t8476;
  double t8478;
  double t8490;
  double t8491;
  double t8493;
  double t8496;
  double t8495;
  double t8497;
  double t8498;
  double t8499;
  double t8500;
  double t8501;
  double t8502;
  double t8507;
  double t8508;
  double t8514;
  double t8520;
  double t8521;
  double t8529;
  double t8530;
  double t8531;
  double t8523;
  double t8525;
  double t8527;
  double t8560;
  double t8561;
  double t8562;
  double t8566;
  double t8567;
  double t8569;
  double t8575;
  double t8579;
  double t8580;
  double t8565;
  double t8571;
  double t8573;
  double t8596;
  double t8597;
  double t8599;
  double t8587;
  double t8588;
  double t8593;
  double t8509;
  double t8511;
  double t8522;
  double t8528;
  double t8534;
  double t8539;
  double t8541;
  double t8544;
  double t8546;
  double t8549;
  double t8552;
  double t8553;
  double t8554;
  double t8556;
  double t8558;
  double t8574;
  double t8583;
  double t8586;
  double t8595;
  double t8601;
  double t8602;
  double t8603;
  double t8604;
  double t8605;
  double t8607;
  double t8608;
  double t8609;
  double t8610;
  double t8612;
  double t8614;
  double t8559;
  double t8615;
  double t8617;
  double t8618;
  double t8619;
  double t8620;
  double t8621;
  double t8622;
  double t8626;
  t489 = Cos(var1[14]);
  t533 = -1.*t489;
  t550 = 0. + t533;
  t49 = Cos(var1[4]);
  t2316 = Cos(var1[17]);
  t2063 = Cos(var1[18]);
  t2272 = Sin(var1[17]);
  t2584 = Sin(var1[18]);
  t3324 = Cos(var1[16]);
  t2306 = t2063*t2272;
  t2634 = t2316*t2584;
  t2815 = 0. + t2306 + t2634;
  t2043 = Sin(var1[16]);
  t3402 = t2316*t2063;
  t3510 = -1.*t2272*t2584;
  t3595 = 0. + t3402 + t3510;
  t470 = Sin(var1[4]);
  t483 = Cos(var1[5]);
  t984 = Cos(var1[13]);
  t3959 = Sin(var1[15]);
  t2912 = -1.*t2043*t2815;
  t3623 = t3324*t3595;
  t3660 = 0. + t2912 + t3623;
  t1933 = Cos(var1[15]);
  t4034 = t3324*t2815;
  t4091 = t2043*t3595;
  t4267 = 0. + t4034 + t4091;
  t579 = Sin(var1[13]);
  t77 = Sin(var1[14]);
  t3752 = t1933*t3660;
  t4329 = -1.*t3959*t4267;
  t4373 = 0. + t3752 + t4329;
  t4842 = t3959*t3660;
  t5017 = t1933*t4267;
  t5050 = 0. + t4842 + t5017;
  t5255 = t77*t4373;
  t5258 = 0. + t5255;
  t1287 = Sin(var1[5]);
  t6860 = -1.*t2316*t2063;
  t7121 = t2272*t2584;
  t7236 = 0. + t6860 + t7121;
  t6726 = t2043*t2815;
  t7259 = t3324*t7236;
  t7272 = 0. + t6726 + t7259;
  t7483 = -1.*t2043*t7236;
  t7606 = 0. + t4034 + t7483;
  t7316 = -1.*t3959*t7272;
  t7607 = t1933*t7606;
  t7608 = 0. + t7316 + t7607;
  t7671 = t1933*t7272;
  t7676 = t3959*t7606;
  t7677 = 0. + t7671 + t7676;
  t7736 = t77*t7608;
  t7751 = 0. + t7736;
  t181 = 0. + t77;
  t450 = -1.*t49*t181;
  t616 = t550*t579;
  t639 = 0. + t616;
  t661 = t483*t639;
  t1133 = t984*t550;
  t1279 = 0. + t1133;
  t1439 = t1279*t1287;
  t1643 = 0. + t661 + t1439;
  t1687 = -1.*t470*t1643;
  t1797 = t450 + t1687;
  t4471 = t489*t4373;
  t4771 = 0. + t4471;
  t4809 = -1.*t49*t4771;
  t5130 = t984*t5050;
  t5495 = t579*t5258;
  t5621 = 0. + t5130 + t5495;
  t5877 = t483*t5621;
  t5924 = -1.*t579*t5050;
  t5998 = t984*t5258;
  t6062 = 0. + t5924 + t5998;
  t6129 = t6062*t1287;
  t6235 = 0. + t5877 + t6129;
  t6372 = -1.*t470*t6235;
  t6386 = t4809 + t6372;
  t7617 = t489*t7608;
  t7620 = 0. + t7617;
  t7666 = -1.*t49*t7620;
  t7696 = t984*t7677;
  t7773 = t579*t7751;
  t7775 = 0. + t7696 + t7773;
  t7807 = t483*t7775;
  t7808 = -1.*t579*t7677;
  t7812 = t984*t7751;
  t7827 = 0. + t7808 + t7812;
  t7841 = t7827*t1287;
  t7846 = 0. + t7807 + t7841;
  t7847 = -1.*t470*t7846;
  t7848 = t7666 + t7847;
  t7917 = -1.*t483*t639;
  t7918 = -1.*t1279*t1287;
  t7919 = t7917 + t7918;
  t7926 = var2[4]*t7919;
  t7930 = t1279*t483;
  t7931 = -1.*t639*t1287;
  t7936 = t7930 + t7931;
  t7937 = var2[3]*t49*t7936;
  t7938 = t7926 + t7937;
  t7959 = -1.*t483*t5621;
  t7967 = -1.*t6062*t1287;
  t7969 = t7959 + t7967;
  t7970 = var2[4]*t7969;
  t8014 = t483*t6062;
  t8015 = -1.*t5621*t1287;
  t8047 = t8014 + t8015;
  t8054 = var2[3]*t49*t8047;
  t8058 = t7970 + t8054;
  t8073 = -1.*t483*t7775;
  t8077 = -1.*t7827*t1287;
  t8080 = t8073 + t8077;
  t8082 = var2[4]*t8080;
  t8085 = t483*t7827;
  t8090 = -1.*t7775*t1287;
  t8097 = t8085 + t8090;
  t8099 = var2[3]*t49*t8097;
  t8100 = t8082 + t8099;
  t8177 = t5924 + t5998;
  t8173 = -1.*t984*t5050;
  t8174 = -1.*t579*t5258;
  t8175 = t8173 + t8174;
  t8193 = t7808 + t7812;
  t8187 = -1.*t984*t7677;
  t8188 = -1.*t579*t7751;
  t8189 = t8187 + t8188;
  t8160 = -1.*t550*t483*t579;
  t8161 = -1.*t984*t550*t1287;
  t8163 = t8160 + t8161;
  t8164 = var2[4]*t8163;
  t8165 = t984*t550*t483;
  t8166 = -1.*t550*t579*t1287;
  t8167 = t8165 + t8166;
  t8168 = var2[3]*t49*t8167;
  t8169 = t8164 + t8168;
  t8176 = t483*t8175;
  t8178 = -1.*t8177*t1287;
  t8179 = t8176 + t8178;
  t8180 = var2[4]*t8179;
  t8181 = t483*t8177;
  t8182 = t8175*t1287;
  t8183 = t8181 + t8182;
  t8184 = var2[3]*t49*t8183;
  t8185 = t8180 + t8184;
  t8192 = t483*t8189;
  t8194 = -1.*t8193*t1287;
  t8195 = t8192 + t8194;
  t8198 = var2[4]*t8195;
  t8199 = t483*t8193;
  t8203 = t8189*t1287;
  t8204 = t8199 + t8203;
  t8205 = var2[3]*t49*t8204;
  t8206 = t8198 + t8205;
  t8220 = var2[13]*t489;
  t8221 = var2[5]*t489;
  t8228 = t984*t483*t77;
  t8229 = -1.*t579*t77*t1287;
  t8232 = t8228 + t8229;
  t8233 = var2[4]*t8232;
  t8234 = -1.*t489*t470;
  t8235 = t483*t579*t77;
  t8236 = t984*t77*t1287;
  t8237 = t8235 + t8236;
  t8242 = t49*t8237;
  t8244 = t8234 + t8242;
  t8245 = var2[3]*t8244;
  t8246 = t8220 + t8221 + t8233 + t8245;
  t8249 = -1.*var2[13]*t77*t4373;
  t8250 = -1.*var2[5]*t77*t4373;
  t8251 = t984*t489*t483*t4373;
  t8254 = -1.*t489*t579*t4373*t1287;
  t8255 = t8251 + t8254;
  t8256 = var2[4]*t8255;
  t8257 = t77*t4373*t470;
  t8260 = t489*t483*t579*t4373;
  t8261 = t984*t489*t4373*t1287;
  t8262 = t8260 + t8261;
  t8265 = t49*t8262;
  t8266 = t8257 + t8265;
  t8268 = var2[3]*t8266;
  t8273 = t8249 + t8250 + t8256 + t8268;
  t8275 = -1.*var2[13]*t77*t7608;
  t8277 = -1.*var2[5]*t77*t7608;
  t8278 = t984*t489*t483*t7608;
  t8279 = -1.*t489*t579*t7608*t1287;
  t8280 = t8278 + t8279;
  t8281 = var2[4]*t8280;
  t8282 = t77*t7608*t470;
  t8283 = t489*t483*t579*t7608;
  t8284 = t984*t489*t7608*t1287;
  t8287 = t8283 + t8284;
  t8288 = t49*t8287;
  t8289 = t8282 + t8288;
  t8290 = var2[3]*t8289;
  t8291 = t8275 + t8277 + t8281 + t8290;
  t8308 = -1.*t3959*t3660;
  t8309 = -1.*t1933*t4267;
  t8310 = t8308 + t8309;
  t8314 = t3752 + t4329;
  t8321 = t579*t77*t8310;
  t8322 = t984*t8314;
  t8323 = t8321 + t8322;
  t8317 = t984*t77*t8310;
  t8318 = -1.*t579*t8314;
  t8319 = t8317 + t8318;
  t8340 = -1.*t1933*t7272;
  t8342 = -1.*t3959*t7606;
  t8343 = t8340 + t8342;
  t8337 = t7316 + t7607;
  t8351 = t984*t8337;
  t8352 = t579*t77*t8343;
  t8354 = t8351 + t8352;
  t8346 = -1.*t579*t8337;
  t8348 = t984*t77*t8343;
  t8349 = t8346 + t8348;
  t8311 = var2[13]*t489*t8310;
  t8312 = var2[5]*t489*t8310;
  t8315 = var2[14]*t8314;
  t8320 = t483*t8319;
  t8324 = -1.*t8323*t1287;
  t8325 = t8320 + t8324;
  t8326 = var2[4]*t8325;
  t8327 = -1.*t489*t8310*t470;
  t8328 = t483*t8323;
  t8329 = t8319*t1287;
  t8330 = t8328 + t8329;
  t8331 = t49*t8330;
  t8332 = t8327 + t8331;
  t8333 = var2[3]*t8332;
  t8334 = t8311 + t8312 + t8315 + t8326 + t8333;
  t8338 = var2[14]*t8337;
  t8344 = var2[13]*t489*t8343;
  t8345 = var2[5]*t489*t8343;
  t8350 = t483*t8349;
  t8355 = -1.*t8354*t1287;
  t8356 = t8350 + t8355;
  t8357 = var2[4]*t8356;
  t8360 = -1.*t489*t8343*t470;
  t8362 = t483*t8354;
  t8363 = t8349*t1287;
  t8364 = t8362 + t8363;
  t8365 = t49*t8364;
  t8366 = t8360 + t8365;
  t8368 = var2[3]*t8366;
  t8369 = t8338 + t8344 + t8345 + t8357 + t8368;
  t8379 = t2912 + t3623;
  t8380 = -1.*t3959*t8379;
  t8381 = -1.*t3324*t2815;
  t8383 = -1.*t2043*t3595;
  t8385 = t8381 + t8383;
  t8387 = t1933*t8385;
  t8389 = t8380 + t8387;
  t8392 = t1933*t8379;
  t8393 = t3959*t8385;
  t8394 = t8392 + t8393;
  t8406 = t579*t77*t8389;
  t8409 = t984*t8394;
  t8410 = t8406 + t8409;
  t8397 = t984*t77*t8389;
  t8398 = -1.*t579*t8394;
  t8403 = t8397 + t8398;
  t8429 = -1.*t3324*t7236;
  t8430 = t2912 + t8429;
  t8434 = t4034 + t7483;
  t8440 = t1933*t8430;
  t8441 = -1.*t3959*t8434;
  t8443 = t8440 + t8441;
  t8433 = t3959*t8430;
  t8435 = t1933*t8434;
  t8436 = t8433 + t8435;
  t8457 = t984*t8436;
  t8458 = t579*t77*t8443;
  t8459 = t8457 + t8458;
  t8451 = -1.*t579*t8436;
  t8452 = t984*t77*t8443;
  t8453 = t8451 + t8452;
  t8390 = var2[13]*t489*t8389;
  t8391 = var2[5]*t489*t8389;
  t8395 = var2[14]*t8394;
  t8404 = t483*t8403;
  t8411 = -1.*t8410*t1287;
  t8412 = t8404 + t8411;
  t8413 = var2[4]*t8412;
  t8414 = -1.*t489*t8389*t470;
  t8415 = t483*t8410;
  t8416 = t8403*t1287;
  t8421 = t8415 + t8416;
  t8422 = t49*t8421;
  t8423 = t8414 + t8422;
  t8424 = var2[3]*t8423;
  t8426 = t8390 + t8391 + t8395 + t8413 + t8424;
  t8438 = var2[14]*t8436;
  t8448 = var2[13]*t489*t8443;
  t8449 = var2[5]*t489*t8443;
  t8456 = t483*t8453;
  t8460 = -1.*t8459*t1287;
  t8461 = t8456 + t8460;
  t8462 = var2[4]*t8461;
  t8465 = -1.*t489*t8443*t470;
  t8466 = t483*t8459;
  t8472 = t8453*t1287;
  t8473 = t8466 + t8472;
  t8474 = t49*t8473;
  t8475 = t8465 + t8474;
  t8476 = var2[3]*t8475;
  t8478 = t8438 + t8448 + t8449 + t8462 + t8476;
  t8490 = -1.*t2063*t2272;
  t8491 = -1.*t2316*t2584;
  t8493 = t8490 + t8491;
  t8496 = t3402 + t3510;
  t8495 = t2043*t8493;
  t8497 = t3324*t8496;
  t8498 = t8495 + t8497;
  t8499 = -1.*t3959*t8498;
  t8500 = t3324*t8493;
  t8501 = -1.*t2043*t8496;
  t8502 = t8500 + t8501;
  t8507 = t1933*t8502;
  t8508 = t8499 + t8507;
  t8514 = t1933*t8498;
  t8520 = t3959*t8502;
  t8521 = t8514 + t8520;
  t8529 = t579*t77*t8508;
  t8530 = t984*t8521;
  t8531 = t8529 + t8530;
  t8523 = t984*t77*t8508;
  t8525 = -1.*t579*t8521;
  t8527 = t8523 + t8525;
  t8560 = t2306 + t2634;
  t8561 = -1.*t2043*t8560;
  t8562 = t8561 + t8497;
  t8566 = t3324*t8560;
  t8567 = t2043*t8496;
  t8569 = t8566 + t8567;
  t8575 = t1933*t8562;
  t8579 = -1.*t3959*t8569;
  t8580 = t8575 + t8579;
  t8565 = t3959*t8562;
  t8571 = t1933*t8569;
  t8573 = t8565 + t8571;
  t8596 = t984*t8573;
  t8597 = t579*t77*t8580;
  t8599 = t8596 + t8597;
  t8587 = -1.*t579*t8573;
  t8588 = t984*t77*t8580;
  t8593 = t8587 + t8588;
  t8509 = var2[13]*t489*t8508;
  t8511 = var2[5]*t489*t8508;
  t8522 = var2[14]*t8521;
  t8528 = t483*t8527;
  t8534 = -1.*t8531*t1287;
  t8539 = t8528 + t8534;
  t8541 = var2[4]*t8539;
  t8544 = -1.*t489*t8508*t470;
  t8546 = t483*t8531;
  t8549 = t8527*t1287;
  t8552 = t8546 + t8549;
  t8553 = t49*t8552;
  t8554 = t8544 + t8553;
  t8556 = var2[3]*t8554;
  t8558 = t8509 + t8511 + t8522 + t8541 + t8556;
  t8574 = var2[14]*t8573;
  t8583 = var2[13]*t489*t8580;
  t8586 = var2[5]*t489*t8580;
  t8595 = t483*t8593;
  t8601 = -1.*t8599*t1287;
  t8602 = t8595 + t8601;
  t8603 = var2[4]*t8602;
  t8604 = -1.*t489*t8580*t470;
  t8605 = t483*t8599;
  t8607 = t8593*t1287;
  t8608 = t8605 + t8607;
  t8609 = t49*t8608;
  t8610 = t8604 + t8609;
  t8612 = var2[3]*t8610;
  t8614 = t8574 + t8583 + t8586 + t8603 + t8612;
  t8559 = -0.00288*t8558;
  t8615 = 0.00113*t8614;
  t8617 = t8559 + t8615;
  t8618 = 0.0231*t8558;
  t8619 = -0.00288*t8614;
  t8620 = t8618 + t8619;
  t8621 = -0.000036*t8558;
  t8622 = 0.000063*t8614;
  t8626 = t8621 + t8622;
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
  p_output1[12]=0.000063*t1797*var2[3] - 0.00288*t6386*var2[3] + 0.00113*t7848*var2[3];
  p_output1[13]=-0.000036*t1797*var2[3] + 0.0231*t6386*var2[3] - 0.00288*t7848*var2[3];
  p_output1[14]=0.0239*t1797*var2[3] - 0.000036*t6386*var2[3] + 0.000063*t7848*var2[3];
  p_output1[15]=0.000063*t7938 - 0.00288*t8058 + 0.00113*t8100;
  p_output1[16]=-0.000036*t7938 + 0.0231*t8058 - 0.00288*t8100;
  p_output1[17]=0.0239*t7938 - 0.000036*t8058 + 0.000063*t8100;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[39]=0.000063*t8169 - 0.00288*t8185 + 0.00113*t8206;
  p_output1[40]=-0.000036*t8169 + 0.0231*t8185 - 0.00288*t8206;
  p_output1[41]=0.0239*t8169 - 0.000036*t8185 + 0.000063*t8206;
  p_output1[42]=0.000063*t8246 - 0.00288*t8273 + 0.00113*t8291;
  p_output1[43]=-0.000036*t8246 + 0.0231*t8273 - 0.00288*t8291;
  p_output1[44]=0.0239*t8246 - 0.000036*t8273 + 0.000063*t8291;
  p_output1[45]=-0.00288*t8334 + 0.00113*t8369;
  p_output1[46]=0.0231*t8334 - 0.00288*t8369;
  p_output1[47]=-0.000036*t8334 + 0.000063*t8369;
  p_output1[48]=-0.00288*t8426 + 0.00113*t8478;
  p_output1[49]=0.0231*t8426 - 0.00288*t8478;
  p_output1[50]=-0.000036*t8426 + 0.000063*t8478;
  p_output1[51]=t8617;
  p_output1[52]=t8620;
  p_output1[53]=t8626;
  p_output1[54]=t8617;
  p_output1[55]=t8620;
  p_output1[56]=t8626;
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

#include "Jq_AMBody_RightTarsus_mex.hh"

namespace SymExpression
{

void Jq_AMBody_RightTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
