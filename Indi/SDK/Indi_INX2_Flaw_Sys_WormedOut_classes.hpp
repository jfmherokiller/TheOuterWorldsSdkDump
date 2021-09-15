#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INX2_Flaw_Sys_WormedOut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INX2_Flaw_Sys_WormedOut.INX2_Flaw_Sys_WormedOut_C
// 0x0000 (0x0088 - 0x0088)
class UINX2_Flaw_Sys_WormedOut_C : public UFlaw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INX2_Flaw_Sys_WormedOut.INX2_Flaw_Sys_WormedOut_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
