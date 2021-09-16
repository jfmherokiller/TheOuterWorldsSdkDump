#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendingContainer_SC_Broken_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VendingContainer_SC_Broken_BP.VendingContainer_SC_Broken_BP_C
// 0x0000 (0x0428 - 0x0428)
class AVendingContainer_SC_Broken_BP_C : public ABrokenVending_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VendingContainer_SC_Broken_BP.VendingContainer_SC_Broken_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
