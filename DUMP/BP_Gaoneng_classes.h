// BlueprintGeneratedClass BP_Gaoneng.BP_Gaoneng_C
// Size: 0x320 (Inherited: 0x280)
struct ABP_Gaoneng_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USpotLightComponent* SpotLight; // 0x288(0x08)
	struct USkeletalMeshComponent* ConjonedBodycOM; // 0x290(0x08)
	struct USkeletalMeshComponent* HairCom; // 0x298(0x08)
	struct USkeletalMeshComponent* ClothCom; // 0x2a0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2a8(0x08)
	struct USceneComponent* Scene; // 0x2b0(0x08)
	struct UCameraComponent* Camera; // 0x2b8(0x08)
	struct USpringArmComponent* SpringArm; // 0x2c0(0x08)
	struct ANOS_PlayerGhost* Ghost; // 0x2c8(0x08)
	struct FBS_GaonengDataTable GaonengMap; // 0x2d0(0x50)

	void ReadGaonen(struct UAnimMontage* ReadMontage, bool isture, struct TSoftObjectPtr<struct UAnimSequence> GaonengMontage); // Function BP_Gaoneng.BP_Gaoneng_C.ReadGaonen // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadMontageMap(); // Function BP_Gaoneng.BP_Gaoneng_C.LoadMontageMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CopySkin(); // Function BP_Gaoneng.BP_Gaoneng_C.CopySkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_Gaoneng.BP_Gaoneng_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchGhostView(struct ABP_PlayerHumanBase_C* Player, struct UAnimMontage* Aninmation); // Function BP_Gaoneng.BP_Gaoneng_C.SwitchGhostView // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_Gaoneng.BP_Gaoneng_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Gaoneng(int32_t EntryPoint); // Function BP_Gaoneng.BP_Gaoneng_C.ExecuteUbergraph_BP_Gaoneng // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

