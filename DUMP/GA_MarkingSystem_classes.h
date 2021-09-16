// BlueprintGeneratedClass GA_MarkingSystem.GA_MarkingSystem_C
// Size: 0x4b8 (Inherited: 0x490)
struct UGA_MarkingSystem_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PSArenaBase* PSArenaBase; // 0x498(0x08)
	struct AActor* HitActor; // 0x4a0(0x08)
	struct AActor* TheOwner; // 0x4a8(0x08)
	struct ANOS_PCArenaBase* PCArenaBase; // 0x4b0(0x08)

	void Remove Cur Item Forn Player List(struct AActor* CurActor); // Function GA_MarkingSystem.GA_MarkingSystem_C.Remove Cur Item Forn Player List // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Remove Cur Item on Player List_Disable(struct ABP_MarkingPoint_C* TargetPoint); // Function GA_MarkingSystem.GA_MarkingSystem_C.Remove Cur Item on Player List_Disable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CanPlayerCanSee(bool CanSee); // Function GA_MarkingSystem.GA_MarkingSystem_C.CanPlayerCanSee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddActorToLocalList(int32_t Type, struct AActor* Actor); // Function GA_MarkingSystem.GA_MarkingSystem_C.AddActorToLocalList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Destory Last Of Item Marking Point(int32_t Type); // Function GA_MarkingSystem.GA_MarkingSystem_C.Destory Last Of Item Marking Point // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitValue(); // Function GA_MarkingSystem.GA_MarkingSystem_C.InitValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Destory Last Of Path Marking Point(); // Function GA_MarkingSystem.GA_MarkingSystem_C.Destory Last Of Path Marking Point // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCurActorMarkedBP(struct AActor* CurActor, struct AActor* MarkedBP); // Function GA_MarkingSystem.GA_MarkingSystem_C.GetCurActorMarkedBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Has Marked by Self(struct AActor* CurActor, bool CanCreateMarkingPoint); // Function GA_MarkingSystem.GA_MarkingSystem_C.Has Marked by Self // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetElementTypeToIndex(enum class ENOSElementSlotType Type, int32_t Index); // Function GA_MarkingSystem.GA_MarkingSystem_C.GetElementTypeToIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetPoint(struct APlayerController* PC, struct FVector EndPoint, SoftClassProperty HitedActor, int32_t ItemId, struct AActor* CurHitedActor); // Function GA_MarkingSystem.GA_MarkingSystem_C.GetPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_MarkingSystem.GA_MarkingSystem_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SentToServerPos(struct FVector End, SoftClassProperty HitedActor, int32_t ItemId, struct AActor* Owner, struct AActor* HitActor); // Function GA_MarkingSystem.GA_MarkingSystem_C.SentToServerPos // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnMarkPoint(struct FTransform trans, SoftClassProperty HitedActorPath, int32_t ItemId, struct AActor* Owner, struct AActor* HitActor); // Function GA_MarkingSystem.GA_MarkingSystem_C.SpawnMarkPoint // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnMarkPointWithGhost(struct FTransform trans, SoftClassProperty HitedActor, int32_t ItemId, struct AActor* Owner); // Function GA_MarkingSystem.GA_MarkingSystem_C.SpawnMarkPointWithGhost // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SentToServerPosWithGhost(struct FVector End, SoftClassProperty HitedActor, int32_t ItemId, struct AActor* Owner); // Function GA_MarkingSystem.GA_MarkingSystem_C.SentToServerPosWithGhost // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_MarkingSystem(int32_t EntryPoint); // Function GA_MarkingSystem.GA_MarkingSystem_C.ExecuteUbergraph_GA_MarkingSystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

