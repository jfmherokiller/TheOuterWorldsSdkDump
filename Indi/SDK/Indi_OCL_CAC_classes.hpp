#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OCL_CAC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OCL_CAC.OCL_CAC_C
// 0x0000 (0x0030 - 0x0030)
class UOCL_CAC_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OCL_CAC.OCL_CAC_C");
		return ptr;
	}


	void STATIC_Update(bool IsEmpty, bool* Unused);
	void STATIC_Setup(class UOCLComponent* OCL, bool* Unused);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
