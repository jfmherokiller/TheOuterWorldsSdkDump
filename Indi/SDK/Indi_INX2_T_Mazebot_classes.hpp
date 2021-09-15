#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INX2_T_Mazebot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INX2_T_Mazebot.INX2_T_Mazebot_C
// 0x0000 (0x0238 - 0x0238)
class UINX2_T_Mazebot_C : public UT_Generic_Neutral_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INX2_T_Mazebot.INX2_T_Mazebot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
