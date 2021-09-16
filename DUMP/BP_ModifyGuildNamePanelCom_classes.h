// BlueprintGeneratedClass BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C
// Size: 0x168 (Inherited: 0x151)
struct UBP_ModifyGuildNamePanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_InfomationPanelCom_C* Information; // 0x160(0x08)

	void SetInfo(); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnOk(); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.OnOk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.OK // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ModifyGuildNamePanelCom(int32_t EntryPoint); // Function BP_ModifyGuildNamePanelCom.BP_ModifyGuildNamePanelCom_C.ExecuteUbergraph_BP_ModifyGuildNamePanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

