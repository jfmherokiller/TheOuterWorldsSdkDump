#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_SmartDodge_NoCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_SmartDodge_NoCooldown.META_SmartDodge_NoCooldown_C
// 0x0000 (0x0058 - 0x0058)
class UMETA_SmartDodge_NoCooldown_C : public UDecisionTree_Dodge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_SmartDodge_NoCooldown.META_SmartDodge_NoCooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
