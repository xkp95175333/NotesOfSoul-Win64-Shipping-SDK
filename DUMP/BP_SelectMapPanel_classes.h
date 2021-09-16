// BlueprintGeneratedClass BP_SelectMapPanel.BP_SelectMapPanel_C
// Size: 0x180 (Inherited: 0x151)
struct UBP_SelectMapPanel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct ULGUIPrefab* MapPrefab; // 0x160(0x08)
	struct TArray<struct UBP_MapButton_C*> MapArray; // 0x168(0x10)
	struct AUIBaseActor* GridLayout; // 0x178(0x08)

	void CloseThis(); // Function BP_SelectMapPanel.BP_SelectMapPanel_C.CloseThis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_SelectMapPanel.BP_SelectMapPanel_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SelectMapPanel(int32_t EntryPoint); // Function BP_SelectMapPanel.BP_SelectMapPanel_C.ExecuteUbergraph_BP_SelectMapPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

