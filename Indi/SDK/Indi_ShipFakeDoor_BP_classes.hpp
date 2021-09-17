#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShipFakeDoor_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShipFakeDoor_BP.ShipFakeDoor_BP_C
// 0x0000 (0x0480 - 0x0480)
class AShipFakeDoor_BP_C : public AShipFakeDoorBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShipFakeDoor_BP.ShipFakeDoor_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
