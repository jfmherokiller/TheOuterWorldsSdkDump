#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DST_Box_Shock_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DST_Box_Shock_BP.DST_Box_Shock_BP_C
// 0x0000 (0x05B8 - 0x05B8)
class ADST_Box_Shock_BP_C : public ADST_Barrel_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DST_Box_Shock_BP.DST_Box_Shock_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
