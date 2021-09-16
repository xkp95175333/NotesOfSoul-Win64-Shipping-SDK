// BlueprintGeneratedClass BP_OneGroup.BP_OneGroup_C
// Size: 0x188 (Inherited: 0x151)
struct UBP_OneGroup_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t GroupID; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UBP_RightMouseButtonMenu_C* BP_RightMouseButtonMenu; // 0x168(0x08)
	struct FString GroupName; // 0x170(0x10)
	struct UUIText* GroupText; // 0x180(0x08)

	void OnGroupClick(); // Function BP_OneGroup.BP_OneGroup_C.OnGroupClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_OneGroup.BP_OneGroup_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_OneGroup(int32_t EntryPoint); // Function BP_OneGroup.BP_OneGroup_C.ExecuteUbergraph_BP_OneGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

