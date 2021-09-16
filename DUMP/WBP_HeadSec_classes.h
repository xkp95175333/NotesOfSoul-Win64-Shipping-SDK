// WidgetBlueprintGeneratedClass WBP_HeadSec.WBP_HeadSec_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_HeadSec_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UButton* Button_Head; // 0x270(0x08)
	struct UButton* Button_HeadBorder; // 0x278(0x08)
	struct UImage* Image_Head; // 0x280(0x08)
	struct UImage* Image_HeadBorder; // 0x288(0x08)
	struct UWBP_HeadChoose_C* WBP_HeadChoose; // 0x290(0x08)
	struct UWBP_HeadPreview_C* WBP_HeadPreview; // 0x298(0x08)
	struct UDataTable* headicon; // 0x2a0(0x08)
	struct UDataTable* HeadBoarder; // 0x2a8(0x08)
	struct TArray<int32_t> HeadIconGet; // 0x2b0(0x10)
	struct TArray<int32_t> HeadBorderIcon; // 0x2c0(0x10)
	struct UDataTable* CurrentDataTable; // 0x2d0(0x08)
	bool IsChooseHeadIcon; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FMulticastInlineDelegate CallOnConfimIcon; // 0x2e0(0x10)

	void Switch(int32_t Switch); // Function WBP_HeadSec.WBP_HeadSec_C.Switch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_HeadSec.WBP_HeadSec_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_109_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HeadSec.WBP_HeadSec_C.BndEvt__Button_109_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Button_HeadBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HeadSec.WBP_HeadSec_C.BndEvt__Button_HeadBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void OnChooseHeadIcon(int32_t ID); // Function WBP_HeadSec.WBP_HeadSec_C.OnChooseHeadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnConfimChoose(int32_t ID, int32_t HeadBoederID, struct TSoftObjectPtr<struct UTexture2D> headicon, struct TSoftObjectPtr<struct UTexture2D> HeadBorderIcon); // Function WBP_HeadSec.WBP_HeadSec_C.OnConfimChoose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_HeadSec(int32_t EntryPoint); // Function WBP_HeadSec.WBP_HeadSec_C.ExecuteUbergraph_WBP_HeadSec // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void CallOnConfimIcon__DelegateSignature(int32_t ID, int32_t HeadBorderID, struct TSoftObjectPtr<struct UTexture2D> head, struct TSoftObjectPtr<struct UTexture2D> HeadBoard); // Function WBP_HeadSec.WBP_HeadSec_C.CallOnConfimIcon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

