#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionCommandCalledShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanionCommandCalledShot.CompanionCommandCalledShot_C
// 0x0000 (0x0058 - 0x0058)
class UCompanionCommandCalledShot_C : public UDecisionTree_CompanionCalledShot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompanionCommandCalledShot.CompanionCommandCalledShot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
