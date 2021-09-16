#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EliteRich_04_Var2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EliteRich_04_Var2.EliteRich_04_Var2_C
// 0x0000 (0x0370 - 0x0370)
class UEliteRich_04_Var2_C : public UArmor_EliteRich_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EliteRich_04_Var2.EliteRich_04_Var2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
