// BlueprintGeneratedClass BP_LevelButtonCom.BP_LevelButtonCom_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_LevelButtonCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t Level; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UBP_SetConditionsTwoPanelCom_C* BP_ParentCom; // 0x168(0x08)

	void StartBP(); // Function BP_LevelButtonCom.BP_LevelButtonCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(); // Function BP_LevelButtonCom.BP_LevelButtonCom_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_LevelButtonCom.BP_LevelButtonCom_C.InitButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LevelButtonCom(int32_t EntryPoint); // Function BP_LevelButtonCom.BP_LevelButtonCom_C.ExecuteUbergraph_BP_LevelButtonCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

