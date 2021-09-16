// WidgetBlueprintGeneratedClass WBP_ChatFrame.WBP_ChatFrame_C
// Size: 0x388 (Inherited: 0x260)
struct UWBP_ChatFrame_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LeaveAnimation; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x270(0x08)
	struct UScrollBox* ChatFriendBox; // 0x278(0x08)
	struct UButton* Friend_Btn; // 0x280(0x08)
	struct UTextBlock* FriendText; // 0x288(0x08)
	struct UButton* Guild_Btn; // 0x290(0x08)
	struct UWBP_MessageBox_C* GuildMessageBox; // 0x298(0x08)
	struct UTextBlock* GuildText; // 0x2a0(0x08)
	struct UButton* HideButton; // 0x2a8(0x08)
	struct UButton* Home_Btn; // 0x2b0(0x08)
	struct UWidgetSwitcher* HomeFriendSwitcher; // 0x2b8(0x08)
	struct UTextBlock* HomeText; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image_39; // 0x2d0(0x08)
	struct UImage* Image_45; // 0x2d8(0x08)
	struct UImage* Image_73; // 0x2e0(0x08)
	struct UImage* Image_155; // 0x2e8(0x08)
	struct UEditableTextBox* InputBox; // 0x2f0(0x08)
	struct UWidgetSwitcher* MessageBoxSwitcher; // 0x2f8(0x08)
	struct UButton* SendMessageBtn; // 0x300(0x08)
	struct UButton* SpreadBtn; // 0x308(0x08)
	struct UWBP_MessageBox_C* TeamMessageBox; // 0x310(0x08)
	struct UWBP_MessageBox_C* WBP_MessageBox; // 0x318(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_3; // 0x320(0x08)
	struct FKxFriendData FriendData; // 0x328(0x48)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0x370(0x08)
	struct TArray<struct FString> SensitiveWords; // 0x378(0x10)

	void AddMessageToTeamMessageBox(struct FLobbyChatMessage MessageInfo); // Function WBP_ChatFrame.WBP_ChatFrame_C.AddMessageToTeamMessageBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddMessageToGuildMessageBox(struct FLobbyChatMessage MessageInfo); // Function WBP_ChatFrame.WBP_ChatFrame_C.AddMessageToGuildMessageBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowChatFrameOnRecieveMessage(struct FKxChatMessage KxChatMessage); // Function WBP_ChatFrame.WBP_ChatFrame_C.ShowChatFrameOnRecieveMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddMessageToHomeChatBox(); // Function WBP_ChatFrame.WBP_ChatFrame_C.AddMessageToHomeChatBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReplaceSensitiveWords(struct FString InputString, struct FString SendString); // Function WBP_ChatFrame.WBP_ChatFrame_C.ReplaceSensitiveWords // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ChooseBar(int32_t Index); // Function WBP_ChatFrame.WBP_ChatFrame_C.ChooseBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectChatFriend(struct FKxFriendData KxFriendData, bool NeedAddFriendList); // Function WBP_ChatFrame.WBP_ChatFrame_C.SelectChatFriend // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideUnselectedFriend(struct FKxFriendData FriendData); // Function WBP_ChatFrame.WBP_ChatFrame_C.HideUnselectedFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddMessageViaReceiveMessage(struct FKxChatMessage Message); // Function WBP_ChatFrame.WBP_ChatFrame_C.AddMessageViaReceiveMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddMessageViaSendMessage(); // Function WBP_ChatFrame.WBP_ChatFrame_C.AddMessageViaSendMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__EditableTextBox_81_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__EditableTextBox_81_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ChatFrame.WBP_ChatFrame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Home_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Home_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Friend_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Friend_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__EditableTextBox_81_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__EditableTextBox_81_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SpreadBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__SpreadBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_241_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Button_241_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnSendFriendMessageRsp_Event_1(struct FKxChatMessage Msg, int32_t code); // Function WBP_ChatFrame.WBP_ChatFrame_C.OnSendFriendMessageRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveFiendMessage_Event_1(struct FKxChatMessage Msg); // Function WBP_ChatFrame.WBP_ChatFrame_C.OnReciveFiendMessage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__HideButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__HideButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Friend_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Friend_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Friend_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Friend_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Home_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Home_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Home_Btn_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__Home_Btn_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WBP_ChatFrame_Guild_Btn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__WBP_ChatFrame_Guild_Btn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WBP_ChatFrame_Guild_Btn_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__WBP_ChatFrame_Guild_Btn_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WBP_ChatFrame_Guild_Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ChatFrame.WBP_ChatFrame_C.BndEvt__WBP_ChatFrame_Guild_Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveChatMessage_Event_1(enum class EChatChannelType ChannelType, struct FLobbyChatMessageList MsgList); // Function WBP_ChatFrame.WBP_ChatFrame_C.OnReciveChatMessage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ChatFrame(int32_t EntryPoint); // Function WBP_ChatFrame.WBP_ChatFrame_C.ExecuteUbergraph_WBP_ChatFrame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

