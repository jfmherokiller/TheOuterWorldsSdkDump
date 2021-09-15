#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_DynamicTOD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicTOD.BP_DynamicTOD_C
// 0x0528 (0x1078 - 0x0B50)
class ABP_DynamicTOD_C : public ADynamicTOD
{
public:
	unsigned char                                      UnknownData00[0x528];                                     // 0x0B50(0x0528) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicTOD.BP_DynamicTOD_C");
		return ptr;
	}


	void STATIC_SetWetnessDependentMPC(float Wetness);
	struct FName GetWeatherWwiseStateName();
	class UParticleSystem* GetWeatherParticleSystem();
	void STATIC_FOR_REFERENCE_ONLY_UpdateTwilight();
	void STATIC_FOR_REFERENCE_ONLY_InitializeComponents();
	void STATIC_FOR_REFERENCE_ONLY_SetShadowMovementMode();
	void STATIC_FOR_REFERENCE_ONLY_RotateCelestialObjectWithStep(float NormalizedTime, float OrbitalPlaneOffsetAngle, float OrbitalTilt, float RiseAngle, class UCurveFloat* ElevationCurve, struct FRotator* FinalRotation, struct FVector* FinalVector);
	void STATIC_FOR_REFERENCE_ONLY_UpdateMoons();
	void STATIC_FOR_REFERENCE_ONLY_UpdateClouds(float _24HourTime);
	void STATIC_FOR_REFERENCE_ONLY_UpdateCloudMapDayState(float _24HourTime);
	void STATIC_VFX_Material_Update();
	void STATIC_FOR_REFERENCE_ONLY_RotateCelestialBody(float NormalizedTime, float OrbitalPlaneOffsetAngle, float OrbitalTilt, float RiseAngle, class UCurveFloat* ElevationCurve, struct FRotator* FinalRotation, struct FVector* FinalVector);
	void STATIC_FOR_REFERENCE_ONLY_UpdateSkylight();
	void STATIC_FOR_REFERENCE_ONLY_PostProcess();
	void STATIC_FOR_REFERENCE_ONLY_LightAngle(class UDirectionalLightComponent* DirectionalLight, float* Angle);
	void STATIC_FOR_REFERENCE_ONLY_UpdateSky();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_Refresh_Settings();
	void STATIC_DEPRECATED_Begin_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_DEPRECATED_End_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_DEPRECATED_PP_BlendEvent();
	void STATIC_ToggleStepShadow();
	void STATIC_SetStepShadow(float TimeBetweenUpdates, float UpdateLength);
	void STATIC_SetWetness(float Wetness);
	void STATIC_WeatherTimelineUpdateForward(float* CurrentWeatherAmount, float* CurrentMaterialWetness);
	void STATIC_WeatherTimelineUpdateReverse(float* CurrentWeatherAmount, float* CurrentMaterialWetness);
	void STATIC_DEPRECATED_Weather_Start();
	void STATIC_DEPRECATED_Weather_End();
	void STATIC_ExecuteUbergraph_BP_DynamicTOD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
