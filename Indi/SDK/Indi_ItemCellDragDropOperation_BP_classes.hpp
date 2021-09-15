#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemCellDragDropOperation_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ItemCellDragDropOperation_BP.ItemCellDragDropOperation_BP_C
// 0x0000 (0x00B8 - 0x00B8)
class UItemCellDragDropOperation_BP_C : public UIndianaDragDropOperation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemCellDragDropOperation_BP.ItemCellDragDropOperation_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
