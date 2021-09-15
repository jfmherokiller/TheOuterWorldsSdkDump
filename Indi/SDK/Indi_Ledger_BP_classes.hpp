#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ledger_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Ledger_BP.Ledger_BP_C
// 0x0080 (0x0430 - 0x03B0)
class ULedger_BP_C : public ULedgerWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Ledger_BP.Ledger_BP_C");
		return ptr;
	}


	bool OnOutro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnMaximize(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnMinimize(struct FScriptDelegate* AnimationCompleteCallback);
	void STATIC_SetupMaterialInstances(class UImage* Image, class UMaterialInstanceDynamic** MaterialInstance, float* SizeX, float* SizeY);
	void STATIC_Construct();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_OnFinalizeMaximize();
	void STATIC_OnFinalizeMinimize();
	void STATIC_OnSetCurrentPage(ELedgerPages* Page, bool* bAnimate);
	void STATIC_FadeInSharedItemViewer();
	void STATIC_ExecuteUbergraph_Ledger_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
