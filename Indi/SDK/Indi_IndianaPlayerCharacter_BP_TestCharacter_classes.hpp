#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaPlayerCharacter_BP_TestCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndianaPlayerCharacter_BP_TestCharacter.IndianaPlayerCharacter_BP_TestCharacter_C
// 0x04F8 (0x1F40 - 0x1A48)
class AIndianaPlayerCharacter_BP_TestCharacter_C : public AIndianaPlayerCharacter_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x1A48(0x04F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndianaPlayerCharacter_BP_TestCharacter.IndianaPlayerCharacter_BP_TestCharacter_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
