// WidgetBlueprintGeneratedClass WBP_AccountInfor.WBP_AccountInfor_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_AccountInfor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UButton* Button_69; // 0x270(0x08)
	struct UButton* EditNickname_Btn; // 0x278(0x08)
	struct UButton* EditOnlineOnlineState; // 0x280(0x08)
	struct UTextBlock* GkdID; // 0x288(0x08)
	struct UImage* HeadBorder; // 0x290(0x08)
	struct UImage* HeadImage; // 0x298(0x08)
	struct UEditableTextBox* Nickname_Text; // 0x2a0(0x08)
	struct UImage* StateImage; // 0x2a8(0x08)
	struct UTextBlock* StateText; // 0x2b0(0x08)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0x2b8(0x08)
	struct TArray<struct FString> SensitiveWords; // 0x2c0(0x10)
	int32_t HeadID; // 0x2d0(0x04)
	int32_t HeadBorderID; // 0x2d4(0x04)

	void IsCanCreat(bool IsCan); // Function WBP_AccountInfor.WBP_AccountInfor_C.IsCanCreat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateHeadIcon(int32_t HeadID, int32_t HeadBorder); // Function WBP_AccountInfor.WBP_AccountInfor_C.UpdateHeadIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSensitiveWords(struct FString Message, bool CanEdit); // Function WBP_AccountInfor.WBP_AccountInfor_C.CheckSensitiveWords // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateAccountInfor(); // Function WBP_AccountInfor.WBP_AccountInfor_C.UpdateAccountInfor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetState(int32_t Index); // Function WBP_AccountInfor.WBP_AccountInfor_C.SetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__EditNickname_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_AccountInfor.WBP_AccountInfor_C.BndEvt__EditNickname_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__EditableTextBox_111_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_AccountInfor.WBP_AccountInfor_C.BndEvt__EditableTextBox_111_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_AccountInfor.WBP_AccountInfor_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnEditNicknameRsp_Event_1(int32_t code); // Function WBP_AccountInfor.WBP_AccountInfor_C.OnEditNicknameRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChoose(int32_t HeadID, int32_t HeadBoederID); // Function WBP_AccountInfor.WBP_AccountInfor_C.OnChoose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_AccountInfor.WBP_AccountInfor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(struct FUserGameBaseData OneSelfInfo); // Function WBP_AccountInfor.WBP_AccountInfor_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__EditOnlineOnlineState_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_AccountInfor.WBP_AccountInfor_C.BndEvt__EditOnlineOnlineState_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_AccountInfor.WBP_AccountInfor_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_AccountInfor.WBP_AccountInfor_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_AccountInfor(int32_t EntryPoint); // Function WBP_AccountInfor.WBP_AccountInfor_C.ExecuteUbergraph_WBP_AccountInfor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

