// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x320 (Inherited: 0x300)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x300(0x08)
	float PermutationTimeOffset; // 0x308(0x04)
	float PlayRate; // 0x30c(0x04)
	bool bStateBool; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UAnimSharingInstance* Instance; // 0x318(0x08)

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x20b1b90
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x320 (Inherited: 0x300)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x300(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x308(0x08)
	float BlendTime; // 0x310(0x04)
	bool bBlendBool; // 0x314(0x01)
	char pad_315[0xb]; // 0x315(0x0b)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x320 (Inherited: 0x300)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x300(0x08)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x308(0x08)
	float Alpha; // 0x310(0x04)
	bool bStateBool; // 0x314(0x01)
	char pad_315[0xb]; // 0x315(0x0b)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x120 (Inherited: 0x30)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0x90(0x08)
	char pad_98[0x38]; // 0x98(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)
	struct UEnum* StateEnum; // 0xf0(0x08)
	struct AActor* SharingActor; // 0xf8(0x08)
	char pad_100[0x20]; // 0x100(0x20)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x90 (Inherited: 0x30)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x30(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // @ game+0x20b1e10
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x20b1ac0
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* SetUp); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x20b19f0
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x20b19c0
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x50 (Inherited: 0x30)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x30(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x40(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x60 (Inherited: 0x30)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x30(0x30)

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x20b1c40
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // @ game+0x20b1b50
};

