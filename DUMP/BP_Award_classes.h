// BlueprintGeneratedClass BP_Award.BP_Award_C
// Size: 0x1a1 (Inherited: 0x140)
struct UBP_Award_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UBP_Data_C* Data; // 0x148(0x08)
	struct TMap<struct FString, int32_t> Award Config TMap; // 0x150(0x50)
	bool UIActive; // 0x1a0(0x01)

	void SetVFX(bool bEnabled); // Function BP_Award.BP_Award_C.SetVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAwardListUIActive(); // Function BP_Award.BP_Award_C.SetAwardListUIActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Award.BP_Award_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Award(int32_t EntryPoint); // Function BP_Award.BP_Award_C.ExecuteUbergraph_BP_Award // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

