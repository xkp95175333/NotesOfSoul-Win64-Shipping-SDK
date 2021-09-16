// BlueprintGeneratedClass BP_RankButtonCom.BP_RankButtonCom_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_RankButtonCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FRankNodeNew Rank; // 0x160(0x20)
	struct UBP_SetConditionsTwoPanelCom_C* BP_ParentCom; // 0x180(0x08)

	void InitInfo(); // Function BP_RankButtonCom.BP_RankButtonCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RankButtonCom.BP_RankButtonCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(); // Function BP_RankButtonCom.BP_RankButtonCom_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_RankButtonCom.BP_RankButtonCom_C.InitButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RankButtonCom(int32_t EntryPoint); // Function BP_RankButtonCom.BP_RankButtonCom_C.ExecuteUbergraph_BP_RankButtonCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

