#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CartInfoWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CartInfoWidget_BP.CartInfoWidget_BP_C
// 0x0018 (0x0370 - 0x0358)
class UCartInfoWidget_BP_C : public UCartInfoWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0358(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CartInfoWidget_BP.CartInfoWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
