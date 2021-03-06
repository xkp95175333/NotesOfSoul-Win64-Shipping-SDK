// WidgetBlueprintGeneratedClass WBP_InsideGameInfo.WBP_InsideGameInfo_C
// Size: 0x3c8 (Inherited: 0x260)
struct UWBP_InsideGameInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_HumanBodyBase; // 0x268(0x08)
	struct UCanvasPanel* CanvasPanel_BodyAcupoint; // 0x270(0x08)
	struct UCanvasPanel* CanvasPanel_BodyAcupoint_2; // 0x278(0x08)
	struct UCanvasPanel* CanvasPanel_Forbidden; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_GhostSkill; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_HumanSkill; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_SevenSoul; // 0x298(0x08)
	struct UBorder* Equipment; // 0x2a0(0x08)
	struct UWBP_GameMap_C* GhostMap; // 0x2a8(0x08)
	struct UHorizontalBox*  orizontalBox_  ; // 0x2b0(0x08)
	struct UHorizontalBox*  orizontalBox_  ; // 0x2b8(0x08)
	struct UHorizontalBox*  orizontalBox_  ; // 0x2c0(0x08)
	struct UWBP_GameMap_C* HumanMap; // 0x2c8(0x08)
	struct UImage* Image_2; // 0x2d0(0x08)
	struct UImage* Image_3; // 0x2d8(0x08)
	struct UImage* Image_5; // 0x2e0(0x08)
	struct UImage* Image_6; // 0x2e8(0x08)
	struct UImage* Image_7; // 0x2f0(0x08)
	struct UImage* Image_8; // 0x2f8(0x08)
	struct UImage* Image_9; // 0x300(0x08)
	struct UImage* Image_10; // 0x308(0x08)
	struct UImage* Image_11; // 0x310(0x08)
	struct UImage* Image_12; // 0x318(0x08)
	struct UImage* Image_13; // 0x320(0x08)
	struct UImage* Image_14; // 0x328(0x08)
	struct UImage* Image_15; // 0x330(0x08)
	struct UImage* Image_16; // 0x338(0x08)
	struct UImage* Image_17; // 0x340(0x08)
	struct UImage* Image_118; // 0x348(0x08)
	struct UImage* Image_226; // 0x350(0x08)
	struct UImage* Image_405; // 0x358(0x08)
	struct UVerticalBox* VerticalBox_Buff; // 0x360(0x08)
	struct UVerticalBox* VerticalBox_Buff_2; // 0x368(0x08)
	struct UVerticalBox* VerticalBox_GhostTablent; // 0x370(0x08)
	struct UVerticalBox* VerticalBox_HumanTalent; // 0x378(0x08)
	struct UVerticalBox* VerticalBox_ItemsInfo; // 0x380(0x08)
	struct UWBP_AllAuxiliarySkill_C* WBP_GhostAuxiliarySkill; // 0x388(0x08)
	struct UWBP_AllAuxiliarySkill_C* WBP_HumanAuxiliarySkill; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_HumanAndGhost; // 0x398(0x08)
	int32_t SevenSoul; // 0x3a0(0x04)
	int32_t CharacterID; // 0x3a4(0x04)
	struct UWBP_MainUI_C* MainUI; // 0x3a8(0x08)
	struct APawn* ControlledPawn; // 0x3b0(0x08)
	struct ANOS_PlayerHuman* NOS_PlayerHuman; // 0x3b8(0x08)
	struct ANOS_PlayerGhost* NOS_PlayerGhost; // 0x3c0(0x08)

	void ID(); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.ID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Is Show Visual Effect(bool Is Contains, int32_t IndexesValue); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.Set Is Show Visual Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ItemsInfo(struct TArray<struct UKxInventoryObject*> ItemS); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.ItemsInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EquipmentInFo(struct UKxInventoryObject* InventoryObject); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.EquipmentInFo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GhostSkillsIntroduce(struct ANOS_PlayerGhost* NOS_PlayerGhost); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.GhostSkillsIntroduce // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HumanSkillsIntroduce(struct ANOS_PlayerHuman* NOS_PlayerHuman); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.HumanSkillsIntroduce // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveBuff(int32_t ID); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.RemoveBuff // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddBuff(struct FText Name, struct FText des, struct TSoftObjectPtr<struct UTexture2D> Texture, int32_t ID, float CD); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.AddBuff // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Soul(bool Alter , int32_t AlterValue); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.Soul // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Remove(int32_t ID); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.Remove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Add(struct FText Name, struct FText des, struct TSoftObjectPtr<struct UTexture2D> Texture, int32_t ID); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.Add // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_InsideGameInfo(int32_t EntryPoint); // Function WBP_InsideGameInfo.WBP_InsideGameInfo_C.ExecuteUbergraph_WBP_InsideGameInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

