// BlueprintGeneratedClass BP_RecordContentCom.BP_RecordContentCom_C
// Size: 0x208 (Inherited: 0x151)
struct UBP_RecordContentCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildRecordInfo RecordInfo; // 0x160(0xa8)

	void Button(); // Function BP_RecordContentCom.BP_RecordContentCom_C.Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetTime(struct FText Time); // Function BP_RecordContentCom.BP_RecordContentCom_C.GetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetInfo(struct FText Info); // Function BP_RecordContentCom.BP_RecordContentCom_C.GetInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void StartBP(); // Function BP_RecordContentCom.BP_RecordContentCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateInfo(); // Function BP_RecordContentCom.BP_RecordContentCom_C.UpdateInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RecordContentCom(int32_t EntryPoint); // Function BP_RecordContentCom.BP_RecordContentCom_C.ExecuteUbergraph_BP_RecordContentCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

