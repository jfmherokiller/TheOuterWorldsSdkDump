#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_LookUp_NoActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Furniture_LookUp_NoActor.Furniture_LookUp_NoActor_C
// 0x0000 (0x0398 - 0x0398)
class AFurniture_LookUp_NoActor_C : public AFurniture_LookMonitor_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_LookUp_NoActor.Furniture_LookUp_NoActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
