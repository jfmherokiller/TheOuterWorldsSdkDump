#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Bedroll_PlayerOnly_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bedroll_PlayerOnly_BP.Bedroll_PlayerOnly_BP_C
// 0x0000 (0x03E0 - 0x03E0)
class ABedroll_PlayerOnly_BP_C : public ABedBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bedroll_PlayerOnly_BP.Bedroll_PlayerOnly_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
