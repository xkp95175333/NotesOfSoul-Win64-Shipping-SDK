// WidgetBlueprintGeneratedClass WBP_Talent.WBP_Talent_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_Talent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_80; // 0x268(0x08)
	struct UTextBlock* TextBlock_Name; // 0x270(0x08)

	void Construct(); // Function WBP_Talent.WBP_Talent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(struct FText InText, struct TSoftObjectPtr<struct UTexture2D> SoftTexture); // Function WBP_Talent.WBP_Talent_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSettleInfo(struct TSoftObjectPtr<struct UTexture2D> SoftTexture); // Function WBP_Talent.WBP_Talent_C.SetSettleInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Talent(int32_t EntryPoint); // Function WBP_Talent.WBP_Talent_C.ExecuteUbergraph_WBP_Talent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

