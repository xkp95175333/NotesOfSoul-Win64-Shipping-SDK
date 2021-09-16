// BlueprintGeneratedClass BP_Plant.BP_Plant_C
// Size: 0x168 (Inherited: 0x151)
struct UBP_Plant_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct ABP_PlantGrid_C* Grid; // 0x160(0x08)

	void ChooseUIToShow(bool GridAlreadyHasPlant); // Function BP_Plant.BP_Plant_C.ChooseUIToShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Plant.BP_Plant_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_Plant.BP_Plant_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Plant(int32_t EntryPoint); // Function BP_Plant.BP_Plant_C.ExecuteUbergraph_BP_Plant // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

