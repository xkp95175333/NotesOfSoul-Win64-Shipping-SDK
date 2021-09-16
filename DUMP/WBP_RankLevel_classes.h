// WidgetBlueprintGeneratedClass WBP_RankLevel.WBP_RankLevel_C
// Size: 0x440 (Inherited: 0x260)
struct UWBP_RankLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x268(0x08)
	struct UWidgetAnimation* VFXAnimation; // 0x270(0x08)
	struct UCanvasPanel* HongHuang; // 0x278(0x08)
	struct UCanvasPanel* HongHuangPearl; // 0x280(0x08)
	struct UImage* Image_73; // 0x288(0x08)
	struct UImage* Image_117; // 0x290(0x08)
	struct UCanvasPanel* Land; // 0x298(0x08)
	struct UCanvasPanel* LandPearl; // 0x2a0(0x08)
	struct UTextBlock* LandText; // 0x2a8(0x08)
	struct UCanvasPanel* Primary; // 0x2b0(0x08)
	struct UTextBlock* RankLevel; // 0x2b8(0x08)
	struct UCanvasPanel* Sky; // 0x2c0(0x08)
	struct UCanvasPanel* SkyPearl; // 0x2c8(0x08)
	struct UTextBlock* SkyText; // 0x2d0(0x08)
	struct UTextBlock* StarNumberText; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_79; // 0x2e0(0x08)
	struct UCanvasPanel* Univers; // 0x2e8(0x08)
	struct UCanvasPanel* UniversPearl; // 0x2f0(0x08)
	struct UTextBlock* UniversText; // 0x2f8(0x08)
	struct UWBP_Pearl_C* WBP_Pearl_3; // 0x300(0x08)
	struct UWBP_Pearl_C* WBP_Pearl_13; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Rank; // 0x310(0x08)
	struct UCanvasPanel* Xuan; // 0x318(0x08)
	struct UCanvasPanel* XuanPearl; // 0x320(0x08)
	struct UTextBlock* XuanText; // 0x328(0x08)
	struct UCanvasPanel* Yellow; // 0x330(0x08)
	struct UCanvasPanel* YellowPearl; // 0x338(0x08)
	struct UTextBlock* YellowText; // 0x340(0x08)
	int32_t CharacterID; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct TArray<struct UCanvasPanel*> CanvasPanel; // 0x350(0x10)
	struct TArray<struct UTexture2D*> GhostImageRank; // 0x360(0x10)
	struct FTimerHandle TimerHandle; // 0x370(0x08)
	int32_t Grade; // 0x378(0x04)
	int32_t Intevel; // 0x37c(0x04)
	int32_t Star; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct UCanvasPanel* CurCanvasPanel; // 0x388(0x08)
	struct TArray<struct UTexture2D*> HumanImageRank; // 0x390(0x10)
	struct TMap<int32_t, struct FS_RankImagePosition> HumanPosition; // 0x3a0(0x50)
	struct TMap<int32_t, struct FS_RankImagePosition> GhostPosition; // 0x3f0(0x50)

	void Set Star Show(struct UCanvasPanel* Canvas); // Function WBP_RankLevel.WBP_RankLevel_C.Set Star Show // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAddStar(); // Function WBP_RankLevel.WBP_RankLevel_C.SetAddStar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRankImage(struct UCanvasPanel* Canvas, int32_t Index); // Function WBP_RankLevel.WBP_RankLevel_C.SetRankImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetRankVFX(); // Function WBP_RankLevel.WBP_RankLevel_C.SetRankVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Rank(); // Function WBP_RankLevel.WBP_RankLevel_C.Set Rank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WidgetSwitcher_Rank_Event_1(struct UWidgetSwitcher* WidgetSwitcher_Rank, struct UWidget* Widget); // Function WBP_RankLevel.WBP_RankLevel_C.WidgetSwitcher_Rank_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PreConstruct(bool IsDesignTime); // Function WBP_RankLevel.WBP_RankLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_RankLevel.WBP_RankLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetStarVFX(); // Function WBP_RankLevel.WBP_RankLevel_C.SetStarVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_RankLevel(int32_t EntryPoint); // Function WBP_RankLevel.WBP_RankLevel_C.ExecuteUbergraph_WBP_RankLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

