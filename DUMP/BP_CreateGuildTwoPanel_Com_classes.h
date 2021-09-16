// BlueprintGeneratedClass BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C
// Size: 0x178 (Inherited: 0x151)
struct UBP_CreateGuildTwoPanel_Com_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool NewVar_1; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UBP_GuildRootPanelCom_C* RootPanel; // 0x168(0x08)
	struct UUIItem* Root; // 0x170(0x08)

	void Create(); // Function BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C.Create // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OK(); // Function BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(struct ULGUIPointerEventData* pointerEventData); // Function BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_CreateGuildTwoPanel_Com(int32_t EntryPoint); // Function BP_CreateGuildTwoPanel_Com.BP_CreateGuildTwoPanel_Com_C.ExecuteUbergraph_BP_CreateGuildTwoPanel_Com // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

