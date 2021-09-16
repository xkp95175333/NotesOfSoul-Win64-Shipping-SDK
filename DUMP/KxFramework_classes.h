// Class KxFramework.KxInventoryObject
// Size: 0xa0 (Inherited: 0x28)
struct UKxInventoryObject : UObject {
	struct AKxPickupBase* PickUpClass; // 0x28(0x08)
	struct FString ItemConfigName; // 0x30(0x10)
	struct FKxItemData ItemData; // 0x40(0x20)
	struct FKxItemData DustCoveredEquipmentItemData; // 0x60(0x20)
	struct UKxInventoryComponent* InventoryCom; // 0x80(0x08)
	bool bPassiveAbility; // 0x88(0x01)
	char pad_89[0x1]; // 0x89(0x01)
	bool bAutoActive; // 0x8a(0x01)
	bool bNoGenerationModel; // 0x8b(0x01)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FMulticastInlineDelegate UpdateItemData; // 0x90(0x10)

	void Use(); // Function KxFramework.KxInventoryObject.Use // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1ae4dc0
	void RemoveThisItem(); // Function KxFramework.KxInventoryObject.RemoveThisItem // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x1b14bb0
	void OnRep_UpdateItemData(); // Function KxFramework.KxInventoryObject.OnRep_UpdateItemData // (Native|Event|Public|BlueprintEvent) // @ game+0x1b14360
	bool IsUsecondition(); // Function KxFramework.KxInventoryObject.IsUsecondition // (Native|Event|Protected|BlueprintEvent) // @ game+0x1b13ac0
	bool Decrease(float Value); // Function KxFramework.KxInventoryObject.Decrease // (Native|Event|Protected|BlueprintEvent) // @ game+0x1b12490
	void Deactive(); // Function KxFramework.KxInventoryObject.Deactive // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1ae4d80
	void ClientUse(); // Function KxFramework.KxInventoryObject.ClientUse // (Native|Event|Protected|BlueprintEvent) // @ game+0x1b123e0
	void ClientDeactive(); // Function KxFramework.KxInventoryObject.ClientDeactive // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b123c0
	void ClientActive(); // Function KxFramework.KxInventoryObject.ClientActive // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x105b930
	bool Active(); // Function KxFramework.KxInventoryObject.Active // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b11c50
};

// Class KxFramework.KxConsumableObject
// Size: 0xf0 (Inherited: 0xa0)
struct UKxConsumableObject : UKxInventoryObject {
	struct TArray<struct TSoftObjectPtr<struct USkeletalMesh>> ItemMeshObjs; // 0xa0(0x10)
	struct TArray<struct FName> MeshAttachSocketNames; // 0xb0(0x10)
	struct TArray<SoftClassProperty> ItemAnimInsance; // 0xc0(0x10)
	struct TArray<struct USkeletalMeshComponent*> NewStaticMeshs; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class KxFramework.KxAIController
// Size: 0x328 (Inherited: 0x328)
struct AKxAIController : AAIController {
};

// Class KxFramework.KxHUDBase
// Size: 0x310 (Inherited: 0x310)
struct AKxHUDBase : AHUD {
};

// Class KxFramework.KxBuffObject
// Size: 0x70 (Inherited: 0x28)
struct UKxBuffObject : UObject {
	struct FString BuffName; // 0x28(0x10)
	float BuffTotalTime; // 0x38(0x04)
	float BuffTriggerTime; // 0x3c(0x04)
	struct TArray<float> BuffProperty; // 0x40(0x10)
	struct AActor* BuffOwner; // 0x50(0x08)
	struct ACharacter* BuffInstigator; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)

	void ReSetBuffTime(float NewTotalTime); // Function KxFramework.KxBuffObject.ReSetBuffTime // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1ae5c80
	void InterruptBuff(); // Function KxFramework.KxBuffObject.InterruptBuff // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1ae5a00
	void ClientBuffInit(); // Function KxFramework.KxBuffObject.ClientBuffInit // (Native|Event|Public|BlueprintEvent) // @ game+0x1ae4de0
	void ClientBuffEnd(); // Function KxFramework.KxBuffObject.ClientBuffEnd // (Native|Event|Public|BlueprintEvent) // @ game+0x1ae4dc0
	void BuffTrigger(); // Function KxFramework.KxBuffObject.BuffTrigger // (Native|Event|Public|BlueprintEvent) // @ game+0x1ae4da0
	bool BuffInit(); // Function KxFramework.KxBuffObject.BuffInit // (Native|Event|Public|BlueprintEvent) // @ game+0x171f520
	void BuffEnd(); // Function KxFramework.KxBuffObject.BuffEnd // (Native|Event|Public|BlueprintEvent) // @ game+0x1ae4d80
};

// Class KxFramework.KxCharacter
// Size: 0x520 (Inherited: 0x4c0)
struct AKxCharacter : ACharacter {
	struct FMulticastInlineDelegate OnStealthSwitch; // 0x4c0(0x10)
	struct UKxHealthComponent* KxHealthComponent; // 0x4d0(0x08)
	struct UKxDamageComponent* KxDamageComponent; // 0x4d8(0x08)
	struct UKxBuffComponent* KxBuffComponent; // 0x4e0(0x08)
	struct USpringArmComponent* SpringArmCom; // 0x4e8(0x08)
	struct TArray<struct FName> LineOfSightSockets; // 0x4f0(0x10)
	enum class ECollisionChannel LineOfSightCollisionChannel; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float RagdollLifetime; // 0x504(0x04)
	bool EnableOutLine; // 0x508(0x01)
	bool EnableStealth; // 0x509(0x01)
	char pad_50A[0x16]; // 0x50a(0x16)

	void StartRagdoll(); // Function KxFramework.KxCharacter.StartRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6d90
	void SetUnbeatable(bool UnBeat); // Function KxFramework.KxCharacter.SetUnbeatable // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1a020f0
	void SetStealth(bool bEnable, bool TrueHide); // Function KxFramework.KxCharacter.SetStealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ae6b90
	void SetOutline(bool bEnable); // Function KxFramework.KxCharacter.SetOutline // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a4a1a0
	void OwnerDestroyComponent(struct UActorComponent* Com, bool bPromoteChildren); // Function KxFramework.KxCharacter.OwnerDestroyComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5bb0
	void OnPlayerStateReady(); // Function KxFramework.KxCharacter.OnPlayerStateReady // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void MultiPlayMontage(struct UAnimMontage* Montage, bool bSkipOwner); // Function KxFramework.KxCharacter.MultiPlayMontage // (Net|Native|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x1ae5a80
	bool IsUnbeatable(); // Function KxFramework.KxCharacter.IsUnbeatable // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5a50
	bool IsAllClientTypeStealth(); // Function KxFramework.KxCharacter.IsAllClientTypeStealth // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5a20
	struct USpringArmComponent* GetSpringArmComponent(); // Function KxFramework.KxCharacter.GetSpringArmComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5650
	bool GetIsEnableStealth(); // Function KxFramework.KxCharacter.GetIsEnableStealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ae5630
	bool GetIsEnableOutline(); // Function KxFramework.KxCharacter.GetIsEnableOutline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ae5610
	struct UKxHealthComponent* GetHealthComponent(); // Function KxFramework.KxCharacter.GetHealthComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19f0750
	struct UKxDamageComponent* GetDamageComponent(); // Function KxFramework.KxCharacter.GetDamageComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5210
	struct UKxBuffComponent* GetBuffComponent(); // Function KxFramework.KxCharacter.GetBuffComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5040
	void DeleteSelf(); // Function KxFramework.KxCharacter.DeleteSelf // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae4e00
	void BPSetPlayerState(struct APlayerState* PS); // Function KxFramework.KxCharacter.BPSetPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae4cf0
};

// Class KxFramework.KxClientMatchService
// Size: 0x208 (Inherited: 0x30)
struct UKxClientMatchService : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	bool bMatching; // 0x38(0x01)
	bool bBanPicking; // 0x39(0x01)
	enum class EGameMatchType GameMatchType; // 0x3a(0x01)
	enum class EGameTeamType GameTeamType; // 0x3b(0x01)
	enum class EKxGameType CurMatchType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t CurCampType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FMulticastInlineDelegate OnEnterMatch; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMatchConfirm; // 0x58(0x10)
	struct FMulticastInlineDelegate OnEnterBattleGame; // 0x68(0x10)
	struct FMulticastInlineDelegate OnReconnectBattleGame; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMatchErrorCode; // 0x88(0x10)
	struct FMulticastInlineDelegate OnStartMatchSelection; // 0x98(0x10)
	struct FMulticastInlineDelegate OnBattleEndEvent; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnBanPickFail; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnMatchOptUpdate; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnOpenKckingaPlayer; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnCloseKckingaPlayer; // 0xe8(0x10)
	struct TArray<int32_t> WeekFreeRoles; // 0xf8(0x10)
	char pad_108[0xf0]; // 0x108(0xf0)
	uint64_t VoiceRoomID; // 0x1f8(0x08)
	uint32_t VoiceTeamID; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)

	void StartMatch(int32_t MatchType, int32_t CampType); // Function KxFramework.KxClientMatchService.StartMatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1aecab0
	void OnExitMatchRoom(int32_t Result, struct FString ErrorInfo); // Function KxFramework.KxClientMatchService.OnExitMatchRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1aebef0
	void OnEnterMatchRoom(int32_t Result, struct FString ErrorInfo); // Function KxFramework.KxClientMatchService.OnEnterMatchRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1aebdd0
	void OnDisConnectMatchRoom(int32_t Result, struct FString ErrorInfo); // Function KxFramework.KxClientMatchService.OnDisConnectMatchRoom // (Final|Native|Public) // @ game+0x1aebcb0
	void GetWeekFreeRoles(); // Function KxFramework.KxClientMatchService.GetWeekFreeRoles // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb810
	struct FBanPickInfo GetBanPickInfo(); // Function KxFramework.KxClientMatchService.GetBanPickInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb270
	void ExitMatchRoom(); // Function KxFramework.KxClientMatchService.ExitMatchRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb160
	void EnterMatchRoom(); // Function KxFramework.KxClientMatchService.EnterMatchRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb140
	void CustomRoomStartMatch(int32_t MatchType, int32_t MapID); // Function KxFramework.KxClientMatchService.CustomRoomStartMatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb070
	void ComfirmMatch(bool bComfirm, struct FString NickName); // Function KxFramework.KxClientMatchService.ComfirmMatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeab30
	void CancelMatch(); // Function KxFramework.KxClientMatchService.CancelMatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeaaf0
	void BanPick(enum class EBanPickOpType Type, int32_t pos, int32_t TargetId, bool bConfirmSelectRole); // Function KxFramework.KxClientMatchService.BanPick // (Final|Native|Public|BlueprintCallable) // @ game+0x1aea990
};

// Class KxFramework.KxDamageComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UKxDamageComponent : UActorComponent {
	float NearAttack; // 0xb0(0x04)
	float FarAttack; // 0xb4(0x04)
	float RealAttack; // 0xb8(0x04)
	float MissRatio; // 0xbc(0x04)
	float CritRatio; // 0xc0(0x04)
	float CritValue; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)

	void MulticastUnreliableEvent(struct FString Name); // Function KxFramework.KxDamageComponent.MulticastUnreliableEvent // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x1af2d10
	float AddRealAttackScale(float Value); // Function KxFramework.KxDamageComponent.AddRealAttackScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefe40
	void AddRealAttack(float Value); // Function KxFramework.KxDamageComponent.AddRealAttack // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefdc0
	float AddNearAttackScale(float Value); // Function KxFramework.KxDamageComponent.AddNearAttackScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefd20
	void AddNearAttack(float Value); // Function KxFramework.KxDamageComponent.AddNearAttack // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefca0
	void AddMissRatio(float Value); // Function KxFramework.KxDamageComponent.AddMissRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefc20
	float AddFarAttackScale(float Value); // Function KxFramework.KxDamageComponent.AddFarAttackScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefb80
	void AddFarAttack(float Value); // Function KxFramework.KxDamageComponent.AddFarAttack // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefb00
	void AddCritValue(float Value); // Function KxFramework.KxDamageComponent.AddCritValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefa80
	void AddCritRatio(float Value); // Function KxFramework.KxDamageComponent.AddCritRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x1aefa00
};

// Class KxFramework.KxDSMgrBase
// Size: 0x38 (Inherited: 0x30)
struct UKxDSMgrBase : UGameInstanceSubsystem {
	int32_t GameMatchType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	void OnLoadMapComplete(struct UWorld* CurMap); // Function KxFramework.KxDSMgrBase.OnLoadMapComplete // (Native|Public) // @ game+0x1af3260
};

// Class KxFramework.KxDSMgrGSE
// Size: 0x68e8 (Inherited: 0x38)
struct UKxDSMgrGSE : UKxDSMgrBase {
	char pad_38[0x148]; // 0x38(0x148)
	bool bStartSession; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FMulticastInlineDelegate OnStopSessionDelegate; // 0x188(0x10)
	char pad_198[0x6750]; // 0x198(0x6750)

	void WriteRedisLoop(); // Function KxFramework.KxDSMgrGSE.WriteRedisLoop // (Final|Native|Public) // @ game+0x1af3cf0
	void WriteDisConnectInfo(); // Function KxFramework.KxDSMgrGSE.WriteDisConnectInfo // (Final|Native|Public) // @ game+0x1af3cd0
	void SetRedisTimerKey(); // Function KxFramework.KxDSMgrGSE.SetRedisTimerKey // (Final|Native|Public) // @ game+0xbc9a40
	void ResetRedisHandle(); // Function KxFramework.KxDSMgrGSE.ResetRedisHandle // (Final|Native|Public) // @ game+0x1af3630
	void RedisPingLoop(); // Function KxFramework.KxDSMgrGSE.RedisPingLoop // (Final|Native|Public) // @ game+0x1af34f0
	void PingRedis(); // Function KxFramework.KxDSMgrGSE.PingRedis // (Final|Native|Public) // @ game+0x1af34d0
	void OnStopSession(); // Function KxFramework.KxDSMgrGSE.OnStopSession // (Final|Native|Protected|BlueprintCallable) // @ game+0x1af33e0
	void OnPlayerLogin(struct FString UID); // Function KxFramework.KxDSMgrGSE.OnPlayerLogin // (Final|Native|Public) // @ game+0x1af32f0
	void OnEndGame(); // Function KxFramework.KxDSMgrGSE.OnEndGame // (Final|Native|Public|BlueprintCallable) // @ game+0x1af3240
	int64_t GetRoomID(); // Function KxFramework.KxDSMgrGSE.GetRoomID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1600
	int32_t GetRedisPort(); // Function KxFramework.KxDSMgrGSE.GetRedisPort // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af15e0
	struct FString GetRedisListKey(); // Function KxFramework.KxDSMgrGSE.GetRedisListKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1520
	struct FString GetRedisIP(); // Function KxFramework.KxDSMgrGSE.GetRedisIP // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1460
	struct FString GetRedisAuthKey(); // Function KxFramework.KxDSMgrGSE.GetRedisAuthKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af13a0
	enum class EKxGameType GetGameType(); // Function KxFramework.KxDSMgrGSE.GetGameType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af0e50
	bool ConnectRedis(); // Function KxFramework.KxDSMgrGSE.ConnectRedis // (Final|Native|Public) // @ game+0x1af00b0
	void Boom(); // Function KxFramework.KxDSMgrGSE.Boom // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9a40
};

