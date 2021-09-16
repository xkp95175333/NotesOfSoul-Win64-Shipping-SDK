// BlueprintGeneratedClass BP_HelpPanelCom.BP_HelpPanelCom_C
// Size: 0x190 (Inherited: 0x151)
struct UBP_HelpPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FText HelpText; // 0x160(0x18)
	struct FText Title; // 0x178(0x18)

	void OK(); // Function BP_HelpPanelCom.BP_HelpPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_HelpPanelCom.BP_HelpPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_HelpPanelCom(int32_t EntryPoint); // Function BP_HelpPanelCom.BP_HelpPanelCom_C.ExecuteUbergraph_BP_HelpPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

