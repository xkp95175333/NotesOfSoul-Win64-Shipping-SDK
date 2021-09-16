// WidgetBlueprintGeneratedClass WBP_KeySetting.WBP_KeySetting_C
// Size: 0x350 (Inherited: 0x260)
struct UWBP_KeySetting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UInputKeySelector* InputKeySelector_50; // 0x268(0x08)
	struct UTextBlock* TextBlock_45; // 0x270(0x08)
	struct FText KeyName; // 0x278(0x18)
	bool IsAxis; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UCompositeDataTable* DT_Action; // 0x298(0x08)
	struct UCompositeDataTable* DT_Axis; // 0x2a0(0x08)
	struct FS_InputKeyInfo_Axis FindAxisInfo; // 0x2a8(0x30)
	struct FS_InputKeyInfo_Action FindActionInfo; // 0x2d8(0x30)
	struct FInputChord NewSeletKey; // 0x308(0x20)
	bool IsBegin; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FInputChord TestIn Selected Key(Delete); // 0x330(0x20)

	bool CheckKeyNameIsSame(struct FName InName, struct FName CurrentKeyBindName); // Function WBP_KeySetting.WBP_KeySetting_C.CheckKeyNameIsSame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	bool KeyErrorBoardIsInViewport(); // Function WBP_KeySetting.WBP_KeySetting_C.KeyErrorBoardIsInViewport // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void RemoveActionKeyToDefault(); // Function WBP_KeySetting.WBP_KeySetting_C.RemoveActionKeyToDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveAxisKeyToDefault(); // Function WBP_KeySetting.WBP_KeySetting_C.RemoveAxisKeyToDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChcekKeyIsOnUes(bool IsOnUes); // Function WBP_KeySetting.WBP_KeySetting_C.ChcekKeyIsOnUes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void BeginSet(); // Function WBP_KeySetting.WBP_KeySetting_C.BeginSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplySetting(); // Function WBP_KeySetting.WBP_KeySetting_C.ApplySetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateboardFromOwnData(); // Function WBP_KeySetting.WBP_KeySetting_C.UpdateboardFromOwnData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_KeySetting.WBP_KeySetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InputKeySelector_49_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WBP_KeySetting.WBP_KeySetting_C.BndEvt__InputKeySelector_49_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void RemoveSettingToDefaul(); // Function WBP_KeySetting.WBP_KeySetting_C.RemoveSettingToDefaul // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InputKeySelector_49_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_KeySetting.WBP_KeySetting_C.BndEvt__InputKeySelector_49_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_KeySetting(int32_t EntryPoint); // Function WBP_KeySetting.WBP_KeySetting_C.ExecuteUbergraph_WBP_KeySetting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

