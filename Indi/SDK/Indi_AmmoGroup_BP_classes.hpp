#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AmmoGroup_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AmmoGroup_BP.AmmoGroup_BP_C
// 0x0028 (0x02E8 - 0x02C0)
class UAmmoGroup_BP_C : public UInventoryWeaponAmmoGroupWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AmmoGroup_BP.AmmoGroup_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_OnHighlightChange(bool* bHighlight);
	void STATIC_ExecuteUbergraph_AmmoGroup_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
