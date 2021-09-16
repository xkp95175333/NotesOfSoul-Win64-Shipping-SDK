// BlueprintGeneratedClass BP_TipWindow.BP_TipWindow_C
// Size: 0x160 (Inherited: 0x151)
struct UBP_TipWindow_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)

	void SetDisplayText(struct FText newText); // Function BP_TipWindow.BP_TipWindow_C.SetDisplayText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TipWindow.BP_TipWindow_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TipWindow(int32_t EntryPoint); // Function BP_TipWindow.BP_TipWindow_C.ExecuteUbergraph_BP_TipWindow // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

