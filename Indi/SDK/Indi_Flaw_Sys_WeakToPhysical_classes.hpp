#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Flaw_Sys_WeakToPhysical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Flaw_Sys_WeakToPhysical.Flaw_Sys_WeakToPhysical_C
// 0x0000 (0x0088 - 0x0088)
class UFlaw_Sys_WeakToPhysical_C : public UFlaw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flaw_Sys_WeakToPhysical.Flaw_Sys_WeakToPhysical_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