// Class KxFramework.KxPickupBase
// Size: 0x280 (Inherited: 0x220)
struct AKxPickupBase : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FKxItemData ItemData; // 0x228(0x20)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x248(0x08)
	bool bIsThrowItem; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct USceneComponent* RootCom; // 0x258(0x08)
	struct UStaticMeshComponent* SM_ModelCom; // 0x260(0x08)
	struct FMulticastInlineDelegate OninteractSucEvent; // 0x268(0x10)
	bool bGetItemUpData; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)

	void OnRep_ItemData(); // Function KxFramework.KxPickupBase.OnRep_ItemData // (Native|Event|Public|BlueprintEvent) // @ game+0x1a01de0
	void OnRep_IsThrowItem(); // Function KxFramework.KxPickupBase.OnRep_IsThrowItem // (Native|Event|Public|BlueprintEvent) // @ game+0xbdc270
	void MultiSetUIDisplayPos(struct FVector NewPos); // Function KxFramework.KxPickupBase.MultiSetUIDisplayPos // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x1b1ae90
	void MultiSetInteractBoxExtent(struct FVector NewPos, struct FVector NewBoxExtent); // Function KxFramework.KxPickupBase.MultiSetInteractBoxExtent // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x1b1ada0
};

// Class KxFramework.KxElevatorDoor
// Size: 0x280 (Inherited: 0x220)
struct AKxElevatorDoor : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	enum class EKxElevatorDoorState DoorState; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32_t Floor; // 0x22c(0x04)
	struct AKxElevator* Elevator; // 0x230(0x08)
	struct USceneComponent* RtCom; // 0x238(0x08)
	struct USceneComponent* ElevatorLoc; // 0x240(0x08)
	struct UStaticMeshComponent* LDoor; // 0x248(0x08)
	struct UStaticMeshComponent* RDoor; // 0x250(0x08)
	struct UKxInteractBoxComponent* InteractBoxCom; // 0x258(0x08)
	struct UBoxComponent* OverLapBox; // 0x260(0x08)
	struct TArray<struct ACharacter*> AllOverlapingChar; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)

	void OpenDoor(); // Function KxFramework.KxElevatorDoor.OpenDoor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a0ed00
	void OnBoxEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function KxFramework.KxElevatorDoor.OnBoxEndOverlap // (Final|Native|Protected) // @ game+0x1af30e0
	void OnBoxBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function KxFramework.KxElevatorDoor.OnBoxBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x1af2ed0
	void CloseDoor(); // Function KxFramework.KxElevatorDoor.CloseDoor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a01e00
	void CheckElevatorDoorSafe(); // Function KxFramework.KxElevatorDoor.CheckElevatorDoorSafe // (Native|Protected|BlueprintCallable) // @ game+0x1a01de0
};

// Class KxFramework.KxGameInstance
// Size: 0x1a8 (Inherited: 0x1a8)
struct UKxGameInstance : UGameInstance {

	void RemoveLoadingWidget(struct UUserWidget* Widget); // Function KxFramework.KxGameInstance.RemoveLoadingWidget // (Native|Public|BlueprintCallable) // @ game+0x1afc8c0
	void OnStartSession(); // Function KxFramework.KxGameInstance.OnStartSession // (Native|Event|Public|BlueprintEvent) // @ game+0x1afc7a0
	void OnMapLoadedBP(); // Function KxFramework.KxGameInstance.OnMapLoadedBP // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	struct UUserWidget* AddLoadingWidget(struct UUserWidget* Widget, int32_t ZOrder); // Function KxFramework.KxGameInstance.AddLoadingWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x1afaab0
};

// Class KxFramework.KxGameMode
// Size: 0x358 (Inherited: 0x2c0)
struct AKxGameMode : AGameModeBase {
	float WaitPlayerTime; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct AKxPlayerController*> AllPCs; // 0x2c8(0x10)
	char pad_2D8[0x50]; // 0x2d8(0x50)
	struct TArray<int32_t> GhostTeam; // 0x328(0x10)
	struct TArray<int32_t> HumanTeam; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
	struct UKxDSMgrGSE* GseMgr; // 0x350(0x08)

	int32_t GetMaxSpectatorNum(); // Function KxFramework.KxGameMode.GetMaxSpectatorNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb6d0
	int32_t GetMaxPlayerNum(); // Function KxFramework.KxGameMode.GetMaxPlayerNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb6a0
};

// Class KxFramework.KxGameState
// Size: 0x290 (Inherited: 0x270)
struct AKxGameState : AGameStateBase {
	int64_t RoomID; // 0x270(0x08)
	struct FMulticastInlineDelegate OnGameStateUpdated; // 0x278(0x10)
	enum class EKxGameStateType GameStateType; // 0x288(0x01)
	bool bReplicatedGameStateType; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)

	void SynGameStateType(enum class EKxGameStateType Type); // Function KxFramework.KxGameState.SynGameStateType // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x1afd1c0
	void SetGameStateType(enum class EKxGameStateType Type); // Function KxFramework.KxGameState.SetGameStateType // (Final|Native|Public|BlueprintCallable) // @ game+0x1afcd20
	void OnRep_RoomID(); // Function KxFramework.KxGameState.OnRep_RoomID // (Native|Event|Public|BlueprintEvent) // @ game+0xbc1bc0
	void OnRep_GameStateType(); // Function KxFramework.KxGameState.OnRep_GameStateType // (Native|Event|Protected|BlueprintEvent) // @ game+0x1afc780
	enum class EKxGameStateType GetGameStateType(); // Function KxFramework.KxGameState.GetGameStateType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afae60
};

// Class KxFramework.KxMovementComponent
// Size: 0xb50 (Inherited: 0xb00)
struct UKxMovementComponent : UCharacterMovementComponent {
	float MaxJogSpeed; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	float MaxSprintSpeed; // 0xb08(0x04)
	char pad_B0C[0x4]; // 0xb0c(0x04)
	struct FMulticastInlineDelegate OnSprintingUpdated; // 0xb10(0x10)
	char pad_B20[0x8]; // 0xb20(0x08)
	bool bWantsToSprint; // 0xb28(0x01)
	char pad_B29[0x3]; // 0xb29(0x03)
	float SprintDirectionTolerance; // 0xb2c(0x04)
	struct FMulticastInlineDelegate OnAimingUpdated; // 0xb30(0x10)
	bool bIsAiming; // 0xb40(0x01)
	char pad_B41[0xf]; // 0xb41(0x0f)

	void SetWantsToSprint(bool bSprinting); // Function KxFramework.KxMovementComponent.SetWantsToSprint // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1bdd0
	void SetIsBusy(bool bBusy); // Function KxFramework.KxMovementComponent.SetIsBusy // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1b830
	void SetGravityScale(float NewScale); // Function KxFramework.KxMovementComponent.SetGravityScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1b7b0
	void SetAiming(bool Is); // Function KxFramework.KxMovementComponent.SetAiming // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1b380
	void ServerSetAiming(bool Is); // Function KxFramework.KxMovementComponent.ServerSetAiming // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1b1b2c0
	void OnRep_IsAiming(); // Function KxFramework.KxMovementComponent.OnRep_IsAiming // (Final|Native|Private) // @ game+0x1b1af20
	bool IsSprinting(); // Function KxFramework.KxMovementComponent.IsSprinting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b1ac10
	bool IsMovingForward(); // Function KxFramework.KxMovementComponent.IsMovingForward // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b1abb0
	bool IsBusy(); // Function KxFramework.KxMovementComponent.IsBusy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b1ab50
	bool IsAiming(); // Function KxFramework.KxMovementComponent.IsAiming // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b1aaf0
	void DenySprint(); // Function KxFramework.KxMovementComponent.DenySprint // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1a1b0
};

// Class KxFramework.KxPlayerController
// Size: 0x598 (Inherited: 0x570)
struct AKxPlayerController : APlayerController {
	bool bPlayerWantExitMatch; // 0x570(0x01)
	char pad_571[0xf]; // 0x571(0x0f)
	struct UCameraComponent* DeathCamera; // 0x580(0x08)
	struct USpringArmComponent* CameraBoom; // 0x588(0x08)
	float LatestPawnYaw; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)

	void ServerExitMatch(); // Function KxFramework.KxPlayerController.ServerExitMatch // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1b1b270
	void SendGM(struct FString GMCommand); // Function KxFramework.KxPlayerController.SendGM // (Final|Exec|Native|Public) // @ game+0xbc9c10
	void OnNewPawn(struct APawn* InPawn); // Function KxFramework.KxPlayerController.OnNewPawn // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void GetPlayerViewPointBP(struct FVector out_Location, struct FRotator out_Rotation); // Function KxFramework.KxPlayerController.GetPlayerViewPointBP // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1b1a550
};

// Class KxFramework.KxPlayerState
// Size: 0x340 (Inherited: 0x320)
struct AKxPlayerState : APlayerState {
	int32_t UID; // 0x320(0x04)
	char pad_324[0x14]; // 0x324(0x14)
	int32_t CharacterID; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)

	void OnRep_UID(); // Function KxFramework.KxPlayerState.OnRep_UID // (Native|Event|Public|BlueprintEvent) // @ game+0x1b1afc0
};

// Class KxFramework.KxPCEventComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UKxPCEventComponent : UActorComponent {
};

// Class KxFramework.KxPSTeamComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UKxPSTeamComponent : UActorComponent {
	struct FMulticastInlineDelegate TeamChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate SquadChanged; // 0xc0(0x10)
	bool bAllowFriendlyFire; // 0xd0(0x01)
	struct FGenericTeamId TeamID; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	int32_t SquadID; // 0xd4(0x04)

	void SetTeam(struct FGenericTeamId NewTeamId); // Function KxFramework.KxPSTeamComponent.SetTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1bac0
	void SetSquad(int32_t NewSquadID); // Function KxFramework.KxPSTeamComponent.SetSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1ba00
	void OnRep_TeamId(); // Function KxFramework.KxPSTeamComponent.OnRep_TeamId // (Final|Native|Protected) // @ game+0x1b1af80
	void OnRep_SquadID(); // Function KxFramework.KxPSTeamComponent.OnRep_SquadID // (Final|Native|Protected) // @ game+0x1b1af40
	bool HasTeam(); // Function KxFramework.KxPSTeamComponent.HasTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b1a8b0
	bool HasSquad(); // Function KxFramework.KxPSTeamComponent.HasSquad // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b1a880
	struct FGenericTeamId GetTeam(); // Function KxFramework.KxPSTeamComponent.GetTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x102f2c0
	int32_t GetSquad(); // Function KxFramework.KxPSTeamComponent.GetSquad // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x101dd80
	bool CanDamage(struct FGenericTeamId OtherTeam); // Function KxFramework.KxPSTeamComponent.CanDamage // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b19d70
};

// Class KxFramework.Kx_PCLobby
// Size: 0x578 (Inherited: 0x570)
struct AKx_PCLobby : APlayerController {
	bool bUseFreeMic; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)

	void OnKeyBoardYPress(); // Function KxFramework.Kx_PCLobby.OnKeyBoardYPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1a32580
	void OnKeyBoardTRelease(); // Function KxFramework.Kx_PCLobby.OnKeyBoardTRelease // (Native|Event|Public|BlueprintEvent) // @ game+0x1ae5b70
	void OnKeyBoardTPress(); // Function KxFramework.Kx_PCLobby.OnKeyBoardTPress // (Native|Event|Public|BlueprintEvent) // @ game+0x1ae5b50
};

// Class KxFramework.KxAsyncFuncCaller
// Size: 0x50 (Inherited: 0x30)
struct UKxAsyncFuncCaller : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnComplete; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UKxAsyncFuncCaller* StartAsyncFunc(struct FString FuncName, struct UObject* Target); // Function KxFramework.KxAsyncFuncCaller.StartAsyncFunc // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ae6c70
};

// Class KxFramework.KxBuffComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UKxBuffComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddKxBuff; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnRemoveKxBuff; // 0xc0(0x10)
	struct UDataTable* BuffDataTable; // 0xd0(0x08)
	struct TArray<struct UKxBuffObject*> AllBuff; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)

	void RemoveBuffViaObj(struct UKxBuffObject* BuffObj); // Function KxFramework.KxBuffComponent.RemoveBuffViaObj // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5df0
	void RemoveBuff(struct FString BuffName); // Function KxFramework.KxBuffComponent.RemoveBuff // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5d00
	void OnRep_AllBuff(); // Function KxFramework.KxBuffComponent.OnRep_AllBuff // (Final|Native|Protected) // @ game+0x1ae5b90
	bool HasBuffByClass(struct UKxBuffObject* BuffClass); // Function KxFramework.KxBuffComponent.HasBuffByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5960
	void GetBuffByClass(struct UKxBuffObject* BuffClass, struct TArray<struct UKxBuffObject*> Buffs); // Function KxFramework.KxBuffComponent.GetBuffByClass // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ae4f50
	bool AddBuff(struct FString BuffName, struct TArray<float> BuffProperty, struct ACharacter* BuffInstigator, bool bTriggerOnAdd); // Function KxFramework.KxBuffComponent.AddBuff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ae4b20
};

// Class KxFramework.KxChatSubsystem
// Size: 0x60 (Inherited: 0x30)
struct UKxChatSubsystem : UGameInstanceSubsystem {
	struct TArray<struct FKxChatMessageInfor> MessagesArr; // 0x30(0x10)
	struct FString CurMessage; // 0x40(0x10)
	struct FMulticastInlineDelegate OnSendMessageDelegate; // 0x50(0x10)

