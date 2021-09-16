#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi__0002_Elev_Cannery_Tower_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass _0002_Elev_Cannery_Tower_BP._0002_Elev_Cannery_Tower_BP_C
// 0x0008 (0x01E0 - 0x01D8)
class U_0002_Elev_Cannery_Tower_BP_C : public UElevatorAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass _0002_Elev_Cannery_Tower_BP._0002_Elev_Cannery_Tower_BP_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph__0002_Elev_Cannery_Tower_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
