// BlueprintGeneratedClass BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C
// Size: 0x184 (Inherited: 0xc0)
struct UBP_TreasureBoxThumbnailItem_C : ULGUIBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TMap<enum class EClothQualityType, struct UTexture2D*> ItemQua; // 0xc8(0x50)
	struct AUITextureActor* Img; // 0x118(0x08)
	struct AUITextureActor* Qua; // 0x120(0x08)
	struct UBP_ItemInfoCom_C* ShowItemPanel; // 0x128(0x08)
	struct AUIBaseActor* ItemPreview; // 0x130(0x08)
	struct FString Name; // 0x138(0x10)
	struct FText des; // 0x148(0x18)
	enum class EClothQualityType Quality; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct AUIBaseActor* bGot; // 0x168(0x08)
	struct TArray<struct FItemData> Got Pre View Data; // 0x170(0x10)
	int32_t ID; // 0x180(0x04)

	void OnLeave(); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.OnLeave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnter(); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.OnEnter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(int32_t ID); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitDataWithGotPreViewData(int32_t ID, struct TArray<struct FItemData> GotPreViewData); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.InitDataWithGotPreViewData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckHasThisItem(); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.CheckHasThisItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnIncTreasureBoxDataInfo_Event_1(struct TArray<int32_t> IDList, struct TArray<struct FIncTreasureBoxData> DataInfo); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.OnIncTreasureBoxDataInfo_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TreasureBoxThumbnailItem(int32_t EntryPoint); // Function BP_TreasureBoxThumbnailItem.BP_TreasureBoxThumbnailItem_C.ExecuteUbergraph_BP_TreasureBoxThumbnailItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

