#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Camera_Shake_CompMelee_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Camera_Shake_CompMelee_01.BP_Camera_Shake_CompMelee_01_C
// 0x0000 (0x0170 - 0x0170)
class UBP_Camera_Shake_CompMelee_01_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera_Shake_CompMelee_01.BP_Camera_Shake_CompMelee_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
