// WidgetBlueprintGeneratedClass WBP_SetPanel.WBP_SetPanel_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_SetPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Apply; // 0x268(0x08)
	struct UButton* Button_ChangGui; // 0x270(0x08)
	struct UButton* Button_ExitGame; // 0x278(0x08)
	struct UButton* Button_ExitPanel; // 0x280(0x08)
	struct UCheckBox* CheckBox_GaMaClose; // 0x288(0x08)
	struct UCheckBox* CheckBox_GaMaOpen; // 0x290(0x08)
	struct UComboBoxText* ComboBoxString_HuaZhi_Text; // 0x298(0x08)
	struct UComboBoxText* ComboBoxString_Text; // 0x2a0(0x08)
	struct UTextBlock* Text_Tilete; // 0x2a8(0x08)
	struct TArray<struct FText> Text; // 0x2b0(0x10)

	void SetGammaValue(float Value); // Function WBP_SetPanel.WBP_SetPanel_C.SetGammaValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHuaMIanZhiLiang(int32_t Value); // Function WBP_SetPanel.WBP_SetPanel_C.SetHuaMIanZhiLiang // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CheckBox_GaMaClose_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__CheckBox_GaMaClose_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CheckBox_GaMaOpen_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__CheckBox_GaMaOpen_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Apply_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ComboBoxString_HuaZhi_Text_K2Node_ComponentBoundEvent_8_OnOpeningEvent__DelegateSignature(); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__ComboBoxString_HuaZhi_Text_K2Node_ComponentBoundEvent_8_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_ExitPanel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__Button_ExitPanel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_ExitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__Button_ExitGame_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SetPanel.WBP_SetPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_SetPanel.WBP_SetPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ComboBoxString_Text_K2Node_ComponentBoundEvent_10_OnOpeningEvent__DelegateSignature(); // Function WBP_SetPanel.WBP_SetPanel_C.BndEvt__ComboBoxString_Text_K2Node_ComponentBoundEvent_10_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SetPanel(int32_t EntryPoint); // Function WBP_SetPanel.WBP_SetPanel_C.ExecuteUbergraph_WBP_SetPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

