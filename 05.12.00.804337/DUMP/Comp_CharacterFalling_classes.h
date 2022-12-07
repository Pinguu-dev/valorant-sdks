// BlueprintGeneratedClass Comp_CharacterFalling.Comp_CharacterFalling_C
// Size: 0x180 (Inherited: 0xe8)
struct UComp_CharacterFalling_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UCurveFloat* LandingCameraShakeCurve; // 0xf0(0x08)
	struct FExplicitFloatCurve NewVar_1; // 0xf8(0x88)

	void _1(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Comp_CharacterFalling.Comp_CharacterFalling_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AShooterCharacter* Character, struct FHitResult HitResult); // Function Comp_CharacterFalling.Comp_CharacterFalling_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function Comp_CharacterFalling.Comp_CharacterFalling_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_CharacterFalling.Comp_CharacterFalling_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

