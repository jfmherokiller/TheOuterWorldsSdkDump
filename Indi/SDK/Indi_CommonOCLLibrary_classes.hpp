#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CommonOCLLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CommonOCLLibrary.CommonOCLLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UCommonOCLLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CommonOCLLibrary.CommonOCLLibrary_C");
		return ptr;
	}


	void STATIC_OCL_Library_ToggleOpenCloseState(class UOCLComponent* Target, class AActor* Initiator, bool Force, bool Lock, bool Seal, bool IgnoreLockStatus, bool IgnoreStartEvent, bool IgnoreEndEvent, bool IgnoreSound, bool InstantAnimation, class UObject* __WorldContext, bool* IsOpen, bool* IsOpening, bool* IsClosed, bool* IsClosing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
