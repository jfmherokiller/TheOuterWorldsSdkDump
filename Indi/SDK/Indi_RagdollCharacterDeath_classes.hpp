#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RagdollCharacterDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RagdollCharacterDeath.RagdollCharacterDeath_C
// 0x001F (0x0170 - 0x0151)
class URagdollCharacterDeath_C : public UBaseCharacterDeath_C
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0151(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RagdollCharacterDeath.RagdollCharacterDeath_C");
		return ptr;
	}


	void STATIC_Execute(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_ExecuteOnReload(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_ExecuteUbergraph_RagdollCharacterDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
