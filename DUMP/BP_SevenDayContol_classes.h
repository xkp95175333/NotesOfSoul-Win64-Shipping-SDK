// BlueprintGeneratedClass BP_SevenDayContol.BP_SevenDayContol_C
// Size: 0x1a8 (Inherited: 0x151)
struct UBP_SevenDayContol_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUIContainerActor* RewardBox; // 0x160(0x08)
	struct TArray<struct UBP_RewardBox_C*> RewardBoxs; // 0x168(0x10)
	struct UBP_RewardWindow_C* BP_RewardWindow; // 0x178(0x08)
	int32_t ID; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TArray<struct AUIContainerActor*> RewardContant; // 0x188(0x10)
	struct TArray<int32_t> NewVar_1; // 0x198(0x10)

	void RewardWidnow(int32_t ID); // Function BP_SevenDayContol.BP_SevenDayContol_C.RewardWidnow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRewardState(); // Function BP_SevenDayContol.BP_SevenDayContol_C.UpdateRewardState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_SevenDayContol.BP_SevenDayContol_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SevenDayContol.BP_SevenDayContol_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TryGetReward(int32_t ID); // Function BP_SevenDayContol.BP_SevenDayContol_C.TryGetReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t ID); // Function BP_SevenDayContol.BP_SevenDayContol_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SevenDayContol(int32_t EntryPoint); // Function BP_SevenDayContol.BP_SevenDayContol_C.ExecuteUbergraph_BP_SevenDayContol // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

