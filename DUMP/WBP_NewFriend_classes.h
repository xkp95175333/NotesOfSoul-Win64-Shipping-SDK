// WidgetBlueprintGeneratedClass WBP_NewFriend.WBP_NewFriend_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_NewFriend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnClickBGAnimation; // 0x268(0x08)
	struct UTextBlock* ApplyAddListText; // 0x270(0x08)
	struct UButton* ApplyList_Btn; // 0x278(0x08)
	struct UButton* Button_32; // 0x280(0x08)
	struct UButton* Close_Btn; // 0x288(0x08)
	struct UImage* Image_66; // 0x290(0x08)
	struct UButton* ReqestAddFriend_Btn; // 0x298(0x08)
	struct UTextBlock* RequestAddText; // 0x2a0(0x08)
	struct UWBP_ApplyAddFriendList_C* WBP_ApplyAddFriendList; // 0x2a8(0x08)
	struct UWBP_RequestAddFriend_C* WBP_RequestAddFriend; // 0x2b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2b8(0x08)

	void ChangePage(int32_t Index); // Function WBP_NewFriend.WBP_NewFriend_C.ChangePage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ReqestAddFriendInterface_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_NewFriend.WBP_NewFriend_C.BndEvt__ReqestAddFriendInterface_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ApplyList_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_NewFriend.WBP_NewFriend_C.BndEvt__ApplyList_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_NewFriend.WBP_NewFriend_C.BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_NewFriend.WBP_NewFriend_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_NewFriend(int32_t EntryPoint); // Function WBP_NewFriend.WBP_NewFriend_C.ExecuteUbergraph_WBP_NewFriend // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

