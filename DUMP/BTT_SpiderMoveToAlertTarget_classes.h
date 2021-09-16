// BlueprintGeneratedClass BTT_SpiderMoveToAlertTarget.BTT_SpiderMoveToAlertTarget_C
// Size: 0xb4 (Inherited: 0xa8)
struct UBTT_SpiderMoveToAlertTarget_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float AcceptableRadius; // 0xb0(0x04)

	void OnFail_6D89CE204762621C207D73879E9C7B9A(enum class EPathFollowingResult MovementResult); // Function BTT_SpiderMoveToAlertTarget.BTT_SpiderMoveToAlertTarget_C.OnFail_6D89CE204762621C207D73879E9C7B9A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSuccess_6D89CE204762621C207D73879E9C7B9A(enum class EPathFollowingResult MovementResult); // Function BTT_SpiderMoveToAlertTarget.BTT_SpiderMoveToAlertTarget_C.OnSuccess_6D89CE204762621C207D73879E9C7B9A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SpiderMoveToAlertTarget.BTT_SpiderMoveToAlertTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BTT_SpiderMoveToAlertTarget(int32_t EntryPoint); // Function BTT_SpiderMoveToAlertTarget.BTT_SpiderMoveToAlertTarget_C.ExecuteUbergraph_BTT_SpiderMoveToAlertTarget // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

