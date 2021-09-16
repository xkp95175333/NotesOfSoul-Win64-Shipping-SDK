// WidgetBlueprintGeneratedClass WBP_Optional.WBP_Optional_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_Optional_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UScrollBox* ExtraAddScoreBox; // 0x268(0x08)
	struct UImage* Image_VFX; // 0x270(0x08)
	struct UTextBlock* OptionalScore; // 0x278(0x08)
	int32_t BravePoint; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FTimerHandle TimerHandle; // 0x288(0x08)
	float Value; // 0x290(0x04)
	float TimerHanlde; // 0x294(0x04)
	struct UMaterialInstanceDynamic* Material; // 0x298(0x08)

	void Construct(); // Function WBP_Optional.WBP_Optional_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Optional.WBP_Optional_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Optional.WBP_Optional_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_Optional(int32_t EntryPoint); // Function WBP_Optional.WBP_Optional_C.ExecuteUbergraph_WBP_Optional // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

