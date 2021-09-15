#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Slate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0278 (0x02B0 - 0x0038)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x278];                                     // 0x0038(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0580 (0x05B8 - 0x0038)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x580];                                     // 0x0038(0x0580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x03D8 (0x0410 - 0x0038)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x3D8];                                     // 0x0038(0x03D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03A0 (0x03D8 - 0x0038)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     // 0x0038(0x03A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x07F8 (0x0830 - 0x0038)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x7F8];                                     // 0x0038(0x07F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0220 (0x0258 - 0x0038)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0038(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01A0 (0x01D8 - 0x0038)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0038(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x04D0 (0x0508 - 0x0038)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x4D0];                                     // 0x0038(0x04D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (0x0260 - 0x0038)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0038(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0038 - 0x0030)
class USlateSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (0x0320 - 0x0038)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x2E8];                                     // 0x0038(0x02E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x01F0 (0x0228 - 0x0038)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0038(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
