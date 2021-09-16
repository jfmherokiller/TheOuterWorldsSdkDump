#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_UMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000 (0x0030 - 0x0030)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x00E8 (0x0118 - 0x0030)
class UWidget : public UVisual
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void STATIC_WidgetRebuilt();
	void STATIC_SetVisibility(ESlateVisibility InVisibility);
	void STATIC_SetUserFocus(class APlayerController* PlayerController);
	void STATIC_SetToolTipText(const struct FText& InToolTipText);
	void STATIC_SetToolTip(class UWidget* Widget);
	void STATIC_SetRenderTranslation(const struct FVector2D& Translation);
	void STATIC_SetRenderTransformPivot(const struct FVector2D& Pivot);
	void STATIC_SetRenderTransform(const struct FWidgetTransform& InTransform);
	void STATIC_SetRenderShear(const struct FVector2D& Shear);
	void STATIC_SetRenderScale(const struct FVector2D& Scale);
	void STATIC_SetRenderOpacity(float InOpacity);
	void STATIC_SetRenderAngle(float Angle);
	void STATIC_SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_SetKeyboardFocus();
	void STATIC_SetIsEnabled(bool bInIsEnabled);
	void STATIC_SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void STATIC_SetClipping(EWidgetClipping InClipping);
	void STATIC_SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_ResetCursor();
	void STATIC_RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void STATIC_InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	ESlateVisibility GetVisibility();
	struct FText GetText__DelegateSignature();
	ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	struct FVector2D GetRenderTranslation();
	float GetRenderOpacity();
	float GetRenderAngle();
	class UPanelWidget* GetParent();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	EWidgetClipping GetClipping();
	ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void STATIC_ForceVolatile(bool bForce);
	void STATIC_ForceLayoutPrepass();
};


// Class UMG.PanelWidget
// 0x0018 (0x0130 - 0x0118)
class UPanelWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content, bool bAddToFront);
};


// Class UMG.ContentWidget
// 0x0000 (0x0130 - 0x0130)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};


// Class UMG.UserWidget
// 0x0108 (0x0220 - 0x0118)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0118(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void STATIC_UnregisterInputComponent();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void STATIC_StopListeningForAllInputActions();
	void STATIC_StopAnimationsAndLatentActions();
	void STATIC_StopAnimation(class UWidgetAnimation* InAnimation);
	void STATIC_StopAllAnimations();
	void STATIC_SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void STATIC_SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetOwningPlayer(class APlayerController* LocalPlayerController);
	void STATIC_SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void STATIC_SetInputActionPriority(int NewPriority);
	void STATIC_SetInputActionBlocking(bool bShouldBlock);
	void STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void STATIC_SetDesiredSizeInViewport(const struct FVector2D& Size);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetAnimationDirection(class UWidgetAnimation* InAnimation, bool bPlayingForward);
	void STATIC_SetAnchorsInViewport(const struct FAnchors& Anchors);
	void STATIC_SetAlignmentInViewport(const struct FVector2D& Alignment);
	void STATIC_ReverseAnimation(class UWidgetAnimation* InAnimation);
	void STATIC_RemoveFromViewport();
	void STATIC_RegisterInputComponent();
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_PlaySound(class USoundBase* SoundToPlay);
	void STATIC_PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void STATIC_PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void STATIC_OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void STATIC_OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	void STATIC_OnInitialized();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void STATIC_OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void STATIC_OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnAnimationStarted(class UWidgetAnimation* Animation);
	void STATIC_OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void STATIC_OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void STATIC_ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	bool GetIsVisible();
	float GetAnimationTimeUpperBound(class UWidgetAnimation* InAnimation);
	float GetAnimationTimeRemaining(class UWidgetAnimation* InAnimation);
	TEnumAsByte<EUMGSequencePlayMode> GetAnimationPlaybackMode(class UWidgetAnimation* InAnimation);
	bool GetAnimationDirection(class UWidgetAnimation* InAnimation);
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void STATIC_Destruct();
	void STATIC_Construct();
	void STATIC_CancelLatentActions();
	void STATIC_AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.WidgetComponent
