// WidgetBlueprintGeneratedClass WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C
// Size: 0x2b0 (Inherited: 0x26c)
struct UWBP_PC_Info_PlayerData_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UTextBlock* Birth; // 0x278(0x08)
	struct UTextBlock* Level; // 0x280(0x08)
	struct UTextBlock* Party; // 0x288(0x08)
	struct UTextBlock* PlayerId; // 0x290(0x08)
	struct UButton* PlayerTitleButton; // 0x298(0x08)
	struct UComboBoxString* sex; // 0x2a0(0x08)
	bool IsOpenSec; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t SexNum; // 0x2ac(0x04)

	void SetSex(); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.SetSex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__PlayerTitleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.BndEvt__PlayerTitleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Sex_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.BndEvt__Sex_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePlayerData(struct FUserGameBaseData OneSelfInfo); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.UpdatePlayerData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeLanguage(struct FString ChangedLanguage); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.ChangeLanguage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_Info_PlayerData(int32_t EntryPoint); // Function WBP_PC_Info_PlayerData.WBP_PC_Info_PlayerData_C.ExecuteUbergraph_WBP_PC_Info_PlayerData // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

