#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InteractableFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InteractableFunctionLibrary.InteractableFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UInteractableFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractableFunctionLibrary.InteractableFunctionLibrary_C");
		return ptr;
	}


	void STATIC_UpdateOCLCAC(bool IsEmpty, class UObject* __WorldContext, TArray<class AActor*>* Array);
	void STATIC_SetupCAC(class UOCLComponent* OCL, class UObject* __WorldContext, TArray<class AActor*>* Array);
	void STATIC_FormatWithObjectName(const struct FText& Format, class UObject* Object, class UObject* __WorldContext);
	void STATIC_AssignMaterialInstanceBySlotName(class UStaticMeshComponent* MeshComponentIn, const struct FName& MaterialSlotNameIn, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialInstanceOut, class UMaterialInstanceDynamic** Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
