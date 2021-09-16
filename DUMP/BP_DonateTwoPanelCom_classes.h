// BlueprintGeneratedClass BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C
// Size: 0x178 (Inherited: 0x151)
struct UBP_DonateTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool IsLingBi; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UUIItem* UI_Root; // 0x168(0x08)
	struct UBP_InfomationPanelCom_C* Info; // 0x170(0x08)

	void Close(); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InputChange(bool InActivate); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.InputChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BP_SuppliesManageCom_AutoGenFunc(struct FString inString); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.BP_SuppliesManageCom_AutoGenFunc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDonate(int32_t DonateNumber, int32_t InId); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.OnDonate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitButton(); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Donate(); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.Donate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_DonateTwoPanelCom(int32_t EntryPoint); // Function BP_DonateTwoPanelCom.BP_DonateTwoPanelCom_C.ExecuteUbergraph_BP_DonateTwoPanelCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

