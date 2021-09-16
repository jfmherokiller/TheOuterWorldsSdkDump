#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_Revolver_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SC_Revolver_AnimBP.SC_Revolver_AnimBP_C
// 0x0150 (0x0500 - 0x03B0)
class USC_Revolver_AnimBP_C : public UWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x03B0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SC_Revolver_AnimBP.SC_Revolver_AnimBP_C");
		return ptr;
	}


	void STATIC_ExecuteUbergraph_SC_Revolver_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
