// WidgetBlueprintGeneratedClass WBP_HeadIcon.WBP_HeadIcon_C
// Size: 0x299 (Inherited: 0x260)
struct UWBP_HeadIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* HeadButton; // 0x268(0x08)
	struct UImage* Image_100; // 0x270(0x08)
	struct UTextBlock* TextBlock_58; // 0x278(0x08)
	int32_t ID; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FMulticastInlineDelegate CallOnChooseHeadIcon; // 0x288(0x10)
	bool CanChoose; // 0x298(0x01)

	void Update(bool CanChoose, struct FText InText, struct TSoftObjectPtr<struct UTexture2D> Texture, int32_t ID); // Function WBP_HeadIcon.WBP_HeadIcon_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__HeadButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HeadIcon.WBP_HeadIcon_C.BndEvt__HeadButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_HeadIcon(int32_t EntryPoint); // Function WBP_HeadIcon.WBP_HeadIcon_C.ExecuteUbergraph_WBP_HeadIcon // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void CallOnChooseHeadIcon__DelegateSignature(int32_t ID); // Function WBP_HeadIcon.WBP_HeadIcon_C.CallOnChooseHeadIcon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

