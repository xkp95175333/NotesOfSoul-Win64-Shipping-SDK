// BlueprintGeneratedClass BP_InteractUI.BP_InteractUI_C
// Size: 0x1a9 (Inherited: 0x140)
struct UBP_InteractUI_C : ULGUIBasePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	bool IsLookPlayer; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FText Text; // 0x150(0x18)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x168(0x08)
	struct FText KeyText; // 0x170(0x18)
	struct FVector Location; // 0x188(0x0c)
	struct FVector Scale; // 0x194(0x0c)
	struct ANOS_PlayerBase* InteractPlayer; // 0x1a0(0x08)
	bool IsHuman; // 0x1a8(0x01)

	void Visible(); // Function BP_InteractUI.BP_InteractUI_C.Visible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetText(struct FText Text, struct FText KeyText); // Function BP_InteractUI.BP_InteractUI_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LookPlayer(); // Function BP_InteractUI.BP_InteractUI_C.LookPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_InteractUI.BP_InteractUI_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestroyBP(); // Function BP_InteractUI.BP_InteractUI_C.DestroyBP // (BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_InteractUI.BP_InteractUI_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_InteractUI.BP_InteractUI_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_InteractUI.BP_InteractUI_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_InteractUI(int32_t EntryPoint); // Function BP_InteractUI.BP_InteractUI_C.ExecuteUbergraph_BP_InteractUI // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

