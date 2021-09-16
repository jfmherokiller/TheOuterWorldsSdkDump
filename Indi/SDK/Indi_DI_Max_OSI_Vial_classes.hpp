#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DI_Max_OSI_Vial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DI_Max_OSI_Vial.DI_Max_OSI_Vial_C
// 0x0000 (0x01D0 - 0x01D0)
class UDI_Max_OSI_Vial_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DI_Max_OSI_Vial.DI_Max_OSI_Vial_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
