#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Food_CP_WoolyFilet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Food_CP_WoolyFilet.Food_CP_WoolyFilet_C
// 0x0000 (0x0230 - 0x0230)
class UFood_CP_WoolyFilet_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Food_CP_WoolyFilet.Food_CP_WoolyFilet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
