#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Human_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Human.Base_Human_C
// 0x0020 (0x1120 - 0x1100)
class ABase_Human_C : public ABase_Ai_Character_C
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Human.Base_Human_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Base_Human(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
