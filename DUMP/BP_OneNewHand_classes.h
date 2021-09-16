// BlueprintGeneratedClass BP_OneNewHand.BP_OneNewHand_C
// Size: 0x1d5 (Inherited: 0x151)
struct UBP_OneNewHand_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<int64_t>  RewardList; // 0x160(0x10)
	int32_t Mission ID; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FPBNewHandMissionData MissionInfo; // 0x178(0x20)
	int32_t ItemNum; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UTexture* New Texture; // 0x1a0(0x08)
	struct UBP_NewHand_C* New Hand Mission; // 0x1a8(0x08)
	struct TArray<int32_t> ReciveItems; // 0x1b0(0x10)
	struct TArray<struct FItemData> ItemInfo; // 0x1c0(0x10)
	int32_t Mission Index; // 0x1d0(0x04)
	bool CanRecive; // 0x1d4(0x01)

	void IsCanGetSomething(bool bCanGet); // Function BP_OneNewHand.BP_OneNewHand_C.IsCanGetSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitParent(struct UBP_NewHand_C* NewHandMission); // Function BP_OneNewHand.BP_OneNewHand_C.InitParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleButton(); // Function BP_OneNewHand.BP_OneNewHand_C.HandleButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_OneNewHand.BP_OneNewHand_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMission(struct FPBNewHandMissionData MissionInfo); // Function BP_OneNewHand.BP_OneNewHand_C.InitMission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveReward(); // Function BP_OneNewHand.BP_OneNewHand_C.ReciveReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetMission(int32_t MissionID); // Function BP_OneNewHand.BP_OneNewHand_C.SetMission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneNewHand.BP_OneNewHand_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReciveItem(struct FPBNoviceMissionData NoviceMissionData); // Function BP_OneNewHand.BP_OneNewHand_C.ReciveItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneNewHand(int32_t EntryPoint); // Function BP_OneNewHand.BP_OneNewHand_C.ExecuteUbergraph_BP_OneNewHand // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

