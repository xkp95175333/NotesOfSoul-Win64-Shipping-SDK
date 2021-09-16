// WidgetBlueprintGeneratedClass WBP_SettingMain.WBP_SettingMain_C
// Size: 0x428 (Inherited: 0x260)
struct UWBP_SettingMain_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* MainScale; // 0x268(0x08)
	struct UTextBlock* ApplyText; // 0x270(0x08)
	struct UButton* Cancel; // 0x278(0x08)
	struct UTextBlock* CancelText; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x288(0x08)
	struct UButton* Control; // 0x290(0x08)
	struct UTextBlock* ControlText; // 0x298(0x08)
	struct UTextBlock* DefaultText; // 0x2a0(0x08)
	struct UButton* Normal; // 0x2a8(0x08)
	struct UTextBlock* NormalText; // 0x2b0(0x08)
	struct UButton* Quit; // 0x2b8(0x08)
	struct UTextBlock* QuitText; // 0x2c0(0x08)
	struct UButton* RemoveToDefault; // 0x2c8(0x08)
	struct UButton* SaveSetting; // 0x2d0(0x08)
	struct UButton* Sound; // 0x2d8(0x08)
	struct UTextBlock* SoundText; // 0x2e0(0x08)
	struct UButton* Surrender; // 0x2e8(0x08)
	struct UTextBlock* SurrenderText; // 0x2f0(0x08)
	struct UButton* View; // 0x2f8(0x08)
	struct UTextBlock* ViewText; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_38; // 0x308(0x08)
	struct UWBP_NoarmalSettingBoard_C* NormalSettingBaord; // 0x310(0x08)
	struct UWBP_ViewSettingBoard_C* ViewSettingBoard; // 0x318(0x08)
	struct UWBP_SoundSettingBoard_C* SoundSettingBoard; // 0x320(0x08)
	struct UWBP_ControlBoard_C* ContorlBoard; // 0x328(0x08)
	bool IsInGame; // 0x330(0x01)
	bool IsOnStartMatchSelection; // 0x331(0x01)
	bool Isdead; // 0x332(0x01)
	char pad_333[0x5]; // 0x333(0x05)
	struct FNOS_UserSettings New_UserSetting; // 0x338(0x90)
	struct FSlateColor OnHoveredTextColor; // 0x3c8(0x28)
	struct FSlateColor NormalTextColor; // 0x3f0(0x28)
	bool IsCan; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UWBP_GhostConfim_C* NewVar_1; // 0x420(0x08)

	void OnClickCloseBoard(); // Function WBP_SettingMain.WBP_SettingMain_C.OnClickCloseBoard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingMain.WBP_SettingMain_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CallToSurrender(); // Function WBP_SettingMain.WBP_SettingMain_C.CallToSurrender // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreatSettingBoard(bool IsInGame); // Function WBP_SettingMain.WBP_SettingMain_C.CreatSettingBoard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetButtonDisable(int32_t Index); // Function WBP_SettingMain.WBP_SettingMain_C.SetButtonDisable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchShowWiget(int32_t Index); // Function WBP_SettingMain.WBP_SettingMain_C.SwitchShowWiget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Finished_6EF79ABB440D602D00E736A61184E44C(); // Function WBP_SettingMain.WBP_SettingMain_C.Finished_6EF79ABB440D602D00E736A61184E44C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_SettingMain.WBP_SettingMain_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Normal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Normal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sound_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Sound_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__View_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__View_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SaveSetting_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__SaveSetting_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SaveSetting_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__SaveSetting_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Quit_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Quit_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ScureenderQiut(); // Function WBP_SettingMain.WBP_SettingMain_C.ScureenderQiut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Surrender_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Surrender_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Quit_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Quit_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Quit_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Quit_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Normal_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Normal_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Normal_K2Node_ComponentBoundEvent_31_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Normal_K2Node_ComponentBoundEvent_31_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__View_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__View_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__View_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__View_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sound_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Sound_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sound_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Sound_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Control_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Control_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Control_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Control_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Surrender_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Surrender_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Surrender_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Surrender_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SaveSetting_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__SaveSetting_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SaveSetting_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__SaveSetting_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__RemoveToDefault_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__RemoveToDefault_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__RemoveToDefault_K2Node_ComponentBoundEvent_43_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__RemoveToDefault_K2Node_ComponentBoundEvent_43_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_45_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_SettingMain.WBP_SettingMain_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_45_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void SwtichBoardVisible(bool IsVisible); // Function WBP_SettingMain.WBP_SettingMain_C.SwtichBoardVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_SettingMain(int32_t EntryPoint); // Function WBP_SettingMain.WBP_SettingMain_C.ExecuteUbergraph_WBP_SettingMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

