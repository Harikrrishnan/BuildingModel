#include "RenewableSources_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 963
type: SIMPLE_ASSIGN
$DER.pv1.HDirTil.incAng.incAng.dec_s = cos(pv1.HDirTil.incAng.decAng.decAng) * $DER.pv1.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  (data->localData[0]->realVars[170] /* der(pv1.HDirTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[888] /* pv1.HDirTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[168] /* der(pv1.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 964
type: SIMPLE_ASSIGN
$DER.pv1.HDirTil.incAng.incAng.dec_c = (-sin(pv1.HDirTil.incAng.decAng.decAng)) * $DER.pv1.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[169] /* der(pv1.HDirTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[888] /* pv1.HDirTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[168] /* der(pv1.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4096(DATA *data, threadData_t *threadData);


/*
equation index: 966
type: SIMPLE_ASSIGN
$DER.pv1.HDirTil.H = if noEvent(0.0 > cos(pv1.HDirTil.inc) * weaBus.HDirNor) then 0.0 else cos(pv1.HDirTil.inc) * $DER.weaBus.HDirNor + (-sin(pv1.HDirTil.inc)) * $DER.pv1.HDirTil.inc * weaBus.HDirNor
*/
void RenewableSources_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  modelica_boolean tmp253;
  tmp253 = Greater(0.0,(cos((data->localData[0]->realVars[886] /* pv1.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  (data->localData[0]->realVars[165] /* der(pv1.HDirTil.H) DUMMY_DER */) = (tmp253?0.0:(cos((data->localData[0]->realVars[886] /* pv1.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[517] /* der(weaBus.HDirNor) DUMMY_DER */)) + (((-sin((data->localData[0]->realVars[886] /* pv1.HDirTil.inc DUMMY_STATE */)))) * ((data->localData[0]->realVars[166] /* der(pv1.HDirTil.inc) DUMMY_DER */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4014(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4015(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4018(DATA *data, threadData_t *threadData);


/*
equation index: 970
type: SIMPLE_ASSIGN
$DER.pv1.HDifTil.incAng.incAng.sol_c = (-sin(pv1.HDifTil.incAng.solHouAng.solHouAng)) * $DER.pv1.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[154] /* der(pv1.HDifTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[875] /* pv1.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[155] /* der(pv1.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3726(DATA *data, threadData_t *threadData);


/*
equation index: 972
type: SIMPLE_ASSIGN
$DER.pv1.HDifTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv1.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv1.HDifTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv1.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  modelica_real tmp254;
  modelica_real tmp255;
  tmp254 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[867] /* pv1.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp255 = 1.0 - ((tmp254 * tmp254));
  if(!(tmp255 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv1.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp255);
    }
  }
  (data->localData[0]->realVars[151] /* der(pv1.HDifTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[867] /* pv1.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[150] /* der(pv1.HDifTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp255),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv1.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
pv1.HDifTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv1.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  modelica_real tmp256;
  tmp256 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[867] /* pv1.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp256 >= -1.0 && tmp256 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv1.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp256);
    }
  }
  (data->localData[0]->realVars[868] /* pv1.HDifTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp256);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3729(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3730(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4016(DATA *data, threadData_t *threadData);


/*
equation index: 977
type: SIMPLE_ASSIGN
$DER.pv1.HDifTil.incAng.incAng.dec_s = cos(pv1.HDifTil.incAng.decAng.decAng) * $DER.pv1.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  (data->localData[0]->realVars[153] /* der(pv1.HDifTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[868] /* pv1.HDifTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[151] /* der(pv1.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
$DER.pv1.HDifTil.incAng.incAng.dec_c = (-sin(pv1.HDifTil.incAng.decAng.decAng)) * $DER.pv1.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  (data->localData[0]->realVars[152] /* der(pv1.HDifTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[868] /* pv1.HDifTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[151] /* der(pv1.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4100(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4101(DATA *data, threadData_t *threadData);


/*
equation index: 981
type: SIMPLE_ASSIGN
pv1.HDifTil.skyBri.extRadCor = 1.0 + 0.033 * cos(0.01721420632103996 * (weaBus.solTim / 86400.0 + 1.0))
*/
void RenewableSources_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[880] /* pv1.HDifTil.skyBri.extRadCor DUMMY_STATE */) = 1.0 + (0.033) * (cos((0.01721420632103996) * (DIVISION_SIM((data->localData[0]->realVars[1356] /* weaBus.solTim DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 1.0)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4332(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4333(DATA *data, threadData_t *threadData);


/*
equation index: 984
type: SIMPLE_ASSIGN
pv1.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) / (cos(pv1.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 1.253)
*/
void RenewableSources_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  tmp257 = 93.9 - (data->localData[0]->realVars[878] /* pv1.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp258 = 1.253;
  if(tmp257 < 0.0 && tmp258 != 0.0)
  {
    tmp260 = modf(tmp258, &tmp261);
    
    if(tmp260 > 0.5)
    {
      tmp260 -= 1.0;
      tmp261 += 1.0;
    }
    else if(tmp260 < -0.5)
    {
      tmp260 += 1.0;
      tmp261 -= 1.0;
    }
    
    if(fabs(tmp260) < 1e-10)
      tmp259 = pow(tmp257, tmp261);
    else
    {
      tmp263 = modf(1.0/tmp258, &tmp262);
      if(tmp263 > 0.5)
      {
        tmp263 -= 1.0;
        tmp262 += 1.0;
      }
      else if(tmp263 < -0.5)
      {
        tmp263 += 1.0;
        tmp262 -= 1.0;
      }
      if(fabs(tmp263) < 1e-10 && ((unsigned long)tmp262 & 1))
      {
        tmp259 = -pow(-tmp257, tmp260)*pow(tmp257, tmp261);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp257, tmp258);
      }
    }
  }
  else
  {
    tmp259 = pow(tmp257, tmp258);
  }
  if(isnan(tmp259) || isinf(tmp259))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp257, tmp258);
  }
  (data->localData[0]->realVars[877] /* pv1.HDifTil.relAirMas.relAirMas DUMMY_STATE */) = DIVISION_SIM(exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */))),cos((data->localData[0]->realVars[879] /* pv1.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp259,"(93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes),"cos(pv1.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4336(DATA *data, threadData_t *threadData);


/*
equation index: 986
type: SIMPLE_ASSIGN
$DER.pv1.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) * (sin(pv1.HDifTil.relAirMas.zenLim) * $DER.pv1.HDifTil.relAirMas.zenLim + (-0.18794999999999998) * (93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 0.2529999999999999 * $DER.pv1.HDifTil.relAirMas.zenDeg / abs(93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 2.506) / (cos(pv1.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0
*/
void RenewableSources_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  tmp264 = 93.9 - (data->localData[0]->realVars[878] /* pv1.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp265 = 0.2529999999999999;
  if(tmp264 < 0.0 && tmp265 != 0.0)
  {
    tmp267 = modf(tmp265, &tmp268);
    
    if(tmp267 > 0.5)
    {
      tmp267 -= 1.0;
      tmp268 += 1.0;
    }
    else if(tmp267 < -0.5)
    {
      tmp267 += 1.0;
      tmp268 -= 1.0;
    }
    
    if(fabs(tmp267) < 1e-10)
      tmp266 = pow(tmp264, tmp268);
    else
    {
      tmp270 = modf(1.0/tmp265, &tmp269);
      if(tmp270 > 0.5)
      {
        tmp270 -= 1.0;
        tmp269 += 1.0;
      }
      else if(tmp270 < -0.5)
      {
        tmp270 += 1.0;
        tmp269 -= 1.0;
      }
      if(fabs(tmp270) < 1e-10 && ((unsigned long)tmp269 & 1))
      {
        tmp266 = -pow(-tmp264, tmp267)*pow(tmp264, tmp268);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, tmp265);
      }
    }
  }
  else
  {
    tmp266 = pow(tmp264, tmp265);
  }
  if(isnan(tmp266) || isinf(tmp266))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, tmp265);
  }tmp271 = fabs(93.9 - (data->localData[0]->realVars[878] /* pv1.HDifTil.relAirMas.zenDeg DUMMY_STATE */));
  tmp272 = 2.506;
  if(tmp271 < 0.0 && tmp272 != 0.0)
  {
    tmp274 = modf(tmp272, &tmp275);
    
    if(tmp274 > 0.5)
    {
      tmp274 -= 1.0;
      tmp275 += 1.0;
    }
    else if(tmp274 < -0.5)
    {
      tmp274 += 1.0;
      tmp275 -= 1.0;
    }
    
    if(fabs(tmp274) < 1e-10)
      tmp273 = pow(tmp271, tmp275);
    else
    {
      tmp277 = modf(1.0/tmp272, &tmp276);
      if(tmp277 > 0.5)
      {
        tmp277 -= 1.0;
        tmp276 += 1.0;
      }
      else if(tmp277 < -0.5)
      {
        tmp277 += 1.0;
        tmp276 -= 1.0;
      }
      if(fabs(tmp277) < 1e-10 && ((unsigned long)tmp276 & 1))
      {
        tmp273 = -pow(-tmp271, tmp274)*pow(tmp271, tmp275);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp271, tmp272);
      }
    }
  }
  else
  {
    tmp273 = pow(tmp271, tmp272);
  }
  if(isnan(tmp273) || isinf(tmp273))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp271, tmp272);
  }tmp278 = 93.9 - (data->localData[0]->realVars[878] /* pv1.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp279 = 1.253;
  if(tmp278 < 0.0 && tmp279 != 0.0)
  {
    tmp281 = modf(tmp279, &tmp282);
    
    if(tmp281 > 0.5)
    {
      tmp281 -= 1.0;
      tmp282 += 1.0;
    }
    else if(tmp281 < -0.5)
    {
      tmp281 += 1.0;
      tmp282 -= 1.0;
    }
    
    if(fabs(tmp281) < 1e-10)
      tmp280 = pow(tmp278, tmp282);
    else
    {
      tmp284 = modf(1.0/tmp279, &tmp283);
      if(tmp284 > 0.5)
      {
        tmp284 -= 1.0;
        tmp283 += 1.0;
      }
      else if(tmp284 < -0.5)
      {
        tmp284 += 1.0;
        tmp283 -= 1.0;
      }
      if(fabs(tmp284) < 1e-10 && ((unsigned long)tmp283 & 1))
      {
        tmp280 = -pow(-tmp278, tmp281)*pow(tmp278, tmp282);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp278, tmp279);
      }
    }
  }
  else
  {
    tmp280 = pow(tmp278, tmp279);
  }
  if(isnan(tmp280) || isinf(tmp280))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp278, tmp279);
  }tmp285 = cos((data->localData[0]->realVars[879] /* pv1.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp280,"(93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  (data->localData[0]->realVars[157] /* der(pv1.HDifTil.relAirMas.relAirMas) DUMMY_DER */) = (exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */)))) * (DIVISION_SIM((sin((data->localData[0]->realVars[879] /* pv1.HDifTil.relAirMas.zenLim DUMMY_STATE */))) * ((data->localData[0]->realVars[159] /* der(pv1.HDifTil.relAirMas.zenLim) DUMMY_DER */)) + (-0.18794999999999998) * ((tmp266) * (DIVISION_SIM((data->localData[0]->realVars[158] /* der(pv1.HDifTil.relAirMas.zenDeg) DUMMY_DER */),tmp273,"abs(93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 2.506",equationIndexes))),(tmp285 * tmp285),"(cos(pv1.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv1.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0",equationIndexes));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4851(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3686(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4338(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4339(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4352(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4350(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4353(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4348(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4351(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4346(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4349(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4344(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4347(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4342(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4345(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4341(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4343(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4340(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4359(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4358(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4357(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4361(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4356(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4355(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4354(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4360(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4853(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4867(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4865(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4863(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4866(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4861(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4864(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4859(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4862(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4857(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4860(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4855(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4858(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4854(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4856(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4873(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4872(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4871(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4875(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4870(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4869(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4868(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4874(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3675(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4362(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4017(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4363(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4364(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4365(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4366(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4877(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4878(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4879(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4880(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4881(DATA *data, threadData_t *threadData);


/*
equation index: 1048
type: SIMPLE_ASSIGN
$DER.pv1.panel.load.Q = $DER.PSol.u[1] * tan(-acos(pv1.panel.load.pf))
*/
void RenewableSources_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  modelica_real tmp286;
  tmp286 = (data->simulationInfo->realParameter[650] /* pv1.panel.load.pf PARAM */);
  if(!(tmp286 >= -1.0 && tmp286 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv1.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp286);
    }
  }
  (data->localData[0]->realVars[175] /* der(pv1.panel.load.Q) DUMMY_DER */) = ((data->localData[0]->realVars[7] /* der(PSol.u[1]) DUMMY_DER */)) * (tan((-acos(tmp286))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4367(DATA *data, threadData_t *threadData);


/*
equation index: 1050
type: SIMPLE_ASSIGN
pv1.panel.load.Q = PSol.u[1] * tan(-acos(pv1.panel.load.pf))
*/
void RenewableSources_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  modelica_real tmp287;
  tmp287 = (data->simulationInfo->realParameter[650] /* pv1.panel.load.pf PARAM */);
  if(!(tmp287 >= -1.0 && tmp287 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv1.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp287);
    }
  }
  (data->localData[0]->realVars[898] /* pv1.panel.load.Q DUMMY_STATE */) = ((data->localData[0]->realVars[623] /* PSol.u[1] DUMMY_STATE */)) * (tan((-acos(tmp287))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4632(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4633(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3541(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3571(DATA *data, threadData_t *threadData);


/*
equation index: 1055
type: SIMPLE_ASSIGN
$PRE.pv1.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  (data->simulationInfo->realVarsPre[1436] /* pv1.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
$whenCondition26 = pv1.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv1.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1056};
  modelica_boolean tmp288;
  tmp288 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1436] /* pv1.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[18] /* $whenCondition26 DISCRETE */) = ((data->simulationInfo->booleanParameter[67] /* pv1.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp288);
  TRACE_POP
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
$PRE.pv1.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  (data->simulationInfo->realVarsPre[1437] /* pv1.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
$whenCondition25 = pv1.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv1.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1058};
  modelica_boolean tmp289;
  tmp289 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1437] /* pv1.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[17] /* $whenCondition25 DISCRETE */) = ((data->simulationInfo->booleanParameter[70] /* pv1.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp289);
  TRACE_POP
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
$PRE.pv2.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1059};
  (data->simulationInfo->realVarsPre[1438] /* pv2.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
$whenCondition24 = pv2.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv2.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  modelica_boolean tmp290;
  tmp290 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1438] /* pv2.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[16] /* $whenCondition24 DISCRETE */) = ((data->simulationInfo->booleanParameter[75] /* pv2.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp290);
  TRACE_POP
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
$PRE.pv2.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  (data->simulationInfo->realVarsPre[1439] /* pv2.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
$whenCondition23 = pv2.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv2.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  modelica_boolean tmp291;
  tmp291 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1439] /* pv2.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[15] /* $whenCondition23 DISCRETE */) = ((data->simulationInfo->booleanParameter[78] /* pv2.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp291);
  TRACE_POP
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
$PRE.pv3.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  (data->simulationInfo->realVarsPre[1440] /* pv3.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
$whenCondition22 = pv3.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv3.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1064};
  modelica_boolean tmp292;
  tmp292 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1440] /* pv3.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[14] /* $whenCondition22 DISCRETE */) = ((data->simulationInfo->booleanParameter[83] /* pv3.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp292);
  TRACE_POP
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
$PRE.pv3.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  (data->simulationInfo->realVarsPre[1441] /* pv3.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
$whenCondition21 = pv3.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv3.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  modelica_boolean tmp293;
  tmp293 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1441] /* pv3.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[13] /* $whenCondition21 DISCRETE */) = ((data->simulationInfo->booleanParameter[86] /* pv3.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp293);
  TRACE_POP
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
$PRE.pv4.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  (data->simulationInfo->realVarsPre[1442] /* pv4.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
$whenCondition20 = pv4.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv4.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  modelica_boolean tmp294;
  tmp294 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1442] /* pv4.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[12] /* $whenCondition20 DISCRETE */) = ((data->simulationInfo->booleanParameter[91] /* pv4.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp294);
  TRACE_POP
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
$PRE.pv4.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  (data->simulationInfo->realVarsPre[1443] /* pv4.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
$whenCondition19 = pv4.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv4.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  modelica_boolean tmp295;
  tmp295 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1443] /* pv4.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[10] /* $whenCondition19 DISCRETE */) = ((data->simulationInfo->booleanParameter[94] /* pv4.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp295);
  TRACE_POP
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
$PRE.pv5.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1071};
  (data->simulationInfo->realVarsPre[1444] /* pv5.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
$whenCondition18 = pv5.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv5.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  modelica_boolean tmp296;
  tmp296 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1444] /* pv5.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[9] /* $whenCondition18 DISCRETE */) = ((data->simulationInfo->booleanParameter[99] /* pv5.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp296);
  TRACE_POP
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
$PRE.pv5.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1073};
  (data->simulationInfo->realVarsPre[1445] /* pv5.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
$whenCondition17 = pv5.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv5.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  modelica_boolean tmp297;
  tmp297 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1445] /* pv5.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[8] /* $whenCondition17 DISCRETE */) = ((data->simulationInfo->booleanParameter[102] /* pv5.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp297);
  TRACE_POP
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
$PRE.pv6.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  (data->simulationInfo->realVarsPre[1446] /* pv6.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
$whenCondition16 = pv6.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv6.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  modelica_boolean tmp298;
  tmp298 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1446] /* pv6.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[7] /* $whenCondition16 DISCRETE */) = ((data->simulationInfo->booleanParameter[107] /* pv6.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp298);
  TRACE_POP
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
$PRE.pv6.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  (data->simulationInfo->realVarsPre[1447] /* pv6.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
$whenCondition15 = pv6.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv6.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  modelica_boolean tmp299;
  tmp299 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1447] /* pv6.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[6] /* $whenCondition15 DISCRETE */) = ((data->simulationInfo->booleanParameter[110] /* pv6.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp299);
  TRACE_POP
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
$PRE.pv7.HDifTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  (data->simulationInfo->realVarsPre[1448] /* pv7.HDifTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
$whenCondition14 = pv7.HDifTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv7.HDifTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  modelica_boolean tmp300;
  tmp300 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1448] /* pv7.HDifTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[5] /* $whenCondition14 DISCRETE */) = ((data->simulationInfo->booleanParameter[115] /* pv7.HDifTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp300);
  TRACE_POP
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
$PRE.pv7.HDirTil.incAng.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  (data->simulationInfo->realVarsPre[1449] /* pv7.HDirTil.incAng.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
$whenCondition13 = pv7.HDirTil.incAng.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.pv7.HDirTil.incAng.decAng.tNext
*/
void RenewableSources_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  modelica_boolean tmp301;
  tmp301 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1449] /* pv7.HDirTil.incAng.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[4] /* $whenCondition13 DISCRETE */) = ((data->simulationInfo->booleanParameter[118] /* pv7.HDirTil.incAng.decAng.canRepeatWeatherFile PARAM */) && tmp301);
  TRACE_POP
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
$PRE.weaDat.locTim.tNext = 0.0
*/
void RenewableSources_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  (data->simulationInfo->realVarsPre[1454] /* weaDat.locTim.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
$whenCondition12 = weaDat.locTim.canRepeatWeatherFile and weaBus.cloTim > $PRE.weaDat.locTim.tNext
*/
void RenewableSources_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  modelica_boolean tmp302;
  tmp302 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1454] /* weaDat.locTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[3] /* $whenCondition12 DISCRETE */) = ((data->simulationInfo->booleanParameter[137] /* weaDat.locTim.canRepeatWeatherFile PARAM */) && tmp302);
  TRACE_POP
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
$PRE.weaDat.conTimMin.tNext = 0.0
*/
void RenewableSources_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  (data->simulationInfo->realVarsPre[1451] /* weaDat.conTimMin.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
$whenCondition11 = weaDat.conTimMin.canRepeatWeatherFile and weaDat.conTimMin.modTimAux > $PRE.weaDat.conTimMin.tNext
*/
void RenewableSources_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  modelica_boolean tmp303;
  tmp303 = Greater((data->localData[0]->realVars[1366] /* weaDat.conTimMin.modTimAux DUMMY_STATE */),(data->simulationInfo->realVarsPre[1451] /* weaDat.conTimMin.tNext DISCRETE */));
  (data->localData[0]->booleanVars[2] /* $whenCondition11 DISCRETE */) = ((data->simulationInfo->booleanParameter[128] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) && tmp303);
  TRACE_POP
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
$PRE.weaDat.conTim.tNext = 0.0
*/
void RenewableSources_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  (data->simulationInfo->realVarsPre[1450] /* weaDat.conTim.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
$whenCondition10 = weaDat.conTim.canRepeatWeatherFile and weaBus.cloTim > $PRE.weaDat.conTim.tNext
*/
void RenewableSources_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  modelica_boolean tmp304;
  tmp304 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1450] /* weaDat.conTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */) = ((data->simulationInfo->booleanParameter[127] /* weaDat.conTim.canRepeatWeatherFile PARAM */) && tmp304);
  TRACE_POP
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
$PRE.weaDat.eqnTim.tNext = 0.0
*/
void RenewableSources_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  (data->simulationInfo->realVarsPre[1453] /* weaDat.eqnTim.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
$whenCondition9 = weaDat.eqnTim.canRepeatWeatherFile and weaBus.cloTim > $PRE.weaDat.eqnTim.tNext
*/
void RenewableSources_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1090};
  modelica_boolean tmp305;
  tmp305 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1453] /* weaDat.eqnTim.tNext DISCRETE */));
  (data->localData[0]->booleanVars[25] /* $whenCondition9 DISCRETE */) = ((data->simulationInfo->booleanParameter[136] /* weaDat.eqnTim.canRepeatWeatherFile PARAM */) && tmp305);
  TRACE_POP
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
$PRE.weaDat.decAng.tNext = 0.0
*/
void RenewableSources_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  (data->simulationInfo->realVarsPre[1452] /* weaDat.decAng.tNext DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
$whenCondition8 = weaDat.decAng.canRepeatWeatherFile and weaBus.cloTim > $PRE.weaDat.decAng.tNext
*/
void RenewableSources_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  modelica_boolean tmp306;
  tmp306 = Greater((data->localData[0]->realVars[1349] /* weaBus.cloTim DUMMY_STATE */),(data->simulationInfo->realVarsPre[1452] /* weaDat.decAng.tNext DISCRETE */));
  (data->localData[0]->booleanVars[24] /* $whenCondition8 DISCRETE */) = ((data->simulationInfo->booleanParameter[135] /* weaDat.decAng.canRepeatWeatherFile PARAM */) && tmp306);
  TRACE_POP
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
$PRE.pow1.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  (data->simulationInfo->realVarsPre[1423] /* pow1.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
pow1.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow1.tableID, 1, pow1.timeScaled, pow1.nextTimeEventScaled, $PRE.pow1.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  (data->localData[0]->realVars[826] /* pow1.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 1), (data->localData[0]->realVars[825] /* pow1.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1423] /* pow1.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1423] /* pow1.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3653(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3654(DATA *data, threadData_t *threadData);


/*
equation index: 1097
type: SIMPLE_ASSIGN
loa1.Q = loa1.P * tan(acos(smooth(1, if noEvent(0.99999 - loa1.pf > 2.5e-6) then loa1.pf else if noEvent(0.99999 - loa1.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa1.pf) * ((399996.0 - 399999.99999999994 * loa1.pf) ^ 2.0 - 3.0) * (0.99999 - loa1.pf) + 0.5 * loa1.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  modelica_real tmp309;
  modelica_boolean tmp310;
  modelica_real tmp311;
  modelica_boolean tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  tmp307 = Greater(0.99999 - (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */),2.5e-6);
  tmp312 = (modelica_boolean)tmp307;
  if(tmp312)
  {
    tmp313 = (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */);
  }
  else
  {
    tmp308 = Less(0.99999 - (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */),-2.5e-6);
    tmp310 = (modelica_boolean)tmp308;
    if(tmp310)
    {
      tmp311 = 0.99999;
    }
    else
    {
      tmp309 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[321] /* loa1.pf PARAM */)));
      tmp311 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[321] /* loa1.pf PARAM */)))) * ((tmp309 * tmp309) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[321] /* loa1.pf PARAM */)) + 0.499995;
    }
    tmp313 = tmp311;
  }
  tmp314 = tmp313;
  if(!(tmp314 >= -1.0 && tmp314 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa1.pf > 2.5e-6) then loa1.pf else if noEvent(0.99999 - loa1.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa1.pf) * ((399996.0 - 399999.99999999994 * loa1.pf) ^ 2.0 - 3.0) * (0.99999 - loa1.pf) + 0.5 * loa1.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp314);
    }
  }
  (data->localData[0]->realVars[728] /* loa1.Q DUMMY_STATE */) = ((data->localData[0]->realVars[726] /* loa1.P DUMMY_STATE */)) * (tan(acos(tmp314)));
  TRACE_POP
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
$DER.pow1.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow1.tableID, 1, pow1.timeScaled, pow1.nextTimeEventScaled, $PRE.pow1.nextTimeEventScaled, $DER.pow1.timeScaled)
*/
void RenewableSources_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[110] /* der(pow1.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 1), (data->localData[0]->realVars[825] /* pow1.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1423] /* pow1.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1423] /* pow1.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[109] /* der(pow1.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3659(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3660(DATA *data, threadData_t *threadData);


/*
equation index: 1101
type: SIMPLE_ASSIGN
$DER.loa1.Q = $DER.loa1.P * tan(acos(smooth(1, if noEvent(0.99999 - loa1.pf > 2.5e-6) then loa1.pf else if noEvent(0.99999 - loa1.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa1.pf) * ((399996.0 - 399999.99999999994 * loa1.pf) ^ 2.0 - 3.0) * (0.99999 - loa1.pf) + 0.5 * loa1.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  modelica_real tmp317;
  modelica_boolean tmp318;
  modelica_real tmp319;
  modelica_boolean tmp320;
  modelica_real tmp321;
  modelica_real tmp322;
  tmp315 = Greater(0.99999 - (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */),2.5e-6);
  tmp320 = (modelica_boolean)tmp315;
  if(tmp320)
  {
    tmp321 = (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */);
  }
  else
  {
    tmp316 = Less(0.99999 - (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */),-2.5e-6);
    tmp318 = (modelica_boolean)tmp316;
    if(tmp318)
    {
      tmp319 = 0.99999;
    }
    else
    {
      tmp317 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[321] /* loa1.pf PARAM */)));
      tmp319 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[321] /* loa1.pf PARAM */)))) * ((tmp317 * tmp317) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[321] /* loa1.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[321] /* loa1.pf PARAM */)) + 0.499995;
    }
    tmp321 = tmp319;
  }
  tmp322 = tmp321;
  if(!(tmp322 >= -1.0 && tmp322 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa1.pf > 2.5e-6) then loa1.pf else if noEvent(0.99999 - loa1.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa1.pf) * ((399996.0 - 399999.99999999994 * loa1.pf) ^ 2.0 - 3.0) * (0.99999 - loa1.pf) + 0.5 * loa1.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp322);
    }
  }
  (data->localData[0]->realVars[60] /* der(loa1.Q) DUMMY_DER */) = ((data->localData[0]->realVars[59] /* der(loa1.P) DUMMY_DER */)) * (tan(acos(tmp322)));
  TRACE_POP
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
$PRE.pow2.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  (data->simulationInfo->realVarsPre[1425] /* pow2.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
pow2.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow2.tableID, 1, pow2.timeScaled, pow2.nextTimeEventScaled, $PRE.pow2.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[828] /* pow2.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 1), (data->localData[0]->realVars[827] /* pow2.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1425] /* pow2.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1425] /* pow2.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3642(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3643(DATA *data, threadData_t *threadData);


/*
equation index: 1106
type: SIMPLE_ASSIGN
loa2.Q = loa2.P * tan(acos(smooth(1, if noEvent(0.99999 - loa2.pf > 2.5e-6) then loa2.pf else if noEvent(0.99999 - loa2.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa2.pf) * ((399996.0 - 399999.99999999994 * loa2.pf) ^ 2.0 - 3.0) * (0.99999 - loa2.pf) + 0.5 * loa2.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  modelica_boolean tmp323;
  modelica_boolean tmp324;
  modelica_real tmp325;
  modelica_boolean tmp326;
  modelica_real tmp327;
  modelica_boolean tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  tmp323 = Greater(0.99999 - (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */),2.5e-6);
  tmp328 = (modelica_boolean)tmp323;
  if(tmp328)
  {
    tmp329 = (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */);
  }
  else
  {
    tmp324 = Less(0.99999 - (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */),-2.5e-6);
    tmp326 = (modelica_boolean)tmp324;
    if(tmp326)
    {
      tmp327 = 0.99999;
    }
    else
    {
      tmp325 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[325] /* loa2.pf PARAM */)));
      tmp327 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[325] /* loa2.pf PARAM */)))) * ((tmp325 * tmp325) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[325] /* loa2.pf PARAM */)) + 0.499995;
    }
    tmp329 = tmp327;
  }
  tmp330 = tmp329;
  if(!(tmp330 >= -1.0 && tmp330 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa2.pf > 2.5e-6) then loa2.pf else if noEvent(0.99999 - loa2.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa2.pf) * ((399996.0 - 399999.99999999994 * loa2.pf) ^ 2.0 - 3.0) * (0.99999 - loa2.pf) + 0.5 * loa2.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp330);
    }
  }
  (data->localData[0]->realVars[743] /* loa2.Q DUMMY_STATE */) = ((data->localData[0]->realVars[741] /* loa2.P DUMMY_STATE */)) * (tan(acos(tmp330)));
  TRACE_POP
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
$DER.pow2.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow2.tableID, 1, pow2.timeScaled, pow2.nextTimeEventScaled, $PRE.pow2.nextTimeEventScaled, $DER.pow2.timeScaled)
*/
void RenewableSources_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[112] /* der(pow2.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 1), (data->localData[0]->realVars[827] /* pow2.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1425] /* pow2.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1425] /* pow2.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[111] /* der(pow2.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3646(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3647(DATA *data, threadData_t *threadData);


/*
equation index: 1110
type: SIMPLE_ASSIGN
$DER.loa2.Q = $DER.loa2.P * tan(acos(smooth(1, if noEvent(0.99999 - loa2.pf > 2.5e-6) then loa2.pf else if noEvent(0.99999 - loa2.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa2.pf) * ((399996.0 - 399999.99999999994 * loa2.pf) ^ 2.0 - 3.0) * (0.99999 - loa2.pf) + 0.5 * loa2.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  modelica_real tmp333;
  modelica_boolean tmp334;
  modelica_real tmp335;
  modelica_boolean tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  tmp331 = Greater(0.99999 - (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */),2.5e-6);
  tmp336 = (modelica_boolean)tmp331;
  if(tmp336)
  {
    tmp337 = (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */);
  }
  else
  {
    tmp332 = Less(0.99999 - (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */),-2.5e-6);
    tmp334 = (modelica_boolean)tmp332;
    if(tmp334)
    {
      tmp335 = 0.99999;
    }
    else
    {
      tmp333 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[325] /* loa2.pf PARAM */)));
      tmp335 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[325] /* loa2.pf PARAM */)))) * ((tmp333 * tmp333) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[325] /* loa2.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[325] /* loa2.pf PARAM */)) + 0.499995;
    }
    tmp337 = tmp335;
  }
  tmp338 = tmp337;
  if(!(tmp338 >= -1.0 && tmp338 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa2.pf > 2.5e-6) then loa2.pf else if noEvent(0.99999 - loa2.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa2.pf) * ((399996.0 - 399999.99999999994 * loa2.pf) ^ 2.0 - 3.0) * (0.99999 - loa2.pf) + 0.5 * loa2.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp338);
    }
  }
  (data->localData[0]->realVars[68] /* der(loa2.Q) DUMMY_DER */) = ((data->localData[0]->realVars[67] /* der(loa2.P) DUMMY_DER */)) * (tan(acos(tmp338)));
  TRACE_POP
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
$PRE.pow3.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  (data->simulationInfo->realVarsPre[1427] /* pow3.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
pow3.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow3.tableID, 1, pow3.timeScaled, pow3.nextTimeEventScaled, $PRE.pow3.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[830] /* pow3.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[829] /* pow3.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1427] /* pow3.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1427] /* pow3.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3631(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3632(DATA *data, threadData_t *threadData);


/*
equation index: 1115
type: SIMPLE_ASSIGN
loa3.Q = loa3.P * tan(acos(smooth(1, if noEvent(0.99999 - loa3.pf > 2.5e-6) then loa3.pf else if noEvent(0.99999 - loa3.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa3.pf) * ((399996.0 - 399999.99999999994 * loa3.pf) ^ 2.0 - 3.0) * (0.99999 - loa3.pf) + 0.5 * loa3.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1115};
  modelica_boolean tmp339;
  modelica_boolean tmp340;
  modelica_real tmp341;
  modelica_boolean tmp342;
  modelica_real tmp343;
  modelica_boolean tmp344;
  modelica_real tmp345;
  modelica_real tmp346;
  tmp339 = Greater(0.99999 - (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */),2.5e-6);
  tmp344 = (modelica_boolean)tmp339;
  if(tmp344)
  {
    tmp345 = (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */);
  }
  else
  {
    tmp340 = Less(0.99999 - (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */),-2.5e-6);
    tmp342 = (modelica_boolean)tmp340;
    if(tmp342)
    {
      tmp343 = 0.99999;
    }
    else
    {
      tmp341 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[329] /* loa3.pf PARAM */)));
      tmp343 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[329] /* loa3.pf PARAM */)))) * ((tmp341 * tmp341) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[329] /* loa3.pf PARAM */)) + 0.499995;
    }
    tmp345 = tmp343;
  }
  tmp346 = tmp345;
  if(!(tmp346 >= -1.0 && tmp346 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa3.pf > 2.5e-6) then loa3.pf else if noEvent(0.99999 - loa3.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa3.pf) * ((399996.0 - 399999.99999999994 * loa3.pf) ^ 2.0 - 3.0) * (0.99999 - loa3.pf) + 0.5 * loa3.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp346);
    }
  }
  (data->localData[0]->realVars[757] /* loa3.Q DUMMY_STATE */) = ((data->localData[0]->realVars[755] /* loa3.P DUMMY_STATE */)) * (tan(acos(tmp346)));
  TRACE_POP
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
$DER.pow3.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow3.tableID, 1, pow3.timeScaled, pow3.nextTimeEventScaled, $PRE.pow3.nextTimeEventScaled, $DER.pow3.timeScaled)
*/
void RenewableSources_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  (data->localData[0]->realVars[114] /* der(pow3.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[829] /* pow3.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1427] /* pow3.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1427] /* pow3.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[113] /* der(pow3.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3635(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3636(DATA *data, threadData_t *threadData);


/*
equation index: 1119
type: SIMPLE_ASSIGN
$DER.loa3.Q = $DER.loa3.P * tan(acos(smooth(1, if noEvent(0.99999 - loa3.pf > 2.5e-6) then loa3.pf else if noEvent(0.99999 - loa3.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa3.pf) * ((399996.0 - 399999.99999999994 * loa3.pf) ^ 2.0 - 3.0) * (0.99999 - loa3.pf) + 0.5 * loa3.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1119};
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_real tmp351;
  modelica_boolean tmp352;
  modelica_real tmp353;
  modelica_real tmp354;
  tmp347 = Greater(0.99999 - (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */),2.5e-6);
  tmp352 = (modelica_boolean)tmp347;
  if(tmp352)
  {
    tmp353 = (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */);
  }
  else
  {
    tmp348 = Less(0.99999 - (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */),-2.5e-6);
    tmp350 = (modelica_boolean)tmp348;
    if(tmp350)
    {
      tmp351 = 0.99999;
    }
    else
    {
      tmp349 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[329] /* loa3.pf PARAM */)));
      tmp351 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[329] /* loa3.pf PARAM */)))) * ((tmp349 * tmp349) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[329] /* loa3.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[329] /* loa3.pf PARAM */)) + 0.499995;
    }
    tmp353 = tmp351;
  }
  tmp354 = tmp353;
  if(!(tmp354 >= -1.0 && tmp354 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa3.pf > 2.5e-6) then loa3.pf else if noEvent(0.99999 - loa3.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa3.pf) * ((399996.0 - 399999.99999999994 * loa3.pf) ^ 2.0 - 3.0) * (0.99999 - loa3.pf) + 0.5 * loa3.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp354);
    }
  }
  (data->localData[0]->realVars[75] /* der(loa3.Q) DUMMY_DER */) = ((data->localData[0]->realVars[74] /* der(loa3.P) DUMMY_DER */)) * (tan(acos(tmp354)));
  TRACE_POP
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
$PRE.pow4.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1120};
  (data->simulationInfo->realVarsPre[1429] /* pow4.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
pow4.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow4.tableID, 1, pow4.timeScaled, pow4.nextTimeEventScaled, $PRE.pow4.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[832] /* pow4.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 1), (data->localData[0]->realVars[831] /* pow4.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1429] /* pow4.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1429] /* pow4.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3620(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3621(DATA *data, threadData_t *threadData);


/*
equation index: 1124
type: SIMPLE_ASSIGN
loa4.Q = loa4.P * tan(acos(smooth(1, if noEvent(0.99999 - loa4.pf > 2.5e-6) then loa4.pf else if noEvent(0.99999 - loa4.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa4.pf) * ((399996.0 - 399999.99999999994 * loa4.pf) ^ 2.0 - 3.0) * (0.99999 - loa4.pf) + 0.5 * loa4.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  modelica_real tmp357;
  modelica_boolean tmp358;
  modelica_real tmp359;
  modelica_boolean tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  tmp355 = Greater(0.99999 - (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */),2.5e-6);
  tmp360 = (modelica_boolean)tmp355;
  if(tmp360)
  {
    tmp361 = (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */);
  }
  else
  {
    tmp356 = Less(0.99999 - (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */),-2.5e-6);
    tmp358 = (modelica_boolean)tmp356;
    if(tmp358)
    {
      tmp359 = 0.99999;
    }
    else
    {
      tmp357 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[333] /* loa4.pf PARAM */)));
      tmp359 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[333] /* loa4.pf PARAM */)))) * ((tmp357 * tmp357) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[333] /* loa4.pf PARAM */)) + 0.499995;
    }
    tmp361 = tmp359;
  }
  tmp362 = tmp361;
  if(!(tmp362 >= -1.0 && tmp362 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa4.pf > 2.5e-6) then loa4.pf else if noEvent(0.99999 - loa4.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa4.pf) * ((399996.0 - 399999.99999999994 * loa4.pf) ^ 2.0 - 3.0) * (0.99999 - loa4.pf) + 0.5 * loa4.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp362);
    }
  }
  (data->localData[0]->realVars[771] /* loa4.Q DUMMY_STATE */) = ((data->localData[0]->realVars[769] /* loa4.P DUMMY_STATE */)) * (tan(acos(tmp362)));
  TRACE_POP
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
$DER.pow4.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow4.tableID, 1, pow4.timeScaled, pow4.nextTimeEventScaled, $PRE.pow4.nextTimeEventScaled, $DER.pow4.timeScaled)
*/
void RenewableSources_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[116] /* der(pow4.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 1), (data->localData[0]->realVars[831] /* pow4.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1429] /* pow4.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1429] /* pow4.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[115] /* der(pow4.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3624(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3625(DATA *data, threadData_t *threadData);


/*
equation index: 1128
type: SIMPLE_ASSIGN
$DER.loa4.Q = $DER.loa4.P * tan(acos(smooth(1, if noEvent(0.99999 - loa4.pf > 2.5e-6) then loa4.pf else if noEvent(0.99999 - loa4.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa4.pf) * ((399996.0 - 399999.99999999994 * loa4.pf) ^ 2.0 - 3.0) * (0.99999 - loa4.pf) + 0.5 * loa4.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  modelica_real tmp365;
  modelica_boolean tmp366;
  modelica_real tmp367;
  modelica_boolean tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  tmp363 = Greater(0.99999 - (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */),2.5e-6);
  tmp368 = (modelica_boolean)tmp363;
  if(tmp368)
  {
    tmp369 = (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */);
  }
  else
  {
    tmp364 = Less(0.99999 - (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */),-2.5e-6);
    tmp366 = (modelica_boolean)tmp364;
    if(tmp366)
    {
      tmp367 = 0.99999;
    }
    else
    {
      tmp365 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[333] /* loa4.pf PARAM */)));
      tmp367 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[333] /* loa4.pf PARAM */)))) * ((tmp365 * tmp365) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[333] /* loa4.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[333] /* loa4.pf PARAM */)) + 0.499995;
    }
    tmp369 = tmp367;
  }
  tmp370 = tmp369;
  if(!(tmp370 >= -1.0 && tmp370 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa4.pf > 2.5e-6) then loa4.pf else if noEvent(0.99999 - loa4.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa4.pf) * ((399996.0 - 399999.99999999994 * loa4.pf) ^ 2.0 - 3.0) * (0.99999 - loa4.pf) + 0.5 * loa4.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp370);
    }
  }
  (data->localData[0]->realVars[82] /* der(loa4.Q) DUMMY_DER */) = ((data->localData[0]->realVars[81] /* der(loa4.P) DUMMY_DER */)) * (tan(acos(tmp370)));
  TRACE_POP
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
$PRE.pow5.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  (data->simulationInfo->realVarsPre[1431] /* pow5.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
pow5.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow5.tableID, 1, pow5.timeScaled, pow5.nextTimeEventScaled, $PRE.pow5.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[834] /* pow5.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 1), (data->localData[0]->realVars[833] /* pow5.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1431] /* pow5.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1431] /* pow5.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3609(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3610(DATA *data, threadData_t *threadData);


/*
equation index: 1133
type: SIMPLE_ASSIGN
loa5.Q = loa5.P * tan(acos(smooth(1, if noEvent(0.99999 - loa5.pf > 2.5e-6) then loa5.pf else if noEvent(0.99999 - loa5.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa5.pf) * ((399996.0 - 399999.99999999994 * loa5.pf) ^ 2.0 - 3.0) * (0.99999 - loa5.pf) + 0.5 * loa5.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  modelica_boolean tmp371;
  modelica_boolean tmp372;
  modelica_real tmp373;
  modelica_boolean tmp374;
  modelica_real tmp375;
  modelica_boolean tmp376;
  modelica_real tmp377;
  modelica_real tmp378;
  tmp371 = Greater(0.99999 - (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */),2.5e-6);
  tmp376 = (modelica_boolean)tmp371;
  if(tmp376)
  {
    tmp377 = (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */);
  }
  else
  {
    tmp372 = Less(0.99999 - (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */),-2.5e-6);
    tmp374 = (modelica_boolean)tmp372;
    if(tmp374)
    {
      tmp375 = 0.99999;
    }
    else
    {
      tmp373 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[337] /* loa5.pf PARAM */)));
      tmp375 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[337] /* loa5.pf PARAM */)))) * ((tmp373 * tmp373) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[337] /* loa5.pf PARAM */)) + 0.499995;
    }
    tmp377 = tmp375;
  }
  tmp378 = tmp377;
  if(!(tmp378 >= -1.0 && tmp378 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa5.pf > 2.5e-6) then loa5.pf else if noEvent(0.99999 - loa5.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa5.pf) * ((399996.0 - 399999.99999999994 * loa5.pf) ^ 2.0 - 3.0) * (0.99999 - loa5.pf) + 0.5 * loa5.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp378);
    }
  }
  (data->localData[0]->realVars[785] /* loa5.Q DUMMY_STATE */) = ((data->localData[0]->realVars[783] /* loa5.P DUMMY_STATE */)) * (tan(acos(tmp378)));
  TRACE_POP
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
$DER.pow5.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow5.tableID, 1, pow5.timeScaled, pow5.nextTimeEventScaled, $PRE.pow5.nextTimeEventScaled, $DER.pow5.timeScaled)
*/
void RenewableSources_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[118] /* der(pow5.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[4]), ((modelica_integer) 1), (data->localData[0]->realVars[833] /* pow5.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1431] /* pow5.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1431] /* pow5.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[117] /* der(pow5.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3613(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3614(DATA *data, threadData_t *threadData);


/*
equation index: 1137
type: SIMPLE_ASSIGN
$DER.loa5.Q = $DER.loa5.P * tan(acos(smooth(1, if noEvent(0.99999 - loa5.pf > 2.5e-6) then loa5.pf else if noEvent(0.99999 - loa5.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa5.pf) * ((399996.0 - 399999.99999999994 * loa5.pf) ^ 2.0 - 3.0) * (0.99999 - loa5.pf) + 0.5 * loa5.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  modelica_real tmp381;
  modelica_boolean tmp382;
  modelica_real tmp383;
  modelica_boolean tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  tmp379 = Greater(0.99999 - (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */),2.5e-6);
  tmp384 = (modelica_boolean)tmp379;
  if(tmp384)
  {
    tmp385 = (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */);
  }
  else
  {
    tmp380 = Less(0.99999 - (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */),-2.5e-6);
    tmp382 = (modelica_boolean)tmp380;
    if(tmp382)
    {
      tmp383 = 0.99999;
    }
    else
    {
      tmp381 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[337] /* loa5.pf PARAM */)));
      tmp383 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[337] /* loa5.pf PARAM */)))) * ((tmp381 * tmp381) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[337] /* loa5.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[337] /* loa5.pf PARAM */)) + 0.499995;
    }
    tmp385 = tmp383;
  }
  tmp386 = tmp385;
  if(!(tmp386 >= -1.0 && tmp386 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa5.pf > 2.5e-6) then loa5.pf else if noEvent(0.99999 - loa5.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa5.pf) * ((399996.0 - 399999.99999999994 * loa5.pf) ^ 2.0 - 3.0) * (0.99999 - loa5.pf) + 0.5 * loa5.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp386);
    }
  }
  (data->localData[0]->realVars[89] /* der(loa5.Q) DUMMY_DER */) = ((data->localData[0]->realVars[88] /* der(loa5.P) DUMMY_DER */)) * (tan(acos(tmp386)));
  TRACE_POP
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
$PRE.pow6.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->simulationInfo->realVarsPre[1433] /* pow6.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
pow6.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow6.tableID, 1, pow6.timeScaled, pow6.nextTimeEventScaled, $PRE.pow6.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[836] /* pow6.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[5]), ((modelica_integer) 1), (data->localData[0]->realVars[835] /* pow6.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1433] /* pow6.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1433] /* pow6.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3598(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3599(DATA *data, threadData_t *threadData);


/*
equation index: 1142
type: SIMPLE_ASSIGN
loa6.Q = loa6.P * tan(acos(smooth(1, if noEvent(0.99999 - loa6.pf > 2.5e-6) then loa6.pf else if noEvent(0.99999 - loa6.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa6.pf) * ((399996.0 - 399999.99999999994 * loa6.pf) ^ 2.0 - 3.0) * (0.99999 - loa6.pf) + 0.5 * loa6.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  modelica_real tmp389;
  modelica_boolean tmp390;
  modelica_real tmp391;
  modelica_boolean tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  tmp387 = Greater(0.99999 - (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */),2.5e-6);
  tmp392 = (modelica_boolean)tmp387;
  if(tmp392)
  {
    tmp393 = (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */);
  }
  else
  {
    tmp388 = Less(0.99999 - (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */),-2.5e-6);
    tmp390 = (modelica_boolean)tmp388;
    if(tmp390)
    {
      tmp391 = 0.99999;
    }
    else
    {
      tmp389 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[341] /* loa6.pf PARAM */)));
      tmp391 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[341] /* loa6.pf PARAM */)))) * ((tmp389 * tmp389) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[341] /* loa6.pf PARAM */)) + 0.499995;
    }
    tmp393 = tmp391;
  }
  tmp394 = tmp393;
  if(!(tmp394 >= -1.0 && tmp394 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa6.pf > 2.5e-6) then loa6.pf else if noEvent(0.99999 - loa6.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa6.pf) * ((399996.0 - 399999.99999999994 * loa6.pf) ^ 2.0 - 3.0) * (0.99999 - loa6.pf) + 0.5 * loa6.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp394);
    }
  }
  (data->localData[0]->realVars[799] /* loa6.Q DUMMY_STATE */) = ((data->localData[0]->realVars[797] /* loa6.P DUMMY_STATE */)) * (tan(acos(tmp394)));
  TRACE_POP
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
$DER.pow6.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow6.tableID, 1, pow6.timeScaled, pow6.nextTimeEventScaled, $PRE.pow6.nextTimeEventScaled, $DER.pow6.timeScaled)
*/
void RenewableSources_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[120] /* der(pow6.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[5]), ((modelica_integer) 1), (data->localData[0]->realVars[835] /* pow6.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1433] /* pow6.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1433] /* pow6.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[119] /* der(pow6.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3602(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3603(DATA *data, threadData_t *threadData);


/*
equation index: 1146
type: SIMPLE_ASSIGN
$DER.loa6.Q = $DER.loa6.P * tan(acos(smooth(1, if noEvent(0.99999 - loa6.pf > 2.5e-6) then loa6.pf else if noEvent(0.99999 - loa6.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa6.pf) * ((399996.0 - 399999.99999999994 * loa6.pf) ^ 2.0 - 3.0) * (0.99999 - loa6.pf) + 0.5 * loa6.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  modelica_real tmp397;
  modelica_boolean tmp398;
  modelica_real tmp399;
  modelica_boolean tmp400;
  modelica_real tmp401;
  modelica_real tmp402;
  tmp395 = Greater(0.99999 - (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */),2.5e-6);
  tmp400 = (modelica_boolean)tmp395;
  if(tmp400)
  {
    tmp401 = (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */);
  }
  else
  {
    tmp396 = Less(0.99999 - (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */),-2.5e-6);
    tmp398 = (modelica_boolean)tmp396;
    if(tmp398)
    {
      tmp399 = 0.99999;
    }
    else
    {
      tmp397 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[341] /* loa6.pf PARAM */)));
      tmp399 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[341] /* loa6.pf PARAM */)))) * ((tmp397 * tmp397) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[341] /* loa6.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[341] /* loa6.pf PARAM */)) + 0.499995;
    }
    tmp401 = tmp399;
  }
  tmp402 = tmp401;
  if(!(tmp402 >= -1.0 && tmp402 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa6.pf > 2.5e-6) then loa6.pf else if noEvent(0.99999 - loa6.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa6.pf) * ((399996.0 - 399999.99999999994 * loa6.pf) ^ 2.0 - 3.0) * (0.99999 - loa6.pf) + 0.5 * loa6.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp402);
    }
  }
  (data->localData[0]->realVars[96] /* der(loa6.Q) DUMMY_DER */) = ((data->localData[0]->realVars[95] /* der(loa6.P) DUMMY_DER */)) * (tan(acos(tmp402)));
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
$PRE.pow7.nextTimeEventScaled = 0.0
*/
void RenewableSources_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->simulationInfo->realVarsPre[1435] /* pow7.nextTimeEventScaled DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
pow7.y[1] = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(pow7.tableID, 1, pow7.timeScaled, pow7.nextTimeEventScaled, $PRE.pow7.nextTimeEventScaled)
*/
void RenewableSources_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->realVars[838] /* pow7.y[1] DUMMY_STATE */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, (data->simulationInfo->extObjs[6]), ((modelica_integer) 1), (data->localData[0]->realVars[837] /* pow7.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1435] /* pow7.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1435] /* pow7.nextTimeEventScaled DISCRETE */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3587(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3588(DATA *data, threadData_t *threadData);


/*
equation index: 1151
type: SIMPLE_ASSIGN
loa7.Q = loa7.P * tan(acos(smooth(1, if noEvent(0.99999 - loa7.pf > 2.5e-6) then loa7.pf else if noEvent(0.99999 - loa7.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa7.pf) * ((399996.0 - 399999.99999999994 * loa7.pf) ^ 2.0 - 3.0) * (0.99999 - loa7.pf) + 0.5 * loa7.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1151};
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_real tmp405;
  modelica_boolean tmp406;
  modelica_real tmp407;
  modelica_boolean tmp408;
  modelica_real tmp409;
  modelica_real tmp410;
  tmp403 = Greater(0.99999 - (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */),2.5e-6);
  tmp408 = (modelica_boolean)tmp403;
  if(tmp408)
  {
    tmp409 = (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */);
  }
  else
  {
    tmp404 = Less(0.99999 - (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */),-2.5e-6);
    tmp406 = (modelica_boolean)tmp404;
    if(tmp406)
    {
      tmp407 = 0.99999;
    }
    else
    {
      tmp405 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[345] /* loa7.pf PARAM */)));
      tmp407 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[345] /* loa7.pf PARAM */)))) * ((tmp405 * tmp405) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[345] /* loa7.pf PARAM */)) + 0.499995;
    }
    tmp409 = tmp407;
  }
  tmp410 = tmp409;
  if(!(tmp410 >= -1.0 && tmp410 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa7.pf > 2.5e-6) then loa7.pf else if noEvent(0.99999 - loa7.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa7.pf) * ((399996.0 - 399999.99999999994 * loa7.pf) ^ 2.0 - 3.0) * (0.99999 - loa7.pf) + 0.5 * loa7.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp410);
    }
  }
  (data->localData[0]->realVars[813] /* loa7.Q DUMMY_STATE */) = ((data->localData[0]->realVars[811] /* loa7.P DUMMY_STATE */)) * (tan(acos(tmp410)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3656(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3657(DATA *data, threadData_t *threadData);


/*
equation index: 1154
type: SIMPLE_ASSIGN
$DER.pow7.y[1] = Modelica.Blocks.Tables.Internal.getDerTimeTableValueNoDer(pow7.tableID, 1, pow7.timeScaled, pow7.nextTimeEventScaled, $PRE.pow7.nextTimeEventScaled, $DER.pow7.timeScaled)
*/
void RenewableSources_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[122] /* der(pow7.y[1]) DUMMY_DER */) = omc_Modelica_Blocks_Tables_Internal_getDerTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[6]), ((modelica_integer) 1), (data->localData[0]->realVars[837] /* pow7.timeScaled DUMMY_STATE */), (data->localData[0]->realVars[1435] /* pow7.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[1435] /* pow7.nextTimeEventScaled DISCRETE */), (data->localData[0]->realVars[121] /* der(pow7.timeScaled) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3591(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3592(DATA *data, threadData_t *threadData);


/*
equation index: 1157
type: SIMPLE_ASSIGN
$DER.loa7.Q = $DER.loa7.P * tan(acos(smooth(1, if noEvent(0.99999 - loa7.pf > 2.5e-6) then loa7.pf else if noEvent(0.99999 - loa7.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa7.pf) * ((399996.0 - 399999.99999999994 * loa7.pf) ^ 2.0 - 3.0) * (0.99999 - loa7.pf) + 0.5 * loa7.pf + 0.499995)))
*/
void RenewableSources_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_real tmp413;
  modelica_boolean tmp414;
  modelica_real tmp415;
  modelica_boolean tmp416;
  modelica_real tmp417;
  modelica_real tmp418;
  tmp411 = Greater(0.99999 - (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */),2.5e-6);
  tmp416 = (modelica_boolean)tmp411;
  if(tmp416)
  {
    tmp417 = (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */);
  }
  else
  {
    tmp412 = Less(0.99999 - (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */),-2.5e-6);
    tmp414 = (modelica_boolean)tmp412;
    if(tmp414)
    {
      tmp415 = 0.99999;
    }
    else
    {
      tmp413 = 399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[345] /* loa7.pf PARAM */)));
      tmp415 = (0.25) * (((399996.0 - ((399999.99999999994) * ((data->simulationInfo->realParameter[345] /* loa7.pf PARAM */)))) * ((tmp413 * tmp413) - 3.0)) * (0.99999 - (data->simulationInfo->realParameter[345] /* loa7.pf PARAM */))) + (0.5) * ((data->simulationInfo->realParameter[345] /* loa7.pf PARAM */)) + 0.499995;
    }
    tmp417 = tmp415;
  }
  tmp418 = tmp417;
  if(!(tmp418 >= -1.0 && tmp418 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(smooth(1, if noEvent(0.99999 - loa7.pf > 2.5e-6) then loa7.pf else if noEvent(0.99999 - loa7.pf < -2.5e-6) then 0.99999 else 0.25 * (399996.0 - 399999.99999999994 * loa7.pf) * ((399996.0 - 399999.99999999994 * loa7.pf) ^ 2.0 - 3.0) * (0.99999 - loa7.pf) + 0.5 * loa7.pf + 0.499995)) outside the domain -1.0 <= %g <= 1.0", tmp418);
    }
  }
  (data->localData[0]->realVars[103] /* der(loa7.Q) DUMMY_DER */) = ((data->localData[0]->realVars[102] /* der(loa7.P) DUMMY_DER */)) * (tan(acos(tmp418)));
  TRACE_POP
}

