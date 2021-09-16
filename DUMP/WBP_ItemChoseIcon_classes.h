// WidgetBlueprintGeneratedClass WBP_ItemChoseIcon.WBP_ItemChoseIcon_C
// Size: 0x37c (Inherited: 0x260)
struct UWBP_ItemChoseIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_70; // 0x268(0x08)
	struct UImage* Image_192; // 0x270(0x08)
	struct UImage* Image_Ico; // 0x278(0x08)
	struct UWBP_ItemChoseUI_C* ItemChoseUI; // 0x280(0x08)
	struct FKxItemTable Info; // 0x288(0xf0)
	int32_t pos; // 0x378(0x04)

	void BndEvt__Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ItemChoseIcon.WBP_ItemChoseIcon_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void SetItemInfo(struct FKxItemTable Info); // Function WBP_ItemChoseIcon.WBP_ItemChoseIcon_C.SetItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ItemChoseIcon(int32_t EntryPoint); // Function WBP_ItemChoseIcon.WBP_ItemChoseIcon_C.ExecuteUbergraph_WBP_ItemChoseIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

