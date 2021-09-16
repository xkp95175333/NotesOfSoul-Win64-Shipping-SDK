// WidgetBlueprintGeneratedClass WBP_HeadPreview.WBP_HeadPreview_C
// Size: 0x2f4 (Inherited: 0x260)
struct UWBP_HeadPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Confirm; // 0x268(0x08)
	struct UImage* head; // 0x270(0x08)
	struct UImage* HeadBorder; // 0x278(0x08)
	struct UWBP_HeadSec_C* WBP_HeadSec; // 0x280(0x08)
	int32_t HeadID; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FMulticastInlineDelegate CofimChooseIcon; // 0x290(0x10)
	struct TSoftObjectPtr<struct UTexture2D> headicon; // 0x2a0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> HeadBorderIcon; // 0x2c8(0x28)
	int32_t HeadBorderID; // 0x2f0(0x04)

	void UpdateImage(int32_t ID, bool IsHeadIcon); // Function WBP_HeadPreview.WBP_HeadPreview_C.UpdateImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParent(struct UWBP_HeadSec_C* WBP_HeadSec); // Function WBP_HeadPreview.WBP_HeadPreview_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_HeadPreview.WBP_HeadPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HeadPreview.WBP_HeadPreview_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_HeadPreview(int32_t EntryPoint); // Function WBP_HeadPreview.WBP_HeadPreview_C.ExecuteUbergraph_WBP_HeadPreview // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void CofimChooseIcon__DelegateSignature(int32_t ID, int32_t HeadBoederID, struct TSoftObjectPtr<struct UTexture2D> headicon, struct TSoftObjectPtr<struct UTexture2D> HeadBorderIcon); // Function WBP_HeadPreview.WBP_HeadPreview_C.CofimChooseIcon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

