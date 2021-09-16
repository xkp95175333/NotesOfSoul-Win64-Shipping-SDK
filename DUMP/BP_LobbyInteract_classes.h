// BlueprintGeneratedClass BP_LobbyInteract.BP_LobbyInteract_C
// Size: 0x244 (Inherited: 0x220)
struct ABP_LobbyInteract_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct UUserWidget* UIClass; // 0x230(0x08)
	struct FVector Config Box Extent; // 0x238(0x0c)

	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_LobbyInteract.BP_LobbyInteract_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_LobbyInteract.BP_LobbyInteract_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_LobbyInteract.BP_LobbyInteract_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ConfigBoxExtent(struct FVector InBoxExtent); // Function BP_LobbyInteract.BP_LobbyInteract_C.ConfigBoxExtent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_LobbyInteract.BP_LobbyInteract_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartInteract(struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_LobbyInteract.BP_LobbyInteract_C.OnStartInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_LobbyInteract.BP_LobbyInteract_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractFailed(struct ACharacter* InteractChar); // Function BP_LobbyInteract.BP_LobbyInteract_C.OnInteractFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LobbyInteract(int32_t EntryPoint); // Function BP_LobbyInteract.BP_LobbyInteract_C.ExecuteUbergraph_BP_LobbyInteract // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

