// BlueprintGeneratedClass BP_Gharry.BP_Gharry_C
// Size: 0x2c8 (Inherited: 0x270)
struct ABP_Gharry_C : ANOS_Gharry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBoxComponent* Box; // 0x278(0x08)
	float Move_Alpha_D27D9D374EB4387549847F8F77E9DD21; // 0x280(0x04)
	enum class ETimelineDirection Move__Direction_D27D9D374EB4387549847F8F77E9DD21; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Move; // 0x288(0x08)
	float GharrMoveTimeline_Alpha_6A7F063B4AE416305B2CDFBDC6ACE06A; // 0x290(0x04)
	enum class ETimelineDirection GharrMoveTimeline__Direction_6A7F063B4AE416305B2CDFBDC6ACE06A; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* GharrMoveTimeline; // 0x298(0x08)
	struct ANOS_PlayerBase* Passenger; // 0x2a0(0x08)
	struct FVector OriginalLocation; // 0x2a8(0x0c)
	bool IsReady; // 0x2b4(0x01)
	bool CanTakeGharry; // 0x2b5(0x01)
	char pad_2B6[0x2]; // 0x2b6(0x02)
	struct FMulticastInlineDelegate OnMoveEnd; // 0x2b8(0x10)

	void AfterGharryMove(); // Function BP_Gharry.BP_Gharry_C.AfterGharryMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BeforeGharryMove(); // Function BP_Gharry.BP_Gharry_C.BeforeGharryMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GharrMoveTimeline__FinishedFunc(); // Function BP_Gharry.BP_Gharry_C.GharrMoveTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void GharrMoveTimeline__UpdateFunc(); // Function BP_Gharry.BP_Gharry_C.GharrMoveTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Move__FinishedFunc(); // Function BP_Gharry.BP_Gharry_C.Move__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Move__UpdateFunc(); // Function BP_Gharry.BP_Gharry_C.Move__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnGharryMove(struct ANOS_PlayerBase* Char); // Function BP_Gharry.BP_Gharry_C.OnGharryMove // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void MoveToStartLocation(struct FVector Location); // Function BP_Gharry.BP_Gharry_C.MoveToStartLocation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Gharry.BP_Gharry_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Gharry.BP_Gharry_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Gharry(int32_t EntryPoint); // Function BP_Gharry.BP_Gharry_C.ExecuteUbergraph_BP_Gharry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnMoveEnd__DelegateSignature(); // Function BP_Gharry.BP_Gharry_C.OnMoveEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

