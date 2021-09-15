#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NavFilter_Pathing_Behavior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NavFilter_Pathing_Behavior.NavFilter_Pathing_Behavior_C
// 0x0000 (0x0058 - 0x0058)
class UNavFilter_Pathing_Behavior_C : public UNPCNavigationQueryFilter_Pathing
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_Pathing_Behavior.NavFilter_Pathing_Behavior_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
