// BlueprintGeneratedClass BP_StoreCharaterModel.BP_StoreCharaterModel_C
// Size: 0x1718 (Inherited: 0xeb0)
struct ABP_StoreCharaterModel_C : ABP_CharacterModelBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xeb0(0x08)
	struct UStaticMeshComponent* TreasuresMesh; // 0xeb8(0x08)
	struct UStaticMeshComponent* GhostTalentMesh; // 0xec0(0x08)
	struct UStaticMeshComponent* HomeMesh; // 0xec8(0x08)
	struct USkeletalMeshComponent* ConsumableMesh; // 0xed0(0x08)
	float ResetROV_FOV_92FC375A4B791D7D5867B8B8CDD43E2D; // 0xed8(0x04)
	enum class ETimelineDirection ResetROV__Direction_92FC375A4B791D7D5867B8B8CDD43E2D; // 0xedc(0x01)
	char pad_EDD[0x3]; // 0xedd(0x03)
	struct UTimelineComponent* ResetROV; // 0xee0(0x08)
	float ArmMinYaw; // 0xee8(0x04)
	float ArmMaxYaw; // 0xeec(0x04)
	float RotationSpeed; // 0xef0(0x04)
	struct FVector ArmNearLocation; // 0xef4(0x0c)
	struct FVector ArmMiddleLocation; // 0xf00(0x0c)
	struct FVector ArmLongLocation; // 0xf0c(0x0c)
	struct FVector ArmCurrentLocation; // 0xf18(0x0c)
	float ArmLocationSpeedX; // 0xf24(0x04)
	float ArmLocationOffsetX; // 0xf28(0x04)
	float ArmLocationSpeedZ+; // 0xf2c(0x04)
	float ArmLocationSpeedZ-; // 0xf30(0x04)
	float ArmLocationOffsetZ+; // 0xf34(0x04)
	float ArmLocationOffsetZ-; // 0xf38(0x04)
	int32_t ConsumableID; // 0xf3c(0x04)
	int32_t HomeID; // 0xf40(0x04)
	int32_t TalentID; // 0xf44(0x04)
	int32_t ExperienceID; // 0xf48(0x04)
	bool bInput; // 0xf4c(0x01)
	char pad_F4D[0x3]; // 0xf4d(0x03)
	float ArmNearLength; // 0xf50(0x04)
	float ArmCurrentLength; // 0xf54(0x04)
	float ArmMiddleLength; // 0xf58(0x04)
	float ArmLongLength; // 0xf5c(0x04)
	float ArmLenghSpeed; // 0xf60(0x04)
	float ArmLenghOffset; // 0xf64(0x04)
	struct FIntegrationHumanChangeDress CurrentHumansChangeDressInfo; // 0xf68(0x3b0)
	struct FNOS_GhostSuit CurrentGhostChangeDessInfo; // 0x1318(0x350)
	struct UBP_IntegrationCom_C* IntegrationCom; // 0x1668(0x08)
	struct FRotator MeshRelative Rotation; // 0x1670(0x0c)
	bool bFOV; // 0x167c(0x01)
	char pad_167D[0x3]; // 0x167d(0x03)
	int32_t HideMeshType; // 0x1680(0x04)
	char pad_1684[0x4]; // 0x1684(0x04)
	struct FArmTransformStruct Arm Transform Struct; // 0x1688(0x88)
	struct UDataTable* ArmTransformData; // 0x1710(0x08)

	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetGhostGroomRef(struct FNOS_GroomAsset Ref); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.GetGhostGroomRef // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetHumanGroomRef(struct FNOS_GroomAsset Ref); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.GetHumanGroomRef // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TickArmTransfrom(float Delta); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.TickArmTransfrom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check Character State(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.Check Character State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TimelineCamera FOV(float FOV); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.TimelineCamera FOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseWheelAxisFOV(float AxisValue); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.MouseWheelAxisFOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MouseWheelAxisArm(float AxisValue); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.MouseWheelAxisArm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterBianShen(int32_t NewID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetCharacterBianShen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateArmTransfrom(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.UpdateArmTransfrom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetArmTransfrom(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ResetArmTransfrom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Reset Arm Transfrom Info(int32_t ModleType); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.Reset Arm Transfrom Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Hide Mesh(bool SkeletalHide, bool ConsumableHide, bool HomeHide, bool ChostTalentHide, bool TreasuresHide); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.Set Hide Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetROV__FinishedFunc(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ResetROV__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ResetROV__UpdateFunc(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ResetROV__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_F41880F8416644C8BC6281B7C76FCDE1(struct UObject* Loaded); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.OnLoaded_F41880F8416644C8BC6281B7C76FCDE1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_299CE4D24165124914BF71BBBB9186A7(struct UObject* Loaded); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.OnLoaded_299CE4D24165124914BF71BBBB9186A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterModel(int32_t CharacterID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetCharacterModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterSuit(int32_t CharacterID, int32_t SkinId); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetCharacterSuit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetConsumableMesh(int32_t ConsumableID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetConsumableMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHomeMesh(int32_t HomeID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetHomeMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostTalentMesh(int32_t ID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetGhostTalentMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TakeOffCharacterSuit(int32_t SkinId); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.TakeOffCharacterSuit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartInteract(struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.OnStartInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void ChangeHumanDressInfo(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ChangeHumanDressInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeGhostDressInfo(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ChangeGhostDressInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchToShop(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SwitchToShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchToTreasures(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SwitchToTreasures // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHumanTalentMesh(int32_t ID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetHumanTalentMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterExperienceSkin(int32_t CharacterID, int32_t SkinId, int32_t ExperienceID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetCharacterExperienceSkin // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterExprienceModel(int32_t CharacterID, int32_t ExperienceID); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.SetCharacterExprienceModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractFailed(struct ACharacter* InteractChar); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.OnInteractFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitPlay(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.InitPlay // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void EventAgainPlay(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.EventAgainPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TakeOffAllCharacterSuit(); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.TakeOffAllCharacterSuit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_StoreCharaterModel(int32_t EntryPoint); // Function BP_StoreCharaterModel.BP_StoreCharaterModel_C.ExecuteUbergraph_BP_StoreCharaterModel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

