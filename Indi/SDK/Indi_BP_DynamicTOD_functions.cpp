// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_DynamicTOD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DynamicTOD.BP_DynamicTOD_C.SetWetnessDependentMPC
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Wetness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_SetWetnessDependentMPC(float Wetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.SetWetnessDependentMPC");

	ABP_DynamicTOD_C_SetWetnessDependentMPC_Params params;
	params.Wetness = Wetness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherWwiseStateName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_DynamicTOD_C::GetWeatherWwiseStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherWwiseStateName");

	ABP_DynamicTOD_C_GetWeatherWwiseStateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherParticleSystem
// ()
// Parameters:
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* ABP_DynamicTOD_C::GetWeatherParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherParticleSystem");

	ABP_DynamicTOD_C_GetWeatherParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateTwilight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_UpdateTwilight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateTwilight");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateTwilight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_InitializeComponents
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_InitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_InitializeComponents");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_InitializeComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_SetShadowMovementMode
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_SetShadowMovementMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_SetShadowMovementMode");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_SetShadowMovementMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OrbitalPlaneOffsetAngle        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OrbitalTilt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RiseAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             ElevationCurve                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                FinalRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FinalVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep(float NormalizedTime, float OrbitalPlaneOffsetAngle, float OrbitalTilt, float RiseAngle, class UCurveFloat* ElevationCurve, struct FRotator* FinalRotation, struct FVector* FinalVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep_Params params;
	params.NormalizedTime = NormalizedTime;
	params.OrbitalPlaneOffsetAngle = OrbitalPlaneOffsetAngle;
	params.OrbitalTilt = OrbitalTilt;
	params.RiseAngle = RiseAngle;
	params.ElevationCurve = ElevationCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalRotation != nullptr)
		*FinalRotation = params.FinalRotation;
	if (FinalVector != nullptr)
		*FinalVector = params.FinalVector;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateMoons
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_UpdateMoons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateMoons");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateMoons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateClouds
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          _24HourTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_UpdateClouds(float _24HourTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateClouds");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateClouds_Params params;
	params._24HourTime = _24HourTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateCloudMapDayState
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          _24HourTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_UpdateCloudMapDayState(float _24HourTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateCloudMapDayState");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateCloudMapDayState_Params params;
	params._24HourTime = _24HourTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.VFX_Material_Update
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_VFX_Material_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.VFX_Material_Update");

	ABP_DynamicTOD_C_VFX_Material_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialBody
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NormalizedTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OrbitalPlaneOffsetAngle        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OrbitalTilt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RiseAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             ElevationCurve                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                FinalRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FinalVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_RotateCelestialBody(float NormalizedTime, float OrbitalPlaneOffsetAngle, float OrbitalTilt, float RiseAngle, class UCurveFloat* ElevationCurve, struct FRotator* FinalRotation, struct FVector* FinalVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialBody");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_RotateCelestialBody_Params params;
	params.NormalizedTime = NormalizedTime;
	params.OrbitalPlaneOffsetAngle = OrbitalPlaneOffsetAngle;
	params.OrbitalTilt = OrbitalTilt;
	params.RiseAngle = RiseAngle;
	params.ElevationCurve = ElevationCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalRotation != nullptr)
		*FinalRotation = params.FinalRotation;
	if (FinalVector != nullptr)
		*FinalVector = params.FinalVector;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateSkylight
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_UpdateSkylight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateSkylight");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateSkylight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_PostProcess
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_PostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_PostProcess");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_PostProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_LightAngle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UDirectionalLightComponent* DirectionalLight               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_LightAngle(class UDirectionalLightComponent* DirectionalLight, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_LightAngle");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_LightAngle_Params params;
	params.DirectionalLight = DirectionalLight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateSky
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_FOR_REFERENCE_ONLY_UpdateSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateSky");

	ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateSky_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.UserConstructionScript");

	ABP_DynamicTOD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.ReceiveTick");

	ABP_DynamicTOD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.ReceiveBeginPlay");

	ABP_DynamicTOD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.Refresh Settings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_Refresh_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.Refresh Settings");

	ABP_DynamicTOD_C_Refresh_Settings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Begin_Overlap_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_DEPRECATED_Begin_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Begin_Overlap_Container");

	ABP_DynamicTOD_C_DEPRECATED_Begin_Overlap_Container_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_End_Overlap_Container
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_DEPRECATED_End_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_End_Overlap_Container");

	ABP_DynamicTOD_C_DEPRECATED_End_Overlap_Container_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_PP_BlendEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_DEPRECATED_PP_BlendEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_PP_BlendEvent");

	ABP_DynamicTOD_C_DEPRECATED_PP_BlendEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.ToggleStepShadow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_ToggleStepShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.ToggleStepShadow");

	ABP_DynamicTOD_C_ToggleStepShadow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.SetStepShadow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          TimeBetweenUpdates             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UpdateLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_SetStepShadow(float TimeBetweenUpdates, float UpdateLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.SetStepShadow");

	ABP_DynamicTOD_C_SetStepShadow_Params params;
	params.TimeBetweenUpdates = TimeBetweenUpdates;
	params.UpdateLength = UpdateLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.SetWetness
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          Wetness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_SetWetness(float Wetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.SetWetness");

	ABP_DynamicTOD_C_SetWetness_Params params;
	params.Wetness = Wetness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateForward
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         CurrentWeatherAmount           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentMaterialWetness         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_WeatherTimelineUpdateForward(float* CurrentWeatherAmount, float* CurrentMaterialWetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateForward");

	ABP_DynamicTOD_C_WeatherTimelineUpdateForward_Params params;
	params.CurrentWeatherAmount = CurrentWeatherAmount;
	params.CurrentMaterialWetness = CurrentMaterialWetness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateReverse
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         CurrentWeatherAmount           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentMaterialWetness         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_WeatherTimelineUpdateReverse(float* CurrentWeatherAmount, float* CurrentMaterialWetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateReverse");

	ABP_DynamicTOD_C_WeatherTimelineUpdateReverse_Params params;
	params.CurrentWeatherAmount = CurrentWeatherAmount;
	params.CurrentMaterialWetness = CurrentMaterialWetness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Weather_Start
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_DEPRECATED_Weather_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Weather_Start");

	ABP_DynamicTOD_C_DEPRECATED_Weather_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Weather_End
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_DynamicTOD_C::STATIC_DEPRECATED_Weather_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Weather_End");

	ABP_DynamicTOD_C_DEPRECATED_Weather_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DynamicTOD.BP_DynamicTOD_C.ExecuteUbergraph_BP_DynamicTOD
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicTOD_C::STATIC_ExecuteUbergraph_BP_DynamicTOD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamicTOD.BP_DynamicTOD_C.ExecuteUbergraph_BP_DynamicTOD");

	ABP_DynamicTOD_C_ExecuteUbergraph_BP_DynamicTOD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
