#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Creature_Gorillian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Creature_Gorillian.Base_Creature_Gorillian_C
// 0x0008 (0x1108 - 0x1100)
class ABase_Creature_Gorillian_C : public ABase_Ai_Character_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Creature_Gorillian.Base_Creature_Gorillian_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
