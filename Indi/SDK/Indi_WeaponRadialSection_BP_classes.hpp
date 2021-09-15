#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WeaponRadialSection_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponRadialSection_BP.WeaponRadialSection_BP_C
// 0x0008 (0x0248 - 0x0240)
class UWeaponRadialSection_BP_C : public UWeaponRadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponRadialSection_BP.WeaponRadialSection_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_WeaponRadialSection_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
