#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CargoDoor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CargoDoor_BP.CargoDoor_BP_C
// 0x0090 (0x0688 - 0x05F8)
class ACargoDoor_BP_C : public ADoorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x05F8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CargoDoor_BP.CargoDoor_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_AnimateDoors__FinishedFunc();
	void STATIC_AnimateDoors__UpdateFunc();
	void STATIC_OnAnimateOpen(bool* InstantAnimation);
	void STATIC_OnAnimateClose(bool* IgnoreSound, bool* InstantAnimation);
	void STATIC_OnStateChanged();
	void STATIC_ExecuteUbergraph_CargoDoor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