	void HandleMessage(struct FKxChatMessageInfor MessageInfor, struct FString Message, struct FString PlayerConfigName, struct FText RemainingTime); // Function KxFramework.KxChatSubsystem.HandleMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1ae5670
};

// Class KxFramework.KxClientFriendService
// Size: 0x238 (Inherited: 0x30)
struct UKxClientFriendService : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnAddFriendRsp; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFriendReplyAddRequestRsp; // 0x48(0x10)
	struct FMulticastInlineDelegate OnDeleteFriendRsp; // 0x58(0x10)
	struct FMulticastInlineDelegate OnEditNicknameRsp; // 0x68(0x10)
	struct FMulticastInlineDelegate OnEditOnlinStateRsp; // 0x78(0x10)
	struct FMulticastInlineDelegate OnAccountDataUpdate; // 0x88(0x10)
	struct FMulticastInlineDelegate OnFriendListUpdate; // 0x98(0x10)
	struct FMulticastInlineDelegate OnFriendGroupListUpdate; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnFriendAddListUpdate; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnReciveFriendInvite; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnAddFriendGroupRsp; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnDeleteFriendGroupRsp; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnModifyFriendGroupRsp; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSendFriendMessageRsp; // 0x108(0x10)
	struct FMulticastInlineDelegate OnReciveFiendMessage; // 0x118(0x10)
	struct FMulticastInlineDelegate OnEditFriendGroupRsp; // 0x128(0x10)
	struct FMulticastInlineDelegate OnAddFriendRelationRsp; // 0x138(0x10)
	struct FMulticastInlineDelegate OnDeleteFriendRelationRsp; // 0x148(0x10)
	struct FMulticastInlineDelegate OnModifyFriendRelationRsp; // 0x158(0x10)
	struct FMulticastInlineDelegate OnReplyFriendRelationRsp; // 0x168(0x10)
	int64_t CurChatFriendUID; // 0x178(0x08)
	char pad_180[0xb8]; // 0x180(0xb8)

	void RequestSendFriendMessage(int64_t FriendUID, struct FString Msg); // Function KxFramework.KxClientFriendService.RequestSendFriendMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6a70
	void RequestReplyFriendRelationship(int64_t FriendUID, bool Agree, int32_t EventType); // Function KxFramework.KxClientFriendService.RequestReplyFriendRelationship // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6960
	void RequestModifyGroup(int32_t GroupID, struct FString NewGroupName); // Function KxFramework.KxClientFriendService.RequestModifyGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6840
	void RequestModifyFriendRelationship(int64_t FriendUID, enum class EKxFriendRelationship Relationship); // Function KxFramework.KxClientFriendService.RequestModifyFriendRelationship // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6770
	void RequestModifyFriendGroup(int64_t FriendUID, int32_t GroupID); // Function KxFramework.KxClientFriendService.RequestModifyFriendGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae66a0
	void RequestInviteFriend(int64_t FriendUID, struct FString NickName); // Function KxFramework.KxClientFriendService.RequestInviteFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6580
	void RequestEditOnlineState(enum class EKxOnlineState OnlineState); // Function KxFramework.KxClientFriendService.RequestEditOnlineState // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6500
	void RequestEditNickname(struct FString NickName); // Function KxFramework.KxClientFriendService.RequestEditNickname // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6410
	void RequestDeleteGroup(int32_t GroupID); // Function KxFramework.KxClientFriendService.RequestDeleteGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6380
	void RequestDeleteFriendRelationship(int64_t FriendUID); // Function KxFramework.KxClientFriendService.RequestDeleteFriendRelationship // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae62f0
	void RequestDeleteFriend(int64_t FriendUID); // Function KxFramework.KxClientFriendService.RequestDeleteFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6260
	void RequestAddFriendRelationship(int64_t FriendUID, enum class EKxFriendRelationship Relationship); // Function KxFramework.KxClientFriendService.RequestAddFriendRelationship // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6190
	void RequestAddFriendGroup(int64_t UID, struct FString GroupName); // Function KxFramework.KxClientFriendService.RequestAddFriendGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae6070
	void RequestAddFriend(int32_t GroupID, struct FString NickName); // Function KxFramework.KxClientFriendService.RequestAddFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5f50
	void ReplyFriendAddRequest(int64_t UID, bool bAgree); // Function KxFramework.KxClientFriendService.ReplyFriendAddRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5e80
	struct TArray<struct FKxFriendData> GetFriendList(); // Function KxFramework.KxClientFriendService.GetFriendList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae54d0
	struct TMap<int32_t, struct FString> GetFriendGroupMap(); // Function KxFramework.KxClientFriendService.GetFriendGroupMap // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5370
	struct TArray<struct FKxFriendData> GetFriendAddList(); // Function KxFramework.KxClientFriendService.GetFriendAddList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5230
	struct TArray<struct FKxChatMessage> GetChatMessages(); // Function KxFramework.KxClientFriendService.GetChatMessages // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae5060
	struct FKxAccountData GetAccountData(); // Function KxFramework.KxClientFriendService.GetAccountData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1ae4e20
};

// Class KxFramework.KxClientNetConnectService
// Size: 0x78 (Inherited: 0x30)
struct UKxClientNetConnectService : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	bool bIsFristOpenGame; // 0x40(0x01)
	bool bConnectLobbyServer; // 0x41(0x01)
	bool bConnectLoginServer; // 0x42(0x01)
	bool bLoginServerLoginSuc; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	struct FMulticastInlineDelegate OnConnectEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate OnDisconnectEvent; // 0x58(0x10)
	struct FMulticastInlineDelegate OnUserLoginRspEvent; // 0x68(0x10)

	void RequestLoginLoginServer(enum class EKxServerType ServerType, int64_t SteamID, struct FString Ticket, struct FString Key, struct FString Version); // Function KxFramework.KxClientNetConnectService.RequestLoginLoginServer // (Final|Native|Public|BlueprintCallable) // @ game+0x1aec240
	void RequestLobbyServer(enum class EKxServerType ServerType, int64_t UID, struct FString Key); // Function KxFramework.KxClientNetConnectService.RequestLobbyServer // (Final|Native|Public|BlueprintCallable) // @ game+0x1aec0d0
	int32_t OnServerTime(); // Function KxFramework.KxClientNetConnectService.OnServerTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1aec010
	bool GetLobbyIsConnect(); // Function KxFramework.KxClientNetConnectService.GetLobbyIsConnect // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb550
	int32_t GetCurrentPing(struct FString Server); // Function KxFramework.KxClientNetConnectService.GetCurrentPing // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb420
	int32_t GetAveragePing(struct FString Server); // Function KxFramework.KxClientNetConnectService.GetAveragePing // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb180
	void ConnectNetService(enum class EKxServerType ServerType, struct FString IP, int32_t Port, struct FString Key); // Function KxFramework.KxClientNetConnectService.ConnectNetService // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeac70
	void CleaningGME(); // Function KxFramework.KxClientNetConnectService.CleaningGME // (Final|Native|Protected|BlueprintCallable) // @ game+0x1aeab10
};

// Class KxFramework.KxClientPlatformConnectService
// Size: 0x78 (Inherited: 0x30)
struct UKxClientPlatformConnectService : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct FMulticastInlineDelegate OnConnected; // 0x40(0x10)
	struct FMulticastInlineDelegate OnDisConnected; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)

	struct FKxSellConfig GetSellConfigByID(int32_t PageIndex, int32_t ID); // Function KxFramework.KxClientPlatformConnectService.GetSellConfigByID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb660
	struct FKxBoxInfo GetBoxDataByID(int32_t ID); // Function KxFramework.KxClientPlatformConnectService.GetBoxDataByID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb2a0
	void ConnectPlatformNetService(enum class EKxServerType ServerType, struct FString IP, int32_t Port, struct FString Key); // Function KxFramework.KxClientPlatformConnectService.ConnectPlatformNetService // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeae70
};

// Class KxFramework.KxMarketBuy
// Size: 0x50 (Inherited: 0x30)
struct UKxMarketBuy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	struct UKxMarketBuy* RequestMarketBuy(int64_t SteamID, int32_t ConfigID); // Function KxFramework.KxMarketBuy.RequestMarketBuy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aec4d0
};

// Class KxFramework.KxMarketReplyBuy
// Size: 0x58 (Inherited: 0x30)
struct UKxMarketReplyBuy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	struct UKxMarketReplyBuy* RequestMarketReplyBuy(int64_t SteamID, int64_t OrderID, bool bConfirm); // Function KxFramework.KxMarketReplyBuy.RequestMarketReplyBuy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aec5f0
};

// Class KxFramework.KxClientSteamPayService
// Size: 0x40 (Inherited: 0x30)
struct UKxClientSteamPayService : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate FOnMarketBuy; // 0x30(0x10)
};

// Class KxFramework.KxClientTradeBankService
// Size: 0x110 (Inherited: 0x30)
struct UKxClientTradeBankService : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate ItemMarketUserInfoUpdate; // 0x38(0x10)
	struct FMulticastInlineDelegate ItemMarketSaleRsp; // 0x48(0x10)
	struct FMulticastInlineDelegate ItemMarketBuyRsp; // 0x58(0x10)
	struct FMulticastInlineDelegate ItemMarketOffSaleRsp; // 0x68(0x10)
	struct FMulticastInlineDelegate ItemMarketTradeRecordUpdate; // 0x78(0x10)
	struct FMulticastInlineDelegate ItemMarketBuyBoothRsp; // 0x88(0x10)
	struct FMulticastInlineDelegate ItemMarketSearchUpdate; // 0x98(0x10)
	struct FMulticastInlineDelegate SearchOutTime; // 0xa8(0x10)
	struct FItemMarketUserInfo CurrentUserInfo; // 0xb8(0x28)
	char pad_E0[0x30]; // 0xe0(0x30)

	struct TArray<struct FItemMarketProduct> SortProductList(struct TArray<struct FItemMarketProduct> inList, enum class ESortRole inRole, int32_t Num); // Function KxFramework.KxClientTradeBankService.SortProductList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1aec900
	void SaleItemReq(int32_t UID, int32_t Pid, int32_t Num, int32_t price, int32_t SaleTime); // Function KxFramework.KxClientTradeBankService.SaleItemReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aec760
	void OpenTradeBankReq(int32_t UID); // Function KxFramework.KxClientTradeBankService.OpenTradeBankReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aec040
	void OffSaleItemReq(int32_t UID, int32_t Tid); // Function KxFramework.KxClientTradeBankService.OffSaleItemReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aebbe0
	bool ItemMarketSearchOnSaleItem(int32_t UID, int32_t SymbolIndex, struct TArray<int32_t> PidList); // Function KxFramework.KxClientTradeBankService.ItemMarketSearchOnSaleItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeba60
	void ItemMarketGetTradeRecordReq(int32_t UID); // Function KxFramework.KxClientTradeBankService.ItemMarketGetTradeRecordReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb9d0
	void ItemMarketBuyItemReq(int32_t UID, int32_t Tid); // Function KxFramework.KxClientTradeBankService.ItemMarketBuyItemReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb900
	void ItemMarketAddBoothReq(int32_t UID, int32_t Num); // Function KxFramework.KxClientTradeBankService.ItemMarketAddBoothReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb830
	bool IsMoudleActive(); // Function KxFramework.KxClientTradeBankService.IsMoudleActive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xef7790
	float GetUserInfoCD(); // Function KxFramework.KxClientTradeBankService.GetUserInfoCD // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb600
	float GetSearchCD(); // Function KxFramework.KxClientTradeBankService.GetSearchCD // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb630
	float GetRecordCD(); // Function KxFramework.KxClientTradeBankService.GetRecordCD // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeb600
	void GetPlayerTradeBankInfoReq(int32_t UID); // Function KxFramework.KxClientTradeBankService.GetPlayerTradeBankInfoReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1aeb570
	struct FDateTime GetLastReqSearchTime(); // Function KxFramework.KxClientTradeBankService.GetLastReqSearchTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1aeb510
};

// Class KxFramework.KxConfig
// Size: 0x160 (Inherited: 0x28)
struct UKxConfig : UObject {
	SoftClassProperty DSMgrClass; // 0x28(0x28)
	struct TSoftObjectPtr<struct UDataTable> BuffDataTable; // 0x50(0x28)
	struct TSoftObjectPtr<struct UDataTable> ConsumableTable; // 0x78(0x28)
	struct TSoftObjectPtr<struct UDataTable> HumanTalentTable; // 0xa0(0x28)
	struct TSoftObjectPtr<struct UDataTable> GhostTalentTable; // 0xc8(0x28)
	struct FString FakeSteamID; // 0xf0(0x10)
	struct FString FakeWeGameID; // 0x100(0x10)
	struct TSoftObjectPtr<struct UDataTable> HumanActionSoundTable; // 0x110(0x28)
	struct TSoftObjectPtr<struct UDataTable> GhostActionSoundTable; // 0x138(0x28)
};

// Class KxFramework.KxDSMgrSpatialOS
// Size: 0x38 (Inherited: 0x38)
struct UKxDSMgrSpatialOS : UKxDSMgrBase {
};

// Class KxFramework.KxElevator
// Size: 0x278 (Inherited: 0x220)
struct AKxElevator : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct USceneComponent* RtCom; // 0x228(0x08)
	float Speed; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct AKxElevatorDoor*> AllDoor; // 0x238(0x10)
	struct TArray<int32_t> AllReqFloors; // 0x248(0x10)
	int32_t PressFloor; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct AKxElevatorDoor* CurFloor; // 0x260(0x08)
	struct AKxElevatorDoor* TargetFloor; // 0x268(0x08)
	char pad_270[0x8]; // 0x270(0x08)

	void ReqElevator(int32_t Floor); // Function KxFramework.KxElevator.ReqElevator // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1af35a0
	void RegistElevatorDoor(struct AKxElevatorDoor* Door); // Function KxFramework.KxElevator.RegistElevatorDoor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1af3510
	void OnMoveEnd(); // Function KxFramework.KxElevator.OnMoveEnd // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a0ed00
	void OnDoorClosed(); // Function KxFramework.KxElevator.OnDoorClosed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a01de0
	void MoveToFloor(int32_t TargetFloorNum); // Function KxFramework.KxElevator.MoveToFloor // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af2c80
	void ImmediateCalibrationPosition(struct FVector Location); // Function KxFramework.KxElevator.ImmediateCalibrationPosition // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x1af1d40
};

