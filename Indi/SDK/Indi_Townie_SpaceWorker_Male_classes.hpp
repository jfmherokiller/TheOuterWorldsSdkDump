#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Townie_SpaceWorker_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Townie_SpaceWorker_Male.Townie_SpaceWorker_Male_C
// 0x0000 (0x1120 - 0x1120)
class ATownie_SpaceWorker_Male_C : public ABase_Townie_SpaceWorker_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Townie_SpaceWorker_Male.Townie_SpaceWorker_Male_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
