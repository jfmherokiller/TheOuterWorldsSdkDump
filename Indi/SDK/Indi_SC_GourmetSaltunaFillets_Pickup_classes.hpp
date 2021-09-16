#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_GourmetSaltunaFillets_Pickup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_GourmetSaltunaFillets_Pickup.SC_GourmetSaltunaFillets_Pickup_C
// 0x0000 (0x0700 - 0x0700)
class ASC_GourmetSaltunaFillets_Pickup_C : public APickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_GourmetSaltunaFillets_Pickup.SC_GourmetSaltunaFillets_Pickup_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
