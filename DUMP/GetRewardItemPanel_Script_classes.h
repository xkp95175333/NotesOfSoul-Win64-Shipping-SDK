// BlueprintGeneratedClass GetRewardItemPanel_Script.GetRewardItemPanel_Script_C
// Size: 0xe0 (Inherited: 0xc0)
struct UGetRewardItemPanel_Script_C : ULGUIBehaviour {
	struct AUIBaseActor* ItemSprite; // 0xc0(0x08)
	struct AUIBaseActor* ItemParent; // 0xc8(0x08)
	struct TArray<struct AUIBaseActor*> ItemSpriteList; // 0xd0(0x10)

	void ClosePanle(); // Function GetRewardItemPanel_Script.GetRewardItemPanel_Script_C.ClosePanle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryGetItemInfoFromDataTables(int32_t ID, int32_t Count, struct UTexture2D* Img, struct FString str, enum class EClothQualityType Quality); // Function GetRewardItemPanel_Script.GetRewardItemPanel_Script_C.TryGetItemInfoFromDataTables // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Create Item(struct UTexture2D* Img, struct FString str, enum class EClothQualityType Quality); // Function GetRewardItemPanel_Script.GetRewardItemPanel_Script_C.Create Item // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetData(struct TArray<struct FItemData> ItemData); // Function GetRewardItemPanel_Script.GetRewardItemPanel_Script_C.SetData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

