// WidgetBlueprintGeneratedClass WBP_ChatFrame_Friend.WBP_ChatFrame_Friend_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_ChatFrame_Friend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackGround; // 0x268(0x08)
	struct UButton* Remove_Btn; // 0x270(0x08)
	struct UButton* Select_Btn; // 0x278(0x08)
	struct UTextBlock* TextBlock_37; // 0x280(0x08)
	struct UWBP_ChatFrame_C* WBP_ChatFrame; // 0x288(0x08)
	struct FKxFriendData FriendData; // 0x290(0x48)

	void Construct(); // Function WBP_ChatFrame_Friend.WBP_ChatFrame_Friend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Remove_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame_Friend.WBP_ChatFrame_Friend_C.BndEvt__Remove_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Select_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame_Friend.WBP_ChatFrame_Friend_C.BndEvt__Select_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ChatFrame_Friend(int32_t EntryPoint); // Function WBP_ChatFrame_Friend.WBP_ChatFrame_Friend_C.ExecuteUbergraph_WBP_ChatFrame_Friend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

