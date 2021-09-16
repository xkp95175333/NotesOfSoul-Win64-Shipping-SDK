// BlueprintGeneratedClass BTT_LookTarget.BTT_LookTarget_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_LookTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector Target; // 0xb0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_LookTarget.BTT_LookTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BTT_LookTarget(int32_t EntryPoint); // Function BTT_LookTarget.BTT_LookTarget_C.ExecuteUbergraph_BTT_LookTarget // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

