// BlueprintGeneratedClass BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C
// Size: 0x178 (Inherited: 0x151)
struct UBP_FilterTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_GuildListPanelCom_C* BP_ParentCom; // 0x160(0x08)
	int32_t MaxLevel; // 0x168(0x04)
	int32_t MinLevel; // 0x16c(0x04)
	int32_t MaxNumber; // 0x170(0x04)
	int32_t MinNumber; // 0x174(0x04)

	void MaxNumberInput(bool InBool); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.MaxNumberInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MinNumberInput(bool InBool); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.MinNumberInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MinLevelInput(bool InBool); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.MinLevelInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MaxLevelInput(bool InBool); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.MaxLevelInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_FilterTwoPanelCom(int32_t EntryPoint); // Function BP_FilterTwoPanelCom.BP_FilterTwoPanelCom_C.ExecuteUbergraph_BP_FilterTwoPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

