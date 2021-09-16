// WidgetBlueprintGeneratedClass WBP_FriendMain.WBP_FriendMain_C
// Size: 0x338 (Inherited: 0x260)
struct UWBP_FriendMain_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* AddFriend_Btn; // 0x268(0x08)
	struct UButton* Button_30; // 0x270(0x08)
	struct UEditableTextBox* EditableTextBox_121; // 0x278(0x08)
	struct UScrollBox* FriendGroupScollBox; // 0x280(0x08)
	struct UImage* Image_60; // 0x288(0x08)
	struct UButton* NewApplyAddFriend_Btn; // 0x290(0x08)
	struct UButton* SearchFriend_Btn; // 0x298(0x08)
	struct UWBP_AccountInfor_C* WBP_AccountInfor; // 0x2a0(0x08)
	struct UWBP_HomeVisitor_C* WBP_HomeVisitor; // 0x2a8(0x08)
	struct UWBP_IntimateFriendList_C* WBP_IntimateFriendList; // 0x2b0(0x08)
	struct UWBP_NewFriend_C* WBP_NewFriend; // 0x2b8(0x08)
	struct UWBP_StateBox_C* WBP_StateBox; // 0x2c0(0x08)
	struct FString OrderID; // 0x2c8(0x10)
	struct TMap<struct FString, struct UWBP_FriendsGroup_C*> FriendGroups; // 0x2d8(0x50)
	struct TArray<struct FKxFriendData> HideFriendList; // 0x328(0x10)

	void OnFriendListUpdate(struct TArray<struct FKxFriendData> FriendList); // Function WBP_FriendMain.WBP_FriendMain_C.OnFriendListUpdate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateFriendMain(); // Function WBP_FriendMain.WBP_FriendMain_C.UpdateFriendMain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class ESlateVisibility Get_NewApplyAddFriend_Btn_Visibility_1(); // Function WBP_FriendMain.WBP_FriendMain_C.Get_NewApplyAddFriend_Btn_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ShowNewFriendWBP(int32_t ActiveIndex); // Function WBP_FriendMain.WBP_FriendMain_C.ShowNewFriendWBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_FriendMain.WBP_FriendMain_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__AddFriend_Btn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendMain.WBP_FriendMain_C.BndEvt__AddFriend_Btn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__NewApplyAddFriend_Btn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendMain.WBP_FriendMain_C.BndEvt__NewApplyAddFriend_Btn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_29_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendMain.WBP_FriendMain_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendListUpdate_Event_1(struct TArray<struct FKxFriendData> DataList); // Function WBP_FriendMain.WBP_FriendMain_C.OnFriendListUpdate_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__EditableTextBox_120_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_FriendMain.WBP_FriendMain_C.BndEvt__EditableTextBox_120_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartMatchSelection_Event_1(); // Function WBP_FriendMain.WBP_FriendMain_C.OnStartMatchSelection_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInviteRspEvent_Event_1(int32_t code); // Function WBP_FriendMain.WBP_FriendMain_C.OnInviteRspEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseThis(); // Function WBP_FriendMain.WBP_FriendMain_C.CloseThis // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_FriendMain(int32_t EntryPoint); // Function WBP_FriendMain.WBP_FriendMain_C.ExecuteUbergraph_WBP_FriendMain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

