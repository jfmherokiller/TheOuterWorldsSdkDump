#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HndGn_UI_Preview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HndGn_UI_Preview.HndGn_UI_Preview_C
// 0x0000 (0x0210 - 0x0210)
class UHndGn_UI_Preview_C : public UPreviewWeaponAnimations
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HndGn_UI_Preview.HndGn_UI_Preview_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
