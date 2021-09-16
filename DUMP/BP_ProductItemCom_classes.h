// BlueprintGeneratedClass BP_ProductItemCom.BP_ProductItemCom_C
// Size: 0x2b0 (Inherited: 0x151)
struct UBP_ProductItemCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUITexture* Item; // 0x160(0x08)
	struct UUISprite* ItemBG; // 0x168(0x08)
	struct UUIText* ItemType; // 0x170(0x08)
	struct UUIText* RoleName; // 0x178(0x08)
	struct UUITexture* ItemMaterial; // 0x180(0x08)
	struct FNOS_Store StoreData; // 0x188(0xb0)
	struct UTexture2D* BGTexture; // 0x238(0x08)
	struct FLinearColor MaterialColor; // 0x240(0x10)
	struct FLinearColor TextColor; // 0x250(0x10)
	struct UDataTable* HumanSuitData; // 0x260(0x08)
	enum class EClothQualityType SuitQuality; // 0x268(0x01)
	bool bCanGive; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct UUIText* IntimacyText; // 0x270(0x08)
	int32_t intimacy; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UDataTable* AllAccessoriesData; // 0x280(0x08)
	struct UDataTable* GhostSuitData; // 0x288(0x08)
	struct UDataTable* ExperienceData; // 0x290(0x08)
	struct UDataTable* SpecialData; // 0x298(0x08)
	struct FMulticastInlineDelegate OnClickCancel; // 0x2a0(0x10)

	void InitSpecialData(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitSpecialData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitExperienceData(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitExperienceData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitGhostSuitData(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitGhostSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAccessoriesData(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitAccessoriesData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitHumanSuitData(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitHumanSuitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetQuailtyInfoBG(enum class EClothQualityType Selection); // Function BP_ProductItemCom.BP_ProductItemCom_C.SetQuailtyInfoBG // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitProductItem(); // Function BP_ProductItemCom.BP_ProductItemCom_C.InitProductItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ProductItemCom.BP_ProductItemCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ProductItemCom.BP_ProductItemCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelBtnClick(); // Function BP_ProductItemCom.BP_ProductItemCom_C.OnCancelBtnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ProductItemCom(int32_t EntryPoint); // Function BP_ProductItemCom.BP_ProductItemCom_C.ExecuteUbergraph_BP_ProductItemCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnClickCancel__DelegateSignature(struct FNOS_Store StoreData); // Function BP_ProductItemCom.BP_ProductItemCom_C.OnClickCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

