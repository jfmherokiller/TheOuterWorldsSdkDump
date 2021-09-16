#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drug_Cleo_MetallisysGel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drug_Cleo_MetallisysGel.Drug_Cleo_MetallisysGel_C
// 0x0000 (0x0230 - 0x0230)
class UDrug_Cleo_MetallisysGel_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drug_Cleo_MetallisysGel.Drug_Cleo_MetallisysGel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
