// WidgetBlueprintGeneratedClass WBP_PickUpUmgTips.WBP_PickUpUmgTips_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_PickUpUmgTips_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* backgroundIMG; // 0x268(0x08)
	struct UImage* frontIMG; // 0x270(0x08)
	struct UTextBlock* TextContent; // 0x278(0x08)
	struct UVerticalBox* VerticalBox_80; // 0x280(0x08)

	void Get Cur Front IMG(bool bIsValid); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.Get Cur Front IMG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSlotIMG(enum class ENOSElementSlotType Type); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.SetSlotIMG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowTypeIMG(bool bShow); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.ShowTypeIMG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowText(bool bShow); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetZhenYanType(struct FText Type); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.SetZhenYanType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemText(struct FText Type); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.SetItemText // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetItemImg(struct TSoftObjectPtr<struct UTexture2D> SoftTexture); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.SetItemImg // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetScale(struct FVector2D Scale); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.SetScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBackgroundImg(struct UTexture2D* Texture); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.SetBackgroundImg // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_PickUpUmgTips(int32_t EntryPoint); // Function WBP_PickUpUmgTips.WBP_PickUpUmgTips_C.ExecuteUbergraph_WBP_PickUpUmgTips // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

