// BlueprintGeneratedClass BP_BuyItemCom.BP_BuyItemCom_C
// Size: 0x2a0 (Inherited: 0x151)
struct UBP_BuyItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIButtonComponent* CloseButton; // 0x160(0x08)
	struct UUITexture* BagItem; // 0x168(0x08)
	struct UUISprite* BoxBG; // 0x170(0x08)
	struct UUIText* NameText; // 0x178(0x08)
	struct UUIText* TypeText; // 0x180(0x08)
	struct FNOS_Store StoreData; // 0x188(0xb0)
	int32_t ItemCount; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UDataTable* HumanSuitData; // 0x240(0x08)
	struct UBP_ShoppingCartCom_C* BP_ParentCom; // 0x248(0x08)
	struct UDataTable* GhostSuitData; // 0x250(0x08)
	struct UDataTable* AllAccessoriesData; // 0x258(0x08)
	struct UUIToggleComponent* SlectIcon; // 0x260(0x08)
	int32_t MonetaryType; // 0x268(0x04)
	int32_t MonetaryParameters; // 0x26c(0x04)
	struct UUIItem* Right; // 0x270(0x08)
	struct UBP_UnitPriceTypeCom_C* CurrentItemCom; // 0x278(0x08)
	struct UUIToggleGroupComponent* RightToggleGroup; // 0x280(0x08)
	struct UUIText* NumberText; // 0x288(0x08)
	struct UUITextInputComponent* TextInput; // 0x290(0x08)
	struct UDataTable* GiftBoxData; // 0x298(0x08)

	void InitGiftBoxData(); // Function BP_BuyItemCom.BP_BuyItemCom_C.InitGiftBoxData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccessoriesData(); // Function BP_BuyItemCom.BP_BuyItemCom_C.InitAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostSuitData(); // Function BP_BuyItemCom.BP_BuyItemCom_C.InitGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanSuitData(); // Function BP_BuyItemCom.BP_BuyItemCom_C.InitHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetSuitQualityBG(enum class EClothQualityType Quality, struct ULGUISpriteData* Sprint); // Function BP_BuyItemCom.BP_BuyItemCom_C.GetSuitQualityBG // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(); // Function BP_BuyItemCom.BP_BuyItemCom_C.UpdateData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_BuyItemCom.BP_BuyItemCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBuyItem(); // Function BP_BuyItemCom.BP_BuyItemCom_C.InitBuyItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_BuyItemCom.BP_BuyItemCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BuyItemCom.BP_BuyItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickDelete(); // Function BP_BuyItemCom.BP_BuyItemCom_C.ClickDelete // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickSelect(bool IsOn); // Function BP_BuyItemCom.BP_BuyItemCom_C.ClickSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClick(bool IsOn); // Function BP_BuyItemCom.BP_BuyItemCom_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SelectMonetaryTtpe(struct UBP_UnitPriceTypeCom_C* Com); // Function BP_BuyItemCom.BP_BuyItemCom_C.SelectMonetaryTtpe // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInputActivate(bool NewParam); // Function BP_BuyItemCom.BP_BuyItemCom_C.OnInputActivate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSubmit(struct FString NewParam); // Function BP_BuyItemCom.BP_BuyItemCom_C.OnSubmit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddItemCount(); // Function BP_BuyItemCom.BP_BuyItemCom_C.AddItemCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SubItemCount(); // Function BP_BuyItemCom.BP_BuyItemCom_C.SubItemCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BuyItemCom(int32_t EntryPoint); // Function BP_BuyItemCom.BP_BuyItemCom_C.ExecuteUbergraph_BP_BuyItemCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

