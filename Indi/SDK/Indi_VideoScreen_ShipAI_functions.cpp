// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VideoScreen_ShipAI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.Play_Screen_Off
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVideoScreen_ShipAI_C::STATIC_Play_Screen_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.Play_Screen_Off");

	UVideoScreen_ShipAI_C_Play_Screen_Off_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.Play_Screen_On
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UVideoScreen_ShipAI_C::STATIC_Play_Screen_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.Play_Screen_On");

	UVideoScreen_ShipAI_C_Play_Screen_On_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationNodeChanged
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// class AActor**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NodeID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVideoScreen_ShipAI_C::ConversationNodeChanged(class AActor** Character, class AActor** Camera, class AActor** Audio, int* NodeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationNodeChanged");

	UVideoScreen_ShipAI_C_ConversationNodeChanged_Params params;
	params.Character = Character;
	params.Camera = Camera;
	params.Audio = Audio;
	params.NodeID = NodeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationEnded
// ()
// Parameters:
// struct FGuid*                  Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVideoScreen_ShipAI_C::ConversationEnded(struct FGuid* Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationEnded");

	UVideoScreen_ShipAI_C_ConversationEnded_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationStarted
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// class AActor**                 Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           NodeID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVideoScreen_ShipAI_C::ConversationStarted(class AActor** Speaker, struct FGuid* Guid, int* NodeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationStarted");

	UVideoScreen_ShipAI_C_ConversationStarted_Params params;
	params.Speaker = Speaker;
	params.Guid = Guid;
	params.NodeID = NodeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
