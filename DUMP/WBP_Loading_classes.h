// WidgetBlueprintGeneratedClass WBP_Loading.WBP_Loading_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_Loading_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_1; // 0x268(0x08)
	struct UImage* Image_39; // 0x270(0x08)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> LoadingUIS; // 0x278(0x10)

	void Construct(); // Function WBP_Loading.WBP_Loading_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Loading(int32_t EntryPoint); // Function WBP_Loading.WBP_Loading_C.ExecuteUbergraph_WBP_Loading // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