// 0x0120 (0x0750 - 0x0630)
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0630(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}


	void STATIC_SetWidget(class UUserWidget* Widget);
	void STATIC_SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void STATIC_SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void STATIC_SetManuallyRedraw(bool bUseManualRedraw);
	void STATIC_SetDrawSize(const struct FVector2D& Size);
	void STATIC_SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void STATIC_RequestRedraw();
	class UUserWidget* GetUserWidgetObject();
	class UTextureRenderTarget2D* GetRenderTarget();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	struct FVector2D GetDrawSize();
};


// Class UMG.PanelSlot
// 0x0010 (0x0040 - 0x0030)
class UPanelSlot : public UVisual
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.DragDropOperation
// 0x0060 (0x0090 - 0x0030)
class UDragDropOperation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void STATIC_Drop(const struct FPointerEvent& PointerEvent);
	void STATIC_Dragged(const struct FPointerEvent& PointerEvent);
	void STATIC_DragCancelled(const struct FPointerEvent& PointerEvent);
};


// Class UMG.TextLayoutWidget
// 0x0020 (0x0138 - 0x0118)
class UTextLayoutWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0058 - 0x0038)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}


	class UAsyncTaskDownloadImage* DownloadImage(const class FString& URL);
};


// Class UMG.BackgroundBlur
// 0x00B8 (0x01E8 - 0x0130)
class UBackgroundBlur : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0130(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetBlurStrength(float InStrength);
	void STATIC_SetBlurRadius(int InBlurRadius);
	void STATIC_SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0068 - 0x0040)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PropertyBinding
// 0x0038 (0x0068 - 0x0030)
class UPropertyBinding : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0068 - 0x0068)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	bool GetValue();
};


// Class UMG.Border
// 0x0148 (0x0278 - 0x0130)
class UBorder : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0130(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetDesiredSizeScale(const struct FVector2D& InScale);
	void STATIC_SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void STATIC_SetBrushOpacity(float InBrushOpacity);
	void STATIC_SetBrushFromTexture(class UTexture2D* Texture);
	void STATIC_SetBrushFromMaterial(class UMaterialInterface* Material);
	void STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset);
	void STATIC_SetBrushColor(const struct FLinearColor& InBrushColor);
	void STATIC_SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.BorderSlot
// 0x0028 (0x0068 - 0x0040)
class UBorderSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BrushBinding
// 0x0008 (0x0070 - 0x0068)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	struct FSlateBrush GetValue();
};


// Class UMG.Button
// 0x0308 (0x0438 - 0x0130)
class UButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x308];                                     // 0x0130(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void STATIC_SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void STATIC_SetStyle(const struct FButtonStyle& InStyle);
	void STATIC_SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void STATIC_SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class UMG.ButtonSlot
// 0x0028 (0x0068 - 0x0040)
class UButtonSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanel
// 0x0010 (0x0140 - 0x0130)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0078 - 0x0040)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void STATIC_SetZOrder(int InZOrder);
	void STATIC_SetSize(const struct FVector2D& InSize);
	void STATIC_SetPosition(const struct FVector2D& InPosition);
	void STATIC_SetOffsets(const struct FMargin& InOffset);
	void STATIC_SetMinimum(const struct FVector2D& InMinimumAnchors);
	void STATIC_SetMaximum(const struct FVector2D& InMaximumAnchors);
	void STATIC_SetLayout(const struct FAnchorData& InLayoutData);
	void STATIC_SetAutoSize(bool InbAutoSize);
	void STATIC_SetAnchors(const struct FAnchors& InAnchors);
	void STATIC_SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};


// Class UMG.CheckBox
// 0x0650 (0x0780 - 0x0130)
class UCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x650];                                     // 0x0130(0x0650) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void STATIC_SetIsChecked(bool InIsChecked);
	void STATIC_SetCheckedState(ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0070 - 0x0068)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	ECheckBoxState GetValue();
};


