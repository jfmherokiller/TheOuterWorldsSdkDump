#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PointOfNoReturnRollback_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfNoReturnRollback_BP.PointOfNoReturnRollback_BP_C
// 0x0000 (0x0110 - 0x0110)
class UPointOfNoReturnRollback_BP_C : public UPointOfNoReturnRollbackData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PointOfNoReturnRollback_BP.PointOfNoReturnRollback_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
