#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EliteRich_05_Var1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EliteRich_05_Var1.EliteRich_05_Var1_C
// 0x0000 (0x0370 - 0x0370)
class UEliteRich_05_Var1_C : public UArmor_EliteRich_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EliteRich_05_Var1.EliteRich_05_Var1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