// Class UMG.CircularThrobber
// 0x00B8 (0x01D0 - 0x0118)
class UCircularThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void STATIC_SetRadius(float InRadius);
	void STATIC_SetPeriod(float InPeriod);
	void STATIC_SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ColorBinding
// 0x0008 (0x0070 - 0x0068)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};


// Class UMG.ComboBox
// 0x0038 (0x0150 - 0x0118)
class UComboBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0118(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0BC0 (0x0CD8 - 0x0118)
class UComboBoxString : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xBC0];                                     // 0x0118(0x0BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void STATIC_SetSelectedOption(const class FString& Option);
	bool RemoveOption(const class FString& Option);
	void STATIC_RefreshOptions();
	void STATIC_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void STATIC_OnOpeningEvent__DelegateSignature();
	class FString GetSelectedOption();
	int GetOptionCount();
	class FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const class FString& Option);
	void STATIC_ClearSelection();
	void STATIC_ClearOptions();
	void STATIC_AddOption(const class FString& Option);
};


// Class UMG.DynamicEntryBox
// 0x00D0 (0x01E8 - 0x0118)
class UDynamicEntryBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0118(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}


	void STATIC_SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	void STATIC_Reset(bool bDeleteWidgets);
	void STATIC_RemoveEntry(class UUserWidget* EntryWidget);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
	class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
	class UUserWidget* BP_CreateEntry();
};


// Class UMG.EditableText
// 0x0390 (0x04A8 - 0x0118)
class UEditableText : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0118(0x0390) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetString(const class FString& InText);
	void STATIC_SetIsReadOnly(bool InbIsReadyOnly);
	void STATIC_SetIsPassword(bool InbIsPassword);
	void STATIC_SetHintText(const struct FText& InHintText);
	void STATIC_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	class FString GetString();
};


// Class UMG.EditableTextBox
// 0x0930 (0x0A48 - 0x0118)
class UEditableTextBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x930];                                     // 0x0118(0x0930) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_SetIsPassword(bool bIsPassword);
	void STATIC_SetHintText(const struct FText& InText);
	void STATIC_SetError(const struct FText& InError);
	void STATIC_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void STATIC_ClearError();
};


// Class UMG.ExpandableArea
// 0x0230 (0x0348 - 0x0118)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0118(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}


	void STATIC_SetIsExpanded_Animated(bool IsExpanded);
	void STATIC_SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.FloatBinding
// 0x0000 (0x0068 - 0x0068)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	float GetValue();
};


// Class UMG.GridPanel
// 0x0030 (0x0160 - 0x0130)
class UGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0130(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	void STATIC_SetRowFill(int ColumnIndex, float Coefficient);
	void STATIC_SetColumnFill(int ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content);
};


// Class UMG.GridSlot
// 0x0038 (0x0078 - 0x0040)
class UGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetRowSpan(int InRowSpan);
	void STATIC_SetRow(int InRow);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetLayer(int InLayer);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetColumnSpan(int InColumnSpan);
	void STATIC_SetColumn(int InColumn);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0140 - 0x0130)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content, bool bAddToFront);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetSize(const struct FSlateChildSize& InSize);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.Image
// 0x00E8 (0x0200 - 0x0118)
class UImage : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0118(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetBrushTintColor(const struct FSlateColor& TintColor);
	void STATIC_SetBrushSize(const struct FVector2D& DesiredSize);
	void STATIC_SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void STATIC_SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void STATIC_SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize);
	void STATIC_SetBrushFromMaterial(class UMaterialInterface* Material);
	void STATIC_SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset);
	void STATIC_SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	struct FVector2D GetBrushSize();
};


