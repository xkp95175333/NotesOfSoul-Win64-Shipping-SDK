// BlueprintGeneratedClass BP_GuildInfoCom.BP_GuildInfoCom_C
// Size: 0x1e0 (Inherited: 0x151)
struct UBP_GuildInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t ID; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct AUIBaseActor* UITextInput; // 0x168(0x08)
	struct FGuildSimpleInfo GuildSimpInfo; // 0x170(0x68)
	struct UUIItem* GuildRoot; // 0x1d8(0x08)

	void InitInfo(); // Function BP_GuildInfoCom.BP_GuildInfoCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateApply(); // Function BP_GuildInfoCom.BP_GuildInfoCom_C.UpdateApply // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Click(); // Function BP_GuildInfoCom.BP_GuildInfoCom_C.Click // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_GuildInfoCom.BP_GuildInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnDestroyBP(); // Function BP_GuildInfoCom.BP_GuildInfoCom_C.OnDestroyBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildInfoCom(int32_t EntryPoint); // Function BP_GuildInfoCom.BP_GuildInfoCom_C.ExecuteUbergraph_BP_GuildInfoCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

