// BlueprintGeneratedClass BTT_SpiderSetState.BTT_SpiderSetState_C
// Size: 0xb1 (Inherited: 0xa8)
struct UBTT_SpiderSetState_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	enum class ESpiderState Spider State; // 0xb0(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SpiderSetState.BTT_SpiderSetState_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BTT_SpiderSetState(int32_t EntryPoint); // Function BTT_SpiderSetState.BTT_SpiderSetState_C.ExecuteUbergraph_BTT_SpiderSetState // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