// Class UMG.InputKeySelector
// 0x0578 (0x0690 - 0x0118)
class UInputKeySelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x578];                                     // 0x0118(0x0578) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}


	void STATIC_SetTextBlockVisibility(ESlateVisibility InVisibility);
	void STATIC_SetSelectedKey(const struct FInputChord& InSelectedKey);
	void STATIC_SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void STATIC_SetKeySelectionText(const struct FText& InKeySelectionText);
	void STATIC_SetEscapeKeys(TArray<struct FKey> InKeys);
	void STATIC_SetAllowModifierKeys(bool bInAllowModifierKeys);
	void STATIC_SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void STATIC_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void STATIC_OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};


// Class UMG.Int32Binding
// 0x0000 (0x0068 - 0x0068)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	int GetValue();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0148 - 0x0130)
class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}


	void STATIC_SetCanCache(bool CanCache);
	void STATIC_InvalidateCache();
	bool GetCanCache();
};


// Class UMG.NativeUserListEntry
// 0x0000 (0x0030 - 0x0030)
class UNativeUserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeUserListEntry");
		return ptr;
	}


	bool IsListItemSelected();
	bool IsListItemExpanded();
};


// Class UMG.UserListEntry
// 0x0000 (0x0030 - 0x0030)
class UUserListEntry : public UNativeUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}


	void STATIC_BP_OnItemSelectionChanged(bool bIsSelected);
	void STATIC_BP_OnItemExpansionChanged(bool bIsExpanded);
	void STATIC_BP_OnEntryReleased();
};


// Class UMG.UserObjectListEntry
// 0x0000 (0x0030 - 0x0030)
class UUserObjectListEntry : public UUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}


	void STATIC_OnListItemObjectSet(class UObject* ListItemObject);
	class UObject* GetListItemObject();
};


// Class UMG.ListViewBase
// 0x0108 (0x0220 - 0x0118)
class UListViewBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0118(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}


	void STATIC_ScrollToTop();
	void STATIC_ScrollToBottom();
	void STATIC_RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};


// Class UMG.ListView
// 0x0120 (0x0340 - 0x0220)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0220(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}


	void STATIC_SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	void STATIC_SetSelectedIndex(int Index);
	void STATIC_ScrollIndexIntoView(int Index);
	void STATIC_NavigateToIndex(int Index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void STATIC_ClearListItems();
	void STATIC_BP_SetSelectedItem(class UObject* Item);
	void STATIC_BP_SetListItems(TArray<class UObject*> InListItems);
	void STATIC_BP_SetItemSelection(class UObject* Item, bool bSelected);
	void STATIC_BP_ScrollItemIntoView(class UObject* Item);
	void STATIC_BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void STATIC_BP_ClearSelection();
	void STATIC_BP_CancelScrollIntoView();
	void STATIC_AddItem(class UObject* Item);
};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0030 - 0x0030)
class UListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0170 - 0x0130)
class UMenuAnchor : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0130(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void STATIC_ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void STATIC_Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void STATIC_Close();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0068 - 0x0068)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};


// Class UMG.MovieScene2DTransformSection
// 0x0470 (0x0558 - 0x00E8)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x470];                                     // 0x00E8(0x0470) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x0280 (0x0368 - 0x00E8)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x00E8(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x0088 - 0x0070)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x02C8 (0x0400 - 0x0138)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0138(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0AF0 (0x0C28 - 0x0138)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0xAF0];                                     // 0x0138(0x0AF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_SetError(const struct FText& InError);
	void STATIC_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.NamedSlot
// 0x0010 (0x0140 - 0x0130)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0030 - 0x0030)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0128 - 0x0118)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.Overlay
// 0x0010 (0x0140 - 0x0130)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0060 - 0x0040)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	struct FMargin GetPadding();
};


// Class UMG.ProgressBar
// 0x0218 (0x0330 - 0x0118)
class UProgressBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0118(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void STATIC_SetPercent(float InPercent);
	void STATIC_SetIsMarquee(bool InbIsMarquee);
	void STATIC_SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void STATIC_SetFillBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void STATIC_SetBackgroundBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
};


