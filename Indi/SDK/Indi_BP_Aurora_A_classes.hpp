#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Aurora_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Aurora_A.BP_Aurora_A_C
// 0x0084 (0x040C - 0x0388)
class ABP_Aurora_A_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0388(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Aurora_A.BP_Aurora_A_C");
		return ptr;
	}


	void STATIC_SetOpacity(float NewOpacity);
	void STATIC_UserConstructionScript();
	void STATIC_FadeInTimeline__FinishedFunc();
	void STATIC_FadeInTimeline__UpdateFunc();
	void STATIC_FadeIn(float FadeTimeSeconds);
	void STATIC_FadeOut(float FadeTimeSeconds);
	void STATIC_ExecuteUbergraph_BP_Aurora_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
