#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_ActorComponent_FlyBy_Emitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ActorComponent_FlyBy_Emitter.BP_ActorComponent_FlyBy_Emitter_C
// 0x0000 (0x04D0 - 0x04D0)
class UBP_ActorComponent_FlyBy_Emitter_C : public UIndianaFlybyAkComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActorComponent_FlyBy_Emitter.BP_ActorComponent_FlyBy_Emitter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
