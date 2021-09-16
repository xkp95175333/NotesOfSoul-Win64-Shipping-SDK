// BlueprintGeneratedClass BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C
// Size: 0x168 (Inherited: 0x151)
struct UBP_GuildInvitationTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_GuildRootPanelCom_C* GuildRoot; // 0x160(0x08)

	void OnCancel(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.OnCancel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnApply(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.OnApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancel(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.Cancel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Apply(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.Apply // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildInvitationTwoPanelCom(int32_t EntryPoint); // Function BP_GuildInvitationTwoPanelCom.BP_GuildInvitationTwoPanelCom_C.ExecuteUbergraph_BP_GuildInvitationTwoPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

