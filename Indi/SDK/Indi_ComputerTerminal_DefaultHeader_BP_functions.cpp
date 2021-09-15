// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComputerTerminal_DefaultHeader_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.FadeInLogoImage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UComputerTerminal_DefaultHeader_BP_C::STATIC_FadeInLogoImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.FadeInLogoImage");

	UComputerTerminal_DefaultHeader_BP_C_FadeInLogoImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComputerTerminal_DefaultHeader_BP_C::STATIC_ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C.ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP");

	UComputerTerminal_DefaultHeader_BP_C_ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
