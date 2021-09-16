#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TPVLocomotionAnimationSet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TPVLocomotionAnimationSet.TPVLocomotionAnimationSet_C
// 0x0000 (0x0230 - 0x0230)
class UTPVLocomotionAnimationSet_C : public UTPVPersonalitySet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TPVLocomotionAnimationSet.TPVLocomotionAnimationSet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
