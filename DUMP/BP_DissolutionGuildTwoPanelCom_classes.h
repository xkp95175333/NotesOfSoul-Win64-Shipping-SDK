// BlueprintGeneratedClass BP_DissolutionGuildTwoPanelCom.BP_DissolutionGuildTwoPanelCom_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_DissolutionGuildTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_GuildRootPanelCom_C* GuidRoot; // 0x160(0x08)
	struct UBP_InfomationPanelCom_C* InfomationPanel; // 0x168(0x08)

	void Exit(); // Function BP_DissolutionGuildTwoPanelCom.BP_DissolutionGuildTwoPanelCom_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_DissolutionGuildTwoPanelCom.BP_DissolutionGuildTwoPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DissolutionGuildTwoPanelCom.BP_DissolutionGuildTwoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DissolutionGuildTwoPanelCom(int32_t EntryPoint); // Function BP_DissolutionGuildTwoPanelCom.BP_DissolutionGuildTwoPanelCom_C.ExecuteUbergraph_BP_DissolutionGuildTwoPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

