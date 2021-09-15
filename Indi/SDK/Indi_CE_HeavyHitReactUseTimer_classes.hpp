#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_HeavyHitReactUseTimer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_HeavyHitReactUseTimer.CE_HeavyHitReactUseTimer_C
// 0x0000 (0x0190 - 0x0190)
class UCE_HeavyHitReactUseTimer_C : public UHitReactionStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_HeavyHitReactUseTimer.CE_HeavyHitReactUseTimer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
