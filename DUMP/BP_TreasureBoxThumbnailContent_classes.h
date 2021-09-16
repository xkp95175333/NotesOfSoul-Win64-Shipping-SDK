// BlueprintGeneratedClass BP_TreasureBoxThumbnailContent.BP_TreasureBoxThumbnailContent_C
// Size: 0x108 (Inherited: 0xc0)
struct UBP_TreasureBoxThumbnailContent_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AUIBaseActor* Item; // 0xc8(0x08)
	struct TArray<struct AUIBaseActor*> Cache; // 0xd0(0x10)
	struct TArray<int32_t> Data; // 0xe0(0x10)
	struct AUIBaseActor* ThumbnailPanel; // 0xf0(0x08)
	struct TArray<struct FItemData> Got PreviewData; // 0xf8(0x10)

	void StartBP(); // Function BP_TreasureBoxThumbnailContent.BP_TreasureBoxThumbnailContent_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(struct TArray<int32_t> Data); // Function BP_TreasureBoxThumbnailContent.BP_TreasureBoxThumbnailContent_C.InitData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HideAllCachedItem(); // Function BP_TreasureBoxThumbnailContent.BP_TreasureBoxThumbnailContent_C.HideAllCachedItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitWithGotPreViewData(struct TArray<int32_t> ArrayA, struct TArray<struct FItemData> GotPreview); // Function BP_TreasureBoxThumbnailContent.BP_TreasureBoxThumbnailContent_C.InitWithGotPreViewData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TreasureBoxThumbnailContent(int32_t EntryPoint); // Function BP_TreasureBoxThumbnailContent.BP_TreasureBoxThumbnailContent_C.ExecuteUbergraph_BP_TreasureBoxThumbnailContent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

