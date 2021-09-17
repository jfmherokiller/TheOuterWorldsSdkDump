#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FakePlayerShip_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FakePlayerShip_BP.FakePlayerShip_BP_C
// 0x00B8 (0x04B8 - 0x0400)
class AFakePlayerShip_BP_C : public AShipLocation
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0400(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FakePlayerShip_BP.FakePlayerShip_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_OnShipMeshLoaded(class UObject* LoadedObject);
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_OnShipDoorLoaded(class UObject* LoadedObject);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ShipLocationActivated();
	void STATIC_ShipLocationDeactivated();
	void STATIC_ExecuteUbergraph_FakePlayerShip_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
