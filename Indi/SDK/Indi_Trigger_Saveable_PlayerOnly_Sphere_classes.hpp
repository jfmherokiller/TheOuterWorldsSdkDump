#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Trigger_Saveable_PlayerOnly_Sphere_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trigger_Saveable_PlayerOnly_Sphere.Trigger_Saveable_PlayerOnly_Sphere_C
// 0x0008 (0x03E0 - 0x03D8)
class ATrigger_Saveable_PlayerOnly_Sphere_C : public ATriggerSphere
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trigger_Saveable_PlayerOnly_Sphere.Trigger_Saveable_PlayerOnly_Sphere_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
