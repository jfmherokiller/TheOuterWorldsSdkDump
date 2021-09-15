#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MoviePlayer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MoviePlayer_BP.MoviePlayer_BP_C.Construct
struct UMoviePlayer_BP_C_Construct_Params
{
};

// Function MoviePlayer_BP.MoviePlayer_BP_C.InitiateFadeIn
struct UMoviePlayer_BP_C_InitiateFadeIn_Params
{
};

// Function MoviePlayer_BP.MoviePlayer_BP_C.InitiateFadeOut
struct UMoviePlayer_BP_C_InitiateFadeOut_Params
{
};

// Function MoviePlayer_BP.MoviePlayer_BP_C.ExecuteUbergraph_MoviePlayer_BP
struct UMoviePlayer_BP_C_ExecuteUbergraph_MoviePlayer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
