#include "RenewableSources_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void RenewableSources_eqFunction_4148(DATA *data, threadData_t *threadData);


/*
equation index: 483
type: SIMPLE_ASSIGN
pv6.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) / (cos(pv6.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 1.253)
*/
void RenewableSources_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  tmp67 = 93.9 - (data->localData[0]->realVars[1228] /* pv6.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp68 = 1.253;
  if(tmp67 < 0.0 && tmp68 != 0.0)
  {
    tmp70 = modf(tmp68, &tmp71);
    
    if(tmp70 > 0.5)
    {
      tmp70 -= 1.0;
      tmp71 += 1.0;
    }
    else if(tmp70 < -0.5)
    {
      tmp70 += 1.0;
      tmp71 -= 1.0;
    }
    
    if(fabs(tmp70) < 1e-10)
      tmp69 = pow(tmp67, tmp71);
    else
    {
      tmp73 = modf(1.0/tmp68, &tmp72);
      if(tmp73 > 0.5)
      {
        tmp73 -= 1.0;
        tmp72 += 1.0;
      }
      else if(tmp73 < -0.5)
      {
        tmp73 += 1.0;
        tmp72 -= 1.0;
      }
      if(fabs(tmp73) < 1e-10 && ((unsigned long)tmp72 & 1))
      {
        tmp69 = -pow(-tmp67, tmp70)*pow(tmp67, tmp71);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
      }
    }
  }
  else
  {
    tmp69 = pow(tmp67, tmp68);
  }
  if(isnan(tmp69) || isinf(tmp69))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
  }
  (data->localData[0]->realVars[1227] /* pv6.HDifTil.relAirMas.relAirMas DUMMY_STATE */) = DIVISION_SIM(exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */))),cos((data->localData[0]->realVars[1229] /* pv6.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp69,"(93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes),"cos(pv6.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4151(DATA *data, threadData_t *threadData);


/*
equation index: 485
type: SIMPLE_ASSIGN
$DER.pv6.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) * (sin(pv6.HDifTil.relAirMas.zenLim) * $DER.pv6.HDifTil.relAirMas.zenLim + (-0.18794999999999998) * (93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 0.2529999999999999 * $DER.pv6.HDifTil.relAirMas.zenDeg / abs(93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 2.506) / (cos(pv6.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0
*/
void RenewableSources_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  tmp74 = 93.9 - (data->localData[0]->realVars[1228] /* pv6.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp75 = 0.2529999999999999;
  if(tmp74 < 0.0 && tmp75 != 0.0)
  {
    tmp77 = modf(tmp75, &tmp78);
    
    if(tmp77 > 0.5)
    {
      tmp77 -= 1.0;
      tmp78 += 1.0;
    }
    else if(tmp77 < -0.5)
    {
      tmp77 += 1.0;
      tmp78 -= 1.0;
    }
    
    if(fabs(tmp77) < 1e-10)
      tmp76 = pow(tmp74, tmp78);
    else
    {
      tmp80 = modf(1.0/tmp75, &tmp79);
      if(tmp80 > 0.5)
      {
        tmp80 -= 1.0;
        tmp79 += 1.0;
      }
      else if(tmp80 < -0.5)
      {
        tmp80 += 1.0;
        tmp79 -= 1.0;
      }
      if(fabs(tmp80) < 1e-10 && ((unsigned long)tmp79 & 1))
      {
        tmp76 = -pow(-tmp74, tmp77)*pow(tmp74, tmp78);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
      }
    }
  }
  else
  {
    tmp76 = pow(tmp74, tmp75);
  }
  if(isnan(tmp76) || isinf(tmp76))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
  }tmp81 = fabs(93.9 - (data->localData[0]->realVars[1228] /* pv6.HDifTil.relAirMas.zenDeg DUMMY_STATE */));
  tmp82 = 2.506;
  if(tmp81 < 0.0 && tmp82 != 0.0)
  {
    tmp84 = modf(tmp82, &tmp85);
    
    if(tmp84 > 0.5)
    {
      tmp84 -= 1.0;
      tmp85 += 1.0;
    }
    else if(tmp84 < -0.5)
    {
      tmp84 += 1.0;
      tmp85 -= 1.0;
    }
    
    if(fabs(tmp84) < 1e-10)
      tmp83 = pow(tmp81, tmp85);
    else
    {
      tmp87 = modf(1.0/tmp82, &tmp86);
      if(tmp87 > 0.5)
      {
        tmp87 -= 1.0;
        tmp86 += 1.0;
      }
      else if(tmp87 < -0.5)
      {
        tmp87 += 1.0;
        tmp86 -= 1.0;
      }
      if(fabs(tmp87) < 1e-10 && ((unsigned long)tmp86 & 1))
      {
        tmp83 = -pow(-tmp81, tmp84)*pow(tmp81, tmp85);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
      }
    }
  }
  else
  {
    tmp83 = pow(tmp81, tmp82);
  }
  if(isnan(tmp83) || isinf(tmp83))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
  }tmp88 = 93.9 - (data->localData[0]->realVars[1228] /* pv6.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp89 = 1.253;
  if(tmp88 < 0.0 && tmp89 != 0.0)
  {
    tmp91 = modf(tmp89, &tmp92);
    
    if(tmp91 > 0.5)
    {
      tmp91 -= 1.0;
      tmp92 += 1.0;
    }
    else if(tmp91 < -0.5)
    {
      tmp91 += 1.0;
      tmp92 -= 1.0;
    }
    
    if(fabs(tmp91) < 1e-10)
      tmp90 = pow(tmp88, tmp92);
    else
    {
      tmp94 = modf(1.0/tmp89, &tmp93);
      if(tmp94 > 0.5)
      {
        tmp94 -= 1.0;
        tmp93 += 1.0;
      }
      else if(tmp94 < -0.5)
      {
        tmp94 += 1.0;
        tmp93 -= 1.0;
      }
      if(fabs(tmp94) < 1e-10 && ((unsigned long)tmp93 & 1))
      {
        tmp90 = -pow(-tmp88, tmp91)*pow(tmp88, tmp92);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp88, tmp89);
      }
    }
  }
  else
  {
    tmp90 = pow(tmp88, tmp89);
  }
  if(isnan(tmp90) || isinf(tmp90))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp88, tmp89);
  }tmp95 = cos((data->localData[0]->realVars[1229] /* pv6.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp90,"(93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  (data->localData[0]->realVars[439] /* der(pv6.HDifTil.relAirMas.relAirMas) DUMMY_DER */) = (exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */)))) * (DIVISION_SIM((sin((data->localData[0]->realVars[1229] /* pv6.HDifTil.relAirMas.zenLim DUMMY_STATE */))) * ((data->localData[0]->realVars[441] /* der(pv6.HDifTil.relAirMas.zenLim) DUMMY_DER */)) + (-0.18794999999999998) * ((tmp76) * (DIVISION_SIM((data->localData[0]->realVars[440] /* der(pv6.HDifTil.relAirMas.zenDeg) DUMMY_DER */),tmp83,"abs(93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 2.506",equationIndexes))),(tmp95 * tmp95),"(cos(pv6.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv6.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0",equationIndexes));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4676(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3681(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4153(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4154(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4167(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4165(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4168(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4163(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4166(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4161(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4164(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4159(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4162(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4157(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4160(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4156(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4158(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4155(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4174(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4173(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4172(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4176(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4171(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4170(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4169(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4175(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4678(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4692(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4690(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4688(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4691(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4686(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4689(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4684(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4687(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4682(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4685(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4680(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4683(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4679(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4681(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4698(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4697(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4696(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4700(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4695(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4694(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4693(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4699(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3670(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4177(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3963(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4178(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4179(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4180(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4181(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4702(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4703(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4704(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4705(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4706(DATA *data, threadData_t *threadData);


/*
equation index: 547
type: SIMPLE_ASSIGN
$DER.pv6.panel.load.Q = $DER.PSol.u[6] * tan(-acos(pv6.panel.load.pf))
*/
void RenewableSources_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  modelica_real tmp96;
  tmp96 = (data->simulationInfo->realParameter[985] /* pv6.panel.load.pf PARAM */);
  if(!(tmp96 >= -1.0 && tmp96 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv6.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp96);
    }
  }
  (data->localData[0]->realVars[458] /* der(pv6.panel.load.Q) DUMMY_DER */) = ((data->localData[0]->realVars[12] /* der(PSol.u[6]) DUMMY_DER */)) * (tan((-acos(tmp96))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4182(DATA *data, threadData_t *threadData);


/*
equation index: 549
type: SIMPLE_ASSIGN
pv6.panel.load.Q = PSol.u[6] * tan(-acos(pv6.panel.load.pf))
*/
void RenewableSources_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  modelica_real tmp97;
  tmp97 = (data->simulationInfo->realParameter[985] /* pv6.panel.load.pf PARAM */);
  if(!(tmp97 >= -1.0 && tmp97 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv6.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp97);
    }
  }
  (data->localData[0]->realVars[1248] /* pv6.panel.load.Q DUMMY_STATE */) = ((data->localData[0]->realVars[628] /* PSol.u[6] DUMMY_STATE */)) * (tan((-acos(tmp97))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3964(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3965(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3966(DATA *data, threadData_t *threadData);


/*
equation index: 553
type: SIMPLE_ASSIGN
$DER.pv5.HDirTil.incAng.incAng.sol_s = cos(pv5.HDirTil.incAng.solHouAng.solHouAng) * $DER.pv5.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  (data->localData[0]->realVars[397] /* der(pv5.HDirTil.incAng.incAng.sol_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1175] /* pv5.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */))) * ((data->localData[0]->realVars[398] /* der(pv5.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
$DER.pv5.HDirTil.incAng.incAng.sol_c = (-sin(pv5.HDirTil.incAng.solHouAng.solHouAng)) * $DER.pv5.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  (data->localData[0]->realVars[396] /* der(pv5.HDirTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1175] /* pv5.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[398] /* der(pv5.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3816(DATA *data, threadData_t *threadData);


/*
equation index: 556
type: SIMPLE_ASSIGN
$DER.pv5.HDirTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv5.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv5.HDirTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv5.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  modelica_real tmp98;
  modelica_real tmp99;
  tmp98 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1167] /* pv5.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp99 = 1.0 - ((tmp98 * tmp98));
  if(!(tmp99 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv5.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp99);
    }
  }
  (data->localData[0]->realVars[393] /* der(pv5.HDirTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[1167] /* pv5.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[392] /* der(pv5.HDirTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp99),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv5.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
pv5.HDirTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv5.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  modelica_real tmp100;
  tmp100 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1167] /* pv5.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp100 >= -1.0 && tmp100 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv5.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp100);
    }
  }
  (data->localData[0]->realVars[1168] /* pv5.HDirTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp100);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3819(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3820(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3967(DATA *data, threadData_t *threadData);


/*
equation index: 561
type: SIMPLE_ASSIGN
pv5.HDirTil.H = max(0.0, cos(pv5.HDirTil.inc) * weaBus.HDirNor)
*/
void RenewableSources_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  (data->localData[0]->realVars[1165] /* pv5.HDirTil.H DUMMY_STATE */) = fmax(0.0,(cos((data->localData[0]->realVars[1166] /* pv5.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
$DER.pv5.HDirTil.incAng.incAng.dec_s = cos(pv5.HDirTil.incAng.decAng.decAng) * $DER.pv5.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  (data->localData[0]->realVars[395] /* der(pv5.HDirTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1168] /* pv5.HDirTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[393] /* der(pv5.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
$DER.pv5.HDirTil.incAng.incAng.dec_c = (-sin(pv5.HDirTil.incAng.decAng.decAng)) * $DER.pv5.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  (data->localData[0]->realVars[394] /* der(pv5.HDirTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1168] /* pv5.HDirTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[393] /* der(pv5.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4055(DATA *data, threadData_t *threadData);


/*
equation index: 565
type: SIMPLE_ASSIGN
$DER.pv5.HDirTil.H = if noEvent(0.0 > cos(pv5.HDirTil.inc) * weaBus.HDirNor) then 0.0 else cos(pv5.HDirTil.inc) * $DER.weaBus.HDirNor + (-sin(pv5.HDirTil.inc)) * $DER.pv5.HDirTil.inc * weaBus.HDirNor
*/
void RenewableSources_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  modelica_boolean tmp101;
  tmp101 = Greater(0.0,(cos((data->localData[0]->realVars[1166] /* pv5.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  (data->localData[0]->realVars[390] /* der(pv5.HDirTil.H) DUMMY_DER */) = (tmp101?0.0:(cos((data->localData[0]->realVars[1166] /* pv5.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[517] /* der(weaBus.HDirNor) DUMMY_DER */)) + (((-sin((data->localData[0]->realVars[1166] /* pv5.HDirTil.inc DUMMY_STATE */)))) * ((data->localData[0]->realVars[391] /* der(pv5.HDirTil.inc) DUMMY_DER */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3970(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3971(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3972(DATA *data, threadData_t *threadData);


/*
equation index: 569
type: SIMPLE_ASSIGN
$DER.pv5.HDifTil.incAng.incAng.sol_s = cos(pv5.HDifTil.incAng.solHouAng.solHouAng) * $DER.pv5.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[379] /* der(pv5.HDifTil.incAng.incAng.sol_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1155] /* pv5.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */))) * ((data->localData[0]->realVars[380] /* der(pv5.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
$DER.pv5.HDifTil.incAng.incAng.sol_c = (-sin(pv5.HDifTil.incAng.solHouAng.solHouAng)) * $DER.pv5.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[378] /* der(pv5.HDifTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1155] /* pv5.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[380] /* der(pv5.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3806(DATA *data, threadData_t *threadData);


/*
equation index: 572
type: SIMPLE_ASSIGN
$DER.pv5.HDifTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv5.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv5.HDifTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv5.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  modelica_real tmp102;
  modelica_real tmp103;
  tmp102 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1147] /* pv5.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp103 = 1.0 - ((tmp102 * tmp102));
  if(!(tmp103 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv5.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp103);
    }
  }
  (data->localData[0]->realVars[375] /* der(pv5.HDifTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[1147] /* pv5.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[374] /* der(pv5.HDifTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp103),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv5.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
pv5.HDifTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv5.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  modelica_real tmp104;
  tmp104 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1147] /* pv5.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp104 >= -1.0 && tmp104 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv5.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp104);
    }
  }
  (data->localData[0]->realVars[1148] /* pv5.HDifTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp104);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3809(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3810(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3973(DATA *data, threadData_t *threadData);


/*
equation index: 577
type: SIMPLE_ASSIGN
$DER.pv5.HDifTil.incAng.incAng.dec_s = cos(pv5.HDifTil.incAng.decAng.decAng) * $DER.pv5.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->realVars[377] /* der(pv5.HDifTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1148] /* pv5.HDifTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[375] /* der(pv5.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
$DER.pv5.HDifTil.incAng.incAng.dec_c = (-sin(pv5.HDifTil.incAng.decAng.decAng)) * $DER.pv5.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->realVars[376] /* der(pv5.HDifTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1148] /* pv5.HDifTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[375] /* der(pv5.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4060(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4061(DATA *data, threadData_t *threadData);


/*
equation index: 581
type: SIMPLE_ASSIGN
pv5.HDifTil.skyBri.extRadCor = 1.0 + 0.033 * cos(0.01721420632103996 * (weaBus.solTim / 86400.0 + 1.0))
*/
void RenewableSources_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->realVars[1160] /* pv5.HDifTil.skyBri.extRadCor DUMMY_STATE */) = 1.0 + (0.033) * (cos((0.01721420632103996) * (DIVISION_SIM((data->localData[0]->realVars[1356] /* weaBus.solTim DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 1.0)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4184(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4185(DATA *data, threadData_t *threadData);


/*
equation index: 584
type: SIMPLE_ASSIGN
pv5.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) / (cos(pv5.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 1.253)
*/
void RenewableSources_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  tmp105 = 93.9 - (data->localData[0]->realVars[1158] /* pv5.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp106 = 1.253;
  if(tmp105 < 0.0 && tmp106 != 0.0)
  {
    tmp108 = modf(tmp106, &tmp109);
    
    if(tmp108 > 0.5)
    {
      tmp108 -= 1.0;
      tmp109 += 1.0;
    }
    else if(tmp108 < -0.5)
    {
      tmp108 += 1.0;
      tmp109 -= 1.0;
    }
    
    if(fabs(tmp108) < 1e-10)
      tmp107 = pow(tmp105, tmp109);
    else
    {
      tmp111 = modf(1.0/tmp106, &tmp110);
      if(tmp111 > 0.5)
      {
        tmp111 -= 1.0;
        tmp110 += 1.0;
      }
      else if(tmp111 < -0.5)
      {
        tmp111 += 1.0;
        tmp110 -= 1.0;
      }
      if(fabs(tmp111) < 1e-10 && ((unsigned long)tmp110 & 1))
      {
        tmp107 = -pow(-tmp105, tmp108)*pow(tmp105, tmp109);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp105, tmp106);
      }
    }
  }
  else
  {
    tmp107 = pow(tmp105, tmp106);
  }
  if(isnan(tmp107) || isinf(tmp107))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp105, tmp106);
  }
  (data->localData[0]->realVars[1157] /* pv5.HDifTil.relAirMas.relAirMas DUMMY_STATE */) = DIVISION_SIM(exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */))),cos((data->localData[0]->realVars[1159] /* pv5.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp107,"(93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes),"cos(pv5.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4188(DATA *data, threadData_t *threadData);


/*
equation index: 586
type: SIMPLE_ASSIGN
$DER.pv5.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) * (sin(pv5.HDifTil.relAirMas.zenLim) * $DER.pv5.HDifTil.relAirMas.zenLim + (-0.18794999999999998) * (93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 0.2529999999999999 * $DER.pv5.HDifTil.relAirMas.zenDeg / abs(93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 2.506) / (cos(pv5.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0
*/
void RenewableSources_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  tmp112 = 93.9 - (data->localData[0]->realVars[1158] /* pv5.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp113 = 0.2529999999999999;
  if(tmp112 < 0.0 && tmp113 != 0.0)
  {
    tmp115 = modf(tmp113, &tmp116);
    
    if(tmp115 > 0.5)
    {
      tmp115 -= 1.0;
      tmp116 += 1.0;
    }
    else if(tmp115 < -0.5)
    {
      tmp115 += 1.0;
      tmp116 -= 1.0;
    }
    
    if(fabs(tmp115) < 1e-10)
      tmp114 = pow(tmp112, tmp116);
    else
    {
      tmp118 = modf(1.0/tmp113, &tmp117);
      if(tmp118 > 0.5)
      {
        tmp118 -= 1.0;
        tmp117 += 1.0;
      }
      else if(tmp118 < -0.5)
      {
        tmp118 += 1.0;
        tmp117 -= 1.0;
      }
      if(fabs(tmp118) < 1e-10 && ((unsigned long)tmp117 & 1))
      {
        tmp114 = -pow(-tmp112, tmp115)*pow(tmp112, tmp116);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp112, tmp113);
      }
    }
  }
  else
  {
    tmp114 = pow(tmp112, tmp113);
  }
  if(isnan(tmp114) || isinf(tmp114))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp112, tmp113);
  }tmp119 = fabs(93.9 - (data->localData[0]->realVars[1158] /* pv5.HDifTil.relAirMas.zenDeg DUMMY_STATE */));
  tmp120 = 2.506;
  if(tmp119 < 0.0 && tmp120 != 0.0)
  {
    tmp122 = modf(tmp120, &tmp123);
    
    if(tmp122 > 0.5)
    {
      tmp122 -= 1.0;
      tmp123 += 1.0;
    }
    else if(tmp122 < -0.5)
    {
      tmp122 += 1.0;
      tmp123 -= 1.0;
    }
    
    if(fabs(tmp122) < 1e-10)
      tmp121 = pow(tmp119, tmp123);
    else
    {
      tmp125 = modf(1.0/tmp120, &tmp124);
      if(tmp125 > 0.5)
      {
        tmp125 -= 1.0;
        tmp124 += 1.0;
      }
      else if(tmp125 < -0.5)
      {
        tmp125 += 1.0;
        tmp124 -= 1.0;
      }
      if(fabs(tmp125) < 1e-10 && ((unsigned long)tmp124 & 1))
      {
        tmp121 = -pow(-tmp119, tmp122)*pow(tmp119, tmp123);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp119, tmp120);
      }
    }
  }
  else
  {
    tmp121 = pow(tmp119, tmp120);
  }
  if(isnan(tmp121) || isinf(tmp121))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp119, tmp120);
  }tmp126 = 93.9 - (data->localData[0]->realVars[1158] /* pv5.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp127 = 1.253;
  if(tmp126 < 0.0 && tmp127 != 0.0)
  {
    tmp129 = modf(tmp127, &tmp130);
    
    if(tmp129 > 0.5)
    {
      tmp129 -= 1.0;
      tmp130 += 1.0;
    }
    else if(tmp129 < -0.5)
    {
      tmp129 += 1.0;
      tmp130 -= 1.0;
    }
    
    if(fabs(tmp129) < 1e-10)
      tmp128 = pow(tmp126, tmp130);
    else
    {
      tmp132 = modf(1.0/tmp127, &tmp131);
      if(tmp132 > 0.5)
      {
        tmp132 -= 1.0;
        tmp131 += 1.0;
      }
      else if(tmp132 < -0.5)
      {
        tmp132 += 1.0;
        tmp131 -= 1.0;
      }
      if(fabs(tmp132) < 1e-10 && ((unsigned long)tmp131 & 1))
      {
        tmp128 = -pow(-tmp126, tmp129)*pow(tmp126, tmp130);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp126, tmp127);
      }
    }
  }
  else
  {
    tmp128 = pow(tmp126, tmp127);
  }
  if(isnan(tmp128) || isinf(tmp128))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp126, tmp127);
  }tmp133 = cos((data->localData[0]->realVars[1159] /* pv5.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp128,"(93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  (data->localData[0]->realVars[382] /* der(pv5.HDifTil.relAirMas.relAirMas) DUMMY_DER */) = (exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */)))) * (DIVISION_SIM((sin((data->localData[0]->realVars[1159] /* pv5.HDifTil.relAirMas.zenLim DUMMY_STATE */))) * ((data->localData[0]->realVars[384] /* der(pv5.HDifTil.relAirMas.zenLim) DUMMY_DER */)) + (-0.18794999999999998) * ((tmp114) * (DIVISION_SIM((data->localData[0]->realVars[383] /* der(pv5.HDifTil.relAirMas.zenDeg) DUMMY_DER */),tmp121,"abs(93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 2.506",equationIndexes))),(tmp133 * tmp133),"(cos(pv5.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv5.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0",equationIndexes));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4711(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3682(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4190(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4191(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4204(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4202(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4205(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4200(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4203(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4198(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4201(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4196(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4199(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4194(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4197(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4193(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4195(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4192(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4211(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4210(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4209(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4213(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4208(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4207(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4206(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4212(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4713(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4727(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4725(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4723(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4726(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4721(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4724(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4719(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4722(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4717(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4720(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4715(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4718(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4714(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4716(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4733(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4732(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4731(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4735(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4730(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4729(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4728(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4734(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3671(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4214(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3974(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4215(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4216(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4217(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4218(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4737(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4738(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4739(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4740(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4741(DATA *data, threadData_t *threadData);


/*
equation index: 648
type: SIMPLE_ASSIGN
$DER.pv5.panel.load.Q = $DER.PSol.u[5] * tan(-acos(pv5.panel.load.pf))
*/
void RenewableSources_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  modelica_real tmp134;
  tmp134 = (data->simulationInfo->realParameter[918] /* pv5.panel.load.pf PARAM */);
  if(!(tmp134 >= -1.0 && tmp134 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv5.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp134);
    }
  }
  (data->localData[0]->realVars[401] /* der(pv5.panel.load.Q) DUMMY_DER */) = ((data->localData[0]->realVars[11] /* der(PSol.u[5]) DUMMY_DER */)) * (tan((-acos(tmp134))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4219(DATA *data, threadData_t *threadData);


/*
equation index: 650
type: SIMPLE_ASSIGN
pv5.panel.load.Q = PSol.u[5] * tan(-acos(pv5.panel.load.pf))
*/
void RenewableSources_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  modelica_real tmp135;
  tmp135 = (data->simulationInfo->realParameter[918] /* pv5.panel.load.pf PARAM */);
  if(!(tmp135 >= -1.0 && tmp135 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv5.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp135);
    }
  }
  (data->localData[0]->realVars[1178] /* pv5.panel.load.Q DUMMY_STATE */) = ((data->localData[0]->realVars[627] /* PSol.u[5] DUMMY_STATE */)) * (tan((-acos(tmp135))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3975(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3976(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3980(DATA *data, threadData_t *threadData);


/*
equation index: 654
type: SIMPLE_ASSIGN
$DER.pv4.HDirTil.incAng.incAng.sol_c = (-sin(pv4.HDirTil.incAng.solHouAng.solHouAng)) * $DER.pv4.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[340] /* der(pv4.HDirTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1105] /* pv4.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[341] /* der(pv4.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3796(DATA *data, threadData_t *threadData);


/*
equation index: 656
type: SIMPLE_ASSIGN
$DER.pv4.HDirTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv4.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv4.HDirTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv4.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  modelica_real tmp136;
  modelica_real tmp137;
  tmp136 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1097] /* pv4.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp137 = 1.0 - ((tmp136 * tmp136));
  if(!(tmp137 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv4.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp137);
    }
  }
  (data->localData[0]->realVars[337] /* der(pv4.HDirTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[1097] /* pv4.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[336] /* der(pv4.HDirTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp137),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv4.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
pv4.HDirTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv4.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  modelica_real tmp138;
  tmp138 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1097] /* pv4.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp138 >= -1.0 && tmp138 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv4.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp138);
    }
  }
  (data->localData[0]->realVars[1098] /* pv4.HDirTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp138);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3799(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3800(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3977(DATA *data, threadData_t *threadData);


/*
equation index: 661
type: SIMPLE_ASSIGN
pv4.HDirTil.H = max(0.0, cos(pv4.HDirTil.inc) * weaBus.HDirNor)
*/
void RenewableSources_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->realVars[1095] /* pv4.HDirTil.H DUMMY_STATE */) = fmax(0.0,(cos((data->localData[0]->realVars[1096] /* pv4.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
$DER.pv4.HDirTil.incAng.incAng.dec_s = cos(pv4.HDirTil.incAng.decAng.decAng) * $DER.pv4.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[339] /* der(pv4.HDirTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1098] /* pv4.HDirTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[337] /* der(pv4.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
$DER.pv4.HDirTil.incAng.incAng.dec_c = (-sin(pv4.HDirTil.incAng.decAng.decAng)) * $DER.pv4.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[338] /* der(pv4.HDirTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1098] /* pv4.HDirTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[337] /* der(pv4.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4065(DATA *data, threadData_t *threadData);


/*
equation index: 665
type: SIMPLE_ASSIGN
$DER.pv4.HDirTil.H = if noEvent(0.0 > cos(pv4.HDirTil.inc) * weaBus.HDirNor) then 0.0 else cos(pv4.HDirTil.inc) * $DER.weaBus.HDirNor + (-sin(pv4.HDirTil.inc)) * $DER.pv4.HDirTil.inc * weaBus.HDirNor
*/
void RenewableSources_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  modelica_boolean tmp139;
  tmp139 = Greater(0.0,(cos((data->localData[0]->realVars[1096] /* pv4.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  (data->localData[0]->realVars[334] /* der(pv4.HDirTil.H) DUMMY_DER */) = (tmp139?0.0:(cos((data->localData[0]->realVars[1096] /* pv4.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[517] /* der(weaBus.HDirNor) DUMMY_DER */)) + (((-sin((data->localData[0]->realVars[1096] /* pv4.HDirTil.inc DUMMY_STATE */)))) * ((data->localData[0]->realVars[335] /* der(pv4.HDirTil.inc) DUMMY_DER */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3981(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3982(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3985(DATA *data, threadData_t *threadData);


/*
equation index: 669
type: SIMPLE_ASSIGN
$DER.pv4.HDifTil.incAng.incAng.sol_c = (-sin(pv4.HDifTil.incAng.solHouAng.solHouAng)) * $DER.pv4.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[323] /* der(pv4.HDifTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1085] /* pv4.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[324] /* der(pv4.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3786(DATA *data, threadData_t *threadData);


/*
equation index: 671
type: SIMPLE_ASSIGN
$DER.pv4.HDifTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv4.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv4.HDifTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv4.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  modelica_real tmp140;
  modelica_real tmp141;
  tmp140 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1077] /* pv4.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp141 = 1.0 - ((tmp140 * tmp140));
  if(!(tmp141 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv4.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp141);
    }
  }
  (data->localData[0]->realVars[320] /* der(pv4.HDifTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[1077] /* pv4.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[319] /* der(pv4.HDifTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp141),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv4.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
pv4.HDifTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv4.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  modelica_real tmp142;
  tmp142 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1077] /* pv4.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp142 >= -1.0 && tmp142 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv4.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp142);
    }
  }
  (data->localData[0]->realVars[1078] /* pv4.HDifTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp142);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3789(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3790(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3983(DATA *data, threadData_t *threadData);


/*
equation index: 676
type: SIMPLE_ASSIGN
$DER.pv4.HDifTil.incAng.incAng.dec_s = cos(pv4.HDifTil.incAng.decAng.decAng) * $DER.pv4.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  (data->localData[0]->realVars[322] /* der(pv4.HDifTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1078] /* pv4.HDifTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[320] /* der(pv4.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
$DER.pv4.HDifTil.incAng.incAng.dec_c = (-sin(pv4.HDifTil.incAng.decAng.decAng)) * $DER.pv4.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[321] /* der(pv4.HDifTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1078] /* pv4.HDifTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[320] /* der(pv4.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4069(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4070(DATA *data, threadData_t *threadData);


/*
equation index: 680
type: SIMPLE_ASSIGN
pv4.HDifTil.skyBri.extRadCor = 1.0 + 0.033 * cos(0.01721420632103996 * (weaBus.solTim / 86400.0 + 1.0))
*/
void RenewableSources_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[1090] /* pv4.HDifTil.skyBri.extRadCor DUMMY_STATE */) = 1.0 + (0.033) * (cos((0.01721420632103996) * (DIVISION_SIM((data->localData[0]->realVars[1356] /* weaBus.solTim DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 1.0)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4221(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4222(DATA *data, threadData_t *threadData);


/*
equation index: 683
type: SIMPLE_ASSIGN
pv4.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) / (cos(pv4.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 1.253)
*/
void RenewableSources_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  tmp143 = 93.9 - (data->localData[0]->realVars[1088] /* pv4.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp144 = 1.253;
  if(tmp143 < 0.0 && tmp144 != 0.0)
  {
    tmp146 = modf(tmp144, &tmp147);
    
    if(tmp146 > 0.5)
    {
      tmp146 -= 1.0;
      tmp147 += 1.0;
    }
    else if(tmp146 < -0.5)
    {
      tmp146 += 1.0;
      tmp147 -= 1.0;
    }
    
    if(fabs(tmp146) < 1e-10)
      tmp145 = pow(tmp143, tmp147);
    else
    {
      tmp149 = modf(1.0/tmp144, &tmp148);
      if(tmp149 > 0.5)
      {
        tmp149 -= 1.0;
        tmp148 += 1.0;
      }
      else if(tmp149 < -0.5)
      {
        tmp149 += 1.0;
        tmp148 -= 1.0;
      }
      if(fabs(tmp149) < 1e-10 && ((unsigned long)tmp148 & 1))
      {
        tmp145 = -pow(-tmp143, tmp146)*pow(tmp143, tmp147);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
      }
    }
  }
  else
  {
    tmp145 = pow(tmp143, tmp144);
  }
  if(isnan(tmp145) || isinf(tmp145))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
  }
  (data->localData[0]->realVars[1087] /* pv4.HDifTil.relAirMas.relAirMas DUMMY_STATE */) = DIVISION_SIM(exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */))),cos((data->localData[0]->realVars[1089] /* pv4.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp145,"(93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes),"cos(pv4.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4225(DATA *data, threadData_t *threadData);


/*
equation index: 685
type: SIMPLE_ASSIGN
$DER.pv4.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) * (sin(pv4.HDifTil.relAirMas.zenLim) * $DER.pv4.HDifTil.relAirMas.zenLim + (-0.18794999999999998) * (93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 0.2529999999999999 * $DER.pv4.HDifTil.relAirMas.zenDeg / abs(93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 2.506) / (cos(pv4.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0
*/
void RenewableSources_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  tmp150 = 93.9 - (data->localData[0]->realVars[1088] /* pv4.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp151 = 0.2529999999999999;
  if(tmp150 < 0.0 && tmp151 != 0.0)
  {
    tmp153 = modf(tmp151, &tmp154);
    
    if(tmp153 > 0.5)
    {
      tmp153 -= 1.0;
      tmp154 += 1.0;
    }
    else if(tmp153 < -0.5)
    {
      tmp153 += 1.0;
      tmp154 -= 1.0;
    }
    
    if(fabs(tmp153) < 1e-10)
      tmp152 = pow(tmp150, tmp154);
    else
    {
      tmp156 = modf(1.0/tmp151, &tmp155);
      if(tmp156 > 0.5)
      {
        tmp156 -= 1.0;
        tmp155 += 1.0;
      }
      else if(tmp156 < -0.5)
      {
        tmp156 += 1.0;
        tmp155 -= 1.0;
      }
      if(fabs(tmp156) < 1e-10 && ((unsigned long)tmp155 & 1))
      {
        tmp152 = -pow(-tmp150, tmp153)*pow(tmp150, tmp154);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
      }
    }
  }
  else
  {
    tmp152 = pow(tmp150, tmp151);
  }
  if(isnan(tmp152) || isinf(tmp152))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
  }tmp157 = fabs(93.9 - (data->localData[0]->realVars[1088] /* pv4.HDifTil.relAirMas.zenDeg DUMMY_STATE */));
  tmp158 = 2.506;
  if(tmp157 < 0.0 && tmp158 != 0.0)
  {
    tmp160 = modf(tmp158, &tmp161);
    
    if(tmp160 > 0.5)
    {
      tmp160 -= 1.0;
      tmp161 += 1.0;
    }
    else if(tmp160 < -0.5)
    {
      tmp160 += 1.0;
      tmp161 -= 1.0;
    }
    
    if(fabs(tmp160) < 1e-10)
      tmp159 = pow(tmp157, tmp161);
    else
    {
      tmp163 = modf(1.0/tmp158, &tmp162);
      if(tmp163 > 0.5)
      {
        tmp163 -= 1.0;
        tmp162 += 1.0;
      }
      else if(tmp163 < -0.5)
      {
        tmp163 += 1.0;
        tmp162 -= 1.0;
      }
      if(fabs(tmp163) < 1e-10 && ((unsigned long)tmp162 & 1))
      {
        tmp159 = -pow(-tmp157, tmp160)*pow(tmp157, tmp161);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
      }
    }
  }
  else
  {
    tmp159 = pow(tmp157, tmp158);
  }
  if(isnan(tmp159) || isinf(tmp159))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
  }tmp164 = 93.9 - (data->localData[0]->realVars[1088] /* pv4.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp165 = 1.253;
  if(tmp164 < 0.0 && tmp165 != 0.0)
  {
    tmp167 = modf(tmp165, &tmp168);
    
    if(tmp167 > 0.5)
    {
      tmp167 -= 1.0;
      tmp168 += 1.0;
    }
    else if(tmp167 < -0.5)
    {
      tmp167 += 1.0;
      tmp168 -= 1.0;
    }
    
    if(fabs(tmp167) < 1e-10)
      tmp166 = pow(tmp164, tmp168);
    else
    {
      tmp170 = modf(1.0/tmp165, &tmp169);
      if(tmp170 > 0.5)
      {
        tmp170 -= 1.0;
        tmp169 += 1.0;
      }
      else if(tmp170 < -0.5)
      {
        tmp170 += 1.0;
        tmp169 -= 1.0;
      }
      if(fabs(tmp170) < 1e-10 && ((unsigned long)tmp169 & 1))
      {
        tmp166 = -pow(-tmp164, tmp167)*pow(tmp164, tmp168);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
      }
    }
  }
  else
  {
    tmp166 = pow(tmp164, tmp165);
  }
  if(isnan(tmp166) || isinf(tmp166))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
  }tmp171 = cos((data->localData[0]->realVars[1089] /* pv4.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp166,"(93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  (data->localData[0]->realVars[326] /* der(pv4.HDifTil.relAirMas.relAirMas) DUMMY_DER */) = (exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */)))) * (DIVISION_SIM((sin((data->localData[0]->realVars[1089] /* pv4.HDifTil.relAirMas.zenLim DUMMY_STATE */))) * ((data->localData[0]->realVars[328] /* der(pv4.HDifTil.relAirMas.zenLim) DUMMY_DER */)) + (-0.18794999999999998) * ((tmp152) * (DIVISION_SIM((data->localData[0]->realVars[327] /* der(pv4.HDifTil.relAirMas.zenDeg) DUMMY_DER */),tmp159,"abs(93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 2.506",equationIndexes))),(tmp171 * tmp171),"(cos(pv4.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv4.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0",equationIndexes));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4746(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3683(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4227(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4228(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4241(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4239(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4242(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4237(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4240(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4235(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4238(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4233(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4236(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4231(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4234(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4230(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4232(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4229(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4248(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4247(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4246(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4250(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4245(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4244(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4243(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4249(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4748(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4762(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4760(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4758(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4761(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4756(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4759(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4754(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4757(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4752(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4755(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4750(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4753(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4749(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4751(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4768(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4767(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4766(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4770(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4765(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4764(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4763(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4769(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3672(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4251(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3984(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4252(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4253(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4254(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4255(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4772(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4773(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4774(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4775(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4776(DATA *data, threadData_t *threadData);


/*
equation index: 747
type: SIMPLE_ASSIGN
$DER.pv4.panel.load.Q = $DER.PSol.u[4] * tan(-acos(pv4.panel.load.pf))
*/
void RenewableSources_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  modelica_real tmp172;
  tmp172 = (data->simulationInfo->realParameter[851] /* pv4.panel.load.pf PARAM */);
  if(!(tmp172 >= -1.0 && tmp172 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv4.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp172);
    }
  }
  (data->localData[0]->realVars[344] /* der(pv4.panel.load.Q) DUMMY_DER */) = ((data->localData[0]->realVars[10] /* der(PSol.u[4]) DUMMY_DER */)) * (tan((-acos(tmp172))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4256(DATA *data, threadData_t *threadData);


/*
equation index: 749
type: SIMPLE_ASSIGN
pv4.panel.load.Q = PSol.u[4] * tan(-acos(pv4.panel.load.pf))
*/
void RenewableSources_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  modelica_real tmp173;
  tmp173 = (data->simulationInfo->realParameter[851] /* pv4.panel.load.pf PARAM */);
  if(!(tmp173 >= -1.0 && tmp173 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv4.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp173);
    }
  }
  (data->localData[0]->realVars[1108] /* pv4.panel.load.Q DUMMY_STATE */) = ((data->localData[0]->realVars[626] /* PSol.u[4] DUMMY_STATE */)) * (tan((-acos(tmp173))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3986(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3987(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3988(DATA *data, threadData_t *threadData);


/*
equation index: 753
type: SIMPLE_ASSIGN
$DER.pv3.HDirTil.incAng.incAng.sol_s = cos(pv3.HDirTil.incAng.solHouAng.solHouAng) * $DER.pv3.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[285] /* der(pv3.HDirTil.incAng.incAng.sol_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1035] /* pv3.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */))) * ((data->localData[0]->realVars[286] /* der(pv3.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
$DER.pv3.HDirTil.incAng.incAng.sol_c = (-sin(pv3.HDirTil.incAng.solHouAng.solHouAng)) * $DER.pv3.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[284] /* der(pv3.HDirTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1035] /* pv3.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[286] /* der(pv3.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3776(DATA *data, threadData_t *threadData);


/*
equation index: 756
type: SIMPLE_ASSIGN
$DER.pv3.HDirTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv3.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv3.HDirTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv3.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  modelica_real tmp174;
  modelica_real tmp175;
  tmp174 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1027] /* pv3.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp175 = 1.0 - ((tmp174 * tmp174));
  if(!(tmp175 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv3.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp175);
    }
  }
  (data->localData[0]->realVars[281] /* der(pv3.HDirTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[1027] /* pv3.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[280] /* der(pv3.HDirTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp175),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv3.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
pv3.HDirTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv3.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  modelica_real tmp176;
  tmp176 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1027] /* pv3.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp176 >= -1.0 && tmp176 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv3.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp176);
    }
  }
  (data->localData[0]->realVars[1028] /* pv3.HDirTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp176);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3779(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3780(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3989(DATA *data, threadData_t *threadData);


/*
equation index: 761
type: SIMPLE_ASSIGN
pv3.HDirTil.H = max(0.0, cos(pv3.HDirTil.inc) * weaBus.HDirNor)
*/
void RenewableSources_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->realVars[1025] /* pv3.HDirTil.H DUMMY_STATE */) = fmax(0.0,(cos((data->localData[0]->realVars[1026] /* pv3.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
$DER.pv3.HDirTil.incAng.incAng.dec_s = cos(pv3.HDirTil.incAng.decAng.decAng) * $DER.pv3.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->realVars[283] /* der(pv3.HDirTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1028] /* pv3.HDirTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[281] /* der(pv3.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
$DER.pv3.HDirTil.incAng.incAng.dec_c = (-sin(pv3.HDirTil.incAng.decAng.decAng)) * $DER.pv3.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[282] /* der(pv3.HDirTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1028] /* pv3.HDirTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[281] /* der(pv3.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4075(DATA *data, threadData_t *threadData);


/*
equation index: 765
type: SIMPLE_ASSIGN
$DER.pv3.HDirTil.H = if noEvent(0.0 > cos(pv3.HDirTil.inc) * weaBus.HDirNor) then 0.0 else cos(pv3.HDirTil.inc) * $DER.weaBus.HDirNor + (-sin(pv3.HDirTil.inc)) * $DER.pv3.HDirTil.inc * weaBus.HDirNor
*/
void RenewableSources_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  modelica_boolean tmp177;
  tmp177 = Greater(0.0,(cos((data->localData[0]->realVars[1026] /* pv3.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  (data->localData[0]->realVars[278] /* der(pv3.HDirTil.H) DUMMY_DER */) = (tmp177?0.0:(cos((data->localData[0]->realVars[1026] /* pv3.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[517] /* der(weaBus.HDirNor) DUMMY_DER */)) + (((-sin((data->localData[0]->realVars[1026] /* pv3.HDirTil.inc DUMMY_STATE */)))) * ((data->localData[0]->realVars[279] /* der(pv3.HDirTil.inc) DUMMY_DER */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3992(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3993(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3994(DATA *data, threadData_t *threadData);


/*
equation index: 769
type: SIMPLE_ASSIGN
$DER.pv3.HDifTil.incAng.incAng.sol_s = cos(pv3.HDifTil.incAng.solHouAng.solHouAng) * $DER.pv3.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[267] /* der(pv3.HDifTil.incAng.incAng.sol_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1015] /* pv3.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */))) * ((data->localData[0]->realVars[268] /* der(pv3.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
$DER.pv3.HDifTil.incAng.incAng.sol_c = (-sin(pv3.HDifTil.incAng.solHouAng.solHouAng)) * $DER.pv3.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[266] /* der(pv3.HDifTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1015] /* pv3.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[268] /* der(pv3.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3766(DATA *data, threadData_t *threadData);


/*
equation index: 772
type: SIMPLE_ASSIGN
$DER.pv3.HDifTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv3.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv3.HDifTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv3.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  modelica_real tmp178;
  modelica_real tmp179;
  tmp178 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1007] /* pv3.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp179 = 1.0 - ((tmp178 * tmp178));
  if(!(tmp179 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv3.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp179);
    }
  }
  (data->localData[0]->realVars[263] /* der(pv3.HDifTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[1007] /* pv3.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[262] /* der(pv3.HDifTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp179),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv3.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
pv3.HDifTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv3.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  modelica_real tmp180;
  tmp180 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[1007] /* pv3.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp180 >= -1.0 && tmp180 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv3.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp180);
    }
  }
  (data->localData[0]->realVars[1008] /* pv3.HDifTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp180);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3769(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3770(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3995(DATA *data, threadData_t *threadData);


/*
equation index: 777
type: SIMPLE_ASSIGN
$DER.pv3.HDifTil.incAng.incAng.dec_s = cos(pv3.HDifTil.incAng.decAng.decAng) * $DER.pv3.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  (data->localData[0]->realVars[265] /* der(pv3.HDifTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[1008] /* pv3.HDifTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[263] /* der(pv3.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
$DER.pv3.HDifTil.incAng.incAng.dec_c = (-sin(pv3.HDifTil.incAng.decAng.decAng)) * $DER.pv3.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[264] /* der(pv3.HDifTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[1008] /* pv3.HDifTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[263] /* der(pv3.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4080(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4081(DATA *data, threadData_t *threadData);


/*
equation index: 781
type: SIMPLE_ASSIGN
pv3.HDifTil.skyBri.extRadCor = 1.0 + 0.033 * cos(0.01721420632103996 * (weaBus.solTim / 86400.0 + 1.0))
*/
void RenewableSources_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[1020] /* pv3.HDifTil.skyBri.extRadCor DUMMY_STATE */) = 1.0 + (0.033) * (cos((0.01721420632103996) * (DIVISION_SIM((data->localData[0]->realVars[1356] /* weaBus.solTim DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 1.0)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4258(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4259(DATA *data, threadData_t *threadData);


/*
equation index: 784
type: SIMPLE_ASSIGN
pv3.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) / (cos(pv3.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 1.253)
*/
void RenewableSources_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  tmp181 = 93.9 - (data->localData[0]->realVars[1018] /* pv3.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp182 = 1.253;
  if(tmp181 < 0.0 && tmp182 != 0.0)
  {
    tmp184 = modf(tmp182, &tmp185);
    
    if(tmp184 > 0.5)
    {
      tmp184 -= 1.0;
      tmp185 += 1.0;
    }
    else if(tmp184 < -0.5)
    {
      tmp184 += 1.0;
      tmp185 -= 1.0;
    }
    
    if(fabs(tmp184) < 1e-10)
      tmp183 = pow(tmp181, tmp185);
    else
    {
      tmp187 = modf(1.0/tmp182, &tmp186);
      if(tmp187 > 0.5)
      {
        tmp187 -= 1.0;
        tmp186 += 1.0;
      }
      else if(tmp187 < -0.5)
      {
        tmp187 += 1.0;
        tmp186 -= 1.0;
      }
      if(fabs(tmp187) < 1e-10 && ((unsigned long)tmp186 & 1))
      {
        tmp183 = -pow(-tmp181, tmp184)*pow(tmp181, tmp185);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp181, tmp182);
      }
    }
  }
  else
  {
    tmp183 = pow(tmp181, tmp182);
  }
  if(isnan(tmp183) || isinf(tmp183))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp181, tmp182);
  }
  (data->localData[0]->realVars[1017] /* pv3.HDifTil.relAirMas.relAirMas DUMMY_STATE */) = DIVISION_SIM(exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */))),cos((data->localData[0]->realVars[1019] /* pv3.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp183,"(93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes),"cos(pv3.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4262(DATA *data, threadData_t *threadData);


/*
equation index: 786
type: SIMPLE_ASSIGN
$DER.pv3.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) * (sin(pv3.HDifTil.relAirMas.zenLim) * $DER.pv3.HDifTil.relAirMas.zenLim + (-0.18794999999999998) * (93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 0.2529999999999999 * $DER.pv3.HDifTil.relAirMas.zenDeg / abs(93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 2.506) / (cos(pv3.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0
*/
void RenewableSources_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  tmp188 = 93.9 - (data->localData[0]->realVars[1018] /* pv3.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp189 = 0.2529999999999999;
  if(tmp188 < 0.0 && tmp189 != 0.0)
  {
    tmp191 = modf(tmp189, &tmp192);
    
    if(tmp191 > 0.5)
    {
      tmp191 -= 1.0;
      tmp192 += 1.0;
    }
    else if(tmp191 < -0.5)
    {
      tmp191 += 1.0;
      tmp192 -= 1.0;
    }
    
    if(fabs(tmp191) < 1e-10)
      tmp190 = pow(tmp188, tmp192);
    else
    {
      tmp194 = modf(1.0/tmp189, &tmp193);
      if(tmp194 > 0.5)
      {
        tmp194 -= 1.0;
        tmp193 += 1.0;
      }
      else if(tmp194 < -0.5)
      {
        tmp194 += 1.0;
        tmp193 -= 1.0;
      }
      if(fabs(tmp194) < 1e-10 && ((unsigned long)tmp193 & 1))
      {
        tmp190 = -pow(-tmp188, tmp191)*pow(tmp188, tmp192);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp188, tmp189);
      }
    }
  }
  else
  {
    tmp190 = pow(tmp188, tmp189);
  }
  if(isnan(tmp190) || isinf(tmp190))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp188, tmp189);
  }tmp195 = fabs(93.9 - (data->localData[0]->realVars[1018] /* pv3.HDifTil.relAirMas.zenDeg DUMMY_STATE */));
  tmp196 = 2.506;
  if(tmp195 < 0.0 && tmp196 != 0.0)
  {
    tmp198 = modf(tmp196, &tmp199);
    
    if(tmp198 > 0.5)
    {
      tmp198 -= 1.0;
      tmp199 += 1.0;
    }
    else if(tmp198 < -0.5)
    {
      tmp198 += 1.0;
      tmp199 -= 1.0;
    }
    
    if(fabs(tmp198) < 1e-10)
      tmp197 = pow(tmp195, tmp199);
    else
    {
      tmp201 = modf(1.0/tmp196, &tmp200);
      if(tmp201 > 0.5)
      {
        tmp201 -= 1.0;
        tmp200 += 1.0;
      }
      else if(tmp201 < -0.5)
      {
        tmp201 += 1.0;
        tmp200 -= 1.0;
      }
      if(fabs(tmp201) < 1e-10 && ((unsigned long)tmp200 & 1))
      {
        tmp197 = -pow(-tmp195, tmp198)*pow(tmp195, tmp199);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp195, tmp196);
      }
    }
  }
  else
  {
    tmp197 = pow(tmp195, tmp196);
  }
  if(isnan(tmp197) || isinf(tmp197))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp195, tmp196);
  }tmp202 = 93.9 - (data->localData[0]->realVars[1018] /* pv3.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp203 = 1.253;
  if(tmp202 < 0.0 && tmp203 != 0.0)
  {
    tmp205 = modf(tmp203, &tmp206);
    
    if(tmp205 > 0.5)
    {
      tmp205 -= 1.0;
      tmp206 += 1.0;
    }
    else if(tmp205 < -0.5)
    {
      tmp205 += 1.0;
      tmp206 -= 1.0;
    }
    
    if(fabs(tmp205) < 1e-10)
      tmp204 = pow(tmp202, tmp206);
    else
    {
      tmp208 = modf(1.0/tmp203, &tmp207);
      if(tmp208 > 0.5)
      {
        tmp208 -= 1.0;
        tmp207 += 1.0;
      }
      else if(tmp208 < -0.5)
      {
        tmp208 += 1.0;
        tmp207 -= 1.0;
      }
      if(fabs(tmp208) < 1e-10 && ((unsigned long)tmp207 & 1))
      {
        tmp204 = -pow(-tmp202, tmp205)*pow(tmp202, tmp206);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp202, tmp203);
      }
    }
  }
  else
  {
    tmp204 = pow(tmp202, tmp203);
  }
  if(isnan(tmp204) || isinf(tmp204))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp202, tmp203);
  }tmp209 = cos((data->localData[0]->realVars[1019] /* pv3.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp204,"(93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  (data->localData[0]->realVars[270] /* der(pv3.HDifTil.relAirMas.relAirMas) DUMMY_DER */) = (exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */)))) * (DIVISION_SIM((sin((data->localData[0]->realVars[1019] /* pv3.HDifTil.relAirMas.zenLim DUMMY_STATE */))) * ((data->localData[0]->realVars[272] /* der(pv3.HDifTil.relAirMas.zenLim) DUMMY_DER */)) + (-0.18794999999999998) * ((tmp190) * (DIVISION_SIM((data->localData[0]->realVars[271] /* der(pv3.HDifTil.relAirMas.zenDeg) DUMMY_DER */),tmp197,"abs(93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 2.506",equationIndexes))),(tmp209 * tmp209),"(cos(pv3.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv3.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0",equationIndexes));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4781(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3684(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4264(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4265(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4278(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4276(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4279(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4274(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4277(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4272(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4275(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4270(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4273(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4268(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4271(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4267(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4269(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4266(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4285(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4284(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4283(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4287(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4282(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4281(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4280(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4286(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4783(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4797(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4795(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4793(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4796(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4791(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4794(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4789(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4792(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4787(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4790(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4785(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4788(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4784(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4786(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4803(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4802(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4801(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4805(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4800(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4799(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4798(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4804(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3673(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4288(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3996(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4289(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4290(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4291(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4292(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4807(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4808(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4809(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4810(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4811(DATA *data, threadData_t *threadData);


/*
equation index: 848
type: SIMPLE_ASSIGN
$DER.pv3.panel.load.Q = $DER.PSol.u[3] * tan(-acos(pv3.panel.load.pf))
*/
void RenewableSources_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  modelica_real tmp210;
  tmp210 = (data->simulationInfo->realParameter[784] /* pv3.panel.load.pf PARAM */);
  if(!(tmp210 >= -1.0 && tmp210 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv3.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp210);
    }
  }
  (data->localData[0]->realVars[289] /* der(pv3.panel.load.Q) DUMMY_DER */) = ((data->localData[0]->realVars[9] /* der(PSol.u[3]) DUMMY_DER */)) * (tan((-acos(tmp210))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4293(DATA *data, threadData_t *threadData);


/*
equation index: 850
type: SIMPLE_ASSIGN
pv3.panel.load.Q = PSol.u[3] * tan(-acos(pv3.panel.load.pf))
*/
void RenewableSources_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  modelica_real tmp211;
  tmp211 = (data->simulationInfo->realParameter[784] /* pv3.panel.load.pf PARAM */);
  if(!(tmp211 >= -1.0 && tmp211 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv3.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp211);
    }
  }
  (data->localData[0]->realVars[1038] /* pv3.panel.load.Q DUMMY_STATE */) = ((data->localData[0]->realVars[625] /* PSol.u[3] DUMMY_STATE */)) * (tan((-acos(tmp211))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3997(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3998(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3999(DATA *data, threadData_t *threadData);


/*
equation index: 854
type: SIMPLE_ASSIGN
$DER.pv2.HDirTil.incAng.incAng.sol_s = cos(pv2.HDirTil.incAng.solHouAng.solHouAng) * $DER.pv2.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[228] /* der(pv2.HDirTil.incAng.incAng.sol_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[965] /* pv2.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */))) * ((data->localData[0]->realVars[229] /* der(pv2.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
$DER.pv2.HDirTil.incAng.incAng.sol_c = (-sin(pv2.HDirTil.incAng.solHouAng.solHouAng)) * $DER.pv2.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[227] /* der(pv2.HDirTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[965] /* pv2.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[229] /* der(pv2.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3756(DATA *data, threadData_t *threadData);


/*
equation index: 857
type: SIMPLE_ASSIGN
$DER.pv2.HDirTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv2.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv2.HDirTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv2.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  modelica_real tmp212;
  modelica_real tmp213;
  tmp212 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[957] /* pv2.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp213 = 1.0 - ((tmp212 * tmp212));
  if(!(tmp213 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv2.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp213);
    }
  }
  (data->localData[0]->realVars[224] /* der(pv2.HDirTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[957] /* pv2.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[223] /* der(pv2.HDirTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp213),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv2.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
pv2.HDirTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv2.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  modelica_real tmp214;
  tmp214 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[957] /* pv2.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp214 >= -1.0 && tmp214 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv2.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp214);
    }
  }
  (data->localData[0]->realVars[958] /* pv2.HDirTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp214);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3759(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3760(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4000(DATA *data, threadData_t *threadData);


/*
equation index: 862
type: SIMPLE_ASSIGN
pv2.HDirTil.H = max(0.0, cos(pv2.HDirTil.inc) * weaBus.HDirNor)
*/
void RenewableSources_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[955] /* pv2.HDirTil.H DUMMY_STATE */) = fmax(0.0,(cos((data->localData[0]->realVars[956] /* pv2.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
$DER.pv2.HDirTil.incAng.incAng.dec_s = cos(pv2.HDirTil.incAng.decAng.decAng) * $DER.pv2.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[226] /* der(pv2.HDirTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[958] /* pv2.HDirTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[224] /* der(pv2.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
$DER.pv2.HDirTil.incAng.incAng.dec_c = (-sin(pv2.HDirTil.incAng.decAng.decAng)) * $DER.pv2.HDirTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  (data->localData[0]->realVars[225] /* der(pv2.HDirTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[958] /* pv2.HDirTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[224] /* der(pv2.HDirTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4086(DATA *data, threadData_t *threadData);


/*
equation index: 866
type: SIMPLE_ASSIGN
$DER.pv2.HDirTil.H = if noEvent(0.0 > cos(pv2.HDirTil.inc) * weaBus.HDirNor) then 0.0 else cos(pv2.HDirTil.inc) * $DER.weaBus.HDirNor + (-sin(pv2.HDirTil.inc)) * $DER.pv2.HDirTil.inc * weaBus.HDirNor
*/
void RenewableSources_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  modelica_boolean tmp215;
  tmp215 = Greater(0.0,(cos((data->localData[0]->realVars[956] /* pv2.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  (data->localData[0]->realVars[221] /* der(pv2.HDirTil.H) DUMMY_DER */) = (tmp215?0.0:(cos((data->localData[0]->realVars[956] /* pv2.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[517] /* der(weaBus.HDirNor) DUMMY_DER */)) + (((-sin((data->localData[0]->realVars[956] /* pv2.HDirTil.inc DUMMY_STATE */)))) * ((data->localData[0]->realVars[222] /* der(pv2.HDirTil.inc) DUMMY_DER */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4003(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4004(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4005(DATA *data, threadData_t *threadData);


/*
equation index: 870
type: SIMPLE_ASSIGN
$DER.pv2.HDifTil.incAng.incAng.sol_s = cos(pv2.HDifTil.incAng.solHouAng.solHouAng) * $DER.pv2.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  (data->localData[0]->realVars[210] /* der(pv2.HDifTil.incAng.incAng.sol_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[945] /* pv2.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */))) * ((data->localData[0]->realVars[211] /* der(pv2.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
$DER.pv2.HDifTil.incAng.incAng.sol_c = (-sin(pv2.HDifTil.incAng.solHouAng.solHouAng)) * $DER.pv2.HDifTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  (data->localData[0]->realVars[209] /* der(pv2.HDifTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[945] /* pv2.HDifTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[211] /* der(pv2.HDifTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3746(DATA *data, threadData_t *threadData);


/*
equation index: 873
type: SIMPLE_ASSIGN
$DER.pv2.HDifTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv2.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv2.HDifTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv2.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  modelica_real tmp216;
  modelica_real tmp217;
  tmp216 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[937] /* pv2.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp217 = 1.0 - ((tmp216 * tmp216));
  if(!(tmp217 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv2.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp217);
    }
  }
  (data->localData[0]->realVars[206] /* der(pv2.HDifTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[937] /* pv2.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[205] /* der(pv2.HDifTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp217),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv2.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
pv2.HDifTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv2.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_real tmp218;
  tmp218 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[937] /* pv2.HDifTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp218 >= -1.0 && tmp218 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv2.HDifTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp218);
    }
  }
  (data->localData[0]->realVars[938] /* pv2.HDifTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp218);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3749(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3750(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4006(DATA *data, threadData_t *threadData);


/*
equation index: 878
type: SIMPLE_ASSIGN
$DER.pv2.HDifTil.incAng.incAng.dec_s = cos(pv2.HDifTil.incAng.decAng.decAng) * $DER.pv2.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[208] /* der(pv2.HDifTil.incAng.incAng.dec_s) DUMMY_DER */) = (cos((data->localData[0]->realVars[938] /* pv2.HDifTil.incAng.decAng.decAng DUMMY_STATE */))) * ((data->localData[0]->realVars[206] /* der(pv2.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
$DER.pv2.HDifTil.incAng.incAng.dec_c = (-sin(pv2.HDifTil.incAng.decAng.decAng)) * $DER.pv2.HDifTil.incAng.decAng.decAng
*/
void RenewableSources_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  (data->localData[0]->realVars[207] /* der(pv2.HDifTil.incAng.incAng.dec_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[938] /* pv2.HDifTil.incAng.decAng.decAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[206] /* der(pv2.HDifTil.incAng.decAng.decAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4091(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4092(DATA *data, threadData_t *threadData);


/*
equation index: 882
type: SIMPLE_ASSIGN
pv2.HDifTil.skyBri.extRadCor = 1.0 + 0.033 * cos(0.01721420632103996 * (weaBus.solTim / 86400.0 + 1.0))
*/
void RenewableSources_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  (data->localData[0]->realVars[950] /* pv2.HDifTil.skyBri.extRadCor DUMMY_STATE */) = 1.0 + (0.033) * (cos((0.01721420632103996) * (DIVISION_SIM((data->localData[0]->realVars[1356] /* weaBus.solTim DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 1.0)));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4295(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4296(DATA *data, threadData_t *threadData);


/*
equation index: 885
type: SIMPLE_ASSIGN
pv2.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) / (cos(pv2.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 1.253)
*/
void RenewableSources_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  tmp219 = 93.9 - (data->localData[0]->realVars[948] /* pv2.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp220 = 1.253;
  if(tmp219 < 0.0 && tmp220 != 0.0)
  {
    tmp222 = modf(tmp220, &tmp223);
    
    if(tmp222 > 0.5)
    {
      tmp222 -= 1.0;
      tmp223 += 1.0;
    }
    else if(tmp222 < -0.5)
    {
      tmp222 += 1.0;
      tmp223 -= 1.0;
    }
    
    if(fabs(tmp222) < 1e-10)
      tmp221 = pow(tmp219, tmp223);
    else
    {
      tmp225 = modf(1.0/tmp220, &tmp224);
      if(tmp225 > 0.5)
      {
        tmp225 -= 1.0;
        tmp224 += 1.0;
      }
      else if(tmp225 < -0.5)
      {
        tmp225 += 1.0;
        tmp224 -= 1.0;
      }
      if(fabs(tmp225) < 1e-10 && ((unsigned long)tmp224 & 1))
      {
        tmp221 = -pow(-tmp219, tmp222)*pow(tmp219, tmp223);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp219, tmp220);
      }
    }
  }
  else
  {
    tmp221 = pow(tmp219, tmp220);
  }
  if(isnan(tmp221) || isinf(tmp221))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp219, tmp220);
  }
  (data->localData[0]->realVars[947] /* pv2.HDifTil.relAirMas.relAirMas DUMMY_STATE */) = DIVISION_SIM(exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */))),cos((data->localData[0]->realVars[949] /* pv2.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp221,"(93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes),"cos(pv2.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  TRACE_POP
}
extern void RenewableSources_eqFunction_4299(DATA *data, threadData_t *threadData);


/*
equation index: 887
type: SIMPLE_ASSIGN
$DER.pv2.HDifTil.relAirMas.relAirMas = exp((-1.184e-4) * weaDat.altitude.Altitude) * (sin(pv2.HDifTil.relAirMas.zenLim) * $DER.pv2.HDifTil.relAirMas.zenLim + (-0.18794999999999998) * (93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 0.2529999999999999 * $DER.pv2.HDifTil.relAirMas.zenDeg / abs(93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 2.506) / (cos(pv2.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0
*/
void RenewableSources_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  tmp226 = 93.9 - (data->localData[0]->realVars[948] /* pv2.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp227 = 0.2529999999999999;
  if(tmp226 < 0.0 && tmp227 != 0.0)
  {
    tmp229 = modf(tmp227, &tmp230);
    
    if(tmp229 > 0.5)
    {
      tmp229 -= 1.0;
      tmp230 += 1.0;
    }
    else if(tmp229 < -0.5)
    {
      tmp229 += 1.0;
      tmp230 -= 1.0;
    }
    
    if(fabs(tmp229) < 1e-10)
      tmp228 = pow(tmp226, tmp230);
    else
    {
      tmp232 = modf(1.0/tmp227, &tmp231);
      if(tmp232 > 0.5)
      {
        tmp232 -= 1.0;
        tmp231 += 1.0;
      }
      else if(tmp232 < -0.5)
      {
        tmp232 += 1.0;
        tmp231 -= 1.0;
      }
      if(fabs(tmp232) < 1e-10 && ((unsigned long)tmp231 & 1))
      {
        tmp228 = -pow(-tmp226, tmp229)*pow(tmp226, tmp230);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp226, tmp227);
      }
    }
  }
  else
  {
    tmp228 = pow(tmp226, tmp227);
  }
  if(isnan(tmp228) || isinf(tmp228))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp226, tmp227);
  }tmp233 = fabs(93.9 - (data->localData[0]->realVars[948] /* pv2.HDifTil.relAirMas.zenDeg DUMMY_STATE */));
  tmp234 = 2.506;
  if(tmp233 < 0.0 && tmp234 != 0.0)
  {
    tmp236 = modf(tmp234, &tmp237);
    
    if(tmp236 > 0.5)
    {
      tmp236 -= 1.0;
      tmp237 += 1.0;
    }
    else if(tmp236 < -0.5)
    {
      tmp236 += 1.0;
      tmp237 -= 1.0;
    }
    
    if(fabs(tmp236) < 1e-10)
      tmp235 = pow(tmp233, tmp237);
    else
    {
      tmp239 = modf(1.0/tmp234, &tmp238);
      if(tmp239 > 0.5)
      {
        tmp239 -= 1.0;
        tmp238 += 1.0;
      }
      else if(tmp239 < -0.5)
      {
        tmp239 += 1.0;
        tmp238 -= 1.0;
      }
      if(fabs(tmp239) < 1e-10 && ((unsigned long)tmp238 & 1))
      {
        tmp235 = -pow(-tmp233, tmp236)*pow(tmp233, tmp237);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp233, tmp234);
      }
    }
  }
  else
  {
    tmp235 = pow(tmp233, tmp234);
  }
  if(isnan(tmp235) || isinf(tmp235))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp233, tmp234);
  }tmp240 = 93.9 - (data->localData[0]->realVars[948] /* pv2.HDifTil.relAirMas.zenDeg DUMMY_STATE */);
  tmp241 = 1.253;
  if(tmp240 < 0.0 && tmp241 != 0.0)
  {
    tmp243 = modf(tmp241, &tmp244);
    
    if(tmp243 > 0.5)
    {
      tmp243 -= 1.0;
      tmp244 += 1.0;
    }
    else if(tmp243 < -0.5)
    {
      tmp243 += 1.0;
      tmp244 -= 1.0;
    }
    
    if(fabs(tmp243) < 1e-10)
      tmp242 = pow(tmp240, tmp244);
    else
    {
      tmp246 = modf(1.0/tmp241, &tmp245);
      if(tmp246 > 0.5)
      {
        tmp246 -= 1.0;
        tmp245 += 1.0;
      }
      else if(tmp246 < -0.5)
      {
        tmp246 += 1.0;
        tmp245 -= 1.0;
      }
      if(fabs(tmp246) < 1e-10 && ((unsigned long)tmp245 & 1))
      {
        tmp242 = -pow(-tmp240, tmp243)*pow(tmp240, tmp244);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp240, tmp241);
      }
    }
  }
  else
  {
    tmp242 = pow(tmp240, tmp241);
  }
  if(isnan(tmp242) || isinf(tmp242))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp240, tmp241);
  }tmp247 = cos((data->localData[0]->realVars[949] /* pv2.HDifTil.relAirMas.zenLim DUMMY_STATE */)) + DIVISION_SIM(0.15,tmp242,"(93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 1.253",equationIndexes);
  (data->localData[0]->realVars[213] /* der(pv2.HDifTil.relAirMas.relAirMas) DUMMY_DER */) = (exp((-1.184e-4) * ((data->simulationInfo->realParameter[1078] /* weaDat.altitude.Altitude PARAM */)))) * (DIVISION_SIM((sin((data->localData[0]->realVars[949] /* pv2.HDifTil.relAirMas.zenLim DUMMY_STATE */))) * ((data->localData[0]->realVars[215] /* der(pv2.HDifTil.relAirMas.zenLim) DUMMY_DER */)) + (-0.18794999999999998) * ((tmp228) * (DIVISION_SIM((data->localData[0]->realVars[214] /* der(pv2.HDifTil.relAirMas.zenDeg) DUMMY_DER */),tmp235,"abs(93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 2.506",equationIndexes))),(tmp247 * tmp247),"(cos(pv2.HDifTil.relAirMas.zenLim) + 0.15 / (93.9 - pv2.HDifTil.relAirMas.zenDeg) ^ 1.253) ^ 2.0",equationIndexes));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4816(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3685(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4301(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4302(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4315(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4313(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4316(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4311(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4314(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4309(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4312(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4307(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4310(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4305(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4308(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4304(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4306(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4303(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4322(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4321(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4320(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4324(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4319(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4318(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4317(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4323(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4818(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4832(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4830(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4828(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4831(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4826(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4829(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4824(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4827(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4822(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4825(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4820(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4823(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4819(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4821(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4838(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4837(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4836(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4840(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4835(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4834(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4833(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4839(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3674(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4325(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4007(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4326(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4327(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4328(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4329(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4842(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4843(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4844(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4845(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4846(DATA *data, threadData_t *threadData);


/*
equation index: 949
type: SIMPLE_ASSIGN
$DER.pv2.panel.load.Q = $DER.PSol.u[2] * tan(-acos(pv2.panel.load.pf))
*/
void RenewableSources_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  modelica_real tmp248;
  tmp248 = (data->simulationInfo->realParameter[717] /* pv2.panel.load.pf PARAM */);
  if(!(tmp248 >= -1.0 && tmp248 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv2.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp248);
    }
  }
  (data->localData[0]->realVars[232] /* der(pv2.panel.load.Q) DUMMY_DER */) = ((data->localData[0]->realVars[8] /* der(PSol.u[2]) DUMMY_DER */)) * (tan((-acos(tmp248))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4330(DATA *data, threadData_t *threadData);


/*
equation index: 951
type: SIMPLE_ASSIGN
pv2.panel.load.Q = PSol.u[2] * tan(-acos(pv2.panel.load.pf))
*/
void RenewableSources_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  modelica_real tmp249;
  tmp249 = (data->simulationInfo->realParameter[717] /* pv2.panel.load.pf PARAM */);
  if(!(tmp249 >= -1.0 && tmp249 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of acos(pv2.panel.load.pf) outside the domain -1.0 <= %g <= 1.0", tmp249);
    }
  }
  (data->localData[0]->realVars[968] /* pv2.panel.load.Q DUMMY_STATE */) = ((data->localData[0]->realVars[624] /* PSol.u[2] DUMMY_STATE */)) * (tan((-acos(tmp249))));
  TRACE_POP
}
extern void RenewableSources_eqFunction_4008(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4009(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4013(DATA *data, threadData_t *threadData);


/*
equation index: 955
type: SIMPLE_ASSIGN
$DER.pv1.HDirTil.incAng.incAng.sol_c = (-sin(pv1.HDirTil.incAng.solHouAng.solHouAng)) * $DER.pv1.HDirTil.incAng.solHouAng.solHouAng
*/
void RenewableSources_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  (data->localData[0]->realVars[171] /* der(pv1.HDirTil.incAng.incAng.sol_c) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[895] /* pv1.HDirTil.incAng.solHouAng.solHouAng DUMMY_STATE */)))) * ((data->localData[0]->realVars[172] /* der(pv1.HDirTil.incAng.solHouAng.solHouAng) DUMMY_DER */));
  TRACE_POP
}
extern void RenewableSources_eqFunction_3736(DATA *data, threadData_t *threadData);


/*
equation index: 957
type: SIMPLE_ASSIGN
$DER.pv1.HDirTil.incAng.decAng.decAng = (-7.92324192348025e-8) * (-sin((pv1.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) * $DER.pv1.HDirTil.incAng.decAng.calTimAux / sqrt(1.0 - ((-0.3979486313076103) * cos((pv1.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)
*/
void RenewableSources_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  modelica_real tmp250;
  modelica_real tmp251;
  tmp250 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[887] /* pv1.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  tmp251 = 1.0 - ((tmp250 * tmp250));
  if(!(tmp251 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(1.0 - ((-0.3979486313076103) * cos((pv1.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0) was %g should be >= 0", tmp251);
    }
  }
  (data->localData[0]->realVars[168] /* der(pv1.HDirTil.incAng.decAng.decAng) DUMMY_DER */) = (-7.92324192348025e-8) * (((-sin((DIVISION_SIM((data->localData[0]->realVars[887] /* pv1.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)))) * (DIVISION_SIM((data->localData[0]->realVars[167] /* der(pv1.HDirTil.incAng.decAng.calTimAux) DUMMY_DER */),sqrt(tmp251),"sqrt(1.0 - ((-0.3979486313076103) * cos((pv1.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) ^ 2.0)",equationIndexes)));
  TRACE_POP
}

/*
equation index: 958
type: SIMPLE_ASSIGN
pv1.HDirTil.incAng.decAng.decAng = asin((-0.3979486313076103) * cos((pv1.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484))
*/
void RenewableSources_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  modelica_real tmp252;
  tmp252 = (-0.3979486313076103) * (cos((DIVISION_SIM((data->localData[0]->realVars[887] /* pv1.HDirTil.incAng.decAng.calTimAux DUMMY_STATE */),86400.0,"86400.0",equationIndexes) + 10.0) * (0.017202423838958484)));
  if(!(tmp252 >= -1.0 && tmp252 <= 1.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of asin((-0.3979486313076103) * cos((pv1.HDirTil.incAng.decAng.calTimAux / 86400.0 + 10.0) * 0.017202423838958484)) outside the domain -1.0 <= %g <= 1.0", tmp252);
    }
  }
  (data->localData[0]->realVars[888] /* pv1.HDirTil.incAng.decAng.decAng DUMMY_STATE */) = asin(tmp252);
  TRACE_POP
}
extern void RenewableSources_eqFunction_3739(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_3740(DATA *data, threadData_t *threadData);

extern void RenewableSources_eqFunction_4010(DATA *data, threadData_t *threadData);


/*
equation index: 962
type: SIMPLE_ASSIGN
pv1.HDirTil.H = max(0.0, cos(pv1.HDirTil.inc) * weaBus.HDirNor)
*/
void RenewableSources_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  (data->localData[0]->realVars[885] /* pv1.HDirTil.H DUMMY_STATE */) = fmax(0.0,(cos((data->localData[0]->realVars[886] /* pv1.HDirTil.inc DUMMY_STATE */))) * ((data->localData[0]->realVars[1342] /* weaBus.HDirNor DUMMY_STATE */)));
  TRACE_POP
}
OMC_DISABLE_OPT
void RenewableSources_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  RenewableSources_eqFunction_4148(data, threadData);
  RenewableSources_eqFunction_483(data, threadData);
  RenewableSources_eqFunction_4151(data, threadData);
  RenewableSources_eqFunction_485(data, threadData);
  RenewableSources_eqFunction_4676(data, threadData);
  RenewableSources_eqFunction_3681(data, threadData);
  RenewableSources_eqFunction_4153(data, threadData);
  RenewableSources_eqFunction_4154(data, threadData);
  RenewableSources_eqFunction_4167(data, threadData);
  RenewableSources_eqFunction_4165(data, threadData);
  RenewableSources_eqFunction_4168(data, threadData);
  RenewableSources_eqFunction_4163(data, threadData);
  RenewableSources_eqFunction_4166(data, threadData);
  RenewableSources_eqFunction_4161(data, threadData);
  RenewableSources_eqFunction_4164(data, threadData);
  RenewableSources_eqFunction_4159(data, threadData);
  RenewableSources_eqFunction_4162(data, threadData);
  RenewableSources_eqFunction_4157(data, threadData);
  RenewableSources_eqFunction_4160(data, threadData);
  RenewableSources_eqFunction_4156(data, threadData);
  RenewableSources_eqFunction_4158(data, threadData);
  RenewableSources_eqFunction_4155(data, threadData);
  RenewableSources_eqFunction_4174(data, threadData);
  RenewableSources_eqFunction_4173(data, threadData);
  RenewableSources_eqFunction_4172(data, threadData);
  RenewableSources_eqFunction_4176(data, threadData);
  RenewableSources_eqFunction_4171(data, threadData);
  RenewableSources_eqFunction_4170(data, threadData);
  RenewableSources_eqFunction_4169(data, threadData);
  RenewableSources_eqFunction_4175(data, threadData);
  RenewableSources_eqFunction_4678(data, threadData);
  RenewableSources_eqFunction_4692(data, threadData);
  RenewableSources_eqFunction_4690(data, threadData);
  RenewableSources_eqFunction_4688(data, threadData);
  RenewableSources_eqFunction_4691(data, threadData);
  RenewableSources_eqFunction_4686(data, threadData);
  RenewableSources_eqFunction_4689(data, threadData);
  RenewableSources_eqFunction_4684(data, threadData);
  RenewableSources_eqFunction_4687(data, threadData);
  RenewableSources_eqFunction_4682(data, threadData);
  RenewableSources_eqFunction_4685(data, threadData);
  RenewableSources_eqFunction_4680(data, threadData);
  RenewableSources_eqFunction_4683(data, threadData);
  RenewableSources_eqFunction_4679(data, threadData);
  RenewableSources_eqFunction_4681(data, threadData);
  RenewableSources_eqFunction_4698(data, threadData);
  RenewableSources_eqFunction_4697(data, threadData);
  RenewableSources_eqFunction_4696(data, threadData);
  RenewableSources_eqFunction_4700(data, threadData);
  RenewableSources_eqFunction_4695(data, threadData);
  RenewableSources_eqFunction_4694(data, threadData);
  RenewableSources_eqFunction_4693(data, threadData);
  RenewableSources_eqFunction_4699(data, threadData);
  RenewableSources_eqFunction_3670(data, threadData);
  RenewableSources_eqFunction_4177(data, threadData);
  RenewableSources_eqFunction_3963(data, threadData);
  RenewableSources_eqFunction_4178(data, threadData);
  RenewableSources_eqFunction_4179(data, threadData);
  RenewableSources_eqFunction_4180(data, threadData);
  RenewableSources_eqFunction_4181(data, threadData);
  RenewableSources_eqFunction_4702(data, threadData);
  RenewableSources_eqFunction_4703(data, threadData);
  RenewableSources_eqFunction_4704(data, threadData);
  RenewableSources_eqFunction_4705(data, threadData);
  RenewableSources_eqFunction_4706(data, threadData);
  RenewableSources_eqFunction_547(data, threadData);
  RenewableSources_eqFunction_4182(data, threadData);
  RenewableSources_eqFunction_549(data, threadData);
  RenewableSources_eqFunction_3964(data, threadData);
  RenewableSources_eqFunction_3965(data, threadData);
  RenewableSources_eqFunction_3966(data, threadData);
  RenewableSources_eqFunction_553(data, threadData);
  RenewableSources_eqFunction_554(data, threadData);
  RenewableSources_eqFunction_3816(data, threadData);
  RenewableSources_eqFunction_556(data, threadData);
  RenewableSources_eqFunction_557(data, threadData);
  RenewableSources_eqFunction_3819(data, threadData);
  RenewableSources_eqFunction_3820(data, threadData);
  RenewableSources_eqFunction_3967(data, threadData);
  RenewableSources_eqFunction_561(data, threadData);
  RenewableSources_eqFunction_562(data, threadData);
  RenewableSources_eqFunction_563(data, threadData);
  RenewableSources_eqFunction_4055(data, threadData);
  RenewableSources_eqFunction_565(data, threadData);
  RenewableSources_eqFunction_3970(data, threadData);
  RenewableSources_eqFunction_3971(data, threadData);
  RenewableSources_eqFunction_3972(data, threadData);
  RenewableSources_eqFunction_569(data, threadData);
  RenewableSources_eqFunction_570(data, threadData);
  RenewableSources_eqFunction_3806(data, threadData);
  RenewableSources_eqFunction_572(data, threadData);
  RenewableSources_eqFunction_573(data, threadData);
  RenewableSources_eqFunction_3809(data, threadData);
  RenewableSources_eqFunction_3810(data, threadData);
  RenewableSources_eqFunction_3973(data, threadData);
  RenewableSources_eqFunction_577(data, threadData);
  RenewableSources_eqFunction_578(data, threadData);
  RenewableSources_eqFunction_4060(data, threadData);
  RenewableSources_eqFunction_4061(data, threadData);
  RenewableSources_eqFunction_581(data, threadData);
  RenewableSources_eqFunction_4184(data, threadData);
  RenewableSources_eqFunction_4185(data, threadData);
  RenewableSources_eqFunction_584(data, threadData);
  RenewableSources_eqFunction_4188(data, threadData);
  RenewableSources_eqFunction_586(data, threadData);
  RenewableSources_eqFunction_4711(data, threadData);
  RenewableSources_eqFunction_3682(data, threadData);
  RenewableSources_eqFunction_4190(data, threadData);
  RenewableSources_eqFunction_4191(data, threadData);
  RenewableSources_eqFunction_4204(data, threadData);
  RenewableSources_eqFunction_4202(data, threadData);
  RenewableSources_eqFunction_4205(data, threadData);
  RenewableSources_eqFunction_4200(data, threadData);
  RenewableSources_eqFunction_4203(data, threadData);
  RenewableSources_eqFunction_4198(data, threadData);
  RenewableSources_eqFunction_4201(data, threadData);
  RenewableSources_eqFunction_4196(data, threadData);
  RenewableSources_eqFunction_4199(data, threadData);
  RenewableSources_eqFunction_4194(data, threadData);
  RenewableSources_eqFunction_4197(data, threadData);
  RenewableSources_eqFunction_4193(data, threadData);
  RenewableSources_eqFunction_4195(data, threadData);
  RenewableSources_eqFunction_4192(data, threadData);
  RenewableSources_eqFunction_4211(data, threadData);
  RenewableSources_eqFunction_4210(data, threadData);
  RenewableSources_eqFunction_4209(data, threadData);
  RenewableSources_eqFunction_4213(data, threadData);
  RenewableSources_eqFunction_4208(data, threadData);
  RenewableSources_eqFunction_4207(data, threadData);
  RenewableSources_eqFunction_4206(data, threadData);
  RenewableSources_eqFunction_4212(data, threadData);
  RenewableSources_eqFunction_4713(data, threadData);
  RenewableSources_eqFunction_4727(data, threadData);
  RenewableSources_eqFunction_4725(data, threadData);
  RenewableSources_eqFunction_4723(data, threadData);
  RenewableSources_eqFunction_4726(data, threadData);
  RenewableSources_eqFunction_4721(data, threadData);
  RenewableSources_eqFunction_4724(data, threadData);
  RenewableSources_eqFunction_4719(data, threadData);
  RenewableSources_eqFunction_4722(data, threadData);
  RenewableSources_eqFunction_4717(data, threadData);
  RenewableSources_eqFunction_4720(data, threadData);
  RenewableSources_eqFunction_4715(data, threadData);
  RenewableSources_eqFunction_4718(data, threadData);
  RenewableSources_eqFunction_4714(data, threadData);
  RenewableSources_eqFunction_4716(data, threadData);
  RenewableSources_eqFunction_4733(data, threadData);
  RenewableSources_eqFunction_4732(data, threadData);
  RenewableSources_eqFunction_4731(data, threadData);
  RenewableSources_eqFunction_4735(data, threadData);
  RenewableSources_eqFunction_4730(data, threadData);
  RenewableSources_eqFunction_4729(data, threadData);
  RenewableSources_eqFunction_4728(data, threadData);
  RenewableSources_eqFunction_4734(data, threadData);
  RenewableSources_eqFunction_3671(data, threadData);
  RenewableSources_eqFunction_4214(data, threadData);
  RenewableSources_eqFunction_3974(data, threadData);
  RenewableSources_eqFunction_4215(data, threadData);
  RenewableSources_eqFunction_4216(data, threadData);
  RenewableSources_eqFunction_4217(data, threadData);
  RenewableSources_eqFunction_4218(data, threadData);
  RenewableSources_eqFunction_4737(data, threadData);
  RenewableSources_eqFunction_4738(data, threadData);
  RenewableSources_eqFunction_4739(data, threadData);
  RenewableSources_eqFunction_4740(data, threadData);
  RenewableSources_eqFunction_4741(data, threadData);
  RenewableSources_eqFunction_648(data, threadData);
  RenewableSources_eqFunction_4219(data, threadData);
  RenewableSources_eqFunction_650(data, threadData);
  RenewableSources_eqFunction_3975(data, threadData);
  RenewableSources_eqFunction_3976(data, threadData);
  RenewableSources_eqFunction_3980(data, threadData);
  RenewableSources_eqFunction_654(data, threadData);
  RenewableSources_eqFunction_3796(data, threadData);
  RenewableSources_eqFunction_656(data, threadData);
  RenewableSources_eqFunction_657(data, threadData);
  RenewableSources_eqFunction_3799(data, threadData);
  RenewableSources_eqFunction_3800(data, threadData);
  RenewableSources_eqFunction_3977(data, threadData);
  RenewableSources_eqFunction_661(data, threadData);
  RenewableSources_eqFunction_662(data, threadData);
  RenewableSources_eqFunction_663(data, threadData);
  RenewableSources_eqFunction_4065(data, threadData);
  RenewableSources_eqFunction_665(data, threadData);
  RenewableSources_eqFunction_3981(data, threadData);
  RenewableSources_eqFunction_3982(data, threadData);
  RenewableSources_eqFunction_3985(data, threadData);
  RenewableSources_eqFunction_669(data, threadData);
  RenewableSources_eqFunction_3786(data, threadData);
  RenewableSources_eqFunction_671(data, threadData);
  RenewableSources_eqFunction_672(data, threadData);
  RenewableSources_eqFunction_3789(data, threadData);
  RenewableSources_eqFunction_3790(data, threadData);
  RenewableSources_eqFunction_3983(data, threadData);
  RenewableSources_eqFunction_676(data, threadData);
  RenewableSources_eqFunction_677(data, threadData);
  RenewableSources_eqFunction_4069(data, threadData);
  RenewableSources_eqFunction_4070(data, threadData);
  RenewableSources_eqFunction_680(data, threadData);
  RenewableSources_eqFunction_4221(data, threadData);
  RenewableSources_eqFunction_4222(data, threadData);
  RenewableSources_eqFunction_683(data, threadData);
  RenewableSources_eqFunction_4225(data, threadData);
  RenewableSources_eqFunction_685(data, threadData);
  RenewableSources_eqFunction_4746(data, threadData);
  RenewableSources_eqFunction_3683(data, threadData);
  RenewableSources_eqFunction_4227(data, threadData);
  RenewableSources_eqFunction_4228(data, threadData);
  RenewableSources_eqFunction_4241(data, threadData);
  RenewableSources_eqFunction_4239(data, threadData);
  RenewableSources_eqFunction_4242(data, threadData);
  RenewableSources_eqFunction_4237(data, threadData);
  RenewableSources_eqFunction_4240(data, threadData);
  RenewableSources_eqFunction_4235(data, threadData);
  RenewableSources_eqFunction_4238(data, threadData);
  RenewableSources_eqFunction_4233(data, threadData);
  RenewableSources_eqFunction_4236(data, threadData);
  RenewableSources_eqFunction_4231(data, threadData);
  RenewableSources_eqFunction_4234(data, threadData);
  RenewableSources_eqFunction_4230(data, threadData);
  RenewableSources_eqFunction_4232(data, threadData);
  RenewableSources_eqFunction_4229(data, threadData);
  RenewableSources_eqFunction_4248(data, threadData);
  RenewableSources_eqFunction_4247(data, threadData);
  RenewableSources_eqFunction_4246(data, threadData);
  RenewableSources_eqFunction_4250(data, threadData);
  RenewableSources_eqFunction_4245(data, threadData);
  RenewableSources_eqFunction_4244(data, threadData);
  RenewableSources_eqFunction_4243(data, threadData);
  RenewableSources_eqFunction_4249(data, threadData);
  RenewableSources_eqFunction_4748(data, threadData);
  RenewableSources_eqFunction_4762(data, threadData);
  RenewableSources_eqFunction_4760(data, threadData);
  RenewableSources_eqFunction_4758(data, threadData);
  RenewableSources_eqFunction_4761(data, threadData);
  RenewableSources_eqFunction_4756(data, threadData);
  RenewableSources_eqFunction_4759(data, threadData);
  RenewableSources_eqFunction_4754(data, threadData);
  RenewableSources_eqFunction_4757(data, threadData);
  RenewableSources_eqFunction_4752(data, threadData);
  RenewableSources_eqFunction_4755(data, threadData);
  RenewableSources_eqFunction_4750(data, threadData);
  RenewableSources_eqFunction_4753(data, threadData);
  RenewableSources_eqFunction_4749(data, threadData);
  RenewableSources_eqFunction_4751(data, threadData);
  RenewableSources_eqFunction_4768(data, threadData);
  RenewableSources_eqFunction_4767(data, threadData);
  RenewableSources_eqFunction_4766(data, threadData);
  RenewableSources_eqFunction_4770(data, threadData);
  RenewableSources_eqFunction_4765(data, threadData);
  RenewableSources_eqFunction_4764(data, threadData);
  RenewableSources_eqFunction_4763(data, threadData);
  RenewableSources_eqFunction_4769(data, threadData);
  RenewableSources_eqFunction_3672(data, threadData);
  RenewableSources_eqFunction_4251(data, threadData);
  RenewableSources_eqFunction_3984(data, threadData);
  RenewableSources_eqFunction_4252(data, threadData);
  RenewableSources_eqFunction_4253(data, threadData);
  RenewableSources_eqFunction_4254(data, threadData);
  RenewableSources_eqFunction_4255(data, threadData);
  RenewableSources_eqFunction_4772(data, threadData);
  RenewableSources_eqFunction_4773(data, threadData);
  RenewableSources_eqFunction_4774(data, threadData);
  RenewableSources_eqFunction_4775(data, threadData);
  RenewableSources_eqFunction_4776(data, threadData);
  RenewableSources_eqFunction_747(data, threadData);
  RenewableSources_eqFunction_4256(data, threadData);
  RenewableSources_eqFunction_749(data, threadData);
  RenewableSources_eqFunction_3986(data, threadData);
  RenewableSources_eqFunction_3987(data, threadData);
  RenewableSources_eqFunction_3988(data, threadData);
  RenewableSources_eqFunction_753(data, threadData);
  RenewableSources_eqFunction_754(data, threadData);
  RenewableSources_eqFunction_3776(data, threadData);
  RenewableSources_eqFunction_756(data, threadData);
  RenewableSources_eqFunction_757(data, threadData);
  RenewableSources_eqFunction_3779(data, threadData);
  RenewableSources_eqFunction_3780(data, threadData);
  RenewableSources_eqFunction_3989(data, threadData);
  RenewableSources_eqFunction_761(data, threadData);
  RenewableSources_eqFunction_762(data, threadData);
  RenewableSources_eqFunction_763(data, threadData);
  RenewableSources_eqFunction_4075(data, threadData);
  RenewableSources_eqFunction_765(data, threadData);
  RenewableSources_eqFunction_3992(data, threadData);
  RenewableSources_eqFunction_3993(data, threadData);
  RenewableSources_eqFunction_3994(data, threadData);
  RenewableSources_eqFunction_769(data, threadData);
  RenewableSources_eqFunction_770(data, threadData);
  RenewableSources_eqFunction_3766(data, threadData);
  RenewableSources_eqFunction_772(data, threadData);
  RenewableSources_eqFunction_773(data, threadData);
  RenewableSources_eqFunction_3769(data, threadData);
  RenewableSources_eqFunction_3770(data, threadData);
  RenewableSources_eqFunction_3995(data, threadData);
  RenewableSources_eqFunction_777(data, threadData);
  RenewableSources_eqFunction_778(data, threadData);
  RenewableSources_eqFunction_4080(data, threadData);
  RenewableSources_eqFunction_4081(data, threadData);
  RenewableSources_eqFunction_781(data, threadData);
  RenewableSources_eqFunction_4258(data, threadData);
  RenewableSources_eqFunction_4259(data, threadData);
  RenewableSources_eqFunction_784(data, threadData);
  RenewableSources_eqFunction_4262(data, threadData);
  RenewableSources_eqFunction_786(data, threadData);
  RenewableSources_eqFunction_4781(data, threadData);
  RenewableSources_eqFunction_3684(data, threadData);
  RenewableSources_eqFunction_4264(data, threadData);
  RenewableSources_eqFunction_4265(data, threadData);
  RenewableSources_eqFunction_4278(data, threadData);
  RenewableSources_eqFunction_4276(data, threadData);
  RenewableSources_eqFunction_4279(data, threadData);
  RenewableSources_eqFunction_4274(data, threadData);
  RenewableSources_eqFunction_4277(data, threadData);
  RenewableSources_eqFunction_4272(data, threadData);
  RenewableSources_eqFunction_4275(data, threadData);
  RenewableSources_eqFunction_4270(data, threadData);
  RenewableSources_eqFunction_4273(data, threadData);
  RenewableSources_eqFunction_4268(data, threadData);
  RenewableSources_eqFunction_4271(data, threadData);
  RenewableSources_eqFunction_4267(data, threadData);
  RenewableSources_eqFunction_4269(data, threadData);
  RenewableSources_eqFunction_4266(data, threadData);
  RenewableSources_eqFunction_4285(data, threadData);
  RenewableSources_eqFunction_4284(data, threadData);
  RenewableSources_eqFunction_4283(data, threadData);
  RenewableSources_eqFunction_4287(data, threadData);
  RenewableSources_eqFunction_4282(data, threadData);
  RenewableSources_eqFunction_4281(data, threadData);
  RenewableSources_eqFunction_4280(data, threadData);
  RenewableSources_eqFunction_4286(data, threadData);
  RenewableSources_eqFunction_4783(data, threadData);
  RenewableSources_eqFunction_4797(data, threadData);
  RenewableSources_eqFunction_4795(data, threadData);
  RenewableSources_eqFunction_4793(data, threadData);
  RenewableSources_eqFunction_4796(data, threadData);
  RenewableSources_eqFunction_4791(data, threadData);
  RenewableSources_eqFunction_4794(data, threadData);
  RenewableSources_eqFunction_4789(data, threadData);
  RenewableSources_eqFunction_4792(data, threadData);
  RenewableSources_eqFunction_4787(data, threadData);
  RenewableSources_eqFunction_4790(data, threadData);
  RenewableSources_eqFunction_4785(data, threadData);
  RenewableSources_eqFunction_4788(data, threadData);
  RenewableSources_eqFunction_4784(data, threadData);
  RenewableSources_eqFunction_4786(data, threadData);
  RenewableSources_eqFunction_4803(data, threadData);
  RenewableSources_eqFunction_4802(data, threadData);
  RenewableSources_eqFunction_4801(data, threadData);
  RenewableSources_eqFunction_4805(data, threadData);
  RenewableSources_eqFunction_4800(data, threadData);
  RenewableSources_eqFunction_4799(data, threadData);
  RenewableSources_eqFunction_4798(data, threadData);
  RenewableSources_eqFunction_4804(data, threadData);
  RenewableSources_eqFunction_3673(data, threadData);
  RenewableSources_eqFunction_4288(data, threadData);
  RenewableSources_eqFunction_3996(data, threadData);
  RenewableSources_eqFunction_4289(data, threadData);
  RenewableSources_eqFunction_4290(data, threadData);
  RenewableSources_eqFunction_4291(data, threadData);
  RenewableSources_eqFunction_4292(data, threadData);
  RenewableSources_eqFunction_4807(data, threadData);
  RenewableSources_eqFunction_4808(data, threadData);
  RenewableSources_eqFunction_4809(data, threadData);
  RenewableSources_eqFunction_4810(data, threadData);
  RenewableSources_eqFunction_4811(data, threadData);
  RenewableSources_eqFunction_848(data, threadData);
  RenewableSources_eqFunction_4293(data, threadData);
  RenewableSources_eqFunction_850(data, threadData);
  RenewableSources_eqFunction_3997(data, threadData);
  RenewableSources_eqFunction_3998(data, threadData);
  RenewableSources_eqFunction_3999(data, threadData);
  RenewableSources_eqFunction_854(data, threadData);
  RenewableSources_eqFunction_855(data, threadData);
  RenewableSources_eqFunction_3756(data, threadData);
  RenewableSources_eqFunction_857(data, threadData);
  RenewableSources_eqFunction_858(data, threadData);
  RenewableSources_eqFunction_3759(data, threadData);
  RenewableSources_eqFunction_3760(data, threadData);
  RenewableSources_eqFunction_4000(data, threadData);
  RenewableSources_eqFunction_862(data, threadData);
  RenewableSources_eqFunction_863(data, threadData);
  RenewableSources_eqFunction_864(data, threadData);
  RenewableSources_eqFunction_4086(data, threadData);
  RenewableSources_eqFunction_866(data, threadData);
  RenewableSources_eqFunction_4003(data, threadData);
  RenewableSources_eqFunction_4004(data, threadData);
  RenewableSources_eqFunction_4005(data, threadData);
  RenewableSources_eqFunction_870(data, threadData);
  RenewableSources_eqFunction_871(data, threadData);
  RenewableSources_eqFunction_3746(data, threadData);
  RenewableSources_eqFunction_873(data, threadData);
  RenewableSources_eqFunction_874(data, threadData);
  RenewableSources_eqFunction_3749(data, threadData);
  RenewableSources_eqFunction_3750(data, threadData);
  RenewableSources_eqFunction_4006(data, threadData);
  RenewableSources_eqFunction_878(data, threadData);
  RenewableSources_eqFunction_879(data, threadData);
  RenewableSources_eqFunction_4091(data, threadData);
  RenewableSources_eqFunction_4092(data, threadData);
  RenewableSources_eqFunction_882(data, threadData);
  RenewableSources_eqFunction_4295(data, threadData);
  RenewableSources_eqFunction_4296(data, threadData);
  RenewableSources_eqFunction_885(data, threadData);
  RenewableSources_eqFunction_4299(data, threadData);
  RenewableSources_eqFunction_887(data, threadData);
  RenewableSources_eqFunction_4816(data, threadData);
  RenewableSources_eqFunction_3685(data, threadData);
  RenewableSources_eqFunction_4301(data, threadData);
  RenewableSources_eqFunction_4302(data, threadData);
  RenewableSources_eqFunction_4315(data, threadData);
  RenewableSources_eqFunction_4313(data, threadData);
  RenewableSources_eqFunction_4316(data, threadData);
  RenewableSources_eqFunction_4311(data, threadData);
  RenewableSources_eqFunction_4314(data, threadData);
  RenewableSources_eqFunction_4309(data, threadData);
  RenewableSources_eqFunction_4312(data, threadData);
  RenewableSources_eqFunction_4307(data, threadData);
  RenewableSources_eqFunction_4310(data, threadData);
  RenewableSources_eqFunction_4305(data, threadData);
  RenewableSources_eqFunction_4308(data, threadData);
  RenewableSources_eqFunction_4304(data, threadData);
  RenewableSources_eqFunction_4306(data, threadData);
  RenewableSources_eqFunction_4303(data, threadData);
  RenewableSources_eqFunction_4322(data, threadData);
  RenewableSources_eqFunction_4321(data, threadData);
  RenewableSources_eqFunction_4320(data, threadData);
  RenewableSources_eqFunction_4324(data, threadData);
  RenewableSources_eqFunction_4319(data, threadData);
  RenewableSources_eqFunction_4318(data, threadData);
  RenewableSources_eqFunction_4317(data, threadData);
  RenewableSources_eqFunction_4323(data, threadData);
  RenewableSources_eqFunction_4818(data, threadData);
  RenewableSources_eqFunction_4832(data, threadData);
  RenewableSources_eqFunction_4830(data, threadData);
  RenewableSources_eqFunction_4828(data, threadData);
  RenewableSources_eqFunction_4831(data, threadData);
  RenewableSources_eqFunction_4826(data, threadData);
  RenewableSources_eqFunction_4829(data, threadData);
  RenewableSources_eqFunction_4824(data, threadData);
  RenewableSources_eqFunction_4827(data, threadData);
  RenewableSources_eqFunction_4822(data, threadData);
  RenewableSources_eqFunction_4825(data, threadData);
  RenewableSources_eqFunction_4820(data, threadData);
  RenewableSources_eqFunction_4823(data, threadData);
  RenewableSources_eqFunction_4819(data, threadData);
  RenewableSources_eqFunction_4821(data, threadData);
  RenewableSources_eqFunction_4838(data, threadData);
  RenewableSources_eqFunction_4837(data, threadData);
  RenewableSources_eqFunction_4836(data, threadData);
  RenewableSources_eqFunction_4840(data, threadData);
  RenewableSources_eqFunction_4835(data, threadData);
  RenewableSources_eqFunction_4834(data, threadData);
  RenewableSources_eqFunction_4833(data, threadData);
  RenewableSources_eqFunction_4839(data, threadData);
  RenewableSources_eqFunction_3674(data, threadData);
  RenewableSources_eqFunction_4325(data, threadData);
  RenewableSources_eqFunction_4007(data, threadData);
  RenewableSources_eqFunction_4326(data, threadData);
  RenewableSources_eqFunction_4327(data, threadData);
  RenewableSources_eqFunction_4328(data, threadData);
  RenewableSources_eqFunction_4329(data, threadData);
  RenewableSources_eqFunction_4842(data, threadData);
  RenewableSources_eqFunction_4843(data, threadData);
  RenewableSources_eqFunction_4844(data, threadData);
  RenewableSources_eqFunction_4845(data, threadData);
  RenewableSources_eqFunction_4846(data, threadData);
  RenewableSources_eqFunction_949(data, threadData);
  RenewableSources_eqFunction_4330(data, threadData);
  RenewableSources_eqFunction_951(data, threadData);
  RenewableSources_eqFunction_4008(data, threadData);
  RenewableSources_eqFunction_4009(data, threadData);
  RenewableSources_eqFunction_4013(data, threadData);
  RenewableSources_eqFunction_955(data, threadData);
  RenewableSources_eqFunction_3736(data, threadData);
  RenewableSources_eqFunction_957(data, threadData);
  RenewableSources_eqFunction_958(data, threadData);
  RenewableSources_eqFunction_3739(data, threadData);
  RenewableSources_eqFunction_3740(data, threadData);
  RenewableSources_eqFunction_4010(data, threadData);
  RenewableSources_eqFunction_962(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif