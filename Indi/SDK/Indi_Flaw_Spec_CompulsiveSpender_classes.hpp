#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Flaw_Spec_CompulsiveSpender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Flaw_Spec_CompulsiveSpender.Flaw_Spec_CompulsiveSpender_C
// 0x0000 (0x0088 - 0x0088)
class UFlaw_Spec_CompulsiveSpender_C : public UFlaw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flaw_Spec_CompulsiveSpender.Flaw_Spec_CompulsiveSpender_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
