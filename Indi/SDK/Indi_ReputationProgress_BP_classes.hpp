#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ReputationProgress_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReputationProgress_BP.ReputationProgress_BP_C
// 0x0011 (0x0251 - 0x0240)
class UReputationProgress_BP_C : public UReputationProgressWidget
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0240(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReputationProgress_BP.ReputationProgress_BP_C");
		return ptr;
	}


	void STATIC_PreConstruct(bool* IsDesignTime);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_ReputationProgress_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
