#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_DynamicTOD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DynamicTOD.BP_DynamicTOD_C.SetWetnessDependentMPC
struct ABP_DynamicTOD_C_SetWetnessDependentMPC_Params
{
	float                                              Wetness;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherWwiseStateName
struct ABP_DynamicTOD_C_GetWeatherWwiseStateName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.GetWeatherParticleSystem
struct ABP_DynamicTOD_C_GetWeatherParticleSystem_Params
{
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateTwilight
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateTwilight_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_InitializeComponents
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_InitializeComponents_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_SetShadowMovementMode
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_SetShadowMovementMode_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep_Params
{
	float                                              NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OrbitalPlaneOffsetAngle;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OrbitalTilt;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RiseAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ElevationCurve;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FinalRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FinalVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateMoons
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateMoons_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateClouds
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateClouds_Params
{
	float                                              _24HourTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateCloudMapDayState
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateCloudMapDayState_Params
{
	float                                              _24HourTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.VFX_Material_Update
struct ABP_DynamicTOD_C_VFX_Material_Update_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_RotateCelestialBody
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_RotateCelestialBody_Params
{
	float                                              NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OrbitalPlaneOffsetAngle;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OrbitalTilt;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RiseAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ElevationCurve;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FinalRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FinalVector;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateSkylight
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateSkylight_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_PostProcess
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_PostProcess_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_LightAngle
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_LightAngle_Params
{
	class UDirectionalLightComponent*                  DirectionalLight;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.FOR_REFERENCE_ONLY_UpdateSky
struct ABP_DynamicTOD_C_FOR_REFERENCE_ONLY_UpdateSky_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.UserConstructionScript
struct ABP_DynamicTOD_C_UserConstructionScript_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.ReceiveTick
struct ABP_DynamicTOD_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.ReceiveBeginPlay
struct ABP_DynamicTOD_C_ReceiveBeginPlay_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.Refresh Settings
struct ABP_DynamicTOD_C_Refresh_Settings_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Begin_Overlap_Container
struct ABP_DynamicTOD_C_DEPRECATED_Begin_Overlap_Container_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_End_Overlap_Container
struct ABP_DynamicTOD_C_DEPRECATED_End_Overlap_Container_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_PP_BlendEvent
struct ABP_DynamicTOD_C_DEPRECATED_PP_BlendEvent_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.ToggleStepShadow
struct ABP_DynamicTOD_C_ToggleStepShadow_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.SetStepShadow
struct ABP_DynamicTOD_C_SetStepShadow_Params
{
	float                                              TimeBetweenUpdates;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpdateLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.SetWetness
struct ABP_DynamicTOD_C_SetWetness_Params
{
	float                                              Wetness;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateForward
struct ABP_DynamicTOD_C_WeatherTimelineUpdateForward_Params
{
	float*                                             CurrentWeatherAmount;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentMaterialWetness;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.WeatherTimelineUpdateReverse
struct ABP_DynamicTOD_C_WeatherTimelineUpdateReverse_Params
{
	float*                                             CurrentWeatherAmount;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentMaterialWetness;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Weather_Start
struct ABP_DynamicTOD_C_DEPRECATED_Weather_Start_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.DEPRECATED_Weather_End
struct ABP_DynamicTOD_C_DEPRECATED_Weather_End_Params
{
};

// Function BP_DynamicTOD.BP_DynamicTOD_C.ExecuteUbergraph_BP_DynamicTOD
struct ABP_DynamicTOD_C_ExecuteUbergraph_BP_DynamicTOD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
