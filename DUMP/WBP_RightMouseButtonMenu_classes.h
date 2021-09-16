// WidgetBlueprintGeneratedClass WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C
// Size: 0x4c0 (Inherited: 0x260)
struct UWBP_RightMouseButtonMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* AddFriend_Btn; // 0x268(0x08)
	struct UTextBlock* AddFriendText; // 0x270(0x08)
	struct UButton* AddGroup; // 0x278(0x08)
	struct UTextBlock* AddGroupText; // 0x280(0x08)
	struct UButton* Close_Btn; // 0x288(0x08)
	struct UButton* DeleteFriend_Btn; // 0x290(0x08)
	struct UButton* DeleteFriendRelationship_Btn; // 0x298(0x08)
	struct UTextBlock* DeleteFriendRelationship_Txt; // 0x2a0(0x08)
	struct UTextBlock* DeleteFriendText; // 0x2a8(0x08)
	struct UButton* DeleteGroup_Btn; // 0x2b0(0x08)
	struct UTextBlock* DeleteGroupText; // 0x2b8(0x08)
	struct UOverlay* FriendGroupMenu; // 0x2c0(0x08)
	struct UOverlay* FriendMenu; // 0x2c8(0x08)
	struct UImage* FriendMenuBG; // 0x2d0(0x08)
	struct UOverlay* FriendRelationShipMenu; // 0x2d8(0x08)
	struct UImage* FriendRelationshipMenuBG; // 0x2e0(0x08)
	struct UScrollBox* GroupBox; // 0x2e8(0x08)
	struct UImage* GroupBoxBGImage; // 0x2f0(0x08)
	struct USizeBox* GroupSizeBox; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image_2; // 0x308(0x08)
	struct UImage* Image_69; // 0x310(0x08)
	struct UVerticalBox* InviteBox; // 0x318(0x08)
	struct UVerticalBox* InviteBox_FR; // 0x320(0x08)
	struct UButton* InviteToHome_Btn; // 0x328(0x08)
	struct UButton* InviteToHome_Btn_2; // 0x330(0x08)
	struct UTextBlock* InviteToHomeText; // 0x338(0x08)
	struct UTextBlock* InviteToHomeText_2; // 0x340(0x08)
	struct UButton* Manage_Btn; // 0x348(0x08)
	struct UButton* ModifyFriendRelationship_Btn; // 0x350(0x08)
	struct UTextBlock* ModifyFriendRelationship_Txt; // 0x358(0x08)
	struct UButton* ModifyGroup_Btn; // 0x360(0x08)
	struct UTextBlock* ModifyGroupText; // 0x368(0x08)
	struct UButton* Report_Btn; // 0x370(0x08)
	struct UScaleBox* ScaleBox_2; // 0x378(0x08)
	struct UOverlay* SecondLevelMenu; // 0x380(0x08)
	struct UButton* SendGift_Btn; // 0x388(0x08)
	struct UTextBlock* SendGift_Txt; // 0x390(0x08)
	struct UButton* SendMessage_Btn; // 0x398(0x08)
	struct UTextBlock* SendMessageText; // 0x3a0(0x08)
	struct UButton* SetGroup_Btn; // 0x3a8(0x08)
	struct UTextBlock* SetGroupText; // 0x3b0(0x08)
	struct USpacer* Spacer_276; // 0x3b8(0x08)
	struct UOverlay* StrangerMenu; // 0x3c0(0x08)
	struct UTextBlock* TextBlock_5; // 0x3c8(0x08)
	struct UButton* WatchInfo_Btn; // 0x3d0(0x08)
	struct UTextBlock* WatchInfo_Text; // 0x3d8(0x08)
	struct UButton* WatchInfor_Friend_Btn; // 0x3e0(0x08)
	struct UButton* WatchInfor_Recent_Btn; // 0x3e8(0x08)
	struct UTextBlock* WatchInfoText_Friend; // 0x3f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3f8(0x08)
	struct FKxFriendData FriendData; // 0x400(0x48)
	struct UWBP_OneFriend_C* WBP_OneFriend; // 0x448(0x08)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0x450(0x08)
	enum class E_RightMousetMenuType ClickType; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct UWBP_FriendsGroup_C* WBP_FriendGroup; // 0x460(0x08)
	struct TMap<struct FString, struct FText> DefaultGroups; // 0x468(0x50)
	struct UWBP_OneFriendRelationship_C* WBP_OneFriendRelationship; // 0x4b8(0x08)

	void ShowInviteButton(bool Show); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.ShowInviteButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Is Home Owner(bool Can); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.Is Home Owner // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Construct(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteFriendRelationship_Btn_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteFriendRelationship_Btn_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteFriendRelationship_Btn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteFriendRelationship_Btn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ModifyFriendRelationship_Btn_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__ModifyFriendRelationship_Btn_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ModifyFriendRelationship_Btn_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__ModifyFriendRelationship_Btn_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SendGift_Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SendGift_Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SendGift_Btn_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SendGift_Btn_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InviteToHome_Btn_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__InviteToHome_Btn_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InviteToHome_Btn_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__InviteToHome_Btn_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfo_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfo_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfo_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfo_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteGroup_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteGroup_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteGroup_Btn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteGroup_Btn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ModifyGroup_Btn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__ModifyGroup_Btn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ModifyGroup_Btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__ModifyGroup_Btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__AddGroup_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__AddGroup_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__AddGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__AddGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteFriend_Btn_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteFriend_Btn_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfor_Friend_Btn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfor_Friend_Btn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InviteToHome_Btn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__InviteToHome_Btn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SendMessage_Btn_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SendMessage_Btn_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_102_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__Button_102_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteFriend_Btn_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteFriend_Btn_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfor_Friend_Btn_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfor_Friend_Btn_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InviteToHome_Btn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__InviteToHome_Btn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SendMessage_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SendMessage_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SetGroup_Btn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SetGroup_Btn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SetGroup_Btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SetGroup_Btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnDeleteFriendGroupRsp_Event_1(int32_t code); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.OnDeleteFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t code); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__ModifyGroup_Btn_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__ModifyGroup_Btn_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteGroup_Btn_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteGroup_Btn_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Report_Btn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__Report_Btn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfor_Recent_Btn_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfor_Recent_Btn_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__AddFriend_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__AddFriend_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_102_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__Button_102_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__AddGroup_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__AddGroup_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfor_Friend_Btn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfor_Friend_Btn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InviteToHome_Btn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__InviteToHome_Btn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteFriend_Btn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteFriend_Btn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SendMessage_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__SendMessage_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__DeleteFriendRelationship_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__DeleteFriendRelationship_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__InviteToHome_Btn_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__InviteToHome_Btn_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__WatchInfo_Btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.BndEvt__WatchInfo_Btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_RightMouseButtonMenu(int32_t EntryPoint); // Function WBP_RightMouseButtonMenu.WBP_RightMouseButtonMenu_C.ExecuteUbergraph_WBP_RightMouseButtonMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

