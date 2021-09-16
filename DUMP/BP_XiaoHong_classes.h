// BlueprintGeneratedClass BP_XiaoHong.BP_XiaoHong_C
// Size: 0x2f64 (Inherited: 0x2f29)
struct ABP_XiaoHong_C : ABP_PlayerHumanBase_C {
	char pad_2F29[0x7]; // 0x2f29(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f30(0x08)
	struct UPostProcessComponent* MainTalentPostProcess; // 0x2f38(0x08)
	struct UBoxComponent* MainTalentBox; // 0x2f40(0x08)
	struct TArray<struct FHitResult> Out Hits; // 0x2f48(0x10)
	bool OpenMainTalent; // 0x2f58(0x01)
	char pad_2F59[0x3]; // 0x2f59(0x03)
	struct FActiveGameplayEffectHandle MaintalentBuffHandle; // 0x2f5c(0x08)

	void ReceiveBeginPlay(); // Function BP_XiaoHong.BP_XiaoHong_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__MainTalentBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XiaoHong.BP_XiaoHong_C.BndEvt__MainTalentBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__MainTalentBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_XiaoHong.BP_XiaoHong_C.BndEvt__MainTalentBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void MainTalentCollisionCheck(enum class ECollisionResponse NewResponse); // Function BP_XiaoHong.BP_XiaoHong_C.MainTalentCollisionCheck // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XiaoHong.BP_XiaoHong_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void 11(); // Function BP_XiaoHong.BP_XiaoHong_C.11 // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void 2Mul(); // Function BP_XiaoHong.BP_XiaoHong_C.2Mul // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterCollision(bool MainTalentBegin); // Function BP_XiaoHong.BP_XiaoHong_C.SetCharacterCollision // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XiaoHong.BP_XiaoHong_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoHong(int32_t EntryPoint); // Function BP_XiaoHong.BP_XiaoHong_C.ExecuteUbergraph_BP_XiaoHong // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

