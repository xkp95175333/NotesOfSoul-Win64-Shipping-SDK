// BlueprintGeneratedClass BTT_ChasePlayer.BTT_ChasePlayer_C
// Size: 0xb4 (Inherited: 0xa8)
struct UBTT_ChasePlayer_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float ChaseSpeed; // 0xb0(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ChasePlayer.BTT_ChasePlayer_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BTT_ChasePlayer(int32_t EntryPoint); // Function BTT_ChasePlayer.BTT_ChasePlayer_C.ExecuteUbergraph_BTT_ChasePlayer // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

