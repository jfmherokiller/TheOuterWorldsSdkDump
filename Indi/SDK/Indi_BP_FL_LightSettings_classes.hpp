#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_FL_LightSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FL_LightSettings.BP_FL_LightSettings_C
// 0x0000 (0x0030 - 0x0030)
class UBP_FL_LightSettings_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FL_LightSettings.BP_FL_LightSettings_C");
		return ptr;
	}


	void STATIC_LightSettings(class UPointLightComponent* PointLight_Actor, class USpotLightComponent* SpotLight_Actor, float LightIntensity, float AttenuationRadius, float LightTemperature, const struct FLinearColor& LightColor, float InnerConeAngle, float OuterConeAngle, bool LightOn, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