// Class KxFramework.KxFuckingDebug
// Size: 0x48 (Inherited: 0x30)
struct UKxFuckingDebug : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class KxFramework.KxFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKxFunctionLibrary : UBlueprintFunctionLibrary {

	bool WithEditor(); // Function KxFramework.KxFunctionLibrary.WithEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xef7790
	void TimerDynamicCaptureObjectDelegate__DelegateSignature(struct UObject* CaptureObject); // DelegateFunction KxFramework.KxFunctionLibrary.TimerDynamicCaptureObjectDelegate__DelegateSignature // (Public|Delegate) // @ game+0x1ec38f0
	int32_t SetSlotTrue(int32_t Origin, int32_t Slot); // Function KxFramework.KxFunctionLibrary.SetSlotTrue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af3c00
	int32_t SetSlotFalse(int32_t Origin, int32_t Slot); // Function KxFramework.KxFunctionLibrary.SetSlotFalse // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af3b30
	int32_t SetNumAt(int32_t Origin, int32_t Slot, int32_t Value); // Function KxFramework.KxFunctionLibrary.SetNumAt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af39b0
	void SetLevelTranf(struct FTransform Transf, struct FString LevelName); // Function KxFramework.KxFunctionLibrary.SetLevelTranf // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1af3830
	void RetriggerableDelayMax(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // Function KxFramework.KxFunctionLibrary.RetriggerableDelayMax // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af3650
	int64_t Percent_int64(int64_t A, int64_t B); // Function KxFramework.KxFunctionLibrary.Percent_int64 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af3400
	int64_t MurmurHash64B(struct FString str, int32_t Seed); // Function KxFramework.KxFunctionLibrary.MurmurHash64B // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af2db0
	void MinimizeGame(); // Function KxFramework.KxFunctionLibrary.MinimizeGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af2bd0
	struct UTexture2D* LoadTextureFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadTextureFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af2a80
	struct UStaticMesh* LoadStaticMeshFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadStaticMeshFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af2930
	struct USoundWave* LoadSoundWaveFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadSoundWaveFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af27e0
	struct USoundCue* LoadSoundCueFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadSoundCueFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af2690
	struct USkeletalMesh* LoadSkeletalMeshFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadSkeletalMeshFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af2540
	struct UParticleSystem* LoadParticleSystemFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadParticleSystemFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af23f0
	struct UMaterialInterface* LoadMatertialFromPath(struct FName Path); // Function KxFramework.KxFunctionLibrary.LoadMatertialFromPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1af22a0
	struct FTimerHandle K2_SetTimerCaptureDelegate(struct FDelegate Delegate, struct UObject* InObject, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // Function KxFramework.KxFunctionLibrary.K2_SetTimerCaptureDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af20b0
	bool IsSlotUsed(int32_t Origin, int32_t Slot); // Function KxFramework.KxFunctionLibrary.IsSlotUsed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1fe0
	bool IsRealGame(); // Function KxFramework.KxFunctionLibrary.IsRealGame // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1fb0
	bool IsAlphaNumeric(struct FString str); // Function KxFramework.KxFunctionLibrary.IsAlphaNumeric // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af1e90
	struct FDateTime IntToUTCTime(int32_t Time); // Function KxFramework.KxFunctionLibrary.IntToUTCTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1af1dd0
	int64_t GetWeGameID(); // Function KxFramework.KxFunctionLibrary.GetWeGameID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af16d0
	struct FString GetWebUrl(struct FString WebUrl, struct FString SteamID); // Function KxFramework.KxFunctionLibrary.GetWebUrl // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1700
	int32_t GetSystemTimeSecond(); // Function KxFramework.KxFunctionLibrary.GetSystemTimeSecond // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1af1650
	int64_t GetSteamID(); // Function KxFramework.KxFunctionLibrary.GetSteamID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1620
	struct FGenericTeamId GetPlayerTeamByActor(struct AActor* Actor); // Function KxFramework.KxFunctionLibrary.GetPlayerTeamByActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af12c0
	struct FString GetPlayerNameByActor(struct AActor* Actor); // Function KxFramework.KxFunctionLibrary.GetPlayerNameByActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1160
	int32_t GetNumAt(int32_t Origin, int32_t Slot); // Function KxFramework.KxFunctionLibrary.GetNumAt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af1050
	struct UKxLocalPlayer* GetLocalPlayerByController(struct APlayerController* PC); // Function KxFramework.KxFunctionLibrary.GetLocalPlayerByController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af0e70
	enum class EInputMode GetCurrentViewMode(struct APlayerController* PlayerController); // Function KxFramework.KxFunctionLibrary.GetCurrentViewMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af0c40
	struct FString EncryptData(struct FString RawData, struct FString Keys); // Function KxFramework.KxFunctionLibrary.EncryptData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af08d0
	struct FString DncryptData(struct FString Aes, struct FString Keys); // Function KxFramework.KxFunctionLibrary.DncryptData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af0270
	int64_t Conv_StringToInt64(struct FString inString); // Function KxFramework.KxFunctionLibrary.Conv_StringToInt64 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af01c0
	struct FString Conv_Int64ToString(int64_t inInt); // Function KxFramework.KxFunctionLibrary.Conv_Int64ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1af00e0
	int32_t CompareElement(int32_t A, int32_t B); // Function KxFramework.KxFunctionLibrary.CompareElement // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aeff70
	bool CameraShot(struct USceneCaptureComponent2D* CaptureComp); // Function KxFramework.KxFunctionLibrary.CameraShot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aefee0
};

// Class KxFramework.KxGameEngine
// Size: 0xe30 (Inherited: 0xe30)
struct UKxGameEngine : UGameEngine {
};

// Class KxFramework.KxGameProperty
// Size: 0x78 (Inherited: 0x28)
struct UKxGameProperty : UObject {
	char pad_28[0x50]; // 0x28(0x50)

	void SetSoundClassVolume(struct USoundClass* TargetClass, float NewVolume); // Function KxFramework.KxGameProperty.SetSoundClassVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1afcf00
	void SetPostProcessSettings(struct FString Variable, struct FString Value); // Function KxFramework.KxGameProperty.SetPostProcessSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1afcda0
	void RefreshData(struct TArray<struct FString> JsonFileList); // Function KxFramework.KxGameProperty.RefreshData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1afc7f0
	struct UKxGameProperty* Property(); // Function KxFramework.KxGameProperty.Property // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc7c0
	float GetSoundClassVolume(struct USoundClass* TargetClass); // Function KxFramework.KxGameProperty.GetSoundClassVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1afc340
	bool GetPropertyPure(struct FName Key, struct TArray<float> Data); // Function KxFramework.KxGameProperty.GetPropertyPure // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1afbe70
	bool GetPropertyIntByIndexPure(struct FName Key, int32_t Data, int32_t Index); // Function KxFramework.KxGameProperty.GetPropertyIntByIndexPure // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1afc090
	bool GetPropertyIntByIndex(struct FName Key, int32_t Data, int32_t Index); // Function KxFramework.KxGameProperty.GetPropertyIntByIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1afc090
	bool GetPropertyFloatByIndexPure(struct FName Key, float Data, int32_t Index); // Function KxFramework.KxGameProperty.GetPropertyFloatByIndexPure // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1afbf70
	bool GetPropertyFloatByIndex(struct FName Key, float Data, int32_t Index); // Function KxFramework.KxGameProperty.GetPropertyFloatByIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1afbf70
	bool GetProperty(struct FName Key, struct TArray<float> Data); // Function KxFramework.KxGameProperty.GetProperty // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1afbe70
	struct FString GetPostProcessSettings(struct FString Variable); // Function KxFramework.KxGameProperty.GetPostProcessSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1afbd60
};

// Class KxFramework.KxGMEController
// Size: 0xa0 (Inherited: 0x28)
struct UKxGMEController : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class KxFramework.KxGuildSerive
// Size: 0x528 (Inherited: 0x30)
struct UKxGuildSerive : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnGetGuildList; // 0x38(0x10)
	struct FMulticastInlineDelegate OnResetPag; // 0x48(0x10)
	struct FMulticastInlineDelegate CreateGuild; // 0x58(0x10)
	struct FMulticastInlineDelegate OnSearchGuild; // 0x68(0x10)
	struct FMulticastInlineDelegate GetApplyListSuccess; // 0x78(0x10)
	struct FMulticastInlineDelegate UpdateMeApplyGuildList; // 0x88(0x10)
	struct FMulticastInlineDelegate UpdateMembersList; // 0x98(0x10)
	struct FMulticastInlineDelegate OnGetMembersList; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnApplyPersonSuccess; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnAnswerApplyJoinGuild; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnAddGuildDuty; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnDelGuildDuty; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnModifyRightGuild; // 0xf8(0x10)
	struct FMulticastInlineDelegate ModifyDutyName; // 0x108(0x10)
	struct FMulticastInlineDelegate OnModifyDutyLevel; // 0x118(0x10)
	struct FMulticastInlineDelegate OnDemiseGuild; // 0x128(0x10)
	struct FMulticastInlineDelegate OnGrantGuild; // 0x138(0x10)
	struct FMulticastInlineDelegate OnExpelQuitGuild; // 0x148(0x10)
	struct FMulticastInlineDelegate OnQuitGuild; // 0x158(0x10)
	struct FMulticastInlineDelegate UpdateDutyList; // 0x168(0x10)
	struct FMulticastInlineDelegate OnModifyAnnouncementGuild; // 0x178(0x10)
	struct FMulticastInlineDelegate OnDismissGuild; // 0x188(0x10)
	struct FMulticastInlineDelegate OnModifyGuildName; // 0x198(0x10)
	struct FMulticastInlineDelegate OnUpgradeMemberMaxCount; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnDonate; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnGetSalary; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnUpdateSelfData; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnUpdateGuildBag; // 0x1e8(0x10)
	struct FMulticastInlineDelegate SetGuidJoinCondition; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnInviteJoinGuild; // 0x208(0x10)
	struct FMulticastInlineDelegate OnUpdateInviteGuildList; // 0x218(0x10)
	struct FMulticastInlineDelegate OnUpdateGuild; // 0x228(0x10)
	struct FMulticastInlineDelegate OnGuildSetSpoilsMgr; // 0x238(0x10)
	struct FMulticastInlineDelegate OnGuildRecordList; // 0x248(0x10)
	struct FMulticastInlineDelegate OnGuildDkpChange; // 0x258(0x10)
	struct FMulticastInlineDelegate OnGuildSendSpoils; // 0x268(0x10)
	struct FMulticastInlineDelegate OnUpdateShopInfo; // 0x278(0x10)
	struct FMulticastInlineDelegate OnGuildShopBuyItem; // 0x288(0x10)
	struct FMulticastInlineDelegate OnGuildDayMissionAward; // 0x298(0x10)
	struct FMulticastInlineDelegate OnAnswerInviteJoinGuild; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnGuildBuyRecomment; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnPlayerExit; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnUpdateRed; // 0x2d8(0x10)
	char pad_2E8[0x240]; // 0x2e8(0x240)

	void TryUpgradeMemberMaxCount(); // Function KxFramework.KxGuildSerive.TryUpgradeMemberMaxCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1afe510
	void TryUpgradeGuild(); // Function KxFramework.KxGuildSerive.TryUpgradeGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afe4f0
	void TrySetGuidJoinCondition(bool bCanJoin, int32_t minRankgrade, int32_t minRankLevel, int32_t MinLevel, struct FString Notice); // Function KxFramework.KxGuildSerive.TrySetGuidJoinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x1afe300
	void TryModifyGuildName(struct FString sNewName); // Function KxFramework.KxGuildSerive.TryModifyGuildName // (Final|Native|Public|BlueprintCallable) // @ game+0x1afe260
	void TryModifyGuildHeadIcon(int32_t nHeadIcon); // Function KxFramework.KxGuildSerive.TryModifyGuildHeadIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x1afe1d0
	void TryModifyDutyRightGuild(int32_t duty_id, enum class EGuildRightType nRight, bool bSet); // Function KxFramework.KxGuildSerive.TryModifyDutyRightGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afe0c0
	void TryModifyDutyName(int32_t duty_id, struct FString NewName); // Function KxFramework.KxGuildSerive.TryModifyDutyName // (Final|Native|Public|BlueprintCallable) // @ game+0x1afdfa0
	void TryModifyDutyLevel(int32_t duty_id, int64_t nNewLevel); // Function KxFramework.KxGuildSerive.TryModifyDutyLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1afded0
	void TryModifyAnnouncementGuild(struct FString sNewAnnouncement); // Function KxFramework.KxGuildSerive.TryModifyAnnouncementGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afde30
	void TryGuildShopBuyItem(int32_t tab_index, int32_t s_id, int32_t item_count); // Function KxFramework.KxGuildSerive.TryGuildShopBuyItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1afdd20
	void TryGuildSetSpoilsMgr(bool bSet, int32_t des_uid); // Function KxFramework.KxGuildSerive.TryGuildSetSpoilsMgr // (Final|Native|Public|BlueprintCallable) // @ game+0x1afdc50
	void TryGuildSendSpoils(int32_t des_uid, struct TMap<int32_t, int32_t> ItemMap); // Function KxFramework.KxGuildSerive.TryGuildSendSpoils // (Final|Native|Public|BlueprintCallable) // @ game+0x1afdb00
	void TryGetSalary(); // Function KxFramework.KxGuildSerive.TryGetSalary // (Final|Native|Public|BlueprintCallable) // @ game+0x1afdae0
	void TryGetGuildShop(int32_t tab_index); // Function KxFramework.KxGuildSerive.TryGetGuildShop // (Final|Native|Public|BlueprintCallable) // @ game+0x1afda50
	void TryGetGuildRecordList(struct TArray<enum class EGuildRecordType> recordTypeArray, int32_t nIndex, int32_t nSortType, bool bAsc, bool bManager, int32_t des_uid, int32_t nPageCount); // Function KxFramework.KxGuildSerive.TryGetGuildRecordList // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd7d0
	void TryGetGuildDayMissionAward(bool bDayMission, int32_t nMissionId); // Function KxFramework.KxGuildSerive.TryGetGuildDayMissionAward // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd700
	void TryDonate(int32_t nDonateNum, int32_t item_id); // Function KxFramework.KxGuildSerive.TryDonate // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd630
	void TryDismissGuild(); // Function KxFramework.KxGuildSerive.TryDismissGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd610
	void TryDemiseGuild(int32_t nPlayerDbid); // Function KxFramework.KxGuildSerive.TryDemiseGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd580
	void TryDelGuildDuty(int32_t duty_id); // Function KxFramework.KxGuildSerive.TryDelGuildDuty // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd4f0
	void TryCreateGuild(struct FString sGuildName); // Function KxFramework.KxGuildSerive.TryCreateGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd450
	void TryChangeGuildDkp(int32_t changeNum, int32_t des_uid, struct FString Desc); // Function KxFramework.KxGuildSerive.TryChangeGuildDkp // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd2e0
	void TryAddGuildDuty(struct FString sDutyName); // Function KxFramework.KxGuildSerive.TryAddGuildDuty // (Final|Native|Public|BlueprintCallable) // @ game+0x1afd240
	struct TArray<struct FRankNodeNew> SortRank(struct TArray<struct FRankNodeNew> RankArray); // Function KxFramework.KxGuildSerive.SortRank // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afcfc0
	void RequestThawGuild(); // Function KxFramework.KxGuildSerive.RequestThawGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afcd00
	void RequestQuitGuild(); // Function KxFramework.KxGuildSerive.RequestQuitGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afcce0
	void RequestJoinGuild(int32_t nGuildDbid, bool bApply); // Function KxFramework.KxGuildSerive.RequestJoinGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afcc10
	void RequestInviteJoinGuild(int32_t invited_uid); // Function KxFramework.KxGuildSerive.RequestInviteJoinGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afcb80
	void RequestGrantGuild(int32_t target_uid, int32_t duty_id); // Function KxFramework.KxGuildSerive.RequestGrantGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afcab0
	void RequestExpelQuitGuild(int32_t nPlayerDbid); // Function KxFramework.KxGuildSerive.RequestExpelQuitGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afca20
	void RequestAnswerInviteJoinGuild(int32_t inviter_uid, bool bAgree); // Function KxFramework.KxGuildSerive.RequestAnswerInviteJoinGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afc950
	bool IsGuidSpoilsManager(); // Function KxFramework.KxGuildSerive.IsGuidSpoilsManager // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc750
	bool IsGuidManager(); // Function KxFramework.KxGuildSerive.IsGuidManager // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc710
	bool HasDutyName(struct FString DutyName); // Function KxFramework.KxGuildSerive.HasDutyName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc620
	void GuildBuyRecomment(); // Function KxFramework.KxGuildSerive.GuildBuyRecomment // (Final|Native|Public|BlueprintCallable) // @ game+0x1afc600
	struct TArray<struct FGuildUserData> GetUserList(bool isOnline, enum class EGuildPersonSort PersonSort); // Function KxFramework.KxGuildSerive.GetUserList // (Final|Native|Public|BlueprintCallable) // @ game+0x1afc4e0
	struct FUserGuildApplyList GetUserGuildApplyList(); // Function KxFramework.KxGuildSerive.GetUserGuildApplyList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc410
	int32_t GetSpoilsMgrNumber(); // Function KxFramework.KxGuildSerive.GetSpoilsMgrNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc3f0
	int32_t GetSpoilMgrMaxNum(); // Function KxFramework.KxGuildSerive.GetSpoilMgrMaxNum // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc3d0
	int32_t GetShopItemMaxNumber(); // Function KxFramework.KxGuildSerive.GetShopItemMaxNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x10376a0
	struct FGuildShopItemInfoList GetShopItem(int32_t Page); // Function KxFramework.KxGuildSerive.GetShopItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc290
	struct FGuildMemberData GetSelfData(); // Function KxFramework.KxGuildSerive.GetSelfData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afc250
	void GetSearchGuild(struct FString skey); // Function KxFramework.KxGuildSerive.GetSearchGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afc1b0
	struct FText GetPositionName(int32_t DutyId); // Function KxFramework.KxGuildSerive.GetPositionName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afbc70
	int32_t GetPositionLevel(int32_t DutyId); // Function KxFramework.KxGuildSerive.GetPositionLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afbbd0
	struct FGuildUserData GetPlayerInfo(int32_t UID); // Function KxFramework.KxGuildSerive.GetPlayerInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb9b0
	int32_t GetOnlineNumber(); // Function KxFramework.KxGuildSerive.GetOnlineNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb990
	int32_t GetNextLevelActive(int32_t Level); // Function KxFramework.KxGuildSerive.GetNextLevelActive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb8f0
	int32_t GetMinRankLevel(); // Function KxFramework.KxGuildSerive.GetMinRankLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb8c0
	int32_t GetMinRankGrade(); // Function KxFramework.KxGuildSerive.GetMinRankGrade // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb890
	void GetMembersList(); // Function KxFramework.KxGuildSerive.GetMembersList // (Final|Native|Public|BlueprintCallable) // @ game+0x1afb870
	int32_t GetMemberMaxNumber(); // Function KxFramework.KxGuildSerive.GetMemberMaxNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb850
	int32_t GetMemberMaxLevel(); // Function KxFramework.KxGuildSerive.GetMemberMaxLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb830
	int32_t GetMember(int32_t Level); // Function KxFramework.KxGuildSerive.GetMember // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb790
	bool GetMeHavePermission(enum class EGuildRightType RightType); // Function KxFramework.KxGuildSerive.GetMeHavePermission // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb700
	int32_t GetMaxBagNumber(); // Function KxFramework.KxGuildSerive.GetMaxBagNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb680
	int32_t GetMaxActiveLevel(); // Function KxFramework.KxGuildSerive.GetMaxActiveLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb660
	int32_t GetLingbi(); // Function KxFramework.KxGuildSerive.GetLingbi // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x171e770
	int32_t GetLevelUpConsumptionLingBi(int32_t Level); // Function KxFramework.KxGuildSerive.GetLevelUpConsumptionLingBi // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb5c0
	int32_t GetLevelUpConsumptionGuBi(int32_t Level); // Function KxFramework.KxGuildSerive.GetLevelUpConsumptionGuBi // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb520
	struct FItemS GetItemS(int32_t Page); // Function KxFramework.KxGuildSerive.GetItemS // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb470
	bool GetHavePermission(int32_t DutyId, enum class EGuildRightType RightType); // Function KxFramework.KxGuildSerive.GetHavePermission // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb3a0
	bool GetHaveMissionCom(); // Function KxFramework.KxGuildSerive.GetHaveMissionCom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb370
	bool GetHaveApply(); // Function KxFramework.KxGuildSerive.GetHaveApply // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb320
	int32_t GetGuildMangerDutyId(); // Function KxFramework.KxGuildSerive.GetGuildMangerDutyId // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afb300
	void GetGuildListReq(int32_t nIndex, enum class EGuildListSort SortType, bool bAsc, int32_t MinLevel, int32_t MaxLevel, int32_t minCount, int32_t MaxCount, int32_t nPageCount, bool brecomment, bool bjoin_con); // Function KxFramework.KxGuildSerive.GetGuildListReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1afb010
	struct FGuildInviteRecordInfo GetGuildInviteRecord(); // Function KxFramework.KxGuildSerive.GetGuildInviteRecord // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afaf10
	struct FGuildInfo GetGuildInfo(); // Function KxFramework.KxGuildSerive.GetGuildInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afaeb0
	int32_t GetGubi(); // Function KxFramework.KxGuildSerive.GetGubi // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afae80
	struct TArray<struct FGuildDutyInfo> GetDutyList(); // Function KxFramework.KxGuildSerive.GetDutyList // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afade0
	int32_t GetCurLevelActive(int32_t Level); // Function KxFramework.KxGuildSerive.GetCurLevelActive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afad40
	int32_t GetCreateGuildConsumption(); // Function KxFramework.KxGuildSerive.GetCreateGuildConsumption // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afad10
	void GetApplyList(); // Function KxFramework.KxGuildSerive.GetApplyList // (Final|Native|Public|BlueprintCallable) // @ game+0x1afacf0
	bool CanModifyName(int32_t DutyId); // Function KxFramework.KxGuildSerive.CanModifyName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1afac50
	void ApplyJoinGuild(int32_t nGuildDbid, bool bAgree); // Function KxFramework.KxGuildSerive.ApplyJoinGuild // (Final|Native|Public|BlueprintCallable) // @ game+0x1afab80
};

// Class KxFramework.KxHealthComponent
// Size: 0x138 (Inherited: 0xb0)
struct UKxHealthComponent : UActorComponent {
	float AutoHealthRestore; // 0xb0(0x04)
	float AutoPowerRestore; // 0xb4(0x04)
	float PowerExpend; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FMulticastInlineDelegate HealthUpdatedOnAll; // 0xc0(0x10)
	struct FMulticastInlineDelegate ArmourUpdatedOnAll; // 0xd0(0x10)
	struct FMulticastInlineDelegate PowerUpdatedOnAll; // 0xe0(0x10)
	struct FMulticastInlineDelegate UnreliableEventOnAll; // 0xf0(0x10)
	struct FMulticastInlineDelegate KxReStore; // 0x100(0x10)
	float MaxHealth; // 0x110(0x04)
	float MaxArmour; // 0x114(0x04)
	float MaxPower; // 0x118(0x04)
	float CurrentHealth; // 0x11c(0x04)
	float CurrentArmour; // 0x120(0x04)
	float CurrentPower; // 0x124(0x04)
	float AvoidRatio; // 0x128(0x04)
	float ResistRatio; // 0x12c(0x04)
	float ResistValue; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)

