// WidgetBlueprintGeneratedClass WBP_TitleIcon.WBP_TitleIcon_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_TitleIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_118; // 0x268(0x08)
	struct UWBP_PlayerTitle_C* WBP_PlayerTitle; // 0x270(0x08)

	void InitParent(struct UWBP_PlayerTitle_C* WBP_PlayerTitle); // Function WBP_TitleIcon.WBP_TitleIcon_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_117_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_TitleIcon.WBP_TitleIcon_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_TitleIcon(int32_t EntryPoint); // Function WBP_TitleIcon.WBP_TitleIcon_C.ExecuteUbergraph_WBP_TitleIcon // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

