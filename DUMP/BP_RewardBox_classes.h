// BlueprintGeneratedClass BP_RewardBox.BP_RewardBox_C
// Size: 0x1d0 (Inherited: 0x151)
struct UBP_RewardBox_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUITextureActor* CanGetTexture; // 0x160(0x08)
	struct AUITextureActor* ItemImage; // 0x168(0x08)
	struct AUITextureActor* StateImage; // 0x170(0x08)
	bool ISCanGet; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FMulticastInlineDelegate CallTryGet; // 0x180(0x10)
	int32_t ID; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UUIButtonComponent* Button; // 0x198(0x08)
	int32_t StateIndex; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct FNOS_ItemTable> RewardItemInfor; // 0x1a8(0x10)
	struct AUITextActor* DayText; // 0x1b8(0x08)
	int32_t NeedSignDays; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct AUITextActor* StateText; // 0x1c8(0x08)

	void UpdateGetState(int32_t ID, int32_t State, int32_t NeedDayNum, struct TArray<struct FNOS_ItemTable> RewardItemInfor); // Function BP_RewardBox.BP_RewardBox_C.UpdateGetState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_RewardBox.BP_RewardBox_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_RewardBox.BP_RewardBox_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnTryGetEvent(); // Function BP_RewardBox.BP_RewardBox_C.OnTryGetEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_RewardBox(int32_t EntryPoint); // Function BP_RewardBox.BP_RewardBox_C.ExecuteUbergraph_BP_RewardBox // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void CallTryGet__DelegateSignature(int32_t ID); // Function BP_RewardBox.BP_RewardBox_C.CallTryGet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

