// WidgetBlueprintGeneratedClass WBP_ApplyAddFriend.WBP_ApplyAddFriend_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_ApplyAddFriend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Agree; // 0x268(0x08)
	struct UTextBlock* AgreeText; // 0x270(0x08)
	struct UBorder* Border_90; // 0x278(0x08)
	struct UImage* headicon; // 0x280(0x08)
	struct UButton* Ignore; // 0x288(0x08)
	struct UTextBlock* IgnoreText; // 0x290(0x08)
	struct UImage* Image_103; // 0x298(0x08)
	struct UTextBlock* NickName; // 0x2a0(0x08)
	struct FKxFriendData FriendData; // 0x2a8(0x48)

	void Init(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnEntryReleased(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Agree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BndEvt__Agree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Refuse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BndEvt__Refuse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendReplyAddRequestRsp_Event_1(int32_t code, int64_t UID); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.OnFriendReplyAddRequestRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Agree_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BndEvt__Agree_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Agree_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BndEvt__Agree_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Ignore_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BndEvt__Ignore_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Ignore_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.BndEvt__Ignore_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ApplyAddFriend(int32_t EntryPoint); // Function WBP_ApplyAddFriend.WBP_ApplyAddFriend_C.ExecuteUbergraph_WBP_ApplyAddFriend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

