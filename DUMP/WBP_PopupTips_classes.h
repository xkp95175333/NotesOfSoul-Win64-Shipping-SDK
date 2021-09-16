// WidgetBlueprintGeneratedClass WBP_PopupTips.WBP_PopupTips_C
// Size: 0x2c8 (Inherited: 0x290)
struct UWBP_PopupTips_C : UUI_PopupMgr {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UButton* Button_QueDing; // 0x298(0x08)
	struct UButton* Button_QuXiao; // 0x2a0(0x08)
	struct UOverlay* Dialog; // 0x2a8(0x08)
	struct UImage* Image_87; // 0x2b0(0x08)
	struct UTextBlock* Text; // 0x2b8(0x08)
	struct UTextBlock* TipMsg; // 0x2c0(0x08)

	void OnShowPopupTips(struct FText Msg); // Function WBP_PopupTips.WBP_PopupTips_C.OnShowPopupTips // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnShowPopupDialog(struct FText Title, struct FText Content); // Function WBP_PopupTips.WBP_PopupTips_C.OnShowPopupDialog // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_QueDing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PopupTips.WBP_PopupTips_C.BndEvt__Button_QueDing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_QuXiao_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PopupTips.WBP_PopupTips_C.BndEvt__Button_QuXiao_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnClosePopupDialog(); // Function WBP_PopupTips.WBP_PopupTips_C.OnClosePopupDialog // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PopupTips(int32_t EntryPoint); // Function WBP_PopupTips.WBP_PopupTips_C.ExecuteUbergraph_WBP_PopupTips // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

