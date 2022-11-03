// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate.Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C
// Size: 0x190 (Inherited: 0x17e)
struct UComp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C : UComp_FXC_PlayAnimation_ShooterCharacter_C {
	char pad_17E[0x2]; // 0x17e(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	float 1P_PlayRate_Min; // 0x188(0x04)
	float 3P_PlayRate_Min; // 0x18c(0x04)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate.Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate.Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate // (Final|UbergraphFunction) // @ game+0x32f73d0
};

