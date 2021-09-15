#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EnergyCharacterDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EnergyCharacterDeath.EnergyCharacterDeath_C
// 0x003F (0x0190 - 0x0151)
class UEnergyCharacterDeath_C : public UBaseCharacterDeath_C
{
public:
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0151(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnergyCharacterDeath.EnergyCharacterDeath_C");
		return ptr;
	}


	void STATIC_Execute(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_Tick(float* Delta);
	void STATIC_ExecuteOnReload(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_ExecuteUbergraph_EnergyCharacterDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
