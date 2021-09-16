// BlueprintGeneratedClass BP_GuildItemInfoCom.BP_GuildItemInfoCom_C
// Size: 0x260 (Inherited: 0x151)
struct UBP_GuildItemInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x160(0x08)
	struct UUIText* UpText; // 0x168(0x08)
	struct UUIText* MidText; // 0x170(0x08)
	struct UUIText* TipText; // 0x178(0x08)
	struct UUISprite* MidBG; // 0x180(0x08)
	struct UUIItem* Box; // 0x188(0x08)
	bool bVisible; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float MaxHight; // 0x194(0x04)
	float MaxWidth; // 0x198(0x04)
	float PivotX; // 0x19c(0x04)
	float PivotY; // 0x1a0(0x04)
	float anchorOffsetX; // 0x1a4(0x04)
	float anchorOffsetY; // 0x1a8(0x04)
	struct FVector2D CanvasScale; // 0x1ac(0x08)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct UUIItem* Blur; // 0x1b8(0x08)
	struct UUISprite* BG; // 0x1c0(0x08)
	struct UUIItem* Down; // 0x1c8(0x08)
	struct UTexture2D* TextureRef; // 0x1d0(0x08)
	struct FLinearColor TextColor; // 0x1d8(0x10)
	struct UUIItem* DownTilt; // 0x1e8(0x08)
	struct UUIItem* DwonBound; // 0x1f0(0x08)
	struct UUIText* DownBoundValue; // 0x1f8(0x08)
	struct UUIText* DownGiveIntimacyValue; // 0x200(0x08)
	struct UUIItem* DwonGiveIntimacy; // 0x208(0x08)
	struct UUIItem* DwonIntimacyAdd; // 0x210(0x08)
	struct UUIText* DownIntimacyAddValue; // 0x218(0x08)
	struct UUIItem* DwonTime; // 0x220(0x08)
	struct UUIText* DownTimeValue; // 0x228(0x08)
	struct UUIItem* DwonType; // 0x230(0x08)
	struct UUIText* DownTypeValue; // 0x238(0x08)
	struct UUIItem* DownLevelAdd; // 0x240(0x08)
	struct UUIText* DownLevelAddValue; // 0x248(0x08)
	struct UUIItem* DwonMoneyAdd; // 0x250(0x08)
	struct UUIText* DownMoneyAddValue; // 0x258(0x08)

	void GetTypeText(enum class EAccessoriesType Type, struct FText Text); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.GetTypeText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetTimeParameter(bool Or, int32_t Time); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.SetTimeParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetExperienceTime(int32_t Seconds, struct FText NewParam); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.GetExperienceTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfoQuality(enum class EClothQualityType Quality); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.SetInfoQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPivot(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.SetPivot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetParameter(struct FText UpText, struct FText MidText, struct FText TilpText, bool OrDown, enum class EAccessoriesType Type, int32_t Effect, int32_t GiveIntimacy, float IntimacyAdd, float MoneyAdd, float LevelAdd); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.SetParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Up Data Data(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.Up Data Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitItemInfo(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.InitItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OpenItemInfo(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.OpenItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseItemInfo(); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.CloseItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildItemInfoCom(int32_t EntryPoint); // Function BP_GuildItemInfoCom.BP_GuildItemInfoCom_C.ExecuteUbergraph_BP_GuildItemInfoCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

