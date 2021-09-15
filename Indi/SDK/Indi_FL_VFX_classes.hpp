#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FL_VFX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FL_VFX.FL_VFX_C
// 0x0000 (0x0030 - 0x0030)
class UFL_VFX_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FL_VFX.FL_VFX_C");
		return ptr;
	}


	void STATIC_Hit_Flash(const struct FEventEffectParams& Params, class UObject* __WorldContext, struct FLinearColor* Scene_Color_Tint, float* Delay_Duration);
	void STATIC_Unlock_Doors(class UObject* __WorldContext);
	void STATIC_Decal_Spawn(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& Location, const struct FVector& Normal, float Decal_Size_Min, float Decal_Size_Max, float Decal_Life_Min, float Decal_Life_Max, float Decal_Fade_Delay_Min, float Decal_Fade_Delay_Max, class UObject* __WorldContext);
	void STATIC_MID_Creation_Static(class AStaticMeshActor* Static_Mesh, bool Create_Child_MID, int Child_Indices_Start, class UObject* __WorldContext, TArray<struct FName>* Material_Slot_Name, TArray<struct FName>* Child_Components_Tags, TArray<class UMaterialInstanceDynamic*>* MIDs);
	void STATIC_MID_Creation_Skeletal(class USkeletalMeshComponent* Skeletal_Mesh, bool Create_Child_MID, int Child_Indices_Start, class UObject* __WorldContext, TArray<struct FName>* Material_Slot_Name, TArray<struct FName>* Child_Components_Tags, TArray<class UMaterialInstanceDynamic*>* MIDs);
	void STATIC_MID_Adjustments(float Lerp_Alpha, bool Reset_Values, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* MIDs, TArray<int>* Mat_MID_Index, TArray<struct FName>* Mat_Slot_Params, TArray<struct FVector>* Mat_Slot_Floats, TArray<struct FLinearColor>* Mat_Colors_A, TArray<struct FLinearColor>* Mat_Colors_B, TArray<TEnumAsByte<EN_Material_Parameters>>* Mat_Param_Change, TArray<float>* Edited_Scalars, TArray<struct FLinearColor>* Edited_Colors);
	void STATIC_Tagged_Children(class USceneComponent* Parent_Mesh, const struct FName& Child_Component_Tag, const struct FName& MaterialSlotName, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid, TArray<class UMaterialInstanceDynamic*>* MIDs);
	void STATIC_PS_Parameters(bool Set_Color, const struct FName& Color_Param, const struct FLinearColor& Color, bool Set_Float, const struct FName& Float_Param, float Float, bool Set_Vector, const struct FName& Vector_Param, const struct FVector& Vector, class UObject* __WorldContext, TArray<class UParticleSystemComponent*>* PS_Array);
	void STATIC_Emitter_Toggle(bool Toggle, class UObject* __WorldContext, TArray<struct FName>* Emitters, TArray<class UParticleSystemComponent*>* Particle_Systems);
	void STATIC_Death_Materials(class USkeletalMeshComponent* Skeletal_Mesh, const struct FLinearColor& RevealEmissiveColor, float FadeOut, float LeadingEdgeBlend, float RevealAmount, float EmissiveLevel, float LeadingEdgeAmount, float RevealEdgeTightness, float EmissiveBaseValue, class UTexture* RevealRMEA, class UTexture* RevealNormal, class UTexture* RevealBaseColor, class AActor* Actor, class UObject* __WorldContext, bool* Start_Transition, TArray<class UMaterialInstanceDynamic*>* Character_MIDs, class UMaterialInstanceDynamic** Teeth_MID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
