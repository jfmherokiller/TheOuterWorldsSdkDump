// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FL_VFX_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FL_VFX.FL_VFX_C.Hit_Flash
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FEventEffectParams      Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Scene_Color_Tint               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Delay_Duration                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_Hit_Flash(const struct FEventEffectParams& Params, class UObject* __WorldContext, struct FLinearColor* Scene_Color_Tint, float* Delay_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.Hit_Flash");

	UFL_VFX_C_Hit_Flash_Params params;
	params.Params = Params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scene_Color_Tint != nullptr)
		*Scene_Color_Tint = params.Scene_Color_Tint;
	if (Delay_Duration != nullptr)
		*Delay_Duration = params.Delay_Duration;
}


// Function FL_VFX.FL_VFX_C.Unlock_Doors
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_Unlock_Doors(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.Unlock_Doors");

	UFL_VFX_C_Unlock_Doors_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_VFX.FL_VFX_C.Decal_Spawn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      DecalMaterial                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Decal_Size_Min                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Decal_Size_Max                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Decal_Life_Min                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Decal_Life_Max                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Decal_Fade_Delay_Min           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Decal_Fade_Delay_Max           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_Decal_Spawn(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& Location, const struct FVector& Normal, float Decal_Size_Min, float Decal_Size_Max, float Decal_Life_Min, float Decal_Life_Max, float Decal_Fade_Delay_Min, float Decal_Fade_Delay_Max, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.Decal_Spawn");

	UFL_VFX_C_Decal_Spawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DecalMaterial = DecalMaterial;
	params.Location = Location;
	params.Normal = Normal;
	params.Decal_Size_Min = Decal_Size_Min;
	params.Decal_Size_Max = Decal_Size_Max;
	params.Decal_Life_Min = Decal_Life_Min;
	params.Decal_Life_Max = Decal_Life_Max;
	params.Decal_Fade_Delay_Min = Decal_Fade_Delay_Min;
	params.Decal_Fade_Delay_Max = Decal_Fade_Delay_Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_VFX.FL_VFX_C.MID_Creation_Static
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AStaticMeshActor*        Static_Mesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Material_Slot_Name             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Create_Child_MID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Child_Indices_Start            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Child_Components_Tags          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> MIDs                           (Parm, OutParm, ZeroConstructor)

void UFL_VFX_C::STATIC_MID_Creation_Static(class AStaticMeshActor* Static_Mesh, bool Create_Child_MID, int Child_Indices_Start, class UObject* __WorldContext, TArray<struct FName>* Material_Slot_Name, TArray<struct FName>* Child_Components_Tags, TArray<class UMaterialInstanceDynamic*>* MIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.MID_Creation_Static");

	UFL_VFX_C_MID_Creation_Static_Params params;
	params.Static_Mesh = Static_Mesh;
	params.Create_Child_MID = Create_Child_MID;
	params.Child_Indices_Start = Child_Indices_Start;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material_Slot_Name != nullptr)
		*Material_Slot_Name = params.Material_Slot_Name;
	if (Child_Components_Tags != nullptr)
		*Child_Components_Tags = params.Child_Components_Tags;
	if (MIDs != nullptr)
		*MIDs = params.MIDs;
}


// Function FL_VFX.FL_VFX_C.MID_Creation_Skeletal
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FName>           Material_Slot_Name             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Create_Child_MID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Child_Indices_Start            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Child_Components_Tags          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> MIDs                           (Parm, OutParm, ZeroConstructor)

void UFL_VFX_C::STATIC_MID_Creation_Skeletal(class USkeletalMeshComponent* Skeletal_Mesh, bool Create_Child_MID, int Child_Indices_Start, class UObject* __WorldContext, TArray<struct FName>* Material_Slot_Name, TArray<struct FName>* Child_Components_Tags, TArray<class UMaterialInstanceDynamic*>* MIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.MID_Creation_Skeletal");

	UFL_VFX_C_MID_Creation_Skeletal_Params params;
	params.Skeletal_Mesh = Skeletal_Mesh;
	params.Create_Child_MID = Create_Child_MID;
	params.Child_Indices_Start = Child_Indices_Start;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material_Slot_Name != nullptr)
		*Material_Slot_Name = params.Material_Slot_Name;
	if (Child_Components_Tags != nullptr)
		*Child_Components_Tags = params.Child_Components_Tags;
	if (MIDs != nullptr)
		*MIDs = params.MIDs;
}


// Function FL_VFX.FL_VFX_C.MID_Adjustments
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MIDs                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Mat_MID_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Mat_Slot_Params                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Mat_Slot_Floats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Mat_Colors_A                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Mat_Colors_B                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<EN_Material_Parameters>> Mat_Param_Change               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Lerp_Alpha                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Edited_Scalars                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Edited_Colors                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Reset_Values                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_MID_Adjustments(float Lerp_Alpha, bool Reset_Values, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* MIDs, TArray<int>* Mat_MID_Index, TArray<struct FName>* Mat_Slot_Params, TArray<struct FVector>* Mat_Slot_Floats, TArray<struct FLinearColor>* Mat_Colors_A, TArray<struct FLinearColor>* Mat_Colors_B, TArray<TEnumAsByte<EN_Material_Parameters>>* Mat_Param_Change, TArray<float>* Edited_Scalars, TArray<struct FLinearColor>* Edited_Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.MID_Adjustments");

	UFL_VFX_C_MID_Adjustments_Params params;
	params.Lerp_Alpha = Lerp_Alpha;
	params.Reset_Values = Reset_Values;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MIDs != nullptr)
		*MIDs = params.MIDs;
	if (Mat_MID_Index != nullptr)
		*Mat_MID_Index = params.Mat_MID_Index;
	if (Mat_Slot_Params != nullptr)
		*Mat_Slot_Params = params.Mat_Slot_Params;
	if (Mat_Slot_Floats != nullptr)
		*Mat_Slot_Floats = params.Mat_Slot_Floats;
	if (Mat_Colors_A != nullptr)
		*Mat_Colors_A = params.Mat_Colors_A;
	if (Mat_Colors_B != nullptr)
		*Mat_Colors_B = params.Mat_Colors_B;
	if (Mat_Param_Change != nullptr)
		*Mat_Param_Change = params.Mat_Param_Change;
	if (Edited_Scalars != nullptr)
		*Edited_Scalars = params.Edited_Scalars;
	if (Edited_Colors != nullptr)
		*Edited_Colors = params.Edited_Colors;
}


