// WidgetBlueprintGeneratedClass WBP_ChooseBecome25Boy.WBP_ChooseBecome25Boy_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_ChooseBecome25Boy_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Btn_Confirm; // 0x268(0x08)
	struct UButton* Btn_No; // 0x270(0x08)
	struct UImage* Img_BG; // 0x278(0x08)
	struct UImage* Img_Low; // 0x280(0x08)
	struct UImage* Img_Top; // 0x288(0x08)
	struct UTextBlock* Txt_Tip; // 0x290(0x08)

	void GetLocaPC(enum class EInputMode InputMode, bool CurNeedRemove); // Function WBP_ChooseBecome25Boy.WBP_ChooseBecome25Boy_C.GetLocaPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ChooseBecome25Boy.WBP_ChooseBecome25Boy_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChooseBecome25Boy.WBP_ChooseBecome25Boy_C.BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Btn_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChooseBecome25Boy.WBP_ChooseBecome25Boy_C.BndEvt__Btn_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ChooseBecome25Boy(int32_t EntryPoint); // Function WBP_ChooseBecome25Boy.WBP_ChooseBecome25Boy_C.ExecuteUbergraph_WBP_ChooseBecome25Boy // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

