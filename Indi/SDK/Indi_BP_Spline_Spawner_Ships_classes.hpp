#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Spline_Spawner_Ships_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spline_Spawner_Ships.BP_Spline_Spawner_Ships_C
// 0x0000 (0x04A1 - 0x04A1)
class ABP_Spline_Spawner_Ships_C : public ABP_Spline_Spawner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spline_Spawner_Ships.BP_Spline_Spawner_Ships_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
