#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0015_ShipInt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ex_0015_ShipInt.Ex_0015_ShipInt_C
// 0x0068 (0x03F8 - 0x0390)
class AEx_0015_ShipInt_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0390(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ex_0015_ShipInt.Ex_0015_ShipInt_C");
		return ptr;
	}


	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_Power_Up__FinishedFunc();
	void STATIC_Power_Up__UpdateFunc();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ShipPowerOn();
	void STATIC_RestartShipEngineVFX();
	void STATIC_ExecuteUbergraph_Ex_0015_ShipInt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
