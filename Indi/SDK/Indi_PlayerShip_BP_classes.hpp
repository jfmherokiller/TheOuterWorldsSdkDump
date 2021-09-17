#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerShip_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerShip_BP.PlayerShip_BP_C
// 0x00C0 (0x04C0 - 0x0400)
class APlayerShip_BP_C : public AShipLocation
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0400(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerShip_BP.PlayerShip_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_OnShipMeshLoaded(class UObject* LoadedObject);
	void STATIC_OnShipDoorLoaded(class UObject* LoadedObject);
	void STATIC_ShipLocationActivated();
	void STATIC_ShipLocationDeactivated();
	void STATIC_ExecuteUbergraph_PlayerShip_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
