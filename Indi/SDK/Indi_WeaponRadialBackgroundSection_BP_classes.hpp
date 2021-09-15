#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponRadialBackgroundSection_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C
// 0x0010 (0x02D8 - 0x02C8)
class UWeaponRadialBackgroundSection_BP_C : public URadialBackgroundSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C");
		return ptr;
	}


	void STATIC_Deselect();
	void STATIC_Select();
	void STATIC_ExecuteUbergraph_WeaponRadialBackgroundSection_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