	void Restore(); // Function KxFramework.KxHealthComponent.Restore // (Native|Protected) // @ game+0x1a24890
	void OnRep_MaxPower(float PreValue); // Function KxFramework.KxHealthComponent.OnRep_MaxPower // (Final|Native|Protected) // @ game+0x1b01ee0
	void OnRep_MaxHealth(float PreValue); // Function KxFramework.KxHealthComponent.OnRep_MaxHealth // (Final|Native|Protected) // @ game+0x1b01e60
	void OnRep_MaxArmour(float PreValue); // Function KxFramework.KxHealthComponent.OnRep_MaxArmour // (Final|Native|Protected) // @ game+0x1b01de0
	void OnRep_CurrentPower(float PreValue); // Function KxFramework.KxHealthComponent.OnRep_CurrentPower // (Final|Native|Protected) // @ game+0x1b01d60
	void OnRep_CurrentHealth(float PreValue); // Function KxFramework.KxHealthComponent.OnRep_CurrentHealth // (Final|Native|Protected) // @ game+0x1b01ce0
	void OnRep_CurrentArmour(float PreValue); // Function KxFramework.KxHealthComponent.OnRep_CurrentArmour // (Final|Native|Protected) // @ game+0x1b01c60
	void MulticastUnreliableEvent(struct FString Name); // Function KxFramework.KxHealthComponent.MulticastUnreliableEvent // (Net|Native|Event|NetMulticast|Protected) // @ game+0x1af2d10
	void MulticastDeath(struct APlayerState* Causer); // Function KxFramework.KxHealthComponent.MulticastDeath // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x1b01bd0
	float GetMaxPower(); // Function KxFramework.KxHealthComponent.GetMaxPower // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b01960
	float GetMaxHealth(); // Function KxFramework.KxHealthComponent.GetMaxHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b01940
	float GetMaxArmour(); // Function KxFramework.KxHealthComponent.GetMaxArmour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101df80
	float GetCurrentPower(); // Function KxFramework.KxHealthComponent.GetCurrentPower // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b01920
	float GetCurrentHealth(); // Function KxFramework.KxHealthComponent.GetCurrentHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b01900
	float GetCurrentArmour(); // Function KxFramework.KxHealthComponent.GetCurrentArmour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b018e0
	bool CanRestore(); // Function KxFramework.KxHealthComponent.CanRestore // (Native|Protected) // @ game+0x1b01690
	void AddResistValue(float Value); // Function KxFramework.KxHealthComponent.AddResistValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01610
	void AddResistRatio(float Value); // Function KxFramework.KxHealthComponent.AddResistRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01590
	void AddPower(float Value); // Function KxFramework.KxHealthComponent.AddPower // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01510
	void AddMaxPower(float Value); // Function KxFramework.KxHealthComponent.AddMaxPower // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01490
	void AddMaxHealth(float Value); // Function KxFramework.KxHealthComponent.AddMaxHealth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01410
	void AddMaxArmour(float Value); // Function KxFramework.KxHealthComponent.AddMaxArmour // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01390
	void AddHealth(float Value); // Function KxFramework.KxHealthComponent.AddHealth // (Native|Public|BlueprintCallable) // @ game+0x1a24c60
	void AddAvoidRatio(float Value); // Function KxFramework.KxHealthComponent.AddAvoidRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01310
	void AddArmour(float Value); // Function KxFramework.KxHealthComponent.AddArmour // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01290
};

