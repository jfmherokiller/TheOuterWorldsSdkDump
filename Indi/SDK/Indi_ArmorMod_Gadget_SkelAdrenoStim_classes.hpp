#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ArmorMod_Gadget_SkelAdrenoStim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorMod_Gadget_SkelAdrenoStim.ArmorMod_Gadget_SkelAdrenoStim_C
// 0x0000 (0x0260 - 0x0260)
class UArmorMod_Gadget_SkelAdrenoStim_C : public UArmorModResistance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorMod_Gadget_SkelAdrenoStim.ArmorMod_Gadget_SkelAdrenoStim_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
