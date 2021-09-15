#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INX2_T_Pilothouse_Tourist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INX2_T_Pilothouse_Tourist.INX2_T_Pilothouse_Tourist_C
// 0x0000 (0x0238 - 0x0238)
class UINX2_T_Pilothouse_Tourist_C : public UT_Generic_Neutral_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INX2_T_Pilothouse_Tourist.INX2_T_Pilothouse_Tourist_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
