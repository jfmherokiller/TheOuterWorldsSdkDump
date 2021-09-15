#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ReputationDetails_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReputationDetails_BP.ReputationDetails_BP_C
// 0x0018 (0x0320 - 0x0308)
class UReputationDetails_BP_C : public UReputationDetailsWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0308(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReputationDetails_BP.ReputationDetails_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