// Class UMG.RetainerBox
// 0x0030 (0x0160 - 0x0130)
class URetainerBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0130(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}


	void STATIC_SetTextureParameter(const struct FName& TextureParameter);
	void STATIC_SetRenderingPhase(int RenderPhase, int TotalPhases);
	void STATIC_SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void STATIC_RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};


// Class UMG.RichTextBlock
// 0x0250 (0x0388 - 0x0138)
class URichTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0138(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
};


// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0030 - 0x0030)
class URichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0038 - 0x0030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0148 - 0x0130)
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}


	void STATIC_SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0068 - 0x0040)
class USafeZoneSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0150 - 0x0130)
class UScaleBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}


	void STATIC_SetUserSpecifiedScale(float InUserSpecifiedScale);
	void STATIC_SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void STATIC_SetStretch(TEnumAsByte<EStretch> InStretch);
	void STATIC_SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UScaleBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBar
// 0x04F8 (0x0610 - 0x0118)
class UScrollBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0118(0x04F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void STATIC_SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.ScrollBox
// 0x0778 (0x08A8 - 0x0130)
class UScrollBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x778];                                     // 0x0130(0x0778) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void STATIC_SetScrollOffset(float NewScrollOffset);
	void STATIC_SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void STATIC_SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void STATIC_SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	void STATIC_SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void STATIC_SetAllowOverscroll(bool NewAllowOverscroll);
	void STATIC_ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
	void STATIC_ScrollToStart();
	void STATIC_ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffset();
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0060 - 0x0040)
class UScrollBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBox
// 0x0030 (0x0160 - 0x0130)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0130(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void STATIC_SetWidthOverride(float InWidthOverride);
	void STATIC_SetMinDesiredWidth(float InMinDesiredWidth);
	void STATIC_SetMinDesiredHeight(float InMinDesiredHeight);
	void STATIC_SetMaxDesiredWidth(float InMaxDesiredWidth);
	void STATIC_SetMaxDesiredHeight(float InMaxDesiredHeight);
	void STATIC_SetMaxAspectRatio(float InMaxAspectRatio);
	void STATIC_SetHeightOverride(float InHeightOverride);
	void STATIC_ClearWidthOverride();
	void STATIC_ClearMinDesiredWidth();
	void STATIC_ClearMinDesiredHeight();
	void STATIC_ClearMaxDesiredWidth();
	void STATIC_ClearMaxDesiredHeight();
	void STATIC_ClearMaxAspectRatio();
	void STATIC_ClearHeightOverride();
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0068 - 0x0040)
class USizeBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);
	bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0068 - 0x0030)
class USlateVectorArtData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.Slider
// 0x03F0 (0x0508 - 0x0118)
class USlider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3F0];                                     // 0x0118(0x03F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void STATIC_SetValue(float InValue);
	void STATIC_SetStepSize(float InValue);
	void STATIC_SetSliderHandleColor(const struct FLinearColor& InValue);
	void STATIC_SetSliderBarColor(const struct FLinearColor& InValue);
	void STATIC_SetLocked(bool InValue);
	void STATIC_SetIndentHandle(bool InValue);
	float GetValue();
};


// Class UMG.Spacer
// 0x0018 (0x0130 - 0x0118)
class USpacer : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void STATIC_SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0408 (0x0520 - 0x0118)
class USpinBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x408];                                     // 0x0118(0x0408) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void STATIC_SetValue(float NewValue);
	void STATIC_SetMinValue(float NewValue);
	void STATIC_SetMinSliderValue(float NewValue);
	void STATIC_SetMaxValue(float NewValue);
	void STATIC_SetMaxSliderValue(float NewValue);
	void STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void STATIC_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void STATIC_OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void STATIC_ClearMinValue();
	void STATIC_ClearMinSliderValue();
	void STATIC_ClearMaxValue();
	void STATIC_ClearMaxSliderValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0070 - 0x0068)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	struct FText GetTextValue();
	class FString GetStringValue();
};


