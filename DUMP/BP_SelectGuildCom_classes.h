// BlueprintGeneratedClass BP_SelectGuildCom.BP_SelectGuildCom_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_SelectGuildCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool IsOn; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct ULGUIPrefab* Prefab; // 0x168(0x08)
	struct UUIItem* AttchCom; // 0x170(0x08)
	struct UBP_GuildPanelCom_C* GuidPanel; // 0x178(0x08)

	void Update(); // Function BP_SelectGuildCom.BP_SelectGuildCom_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateData(bool IsOn); // Function BP_SelectGuildCom.BP_SelectGuildCom_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SelectGuildCom.BP_SelectGuildCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Enter(struct ULGUIPointerEventData* pointerEventData); // Function BP_SelectGuildCom.BP_SelectGuildCom_C.Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(struct ULGUIPointerEventData* pointerEventData); // Function BP_SelectGuildCom.BP_SelectGuildCom_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SelectGuildCom(int32_t EntryPoint); // Function BP_SelectGuildCom.BP_SelectGuildCom_C.ExecuteUbergraph_BP_SelectGuildCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

