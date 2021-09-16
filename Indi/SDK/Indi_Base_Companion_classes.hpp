#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Companion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Companion.Base_Companion_C
// 0x0018 (0x1138 - 0x1120)
class ABase_Companion_C : public ABase_Human_C
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x1120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Companion.Base_Companion_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_CompanionOutline(bool bEnable);
	void STATIC_Cinematic_Mode_Change(bool bCinematicMode);
	void STATIC_ExecuteUbergraph_Base_Companion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
