// WidgetBlueprintGeneratedClass WBP_LanguageButton.WBP_LanguageButton_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_LanguageButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_428; // 0x268(0x08)
	struct UImage* LanguageImage; // 0x270(0x08)
	struct UTextBlock* LanguageText; // 0x278(0x08)
	struct FS_LanguageInfo LanguageInfo; // 0x280(0x38)
	struct UWBP_EditNickname_C* WBP_EditNickname; // 0x2b8(0x08)

	void Init(); // Function WBP_LanguageButton.WBP_LanguageButton_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_LanguageButton.WBP_LanguageButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_427_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LanguageButton.WBP_LanguageButton_C.BndEvt__Button_427_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LanguageButton(int32_t EntryPoint); // Function WBP_LanguageButton.WBP_LanguageButton_C.ExecuteUbergraph_WBP_LanguageButton // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

