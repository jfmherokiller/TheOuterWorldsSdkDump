// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_FL_LightSettings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FL_LightSettings.BP_FL_LightSettings_C.LightSettings
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UPointLightComponent*    PointLight_Actor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpotLightComponent*     SpotLight_Actor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          LightIntensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AttenuationRadius              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LightTemperature               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LightColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InnerConeAngle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OuterConeAngle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FL_LightSettings_C::STATIC_LightSettings(class UPointLightComponent* PointLight_Actor, class USpotLightComponent* SpotLight_Actor, float LightIntensity, float AttenuationRadius, float LightTemperature, const struct FLinearColor& LightColor, float InnerConeAngle, float OuterConeAngle, bool LightOn, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_LightSettings.BP_FL_LightSettings_C.LightSettings");

	UBP_FL_LightSettings_C_LightSettings_Params params;
	params.PointLight_Actor = PointLight_Actor;
	params.SpotLight_Actor = SpotLight_Actor;
	params.LightIntensity = LightIntensity;
	params.AttenuationRadius = AttenuationRadius;
	params.LightTemperature = LightTemperature;
	params.LightColor = LightColor;
	params.InnerConeAngle = InnerConeAngle;
	params.OuterConeAngle = OuterConeAngle;
	params.LightOn = LightOn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
