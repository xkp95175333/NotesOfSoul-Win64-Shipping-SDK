// BlueprintGeneratedClass BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C
// Size: 0x238 (Inherited: 0x151)
struct UBP_ApplyPersonInfoCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGuildApplyInfo ApplyPerson; // 0x160(0xd8)

	void ApplySuccess(); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.ApplySuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetTimeString(struct FText Time); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.GetTimeString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Refused(); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.Refused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Apply(); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.Apply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetInfo(struct FGuildApplyInfo ApplyPerson); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ApplyPersonInfoCom(int32_t EntryPoint); // Function BP_ApplyPersonInfoCom.BP_ApplyPersonInfoCom_C.ExecuteUbergraph_BP_ApplyPersonInfoCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

