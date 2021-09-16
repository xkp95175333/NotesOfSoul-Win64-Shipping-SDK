// BlueprintGeneratedClass BP_TagCom.BP_TagCom_C
// Size: 0xe58 (Inherited: 0x151)
struct UBP_TagCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* ItemIcon; // 0x160(0x08)
	struct UBP_FittingRoomCom_C* BP_ParentCom; // 0x168(0x08)
	struct UUIToggleComponent* ItemToggle; // 0x170(0x08)
	struct FNOS_HumanSuit HumanSuitData; // 0x178(0x350)
	struct FNOS_Accessories AccessoriesData; // 0x4c8(0x500)
	enum class ECommodityType CommodityType; // 0x9c8(0x01)
	bool IsOn; // 0x9c9(0x01)
	char pad_9CA[0x6]; // 0x9ca(0x06)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x9d0(0x08)
	struct FNOS_GhostSuit GhostSuitData; // 0x9d8(0x350)
	struct TMap<enum class ECommodityType, struct UTexture2D*> NormalTextureMap; // 0xd28(0x50)
	struct TMap<enum class ECommodityType, struct UTexture2D*> BanTextureMap; // 0xd78(0x50)
	struct TMap<enum class ECommodityType, struct UTexture2D*> HighTextureMap; // 0xdc8(0x50)
	int32_t ItemType; // 0xe18(0x04)
	char pad_E1C[0x4]; // 0xe1c(0x04)
	struct UTexture2D* BGTexture; // 0xe20(0x08)
	struct UUISprite* ItemBG; // 0xe28(0x08)
	struct UTexture2D* ItemTexture; // 0xe30(0x08)
	struct FLinearColor NormalColor; // 0xe38(0x10)
	struct FLinearColor HightColor; // 0xe48(0x10)

	void SetQuailtyTexture(enum class EClothQualityType Quailty); // Function BP_TagCom.BP_TagCom_C.SetQuailtyTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateCommodityInfo(); // Function BP_TagCom.BP_TagCom_C.UpdateCommodityInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTagToggle(); // Function BP_TagCom.BP_TagCom_C.UpdateTagToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TakeOffItem(); // Function BP_TagCom.BP_TagCom_C.TakeOffItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitCommodityInfo(); // Function BP_TagCom.BP_TagCom_C.InitCommodityInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitTag(); // Function BP_TagCom.BP_TagCom_C.InitTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_96B08E124791B636E3C0BABEF9034229(struct UObject* Loaded); // Function BP_TagCom.BP_TagCom_C.OnLoaded_96B08E124791B636E3C0BABEF9034229 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_5176BC044AB66D11C5AAFCADC4DEC86A(struct UObject* Loaded); // Function BP_TagCom.BP_TagCom_C.OnLoaded_5176BC044AB66D11C5AAFCADC4DEC86A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_B12A654544851057EC5585A141450029(struct UObject* Loaded); // Function BP_TagCom.BP_TagCom_C.OnLoaded_B12A654544851057EC5585A141450029 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TagCom.BP_TagCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TagCom.BP_TagCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickItem(bool IsOn); // Function BP_TagCom.BP_TagCom_C.OnClickItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnUpItem(bool IsOn); // Function BP_TagCom.BP_TagCom_C.OnUpItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEquipItem(); // Function BP_TagCom.BP_TagCom_C.OnEquipItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNormalItem(); // Function BP_TagCom.BP_TagCom_C.OnNormalItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBanItem(); // Function BP_TagCom.BP_TagCom_C.OnBanItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnResetItem(); // Function BP_TagCom.BP_TagCom_C.OnResetItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TagCom(int32_t EntryPoint); // Function BP_TagCom.BP_TagCom_C.ExecuteUbergraph_BP_TagCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

