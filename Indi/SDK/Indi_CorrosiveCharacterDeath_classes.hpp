#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CorrosiveCharacterDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CorrosiveCharacterDeath.CorrosiveCharacterDeath_C
// 0x000F (0x0160 - 0x0151)
class UCorrosiveCharacterDeath_C : public UBaseCharacterDeath_C
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x0151(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorrosiveCharacterDeath.CorrosiveCharacterDeath_C");
		return ptr;
	}


	void STATIC_Execute(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_Tick(float* Delta);
	void STATIC_ExecuteOnReload(class UCharacterDeathComponent** InDeathComponent);
	void STATIC_ExecuteUbergraph_CorrosiveCharacterDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