// Function FL_VFX.FL_VFX_C.Tagged_Children
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USceneComponent*         Parent_Mesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Child_Component_Tag            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialSlotName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> MIDs                           (Parm, OutParm, ZeroConstructor)

void UFL_VFX_C::STATIC_Tagged_Children(class USceneComponent* Parent_Mesh, const struct FName& Child_Component_Tag, const struct FName& MaterialSlotName, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid, TArray<class UMaterialInstanceDynamic*>* MIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.Tagged_Children");

	UFL_VFX_C_Tagged_Children_Params params;
	params.Parent_Mesh = Parent_Mesh;
	params.Child_Component_Tag = Child_Component_Tag;
	params.MaterialSlotName = MaterialSlotName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mid != nullptr)
		*Mid = params.Mid;
	if (MIDs != nullptr)
		*MIDs = params.MIDs;
}


// Function FL_VFX.FL_VFX_C.PS_Parameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<class UParticleSystemComponent*> PS_Array                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Set_Color                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Color_Param                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Float                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Float_Param                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Float                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Vector                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Vector_Param                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_PS_Parameters(bool Set_Color, const struct FName& Color_Param, const struct FLinearColor& Color, bool Set_Float, const struct FName& Float_Param, float Float, bool Set_Vector, const struct FName& Vector_Param, const struct FVector& Vector, class UObject* __WorldContext, TArray<class UParticleSystemComponent*>* PS_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.PS_Parameters");

	UFL_VFX_C_PS_Parameters_Params params;
	params.Set_Color = Set_Color;
	params.Color_Param = Color_Param;
	params.Color = Color;
	params.Set_Float = Set_Float;
	params.Float_Param = Float_Param;
	params.Float = Float;
	params.Set_Vector = Set_Vector;
	params.Vector_Param = Vector_Param;
	params.Vector = Vector;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PS_Array != nullptr)
		*PS_Array = params.PS_Array;
}


// Function FL_VFX.FL_VFX_C.Emitter_Toggle
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// TArray<struct FName>           Emitters                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UParticleSystemComponent*> Particle_Systems               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_Emitter_Toggle(bool Toggle, class UObject* __WorldContext, TArray<struct FName>* Emitters, TArray<class UParticleSystemComponent*>* Particle_Systems)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.Emitter_Toggle");

	UFL_VFX_C_Emitter_Toggle_Params params;
	params.Toggle = Toggle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Emitters != nullptr)
		*Emitters = params.Emitters;
	if (Particle_Systems != nullptr)
		*Particle_Systems = params.Particle_Systems;
}


// Function FL_VFX.FL_VFX_C.Death_Materials
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            RevealEmissiveColor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LeadingEdgeBlend               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RevealAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissiveLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LeadingEdgeAmount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RevealEdgeTightness            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissiveBaseValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                RevealRMEA                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                RevealNormal                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                RevealBaseColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Start_Transition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Character_MIDs                 (Parm, OutParm, ZeroConstructor)
// class UMaterialInstanceDynamic* Teeth_MID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFL_VFX_C::STATIC_Death_Materials(class USkeletalMeshComponent* Skeletal_Mesh, const struct FLinearColor& RevealEmissiveColor, float FadeOut, float LeadingEdgeBlend, float RevealAmount, float EmissiveLevel, float LeadingEdgeAmount, float RevealEdgeTightness, float EmissiveBaseValue, class UTexture* RevealRMEA, class UTexture* RevealNormal, class UTexture* RevealBaseColor, class AActor* Actor, class UObject* __WorldContext, bool* Start_Transition, TArray<class UMaterialInstanceDynamic*>* Character_MIDs, class UMaterialInstanceDynamic** Teeth_MID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_VFX.FL_VFX_C.Death_Materials");

	UFL_VFX_C_Death_Materials_Params params;
	params.Skeletal_Mesh = Skeletal_Mesh;
	params.RevealEmissiveColor = RevealEmissiveColor;
	params.FadeOut = FadeOut;
	params.LeadingEdgeBlend = LeadingEdgeBlend;
	params.RevealAmount = RevealAmount;
	params.EmissiveLevel = EmissiveLevel;
	params.LeadingEdgeAmount = LeadingEdgeAmount;
	params.RevealEdgeTightness = RevealEdgeTightness;
	params.EmissiveBaseValue = EmissiveBaseValue;
	params.RevealRMEA = RevealRMEA;
	params.RevealNormal = RevealNormal;
	params.RevealBaseColor = RevealBaseColor;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start_Transition != nullptr)
		*Start_Transition = params.Start_Transition;
	if (Character_MIDs != nullptr)
		*Character_MIDs = params.Character_MIDs;
	if (Teeth_MID != nullptr)
		*Teeth_MID = params.Teeth_MID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
