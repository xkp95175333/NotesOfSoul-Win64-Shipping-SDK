// WidgetBlueprintGeneratedClass WBP_ControlBoard.WBP_ControlBoard_C
// Size: 0x450 (Inherited: 0x260)
struct UWBP_ControlBoard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x268(0x08)
	struct UScrollBox* GhostKeySettings; // 0x270(0x08)
	struct UButton* GhostType; // 0x278(0x08)
	struct UScrollBox* HumanKeySettings; // 0x280(0x08)
	struct UButton* HumanType; // 0x288(0x08)
	struct UTextBlock* KeyGhostType; // 0x290(0x08)
	struct UTextBlock* KeyHumanType; // 0x298(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting; // 0x2a0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_2; // 0x2a8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_3; // 0x2b0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_4; // 0x2b8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_5; // 0x2c0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_6; // 0x2c8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_7; // 0x2d0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_8; // 0x2d8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_9; // 0x2e0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_10; // 0x2e8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_11; // 0x2f0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_12; // 0x2f8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_13; // 0x300(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_14; // 0x308(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_15; // 0x310(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_16; // 0x318(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_17; // 0x320(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_18; // 0x328(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_19; // 0x330(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_20; // 0x338(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_21; // 0x340(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_22; // 0x348(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_23; // 0x350(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_24; // 0x358(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_25; // 0x360(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_26; // 0x368(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_27; // 0x370(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_28; // 0x378(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_31; // 0x380(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_32; // 0x388(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_33; // 0x390(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_34; // 0x398(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_35; // 0x3a0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_36; // 0x3a8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_37; // 0x3b0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_38; // 0x3b8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_39; // 0x3c0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_40; // 0x3c8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_41; // 0x3d0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_45; // 0x3d8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_46; // 0x3e0(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_47; // 0x3e8(0x08)
	struct UWBP_KeySetting_C* WBP_KeySetting_48; // 0x3f0(0x08)
	bool IsHuman; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FSlateColor OnTextChoose; // 0x400(0x28)
	struct FSlateColor In Color and Opacity; // 0x428(0x28)

	void GetKeySettingArray(struct TArray<struct UWBP_KeySetting_C*> Array); // Function WBP_ControlBoard.WBP_ControlBoard_C.GetKeySettingArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FText GetText_1(); // Function WBP_ControlBoard.WBP_ControlBoard_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ApplySetting(); // Function WBP_ControlBoard.WBP_ControlBoard_C.ApplySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateboardFromOwnData(); // Function WBP_ControlBoard.WBP_ControlBoard_C.UpdateboardFromOwnData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ControlBoard.WBP_ControlBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__HumanType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ControlBoard.WBP_ControlBoard_C.BndEvt__HumanType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__HumanType_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ControlBoard.WBP_ControlBoard_C.BndEvt__HumanType_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void RemoveSettingToDefaul(); // Function WBP_ControlBoard.WBP_ControlBoard_C.RemoveSettingToDefaul // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ControlBoard(int32_t EntryPoint); // Function WBP_ControlBoard.WBP_ControlBoard_C.ExecuteUbergraph_WBP_ControlBoard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