// Class KxFramework.KxHomeSubSys
// Size: 0x208 (Inherited: 0x30)
struct UKxHomeSubSys : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FSelefHomeData HomeData; // 0x38(0x50)
	struct FMulticastInlineDelegate OnEnterFriendHome; // 0x88(0x10)
	struct FMulticastInlineDelegate OnFriendHomeUpdate; // 0x98(0x10)
	struct FMulticastInlineDelegate OnLeaveFriendHome; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnPlantEvent; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnPlantGetRewardEvent; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnWaterPlantEvent; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnDeletePlantEvent; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnAllGridInfoUpdateEvent; // 0xf8(0x10)
	struct TArray<struct FKxGridInfo> GridInfos; // 0x108(0x10)
	struct FMulticastInlineDelegate OnCompoundEvent; // 0x118(0x10)
	struct FMulticastInlineDelegate OnJianBaoGetRewardEvent; // 0x128(0x10)
	struct FMulticastInlineDelegate OnJianBaoStartedRspEvent; // 0x138(0x10)
	struct FMulticastInlineDelegate OnJianbaoUpgradeLeveRspEvent; // 0x148(0x10)
	struct FMulticastInlineDelegate OnJianBaoReduceTimeRspEvent; // 0x158(0x10)
	struct FMulticastInlineDelegate OnWaKuangGetRewardEvent; // 0x168(0x10)
	struct FMulticastInlineDelegate OnWaKuangGetLocEvent; // 0x178(0x10)
	struct FMulticastInlineDelegate OnWaKuangUpgradeLevelRspEvent; // 0x188(0x10)
	struct FMulticastInlineDelegate OnHomeDataUpdateRspEvent; // 0x198(0x10)
	struct FMulticastInlineDelegate OnPBHomeUpdateBagRspCmdEvent; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnMissionStateEvent; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnAcceptStateEvent; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnCompleteRewardEvent; // 0x1d8(0x10)
	struct TArray<struct FHomMissionState> HomeMissionStateList; // 0x1e8(0x10)
	struct TArray<struct FKxUserInfo> CurHomeUserInfos; // 0x1f8(0x10)

	void RequestWaterPlant(int32_t gridId); // Function KxFramework.KxHomeSubSys.RequestWaterPlant // (Final|Native|Public|BlueprintCallable) // @ game+0x1b024c0
	void RequestWaKuangUpgradelev(); // Function KxFramework.KxHomeSubSys.RequestWaKuangUpgradelev // (Final|Native|Public|BlueprintCallable) // @ game+0x1b024a0
	void RequestWaKuangLoc(); // Function KxFramework.KxHomeSubSys.RequestWaKuangLoc // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02480
	void RequestWaKuangGetReward(); // Function KxFramework.KxHomeSubSys.RequestWaKuangGetReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02460
	void RequestRemovePlant(int32_t gridId); // Function KxFramework.KxHomeSubSys.RequestRemovePlant // (Final|Native|Public|BlueprintCallable) // @ game+0x1b023d0
	void RequestPlantGetReward(int32_t gridId); // Function KxFramework.KxHomeSubSys.RequestPlantGetReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02340
	void RequestPlant(int32_t PlantID, int32_t gridId); // Function KxFramework.KxHomeSubSys.RequestPlant // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02270
	void RequestJianBaoUpgradeLev(); // Function KxFramework.KxHomeSubSys.RequestJianBaoUpgradeLev // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02250
	void RequestJianBaoStart(int32_t ItemId); // Function KxFramework.KxHomeSubSys.RequestJianBaoStart // (Final|Native|Public|BlueprintCallable) // @ game+0x1b021c0
	void RequestJianBaoReduceTime(); // Function KxFramework.KxHomeSubSys.RequestJianBaoReduceTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b021a0
	void RequestJianBaoGetReward(int32_t gridId); // Function KxFramework.KxHomeSubSys.RequestJianBaoGetReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02110
	void RequestCompound(int32_t RecipeID); // Function KxFramework.KxHomeSubSys.RequestCompound // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02080
	void RequestCompleteHomeMission(int32_t MissionID); // Function KxFramework.KxHomeSubSys.RequestCompleteHomeMission // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01ff0
	void RequestAcceptHomeMission(int32_t MissionID); // Function KxFramework.KxHomeSubSys.RequestAcceptHomeMission // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01f60
	void LeaveFriendHomeReq(); // Function KxFramework.KxHomeSubSys.LeaveFriendHomeReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01bb0
	void KickOutPlayer(int32_t UID); // Function KxFramework.KxHomeSubSys.KickOutPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1b01b20
	struct TArray<struct FKxPlantInfo> GetPlantInfoById(int32_t ID, bool bGet); // Function KxFramework.KxHomeSubSys.GetPlantInfoById // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b01980
	struct TArray<struct FKxUserInfo> GetCurHomeUserInfos(); // Function KxFramework.KxHomeSubSys.GetCurHomeUserInfos // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b01750
	void EnterFriendHomeReq(int32_t FriendID); // Function KxFramework.KxHomeSubSys.EnterFriendHomeReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1b016c0
};

// Class KxFramework.KxInteractBoxComponent
// Size: 0x520 (Inherited: 0x470)
struct UKxInteractBoxComponent : UBoxComponent {
	struct FText KeyText; // 0x468(0x18)
	bool bIsLookPlayer; // 0x480(0x01)
	struct FText DisplayText; // 0x488(0x18)
	bool bHumanVisible; // 0x4a0(0x01)
	bool bGhostVisible; // 0x4a1(0x01)
	char pad_4A3[0x1]; // 0x4a3(0x01)
	struct FVector DisplayLocation; // 0x4a4(0x0c)
	struct FMulticastInlineDelegate CreateCallBack; // 0x4b0(0x10)
	struct FMulticastInlineDelegate DeleteCallBack; // 0x4c0(0x10)
	int32_t OwnerID; // 0x4d0(0x04)
	int32_t InteractIndex; // 0x4d4(0x04)
	struct UUserWidget* InteractWidget; // 0x4d8(0x08)
	struct UObject* InteractPrefab; // 0x4e0(0x08)
	enum class EInteractType Type; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UUserWidget* ProgressWidget; // 0x4f0(0x08)
	bool bCanMultiInteract; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float InteractDistance; // 0x4fc(0x04)
	struct TArray<struct AActor*> AllInteractingCharacters; // 0x500(0x10)
	struct UUserWidget* InteractUI; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)

	void UpdateFocus(bool bIsFocus); // Function KxFramework.KxInteractBoxComponent.UpdateFocus // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b16c20
	void CallDeleteCallBack(); // Function KxFramework.KxInteractBoxComponent.CallDeleteCallBack // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11f20
	void CallCreateCallBack(); // Function KxFramework.KxInteractBoxComponent.CallCreateCallBack // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11f00
};

// Class KxFramework.KxInteractInterface
// Size: 0x28 (Inherited: 0x28)
struct UKxInteractInterface : UInterface {

	void OnStartInteract(struct ACharacter* InteractChar, int32_t InteractIndex); // Function KxFramework.KxInteractInterface.OnStartInteract // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b14380
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function KxFramework.KxInteractInterface.OnInteractTargetUpdate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b14220
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function KxFramework.KxInteractInterface.OnInteractSuc // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b14150
	void OnInteractFailed(struct ACharacter* InteractChar); // Function KxFramework.KxInteractInterface.OnInteractFailed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b140c0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function KxFramework.KxInteractInterface.GetInteractType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b12a30
	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function KxFramework.KxInteractInterface.CanInteract // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b11f40
};

// Class KxFramework.KxInventoryComponent
// Size: 0x188 (Inherited: 0xb0)
struct UKxInventoryComponent : UActorComponent {
	struct FMulticastInlineDelegate OnItemUpdate; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnElementItemUpdate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnEquipmentItemUpdate; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnOnThrowItem; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnItemActiveOrDeactiveEvent; // 0xf0(0x10)
	char pad_100[0x30]; // 0x100(0x30)
	struct AKxPickupBase* PickUpActorClass; // 0x130(0x08)
	struct UKxInventoryObject* SelectedPassiveEquipmentItem; // 0x138(0x08)
	struct UAnimMontage* ThrowItmeMontage; // 0x140(0x08)
	char pad_148[0x4]; // 0x148(0x04)
	int32_t MaxElentNum; // 0x14c(0x04)
	struct TArray<struct UKxInventoryObject*> AllItems; // 0x150(0x10)
	struct UKxInventoryObject* ActivedItem; // 0x160(0x08)
	struct TArray<struct UKxInventoryObject*> AllElementItem; // 0x168(0x10)
	struct UKxInventoryObject* AllEquipmentItem; // 0x178(0x08)
	struct AKxCharacter* KxCharacter; // 0x180(0x08)

	void UseItem(); // Function KxFramework.KxInventoryComponent.UseItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16cb0
	void ThrowItemWithOutActive(struct UKxInventoryObject* Item); // Function KxFramework.KxInventoryComponent.ThrowItemWithOutActive // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1b16830
	void ThrowItem(); // Function KxFramework.KxInventoryComponent.ThrowItem // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x1b167e0
	void SpawnPickActor(struct UKxInventoryObject* Item); // Function KxFramework.KxInventoryComponent.SpawnPickActor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1b164c0
	void SetSelectedPassiveEquipmentItem(struct UKxInventoryObject* New); // Function KxFramework.KxInventoryComponent.SetSelectedPassiveEquipmentItem // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1b16400
	void SetMaxElentNum(int32_t ElementNum); // Function KxFramework.KxInventoryComponent.SetMaxElentNum // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16370
	void RemoveItem(struct UKxInventoryObject* Item); // Function KxFramework.KxInventoryComponent.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14b20
	void OnRep_MaxElentNume(); // Function KxFramework.KxInventoryComponent.OnRep_MaxElentNume // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_AllItems(); // Function KxFramework.KxInventoryComponent.OnRep_AllItems // (Native|Event|Public|BlueprintEvent) // @ game+0x1a26350
	void OnRep_AllEquipmentItem(); // Function KxFramework.KxInventoryComponent.OnRep_AllEquipmentItem // (Native|Event|Public|BlueprintEvent) // @ game+0x1b14340
	void OnRep_AllElementItem(); // Function KxFramework.KxInventoryComponent.OnRep_AllElementItem // (Native|Event|Public|BlueprintEvent) // @ game+0x1a24890
	void OnRep_ActivedItems(struct UKxInventoryObject* LastActivedItem); // Function KxFramework.KxInventoryComponent.OnRep_ActivedItems // (Native|Event|Public|BlueprintEvent) // @ game+0x1a25010
	bool ItemsIsFull(); // Function KxFramework.KxInventoryComponent.ItemsIsFull // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b13af0
	int32_t GetMaxElentNum(); // Function KxFramework.KxInventoryComponent.GetMaxElentNum // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x1b12d00
	bool GetItemIndex(struct UKxInventoryObject* Item, int32_t Index); // Function KxFramework.KxInventoryComponent.GetItemIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b12c00
	struct UKxInventoryObject* GetEquipmentItem(); // Function KxFramework.KxInventoryComponent.GetEquipmentItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b128f0
	bool GetElmentIndex(struct UKxInventoryObject* Element, int32_t Index); // Function KxFramework.KxInventoryComponent.GetElmentIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b12810
	struct UKxInventoryObject* GetCurSelectedPassiveEquipmentItem(); // Function KxFramework.KxInventoryComponent.GetCurSelectedPassiveEquipmentItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x101dc90
	struct UKxInventoryObject* GetCurrentActivedItem(); // Function KxFramework.KxInventoryComponent.GetCurrentActivedItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b127e0
	struct UKxInventoryObject* GetCurActivedItem(); // Function KxFramework.KxInventoryComponent.GetCurActivedItem // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b127b0
	struct TArray<struct UKxInventoryObject*> GetAllItems(); // Function KxFramework.KxInventoryComponent.GetAllItems // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b12780
	struct TArray<struct UKxInventoryObject*> GetAllElementItems(); // Function KxFramework.KxInventoryComponent.GetAllElementItems // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b12750
	bool EquipmentIsFull(); // Function KxFramework.KxInventoryComponent.EquipmentIsFull // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b12700
	bool DecreaseItem(struct UKxInventoryObject* Item, float Durability, float Value); // Function KxFramework.KxInventoryComponent.DecreaseItem // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b125c0
	bool DecreaseActiveItem(float Value); // Function KxFramework.KxInventoryComponent.DecreaseActiveItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1b12530
	void DeactiveItem(struct UKxInventoryObject* Item); // Function KxFramework.KxInventoryComponent.DeactiveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12400
	void ChangeItemPos(int32_t CurItemIndex, int32_t NewIndex); // Function KxFramework.KxInventoryComponent.ChangeItemPos // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12260
	bool CanPickUpElement(); // Function KxFramework.KxInventoryComponent.CanPickUpElement // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b12010
	struct UKxInventoryObject* AddItem(struct FKxItemData NewItemData); // Function KxFramework.KxInventoryComponent.AddItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1b11d10
	void ActiveItem(struct UKxInventoryObject* Item); // Function KxFramework.KxInventoryComponent.ActiveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11c80
	void ActicveOnNovice(struct UKxInventoryObject* LastActivedItem); // Function KxFramework.KxInventoryComponent.ActicveOnNovice // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11bc0
};

// Class KxFramework.KxJsonAnalysisExtend
// Size: 0x28 (Inherited: 0x28)
struct UKxJsonAnalysisExtend : UObject {

	struct TMap<struct FString, int32_t> JsonAnalysisMap(struct FString JsonStr, struct FString RawName); // Function KxFramework.KxJsonAnalysisExtend.JsonAnalysisMap // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b13b20
};

