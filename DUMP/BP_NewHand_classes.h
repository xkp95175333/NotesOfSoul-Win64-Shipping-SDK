// BlueprintGeneratedClass BP_NewHand.BP_NewHand_C
// Size: 0x319 (Inherited: 0x151)
struct UBP_NewHand_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t Type1; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UUIItem* MissionList; // 0x168(0x08)
	int64_t RewardList; // 0x170(0x08)
	struct TArray<struct FPBNewHandMissionData> Mission List; // 0x178(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType1; // 0x188(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType2; // 0x198(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType3; // 0x1a8(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType4; // 0x1b8(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType5; // 0x1c8(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType6; // 0x1d8(0x10)
	struct TArray<struct FPBNewHandMissionData> MissionType7; // 0x1e8(0x10)
	struct FPBNewHandMissionData Mission1Show; // 0x1f8(0x20)
	struct FPBNewHandMissionData Mission2Show; // 0x218(0x20)
	struct FPBNewHandMissionData Mission3Show; // 0x238(0x20)
	struct FPBNewHandMissionData Mission4Show; // 0x258(0x20)
	struct FPBNewHandMissionData Mission5Show; // 0x278(0x20)
	struct FPBNewHandMissionData Mission6Show; // 0x298(0x20)
	struct FPBNewHandMissionData Mission7Show; // 0x2b8(0x20)
	struct TArray<struct FPBNewHandMissionData> MissionShow; // 0x2d8(0x10)
	struct TArray<struct ULGUIBasePanel*> AllMission; // 0x2e8(0x10)
	struct FPBNoviceMissionData Novice Mission Data; // 0x2f8(0x20)
	bool CanRecive; // 0x318(0x01)

	void IsCanGetSomething(bool bCanGet); // Function BP_NewHand.BP_NewHand_C.IsCanGetSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckRecive(struct FPBNoviceMissionData Novice Mission Data); // Function BP_NewHand.BP_NewHand_C.CheckRecive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Load Mission(); // Function BP_NewHand.BP_NewHand_C.Load Mission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowCurMission(); // Function BP_NewHand.BP_NewHand_C.ShowCurMission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Handle Mission Type(struct FPBNoviceMissionData NoviceMissionData); // Function BP_NewHand.BP_NewHand_C.Handle Mission Type // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_NewHand.BP_NewHand_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_NewHand.BP_NewHand_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_NewHand.BP_NewHand_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void NoviceMissionUpdate(struct FPBNoviceMissionData NoviceMissionData); // Function BP_NewHand.BP_NewHand_C.NoviceMissionUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_NewHand(int32_t EntryPoint); // Function BP_NewHand.BP_NewHand_C.ExecuteUbergraph_BP_NewHand // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

