#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionAbility_Camera_Shake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanionAbility_Camera_Shake.CompanionAbility_Camera_Shake_C
// 0x0000 (0x0170 - 0x0170)
class UCompanionAbility_Camera_Shake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompanionAbility_Camera_Shake.CompanionAbility_Camera_Shake_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
