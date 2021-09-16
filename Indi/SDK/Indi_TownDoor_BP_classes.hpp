#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TownDoor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TownDoor_BP.TownDoor_BP_C
// 0x0054 (0x064C - 0x05F8)
class ATownDoor_BP_C : public ADoorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x05F8(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TownDoor_BP.TownDoor_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_AnimateDoors__FinishedFunc();
	void STATIC_AnimateDoors__UpdateFunc();
	void STATIC_OnStateChanged();
	void STATIC_OnAnimateOpen(bool* InstantAnimation);
	void STATIC_OnAnimateClose(bool* IgnoreSound, bool* InstantAnimation);
	void STATIC_ExecuteUbergraph_TownDoor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
