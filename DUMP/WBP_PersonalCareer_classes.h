// WidgetBlueprintGeneratedClass WBP_PersonalCareer.WBP_PersonalCareer_C
// Size: 0x348 (Inherited: 0x26c)
struct UWBP_PersonalCareer_C : UWBP_PC_Base_C {
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* ShowUI; // 0x278(0x08)
	struct UBorder* Border_Achievement; // 0x280(0x08)
	struct UBorder* Border_Info; // 0x288(0x08)
	struct UBorder* Border_Record; // 0x290(0x08)
	struct UBorder* Border_Skin; // 0x298(0x08)
	struct UButton* Button_89; // 0x2a0(0x08)
	struct UButton* Button_Achievement; // 0x2a8(0x08)
	struct UButton* Button_Close; // 0x2b0(0x08)
	struct UButton* Button_FriendRelationship; // 0x2b8(0x08)
	struct UButton* Button_Infor; // 0x2c0(0x08)
	struct UButton* Button_Record; // 0x2c8(0x08)
	struct UButton* Button_SkinC; // 0x2d0(0x08)
	struct UImage* Image_Achievement; // 0x2d8(0x08)
	struct UImage* Image_FriendRelationship; // 0x2e0(0x08)
	struct UImage* Image_Infor; // 0x2e8(0x08)
	struct UImage* Image_Record; // 0x2f0(0x08)
	struct UImage* Image_SkinC; // 0x2f8(0x08)
	struct UTextBlock* Text_Achievement; // 0x300(0x08)
	struct UTextBlock* Text_Infor; // 0x308(0x08)
	struct UTextBlock* Text_Record; // 0x310(0x08)
	struct UTextBlock* Text_SkinC; // 0x318(0x08)
	struct UWBP_FriendRelationship_C* WBP_FriendRelationship; // 0x320(0x08)
	struct UWBP_PC_Achievement_C* WBP_PC_Achievement; // 0x328(0x08)
	struct UWBP_PC_InfoMain_C* WBP_PC_InfoMain; // 0x330(0x08)
	struct UWBP_PC_RecordMain_C* WBP_PC_RecordMain; // 0x338(0x08)
	struct UWBP_PC_SkinCollection_C* WBP_PC_SkinCollection; // 0x340(0x08)

	void HideAll(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.HideAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Switch Widgets Visibility(int32_t WhichToVisible); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.Switch Widgets Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Infor_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.BndEvt__Button_Infor_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Record_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.BndEvt__Button_Record_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_SkinC_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.BndEvt__Button_SkinC_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_FriendRelationship_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.BndEvt__Button_FriendRelationship_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnStartMatchSelection_Event_1(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.OnStartMatchSelection_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.BndEvt__Button_Achievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PersonalCareer(int32_t EntryPoint); // Function WBP_PersonalCareer.WBP_PersonalCareer_C.ExecuteUbergraph_WBP_PersonalCareer // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

