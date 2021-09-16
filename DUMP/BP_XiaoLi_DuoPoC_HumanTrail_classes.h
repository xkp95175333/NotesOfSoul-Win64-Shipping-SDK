// BlueprintGeneratedClass BP_XiaoLi_DuoPoC_HumanTrail.BP_XiaoLi_DuoPoC_HumanTrail_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_XiaoLi_DuoPoC_HumanTrail_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct UPoseableMeshComponent* PoseableMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float PoseMeshTimeline_Value_C8B9CC854AF217629B56EC958E6D29CC; // 0x240(0x04)
	enum class ETimelineDirection PoseMeshTimeline__Direction_C8B9CC854AF217629B56EC958E6D29CC; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* PoseMeshTimeline; // 0x248(0x08)
	struct TArray<struct UPoseableMeshComponent*> ChildrenPoseComponents; // 0x250(0x10)

	void CreatePoseComponent(struct USkeletalMesh* SkeletalMesh, struct UPoseableMeshComponent* PoseComp); // Function BP_XiaoLi_DuoPoC_HumanTrail.BP_XiaoLi_DuoPoC_HumanTrail_C.CreatePoseComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void PoseMeshTimeline__FinishedFunc(); // Function BP_XiaoLi_DuoPoC_HumanTrail.BP_XiaoLi_DuoPoC_HumanTrail_C.PoseMeshTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void PoseMeshTimeline__UpdateFunc(); // Function BP_XiaoLi_DuoPoC_HumanTrail.BP_XiaoLi_DuoPoC_HumanTrail_C.PoseMeshTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoLi_DuoPoC_HumanTrail.BP_XiaoLi_DuoPoC_HumanTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoLi_DuoPoC_HumanTrail(int32_t EntryPoint); // Function BP_XiaoLi_DuoPoC_HumanTrail.BP_XiaoLi_DuoPoC_HumanTrail_C.ExecuteUbergraph_BP_XiaoLi_DuoPoC_HumanTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

