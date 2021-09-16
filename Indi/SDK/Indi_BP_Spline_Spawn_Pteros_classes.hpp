#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Spline_Spawn_Pteros_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spline_Spawn_Pteros.BP_Spline_Spawn_Pteros_C
// 0x0000 (0x04A1 - 0x04A1)
class ABP_Spline_Spawn_Pteros_C : public ABP_Spline_Spawner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spline_Spawn_Pteros.BP_Spline_Spawn_Pteros_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
