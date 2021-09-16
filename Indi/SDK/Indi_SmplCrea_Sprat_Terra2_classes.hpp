#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SmplCrea_Sprat_Terra2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SmplCrea_Sprat_Terra2.SmplCrea_Sprat_Terra2_C
// 0x0000 (0x1108 - 0x1108)
class ASmplCrea_Sprat_Terra2_C : public ABase_SmplCrea_Sprat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmplCrea_Sprat_Terra2.SmplCrea_Sprat_Terra2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
