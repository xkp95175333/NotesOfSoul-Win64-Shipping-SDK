// WidgetBlueprintGeneratedClass WBP_ItemSelect.WBP_ItemSelect_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_ItemSelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button; // 0x268(0x08)
	struct UButton* Button_440; // 0x270(0x08)
	struct UImage* Image_3; // 0x278(0x08)
	struct UImage* Image_Ico1; // 0x280(0x08)
	struct UImage* SetImage; // 0x288(0x08)
	int32_t ThisUserID; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UWBP_ItemChoseUI_C* ChoseUI; // 0x298(0x08)

	void SetPlayerBPinfo(struct FPlayerBPInfo BPInfo); // Function WBP_ItemSelect.WBP_ItemSelect_C.SetPlayerBPinfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_439_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ItemSelect.WBP_ItemSelect_C.BndEvt__Button_439_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ItemSelect.WBP_ItemSelect_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ItemSelect(int32_t EntryPoint); // Function WBP_ItemSelect.WBP_ItemSelect_C.ExecuteUbergraph_WBP_ItemSelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