/*
equation index: 1158
type: ALGORITHM

  line8.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line8.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp419;
  tmp419 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[290] /* line8.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[40] /* line8.commercialCable.material PARAM */) = tmp419._material;
  (data->simulationInfo->realParameter[299] /* line8.commercialCable.Amp PARAM */) = tmp419._Amp;
  (data->simulationInfo->realParameter[302] /* line8.commercialCable.T_ref PARAM */) = tmp419._T_ref;
  (data->simulationInfo->realParameter[300] /* line8.commercialCable.M PARAM */) = tmp419._M;
  (data->simulationInfo->realParameter[301] /* line8.commercialCable.RCha PARAM */) = tmp419._RCha;
  (data->simulationInfo->realParameter[303] /* line8.commercialCable.XCha PARAM */) = tmp419._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
line8.L = 0.954929658551372 * line8.commercialCable.XCha
*/
void RenewableSources_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  (data->simulationInfo->realParameter[288] /* line8.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[303] /* line8.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
line8.line.L = line8.L
*/
void RenewableSources_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1160};
  (data->simulationInfo->realParameter[307] /* line8.line.L PARAM */) = (data->simulationInfo->realParameter[288] /* line8.L PARAM */);
  TRACE_POP
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
line8.T_ref = line8.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  (data->simulationInfo->realParameter[294] /* line8.T_ref PARAM */) = (data->simulationInfo->realParameter[302] /* line8.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
line8.TCable = line8.T_ref
*/
void RenewableSources_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */) = (data->simulationInfo->realParameter[294] /* line8.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
line8.line.T_heatPort = line8.TCable
*/
void RenewableSources_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->simulationInfo->realParameter[311] /* line8.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
line8.line.heatPort.T = line8.TCable
*/
void RenewableSources_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  (data->simulationInfo->realParameter[316] /* line8.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
line8.cableTemp.port.T = line8.TCable
*/
void RenewableSources_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  (data->simulationInfo->realParameter[297] /* line8.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
line8.cableTemp.T = line8.TCable
*/
void RenewableSources_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  (data->simulationInfo->realParameter[296] /* line8.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
line8.cableTemperature.y = line8.TCable
*/
void RenewableSources_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  (data->simulationInfo->realParameter[298] /* line8.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
line8.T_in = line8.TCable
*/
void RenewableSources_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  (data->simulationInfo->realParameter[293] /* line8.T_in PARAM */) = (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
line8.line.T_ref = line8.T_ref
*/
void RenewableSources_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  (data->simulationInfo->realParameter[312] /* line8.line.T_ref PARAM */) = (data->simulationInfo->realParameter[294] /* line8.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
line8.line.T = line8.line.T_ref
*/
void RenewableSources_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  (data->simulationInfo->realParameter[310] /* line8.line.T PARAM */) = (data->simulationInfo->realParameter[312] /* line8.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
line8.M = line8.commercialCable.M
*/
void RenewableSources_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  (data->simulationInfo->realParameter[289] /* line8.M PARAM */) = (data->simulationInfo->realParameter[300] /* line8.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
line8.line.M = line8.M
*/
void RenewableSources_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  (data->simulationInfo->realParameter[308] /* line8.line.M PARAM */) = (data->simulationInfo->realParameter[289] /* line8.M PARAM */);
  TRACE_POP
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
line8.R = 300.0 * line8.commercialCable.RCha
*/
void RenewableSources_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  (data->simulationInfo->realParameter[291] /* line8.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[301] /* line8.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
line8.line.R = line8.R
*/
void RenewableSources_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  (data->simulationInfo->realParameter[309] /* line8.line.R PARAM */) = (data->simulationInfo->realParameter[291] /* line8.R PARAM */);
  TRACE_POP
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
line8.line.R_actual = line8.line.R * (-273.15 + line8.line.M + line8.TCable) / (-273.15 + line8.line.M + line8.line.T_ref)
*/
void RenewableSources_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[720] /* line8.line.R_actual variable */) = ((data->simulationInfo->realParameter[309] /* line8.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[308] /* line8.line.M PARAM */) + (data->simulationInfo->realParameter[292] /* line8.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[308] /* line8.line.M PARAM */) + (data->simulationInfo->realParameter[312] /* line8.line.T_ref PARAM */),"-273.15 + line8.line.M + line8.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1176
type: ALGORITHM

  line7.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line7.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp420;
  tmp420 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[258] /* line7.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[35] /* line7.commercialCable.material PARAM */) = tmp420._material;
  (data->simulationInfo->realParameter[267] /* line7.commercialCable.Amp PARAM */) = tmp420._Amp;
  (data->simulationInfo->realParameter[270] /* line7.commercialCable.T_ref PARAM */) = tmp420._T_ref;
  (data->simulationInfo->realParameter[268] /* line7.commercialCable.M PARAM */) = tmp420._M;
  (data->simulationInfo->realParameter[269] /* line7.commercialCable.RCha PARAM */) = tmp420._RCha;
  (data->simulationInfo->realParameter[271] /* line7.commercialCable.XCha PARAM */) = tmp420._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
line7.R = 300.0 * line7.commercialCable.RCha
*/
void RenewableSources_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  (data->simulationInfo->realParameter[259] /* line7.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[269] /* line7.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
line7.line.R = line7.R
*/
void RenewableSources_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  (data->simulationInfo->realParameter[277] /* line7.line.R PARAM */) = (data->simulationInfo->realParameter[259] /* line7.R PARAM */);
  TRACE_POP
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
line7.L = 0.954929658551372 * line7.commercialCable.XCha
*/
void RenewableSources_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  (data->simulationInfo->realParameter[256] /* line7.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[271] /* line7.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
line7.line.L = line7.L
*/
void RenewableSources_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  (data->simulationInfo->realParameter[275] /* line7.line.L PARAM */) = (data->simulationInfo->realParameter[256] /* line7.L PARAM */);
  TRACE_POP
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
line7.T_ref = line7.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  (data->simulationInfo->realParameter[262] /* line7.T_ref PARAM */) = (data->simulationInfo->realParameter[270] /* line7.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
line7.TCable = line7.T_ref
*/
void RenewableSources_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */) = (data->simulationInfo->realParameter[262] /* line7.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
line7.line.T_heatPort = line7.TCable
*/
void RenewableSources_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  (data->simulationInfo->realParameter[279] /* line7.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
line7.line.heatPort.T = line7.TCable
*/
void RenewableSources_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  (data->simulationInfo->realParameter[284] /* line7.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
line7.cableTemp.port.T = line7.TCable
*/
void RenewableSources_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  (data->simulationInfo->realParameter[265] /* line7.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
line7.cableTemp.T = line7.TCable
*/
void RenewableSources_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  (data->simulationInfo->realParameter[264] /* line7.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
line7.cableTemperature.y = line7.TCable
*/
void RenewableSources_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  (data->simulationInfo->realParameter[266] /* line7.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
line7.T_in = line7.TCable
*/
void RenewableSources_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  (data->simulationInfo->realParameter[261] /* line7.T_in PARAM */) = (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
line7.line.T_ref = line7.T_ref
*/
void RenewableSources_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  (data->simulationInfo->realParameter[280] /* line7.line.T_ref PARAM */) = (data->simulationInfo->realParameter[262] /* line7.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
line7.line.T = line7.line.T_ref
*/
void RenewableSources_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  (data->simulationInfo->realParameter[278] /* line7.line.T PARAM */) = (data->simulationInfo->realParameter[280] /* line7.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
line7.M = line7.commercialCable.M
*/
void RenewableSources_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  (data->simulationInfo->realParameter[257] /* line7.M PARAM */) = (data->simulationInfo->realParameter[268] /* line7.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
line7.line.M = line7.M
*/
void RenewableSources_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  (data->simulationInfo->realParameter[276] /* line7.line.M PARAM */) = (data->simulationInfo->realParameter[257] /* line7.M PARAM */);
  TRACE_POP
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
line7.line.R_actual = line7.line.R * (-273.15 + line7.line.M + line7.TCable) / (-273.15 + line7.line.M + line7.line.T_ref)
*/
void RenewableSources_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[709] /* line7.line.R_actual variable */) = ((data->simulationInfo->realParameter[277] /* line7.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[276] /* line7.line.M PARAM */) + (data->simulationInfo->realParameter[260] /* line7.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[276] /* line7.line.M PARAM */) + (data->simulationInfo->realParameter[280] /* line7.line.T_ref PARAM */),"-273.15 + line7.line.M + line7.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1194
type: ALGORITHM

  line6.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line6.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp421;
  tmp421 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[226] /* line6.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[30] /* line6.commercialCable.material PARAM */) = tmp421._material;
  (data->simulationInfo->realParameter[235] /* line6.commercialCable.Amp PARAM */) = tmp421._Amp;
  (data->simulationInfo->realParameter[238] /* line6.commercialCable.T_ref PARAM */) = tmp421._T_ref;
  (data->simulationInfo->realParameter[236] /* line6.commercialCable.M PARAM */) = tmp421._M;
  (data->simulationInfo->realParameter[237] /* line6.commercialCable.RCha PARAM */) = tmp421._RCha;
  (data->simulationInfo->realParameter[239] /* line6.commercialCable.XCha PARAM */) = tmp421._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
line6.R = 300.0 * line6.commercialCable.RCha
*/
void RenewableSources_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  (data->simulationInfo->realParameter[227] /* line6.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[237] /* line6.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
line6.line.R = line6.R
*/
void RenewableSources_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  (data->simulationInfo->realParameter[245] /* line6.line.R PARAM */) = (data->simulationInfo->realParameter[227] /* line6.R PARAM */);
  TRACE_POP
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
line6.M = line6.commercialCable.M
*/
void RenewableSources_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  (data->simulationInfo->realParameter[225] /* line6.M PARAM */) = (data->simulationInfo->realParameter[236] /* line6.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
line6.line.M = line6.M
*/
void RenewableSources_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  (data->simulationInfo->realParameter[244] /* line6.line.M PARAM */) = (data->simulationInfo->realParameter[225] /* line6.M PARAM */);
  TRACE_POP
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
line6.L = 0.954929658551372 * line6.commercialCable.XCha
*/
void RenewableSources_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  (data->simulationInfo->realParameter[224] /* line6.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[239] /* line6.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
line6.line.L = line6.L
*/
void RenewableSources_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  (data->simulationInfo->realParameter[243] /* line6.line.L PARAM */) = (data->simulationInfo->realParameter[224] /* line6.L PARAM */);
  TRACE_POP
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
line6.T_ref = line6.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->simulationInfo->realParameter[230] /* line6.T_ref PARAM */) = (data->simulationInfo->realParameter[238] /* line6.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
line6.TCable = line6.T_ref
*/
void RenewableSources_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */) = (data->simulationInfo->realParameter[230] /* line6.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
line6.line.T_heatPort = line6.TCable
*/
void RenewableSources_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  (data->simulationInfo->realParameter[247] /* line6.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
line6.line.heatPort.T = line6.TCable
*/
void RenewableSources_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->simulationInfo->realParameter[252] /* line6.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
line6.cableTemp.port.T = line6.TCable
*/
void RenewableSources_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  (data->simulationInfo->realParameter[233] /* line6.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
line6.cableTemp.T = line6.TCable
*/
void RenewableSources_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  (data->simulationInfo->realParameter[232] /* line6.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
line6.cableTemperature.y = line6.TCable
*/
void RenewableSources_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  (data->simulationInfo->realParameter[234] /* line6.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
line6.T_in = line6.TCable
*/
void RenewableSources_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  (data->simulationInfo->realParameter[229] /* line6.T_in PARAM */) = (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
line6.line.T_ref = line6.T_ref
*/
void RenewableSources_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  (data->simulationInfo->realParameter[248] /* line6.line.T_ref PARAM */) = (data->simulationInfo->realParameter[230] /* line6.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
line6.line.T = line6.line.T_ref
*/
void RenewableSources_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  (data->simulationInfo->realParameter[246] /* line6.line.T PARAM */) = (data->simulationInfo->realParameter[248] /* line6.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
line6.line.R_actual = line6.line.R * (-273.15 + line6.line.M + line6.TCable) / (-273.15 + line6.line.M + line6.line.T_ref)
*/
void RenewableSources_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[698] /* line6.line.R_actual variable */) = ((data->simulationInfo->realParameter[245] /* line6.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[244] /* line6.line.M PARAM */) + (data->simulationInfo->realParameter[228] /* line6.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[244] /* line6.line.M PARAM */) + (data->simulationInfo->realParameter[248] /* line6.line.T_ref PARAM */),"-273.15 + line6.line.M + line6.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1212
type: ALGORITHM

  line5.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line5.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp422;
  tmp422 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[194] /* line5.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[25] /* line5.commercialCable.material PARAM */) = tmp422._material;
  (data->simulationInfo->realParameter[203] /* line5.commercialCable.Amp PARAM */) = tmp422._Amp;
  (data->simulationInfo->realParameter[206] /* line5.commercialCable.T_ref PARAM */) = tmp422._T_ref;
  (data->simulationInfo->realParameter[204] /* line5.commercialCable.M PARAM */) = tmp422._M;
  (data->simulationInfo->realParameter[205] /* line5.commercialCable.RCha PARAM */) = tmp422._RCha;
  (data->simulationInfo->realParameter[207] /* line5.commercialCable.XCha PARAM */) = tmp422._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
line5.M = line5.commercialCable.M
*/
void RenewableSources_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  (data->simulationInfo->realParameter[193] /* line5.M PARAM */) = (data->simulationInfo->realParameter[204] /* line5.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
line5.line.M = line5.M
*/
void RenewableSources_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  (data->simulationInfo->realParameter[212] /* line5.line.M PARAM */) = (data->simulationInfo->realParameter[193] /* line5.M PARAM */);
  TRACE_POP
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
line5.R = 300.0 * line5.commercialCable.RCha
*/
void RenewableSources_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  (data->simulationInfo->realParameter[195] /* line5.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[205] /* line5.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
line5.line.R = line5.R
*/
void RenewableSources_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  (data->simulationInfo->realParameter[213] /* line5.line.R PARAM */) = (data->simulationInfo->realParameter[195] /* line5.R PARAM */);
  TRACE_POP
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
line5.L = 0.954929658551372 * line5.commercialCable.XCha
*/
void RenewableSources_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  (data->simulationInfo->realParameter[192] /* line5.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[207] /* line5.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
line5.line.L = line5.L
*/
void RenewableSources_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  (data->simulationInfo->realParameter[211] /* line5.line.L PARAM */) = (data->simulationInfo->realParameter[192] /* line5.L PARAM */);
  TRACE_POP
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
line5.T_ref = line5.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->simulationInfo->realParameter[198] /* line5.T_ref PARAM */) = (data->simulationInfo->realParameter[206] /* line5.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
line5.TCable = line5.T_ref
*/
void RenewableSources_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */) = (data->simulationInfo->realParameter[198] /* line5.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
line5.line.T_heatPort = line5.TCable
*/
void RenewableSources_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  (data->simulationInfo->realParameter[215] /* line5.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
line5.line.heatPort.T = line5.TCable
*/
void RenewableSources_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  (data->simulationInfo->realParameter[220] /* line5.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
line5.cableTemp.port.T = line5.TCable
*/
void RenewableSources_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  (data->simulationInfo->realParameter[201] /* line5.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
line5.cableTemp.T = line5.TCable
*/
void RenewableSources_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  (data->simulationInfo->realParameter[200] /* line5.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
line5.cableTemperature.y = line5.TCable
*/
void RenewableSources_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  (data->simulationInfo->realParameter[202] /* line5.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
line5.T_in = line5.TCable
*/
void RenewableSources_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->realParameter[197] /* line5.T_in PARAM */) = (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
line5.line.T_ref = line5.T_ref
*/
void RenewableSources_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  (data->simulationInfo->realParameter[216] /* line5.line.T_ref PARAM */) = (data->simulationInfo->realParameter[198] /* line5.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
line5.line.T = line5.line.T_ref
*/
void RenewableSources_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  (data->simulationInfo->realParameter[214] /* line5.line.T PARAM */) = (data->simulationInfo->realParameter[216] /* line5.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
line5.line.R_actual = line5.line.R * (-273.15 + line5.line.M + line5.TCable) / (-273.15 + line5.line.M + line5.line.T_ref)
*/
void RenewableSources_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[687] /* line5.line.R_actual variable */) = ((data->simulationInfo->realParameter[213] /* line5.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[212] /* line5.line.M PARAM */) + (data->simulationInfo->realParameter[196] /* line5.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[212] /* line5.line.M PARAM */) + (data->simulationInfo->realParameter[216] /* line5.line.T_ref PARAM */),"-273.15 + line5.line.M + line5.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1230
type: ALGORITHM

  line4.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line4.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp423;
  tmp423 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[162] /* line4.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[20] /* line4.commercialCable.material PARAM */) = tmp423._material;
  (data->simulationInfo->realParameter[171] /* line4.commercialCable.Amp PARAM */) = tmp423._Amp;
  (data->simulationInfo->realParameter[174] /* line4.commercialCable.T_ref PARAM */) = tmp423._T_ref;
  (data->simulationInfo->realParameter[172] /* line4.commercialCable.M PARAM */) = tmp423._M;
  (data->simulationInfo->realParameter[173] /* line4.commercialCable.RCha PARAM */) = tmp423._RCha;
  (data->simulationInfo->realParameter[175] /* line4.commercialCable.XCha PARAM */) = tmp423._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
line4.M = line4.commercialCable.M
*/
void RenewableSources_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  (data->simulationInfo->realParameter[161] /* line4.M PARAM */) = (data->simulationInfo->realParameter[172] /* line4.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
line4.line.M = line4.M
*/
void RenewableSources_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  (data->simulationInfo->realParameter[180] /* line4.line.M PARAM */) = (data->simulationInfo->realParameter[161] /* line4.M PARAM */);
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
line4.T_ref = line4.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  (data->simulationInfo->realParameter[166] /* line4.T_ref PARAM */) = (data->simulationInfo->realParameter[174] /* line4.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
line4.TCable = line4.T_ref
*/
void RenewableSources_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */) = (data->simulationInfo->realParameter[166] /* line4.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
line4.line.T_heatPort = line4.TCable
*/
void RenewableSources_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  (data->simulationInfo->realParameter[183] /* line4.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
line4.line.heatPort.T = line4.TCable
*/
void RenewableSources_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  (data->simulationInfo->realParameter[188] /* line4.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
line4.cableTemp.port.T = line4.TCable
*/
void RenewableSources_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  (data->simulationInfo->realParameter[169] /* line4.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
line4.cableTemp.T = line4.TCable
*/
void RenewableSources_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  (data->simulationInfo->realParameter[168] /* line4.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
line4.cableTemperature.y = line4.TCable
*/
void RenewableSources_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  (data->simulationInfo->realParameter[170] /* line4.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
line4.T_in = line4.TCable
*/
void RenewableSources_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  (data->simulationInfo->realParameter[165] /* line4.T_in PARAM */) = (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
line4.line.T_ref = line4.T_ref
*/
void RenewableSources_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  (data->simulationInfo->realParameter[184] /* line4.line.T_ref PARAM */) = (data->simulationInfo->realParameter[166] /* line4.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
line4.line.T = line4.line.T_ref
*/
void RenewableSources_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  (data->simulationInfo->realParameter[182] /* line4.line.T PARAM */) = (data->simulationInfo->realParameter[184] /* line4.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
line4.R = 300.0 * line4.commercialCable.RCha
*/
void RenewableSources_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  (data->simulationInfo->realParameter[163] /* line4.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[173] /* line4.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
line4.line.R = line4.R
*/
void RenewableSources_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  (data->simulationInfo->realParameter[181] /* line4.line.R PARAM */) = (data->simulationInfo->realParameter[163] /* line4.R PARAM */);
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
line4.line.R_actual = line4.line.R * (-273.15 + line4.line.M + line4.TCable) / (-273.15 + line4.line.M + line4.line.T_ref)
*/
void RenewableSources_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[676] /* line4.line.R_actual variable */) = ((data->simulationInfo->realParameter[181] /* line4.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[180] /* line4.line.M PARAM */) + (data->simulationInfo->realParameter[164] /* line4.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[180] /* line4.line.M PARAM */) + (data->simulationInfo->realParameter[184] /* line4.line.T_ref PARAM */),"-273.15 + line4.line.M + line4.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
line4.L = 0.954929658551372 * line4.commercialCable.XCha
*/
void RenewableSources_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  (data->simulationInfo->realParameter[160] /* line4.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[175] /* line4.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
line4.line.L = line4.L
*/
void RenewableSources_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  (data->simulationInfo->realParameter[179] /* line4.line.L PARAM */) = (data->simulationInfo->realParameter[160] /* line4.L PARAM */);
  TRACE_POP
}

/*
equation index: 1248
type: ALGORITHM

  line3.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line3.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp424;
  tmp424 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[130] /* line3.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[15] /* line3.commercialCable.material PARAM */) = tmp424._material;
  (data->simulationInfo->realParameter[139] /* line3.commercialCable.Amp PARAM */) = tmp424._Amp;
  (data->simulationInfo->realParameter[142] /* line3.commercialCable.T_ref PARAM */) = tmp424._T_ref;
  (data->simulationInfo->realParameter[140] /* line3.commercialCable.M PARAM */) = tmp424._M;
  (data->simulationInfo->realParameter[141] /* line3.commercialCable.RCha PARAM */) = tmp424._RCha;
  (data->simulationInfo->realParameter[143] /* line3.commercialCable.XCha PARAM */) = tmp424._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
line3.R = 300.0 * line3.commercialCable.RCha
*/
void RenewableSources_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  (data->simulationInfo->realParameter[131] /* line3.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[141] /* line3.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
line3.line.R = line3.R
*/
void RenewableSources_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  (data->simulationInfo->realParameter[149] /* line3.line.R PARAM */) = (data->simulationInfo->realParameter[131] /* line3.R PARAM */);
  TRACE_POP
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
line3.M = line3.commercialCable.M
*/
void RenewableSources_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  (data->simulationInfo->realParameter[129] /* line3.M PARAM */) = (data->simulationInfo->realParameter[140] /* line3.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
line3.line.M = line3.M
*/
void RenewableSources_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  (data->simulationInfo->realParameter[148] /* line3.line.M PARAM */) = (data->simulationInfo->realParameter[129] /* line3.M PARAM */);
  TRACE_POP
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
line3.T_ref = line3.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  (data->simulationInfo->realParameter[134] /* line3.T_ref PARAM */) = (data->simulationInfo->realParameter[142] /* line3.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
line3.TCable = line3.T_ref
*/
void RenewableSources_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */) = (data->simulationInfo->realParameter[134] /* line3.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
line3.line.T_heatPort = line3.TCable
*/
void RenewableSources_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  (data->simulationInfo->realParameter[151] /* line3.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
line3.line.heatPort.T = line3.TCable
*/
void RenewableSources_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  (data->simulationInfo->realParameter[156] /* line3.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
line3.cableTemp.port.T = line3.TCable
*/
void RenewableSources_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  (data->simulationInfo->realParameter[137] /* line3.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
line3.cableTemp.T = line3.TCable
*/
void RenewableSources_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  (data->simulationInfo->realParameter[136] /* line3.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
line3.cableTemperature.y = line3.TCable
*/
void RenewableSources_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  (data->simulationInfo->realParameter[138] /* line3.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
line3.T_in = line3.TCable
*/
void RenewableSources_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  (data->simulationInfo->realParameter[133] /* line3.T_in PARAM */) = (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
line3.line.T_ref = line3.T_ref
*/
void RenewableSources_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  (data->simulationInfo->realParameter[152] /* line3.line.T_ref PARAM */) = (data->simulationInfo->realParameter[134] /* line3.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
line3.line.T = line3.line.T_ref
*/
void RenewableSources_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realParameter[150] /* line3.line.T PARAM */) = (data->simulationInfo->realParameter[152] /* line3.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
line3.line.R_actual = line3.line.R * (-273.15 + line3.line.M + line3.TCable) / (-273.15 + line3.line.M + line3.line.T_ref)
*/
void RenewableSources_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  (data->localData[0]->realVars[665] /* line3.line.R_actual variable */) = ((data->simulationInfo->realParameter[149] /* line3.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[148] /* line3.line.M PARAM */) + (data->simulationInfo->realParameter[132] /* line3.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[148] /* line3.line.M PARAM */) + (data->simulationInfo->realParameter[152] /* line3.line.T_ref PARAM */),"-273.15 + line3.line.M + line3.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
line3.L = 0.954929658551372 * line3.commercialCable.XCha
*/
void RenewableSources_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realParameter[128] /* line3.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[143] /* line3.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
line3.line.L = line3.L
*/
void RenewableSources_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  (data->simulationInfo->realParameter[147] /* line3.line.L PARAM */) = (data->simulationInfo->realParameter[128] /* line3.L PARAM */);
  TRACE_POP
}

/*
equation index: 1266
type: ALGORITHM

  line2.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line2.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp425;
  tmp425 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[98] /* line2.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[10] /* line2.commercialCable.material PARAM */) = tmp425._material;
  (data->simulationInfo->realParameter[107] /* line2.commercialCable.Amp PARAM */) = tmp425._Amp;
  (data->simulationInfo->realParameter[110] /* line2.commercialCable.T_ref PARAM */) = tmp425._T_ref;
  (data->simulationInfo->realParameter[108] /* line2.commercialCable.M PARAM */) = tmp425._M;
  (data->simulationInfo->realParameter[109] /* line2.commercialCable.RCha PARAM */) = tmp425._RCha;
  (data->simulationInfo->realParameter[111] /* line2.commercialCable.XCha PARAM */) = tmp425._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
line2.L = 0.954929658551372 * line2.commercialCable.XCha
*/
void RenewableSources_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  (data->simulationInfo->realParameter[96] /* line2.L PARAM */) = (0.954929658551372) * ((data->simulationInfo->realParameter[111] /* line2.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
line2.line.L = line2.L
*/
void RenewableSources_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  (data->simulationInfo->realParameter[115] /* line2.line.L PARAM */) = (data->simulationInfo->realParameter[96] /* line2.L PARAM */);
  TRACE_POP
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
line2.R = 300.0 * line2.commercialCable.RCha
*/
void RenewableSources_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  (data->simulationInfo->realParameter[99] /* line2.R PARAM */) = (300.0) * ((data->simulationInfo->realParameter[109] /* line2.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
line2.line.R = line2.R
*/
void RenewableSources_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  (data->simulationInfo->realParameter[117] /* line2.line.R PARAM */) = (data->simulationInfo->realParameter[99] /* line2.R PARAM */);
  TRACE_POP
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
line2.T_ref = line2.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  (data->simulationInfo->realParameter[102] /* line2.T_ref PARAM */) = (data->simulationInfo->realParameter[110] /* line2.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
line2.TCable = line2.T_ref
*/
void RenewableSources_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */) = (data->simulationInfo->realParameter[102] /* line2.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
line2.line.T_heatPort = line2.TCable
*/
void RenewableSources_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  (data->simulationInfo->realParameter[119] /* line2.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
line2.line.heatPort.T = line2.TCable
*/
void RenewableSources_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  (data->simulationInfo->realParameter[124] /* line2.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
line2.cableTemp.port.T = line2.TCable
*/
void RenewableSources_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  (data->simulationInfo->realParameter[105] /* line2.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
line2.cableTemp.T = line2.TCable
*/
void RenewableSources_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  (data->simulationInfo->realParameter[104] /* line2.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
line2.cableTemperature.y = line2.TCable
*/
void RenewableSources_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  (data->simulationInfo->realParameter[106] /* line2.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
line2.T_in = line2.TCable
*/
void RenewableSources_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  (data->simulationInfo->realParameter[101] /* line2.T_in PARAM */) = (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
line2.line.T_ref = line2.T_ref
*/
void RenewableSources_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  (data->simulationInfo->realParameter[120] /* line2.line.T_ref PARAM */) = (data->simulationInfo->realParameter[102] /* line2.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
line2.line.T = line2.line.T_ref
*/
void RenewableSources_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  (data->simulationInfo->realParameter[118] /* line2.line.T PARAM */) = (data->simulationInfo->realParameter[120] /* line2.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
line2.M = line2.commercialCable.M
*/
void RenewableSources_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  (data->simulationInfo->realParameter[97] /* line2.M PARAM */) = (data->simulationInfo->realParameter[108] /* line2.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
line2.line.M = line2.M
*/
void RenewableSources_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  (data->simulationInfo->realParameter[116] /* line2.line.M PARAM */) = (data->simulationInfo->realParameter[97] /* line2.M PARAM */);
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
line2.line.R_actual = line2.line.R * (-273.15 + line2.line.M + line2.TCable) / (-273.15 + line2.line.M + line2.line.T_ref)
*/
void RenewableSources_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[654] /* line2.line.R_actual variable */) = ((data->simulationInfo->realParameter[117] /* line2.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[116] /* line2.line.M PARAM */) + (data->simulationInfo->realParameter[100] /* line2.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[116] /* line2.line.M PARAM */) + (data->simulationInfo->realParameter[120] /* line2.line.T_ref PARAM */),"-273.15 + line2.line.M + line2.line.T_ref",equationIndexes));
  TRACE_POP
}

/*
equation index: 1284
type: ALGORITHM

  line1.commercialCable := Buildings.Electrical.Transmission.Functions.selectCable_low(line1.P_nominal, 480.0);
*/
void RenewableSources_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  Buildings_Electrical_Transmission_LowVoltageCables_Generic tmp426;
  tmp426 = omc_Buildings_Electrical_Transmission_Functions_selectCable__low(threadData, (data->simulationInfo->realParameter[66] /* line1.P_nominal PARAM */), 480.0);
  (data->simulationInfo->integerParameter[5] /* line1.commercialCable.material PARAM */) = tmp426._material;
  (data->simulationInfo->realParameter[75] /* line1.commercialCable.Amp PARAM */) = tmp426._Amp;
  (data->simulationInfo->realParameter[78] /* line1.commercialCable.T_ref PARAM */) = tmp426._T_ref;
  (data->simulationInfo->realParameter[76] /* line1.commercialCable.M PARAM */) = tmp426._M;
  (data->simulationInfo->realParameter[77] /* line1.commercialCable.RCha PARAM */) = tmp426._RCha;
  (data->simulationInfo->realParameter[79] /* line1.commercialCable.XCha PARAM */) = tmp426._XCha;
  ;
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
line1.L = 4.7746482927568605 * line1.commercialCable.XCha
*/
void RenewableSources_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  (data->simulationInfo->realParameter[64] /* line1.L PARAM */) = (4.7746482927568605) * ((data->simulationInfo->realParameter[79] /* line1.commercialCable.XCha PARAM */));
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
line1.line.L = line1.L
*/
void RenewableSources_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  (data->simulationInfo->realParameter[83] /* line1.line.L PARAM */) = (data->simulationInfo->realParameter[64] /* line1.L PARAM */);
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
line1.M = line1.commercialCable.M
*/
void RenewableSources_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  (data->simulationInfo->realParameter[65] /* line1.M PARAM */) = (data->simulationInfo->realParameter[76] /* line1.commercialCable.M PARAM */);
  TRACE_POP
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
line1.line.M = line1.M
*/
void RenewableSources_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  (data->simulationInfo->realParameter[84] /* line1.line.M PARAM */) = (data->simulationInfo->realParameter[65] /* line1.M PARAM */);
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
line1.T_ref = line1.commercialCable.T_ref
*/
void RenewableSources_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  (data->simulationInfo->realParameter[70] /* line1.T_ref PARAM */) = (data->simulationInfo->realParameter[78] /* line1.commercialCable.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
line1.TCable = line1.T_ref
*/
void RenewableSources_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */) = (data->simulationInfo->realParameter[70] /* line1.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
line1.line.T_heatPort = line1.TCable
*/
void RenewableSources_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  (data->simulationInfo->realParameter[87] /* line1.line.T_heatPort PARAM */) = (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
line1.line.heatPort.T = line1.TCable
*/
void RenewableSources_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  (data->simulationInfo->realParameter[92] /* line1.line.heatPort.T PARAM */) = (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
line1.cableTemp.port.T = line1.TCable
*/
void RenewableSources_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  (data->simulationInfo->realParameter[73] /* line1.cableTemp.port.T PARAM */) = (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
line1.cableTemp.T = line1.TCable
*/
void RenewableSources_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  (data->simulationInfo->realParameter[72] /* line1.cableTemp.T PARAM */) = (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
line1.cableTemperature.y = line1.TCable
*/
void RenewableSources_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  (data->simulationInfo->realParameter[74] /* line1.cableTemperature.y PARAM */) = (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
line1.T_in = line1.TCable
*/
void RenewableSources_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  (data->simulationInfo->realParameter[69] /* line1.T_in PARAM */) = (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */);
  TRACE_POP
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
line1.line.T_ref = line1.T_ref
*/
void RenewableSources_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  (data->simulationInfo->realParameter[88] /* line1.line.T_ref PARAM */) = (data->simulationInfo->realParameter[70] /* line1.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
line1.line.T = line1.line.T_ref
*/
void RenewableSources_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  (data->simulationInfo->realParameter[86] /* line1.line.T PARAM */) = (data->simulationInfo->realParameter[88] /* line1.line.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
line1.R = 1500.0 * line1.commercialCable.RCha
*/
void RenewableSources_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  (data->simulationInfo->realParameter[67] /* line1.R PARAM */) = (1500.0) * ((data->simulationInfo->realParameter[77] /* line1.commercialCable.RCha PARAM */));
  TRACE_POP
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
line1.line.R = line1.R
*/
void RenewableSources_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  (data->simulationInfo->realParameter[85] /* line1.line.R PARAM */) = (data->simulationInfo->realParameter[67] /* line1.R PARAM */);
  TRACE_POP
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
line1.line.R_actual = line1.line.R * (-273.15 + line1.line.M + line1.TCable) / (-273.15 + line1.line.M + line1.line.T_ref)
*/
void RenewableSources_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[643] /* line1.line.R_actual variable */) = ((data->simulationInfo->realParameter[85] /* line1.line.R PARAM */)) * (DIVISION_SIM(-273.15 + (data->simulationInfo->realParameter[84] /* line1.line.M PARAM */) + (data->simulationInfo->realParameter[68] /* line1.TCable PARAM */),-273.15 + (data->simulationInfo->realParameter[84] /* line1.line.M PARAM */) + (data->simulationInfo->realParameter[88] /* line1.line.T_ref PARAM */),"-273.15 + line1.line.M + line1.line.T_ref",equationIndexes));
  TRACE_POP
}

void RenewableSources_eqFunction_1302(DATA*, threadData_t*);
void RenewableSources_eqFunction_1303(DATA*, threadData_t*);
void RenewableSources_eqFunction_1304(DATA*, threadData_t*);
void RenewableSources_eqFunction_1305(DATA*, threadData_t*);
void RenewableSources_eqFunction_1306(DATA*, threadData_t*);
void RenewableSources_eqFunction_1307(DATA*, threadData_t*);
void RenewableSources_eqFunction_1308(DATA*, threadData_t*);
void RenewableSources_eqFunction_1309(DATA*, threadData_t*);
void RenewableSources_eqFunction_1310(DATA*, threadData_t*);
void RenewableSources_eqFunction_1311(DATA*, threadData_t*);
void RenewableSources_eqFunction_1312(DATA*, threadData_t*);
void RenewableSources_eqFunction_1313(DATA*, threadData_t*);
void RenewableSources_eqFunction_1314(DATA*, threadData_t*);
void RenewableSources_eqFunction_1315(DATA*, threadData_t*);
void RenewableSources_eqFunction_1316(DATA*, threadData_t*);
void RenewableSources_eqFunction_1317(DATA*, threadData_t*);
void RenewableSources_eqFunction_1318(DATA*, threadData_t*);
void RenewableSources_eqFunction_1319(DATA*, threadData_t*);
void RenewableSources_eqFunction_1320(DATA*, threadData_t*);
void RenewableSources_eqFunction_1321(DATA*, threadData_t*);
void RenewableSources_eqFunction_1322(DATA*, threadData_t*);
void RenewableSources_eqFunction_1323(DATA*, threadData_t*);
void RenewableSources_eqFunction_1324(DATA*, threadData_t*);
void RenewableSources_eqFunction_1325(DATA*, threadData_t*);
void RenewableSources_eqFunction_1326(DATA*, threadData_t*);
void RenewableSources_eqFunction_1327(DATA*, threadData_t*);
void RenewableSources_eqFunction_1328(DATA*, threadData_t*);
void RenewableSources_eqFunction_1329(DATA*, threadData_t*);
void RenewableSources_eqFunction_1330(DATA*, threadData_t*);
void RenewableSources_eqFunction_1331(DATA*, threadData_t*);
void RenewableSources_eqFunction_1332(DATA*, threadData_t*);
void RenewableSources_eqFunction_1333(DATA*, threadData_t*);
void RenewableSources_eqFunction_1334(DATA*, threadData_t*);
void RenewableSources_eqFunction_1335(DATA*, threadData_t*);
void RenewableSources_eqFunction_1336(DATA*, threadData_t*);
void RenewableSources_eqFunction_1337(DATA*, threadData_t*);
void RenewableSources_eqFunction_1338(DATA*, threadData_t*);
void RenewableSources_eqFunction_1339(DATA*, threadData_t*);
void RenewableSources_eqFunction_1340(DATA*, threadData_t*);
void RenewableSources_eqFunction_1341(DATA*, threadData_t*);
void RenewableSources_eqFunction_1342(DATA*, threadData_t*);
void RenewableSources_eqFunction_1343(DATA*, threadData_t*);
void RenewableSources_eqFunction_1344(DATA*, threadData_t*);
void RenewableSources_eqFunction_1345(DATA*, threadData_t*);
void RenewableSources_eqFunction_1346(DATA*, threadData_t*);
void RenewableSources_eqFunction_1347(DATA*, threadData_t*);
void RenewableSources_eqFunction_1348(DATA*, threadData_t*);
void RenewableSources_eqFunction_1349(DATA*, threadData_t*);
void RenewableSources_eqFunction_1350(DATA*, threadData_t*);
void RenewableSources_eqFunction_1351(DATA*, threadData_t*);
void RenewableSources_eqFunction_1352(DATA*, threadData_t*);
void RenewableSources_eqFunction_1353(DATA*, threadData_t*);
void RenewableSources_eqFunction_1354(DATA*, threadData_t*);
void RenewableSources_eqFunction_1355(DATA*, threadData_t*);
void RenewableSources_eqFunction_1356(DATA*, threadData_t*);
void RenewableSources_eqFunction_1357(DATA*, threadData_t*);
void RenewableSources_eqFunction_1358(DATA*, threadData_t*);
void RenewableSources_eqFunction_1359(DATA*, threadData_t*);
void RenewableSources_eqFunction_1360(DATA*, threadData_t*);
void RenewableSources_eqFunction_1361(DATA*, threadData_t*);
void RenewableSources_eqFunction_1362(DATA*, threadData_t*);
void RenewableSources_eqFunction_1363(DATA*, threadData_t*);
void RenewableSources_eqFunction_1364(DATA*, threadData_t*);
void RenewableSources_eqFunction_1365(DATA*, threadData_t*);
void RenewableSources_eqFunction_1366(DATA*, threadData_t*);
void RenewableSources_eqFunction_1367(DATA*, threadData_t*);
void RenewableSources_eqFunction_1368(DATA*, threadData_t*);
void RenewableSources_eqFunction_1391(DATA*, threadData_t*);
void RenewableSources_eqFunction_1390(DATA*, threadData_t*);
void RenewableSources_eqFunction_1389(DATA*, threadData_t*);
void RenewableSources_eqFunction_1388(DATA*, threadData_t*);
void RenewableSources_eqFunction_1387(DATA*, threadData_t*);
void RenewableSources_eqFunction_1386(DATA*, threadData_t*);
void RenewableSources_eqFunction_1385(DATA*, threadData_t*);
void RenewableSources_eqFunction_1384(DATA*, threadData_t*);
void RenewableSources_eqFunction_1383(DATA*, threadData_t*);
void RenewableSources_eqFunction_1382(DATA*, threadData_t*);
void RenewableSources_eqFunction_1381(DATA*, threadData_t*);
void RenewableSources_eqFunction_1380(DATA*, threadData_t*);
void RenewableSources_eqFunction_1379(DATA*, threadData_t*);
void RenewableSources_eqFunction_1378(DATA*, threadData_t*);
void RenewableSources_eqFunction_1377(DATA*, threadData_t*);
void RenewableSources_eqFunction_1376(DATA*, threadData_t*);
void RenewableSources_eqFunction_1375(DATA*, threadData_t*);
void RenewableSources_eqFunction_1374(DATA*, threadData_t*);
void RenewableSources_eqFunction_1373(DATA*, threadData_t*);
void RenewableSources_eqFunction_1372(DATA*, threadData_t*);
void RenewableSources_eqFunction_1371(DATA*, threadData_t*);
void RenewableSources_eqFunction_1370(DATA*, threadData_t*);
void RenewableSources_eqFunction_1369(DATA*, threadData_t*);
/*
equation index: 1482
indexNonlinear: 0
type: NONLINEAR

vars: {line2.terminal_n.i[2], line1.terminal_p.i[2], line3.terminal_p.i[2], line2.terminal_p.i[1], line8.terminal_n.i[1], line6.terminal_p.i[1], line5.terminal_p.i[1], winTur.load.v[2], winTur.load.v[1], loa4.v[2], loa4.v[1], loa3.v[2], loa3.v[1], loa2.v[2], loa2.v[1], loa7.v[2], loa7.v[1], loa6.v[1], loa6.v[2], loa5.v[2], loa5.v[1], loa1.v[2], loa1.v[1]}
eqns: {1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1391, 1390, 1389, 1388, 1387, 1386, 1385, 1384, 1383, 1382, 1381, 1380, 1379, 1378, 1377, 1376, 1375, 1374, 1373, 1372, 1371, 1370, 1369}
*/
void RenewableSources_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1482 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[658] /* line2.terminal_n.i[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[649] /* line1.terminal_p.i[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[671] /* line3.terminal_p.i[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = (data->localData[0]->realVars[659] /* line2.terminal_p.i[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = (data->localData[0]->realVars[724] /* line8.terminal_n.i[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = (data->localData[0]->realVars[703] /* line6.terminal_p.i[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = (data->localData[0]->realVars[692] /* line5.terminal_p.i[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = (data->localData[0]->realVars[809] /* loa6.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = (data->localData[0]->realVars[810] /* loa6.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1482};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1482 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[658] /* line2.terminal_n.i[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[649] /* line1.terminal_p.i[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[671] /* line3.terminal_p.i[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  (data->localData[0]->realVars[659] /* line2.terminal_p.i[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  (data->localData[0]->realVars[724] /* line8.terminal_n.i[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  (data->localData[0]->realVars[703] /* line6.terminal_p.i[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  (data->localData[0]->realVars[692] /* line5.terminal_p.i[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  (data->localData[0]->realVars[809] /* loa6.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  (data->localData[0]->realVars[810] /* loa6.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  TRACE_POP
}
extern void RenewableSources_eqFunction_4589(DATA *data, threadData_t *threadData);


/*
equation index: 1484
type: SIMPLE_ASSIGN
sen2.V = 0.0020833333333333333 * Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5)
*/
void RenewableSources_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
  tmp1 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
  (data->localData[0]->realVars[1333] /* sen2.V variable */) = (0.0020833333333333333) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp0 * tmp0) + (tmp1 * tmp1), 1e-5));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4582(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4585(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4586(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4583(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4584(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4588(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4587(DATA *data, threadData_t *threadData);


/*
equation index: 1492
type: SIMPLE_ASSIGN
line4.VoltageLosses = abs(Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)) / smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)))
*/
void RenewableSources_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  tmp2 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
  tmp3 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
  tmp4 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
  tmp5 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
  tmp6 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
  tmp7 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
  tmp8 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
  tmp9 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
  tmp10 = Greater(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp6 * tmp6) + (tmp7 * tmp7), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp8 * tmp8) + (tmp9 * tmp9), 1e-5),1.0);
  tmp39 = (modelica_boolean)tmp10;
  if(tmp39)
  {
    tmp11 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
    tmp12 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
    tmp40 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp11 * tmp11) + (tmp12 * tmp12), 1e-5);
  }
  else
  {
    tmp13 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
    tmp14 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
    tmp15 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
    tmp16 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
    tmp17 = Less(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp13 * tmp13) + (tmp14 * tmp14), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp15 * tmp15) + (tmp16 * tmp16), 1e-5),-1.0);
    tmp37 = (modelica_boolean)tmp17;
    if(tmp37)
    {
      tmp18 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
      tmp19 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
      tmp38 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp18 * tmp18) + (tmp19 * tmp19), 1e-5);
    }
    else
    {
      tmp20 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
      tmp21 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
      tmp22 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
      tmp23 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
      tmp24 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
      tmp25 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
      tmp26 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
      tmp27 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
      tmp28 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp24 * tmp24) + (tmp25 * tmp25), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp26 * tmp26) + (tmp27 * tmp27), 1e-5);
      tmp29 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
      tmp30 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
      tmp31 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
      tmp32 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
      tmp33 = (data->localData[0]->realVars[781] /* loa4.v[1] DUMMY_STATE */);
      tmp34 = (data->localData[0]->realVars[782] /* loa4.v[2] DUMMY_STATE */);
      tmp35 = (data->localData[0]->realVars[767] /* loa3.v[1] DUMMY_STATE */);
      tmp36 = (data->localData[0]->realVars[768] /* loa3.v[2] DUMMY_STATE */);
      tmp38 = (0.25) * (((omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp20 * tmp20) + (tmp21 * tmp21), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp22 * tmp22) + (tmp23 * tmp23), 1e-5)) * ((tmp28 * tmp28) - 3.0)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp29 * tmp29) + (tmp30 * tmp30), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp31 * tmp31) + (tmp32 * tmp32), 1e-5))) + (0.5) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp33 * tmp33) + (tmp34 * tmp34), 1e-5) + omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp35 * tmp35) + (tmp36 * tmp36), 1e-5));
    }
    tmp40 = tmp38;
  }
  (data->localData[0]->realVars[672] /* line4.VoltageLosses variable */) = DIVISION_SIM(fabs(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp2 * tmp2) + (tmp3 * tmp3), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp4 * tmp4) + (tmp5 * tmp5), 1e-5)),tmp40,"smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa4.v[1] ^ 2.0 + loa4.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa3.v[1] ^ 2.0 + loa3.v[2] ^ 2.0, 1e-5)))",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4591(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4592(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4593(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4594(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4602(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4601(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4595(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4596(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4599(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4600(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4597(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4598(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4603(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4551(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4552(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4553(DATA *data, threadData_t *threadData);


/*
equation index: 1509
type: SIMPLE_ASSIGN
sen3.V = 0.0020833333333333333 * Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5)
*/
void RenewableSources_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  modelica_real tmp41;
  modelica_real tmp42;
  tmp41 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
  tmp42 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
  (data->localData[0]->realVars[1337] /* sen3.V variable */) = (0.0020833333333333333) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp41 * tmp41) + (tmp42 * tmp42), 1e-5));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4556(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4557(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4558(DATA *data, threadData_t *threadData);


/*
equation index: 1513
type: SIMPLE_ASSIGN
line8.VoltageLosses = abs(Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)) / smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)))
*/
void RenewableSources_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  tmp43 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
  tmp44 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
  tmp45 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
  tmp46 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
  tmp47 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
  tmp48 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
  tmp49 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
  tmp50 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
  tmp51 = Greater(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp47 * tmp47) + (tmp48 * tmp48), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp49 * tmp49) + (tmp50 * tmp50), 1e-5),1.0);
  tmp80 = (modelica_boolean)tmp51;
  if(tmp80)
  {
    tmp52 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
    tmp53 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
    tmp81 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp52 * tmp52) + (tmp53 * tmp53), 1e-5);
  }
  else
  {
    tmp54 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
    tmp55 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
    tmp56 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
    tmp57 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
    tmp58 = Less(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp54 * tmp54) + (tmp55 * tmp55), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp56 * tmp56) + (tmp57 * tmp57), 1e-5),-1.0);
    tmp78 = (modelica_boolean)tmp58;
    if(tmp78)
    {
      tmp59 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
      tmp60 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
      tmp79 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp59 * tmp59) + (tmp60 * tmp60), 1e-5);
    }
    else
    {
      tmp61 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
      tmp62 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
      tmp63 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
      tmp64 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
      tmp65 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
      tmp66 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
      tmp67 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
      tmp68 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
      tmp69 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp65 * tmp65) + (tmp66 * tmp66), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp67 * tmp67) + (tmp68 * tmp68), 1e-5);
      tmp70 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
      tmp71 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
      tmp72 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
      tmp73 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
      tmp74 = (data->localData[0]->realVars[1418] /* winTur.load.v[1] DUMMY_STATE */);
      tmp75 = (data->localData[0]->realVars[1419] /* winTur.load.v[2] DUMMY_STATE */);
      tmp76 = (data->localData[0]->realVars[823] /* loa7.v[1] DUMMY_STATE */);
      tmp77 = (data->localData[0]->realVars[824] /* loa7.v[2] DUMMY_STATE */);
      tmp79 = (0.25) * (((omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp61 * tmp61) + (tmp62 * tmp62), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp63 * tmp63) + (tmp64 * tmp64), 1e-5)) * ((tmp69 * tmp69) - 3.0)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp70 * tmp70) + (tmp71 * tmp71), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp72 * tmp72) + (tmp73 * tmp73), 1e-5))) + (0.5) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp74 * tmp74) + (tmp75 * tmp75), 1e-5) + omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp76 * tmp76) + (tmp77 * tmp77), 1e-5));
    }
    tmp81 = tmp79;
  }
  (data->localData[0]->realVars[716] /* line8.VoltageLosses variable */) = DIVISION_SIM(fabs(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp43 * tmp43) + (tmp44 * tmp44), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp45 * tmp45) + (tmp46 * tmp46), 1e-5)),tmp81,"smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(winTur.load.v[1] ^ 2.0 + winTur.load.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa7.v[1] ^ 2.0 + loa7.v[2] ^ 2.0, 1e-5)))",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4560(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4561(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4562(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4563(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4550(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4569(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4570(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4564(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4567(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4568(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4565(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4566(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4576(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4577(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4578(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4571(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4572(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4573(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4574(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4575(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4579(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4628(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4629(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4604(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4605(DATA *data, threadData_t *threadData);


/*
equation index: 1539
type: SIMPLE_ASSIGN
line5.VoltageLosses = abs(Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) / smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)))
*/
void RenewableSources_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_real tmp120;
  tmp82 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
  tmp83 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
  tmp84 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp85 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  tmp86 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
  tmp87 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
  tmp88 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp89 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  tmp90 = Greater(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp86 * tmp86) + (tmp87 * tmp87), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp88 * tmp88) + (tmp89 * tmp89), 1e-5),1.0);
  tmp119 = (modelica_boolean)tmp90;
  if(tmp119)
  {
    tmp91 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
    tmp92 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
    tmp120 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp91 * tmp91) + (tmp92 * tmp92), 1e-5);
  }
  else
  {
    tmp93 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
    tmp94 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
    tmp95 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
    tmp96 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
    tmp97 = Less(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp93 * tmp93) + (tmp94 * tmp94), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp95 * tmp95) + (tmp96 * tmp96), 1e-5),-1.0);
    tmp117 = (modelica_boolean)tmp97;
    if(tmp117)
    {
      tmp98 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp99 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp118 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp98 * tmp98) + (tmp99 * tmp99), 1e-5);
    }
    else
    {
      tmp100 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
      tmp101 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
      tmp102 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp103 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp104 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
      tmp105 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
      tmp106 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp107 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp108 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp104 * tmp104) + (tmp105 * tmp105), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp106 * tmp106) + (tmp107 * tmp107), 1e-5);
      tmp109 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp110 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp111 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
      tmp112 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
      tmp113 = (data->localData[0]->realVars[795] /* loa5.v[1] DUMMY_STATE */);
      tmp114 = (data->localData[0]->realVars[796] /* loa5.v[2] DUMMY_STATE */);
      tmp115 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp116 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp118 = (0.25) * (((omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp100 * tmp100) + (tmp101 * tmp101), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp102 * tmp102) + (tmp103 * tmp103), 1e-5)) * ((tmp108 * tmp108) - 3.0)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp109 * tmp109) + (tmp110 * tmp110), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp111 * tmp111) + (tmp112 * tmp112), 1e-5))) + (0.5) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp113 * tmp113) + (tmp114 * tmp114), 1e-5) + omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp115 * tmp115) + (tmp116 * tmp116), 1e-5));
    }
    tmp120 = tmp118;
  }
  (data->localData[0]->realVars[683] /* line5.VoltageLosses variable */) = DIVISION_SIM(fabs(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp82 * tmp82) + (tmp83 * tmp83), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp84 * tmp84) + (tmp85 * tmp85), 1e-5)),tmp120,"smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa5.v[1] ^ 2.0 + loa5.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)))",equationIndexes);
  TRACE_POP
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
line2.VoltageLosses = abs(Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) / smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)))
*/
void RenewableSources_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_boolean tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_boolean tmp156;
  modelica_real tmp157;
  modelica_boolean tmp158;
  modelica_real tmp159;
  tmp121 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
  tmp122 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
  tmp123 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp124 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  tmp125 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
  tmp126 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
  tmp127 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp128 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  tmp129 = Greater(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp125 * tmp125) + (tmp126 * tmp126), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp127 * tmp127) + (tmp128 * tmp128), 1e-5),1.0);
  tmp158 = (modelica_boolean)tmp129;
  if(tmp158)
  {
    tmp130 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
    tmp131 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
    tmp159 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp130 * tmp130) + (tmp131 * tmp131), 1e-5);
  }
  else
  {
    tmp132 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
    tmp133 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
    tmp134 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
    tmp135 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
    tmp136 = Less(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp132 * tmp132) + (tmp133 * tmp133), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp134 * tmp134) + (tmp135 * tmp135), 1e-5),-1.0);
    tmp156 = (modelica_boolean)tmp136;
    if(tmp156)
    {
      tmp137 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp138 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp157 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp137 * tmp137) + (tmp138 * tmp138), 1e-5);
    }
    else
    {
      tmp139 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
      tmp140 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
      tmp141 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp142 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp143 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
      tmp144 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
      tmp145 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp146 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp147 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp143 * tmp143) + (tmp144 * tmp144), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp145 * tmp145) + (tmp146 * tmp146), 1e-5);
      tmp148 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp149 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp150 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
      tmp151 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
      tmp152 = (data->localData[0]->realVars[753] /* loa2.v[1] DUMMY_STATE */);
      tmp153 = (data->localData[0]->realVars[754] /* loa2.v[2] DUMMY_STATE */);
      tmp154 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp155 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp157 = (0.25) * (((omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp139 * tmp139) + (tmp140 * tmp140), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp141 * tmp141) + (tmp142 * tmp142), 1e-5)) * ((tmp147 * tmp147) - 3.0)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp148 * tmp148) + (tmp149 * tmp149), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp150 * tmp150) + (tmp151 * tmp151), 1e-5))) + (0.5) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp152 * tmp152) + (tmp153 * tmp153), 1e-5) + omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp154 * tmp154) + (tmp155 * tmp155), 1e-5));
    }
    tmp159 = tmp157;
  }
  (data->localData[0]->realVars[650] /* line2.VoltageLosses variable */) = DIVISION_SIM(fabs(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp121 * tmp121) + (tmp122 * tmp122), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp123 * tmp123) + (tmp124 * tmp124), 1e-5)),tmp159,"smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa2.v[1] ^ 2.0 + loa2.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)))",equationIndexes);
  TRACE_POP
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
line1.VoltageLosses = abs(Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)) / smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)))
*/
void RenewableSources_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_boolean tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_boolean tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
  modelica_boolean tmp197;
  modelica_real tmp198;
  tmp160 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp161 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  tmp162 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
  tmp163 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
  tmp164 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp165 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  tmp166 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
  tmp167 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
  tmp168 = Greater(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp164 * tmp164) + (tmp165 * tmp165), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp166 * tmp166) + (tmp167 * tmp167), 1e-5),1.0);
  tmp197 = (modelica_boolean)tmp168;
  if(tmp197)
  {
    tmp169 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
    tmp170 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
    tmp198 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp169 * tmp169) + (tmp170 * tmp170), 1e-5);
  }
  else
  {
    tmp171 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
    tmp172 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
    tmp173 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
    tmp174 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
    tmp175 = Less(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp171 * tmp171) + (tmp172 * tmp172), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp173 * tmp173) + (tmp174 * tmp174), 1e-5),-1.0);
    tmp195 = (modelica_boolean)tmp175;
    if(tmp195)
    {
      tmp176 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
      tmp177 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
      tmp196 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp176 * tmp176) + (tmp177 * tmp177), 1e-5);
    }
    else
    {
      tmp178 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp179 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp180 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
      tmp181 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
      tmp182 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp183 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp184 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
      tmp185 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
      tmp186 = omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp182 * tmp182) + (tmp183 * tmp183), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp184 * tmp184) + (tmp185 * tmp185), 1e-5);
      tmp187 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
      tmp188 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
      tmp189 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp190 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp191 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
      tmp192 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
      tmp193 = (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */);
      tmp194 = (data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */);
      tmp196 = (0.25) * (((omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp178 * tmp178) + (tmp179 * tmp179), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp180 * tmp180) + (tmp181 * tmp181), 1e-5)) * ((tmp186 * tmp186) - 3.0)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp187 * tmp187) + (tmp188 * tmp188), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp189 * tmp189) + (tmp190 * tmp190), 1e-5))) + (0.5) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp191 * tmp191) + (tmp192 * tmp192), 1e-5) + omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp193 * tmp193) + (tmp194 * tmp194), 1e-5));
    }
    tmp198 = tmp196;
  }
  (data->localData[0]->realVars[639] /* line1.VoltageLosses variable */) = DIVISION_SIM(fabs(omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp160 * tmp160) + (tmp161 * tmp161), 1e-5) - omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp162 * tmp162) + (tmp163 * tmp163), 1e-5)),tmp198,"smooth(1, if noEvent(Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) > 1.0) then Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) else if noEvent(Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) < -1.0) then Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) else 0.25 * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)) * ((Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)) ^ 2.0 - 3.0) * (Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5) - Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)) + 0.5 * (Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5) + Modelica.Fluid.Utilities.regRoot(gri.terminal.v[1] ^ 2.0 + gri.terminal.v[2] ^ 2.0, 1e-5)))",equationIndexes);
  TRACE_POP
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
sen1.V = 0.0020833333333333333 * Modelica.Fluid.Utilities.regRoot(loa1.v[1] ^ 2.0 + loa1.v[2] ^ 2.0, 1e-5)
*/
void RenewableSources_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  modelica_real tmp199;
  modelica_real tmp200;
  tmp199 = (data->localData[0]->realVars[739] /* loa1.v[1] DUMMY_STATE */);
  tmp200 = (data->localData[0]->realVars[740] /* loa1.v[2] DUMMY_STATE */);
  (data->localData[0]->realVars[1329] /* sen1.V variable */) = (0.0020833333333333333) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (tmp199 * tmp199) + (tmp200 * tmp200), 1e-5));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4625(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4626(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4627(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4630(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4631(DATA *data, threadData_t *threadData);


/*
equation index: 1552
type: LINEAR

<var>line1.terminal_n.i[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void RenewableSources_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[647] /* line1.terminal_n.i[2] variable */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1552 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1552};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1552 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[647] /* line1.terminal_n.i[2] variable */) = aux_x[0];

  TRACE_POP
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
gri.sou.phi = atan2(gri.terminal.v[2], gri.terminal.v[1]) - atan2(line1.terminal_n.i[2], line1.terminal_n.i[1])
*/
void RenewableSources_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  (data->localData[0]->realVars[635] /* gri.sou.phi variable */) = atan2((data->localData[0]->realVars[638] /* gri.terminal.v[2] variable */), (data->localData[0]->realVars[637] /* gri.terminal.v[1] variable */)) - atan2((data->localData[0]->realVars[647] /* line1.terminal_n.i[2] variable */), (data->localData[0]->realVars[646] /* line1.terminal_n.i[1] variable */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4615(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4612(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4611(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4616(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4617(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4618(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4619(DATA *data, threadData_t *threadData);


/*
equation index: 1741
type: LINEAR

<var>$DER.line2.terminal_n.i[2]</var>
<var>$DER.line1.terminal_p.i[2]</var>
<var>$DER.line3.terminal_p.i[1]</var>
<var>$DER.line7.terminal_p.i[2]</var>
<var>$DER.line6.terminal_p.i[1]</var>
<var>$DER.line5.terminal_p.i[1]</var>
<var>$DER.line2.terminal_p.i[1]</var>
<var>$DER.winTur.load.v[1]</var>
<var>$DER.winTur.load.v[2]</var>
<var>$DER.loa4.v[2]</var>
<var>$DER.loa4.v[1]</var>
<var>$DER.loa3.v[1]</var>
<var>$DER.loa3.v[2]</var>
<var>$DER.loa7.v[2]</var>
<var>$DER.loa7.v[1]</var>
<var>$DER.loa6.v[2]</var>
<var>$DER.loa6.v[1]</var>
<var>$DER.loa5.v[1]</var>
<var>$DER.loa5.v[2]</var>
<var>$DER.loa2.v[2]</var>
<var>$DER.loa2.v[1]</var>
<var>$DER.loa1.v[1]</var>
<var>$DER.loa1.v[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void RenewableSources_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  /* Linear equation system */
  int retValue;
  double aux_x[23] = { (data->localData[1]->realVars[21] /* der(line2.terminal_n.i[2]) DUMMY_DER */),(data->localData[1]->realVars[17] /* der(line1.terminal_p.i[2]) DUMMY_DER */),(data->localData[1]->realVars[28] /* der(line3.terminal_p.i[1]) DUMMY_DER */),(data->localData[1]->realVars[53] /* der(line7.terminal_p.i[2]) DUMMY_DER */),(data->localData[1]->realVars[46] /* der(line6.terminal_p.i[1]) DUMMY_DER */),(data->localData[1]->realVars[40] /* der(line5.terminal_p.i[1]) DUMMY_DER */),(data->localData[1]->realVars[22] /* der(line2.terminal_p.i[1]) DUMMY_DER */),(data->localData[1]->realVars[543] /* der(winTur.load.v[1]) DUMMY_DER */),(data->localData[1]->realVars[544] /* der(winTur.load.v[2]) DUMMY_DER */),(data->localData[1]->realVars[87] /* der(loa4.v[2]) DUMMY_DER */),(data->localData[1]->realVars[86] /* der(loa4.v[1]) DUMMY_DER */),(data->localData[1]->realVars[79] /* der(loa3.v[1]) DUMMY_DER */),(data->localData[1]->realVars[80] /* der(loa3.v[2]) DUMMY_DER */),(data->localData[1]->realVars[108] /* der(loa7.v[2]) DUMMY_DER */),(data->localData[1]->realVars[107] /* der(loa7.v[1]) DUMMY_DER */),(data->localData[1]->realVars[101] /* der(loa6.v[2]) DUMMY_DER */),(data->localData[1]->realVars[100] /* der(loa6.v[1]) DUMMY_DER */),(data->localData[1]->realVars[93] /* der(loa5.v[1]) DUMMY_DER */),(data->localData[1]->realVars[94] /* der(loa5.v[2]) DUMMY_DER */),(data->localData[1]->realVars[73] /* der(loa2.v[2]) DUMMY_DER */),(data->localData[1]->realVars[72] /* der(loa2.v[1]) DUMMY_DER */),(data->localData[1]->realVars[65] /* der(loa1.v[1]) DUMMY_DER */),(data->localData[1]->realVars[66] /* der(loa1.v[2]) DUMMY_DER */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1741 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1741};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 1741 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[21] /* der(line2.terminal_n.i[2]) DUMMY_DER */) = aux_x[0];
  (data->localData[0]->realVars[17] /* der(line1.terminal_p.i[2]) DUMMY_DER */) = aux_x[1];
  (data->localData[0]->realVars[28] /* der(line3.terminal_p.i[1]) DUMMY_DER */) = aux_x[2];
  (data->localData[0]->realVars[53] /* der(line7.terminal_p.i[2]) DUMMY_DER */) = aux_x[3];
  (data->localData[0]->realVars[46] /* der(line6.terminal_p.i[1]) DUMMY_DER */) = aux_x[4];
  (data->localData[0]->realVars[40] /* der(line5.terminal_p.i[1]) DUMMY_DER */) = aux_x[5];
  (data->localData[0]->realVars[22] /* der(line2.terminal_p.i[1]) DUMMY_DER */) = aux_x[6];
  (data->localData[0]->realVars[543] /* der(winTur.load.v[1]) DUMMY_DER */) = aux_x[7];
  (data->localData[0]->realVars[544] /* der(winTur.load.v[2]) DUMMY_DER */) = aux_x[8];
  (data->localData[0]->realVars[87] /* der(loa4.v[2]) DUMMY_DER */) = aux_x[9];
  (data->localData[0]->realVars[86] /* der(loa4.v[1]) DUMMY_DER */) = aux_x[10];
  (data->localData[0]->realVars[79] /* der(loa3.v[1]) DUMMY_DER */) = aux_x[11];
  (data->localData[0]->realVars[80] /* der(loa3.v[2]) DUMMY_DER */) = aux_x[12];
  (data->localData[0]->realVars[108] /* der(loa7.v[2]) DUMMY_DER */) = aux_x[13];
  (data->localData[0]->realVars[107] /* der(loa7.v[1]) DUMMY_DER */) = aux_x[14];
  (data->localData[0]->realVars[101] /* der(loa6.v[2]) DUMMY_DER */) = aux_x[15];
  (data->localData[0]->realVars[100] /* der(loa6.v[1]) DUMMY_DER */) = aux_x[16];
  (data->localData[0]->realVars[93] /* der(loa5.v[1]) DUMMY_DER */) = aux_x[17];
  (data->localData[0]->realVars[94] /* der(loa5.v[2]) DUMMY_DER */) = aux_x[18];
  (data->localData[0]->realVars[73] /* der(loa2.v[2]) DUMMY_DER */) = aux_x[19];
  (data->localData[0]->realVars[72] /* der(loa2.v[1]) DUMMY_DER */) = aux_x[20];
  (data->localData[0]->realVars[65] /* der(loa1.v[1]) DUMMY_DER */) = aux_x[21];
  (data->localData[0]->realVars[66] /* der(loa1.v[2]) DUMMY_DER */) = aux_x[22];

  TRACE_POP
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
gri.sou.thetaRel = 0.0
*/
void RenewableSources_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->realVars[636] /* gri.sou.thetaRel variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
weaDat.con30Min.y = 1800.0
*/
void RenewableSources_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[1363] /* weaDat.con30Min.y variable */) = 1800.0;
  TRACE_POP
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
sen1.term.i[1] = 0.0
*/
void RenewableSources_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  (data->localData[0]->realVars[1330] /* sen1.term.i[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
sen1.term.i[2] = 0.0
*/
void RenewableSources_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[1331] /* sen1.term.i[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
sen2.term.i[1] = 0.0
*/
void RenewableSources_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[1334] /* sen2.term.i[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
sen2.term.i[2] = 0.0
*/
void RenewableSources_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[1335] /* sen2.term.i[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
sen3.term.i[1] = 0.0
*/
void RenewableSources_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  (data->localData[0]->realVars[1338] /* sen3.term.i[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
sen3.term.i[2] = 0.0
*/
void RenewableSources_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  (data->localData[0]->realVars[1339] /* sen3.term.i[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
pv1.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1750};
  (data->localData[0]->realVars[866] /* pv1.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
pv2.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[936] /* pv2.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
pv3.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->realVars[1006] /* pv3.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
pv4.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->realVars[1076] /* pv4.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
pv5.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->realVars[1146] /* pv5.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
pv6.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[1216] /* pv6.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
pv7.HDifTil.briCoe.d = 0.01
*/
void RenewableSources_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  (data->localData[0]->realVars[1286] /* pv7.HDifTil.briCoe.d variable */) = 0.01;
  TRACE_POP
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
ELoa.y = ELoa.y_start
*/
void RenewableSources_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->realVars[0] /* ELoa.y STATE(1) */) = (data->simulationInfo->realParameter[36] /* ELoa.y_start PARAM */);
  TRACE_POP
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
ESol.y = ESol.y_start
*/
void RenewableSources_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->realVars[1] /* ESol.y STATE(1) */) = (data->simulationInfo->realParameter[40] /* ESol.y_start PARAM */);
  TRACE_POP
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
EWin.y = EWin.y_start
*/
void RenewableSources_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[2] /* EWin.y STATE(1) */) = (data->simulationInfo->realParameter[42] /* EWin.y_start PARAM */);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3574(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3575(DATA *data, threadData_t *threadData);


/*
equation index: 1762
type: SIMPLE_ASSIGN
$PRE.pow7.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1762};
  (data->simulationInfo->realVarsPre[1434] /* pow7.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
$whenCondition1 = time >= $PRE.pow7.nextTimeEvent
*/
void RenewableSources_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  modelica_boolean tmp201;
  tmp201 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1434] /* pow7.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */) = tmp201;
  TRACE_POP
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
$PRE.pow6.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  (data->simulationInfo->realVarsPre[1432] /* pow6.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
$whenCondition2 = time >= $PRE.pow6.nextTimeEvent
*/
void RenewableSources_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  modelica_boolean tmp202;
  tmp202 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1432] /* pow6.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[11] /* $whenCondition2 DISCRETE */) = tmp202;
  TRACE_POP
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
$PRE.pow5.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  (data->simulationInfo->realVarsPre[1430] /* pow5.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
$whenCondition3 = time >= $PRE.pow5.nextTimeEvent
*/
void RenewableSources_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  modelica_boolean tmp203;
  tmp203 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1430] /* pow5.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[19] /* $whenCondition3 DISCRETE */) = tmp203;
  TRACE_POP
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
$PRE.pow4.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  (data->simulationInfo->realVarsPre[1428] /* pow4.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
$whenCondition4 = time >= $PRE.pow4.nextTimeEvent
*/
void RenewableSources_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  modelica_boolean tmp204;
  tmp204 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1428] /* pow4.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[20] /* $whenCondition4 DISCRETE */) = tmp204;
  TRACE_POP
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
$PRE.pow3.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  (data->simulationInfo->realVarsPre[1426] /* pow3.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
$whenCondition5 = time >= $PRE.pow3.nextTimeEvent
*/
void RenewableSources_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1771};
  modelica_boolean tmp205;
  tmp205 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1426] /* pow3.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[21] /* $whenCondition5 DISCRETE */) = tmp205;
  TRACE_POP
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
$PRE.pow2.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  (data->simulationInfo->realVarsPre[1424] /* pow2.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
$whenCondition6 = time >= $PRE.pow2.nextTimeEvent
*/
void RenewableSources_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  modelica_boolean tmp206;
  tmp206 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1424] /* pow2.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[22] /* $whenCondition6 DISCRETE */) = tmp206;
  TRACE_POP
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
$PRE.pow1.nextTimeEvent = 0.0
*/
void RenewableSources_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  (data->simulationInfo->realVarsPre[1422] /* pow1.nextTimeEvent DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
$whenCondition7 = time >= $PRE.pow1.nextTimeEvent
*/
void RenewableSources_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1775};
  modelica_boolean tmp207;
  tmp207 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[1422] /* pow1.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[23] /* $whenCondition7 DISCRETE */) = tmp207;
  TRACE_POP
}
extern void RenewableSources_eqFunction_5064(DATA *data, threadData_t *threadData);