// Class KxFramework.KxLobbyService
// Size: 0x1200 (Inherited: 0x30)
struct UKxLobbyService : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnItemUpdate; // 0x38(0x10)
	struct FMulticastInlineDelegate OnHumanConfigUpdate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnGhostConfigUpdate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnMailInfoUpdate; // 0x68(0x10)
	struct FMulticastInlineDelegate OnCoinUpdate; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMisssionUpdate; // 0x88(0x10)
	struct FMulticastInlineDelegate OnOneSelfInfo; // 0x98(0x10)
	struct FMulticastInlineDelegate OnAllUserServerData; // 0xa8(0x10)
	struct FMulticastInlineDelegate NoviceMissionUpdate; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnUserSkinUpdate; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnShopBuyRep; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnGameDataSeasonUpdate; // 0xe8(0x10)
	struct FItemDataInfo TreasureBoxDataInfo; // 0xf8(0x10)
	struct FItemDataInfo PureTreasureBoxDataInfo; // 0x108(0x10)
	struct FItemDataInfo PureTreasureGiftDataInfo; // 0x118(0x10)
	struct FItemDataInfo GiftDataInfo; // 0x128(0x10)
	struct TArray<struct FPBNewHandMissionData> TreasureBoxMissionDataInfo; // 0x138(0x10)
	struct TMap<int32_t, struct FIncTreasureBoxData> IncTreasureBoxDataInfos; // 0x148(0x50)
	struct FMulticastInlineDelegate OnIncTreasureBoxDataInfo; // 0x198(0x10)
	struct FMulticastInlineDelegate OnTreasureBoxMissionDataUpdateEvent; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnTreasureBoxDataUpdataEvent; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnTreasureBoxOpenResultEvent; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnNoviceTimeLimitUpdateEvent; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnGrowFundUpdateEvent; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnBattleResultList; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnBattleSingleList; // 0x208(0x10)
	struct FMulticastInlineDelegate OnItemDecomposeStateUpdate; // 0x218(0x10)
	struct FMulticastInlineDelegate OnSendItemStateUpdate; // 0x228(0x10)
	struct FMulticastInlineDelegate OnShopBuyStateUpdate; // 0x238(0x10)
	struct FMulticastInlineDelegate OnGetSeasonPassRewardResult; // 0x248(0x10)
	struct FMulticastInlineDelegate OnBuySeasonPassResult; // 0x258(0x10)
	struct FMulticastInlineDelegate OnServerFaceReturn; // 0x268(0x10)
	struct FString BeginCheckURL; // 0x278(0x10)
	int32_t MaxCheckNum; // 0x288(0x04)
	int32_t CurrentCheckNum; // 0x28c(0x04)
	struct FString ServerListUrl; // 0x290(0x10)
	struct FString ServerUrl; // 0x2a0(0x10)
	struct FServerrootInfor ServerInfo; // 0x2b0(0xa0)
	struct FMulticastInlineDelegate OnCompleteGetServerInfor; // 0x350(0x10)
	struct FMulticastInlineDelegate OnTestString; // 0x360(0x10)
	struct FMulticastInlineDelegate OnSignReturn; // 0x370(0x10)
	struct FMulticastInlineDelegate OnSignRewardReturn; // 0x380(0x10)
	struct FMulticastInlineDelegate OnSignDataUpdate; // 0x390(0x10)
	struct FSignedDateInfo SignData; // 0x3a0(0x28)
	struct FDailyMissionList DailyMissionData; // 0x3c8(0x68)
	struct FMulticastInlineDelegate OnDailyMissionDataUpdate; // 0x430(0x10)
	struct FMulticastInlineDelegate OnMissionRewardReturn; // 0x440(0x10)
	struct FMulticastInlineDelegate OnErroTextRsp; // 0x450(0x10)
	struct FMulticastInlineDelegate OnBuyTimeLimitGift; // 0x460(0x10)
	struct FMulticastInlineDelegate OnBuyFund; // 0x470(0x10)
	struct FMulticastInlineDelegate OnGetOldUserRsq; // 0x480(0x10)
	struct FMulticastInlineDelegate OnLoginRewardRsq; // 0x490(0x10)
	struct FMulticastInlineDelegate OnSetPersonInfoRsq; // 0x4a0(0x10)
	struct TArray<struct FHicn> headicon; // 0x4b0(0x10)
	struct TArray<struct FHicn> Newheadicon; // 0x4c0(0x10)
	struct Fsevenrewrad SevenloginRewards; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnHumanRanks; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnGhostRanks; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnMarketRank; // 0x500(0x10)
	struct FMulticastInlineDelegate OnGuildRank; // 0x510(0x10)
	struct FPBRankS PBRankS; // 0x520(0x108)
	struct FGameLevelRank GhostRanksInfo; // 0x628(0x48)
	struct FGameLevelRank HumanRanksInfo; // 0x670(0x48)
	struct FGameMarketRank GameMarketRank; // 0x6b8(0x38)
	struct FGameGuildRank GameGuildRank; // 0x6f0(0x38)
	struct FMulticastInlineDelegate OnUseCDKeyEvent; // 0x728(0x10)
	struct TArray<struct FIntimacyAward> IntimacyAward; // 0x738(0x10)
	struct FMulticastInlineDelegate OnRoleIntimacyReward; // 0x748(0x10)
	struct FMulticastInlineDelegate OnInviteRspEvent; // 0x758(0x10)
	struct FMulticastInlineDelegate OnLeaveTeamRspEvent; // 0x768(0x10)
	struct FMulticastInlineDelegate OnKickOutRspEvent; // 0x778(0x10)
	struct FMulticastInlineDelegate OnCreateTeamRspEvent; // 0x788(0x10)
	struct FMulticastInlineDelegate OnTeamInfoUpdate; // 0x798(0x10)
	struct FMulticastInlineDelegate OnJoinTeamRspEvent; // 0x7a8(0x10)
	struct FMulticastInlineDelegate OnReceiveInvitationEvent; // 0x7b8(0x10)
	struct FMulticastInlineDelegate CreateCustomBack; // 0x7c8(0x10)
	struct FMulticastInlineDelegate JoinCustomRoomBack; // 0x7d8(0x10)
	struct FMulticastInlineDelegate LeaveCustomRoomBack; // 0x7e8(0x10)
	struct FMulticastInlineDelegate CustomKickoutBack; // 0x7f8(0x10)
	struct FMulticastInlineDelegate CustomChangePosBack; // 0x808(0x10)
	struct FMulticastInlineDelegate CustomRoomUpdateBack; // 0x818(0x10)
	struct FMulticastInlineDelegate OnShowItemListEvent; // 0x828(0x10)
	struct FMulticastInlineDelegate OnReciveChatMessage; // 0x838(0x10)
	struct FMulticastInlineDelegate OnGetMarketReward; // 0x848(0x10)
	struct FMulticastInlineDelegate OnTakeMatketReward; // 0x858(0x10)
	int32_t UID; // 0x868(0x04)
	char pad_86C[0x4]; // 0x86c(0x04)
	uint64_t VoiceRoomID; // 0x870(0x08)
	struct FGameDataSeason GameDataSeason; // 0x878(0x28)
	struct FPBMailS MailInfo; // 0x8a0(0x10)
	struct FUserGameBaseData PlayerLoginData; // 0x8b0(0x1e0)
	struct FUserGameBaseData UserGameBaseData; // 0xa90(0x1e0)
	struct FUserGameServerData UserGameServerData; // 0xc70(0x1c8)
	struct FPBGrowFundData GrowFundData; // 0xe38(0x18)
	struct FNoviceTimeLimitData NoviceTimeLimitData; // 0xe50(0x20)
	struct FPBNoviceMissionData NoviceMissionData; // 0xe70(0x20)
	struct TArray<struct FUserSkinData> UserSkinDatas; // 0xe90(0x10)
	struct TArray<struct FUserGhostData> UserGhostDatas; // 0xea0(0x10)
	struct TArray<struct FUserHumanData> UserHumanDatas; // 0xeb0(0x10)
	struct TMap<int32_t, int64_t> ItemCountMap; // 0xec0(0x50)
	struct TMap<int32_t, int32_t> CoinCountMap; // 0xf10(0x50)
	struct TMap<int32_t, struct FUserHumanData> HumanConfigMap; // 0xf60(0x50)
	struct TMap<int32_t, struct FUserGhostData> GhostConfigMap; // 0xfb0(0x50)
	struct TMap<int32_t, struct FItemConfigData> ItemConfigMap; // 0x1000(0x50)
	struct TMap<int32_t, struct FSkinConfigData> SkinConfigMap; // 0x1050(0x50)
	struct TMap<int32_t, struct FUserSocialData> SocialConfigMap; // 0x10a0(0x50)
	struct FKxTeamInfo TeamInfo; // 0x10f0(0x30)
	struct FCustomRoomInfo CustomTeamInfo; // 0x1120(0x38)
	struct TArray<struct FLobbyChatMessageList> ChatMessages; // 0x1158(0x10)
	char pad_1168[0x30]; // 0x1168(0x30)
	struct FDateTime LastGetMatketTime; // 0x1198(0x08)
	struct TMap<int32_t, struct FNOS_XingTi_AllSaveData> AllXingTiData; // 0x11a0(0x50)
	char pad_11F0[0x10]; // 0x11f0(0x10)

	void TrySignIn(); // Function KxFramework.KxLobbyService.TrySignIn // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16c00
	void TrySetPersonInfo(enum class EPersonInfoType DataType, struct FString ModifyInfo); // Function KxFramework.KxLobbyService.TrySetPersonInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16ae0
	void TryGetSignReward(int32_t award_index); // Function KxFramework.KxLobbyService.TryGetSignReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16a50
	void TryGetSevenDayReward(int32_t RewardID); // Function KxFramework.KxLobbyService.TryGetSevenDayReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b169c0
	void TryGetDailyMissionReward(bool full_recive, int32_t score); // Function KxFramework.KxLobbyService.TryGetDailyMissionReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b168f0
	void TestString(int32_t ID, struct FString TString); // Function KxFramework.KxLobbyService.TestString // (Final|Native|Public|BlueprintCallable) // @ game+0x1b166c0
	void TakeMatketReward(struct TArray<int32_t> take_today_reward_ids, struct TArray<int32_t> take_reward_ids); // Function KxFramework.KxLobbyService.TakeMatketReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16550
	void SendNicknameToLobby(struct FString NickName); // Function KxFramework.KxLobbyService.SendNicknameToLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16280
	void SendGM(struct FString GMCommand); // Function KxFramework.KxLobbyService.SendGM // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9c10
	void SendFaceDataToServer(struct FServerFaceCustomData faceData); // Function KxFramework.KxLobbyService.SendFaceDataToServer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b16160
	void RequestUserItem(int32_t ItemIndex, int32_t Num); // Function KxFramework.KxLobbyService.RequestUserItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b158e0
	void RequestUseCDKey(struct FString CDKey); // Function KxFramework.KxLobbyService.RequestUseCDKey // (Final|Native|Public|BlueprintCallable) // @ game+0x1b16070
	void RequestShopListBuy(struct TArray<struct FShopBuyItem> _ShopBuyDatas); // Function KxFramework.KxLobbyService.RequestShopListBuy // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15f80
	void RequestSeverRank(int32_t RankType, int32_t DataIndex); // Function KxFramework.KxLobbyService.RequestSeverRank // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15eb0
	void RequestSendItem(int32_t TargetUID, int32_t ContentID, struct TMap<int32_t, int32_t> inSendList); // Function KxFramework.KxLobbyService.RequestSendItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15d20
	void RequestSendChatMessage(enum class EChatChannelType Channel, struct FString Msg); // Function KxFramework.KxLobbyService.RequestSendChatMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15c00
	void RequestSaveRoleSkinList(struct TMap<int32_t, struct FTagSaveRoleSkin> _SaveRoleSkinDatas); // Function KxFramework.KxLobbyService.RequestSaveRoleSkinList // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15ad0
	void RequestReciveMail(int64_t mail_id); // Function KxFramework.KxLobbyService.RequestReciveMail // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15a40
	void RequestReadMail(int64_t mail_id); // Function KxFramework.KxLobbyService.RequestReadMail // (Final|Native|Public|BlueprintCallable) // @ game+0x1b159b0
	void RequestOpenTreasureBox(int32_t ItemIndex, int32_t Num); // Function KxFramework.KxLobbyService.RequestOpenTreasureBox // (Final|Native|Public|BlueprintCallable) // @ game+0x1b158e0
	void RequestLeaveTeam(); // Function KxFramework.KxLobbyService.RequestLeaveTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1b158c0
	void RequestLeaveCustomRoom(struct FString RoomID); // Function KxFramework.KxLobbyService.RequestLeaveCustomRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b157d0
	void RequestKickoutTeammate(int32_t KickOutUID); // Function KxFramework.KxLobbyService.RequestKickoutTeammate // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15740
	void RequestJoinTeam(int32_t InviteUID, int32_t TeamID); // Function KxFramework.KxLobbyService.RequestJoinTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15670
	void RequestJoinCustomRoom(struct FString ThisUID, struct FString RoomID); // Function KxFramework.KxLobbyService.RequestJoinCustomRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15500
	void RequestInvite(int64_t InviteUID, enum class EInviteType TeamType); // Function KxFramework.KxLobbyService.RequestInvite // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15430
	void RequestGetRewardOfTreasureMission(int32_t MissionID); // Function KxFramework.KxLobbyService.RequestGetRewardOfTreasureMission // (Final|Native|Public|BlueprintCallable) // @ game+0x1b153a0
	void RequestDelMail(int64_t mail_id); // Function KxFramework.KxLobbyService.RequestDelMail // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15310
	void RequestDecomposeItem(int32_t ItemIndex, int32_t Num); // Function KxFramework.KxLobbyService.RequestDecomposeItem // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15240
	void RequestCustomRoomMasterChangePos(int32_t WhoUID, int32_t NewPos, struct FString RoomID); // Function KxFramework.KxLobbyService.RequestCustomRoomMasterChangePos // (Final|Native|Public|BlueprintCallable) // @ game+0x1b150d0
	void RequestCustomRoomMasterChangeMap(int32_t MapID); // Function KxFramework.KxLobbyService.RequestCustomRoomMasterChangeMap // (Final|Native|Public|BlueprintCallable) // @ game+0x1b15040
	void RequestCustomRoomKickout(int32_t TargetUID); // Function KxFramework.KxLobbyService.RequestCustomRoomKickout // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14fb0
	void RequestCustomRoomChangePos(int32_t NewPos, struct FString RoomID); // Function KxFramework.KxLobbyService.RequestCustomRoomChangePos // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14e90
	void RequestCreateTeam(int32_t MatchType); // Function KxFramework.KxLobbyService.RequestCreateTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14e00
	void RequestCreateCustomRoom(int32_t MatchType); // Function KxFramework.KxLobbyService.RequestCreateCustomRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14d70
	void RequestBattleReport(int64_t RoomID, int64_t reportTime, int32_t preCount, int32_t nextCount, int32_t singleReport); // Function KxFramework.KxLobbyService.RequestBattleReport // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14bd0
	void RefreshSeasonPassTask_Request(); // Function KxFramework.KxLobbyService.RefreshSeasonPassTask_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14b00
	void ReciveTimeLimit_Request(int32_t mission_id); // Function KxFramework.KxLobbyService.ReciveTimeLimit_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14a70
	void ReciveOldUserGift_Request(int32_t nRewardId); // Function KxFramework.KxLobbyService.ReciveOldUserGift_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b149e0
	void ReciveNoviceMission_Request(int32_t mission_id); // Function KxFramework.KxLobbyService.ReciveNoviceMission_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b14950
	void ReciveGrowthFund_Request(int32_t award_id); // Function KxFramework.KxLobbyService.ReciveGrowthFund_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b148c0
	void RandomGetTaskTypeAndTasks(int32_t Type, struct TMap<int32_t, struct FSeasonPassTaskConfig> Lv1TaskList, struct TMap<int32_t, struct FSeasonPassTaskConfig> Lv2TaskList, struct TMap<int32_t, struct FSeasonPassTaskConfig> Lv3TaskList, float Bonus); // Function KxFramework.KxLobbyService.RandomGetTaskTypeAndTasks // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b14580
	void OnUpdateIncTreasureBoxData(int32_t ID, struct FIncTreasureBoxData Data); // Function KxFramework.KxLobbyService.OnUpdateIncTreasureBoxData // (Final|Native|Public) // @ game+0x1b14450
	void OnExitLobbyRoom(int32_t Result, struct FString ErrorInfo); // Function KxFramework.KxLobbyService.OnExitLobbyRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b13fa0
	void OnEnterLobbyRoom(int32_t Result, struct FString ErrorInfo); // Function KxFramework.KxLobbyService.OnEnterLobbyRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b13e80
	void OnDisConnectLobbyRoom(int32_t Result, struct FString ErrorInfo); // Function KxFramework.KxLobbyService.OnDisConnectLobbyRoom // (Final|Native|Public) // @ game+0x1b13d60
	enum class ERoomType IsInRoom(); // Function KxFramework.KxLobbyService.IsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b13a90
	void HttpGetViersion(struct FString URL); // Function KxFramework.KxLobbyService.HttpGetViersion // (Final|Native|Public|BlueprintCallable) // @ game+0x1b139a0
	void HttpGetServerUrl(struct FString HttpUrl); // Function KxFramework.KxLobbyService.HttpGetServerUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x1b138b0
	void HttpGetServerLst(struct FString HttpUrl); // Function KxFramework.KxLobbyService.HttpGetServerLst // (Final|Native|Public|BlueprintCallable) // @ game+0x1b137c0
	int32_t GetUID(); // Function KxFramework.KxLobbyService.GetUID // (Final|Native|Public) // @ game+0x1b137a0
	struct FTakedMatketRewardStr GetTakeMatketRewardstr(); // Function KxFramework.KxLobbyService.GetTakeMatketRewardstr // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b13660
	struct TArray<struct FSkinConfigData> GetSkinCanUseSortArray(bool Reversed); // Function KxFramework.KxLobbyService.GetSkinCanUseSortArray // (Final|Native|Public|BlueprintCallable) // @ game+0x1b13570
	void GetSeasonPassReward_Request(int32_t RewardType, int32_t Lv); // Function KxFramework.KxLobbyService.GetSeasonPassReward_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b134a0
	void GetSeasonPassLvReward(int32_t Lv, struct FSeasonPassLvReward Common, struct FSeasonPassLvReward Luxury, struct FSeasonPassLvReward Up); // Function KxFramework.KxLobbyService.GetSeasonPassLvReward // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b131f0
	void GetSeasonPassBuyPrice(struct FSeasonPassLvReward ID1Common, struct FSeasonPassLvReward ID2Luxury, struct FSeasonPassLvReward ID3Lv1, struct FSeasonPassLvReward ID4Lv5, struct FSeasonPassLvReward ID5Lv10); // Function KxFramework.KxLobbyService.GetSeasonPassBuyPrice // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b12df0
	void GetRoleIntimacyRewardReq(int32_t Roleld, int32_t Rewardld); // Function KxFramework.KxLobbyService.GetRoleIntimacyRewardReq // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12d20
	void GetMarketReward(); // Function KxFramework.KxLobbyService.GetMarketReward // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12ce0
	struct TArray<struct FItemConfigData> GetItemCanUseConfigArray(int32_t Type); // Function KxFramework.KxLobbyService.GetItemCanUseConfigArray // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12b20
	void GetIntimacyNeedAward(); // Function KxFramework.KxLobbyService.GetIntimacyNeedAward // (Final|Native|Public) // @ game+0x1b12b00
	struct TMap<int32_t, struct FIncTreasureBoxData> GetIncTreasureBoxDataInfos(); // Function KxFramework.KxLobbyService.GetIncTreasureBoxDataInfos // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12910
	void ExitLobbyRoom(); // Function KxFramework.KxLobbyService.ExitLobbyRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12730
	void EnterLobbyRoom(); // Function KxFramework.KxLobbyService.EnterLobbyRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x1b126e0
	void ChangeTeamState(int32_t status); // Function KxFramework.KxLobbyService.ChangeTeamState // (Final|Native|Public|BlueprintCallable) // @ game+0x1b12330
	bool CanRequestSendGift(int32_t LeftTime, char Day, char Hour, char Min, char Sec); // Function KxFramework.KxLobbyService.CanRequestSendGift // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1b12040
	void BuyTimeLimit_Request(); // Function KxFramework.KxLobbyService.BuyTimeLimit_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11ee0
	void BuySeasonPass_Request(int32_t BuyType); // Function KxFramework.KxLobbyService.BuySeasonPass_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11e50
	void BuyFund_Request(); // Function KxFramework.KxLobbyService.BuyFund_Request // (Final|Native|Public|BlueprintCallable) // @ game+0x1b11e30
	bool bIsReadMail(); // Function KxFramework.KxLobbyService.bIsReadMail // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae5a50
};

