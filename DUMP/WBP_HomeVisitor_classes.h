// WidgetBlueprintGeneratedClass WBP_HomeVisitor.WBP_HomeVisitor_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_HomeVisitor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Home_Btn; // 0x268(0x08)
	struct UOverlay* Homepage; // 0x270(0x08)
	struct UImage* Image_16; // 0x278(0x08)
	struct UImage* Image_58; // 0x280(0x08)
	struct UTileView* TileView_136; // 0x288(0x08)

	void OnHomeBtnPress(); // Function WBP_HomeVisitor.WBP_HomeVisitor_C.OnHomeBtnPress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_HomeVisitor.WBP_HomeVisitor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Home_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HomeVisitor.WBP_HomeVisitor_C.BndEvt__Home_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_HomeVisitor(int32_t EntryPoint); // Function WBP_HomeVisitor.WBP_HomeVisitor_C.ExecuteUbergraph_WBP_HomeVisitor // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

