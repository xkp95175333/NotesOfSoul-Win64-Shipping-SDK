// WidgetBlueprintGeneratedClass WBP_OneFriendRelationship.WBP_OneFriendRelationship_C
// Size: 0x399 (Inherited: 0x260)
struct UWBP_OneFriendRelationship_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Agree_Btn; // 0x268(0x08)
	struct UBorder* Border_80; // 0x270(0x08)
	struct UButton* Buddy_Btn; // 0x278(0x08)
	struct UTextBlock* Buddy_Text; // 0x280(0x08)
	struct UButton* Button_1; // 0x288(0x08)
	struct UButton* Button_141; // 0x290(0x08)
	struct UButton* Couple_Btn; // 0x298(0x08)
	struct UTextBlock* Couple_Text; // 0x2a0(0x08)
	struct UButton* Gay_Btn; // 0x2a8(0x08)
	struct UTextBlock* Gay_Text; // 0x2b0(0x08)
	struct UButton* Girls_Btn; // 0x2b8(0x08)
	struct UTextBlock* Girls_Text; // 0x2c0(0x08)
	struct UImage* HeadIconImage; // 0x2c8(0x08)
	struct UButton* Ignore_Btn; // 0x2d0(0x08)
	struct UImage* Image_177; // 0x2d8(0x08)
	struct UImage* Image_307; // 0x2e0(0x08)
	struct UImage* Image_348; // 0x2e8(0x08)
	struct UImage* Image_454; // 0x2f0(0x08)
	struct UImage* Image_498; // 0x2f8(0x08)
	struct UImage* Image_653; // 0x300(0x08)
	struct UTextBlock* IntimacyValue; // 0x308(0x08)
	struct UTextBlock* NickName; // 0x310(0x08)
	struct UButton* Refuse_Btn; // 0x318(0x08)
	struct UImage* RelationshipImage; // 0x320(0x08)
	struct UVerticalBox* RelationshipOptionsBox; // 0x328(0x08)
	struct UTextBlock* RelationshipText; // 0x330(0x08)
	struct UVerticalBox* SelectionBox; // 0x338(0x08)
	struct UButton* SelectRelationship_Btn; // 0x340(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x348(0x08)
	struct FKxFriendData FriendData; // 0x350(0x48)
	bool AlreadyHasRelationship; // 0x398(0x01)

	struct UTexture2D* GetRelationshipImageTexture(int32_t RelationshipLevel, enum class EKxFriendRelationship Index); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.GetRelationshipImageTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void UpdateOneFriendRelationshipInfo(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.UpdateOneFriendRelationshipInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent, struct FEventReply EventReply); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__SelectRelationship_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__SelectRelationship_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Couple_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Couple_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Gay_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Gay_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Girls_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Girls_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Buddy_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Buddy_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Girls_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Girls_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Girls_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Girls_Btn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Gay_Btn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Gay_Btn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Gay_Btn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Gay_Btn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Buddy_Btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Buddy_Btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Buddy_Btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Buddy_Btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Couple_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Couple_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Couple_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.BndEvt__Couple_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_OneFriendRelationship(int32_t EntryPoint); // Function WBP_OneFriendRelationship.WBP_OneFriendRelationship_C.ExecuteUbergraph_WBP_OneFriendRelationship // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

