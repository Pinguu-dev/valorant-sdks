// Class ActorSequence.ActorSequence
// Size: 0x90 (Inherited: 0x68)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x70(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x110 (Inherited: 0xe8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xe8(0x14)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UActorSequence* Sequence; // 0x100(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0x108(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x688 (Inherited: 0x688)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

