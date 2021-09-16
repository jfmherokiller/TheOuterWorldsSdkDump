#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Knockback_Trap_Barrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Knockback_Trap_Barrel.CE_Knockback_Trap_Barrel_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_Knockback_Trap_Barrel_C : public UCE_Knockback_Trap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Knockback_Trap_Barrel.CE_Knockback_Trap_Barrel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
