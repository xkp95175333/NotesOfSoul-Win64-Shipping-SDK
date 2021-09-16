// BlueprintGeneratedClass BP_BootyDistributionRecordInfoCom.BP_BootyDistributionRecordInfoCom_C
// Size: 0x208 (Inherited: 0x151)
struct UBP_BootyDistributionRecordInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildRecordInfo RecordInfo; // 0x160(0xa8)

	void InitInfo(); // Function BP_BootyDistributionRecordInfoCom.BP_BootyDistributionRecordInfoCom_C.InitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_BootyDistributionRecordInfoCom.BP_BootyDistributionRecordInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BootyDistributionRecordInfoCom(int32_t EntryPoint); // Function BP_BootyDistributionRecordInfoCom.BP_BootyDistributionRecordInfoCom_C.ExecuteUbergraph_BP_BootyDistributionRecordInfoCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