// Class UMG.TextBlock
// 0x00F8 (0x0230 - 0x0138)
class UTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0138(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetShadowOffset(const struct FVector2D& InShadowOffset);
	void STATIC_SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetMinDesiredWidth(float InMinDesiredWidth);
	void STATIC_SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void STATIC_SetFont(const struct FSlateFontInfo& InFontInfo);
	void STATIC_SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void STATIC_SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};


// Class UMG.Throbber
// 0x00A8 (0x01C0 - 0x0118)
class UThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0118(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void STATIC_SetNumberOfPieces(int InNumberOfPieces);
	void STATIC_SetAnimateVertically(bool bInAnimateVertically);
	void STATIC_SetAnimateOpacity(bool bInAnimateOpacity);
	void STATIC_SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.TileView
// 0x0020 (0x0360 - 0x0340)
class UTileView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0340(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void STATIC_SetEntryWidth(float NewWidth);
	void STATIC_SetEntryHeight(float NewHeight);
};


// Class UMG.TreeView
// 0x0058 (0x0398 - 0x0340)
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0340(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}


	void STATIC_SetItemExpansion(class UObject* Item, bool bExpandItem);
	void STATIC_ExpandAll();
	void STATIC_CollapseAll();
};


// Class UMG.UMGSequencePlayer
// 0x06C0 (0x06F0 - 0x0030)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6C0];                                     // 0x0030(0x06C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

};


// Class UMG.UniformGridPanel
// 0x0028 (0x0158 - 0x0130)
class UUniformGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	void STATIC_SetSlotPadding(const struct FMargin& InSlotPadding);
	void STATIC_SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void STATIC_SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0058 - 0x0040)
class UUniformGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetRow(int InRow);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetColumn(int InColumn);
};


// Class UMG.VerticalBox
// 0x0018 (0x0148 - 0x0130)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content, bool bAddToFront);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetSize(const struct FSlateChildSize& InSize);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.Viewport
// 0x0028 (0x0158 - 0x0130)
class UViewport : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void STATIC_SetViewRotation(const struct FRotator& Rotation);
	void STATIC_SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0068 - 0x0068)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	ESlateVisibility GetValue();
};


// Class UMG.WidgetAnimation
// 0x0050 (0x03A0 - 0x0350)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0350(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}


	float GetStartTime();
	float GetEndTime();
};


// Class UMG.WidgetBinding
// 0x0000 (0x0068 - 0x0068)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	class UWidget* GetValue();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (0x0358 - 0x02E8)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02E8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	struct FEventReply UnlockMouse(struct FEventReply* Reply);
	struct FEventReply Unhandled();
	void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	struct FEventReply SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	void STATIC_RestorePreviousWindowTitleBarState();
	struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	void STATIC_OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	bool IsDragDropping();
	struct FEventReply Handled();
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
	class UMaterialInterface* GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
	class UObject* GetBrushResource(const struct FSlateBrush& Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	struct FEventReply EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DrawText(const class FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DismissAllMenus();
	struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	struct FEventReply CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	void STATIC_CancelDragDrop();
};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x04A0 - 0x02B0)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x02B0(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}


	void STATIC_SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const class FString& Characters, bool bRepeat);
	void STATIC_ScrollWheel(float ScrollDelta);
	void STATIC_ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void STATIC_PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0030 - 0x0030)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	float GetViewportScale(class UObject* WorldContextObject);
	struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D GetMousePositionOnPlatform();
};


// Class UMG.WidgetNavigation
// 0x00F0 (0x0120 - 0x0030)
class UWidgetNavigation : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0148 - 0x0130)
class UWidgetSwitcher : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void STATIC_SetActiveWidgetIndex(int Index);
	void STATIC_SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0060 - 0x0040)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetTree
// 0x0008 (0x0038 - 0x0030)
class UWidgetTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0150 - 0x0130)
class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0068 - 0x0040)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBox
// 0x0020 (0x0150 - 0x0130)
class UWrapBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}


	void STATIC_SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UWrapBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void STATIC_SetFillEmptySpace(bool InbFillEmptySpace);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
