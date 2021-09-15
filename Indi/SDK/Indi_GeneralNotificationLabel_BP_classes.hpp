#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GeneralNotificationLabel_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GeneralNotificationLabel_BP.GeneralNotificationLabel_BP_C
// 0x0000 (0x0318 - 0x0318)
class UGeneralNotificationLabel_BP_C : public UInputLabelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GeneralNotificationLabel_BP.GeneralNotificationLabel_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
