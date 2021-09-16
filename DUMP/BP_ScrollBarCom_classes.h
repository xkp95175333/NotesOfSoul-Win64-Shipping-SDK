// BlueprintGeneratedClass BP_ScrollBarCom.BP_ScrollBarCom_C
// Size: 0x181 (Inherited: 0x151)
struct UBP_ScrollBarCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUIBaseActor* taa; // 0x160(0x08)
	struct FMulticastInlineDelegate ToButtom; // 0x168(0x10)
	float OldValue; // 0x178(0x04)
	float OldOffY; // 0x17c(0x04)
	bool CanCallToButtom; // 0x180(0x01)

	void ValueChange(struct FVector2D InVec); // Function BP_ScrollBarCom.BP_ScrollBarCom_C.ValueChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_ScrollBarCom.BP_ScrollBarCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ScrollBarCom.BP_ScrollBarCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ScrollBarCom(int32_t EntryPoint); // Function BP_ScrollBarCom.BP_ScrollBarCom_C.ExecuteUbergraph_BP_ScrollBarCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void ToButtom__DelegateSignature(); // Function BP_ScrollBarCom.BP_ScrollBarCom_C.ToButtom__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