// Class KxFramework.KxLocalPlayer
// Size: 0x258 (Inherited: 0x258)
struct UKxLocalPlayer : ULocalPlayer {

	void SetSteamPlayerID(); // Function KxFramework.KxLocalPlayer.SetSteamPlayerID // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1baa0
	void SetNULLPlayerID(); // Function KxFramework.KxLocalPlayer.SetNULLPlayerID // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1b950
};

// Class KxFramework.KxLogLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKxLogLibrary : UBlueprintFunctionLibrary {

	void KxLog(struct UObject* WorldContextObject, enum class ELogType Type, struct FString String); // Function KxFramework.KxLogLibrary.KxLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b1ac40
};

// Class KxFramework.KxVoiceChatSys
// Size: 0x30 (Inherited: 0x30)
struct UKxVoiceChatSys : UGameInstanceSubsystem {

	void UpdatePosition(bool IsWorldOrigin); // Function KxFramework.KxVoiceChatSys.UpdatePosition // (Native|Public|BlueprintCallable) // @ game+0x1b1bf50
	void UnBlockUser(struct FString UserID); // Function KxFramework.KxVoiceChatSys.UnBlockUser // (Native|Public|BlueprintCallable) // @ game+0x1b1be60
	void SetVoiceRange(int32_t Range); // Function KxFramework.KxVoiceChatSys.SetVoiceRange // (Native|Public|BlueprintCallable) // @ game+0x1b1bd40
	void SetVoiceMode(int32_t Mode); // Function KxFramework.KxVoiceChatSys.SetVoiceMode // (Native|Public|BlueprintCallable) // @ game+0x1b1bcb0
	void SetTeamID(int32_t TeamID); // Function KxFramework.KxVoiceChatSys.SetTeamID // (Native|Public|BlueprintCallable) // @ game+0x1b1bb50
	void SetSpeakerVolume(int32_t vol); // Function KxFramework.KxVoiceChatSys.SetSpeakerVolume // (Native|Public|BlueprintCallable) // @ game+0x1b1b970
	void SetMicVolume(int32_t vol); // Function KxFramework.KxVoiceChatSys.SetMicVolume // (Native|Public|BlueprintCallable) // @ game+0x1b1b8c0
	void SetDisableVoiceChat(bool bDisEnable); // Function KxFramework.KxVoiceChatSys.SetDisableVoiceChat // (Native|Public|BlueprintCallable) // @ game+0x1b1b720
	void OpenSpeaker(bool IsOpen); // Function KxFramework.KxVoiceChatSys.OpenSpeaker // (Native|Public|BlueprintCallable) // @ game+0x1b1b070
	void OpenMic(bool IsOpen); // Function KxFramework.KxVoiceChatSys.OpenMic // (Native|Public|BlueprintCallable) // @ game+0x1b1afe0
	bool IsSpeakerOpen(); // Function KxFramework.KxVoiceChatSys.IsSpeakerOpen // (Native|Public|BlueprintCallable) // @ game+0x1b1abe0
	bool IsMicOpen(); // Function KxFramework.KxVoiceChatSys.IsMicOpen // (Native|Public|BlueprintCallable) // @ game+0x1b1ab80
	bool IsAudioSendEnabled(); // Function KxFramework.KxVoiceChatSys.IsAudioSendEnabled // (Native|Public|BlueprintCallable) // @ game+0x1b1ab20
	bool Init(struct FString AppID, struct FString AppKey, struct FString UserID); // Function KxFramework.KxVoiceChatSys.Init // (Native|Public|BlueprintCallable) // @ game+0x1b1a8e0
	int32_t GetVoiceMode(); // Function KxFramework.KxVoiceChatSys.GetVoiceMode // (Native|Public|BlueprintCallable) // @ game+0x1b1a850
	struct TArray<struct FString> GetSpeakingUsers(); // Function KxFramework.KxVoiceChatSys.GetSpeakingUsers // (Native|Public|BlueprintCallable) // @ game+0x1b1a700
	int32_t GetSpeakerVolume(); // Function KxFramework.KxVoiceChatSys.GetSpeakerVolume // (Native|Public|BlueprintCallable) // @ game+0x1b1a6d0
	struct FString GetRoomID(); // Function KxFramework.KxVoiceChatSys.GetRoomID // (Native|Public|BlueprintCallable) // @ game+0x1b1a630
	struct TArray<struct FString> GetOtherUsers(); // Function KxFramework.KxVoiceChatSys.GetOtherUsers // (Native|Public|BlueprintCallable) // @ game+0x1b1a4d0
	int32_t GetMicVolume(); // Function KxFramework.KxVoiceChatSys.GetMicVolume // (Native|Public|BlueprintCallable) // @ game+0x1b1a4a0
	bool GetLoggedIn(); // Function KxFramework.KxVoiceChatSys.GetLoggedIn // (Native|Public|BlueprintCallable) // @ game+0x1b1a470
	struct TArray<struct FString> GetBlockedUsers(); // Function KxFramework.KxVoiceChatSys.GetBlockedUsers // (Native|Public|BlueprintCallable) // @ game+0x1b1a3f0
	void ExitRoom(); // Function KxFramework.KxVoiceChatSys.ExitRoom // (Native|Public|BlueprintCallable) // @ game+0x1b123c0
	void EnterRoom(struct FString RoomID, int32_t Team, int32_t VoiceMode); // Function KxFramework.KxVoiceChatSys.EnterRoom // (Native|Public|BlueprintCallable) // @ game+0x1b1a260
	void EnableAudioSend(bool bEnable); // Function KxFramework.KxVoiceChatSys.EnableAudioSend // (Native|Public|BlueprintCallable) // @ game+0x1b1a1d0
	void BlockUser(struct FString UserID); // Function KxFramework.KxVoiceChatSys.BlockUser // (Native|Public|BlueprintCallable) // @ game+0x1b19c80
};

// Class KxFramework.KxGMEChatSys
// Size: 0xd0 (Inherited: 0x30)
struct UKxGMEChatSys : UKxVoiceChatSys {
	char pad_30[0x8]; // 0x30(0x08)
	bool bInRoom; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FMulticastInlineDelegate OnEnterRoom; // 0x40(0x10)
	struct FMulticastInlineDelegate OnExitRoom; // 0x50(0x10)
	struct FMulticastInlineDelegate OnDisConnectRoom; // 0x60(0x10)
	struct FMulticastInlineDelegate OnSpeakingUpdated; // 0x70(0x10)
	struct FMulticastInlineDelegate OnLangrenSwitchVoiceChannel; // 0x80(0x10)
	struct FMulticastInlineDelegate OnSpeechToText; // 0x90(0x10)
	struct FMulticastInlineDelegate OnMicStateChanged; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UKxGMEController* GMEController; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)

	void UserStopRecording(); // Function KxFramework.KxGMEChatSys.UserStopRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1c4e0
	void UserBeginRecording(); // Function KxFramework.KxGMEChatSys.UserBeginRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1bfe0
	void SetUserSpeakVolumeByID(int32_t OpenID, int32_t Volume); // Function KxFramework.KxGMEChatSys.SetUserSpeakVolumeByID // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1bbe0
	void SetAudioRoute(enum class EGMEAudoiRouteSendType SendType, struct TArray<struct FString> SendIDInfo, enum class EGMEAudoiRouteRecvType RecvType, struct TArray<struct FString> RecvIDInfo); // Function KxFramework.KxGMEChatSys.SetAudioRoute // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1b410
	bool IsInit(); // Function KxFramework.KxGMEChatSys.IsInit // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1037390
	void GetUserSpeakVolumeByID(int32_t OpenID, int32_t Volume); // Function KxFramework.KxGMEChatSys.GetUserSpeakVolumeByID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b1a780
};

// Class KxFramework.KxUserLoginPlatformRequest
// Size: 0x78 (Inherited: 0x30)
struct UKxUserLoginPlatformRequest : UOnlineBlueprintCallProxyBase {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnCompleted; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	struct UKxUserLoginPlatformRequest* UserLoginPlatformRequest(enum class EKxServerType Server, int64_t SteamID, int64_t GkdID, struct FString Ticket, int64_t MacID); // Function KxFramework.KxUserLoginPlatformRequest.UserLoginPlatformRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b1c300
};

// Class KxFramework.KxUserLoginFriendRequest
// Size: 0x80 (Inherited: 0x30)
struct UKxUserLoginFriendRequest : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	struct UKxUserLoginFriendRequest* UserLoginFriendOrSteamPayRequest(enum class EKxServerType Server, int64_t SteamID, struct FString Key, int64_t MacID, int64_t GkdID, struct FString Version); // Function KxFramework.KxUserLoginFriendRequest.UserLoginFriendOrSteamPayRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b1c000
};

// Class KxFramework.KxPlatformConnectSys
// Size: 0x60 (Inherited: 0x30)
struct UKxPlatformConnectSys : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct FMulticastInlineDelegate OnConnectSuc; // 0x40(0x10)
	struct FMulticastInlineDelegate OnDisConnect; // 0x50(0x10)

	void ConnectServer(enum class EKxServerType ServerType, struct FString ServerIp, int32_t Port, struct FString Key); // Function KxFramework.KxPlatformConnectSys.ConnectServer // (Final|Native|Public|BlueprintCallable) // @ game+0x1b19fb0
};

// Class KxFramework.KxRedisConnect
// Size: 0x60 (Inherited: 0x30)
struct UKxRedisConnect : UGameInstanceSubsystem {
	char pad_30[0x30]; // 0x30(0x30)

	bool RedisWrite(struct FString ListKey, struct FString Value); // Function KxFramework.KxRedisConnect.RedisWrite // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1b100
	void FreeRedis(); // Function KxFramework.KxRedisConnect.FreeRedis // (Final|Native|Public|BlueprintCallable) // @ game+0x1b1a3d0
	bool ConnectRedis(struct FString IP, int32_t Port, struct FString Auth); // Function KxFramework.KxRedisConnect.ConnectRedis // (Final|Native|Public|BlueprintCallable) // @ game+0x1b19e00
};

// Class KxFramework.KxVersionMgr
// Size: 0x50 (Inherited: 0x30)
struct UKxVersionMgr : UGameInstanceSubsystem {
	struct FString CurReleaseVersion; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

