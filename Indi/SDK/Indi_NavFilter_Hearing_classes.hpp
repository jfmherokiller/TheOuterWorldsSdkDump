#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NavFilter_Hearing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NavFilter_Hearing.NavFilter_Hearing_C
// 0x0000 (0x0050 - 0x0050)
class UNavFilter_Hearing_C : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_Hearing.NavFilter_Hearing_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
