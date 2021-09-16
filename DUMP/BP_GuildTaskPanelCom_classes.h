// BlueprintGeneratedClass BP_GuildTaskPanelCom.BP_GuildTaskPanelCom_C
// Size: 0x160 (Inherited: 0x151)
struct UBP_GuildTaskPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)

	void GetTime(struct FText Time); // Function BP_GuildTaskPanelCom.BP_GuildTaskPanelCom_C.GetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_GuildTaskPanelCom.BP_GuildTaskPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_GuildTaskPanelCom.BP_GuildTaskPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildTaskPanelCom(int32_t EntryPoint); // Function BP_GuildTaskPanelCom.BP_GuildTaskPanelCom_C.ExecuteUbergraph_BP_GuildTaskPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

