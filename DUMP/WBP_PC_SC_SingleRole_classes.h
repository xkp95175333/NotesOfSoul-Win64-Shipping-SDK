// WidgetBlueprintGeneratedClass WBP_PC_SC_SingleRole.WBP_PC_SC_SingleRole_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_PC_SC_SingleRole_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_RoleImage; // 0x268(0x08)
	struct UImage* Image_RoleImage; // 0x270(0x08)
	struct UTextBlock* Text_IntimacyNum; // 0x278(0x08)
	struct UTextBlock* Text_Percent; // 0x280(0x08)
	struct UTextBlock* Text_RoleName; // 0x288(0x08)
	struct UWBP_PC_SkinCollection_C* WidgetSC; // 0x290(0x08)
	int32_t Spec UID; // 0x298(0x04)
	int32_t Role ID; // 0x29c(0x04)
	struct TArray<int32_t> Skin IDs; // 0x2a0(0x10)
	struct TArray<int32_t> Role Skins; // 0x2b0(0x10)

	void Construct(); // Function WBP_PC_SC_SingleRole.WBP_PC_SC_SingleRole_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_RoleImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_SC_SingleRole.WBP_PC_SC_SingleRole_C.BndEvt__Button_RoleImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_SC_SingleRole(int32_t EntryPoint); // Function WBP_PC_SC_SingleRole.WBP_PC_SC_SingleRole_C.ExecuteUbergraph_WBP_PC_SC_SingleRole // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

