// BlueprintGeneratedClass BTT_FindRandomPatrol.BTT_FindRandomPatrol_C
// Size: 0xe0 (Inherited: 0xa8)
struct UBTT_FindRandomPatrol_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	float PatrolSpeed; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FBlackboardKeySelector PatrolLocation; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_FindRandomPatrol.BTT_FindRandomPatrol_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BTT_FindRandomPatrol(int32_t EntryPoint); // Function BTT_FindRandomPatrol.BTT_FindRandomPatrol_C.ExecuteUbergraph_BTT_FindRandomPatrol // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

