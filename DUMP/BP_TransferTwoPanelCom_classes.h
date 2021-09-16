// BlueprintGeneratedClass BP_TransferTwoPanelCom.BP_TransferTwoPanelCom_C
// Size: 0x268 (Inherited: 0x151)
struct UBP_TransferTwoPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildUserData PlayerInfo; // 0x160(0x100)
	struct UBP_MemberManagementPanelCom_C* MemberManage; // 0x260(0x08)

	void OK(); // Function BP_TransferTwoPanelCom.BP_TransferTwoPanelCom_C.OK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Exit(); // Function BP_TransferTwoPanelCom.BP_TransferTwoPanelCom_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_TransferTwoPanelCom.BP_TransferTwoPanelCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TransferTwoPanelCom(int32_t EntryPoint); // Function BP_TransferTwoPanelCom.BP_TransferTwoPanelCom_C.ExecuteUbergraph_BP_TransferTwoPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

