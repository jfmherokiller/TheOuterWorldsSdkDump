#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NPC_Sound_CanidFeral_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPC_Sound_CanidFeral.NPC_Sound_CanidFeral_C
// 0x0008 (0x02C8 - 0x02C0)
class UNPC_Sound_CanidFeral_C : public UIndianaAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Sound_CanidFeral.NPC_Sound_CanidFeral_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_NPC_Sound_CanidFeral(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
