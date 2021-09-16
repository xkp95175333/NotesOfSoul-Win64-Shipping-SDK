// BlueprintGeneratedClass BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C
// Size: 0x1b0 (Inherited: 0x151)
struct UBP_ItemInfoAndTrickeryCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUIItem* TrickeryPanel; // 0x160(0x08)
	struct UUIItem* ItemInfoPanel; // 0x168(0x08)
	struct UUISprite* ItemInfoTypeImage; // 0x170(0x08)
	struct UUIText* ItemInfoTypeText; // 0x178(0x08)
	struct UUIText* ItemInfoEffect; // 0x180(0x08)
	struct UUIText* ItemInfoName; // 0x188(0x08)
	struct UUIText* ItemInfoUse; // 0x190(0x08)
	struct UUIText* TrickeryEffect; // 0x198(0x08)
	struct UUIText* TrickeryName; // 0x1a0(0x08)
	struct UUIText* TrickeryType; // 0x1a8(0x08)

	void Set HumanTalent Parameter(struct FText Title, struct FText User); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.Set HumanTalent Parameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetText(enum class EGhostTalentType Inv, struct FString St); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.GetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set GhostTalent Parameter(struct FText Title, enum class EGhostTalentType Inv, struct FText User); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.Set GhostTalent Parameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetTexture2D(enum class EInventoryType In, struct UTexture2D* Texture, struct FText Text); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.GetTexture2D // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetConsumableParameter(struct FText Title, struct FText Mid, struct FText User, enum class EInventoryType Inv); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.SetConsumableParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemInfoAndTrickery(); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.InitItemInfoAndTrickery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetConsumable(int32_t ID); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.SetConsumable // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostTalent(int32_t ID); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.SetGhostTalent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanTalent(int32_t ID); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.SetHumanTalent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ItemInfoAndTrickeryCom(int32_t EntryPoint); // Function BP_ItemInfoAndTrickeryCom.BP_ItemInfoAndTrickeryCom_C.ExecuteUbergraph_BP_ItemInfoAndTrickeryCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

