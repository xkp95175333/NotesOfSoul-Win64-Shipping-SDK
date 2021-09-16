// WidgetBlueprintGeneratedClass WBP_PC_SkinCollection.WBP_PC_SkinCollection_C
// Size: 0x378 (Inherited: 0x26c)
struct UWBP_PC_SkinCollection_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_Ghost; // 0x278(0x08)
	struct UButton* Button_Human; // 0x280(0x08)
	struct UComboBoxString* ComboBox_Qualiy; // 0x288(0x08)
	struct UTextBlock* Text_Ghost; // 0x290(0x08)
	struct UTextBlock* Text_Human; // 0x298(0x08)
	struct UTextBlock* Text_UnlockRole; // 0x2a0(0x08)
	struct UTextBlock* Text_UnlockSkin; // 0x2a8(0x08)
	struct UUniformGridPanel* UGP_Roles; // 0x2b0(0x08)
	struct UUniformGridPanel* UGP_Skins; // 0x2b8(0x08)
	struct TArray<struct FUserGhostData> GhostRoles; // 0x2c0(0x10)
	struct TArray<struct FUserHumanData> HumanRoles; // 0x2d0(0x10)
	struct TArray<struct FUserSkinData> SkinCollection; // 0x2e0(0x10)
	struct TArray<struct FStruct_RoleSkins> GhostSkins; // 0x2f0(0x10)
	struct TArray<struct FStruct_RoleSkins> HumanSkins; // 0x300(0x10)
	struct FStruct_RoleSkinQuality CurrentRoleSkinQuality; // 0x310(0x60)
	bool Index-1; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	int32_t Selection; // 0x374(0x04)

	void CalculateRowAndColumn(int32_t CurrentRow, int32_t CurrentIndex, int32_t MaxColumn, int32_t CurrentColumn); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.CalculateRowAndColumn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void DisplaySkins(int32_t Qualify Type); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.DisplaySkins // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisplayRoles(struct TArray<struct FStruct_RoleSkins> RolesSkins); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.DisplayRoles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void QualifySkins(struct TArray<int32_t> Skin IDs); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.QualifySkins // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClearDisplays(); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.ClearDisplays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FindCorrectSkins(int32_t RoleId, struct TArray<int32_t> Skins); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.FindCorrectSkins // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitialRolesSkins(); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.InitialRolesSkins // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Ghost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.BndEvt__Button_Ghost_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Human_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.BndEvt__Button_Human_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ComboBox_Qualiy_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.BndEvt__ComboBox_Qualiy_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void SetLanguage(struct FString ChangedLanguage); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.SetLanguage // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_SkinCollection(int32_t EntryPoint); // Function WBP_PC_SkinCollection.WBP_PC_SkinCollection_C.ExecuteUbergraph_WBP_PC_SkinCollection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

