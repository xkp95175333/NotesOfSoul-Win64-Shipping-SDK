// BlueprintGeneratedClass BP_SpiderMonster.BP_SpiderMonster_C
// Size: 0x548 (Inherited: 0x540)
struct ABP_SpiderMonster_C : ANOS_SpiderMonster {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)

	void ReceiveBeginPlay(); // Function BP_SpiderMonster.BP_SpiderMonster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_SpiderMonster.BP_SpiderMonster_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void StartInteractES(struct FEventRelevantData EventRelevantData); // Function BP_SpiderMonster.BP_SpiderMonster_C.StartInteractES // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EndInteractES(struct FEventRelevantData EventRelevantData); // Function BP_SpiderMonster.BP_SpiderMonster_C.EndInteractES // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SpiderMonster(int32_t EntryPoint); // Function BP_SpiderMonster.BP_SpiderMonster_C.ExecuteUbergraph_BP_SpiderMonster // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

