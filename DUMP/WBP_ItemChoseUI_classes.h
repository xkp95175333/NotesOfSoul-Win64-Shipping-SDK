// WidgetBlueprintGeneratedClass WBP_ItemChoseUI.WBP_ItemChoseUI_C
// Size: 0x29c (Inherited: 0x260)
struct UWBP_ItemChoseUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_1; // 0x268(0x08)
	struct UImage* Image_248; // 0x270(0x08)
	struct UTextBlock* TextBlock_306; // 0x278(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x280(0x08)
	struct UTextBlock*  ?? ; // 0x288(0x08)
	struct UWBP_ItemSelect_C* ItemSelectUI; // 0x290(0x08)
	int32_t Index; // 0x298(0x04)

	void InitItem(); // Function WBP_ItemChoseUI.WBP_ItemChoseUI_C.InitItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemIco(); // Function WBP_ItemChoseUI.WBP_ItemChoseUI_C.InitItemIco // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_ItemChoseUI.WBP_ItemChoseUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ItemChoseUI.WBP_ItemChoseUI_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ShowItem(int32_t Item); // Function WBP_ItemChoseUI.WBP_ItemChoseUI_C.ShowItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_ItemChoseUI(int32_t EntryPoint); // Function WBP_ItemChoseUI.WBP_ItemChoseUI_C.ExecuteUbergraph_WBP_ItemChoseUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

