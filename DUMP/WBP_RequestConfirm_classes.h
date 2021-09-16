// WidgetBlueprintGeneratedClass WBP_RequestConfirm.WBP_RequestConfirm_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_RequestConfirm_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_131; // 0x268(0x08)
	struct UButton* CancelBtn; // 0x270(0x08)
	struct UTextBlock* CancelText; // 0x278(0x08)
	struct UButton* ConfirmBtn; // 0x280(0x08)
	struct UTextBlock* ConfirmText; // 0x288(0x08)
	struct UImage* Image_34; // 0x290(0x08)
	struct UImage* Image_138; // 0x298(0x08)
	struct UTextBlock* TextBlock_84; // 0x2a0(0x08)
	enum class EKxFriendRelationship RelationshipType; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t EventType; // 0x2ac(0x04)
	struct FString Text; // 0x2b0(0x10)
	int64_t UID; // 0x2c0(0x08)

	void Construct(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_RequestConfirm(int32_t EntryPoint); // Function WBP_RequestConfirm.WBP_RequestConfirm_C.ExecuteUbergraph_WBP_RequestConfirm // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

