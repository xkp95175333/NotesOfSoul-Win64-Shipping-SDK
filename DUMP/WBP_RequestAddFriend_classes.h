// WidgetBlueprintGeneratedClass WBP_RequestAddFriend.WBP_RequestAddFriend_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_RequestAddFriend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_93; // 0x268(0x08)
	struct UImage* Image_103; // 0x270(0x08)
	struct UImage* Image_231; // 0x278(0x08)
	struct UButton* ReqeustAddFriend_Btn; // 0x280(0x08)
	struct UEditableTextBox* SearchBar; // 0x288(0x08)
	struct UTextBlock* TipText; // 0x290(0x08)
	struct UButton* WatchData_Btn; // 0x298(0x08)

	void BndEvt__ReqeustAddFriend_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RequestAddFriend.WBP_RequestAddFriend_C.BndEvt__ReqeustAddFriend_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_RequestAddFriend.WBP_RequestAddFriend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddFriendRsp_Event_1(int32_t code); // Function WBP_RequestAddFriend.WBP_RequestAddFriend_C.OnAddFriendRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_RequestAddFriend(int32_t EntryPoint); // Function WBP_RequestAddFriend.WBP_RequestAddFriend_C.ExecuteUbergraph_WBP_RequestAddFriend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

