// BlueprintGeneratedClass BP_IntegrationDonate.BP_IntegrationDonate_C
// Size: 0x1b0 (Inherited: 0x17c)
struct UBP_IntegrationDonate_C : UBP_DonatePanelBase_C {
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x188(0x08)
	struct FMulticastInlineDelegate OnClickConfrim; // 0x190(0x10)
	float anchorOffsetX; // 0x1a0(0x04)
	float anchorOffsetY; // 0x1a4(0x04)
	float PivotX; // 0x1a8(0x04)
	float PivotY; // 0x1ac(0x04)

	void UpdatePosition(); // Function BP_IntegrationDonate.BP_IntegrationDonate_C.UpdatePosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowPanel(); // Function BP_IntegrationDonate.BP_IntegrationDonate_C.ShowPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_IntegrationDonate.BP_IntegrationDonate_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClickConfrim(); // Function BP_IntegrationDonate.BP_IntegrationDonate_C.ClickConfrim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_IntegrationDonate(int32_t EntryPoint); // Function BP_IntegrationDonate.BP_IntegrationDonate_C.ExecuteUbergraph_BP_IntegrationDonate // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void OnClickConfrim__DelegateSignature(int32_t Count, int32_t ID, struct FText Name); // Function BP_IntegrationDonate.BP_IntegrationDonate_C.OnClickConfrim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

