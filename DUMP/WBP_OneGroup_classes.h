// WidgetBlueprintGeneratedClass WBP_OneGroup.WBP_OneGroup_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_OneGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_18; // 0x268(0x08)
	struct UButton* Button_182; // 0x270(0x08)
	struct UTextBlock* GroupText; // 0x278(0x08)
	int32_t GroupID; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FKxFriendData FriendData; // 0x288(0x48)
	struct UWBP_RightMouseButtonMenu_C* WBP_RightMouseButtonMenu; // 0x2d0(0x08)

	void BndEvt__Button_17_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneGroup.WBP_OneGroup_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnEditFriendGroupRsp_Event_1(int32_t code); // Function WBP_OneGroup.WBP_OneGroup_C.OnEditFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_17_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneGroup.WBP_OneGroup_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_17_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneGroup.WBP_OneGroup_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_181_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneGroup.WBP_OneGroup_C.BndEvt__Button_181_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_181_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneGroup.WBP_OneGroup_C.BndEvt__Button_181_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_OneGroup(int32_t EntryPoint); // Function WBP_OneGroup.WBP_OneGroup_C.ExecuteUbergraph_WBP_OneGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

