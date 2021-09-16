// WidgetBlueprintGeneratedClass WBP_OneFriend.WBP_OneFriend_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_OneFriend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_90; // 0x268(0x08)
	struct UImage* headicon; // 0x270(0x08)
	struct UImage* HeadImage_2; // 0x278(0x08)
	struct UButton* NewMessage_Btn; // 0x280(0x08)
	struct UEditableText* NickName; // 0x288(0x08)
	struct UScaleBox* Root; // 0x290(0x08)
	struct UImage* StateImage; // 0x298(0x08)
	struct UTextBlock* StateText; // 0x2a0(0x08)
	struct FKxFriendData FriendData; // 0x2a8(0x48)
	struct UWBP_ChatFrame_C* WBP_ChatFrame; // 0x2f0(0x08)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0x2f8(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_OneFriend.WBP_OneFriend_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFriendDataUpdate(struct FKxFriendData KxFriendData); // Function WBP_OneFriend.WBP_OneFriend_C.OnFriendDataUpdate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnEntryReleased(); // Function WBP_OneFriend.WBP_OneFriend_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_OneFriend.WBP_OneFriend_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_OneFriend.WBP_OneFriend_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_OneFriend.WBP_OneFriend_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__NewMessage_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneFriend.WBP_OneFriend_C.BndEvt__NewMessage_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_OneFriend.WBP_OneFriend_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_OneFriend.WBP_OneFriend_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_OneFriend(int32_t EntryPoint); // Function WBP_OneFriend.WBP_OneFriend_C.ExecuteUbergraph_WBP_OneFriend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

