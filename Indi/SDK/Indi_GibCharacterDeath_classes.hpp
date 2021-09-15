#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GibCharacterDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GibCharacterDeath.GibCharacterDeath_C
// 0x0010 (0x0161 - 0x0151)
class UGibCharacterDeath_C : public UBaseCharacterDeath_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0151(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GibCharacterDeath.GibCharacterDeath_C");
		return ptr;
	}


	void STATIC_Execute(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_ExecuteUbergraph_GibCharacterDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