/*
equation index: 1806
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  static const MMC_DEFSTRINGLIT(tmp208,25,"*** Warning: P_nominal = ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static const MMC_DEFSTRINGLIT(tmp211,33,", but this value will be ignored.");
  modelica_metatype tmpMeta212;
  static int tmp213 = 0;
  if(!tmp213)
  {
    if(!1 /* true */)
    {
      tmp209 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      tmpMeta212 = stringAppend(tmpMeta210,MMC_REFSTRINGLIT(tmp211));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        }
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1805
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  static const MMC_DEFSTRINGLIT(tmp214,25,"*** Warning: P_nominal = ");
  modelica_string tmp215;
  modelica_metatype tmpMeta216;
  static const MMC_DEFSTRINGLIT(tmp217,33,", but this value will be ignored.");
  modelica_metatype tmpMeta218;
  static int tmp219 = 0;
  if(!tmp219)
  {
    if(!1 /* true */)
    {
      tmp215 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta216 = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      tmpMeta218 = stringAppend(tmpMeta216,MMC_REFSTRINGLIT(tmp217));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta218));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta218));
        }
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1804
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  static const MMC_DEFSTRINGLIT(tmp220,25,"*** Warning: P_nominal = ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static const MMC_DEFSTRINGLIT(tmp223,33,", but this value will be ignored.");
  modelica_metatype tmpMeta224;
  static int tmp225 = 0;
  if(!tmp225)
  {
    if(!1 /* true */)
    {
      tmp221 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      tmpMeta224 = stringAppend(tmpMeta222,MMC_REFSTRINGLIT(tmp223));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta224));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta224));
        }
      }
      tmp225 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1803
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  static const MMC_DEFSTRINGLIT(tmp226,25,"*** Warning: P_nominal = ");
  modelica_string tmp227;
  modelica_metatype tmpMeta228;
  static const MMC_DEFSTRINGLIT(tmp229,33,", but this value will be ignored.");
  modelica_metatype tmpMeta230;
  static int tmp231 = 0;
  if(!tmp231)
  {
    if(!1 /* true */)
    {
      tmp227 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta228 = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      tmpMeta230 = stringAppend(tmpMeta228,MMC_REFSTRINGLIT(tmp229));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta230));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta230));
        }
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1802
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  static const MMC_DEFSTRINGLIT(tmp232,25,"*** Warning: P_nominal = ");
  modelica_string tmp233;
  modelica_metatype tmpMeta234;
  static const MMC_DEFSTRINGLIT(tmp235,33,", but this value will be ignored.");
  modelica_metatype tmpMeta236;
  static int tmp237 = 0;
  if(!tmp237)
  {
    if(!1 /* true */)
    {
      tmp233 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta234 = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      tmpMeta236 = stringAppend(tmpMeta234,MMC_REFSTRINGLIT(tmp235));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta236));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta236));
        }
      }
      tmp237 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1801
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  static const MMC_DEFSTRINGLIT(tmp238,25,"*** Warning: P_nominal = ");
  modelica_string tmp239;
  modelica_metatype tmpMeta240;
  static const MMC_DEFSTRINGLIT(tmp241,33,", but this value will be ignored.");
  modelica_metatype tmpMeta242;
  static int tmp243 = 0;
  if(!tmp243)
  {
    if(!1 /* true */)
    {
      tmp239 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta240 = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      tmpMeta242 = stringAppend(tmpMeta240,MMC_REFSTRINGLIT(tmp241));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        }
      }
      tmp243 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1800
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  static const MMC_DEFSTRINGLIT(tmp244,25,"*** Warning: P_nominal = ");
  modelica_string tmp245;
  modelica_metatype tmpMeta246;
  static const MMC_DEFSTRINGLIT(tmp247,33,", but this value will be ignored.");
  modelica_metatype tmpMeta248;
  static int tmp249 = 0;
  if(!tmp249)
  {
    if(!1 /* true */)
    {
      tmp245 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta246 = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      tmpMeta248 = stringAppend(tmpMeta246,MMC_REFSTRINGLIT(tmp247));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta248));
        }
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1799
type: ALGORITHM

  assert(true, "*** Warning: P_nominal = " + String(0.0, 6, 0, true) + ", but this value will be ignored.");
