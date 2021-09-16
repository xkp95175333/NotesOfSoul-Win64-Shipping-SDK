// BlueprintGeneratedClass BP_BagCom.BP_BagCom_C
// Size: 0x238 (Inherited: 0x151)
struct UBP_BagCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UUISprite* ItemIcon; // 0x160(0x08)
	struct UBP_FittingRoomCom_C* BP_ParentCom; // 0x168(0x08)
	struct UUIToggleComponent* ItemToggle; // 0x170(0x08)
	enum class ECommodityType CommodityType; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UUISprite* ItemBG; // 0x180(0x08)
	bool IsOn; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x190(0x08)
	struct TMap<enum class ECommodityType, struct UTexture2D*> NormalTextureMap; // 0x198(0x50)
	struct TMap<enum class ECommodityType, struct UTexture2D*> HighLightTextureMap; // 0x1e8(0x50)

	void UpdateData(); // Function BP_BagCom.BP_BagCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitTag(); // Function BP_BagCom.BP_BagCom_C.InitTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_BagCom.BP_BagCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BagCom.BP_BagCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickItem(bool IsOn); // Function BP_BagCom.BP_BagCom_C.OnClickItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BagCom(int32_t EntryPoint); // Function BP_BagCom.BP_BagCom_C.ExecuteUbergraph_BP_BagCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

