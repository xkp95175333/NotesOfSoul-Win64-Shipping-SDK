// WidgetBlueprintGeneratedClass WBP_PC_Info_Misc.WBP_PC_Info_Misc_C
// Size: 0x28c (Inherited: 0x26c)
struct UWBP_PC_Info_Misc_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UButton* Button_Praise; // 0x278(0x08)
	struct UTextBlock* Text_PraiseNum; // 0x280(0x08)
	int32_t PraiseNum; // 0x288(0x04)

	void On Parent Constructed(int32_t ParentSpecPlayerUID); // Function WBP_PC_Info_Misc.WBP_PC_Info_Misc_C.On Parent Constructed // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Praise_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PC_Info_Misc.WBP_PC_Info_Misc_C.BndEvt__Button_Praise_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PC_Info_Misc(int32_t EntryPoint); // Function WBP_PC_Info_Misc.WBP_PC_Info_Misc_C.ExecuteUbergraph_WBP_PC_Info_Misc // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

