#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Creature_Canid_Feral_StealthTutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C
// 0x0008 (0x1178 - 0x1170)
class ACreature_Canid_Feral_StealthTutorial_C : public ABase_Creature_Canid_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Creature_Canid_Feral_StealthTutorial.Creature_Canid_Feral_StealthTutorial_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Creature_Canid_Feral_StealthTutorial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
