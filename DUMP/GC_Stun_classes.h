// BlueprintGeneratedClass GC_Stun.GC_Stun_C
// Size: 0x2a8 (Inherited: 0x280)
struct AGC_Stun_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	enum class EGameplayCueEvent EventType; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UNiagaraComponent* NS_XiaoGangMainTalentStun; // 0x298(0x08)
	struct AActor* EventInstigator; // 0x2a0(0x08)

	void ReceiveBeginPlay(); // Function GC_Stun.GC_Stun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GC_Stun.GC_Stun_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_Stun.GC_Stun_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Stun.GC_Stun_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Stun(int32_t EntryPoint); // Function GC_Stun.GC_Stun_C.ExecuteUbergraph_GC_Stun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

