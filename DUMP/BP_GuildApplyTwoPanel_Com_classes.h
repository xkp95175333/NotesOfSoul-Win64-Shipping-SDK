// BlueprintGeneratedClass BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C
// Size: 0x1d8 (Inherited: 0x151)
struct UBP_GuildApplyTwoPanel_Com_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildSimpleInfo GuildSimpInfo; // 0x160(0x68)
	bool IsApply; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UBP_GuildInfoCom_C* GuildUI; // 0x1d0(0x08)

	void InitButton(); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ApplyScess(); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.ApplyScess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Apply(); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.Apply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancel(); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.Cancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildApplyTwoPanel_Com(int32_t EntryPoint); // Function BP_GuildApplyTwoPanel_Com.BP_GuildApplyTwoPanel_Com_C.ExecuteUbergraph_BP_GuildApplyTwoPanel_Com // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

