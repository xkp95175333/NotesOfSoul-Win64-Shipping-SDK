// BlueprintGeneratedClass GA_SpiderAtk.GA_SpiderAtk_C
// Size: 0x4b0 (Inherited: 0x490)
struct UGA_SpiderAtk_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FVector BoxSize; // 0x498(0x0c)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct ANOS_SpiderBase* SpiderBase; // 0x4a8(0x08)

	void K2_ActivateAbility(); // Function GA_SpiderAtk.GA_SpiderAtk_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_SpiderAtk(int32_t EntryPoint); // Function GA_SpiderAtk.GA_SpiderAtk_C.ExecuteUbergraph_GA_SpiderAtk // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

