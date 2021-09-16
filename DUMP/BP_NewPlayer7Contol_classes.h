// BlueprintGeneratedClass BP_NewPlayer7Contol.BP_NewPlayer7Contol_C
// Size: 0x191 (Inherited: 0x151)
struct UBP_NewPlayer7Contol_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct UBP_NewPlayer7RewardBox_C*> RewardBoxs; // 0x160(0x10)
	int32_t ID; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct AUIContainerActor*> RewardContant; // 0x178(0x10)
	struct UDataTable* ItemTable; // 0x188(0x08)
	bool bAnyCanGet; // 0x190(0x01)

	void IsCanGetSomething(bool bCanGet); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.IsCanGetSomething // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateTypeRedPoint(); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.UpdateTypeRedPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RewardWidnow(int32_t ID); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.RewardWidnow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRewardState(); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.UpdateRewardState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TryGetReward(int32_t ID); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.TryGetReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t ID); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_NewPlayer7Contol(int32_t EntryPoint); // Function BP_NewPlayer7Contol.BP_NewPlayer7Contol_C.ExecuteUbergraph_BP_NewPlayer7Contol // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

