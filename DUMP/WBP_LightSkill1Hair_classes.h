// WidgetBlueprintGeneratedClass WBP_LightSkill1Hair.WBP_LightSkill1Hair_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_LightSkill1Hair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* ProgressBar_43; // 0x268(0x08)
	float MaxLightTime; // 0x270(0x04)
	float Time; // 0x274(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LightSkill1Hair.WBP_LightSkill1Hair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_LightSkill1Hair(int32_t EntryPoint); // Function WBP_LightSkill1Hair.WBP_LightSkill1Hair_C.ExecuteUbergraph_WBP_LightSkill1Hair // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