*/
void RenewableSources_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  static const MMC_DEFSTRINGLIT(tmp250,25,"*** Warning: P_nominal = ");
  modelica_string tmp251;
  modelica_metatype tmpMeta252;
  static const MMC_DEFSTRINGLIT(tmp253,33,", but this value will be ignored.");
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  if(!tmp255)
  {
    if(!1 /* true */)
    {
      tmp251 = modelica_real_to_modelica_string(0.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta252 = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      tmpMeta254 = stringAppend(tmpMeta252,MMC_REFSTRINGLIT(tmp253));
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Interfaces/Load.mo",74,5,75,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta254));
        }
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1798
type: ALGORITHM

  assert(abs(winTur.table[1,2]) < 1e-15, "First data point of performance table must be at cut-in wind speed,
   and be equal to 0 Watts.
   Received + " + String(winTur.table[1,1], 6, 0, true) + " m/s with " + String(winTur.table[1,2], 6, 0, true) + " Watts");
*/
void RenewableSources_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,110,"First data point of performance table must be at cut-in wind speed,\n   and be equal to 0 Watts.\n   Received + ");
  modelica_string tmp258;
  modelica_metatype tmpMeta259;
  static const MMC_DEFSTRINGLIT(tmp260,10," m/s with ");
  modelica_metatype tmpMeta261;
  modelica_string tmp262;
  modelica_metatype tmpMeta263;
  static const MMC_DEFSTRINGLIT(tmp264,6," Watts");
  modelica_metatype tmpMeta265;
  static int tmp266 = 0;
  {
    tmp256 = Less(fabs((data->simulationInfo->realParameter[1179] /* winTur.table[1,2] PARAM */)),1e-15);
    if(!tmp256)
    {
      tmp258 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1178] /* winTur.table[1,1] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta259 = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      tmpMeta261 = stringAppend(tmpMeta259,MMC_REFSTRINGLIT(tmp260));
      tmp262 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1179] /* winTur.table[1,2] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta263 = stringAppend(tmpMeta261,tmp262);
      tmpMeta265 = stringAppend(tmpMeta263,MMC_REFSTRINGLIT(tmp264));
      {
        const char* assert_cond = "(abs(winTur.table[1,2]) < 1e-15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/BaseClasses/WindTurbine/PartialWindTurbine.mo",37,3,40,85,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta265));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/BaseClasses/WindTurbine/PartialWindTurbine.mo",37,3,40,85,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta265));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1797
type: ALGORITHM

  assert(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5), "In RenewableSources.weaDat.chePre: Weather data atmospheric pressure out of bounds.
   PIn = " + String(weaDat.pAtmSel.p, 6, 0, true));
*/
void RenewableSources_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,93,"In RenewableSources.weaDat.chePre: Weather data atmospheric pressure out of bounds.\n   PIn = ");
  modelica_string tmp270;
  modelica_metatype tmpMeta271;
  static int tmp272 = 0;
  {
    tmp267 = Greater((data->simulationInfo->realParameter[1126] /* weaDat.pAtmSel.p PARAM */),3100.0);
    tmp268 = Less((data->simulationInfo->realParameter[1126] /* weaDat.pAtmSel.p PARAM */),1.2e5);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1126] /* weaDat.pAtmSel.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta271 = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        const char* assert_cond = "(noEvent(weaDat.pAtmSel.p > 3100.0) and noEvent(weaDat.pAtmSel.p < 1.2e5))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta271));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/CheckPressure.mo",17,3,18,88,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta271));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1796
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim), "In RenewableSources.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTim.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void RenewableSources_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,129,"In RenewableSources.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\n    The simulation time ");
  modelica_string tmp275;
  modelica_metatype tmpMeta276;
  static const MMC_DEFSTRINGLIT(tmp277,29," is less than the start time ");
  modelica_metatype tmpMeta278;
  modelica_string tmp279;
  modelica_metatype tmpMeta280;
  static const MMC_DEFSTRINGLIT(tmp281,26," of the weather data file.");
  modelica_metatype tmpMeta282;
  static int tmp283 = 0;
  {
    tmp273 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[1095] /* weaDat.conTim.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[127] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp273))
    {
      tmp275 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta276 = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      tmpMeta278 = stringAppend(tmpMeta276,MMC_REFSTRINGLIT(tmp277));
      tmp279 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1095] /* weaDat.conTim.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta280 = stringAppend(tmpMeta278,tmp279);
      tmpMeta282 = stringAppend(tmpMeta280,MMC_REFSTRINGLIT(tmp281));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time >= weaDat.conTim.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",28,3,32,26,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta282));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",28,3,32,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta282));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1795
type: ALGORITHM

  assert(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0), "In RenewableSources.weaDat.conTim: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTim.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void RenewableSources_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1795};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,129,"In RenewableSources.weaDat.conTim: Insufficient weather data provided for the desired simulation period.\n    The simulation time ");
  modelica_string tmp286;
  modelica_metatype tmpMeta287;
  static const MMC_DEFSTRINGLIT(tmp288,22," exceeds the end time ");
  modelica_metatype tmpMeta289;
  modelica_string tmp290;
  modelica_metatype tmpMeta291;
  static const MMC_DEFSTRINGLIT(tmp292,26," of the weather data file.");
  modelica_metatype tmpMeta293;
  static int tmp294 = 0;
  {
    tmp284 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[1094] /* weaDat.conTim.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[127] /* weaDat.conTim.canRepeatWeatherFile PARAM */) || tmp284))
    {
      tmp286 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta287 = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      tmpMeta289 = stringAppend(tmpMeta287,MMC_REFSTRINGLIT(tmp288));
      tmp290 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1094] /* weaDat.conTim.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta291 = stringAppend(tmpMeta289,tmp290);
      tmpMeta293 = stringAppend(tmpMeta291,MMC_REFSTRINGLIT(tmp292));
      {
        const char* assert_cond = "(weaDat.conTim.canRepeatWeatherFile or noEvent(time - weaDat.conTim.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",22,3,26,26,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta293));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",22,3,26,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta293));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1794
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim), "In RenewableSources.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " is less than the start time " + String(weaDat.conTimMin.weaDatStaTim, 6, 0, true) + " of the weather data file.");
*/
void RenewableSources_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  modelica_boolean tmp295;
  static const MMC_DEFSTRINGLIT(tmp296,132,"In RenewableSources.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\n    The simulation time ");
  modelica_string tmp297;
  modelica_metatype tmpMeta298;
  static const MMC_DEFSTRINGLIT(tmp299,29," is less than the start time ");
  modelica_metatype tmpMeta300;
  modelica_string tmp301;
  modelica_metatype tmpMeta302;
  static const MMC_DEFSTRINGLIT(tmp303,26," of the weather data file.");
  modelica_metatype tmpMeta304;
  static int tmp305 = 0;
  {
    tmp295 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realParameter[1098] /* weaDat.conTimMin.weaDatStaTim PARAM */));
    if(!((data->simulationInfo->booleanParameter[128] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp295))
    {
      tmp297 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta298 = stringAppend(MMC_REFSTRINGLIT(tmp296),tmp297);
      tmpMeta300 = stringAppend(tmpMeta298,MMC_REFSTRINGLIT(tmp299));
      tmp301 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1098] /* weaDat.conTimMin.weaDatStaTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta302 = stringAppend(tmpMeta300,tmp301);
      tmpMeta304 = stringAppend(tmpMeta302,MMC_REFSTRINGLIT(tmp303));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time >= weaDat.conTimMin.weaDatStaTim))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",28,3,32,26,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",28,3,32,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1793
type: ALGORITHM

  assert(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0), "In RenewableSources.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.
    The simulation time " + String(time, 6, 0, true) + " exceeds the end time " + String(weaDat.conTimMin.weaDatEndTim, 6, 0, true) + " of the weather data file.");
*/
void RenewableSources_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,132,"In RenewableSources.weaDat.conTimMin: Insufficient weather data provided for the desired simulation period.\n    The simulation time ");
  modelica_string tmp308;
  modelica_metatype tmpMeta309;
  static const MMC_DEFSTRINGLIT(tmp310,22," exceeds the end time ");
  modelica_metatype tmpMeta311;
  modelica_string tmp312;
  modelica_metatype tmpMeta313;
  static const MMC_DEFSTRINGLIT(tmp314,26," of the weather data file.");
  modelica_metatype tmpMeta315;
  static int tmp316 = 0;
  {
    tmp306 = Less(data->localData[0]->timeValue - (data->simulationInfo->realParameter[1097] /* weaDat.conTimMin.weaDatEndTim PARAM */),1800.0);
    if(!((data->simulationInfo->booleanParameter[128] /* weaDat.conTimMin.canRepeatWeatherFile PARAM */) || tmp306))
    {
      tmp308 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta309 = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      tmpMeta311 = stringAppend(tmpMeta309,MMC_REFSTRINGLIT(tmp310));
      tmp312 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[1097] /* weaDat.conTimMin.weaDatEndTim PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta313 = stringAppend(tmpMeta311,tmp312);
      tmpMeta315 = stringAppend(tmpMeta313,MMC_REFSTRINGLIT(tmp314));
      {
        const char* assert_cond = "(weaDat.conTimMin.canRepeatWeatherFile or noEvent(time - weaDat.conTimMin.weaDatEndTim < 1800.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",22,3,26,26,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/BoundaryConditions/WeatherData/BaseClasses/ConvertTime.mo",22,3,26,26,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1792
type: ALGORITHM

  assert(line8.L >= 0.0 and line8.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp320 = 0;
  {
    tmp317 = GreaterEq((data->simulationInfo->realParameter[288] /* line8.L PARAM */),0.0);
    tmp318 = GreaterEq((data->simulationInfo->realParameter[291] /* line8.R PARAM */),0.0);
    if(!(tmp317 && tmp318))
    {
      {
        const char* assert_cond = "(line8.L >= 0.0 and line8.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp319)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp319)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1791
type: ALGORITHM

  assert(line7.L >= 0.0 and line7.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp324 = 0;
  {
    tmp321 = GreaterEq((data->simulationInfo->realParameter[256] /* line7.L PARAM */),0.0);
    tmp322 = GreaterEq((data->simulationInfo->realParameter[259] /* line7.R PARAM */),0.0);
    if(!(tmp321 && tmp322))
    {
      {
        const char* assert_cond = "(line7.L >= 0.0 and line7.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp323)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp323)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1790
type: ALGORITHM

  assert(line6.L >= 0.0 and line6.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp328 = 0;
  {
    tmp325 = GreaterEq((data->simulationInfo->realParameter[224] /* line6.L PARAM */),0.0);
    tmp326 = GreaterEq((data->simulationInfo->realParameter[227] /* line6.R PARAM */),0.0);
    if(!(tmp325 && tmp326))
    {
      {
        const char* assert_cond = "(line6.L >= 0.0 and line6.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp327)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp327)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1789
type: ALGORITHM

  assert(line5.L >= 0.0 and line5.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp332 = 0;
  {
    tmp329 = GreaterEq((data->simulationInfo->realParameter[192] /* line5.L PARAM */),0.0);
    tmp330 = GreaterEq((data->simulationInfo->realParameter[195] /* line5.R PARAM */),0.0);
    if(!(tmp329 && tmp330))
    {
      {
        const char* assert_cond = "(line5.L >= 0.0 and line5.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp331)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp331)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1788
type: ALGORITHM

  assert(line4.L >= 0.0 and line4.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp336 = 0;
  {
    tmp333 = GreaterEq((data->simulationInfo->realParameter[160] /* line4.L PARAM */),0.0);
    tmp334 = GreaterEq((data->simulationInfo->realParameter[163] /* line4.R PARAM */),0.0);
    if(!(tmp333 && tmp334))
    {
      {
        const char* assert_cond = "(line4.L >= 0.0 and line4.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp335)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp335)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1787
type: ALGORITHM

  assert(line3.L >= 0.0 and line3.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp340 = 0;
  {
    tmp337 = GreaterEq((data->simulationInfo->realParameter[128] /* line3.L PARAM */),0.0);
    tmp338 = GreaterEq((data->simulationInfo->realParameter[131] /* line3.R PARAM */),0.0);
    if(!(tmp337 && tmp338))
    {
      {
        const char* assert_cond = "(line3.L >= 0.0 and line3.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp339)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp339)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1786
type: ALGORITHM

  assert(line2.L >= 0.0 and line2.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  modelica_boolean tmp341;
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp344 = 0;
  {
    tmp341 = GreaterEq((data->simulationInfo->realParameter[96] /* line2.L PARAM */),0.0);
    tmp342 = GreaterEq((data->simulationInfo->realParameter[99] /* line2.R PARAM */),0.0);
    if(!(tmp341 && tmp342))
    {
      {
        const char* assert_cond = "(line2.L >= 0.0 and line2.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp343)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp343)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1785
type: ALGORITHM

  assert(line1.L >= 0.0 and line1.R >= 0.0, "The parameters R,L,C must be positive. Check cable properties and size.");
*/
void RenewableSources_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,71,"The parameters R,L,C must be positive. Check cable properties and size.");
  static int tmp348 = 0;
  {
    tmp345 = GreaterEq((data->simulationInfo->realParameter[64] /* line1.L PARAM */),0.0);
    tmp346 = GreaterEq((data->simulationInfo->realParameter[67] /* line1.R PARAM */),0.0);
    if(!(tmp345 && tmp346))
    {
      {
        const char* assert_cond = "(line1.L >= 0.0 and line1.R >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp347)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialBaseLine.mo",74,3,74,108,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp347)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1784
type: ALGORITHM

  assert(line1.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  modelica_boolean tmp349;
  static const MMC_DEFSTRINGLIT(tmp350,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp351 = 0;
  {
    tmp349 = GreaterEq((data->localData[0]->realVars[643] /* line1.line.R_actual variable */),0.0);
    if(!tmp349)
    {
      {
        const char* assert_cond = "(line1.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp350)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp350)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1783
type: ALGORITHM

  assert(line2.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp354 = 0;
  {
    tmp352 = GreaterEq((data->localData[0]->realVars[654] /* line2.line.R_actual variable */),0.0);
    if(!tmp352)
    {
      {
        const char* assert_cond = "(line2.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp353)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp353)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1782
type: ALGORITHM

  assert(line3.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  modelica_boolean tmp355;
  static const MMC_DEFSTRINGLIT(tmp356,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp357 = 0;
  {
    tmp355 = GreaterEq((data->localData[0]->realVars[665] /* line3.line.R_actual variable */),0.0);
    if(!tmp355)
    {
      {
        const char* assert_cond = "(line3.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp356)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp356)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1781
type: ALGORITHM

  assert(line4.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp360 = 0;
  {
    tmp358 = GreaterEq((data->localData[0]->realVars[676] /* line4.line.R_actual variable */),0.0);
    if(!tmp358)
    {
      {
        const char* assert_cond = "(line4.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp359)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp359)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1780
type: ALGORITHM

  assert(line5.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp363 = 0;
  {
    tmp361 = GreaterEq((data->localData[0]->realVars[687] /* line5.line.R_actual variable */),0.0);
    if(!tmp361)
    {
      {
        const char* assert_cond = "(line5.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp362)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp362)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1779
type: ALGORITHM

  assert(line6.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp366 = 0;
  {
    tmp364 = GreaterEq((data->localData[0]->realVars[698] /* line6.line.R_actual variable */),0.0);
    if(!tmp364)
    {
      {
        const char* assert_cond = "(line6.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp365)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp365)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1778
type: ALGORITHM

  assert(line7.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  modelica_boolean tmp367;
  static const MMC_DEFSTRINGLIT(tmp368,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp369 = 0;
  {
    tmp367 = GreaterEq((data->localData[0]->realVars[709] /* line7.line.R_actual variable */),0.0);
    if(!tmp367)
    {
      {
        const char* assert_cond = "(line7.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp368)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp368)));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 1777
type: ALGORITHM

  assert(line8.line.R_actual >= 0.0, "The value of R_actual must be positive, check reference and actual temperatures");
*/
void RenewableSources_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  modelica_boolean tmp370;
  static const MMC_DEFSTRINGLIT(tmp371,79,"The value of R_actual must be positive, check reference and actual temperatures");
  static int tmp372 = 0;
  {
    tmp370 = GreaterEq((data->localData[0]->realVars[720] /* line8.line.R_actual variable */),0.0);
    if(!tmp370)
    {
      {
        const char* assert_cond = "(line8.line.R_actual >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp371)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/hari/Downloads/Buildings-v11.0.0/Buildings 11.0.0/Electrical/Transmission/BaseClasses/PartialTwoPortRLC.mo",22,3,23,86,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp371)));
        }
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void RenewableSources_functionInitialEquations_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  RenewableSources_eqFunction_963(data, threadData);
  RenewableSources_eqFunction_964(data, threadData);
  RenewableSources_eqFunction_4096(data, threadData);
  RenewableSources_eqFunction_966(data, threadData);
  RenewableSources_eqFunction_4014(data, threadData);
  RenewableSources_eqFunction_4015(data, threadData);
  RenewableSources_eqFunction_4018(data, threadData);
  RenewableSources_eqFunction_970(data, threadData);
  RenewableSources_eqFunction_3726(data, threadData);
  RenewableSources_eqFunction_972(data, threadData);
  RenewableSources_eqFunction_973(data, threadData);
  RenewableSources_eqFunction_3729(data, threadData);
  RenewableSources_eqFunction_3730(data, threadData);
  RenewableSources_eqFunction_4016(data, threadData);
  RenewableSources_eqFunction_977(data, threadData);
  RenewableSources_eqFunction_978(data, threadData);
  RenewableSources_eqFunction_4100(data, threadData);
  RenewableSources_eqFunction_4101(data, threadData);
  RenewableSources_eqFunction_981(data, threadData);
  RenewableSources_eqFunction_4332(data, threadData);
  RenewableSources_eqFunction_4333(data, threadData);
  RenewableSources_eqFunction_984(data, threadData);
  RenewableSources_eqFunction_4336(data, threadData);
  RenewableSources_eqFunction_986(data, threadData);
  RenewableSources_eqFunction_4851(data, threadData);
  RenewableSources_eqFunction_3686(data, threadData);
  RenewableSources_eqFunction_4338(data, threadData);
  RenewableSources_eqFunction_4339(data, threadData);
  RenewableSources_eqFunction_4352(data, threadData);
  RenewableSources_eqFunction_4350(data, threadData);
  RenewableSources_eqFunction_4353(data, threadData);
  RenewableSources_eqFunction_4348(data, threadData);
  RenewableSources_eqFunction_4351(data, threadData);
  RenewableSources_eqFunction_4346(data, threadData);
  RenewableSources_eqFunction_4349(data, threadData);
  RenewableSources_eqFunction_4344(data, threadData);
  RenewableSources_eqFunction_4347(data, threadData);
  RenewableSources_eqFunction_4342(data, threadData);
  RenewableSources_eqFunction_4345(data, threadData);
  RenewableSources_eqFunction_4341(data, threadData);
  RenewableSources_eqFunction_4343(data, threadData);
  RenewableSources_eqFunction_4340(data, threadData);
  RenewableSources_eqFunction_4359(data, threadData);
  RenewableSources_eqFunction_4358(data, threadData);
  RenewableSources_eqFunction_4357(data, threadData);
  RenewableSources_eqFunction_4361(data, threadData);
  RenewableSources_eqFunction_4356(data, threadData);
  RenewableSources_eqFunction_4355(data, threadData);
  RenewableSources_eqFunction_4354(data, threadData);
  RenewableSources_eqFunction_4360(data, threadData);
  RenewableSources_eqFunction_4853(data, threadData);
  RenewableSources_eqFunction_4867(data, threadData);
  RenewableSources_eqFunction_4865(data, threadData);
  RenewableSources_eqFunction_4863(data, threadData);
  RenewableSources_eqFunction_4866(data, threadData);
  RenewableSources_eqFunction_4861(data, threadData);
  RenewableSources_eqFunction_4864(data, threadData);
  RenewableSources_eqFunction_4859(data, threadData);
  RenewableSources_eqFunction_4862(data, threadData);
  RenewableSources_eqFunction_4857(data, threadData);
  RenewableSources_eqFunction_4860(data, threadData);
  RenewableSources_eqFunction_4855(data, threadData);
  RenewableSources_eqFunction_4858(data, threadData);
  RenewableSources_eqFunction_4854(data, threadData);
  RenewableSources_eqFunction_4856(data, threadData);
  RenewableSources_eqFunction_4873(data, threadData);
  RenewableSources_eqFunction_4872(data, threadData);
  RenewableSources_eqFunction_4871(data, threadData);
  RenewableSources_eqFunction_4875(data, threadData);
  RenewableSources_eqFunction_4870(data, threadData);
  RenewableSources_eqFunction_4869(data, threadData);
  RenewableSources_eqFunction_4868(data, threadData);
  RenewableSources_eqFunction_4874(data, threadData);
  RenewableSources_eqFunction_3675(data, threadData);
  RenewableSources_eqFunction_4362(data, threadData);
  RenewableSources_eqFunction_4017(data, threadData);
  RenewableSources_eqFunction_4363(data, threadData);
  RenewableSources_eqFunction_4364(data, threadData);
  RenewableSources_eqFunction_4365(data, threadData);
  RenewableSources_eqFunction_4366(data, threadData);
  RenewableSources_eqFunction_4877(data, threadData);
  RenewableSources_eqFunction_4878(data, threadData);
  RenewableSources_eqFunction_4879(data, threadData);
  RenewableSources_eqFunction_4880(data, threadData);
  RenewableSources_eqFunction_4881(data, threadData);
  RenewableSources_eqFunction_1048(data, threadData);
  RenewableSources_eqFunction_4367(data, threadData);
  RenewableSources_eqFunction_1050(data, threadData);
  RenewableSources_eqFunction_4632(data, threadData);
  RenewableSources_eqFunction_4633(data, threadData);
  RenewableSources_eqFunction_3541(data, threadData);
  RenewableSources_eqFunction_3571(data, threadData);
  RenewableSources_eqFunction_1055(data, threadData);
  RenewableSources_eqFunction_1056(data, threadData);
  RenewableSources_eqFunction_1057(data, threadData);
  RenewableSources_eqFunction_1058(data, threadData);
  RenewableSources_eqFunction_1059(data, threadData);
  RenewableSources_eqFunction_1060(data, threadData);
  RenewableSources_eqFunction_1061(data, threadData);
  RenewableSources_eqFunction_1062(data, threadData);
  RenewableSources_eqFunction_1063(data, threadData);
  RenewableSources_eqFunction_1064(data, threadData);
  RenewableSources_eqFunction_1065(data, threadData);
  RenewableSources_eqFunction_1066(data, threadData);
  RenewableSources_eqFunction_1067(data, threadData);
  RenewableSources_eqFunction_1068(data, threadData);
  RenewableSources_eqFunction_1069(data, threadData);
  RenewableSources_eqFunction_1070(data, threadData);
  RenewableSources_eqFunction_1071(data, threadData);
  RenewableSources_eqFunction_1072(data, threadData);
  RenewableSources_eqFunction_1073(data, threadData);
  RenewableSources_eqFunction_1074(data, threadData);
  RenewableSources_eqFunction_1075(data, threadData);
  RenewableSources_eqFunction_1076(data, threadData);
  RenewableSources_eqFunction_1077(data, threadData);
  RenewableSources_eqFunction_1078(data, threadData);
  RenewableSources_eqFunction_1079(data, threadData);
  RenewableSources_eqFunction_1080(data, threadData);
  RenewableSources_eqFunction_1081(data, threadData);
  RenewableSources_eqFunction_1082(data, threadData);
  RenewableSources_eqFunction_1083(data, threadData);
  RenewableSources_eqFunction_1084(data, threadData);
  RenewableSources_eqFunction_1085(data, threadData);
  RenewableSources_eqFunction_1086(data, threadData);
  RenewableSources_eqFunction_1087(data, threadData);
  RenewableSources_eqFunction_1088(data, threadData);
  RenewableSources_eqFunction_1089(data, threadData);
  RenewableSources_eqFunction_1090(data, threadData);
  RenewableSources_eqFunction_1091(data, threadData);
  RenewableSources_eqFunction_1092(data, threadData);
  RenewableSources_eqFunction_1093(data, threadData);
  RenewableSources_eqFunction_1094(data, threadData);
  RenewableSources_eqFunction_3653(data, threadData);
  RenewableSources_eqFunction_3654(data, threadData);
  RenewableSources_eqFunction_1097(data, threadData);
  RenewableSources_eqFunction_1098(data, threadData);
  RenewableSources_eqFunction_3659(data, threadData);
  RenewableSources_eqFunction_3660(data, threadData);
  RenewableSources_eqFunction_1101(data, threadData);
  RenewableSources_eqFunction_1102(data, threadData);
  RenewableSources_eqFunction_1103(data, threadData);
  RenewableSources_eqFunction_3642(data, threadData);
  RenewableSources_eqFunction_3643(data, threadData);
  RenewableSources_eqFunction_1106(data, threadData);
  RenewableSources_eqFunction_1107(data, threadData);
  RenewableSources_eqFunction_3646(data, threadData);
  RenewableSources_eqFunction_3647(data, threadData);
  RenewableSources_eqFunction_1110(data, threadData);
  RenewableSources_eqFunction_1111(data, threadData);
  RenewableSources_eqFunction_1112(data, threadData);
  RenewableSources_eqFunction_3631(data, threadData);
  RenewableSources_eqFunction_3632(data, threadData);
  RenewableSources_eqFunction_1115(data, threadData);
  RenewableSources_eqFunction_1116(data, threadData);
  RenewableSources_eqFunction_3635(data, threadData);
  RenewableSources_eqFunction_3636(data, threadData);
  RenewableSources_eqFunction_1119(data, threadData);
  RenewableSources_eqFunction_1120(data, threadData);
  RenewableSources_eqFunction_1121(data, threadData);
  RenewableSources_eqFunction_3620(data, threadData);
  RenewableSources_eqFunction_3621(data, threadData);
  RenewableSources_eqFunction_1124(data, threadData);
  RenewableSources_eqFunction_1125(data, threadData);
  RenewableSources_eqFunction_3624(data, threadData);
  RenewableSources_eqFunction_3625(data, threadData);
  RenewableSources_eqFunction_1128(data, threadData);
  RenewableSources_eqFunction_1129(data, threadData);
  RenewableSources_eqFunction_1130(data, threadData);
  RenewableSources_eqFunction_3609(data, threadData);
  RenewableSources_eqFunction_3610(data, threadData);
  RenewableSources_eqFunction_1133(data, threadData);
  RenewableSources_eqFunction_1134(data, threadData);
  RenewableSources_eqFunction_3613(data, threadData);
  RenewableSources_eqFunction_3614(data, threadData);
  RenewableSources_eqFunction_1137(data, threadData);
  RenewableSources_eqFunction_1138(data, threadData);
  RenewableSources_eqFunction_1139(data, threadData);
  RenewableSources_eqFunction_3598(data, threadData);
  RenewableSources_eqFunction_3599(data, threadData);
  RenewableSources_eqFunction_1142(data, threadData);
  RenewableSources_eqFunction_1143(data, threadData);
  RenewableSources_eqFunction_3602(data, threadData);
  RenewableSources_eqFunction_3603(data, threadData);
  RenewableSources_eqFunction_1146(data, threadData);
  RenewableSources_eqFunction_1147(data, threadData);
  RenewableSources_eqFunction_1148(data, threadData);
  RenewableSources_eqFunction_3587(data, threadData);
  RenewableSources_eqFunction_3588(data, threadData);
  RenewableSources_eqFunction_1151(data, threadData);
  RenewableSources_eqFunction_3656(data, threadData);
  RenewableSources_eqFunction_3657(data, threadData);
  RenewableSources_eqFunction_1154(data, threadData);
  RenewableSources_eqFunction_3591(data, threadData);
  RenewableSources_eqFunction_3592(data, threadData);
  RenewableSources_eqFunction_1157(data, threadData);
  RenewableSources_eqFunction_1158(data, threadData);
  RenewableSources_eqFunction_1159(data, threadData);
  RenewableSources_eqFunction_1160(data, threadData);
  RenewableSources_eqFunction_1161(data, threadData);
  RenewableSources_eqFunction_1162(data, threadData);
  RenewableSources_eqFunction_1163(data, threadData);
  RenewableSources_eqFunction_1164(data, threadData);
  RenewableSources_eqFunction_1165(data, threadData);
  RenewableSources_eqFunction_1166(data, threadData);
  RenewableSources_eqFunction_1167(data, threadData);
  RenewableSources_eqFunction_1168(data, threadData);
  RenewableSources_eqFunction_1169(data, threadData);
  RenewableSources_eqFunction_1170(data, threadData);
  RenewableSources_eqFunction_1171(data, threadData);
  RenewableSources_eqFunction_1172(data, threadData);
  RenewableSources_eqFunction_1173(data, threadData);
  RenewableSources_eqFunction_1174(data, threadData);
  RenewableSources_eqFunction_1175(data, threadData);
  RenewableSources_eqFunction_1176(data, threadData);
  RenewableSources_eqFunction_1177(data, threadData);
  RenewableSources_eqFunction_1178(data, threadData);
  RenewableSources_eqFunction_1179(data, threadData);
  RenewableSources_eqFunction_1180(data, threadData);
  RenewableSources_eqFunction_1181(data, threadData);
  RenewableSources_eqFunction_1182(data, threadData);
  RenewableSources_eqFunction_1183(data, threadData);
  RenewableSources_eqFunction_1184(data, threadData);
  RenewableSources_eqFunction_1185(data, threadData);
  RenewableSources_eqFunction_1186(data, threadData);
  RenewableSources_eqFunction_1187(data, threadData);
  RenewableSources_eqFunction_1188(data, threadData);
  RenewableSources_eqFunction_1189(data, threadData);
  RenewableSources_eqFunction_1190(data, threadData);
  RenewableSources_eqFunction_1191(data, threadData);
  RenewableSources_eqFunction_1192(data, threadData);
  RenewableSources_eqFunction_1193(data, threadData);
  RenewableSources_eqFunction_1194(data, threadData);
  RenewableSources_eqFunction_1195(data, threadData);
  RenewableSources_eqFunction_1196(data, threadData);
  RenewableSources_eqFunction_1197(data, threadData);
  RenewableSources_eqFunction_1198(data, threadData);
  RenewableSources_eqFunction_1199(data, threadData);
  RenewableSources_eqFunction_1200(data, threadData);
  RenewableSources_eqFunction_1201(data, threadData);
  RenewableSources_eqFunction_1202(data, threadData);
  RenewableSources_eqFunction_1203(data, threadData);
  RenewableSources_eqFunction_1204(data, threadData);
  RenewableSources_eqFunction_1205(data, threadData);
  RenewableSources_eqFunction_1206(data, threadData);
  RenewableSources_eqFunction_1207(data, threadData);
  RenewableSources_eqFunction_1208(data, threadData);
  RenewableSources_eqFunction_1209(data, threadData);
  RenewableSources_eqFunction_1210(data, threadData);
  RenewableSources_eqFunction_1211(data, threadData);
  RenewableSources_eqFunction_1212(data, threadData);
  RenewableSources_eqFunction_1213(data, threadData);
  RenewableSources_eqFunction_1214(data, threadData);
  RenewableSources_eqFunction_1215(data, threadData);
  RenewableSources_eqFunction_1216(data, threadData);
  RenewableSources_eqFunction_1217(data, threadData);
  RenewableSources_eqFunction_1218(data, threadData);
  RenewableSources_eqFunction_1219(data, threadData);
  RenewableSources_eqFunction_1220(data, threadData);
  RenewableSources_eqFunction_1221(data, threadData);
  RenewableSources_eqFunction_1222(data, threadData);
  RenewableSources_eqFunction_1223(data, threadData);
  RenewableSources_eqFunction_1224(data, threadData);
  RenewableSources_eqFunction_1225(data, threadData);
  RenewableSources_eqFunction_1226(data, threadData);
  RenewableSources_eqFunction_1227(data, threadData);
  RenewableSources_eqFunction_1228(data, threadData);
  RenewableSources_eqFunction_1229(data, threadData);
  RenewableSources_eqFunction_1230(data, threadData);
  RenewableSources_eqFunction_1231(data, threadData);
  RenewableSources_eqFunction_1232(data, threadData);
  RenewableSources_eqFunction_1233(data, threadData);
  RenewableSources_eqFunction_1234(data, threadData);
  RenewableSources_eqFunction_1235(data, threadData);
  RenewableSources_eqFunction_1236(data, threadData);
  RenewableSources_eqFunction_1237(data, threadData);
  RenewableSources_eqFunction_1238(data, threadData);
  RenewableSources_eqFunction_1239(data, threadData);
  RenewableSources_eqFunction_1240(data, threadData);
  RenewableSources_eqFunction_1241(data, threadData);
  RenewableSources_eqFunction_1242(data, threadData);
  RenewableSources_eqFunction_1243(data, threadData);
  RenewableSources_eqFunction_1244(data, threadData);
  RenewableSources_eqFunction_1245(data, threadData);
  RenewableSources_eqFunction_1246(data, threadData);
  RenewableSources_eqFunction_1247(data, threadData);
  RenewableSources_eqFunction_1248(data, threadData);
  RenewableSources_eqFunction_1249(data, threadData);
  RenewableSources_eqFunction_1250(data, threadData);
  RenewableSources_eqFunction_1251(data, threadData);
  RenewableSources_eqFunction_1252(data, threadData);
  RenewableSources_eqFunction_1253(data, threadData);
  RenewableSources_eqFunction_1254(data, threadData);
  RenewableSources_eqFunction_1255(data, threadData);
  RenewableSources_eqFunction_1256(data, threadData);
  RenewableSources_eqFunction_1257(data, threadData);
  RenewableSources_eqFunction_1258(data, threadData);
  RenewableSources_eqFunction_1259(data, threadData);
  RenewableSources_eqFunction_1260(data, threadData);
  RenewableSources_eqFunction_1261(data, threadData);
  RenewableSources_eqFunction_1262(data, threadData);
  RenewableSources_eqFunction_1263(data, threadData);
  RenewableSources_eqFunction_1264(data, threadData);
  RenewableSources_eqFunction_1265(data, threadData);
  RenewableSources_eqFunction_1266(data, threadData);
  RenewableSources_eqFunction_1267(data, threadData);
  RenewableSources_eqFunction_1268(data, threadData);
  RenewableSources_eqFunction_1269(data, threadData);
  RenewableSources_eqFunction_1270(data, threadData);
  RenewableSources_eqFunction_1271(data, threadData);
  RenewableSources_eqFunction_1272(data, threadData);
  RenewableSources_eqFunction_1273(data, threadData);
  RenewableSources_eqFunction_1274(data, threadData);
  RenewableSources_eqFunction_1275(data, threadData);
  RenewableSources_eqFunction_1276(data, threadData);
  RenewableSources_eqFunction_1277(data, threadData);
  RenewableSources_eqFunction_1278(data, threadData);
  RenewableSources_eqFunction_1279(data, threadData);
  RenewableSources_eqFunction_1280(data, threadData);
  RenewableSources_eqFunction_1281(data, threadData);
  RenewableSources_eqFunction_1282(data, threadData);
  RenewableSources_eqFunction_1283(data, threadData);
  RenewableSources_eqFunction_1284(data, threadData);
  RenewableSources_eqFunction_1285(data, threadData);
  RenewableSources_eqFunction_1286(data, threadData);
  RenewableSources_eqFunction_1287(data, threadData);
  RenewableSources_eqFunction_1288(data, threadData);
  RenewableSources_eqFunction_1289(data, threadData);
  RenewableSources_eqFunction_1290(data, threadData);
  RenewableSources_eqFunction_1291(data, threadData);
  RenewableSources_eqFunction_1292(data, threadData);
  RenewableSources_eqFunction_1293(data, threadData);
  RenewableSources_eqFunction_1294(data, threadData);
  RenewableSources_eqFunction_1295(data, threadData);
  RenewableSources_eqFunction_1296(data, threadData);
  RenewableSources_eqFunction_1297(data, threadData);
  RenewableSources_eqFunction_1298(data, threadData);
  RenewableSources_eqFunction_1299(data, threadData);
  RenewableSources_eqFunction_1300(data, threadData);
  RenewableSources_eqFunction_1301(data, threadData);
  RenewableSources_eqFunction_1482(data, threadData);
  RenewableSources_eqFunction_4589(data, threadData);
  RenewableSources_eqFunction_1484(data, threadData);
  RenewableSources_eqFunction_4582(data, threadData);
  RenewableSources_eqFunction_4585(data, threadData);
  RenewableSources_eqFunction_4586(data, threadData);
  RenewableSources_eqFunction_4583(data, threadData);
  RenewableSources_eqFunction_4584(data, threadData);
  RenewableSources_eqFunction_4588(data, threadData);
  RenewableSources_eqFunction_4587(data, threadData);
  RenewableSources_eqFunction_1492(data, threadData);
  RenewableSources_eqFunction_4591(data, threadData);
  RenewableSources_eqFunction_4592(data, threadData);
  RenewableSources_eqFunction_4593(data, threadData);
  RenewableSources_eqFunction_4594(data, threadData);
  RenewableSources_eqFunction_4602(data, threadData);
  RenewableSources_eqFunction_4601(data, threadData);
  RenewableSources_eqFunction_4595(data, threadData);
  RenewableSources_eqFunction_4596(data, threadData);
  RenewableSources_eqFunction_4599(data, threadData);
  RenewableSources_eqFunction_4600(data, threadData);
  RenewableSources_eqFunction_4597(data, threadData);
  RenewableSources_eqFunction_4598(data, threadData);
  RenewableSources_eqFunction_4603(data, threadData);
  RenewableSources_eqFunction_4551(data, threadData);
  RenewableSources_eqFunction_4552(data, threadData);
  RenewableSources_eqFunction_4553(data, threadData);
  RenewableSources_eqFunction_1509(data, threadData);
  RenewableSources_eqFunction_4556(data, threadData);
  RenewableSources_eqFunction_4557(data, threadData);
  RenewableSources_eqFunction_4558(data, threadData);
  RenewableSources_eqFunction_1513(data, threadData);
  RenewableSources_eqFunction_4560(data, threadData);
  RenewableSources_eqFunction_4561(data, threadData);
  RenewableSources_eqFunction_4562(data, threadData);
  RenewableSources_eqFunction_4563(data, threadData);
  RenewableSources_eqFunction_4550(data, threadData);
  RenewableSources_eqFunction_4569(data, threadData);
  RenewableSources_eqFunction_4570(data, threadData);
  RenewableSources_eqFunction_4564(data, threadData);
  RenewableSources_eqFunction_4567(data, threadData);
  RenewableSources_eqFunction_4568(data, threadData);
  RenewableSources_eqFunction_4565(data, threadData);
  RenewableSources_eqFunction_4566(data, threadData);
  RenewableSources_eqFunction_4576(data, threadData);
  RenewableSources_eqFunction_4577(data, threadData);
  RenewableSources_eqFunction_4578(data, threadData);
  RenewableSources_eqFunction_4571(data, threadData);
  RenewableSources_eqFunction_4572(data, threadData);
  RenewableSources_eqFunction_4573(data, threadData);
  RenewableSources_eqFunction_4574(data, threadData);
  RenewableSources_eqFunction_4575(data, threadData);
  RenewableSources_eqFunction_4579(data, threadData);
  RenewableSources_eqFunction_4628(data, threadData);
  RenewableSources_eqFunction_4629(data, threadData);
  RenewableSources_eqFunction_4604(data, threadData);
  RenewableSources_eqFunction_4605(data, threadData);
  RenewableSources_eqFunction_1539(data, threadData);
  RenewableSources_eqFunction_1540(data, threadData);
  RenewableSources_eqFunction_1541(data, threadData);
  RenewableSources_eqFunction_1542(data, threadData);
  RenewableSources_eqFunction_4625(data, threadData);
  RenewableSources_eqFunction_4626(data, threadData);
  RenewableSources_eqFunction_4627(data, threadData);
  RenewableSources_eqFunction_4630(data, threadData);
  RenewableSources_eqFunction_4631(data, threadData);
  RenewableSources_eqFunction_1552(data, threadData);
  RenewableSources_eqFunction_1553(data, threadData);
  RenewableSources_eqFunction_4615(data, threadData);
  RenewableSources_eqFunction_4612(data, threadData);
  RenewableSources_eqFunction_4611(data, threadData);
  RenewableSources_eqFunction_4616(data, threadData);
  RenewableSources_eqFunction_4617(data, threadData);
  RenewableSources_eqFunction_4618(data, threadData);
  RenewableSources_eqFunction_4619(data, threadData);
  RenewableSources_eqFunction_1741(data, threadData);
  RenewableSources_eqFunction_1742(data, threadData);
  RenewableSources_eqFunction_1743(data, threadData);
  RenewableSources_eqFunction_1744(data, threadData);
  RenewableSources_eqFunction_1745(data, threadData);
  RenewableSources_eqFunction_1746(data, threadData);
  RenewableSources_eqFunction_1747(data, threadData);
  RenewableSources_eqFunction_1748(data, threadData);
  RenewableSources_eqFunction_1749(data, threadData);
  RenewableSources_eqFunction_1750(data, threadData);
  RenewableSources_eqFunction_1751(data, threadData);
  RenewableSources_eqFunction_1752(data, threadData);
  RenewableSources_eqFunction_1753(data, threadData);
  RenewableSources_eqFunction_1754(data, threadData);
  RenewableSources_eqFunction_1755(data, threadData);
  RenewableSources_eqFunction_1756(data, threadData);
  RenewableSources_eqFunction_1757(data, threadData);
  RenewableSources_eqFunction_1758(data, threadData);
  RenewableSources_eqFunction_1759(data, threadData);
  RenewableSources_eqFunction_3574(data, threadData);
  RenewableSources_eqFunction_3575(data, threadData);
  RenewableSources_eqFunction_1762(data, threadData);
  RenewableSources_eqFunction_1763(data, threadData);
  RenewableSources_eqFunction_1764(data, threadData);
  RenewableSources_eqFunction_1765(data, threadData);
  RenewableSources_eqFunction_1766(data, threadData);
  RenewableSources_eqFunction_1767(data, threadData);
  RenewableSources_eqFunction_1768(data, threadData);
  RenewableSources_eqFunction_1769(data, threadData);
  RenewableSources_eqFunction_1770(data, threadData);
  RenewableSources_eqFunction_1771(data, threadData);
  RenewableSources_eqFunction_1772(data, threadData);
  RenewableSources_eqFunction_1773(data, threadData);
  RenewableSources_eqFunction_1774(data, threadData);
  RenewableSources_eqFunction_1775(data, threadData);
  RenewableSources_eqFunction_5064(data, threadData);
  RenewableSources_eqFunction_1806(data, threadData);
  RenewableSources_eqFunction_1805(data, threadData);
  RenewableSources_eqFunction_1804(data, threadData);
  RenewableSources_eqFunction_1803(data, threadData);
  RenewableSources_eqFunction_1802(data, threadData);
  RenewableSources_eqFunction_1801(data, threadData);
  RenewableSources_eqFunction_1800(data, threadData);
  RenewableSources_eqFunction_1799(data, threadData);
  RenewableSources_eqFunction_1798(data, threadData);
  RenewableSources_eqFunction_1797(data, threadData);
  RenewableSources_eqFunction_1796(data, threadData);
  RenewableSources_eqFunction_1795(data, threadData);
  RenewableSources_eqFunction_1794(data, threadData);
  RenewableSources_eqFunction_1793(data, threadData);
  RenewableSources_eqFunction_1792(data, threadData);
  RenewableSources_eqFunction_1791(data, threadData);
  RenewableSources_eqFunction_1790(data, threadData);
  RenewableSources_eqFunction_1789(data, threadData);
  RenewableSources_eqFunction_1788(data, threadData);
  RenewableSources_eqFunction_1787(data, threadData);
  RenewableSources_eqFunction_1786(data, threadData);
  RenewableSources_eqFunction_1785(data, threadData);
  RenewableSources_eqFunction_1784(data, threadData);
  RenewableSources_eqFunction_1783(data, threadData);
  RenewableSources_eqFunction_1782(data, threadData);
  RenewableSources_eqFunction_1781(data, threadData);
  RenewableSources_eqFunction_1780(data, threadData);
  RenewableSources_eqFunction_1779(data, threadData);
  RenewableSources_eqFunction_1778(data, threadData);
  RenewableSources_eqFunction_1777(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif