#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CashRegister_A_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CashRegister_A_BP.CashRegister_A_BP_C
// 0x0008 (0x0630 - 0x0628)
class ACashRegister_A_BP_C : public ASimpleContainer_BP_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0628(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CashRegister_A_BP.CashRegister_A_BP_C");
		return ptr;
	}


	void STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot);
	void STATIC_UserConstructionScript();
	void STATIC_ApplyLight();
	void STATIC_ExecuteUbergraph_CashRegister_A_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
