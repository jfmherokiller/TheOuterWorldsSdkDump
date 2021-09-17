#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ShipFakeDoorBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShipFakeDoorBase_BP.ShipFakeDoorBase_BP_C
// 0x002C (0x0480 - 0x0454)
class AShipFakeDoorBase_BP_C : public ATeleportDoorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0454(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShipFakeDoorBase_BP.ShipFakeDoorBase_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ResetState();
	void STATIC_OnOpen();
	void STATIC_ExecuteUbergraph_ShipFakeDoorBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
