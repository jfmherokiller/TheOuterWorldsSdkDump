#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ENVurb_Details_09_Blueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENVurb_Details_09_Blueprint.ENVurb_Details_09_Blueprint_C
// 0x0000 (0x0398 - 0x0398)
class AENVurb_Details_09_Blueprint_C : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ENVurb_Details_09_Blueprint.ENVurb_Details_09_Blueprint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
