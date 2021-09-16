// BlueprintGeneratedClass BP_BasePanel.BP_BasePanel_C
// Size: 0x151 (Inherited: 0x140)
struct UBP_BasePanel_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct ULGUIA_Base_C* OpenAndHideAnimCom; // 0x148(0x08)
	bool IsOnOpen; // 0x150(0x01)

	void AnimEnd(); // Function BP_BasePanel.BP_BasePanel_C.AnimEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_BasePanel.BP_BasePanel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_BasePanel.BP_BasePanel_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BasePanel.BP_BasePanel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_BasePanel.BP_BasePanel_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Hide(); // Function BP_BasePanel.BP_BasePanel_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_BasePanel.BP_BasePanel_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BasePanel(int32_t EntryPoint); // Function BP_BasePanel.BP_BasePanel_C.ExecuteUbergraph_BP_BasePanel // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

