#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_HeadGear_MoonMan_Uni_DefectiveMoon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HeadGear_MoonMan_Uni_DefectiveMoon.HeadGear_MoonMan_Uni_DefectiveMoon_C
// 0x0000 (0x02B0 - 0x02B0)
class UHeadGear_MoonMan_Uni_DefectiveMoon_C : public UHelmet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeadGear_MoonMan_Uni_DefectiveMoon.HeadGear_MoonMan_Uni_DefectiveMoon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
