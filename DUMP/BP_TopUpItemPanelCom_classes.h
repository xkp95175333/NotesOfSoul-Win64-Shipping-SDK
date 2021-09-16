// BlueprintGeneratedClass BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C
// Size: 0x198 (Inherited: 0x151)
struct UBP_TopUpItemPanelCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	bool bIsToday; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FTopUpStr topup; // 0x168(0x30)

	int32_t AKeyToGet(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.AKeyToGet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool CanGet(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.CanGet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitButton(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.InitButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitInfo(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Click(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAll(); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.InitAll // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TopUpItemPanelCom(int32_t EntryPoint); // Function BP_TopUpItemPanelCom.BP_TopUpItemPanelCom_C.ExecuteUbergraph_BP_TopUpItemPanelCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

