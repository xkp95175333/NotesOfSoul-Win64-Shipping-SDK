// WidgetBlueprintGeneratedClass WBP_FriendsGroup.WBP_FriendsGroup_C
// Size: 0x330 (Inherited: 0x260)
struct UWBP_FriendsGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_70; // 0x268(0x08)
	struct UEditableText* GroupNameText; // 0x270(0x08)
	struct UImage* Image_59; // 0x278(0x08)
	struct UButton* Spread_Btn; // 0x280(0x08)
	struct UTileView* TileView_94; // 0x288(0x08)
	struct FString GroupName; // 0x290(0x10)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0x2a0(0x08)
	struct UWBP_ChatFrame_C* WBP_ChatFrame; // 0x2a8(0x08)
	struct TArray<struct FKxFriendData> FriendDatas; // 0x2b0(0x10)
	bool NewGroup; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FString NewGroupName; // 0x2c8(0x10)
	bool CanCommit; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t GroupID; // 0x2dc(0x04)
	struct TMap<struct FString, struct FText> DefaultGroups; // 0x2e0(0x50)

	struct FEventReply OnMouseButtonDown_2(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.OnMouseButtonDown_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveMessage(struct FKxChatMessage InputPin); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.OnReciveMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpreadGroup(bool Spread); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.SpreadGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void FriendGroupUpdate(); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.FriendGroupUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnEntryReleased(); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Spread_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BndEvt__Spread_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnReciveFiendMessage_Event_1(struct FKxChatMessage Msg); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.OnReciveFiendMessage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__GroupNameText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BndEvt__GroupNameText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BindAddGroupDelegate(); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BindAddGroupDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnAddFriendGroupRsp_Event_1(int32_t code); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.OnAddFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindModifyGroupDelegate(); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.BindModifyGroupDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnModifyFriendGroupRsp_Event_1(int32_t code); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.OnModifyFriendGroupRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_3(int32_t code); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_4(int32_t code); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_FriendsGroup(int32_t EntryPoint); // Function WBP_FriendsGroup.WBP_FriendsGroup_C.ExecuteUbergraph_WBP_FriendsGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

