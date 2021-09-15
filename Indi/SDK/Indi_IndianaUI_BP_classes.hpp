#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaUI_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndianaUI_BP.IndianaUI_BP_C
// 0x0010 (0x0758 - 0x0748)
class AIndianaUI_BP_C : public AIndianaUI
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0748(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndianaUI_BP.IndianaUI_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_SetObjective(class AActor* Objective, const class FString& ObjectiveName);
	void STATIC_ExecuteUbergraph_IndianaUI_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
