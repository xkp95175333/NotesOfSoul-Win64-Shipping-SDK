// WidgetBlueprintGeneratedClass WBP_TakeAlongItem.WBP_TakeAlongItem_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_TakeAlongItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* SizeBox_1; // 0x268(0x08)
	struct USizeBox* SizeBox_2; // 0x270(0x08)
	struct USizeBox* SizeBox_3; // 0x278(0x08)
	struct UTextBlock* TakeAlongText; // 0x280(0x08)
	struct UWBP_Talent_C* WBP_Talent_1; // 0x288(0x08)
	struct UWBP_Talent_C* WBP_Talent_2; // 0x290(0x08)
	struct UWBP_Talent_C* WBP_Talent_3; // 0x298(0x08)
	struct TArray<int32_t> Talent; // 0x2a0(0x10)
	struct FText Name; // 0x2b0(0x18)
	int32_t ID; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct UWBP_Talent_C*> Take Along; // 0x2d0(0x10)
	struct TArray<struct USizeBox*> Array; // 0x2e0(0x10)

	void SetTalent(int32_t Index, struct FText InText, struct TSoftObjectPtr<struct UTexture2D> SoftTexture, bool IsValid); // Function WBP_TakeAlongItem.WBP_TakeAlongItem_C.SetTalent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_TakeAlongItem.WBP_TakeAlongItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_TakeAlongItem.WBP_TakeAlongItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_TakeAlongItem(int32_t EntryPoint); // Function WBP_TakeAlongItem.WBP_TakeAlongItem_C.ExecuteUbergraph_WBP_TakeAlongItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

