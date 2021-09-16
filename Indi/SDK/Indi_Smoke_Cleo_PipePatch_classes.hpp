#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Smoke_Cleo_PipePatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Smoke_Cleo_PipePatch.Smoke_Cleo_PipePatch_C
// 0x0000 (0x0230 - 0x0230)
class USmoke_Cleo_PipePatch_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Smoke_Cleo_PipePatch.Smoke_Cleo_PipePatch_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
