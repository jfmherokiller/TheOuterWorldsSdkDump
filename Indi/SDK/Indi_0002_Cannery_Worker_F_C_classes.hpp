#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_Cannery_Worker_F_C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_Cannery_Worker_F_C.0002_Cannery_Worker_F_C_C
// 0x0000 (0x1120 - 0x1120)
class A0002_Cannery_Worker_F_C_C : public ATownie_SpaceWorker_Female_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_Cannery_Worker_F_C.0002_Cannery_Worker_F_C_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
