// WidgetBlueprintGeneratedClass WBP_EditNickname.WBP_EditNickname_C
// Size: 0x2fc (Inherited: 0x260)
struct UWBP_EditNickname_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCircularThrobber* CircularThrobber_84; // 0x268(0x08)
	struct UButton* ConfirmBtn; // 0x270(0x08)
	struct UEditableTextBox* EditableTextBox_50; // 0x278(0x08)
	struct UTextBlock* ErrorText; // 0x280(0x08)
	struct UImage* Image_23; // 0x288(0x08)
	struct UImage* Image_54; // 0x290(0x08)
	struct UImage* Image_122; // 0x298(0x08)
	struct UImage* LanguageBG; // 0x2a0(0x08)
	struct UOverlay* LanguageBox; // 0x2a8(0x08)
	struct UImage* LanguageImage; // 0x2b0(0x08)
	struct UScrollBox* LanguageScrollBox; // 0x2b8(0x08)
	struct UTextBlock* LanguageText; // 0x2c0(0x08)
	struct UWBP_Login_C* WBP_Login; // 0x2c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2d0(0x08)
	struct UButton* XiaLaButton; // 0x2d8(0x08)
	struct TArray<struct FString> SensitiveWords; // 0x2e0(0x10)
	struct ABP_LobbyCharacter_C* Char; // 0x2f0(0x08)
	int32_t ErroIndex; // 0x2f8(0x04)

	void OnSelectLanguage(struct FS_LanguageInfo LanguageInfo); // Function WBP_EditNickname.WBP_EditNickname_C.OnSelectLanguage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSensitiveWords(struct FString InputMessage , bool CanEdit); // Function WBP_EditNickname.WBP_EditNickname_C.CheckSensitiveWords // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void BndEvt__Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_EditNickname.WBP_EditNickname_C.BndEvt__Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_EditNickname.WBP_EditNickname_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnEditNicknameRsp_Event_1(int32_t code); // Function WBP_EditNickname.WBP_EditNickname_C.OnEditNicknameRsp_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_110_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_EditNickname.WBP_EditNickname_C.BndEvt__Button_110_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_EditNickname(int32_t EntryPoint); // Function WBP_EditNickname.WBP_EditNickname_C.ExecuteUbergraph_WBP_EditNickname // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

