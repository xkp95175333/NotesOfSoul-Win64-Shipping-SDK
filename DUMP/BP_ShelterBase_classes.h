// BlueprintGeneratedClass BP_ShelterBase.BP_ShelterBase_C
// Size: 0x4b0 (Inherited: 0x2d0)
struct ABP_ShelterBase_C : ANOS_Shelter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	float Timeline_0_NewTrack_0_8EF134BE4A5B1A2E40E3E6BAE5C212AE; // 0x2d8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_8EF134BE4A5B1A2E40E3E6BAE5C212AE; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2e0(0x08)
	struct ANOS_PlayerHuman* Character; // 0x2e8(0x08)
	struct UAnimMontage* CharacterAnimation; // 0x2f0(0x08)
	bool NeedOpen; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct ANOS_PlayerGhost* Ghost; // 0x300(0x08)
	struct FVector Location; // 0x308(0x0c)
	struct FRotator Rotation; // 0x314(0x0c)
	struct TMap<struct FString, struct UAnimMontage*> GhostLerpLocationMontage; // 0x320(0x50)
	struct TMap<struct FString, struct UAnimMontage*> GhostXiQuLoopMontage; // 0x370(0x50)
	struct TMap<struct FString, struct UAnimMontage*> GhostXiQuSucMontage; // 0x3c0(0x50)
	struct TMap<struct FString, struct UAnimMontage*> GhostXiQuFailMontage; // 0x410(0x50)
	struct TMap<struct UAnimMontage*, struct UAnimMontage*> BeenPullOutHumanMontage; // 0x460(0x50)

	void ShelterCollision(enum class ECollisionResponse NewResponse); // Function BP_ShelterBase.BP_ShelterBase_C.ShelterCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_ShelterBase.BP_ShelterBase_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function BP_ShelterBase.BP_ShelterBase_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function BP_ShelterBase.BP_ShelterBase_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_AABD762A4CB4D6CBD54E26A03114DBDA(struct FName NotifyName); // Function BP_ShelterBase.BP_ShelterBase_C.OnNotifyEnd_AABD762A4CB4D6CBD54E26A03114DBDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_AABD762A4CB4D6CBD54E26A03114DBDA(struct FName NotifyName); // Function BP_ShelterBase.BP_ShelterBase_C.OnNotifyBegin_AABD762A4CB4D6CBD54E26A03114DBDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_AABD762A4CB4D6CBD54E26A03114DBDA(struct FName NotifyName); // Function BP_ShelterBase.BP_ShelterBase_C.OnInterrupted_AABD762A4CB4D6CBD54E26A03114DBDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_AABD762A4CB4D6CBD54E26A03114DBDA(struct FName NotifyName); // Function BP_ShelterBase.BP_ShelterBase_C.OnBlendOut_AABD762A4CB4D6CBD54E26A03114DBDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_AABD762A4CB4D6CBD54E26A03114DBDA(struct FName NotifyName); // Function BP_ShelterBase.BP_ShelterBase_C.OnCompleted_AABD762A4CB4D6CBD54E26A03114DBDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShelterMontage(bool Human, struct FName Section); // Function BP_ShelterBase.BP_ShelterBase_C.ShelterMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CameraMove(bool Reverse, struct ANOS_PlayerHuman* Character); // Function BP_ShelterBase.BP_ShelterBase_C.CameraMove // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MultiGhostSetLocation(); // Function BP_ShelterBase.BP_ShelterBase_C.MultiGhostSetLocation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ServerGhostSetLocation(); // Function BP_ShelterBase.BP_ShelterBase_C.ServerGhostSetLocation // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveCharacterCamera_Multi(struct UObject* Character); // Function BP_ShelterBase.BP_ShelterBase_C.ActiveCharacterCamera_Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveCharacterCamera_Server(struct UObject* Character); // Function BP_ShelterBase.BP_ShelterBase_C.ActiveCharacterCamera_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGetOutCameraLocation_Server(); // Function BP_ShelterBase.BP_ShelterBase_C.OnGetOutCameraLocation_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGetOutCameraLocation_Multi(); // Function BP_ShelterBase.BP_ShelterBase_C.OnGetOutCameraLocation_Multi // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ShelterBase(int32_t EntryPoint); // Function BP_ShelterBase.BP_ShelterBase_C.ExecuteUbergraph_BP_ShelterBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

