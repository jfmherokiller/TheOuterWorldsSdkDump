#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DismemberCharacterDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DismemberCharacterDeath.DismemberCharacterDeath_C
// 0x000F (0x0160 - 0x0151)
class UDismemberCharacterDeath_C : public UBaseCharacterDeath_C
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x0151(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DismemberCharacterDeath.DismemberCharacterDeath_C");
		return ptr;
	}


	void STATIC_AddTorsoGibParticles();
	void STATIC_Execute(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_ExecuteUbergraph_DismemberCharacterDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
