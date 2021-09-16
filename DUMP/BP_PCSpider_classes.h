// BlueprintGeneratedClass BP_PCSpider.BP_PCSpider_C
// Size: 0x350 (Inherited: 0x328)
struct ABP_PCSpider_C : ANOS_PCSpider {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0x330(0x08)
	struct TArray<struct ABP_PlayerHumanBase_C*> InSightHumanArray; // 0x338(0x10)
	struct ABP_PlayerHumanBase_C* InSightHuman; // 0x348(0x08)

	void Is No Sight Obstruction(struct AActor* SightTarget, bool Value); // Function BP_PCSpider.BP_PCSpider_C.Is No Sight Obstruction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Lately Sight Human(struct ABP_PlayerHumanBase_C* Lately); // Function BP_PCSpider.BP_PCSpider_C.Get Lately Sight Human // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PCSpider.BP_PCSpider_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(struct AActor* Actor, struct FAIStimulus Stimulus); // Function BP_PCSpider.BP_PCSpider_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PCSpider(int32_t EntryPoint); // Function BP_PCSpider.BP_PCSpider_C.ExecuteUbergraph_BP_PCSpider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

