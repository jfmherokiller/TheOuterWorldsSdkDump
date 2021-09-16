#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_UMG_classes.hpp"
#include "Indi_CoreUObject_classes.hpp"
#include "Indi_Engine_classes.hpp"
#include "Indi_LevelSequence_classes.hpp"
#include "Indi_SlateCore_classes.hpp"
#include "Indi_GameplayTags_classes.hpp"
#include "Indi_AIModule_classes.hpp"
#include "Indi_InputCore_classes.hpp"
#include "Indi_AkAudio_classes.hpp"
#include "Indi_NavigationSystem_classes.hpp"
#include "Indi_Slate_classes.hpp"
#include "Indi_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Indiana.EDamageEventType
enum class EDamageEventType : uint8_t
{
	Invalid                        = 0,
	Point                          = 1,
	Radial                         = 2,
	Generic                        = 3,
	EDamageEventType_MAX           = 4
};


// Enum Indiana.EPhaseOfDay
enum class EPhaseOfDay : uint8_t
{
	Morning                        = 0,
	Midday                         = 1,
	Afternoon                      = 2,
	Evening                        = 3,
	Night                          = 4,
	EPhaseOfDay_MAX                = 5
};


// Enum Indiana.EDodgeDirection
enum class EDodgeDirection : uint8_t
{
	Invalid                        = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	Forward                        = 4,
	Count                          = 5,
	EDodgeDirection_MAX            = 6
};


// Enum Indiana.EFootstepType
enum class EFootstepType : uint8_t
{
	Run                            = 0,
	Sprint                         = 1,
	Crouched                       = 2,
	Climb                          = 3,
	Count                          = 4,
	EFootstepType_MAX              = 5
};


// Enum Indiana.EFootID
enum class EFootID : uint8_t
{
	None                           = 0,
	LeftFoot                       = 1,
	RightFoot                      = 2,
	Foot3                          = 3,
	Foot4                          = 4,
	Foot5                          = 5,
	Foot6                          = 6,
	Foot7                          = 7,
	Foot8                          = 8,
	Foot9                          = 9,
	Foot10                         = 10,
	Foot11                         = 11,
	Foot12                         = 12,
	Foot13                         = 13,
	Foot14                         = 14,
	Foot15                         = 15,
	Foot16                         = 16,
	NumFeetID                      = 17,
	EFootID_MAX                    = 18
};


// Enum Indiana.ESpecialMovementEvent
enum class ESpecialMovementEvent : uint8_t
{
	None                           = 0,
	Crouch                         = 1,
	Uncrouch                       = 2,
	Jump                           = 3,
	Land                           = 4,
	Dodge                          = 5,
	ESpecialMovementEvent_MAX      = 6
};


// Enum Indiana.EStateOfBeing
enum class EStateOfBeing : uint8_t
{
	Healthy                        = 0,
	Dying                          = 1,
	Dead                           = 2,
	EStateOfBeing_MAX              = 3
};


// Enum Indiana.EAnimNotify
enum class EAnimNotify : uint8_t
{
	CalledShotCameraStart          = 0,
	WeaponFire                     = 1,
	MeleeAllowInput                = 2,
	MeleeDisallowInput             = 3,
	MeleeCanStartQueuedAction      = 4,
	MeleeActionFinished            = 5,
	MeleeRecoilFrame               = 6,
	MeleeCheckInput                = 7,
	MeleeDamageTypePending         = 8,
	MeleeDamageTypeNext            = 9,
	AnimationFinished              = 10,
	RefillAmmo                     = 11,
	AttachWeapon                   = 12,
	DetachWeapon                   = 13,
	UseMedKit                      = 14,
	MedKitEnd                      = 15,
	Finished                       = 16,
	MeleeEnableBlock               = 17,
	UpdateCanisterVisual           = 18,
	Invalid                        = 19,
	EAnimNotify_MAX                = 20
};


// Enum Indiana.EGameDifficulty
enum class EGameDifficulty : uint8_t
{
	Story                          = 0,
	Normal                         = 1,
	Hard                           = 2,
	SuperNova                      = 3,
	Count                          = 4,
	Invalid                        = 5,
	EGameDifficulty_MAX            = 6
};


// Enum Indiana.EInterrogationResult
enum class EInterrogationResult : uint8_t
{
	Invalid                        = 0,
	Bribe                          = 1,
	Talk                           = 2,
	Fight                          = 3,
	EInterrogationResult_MAX       = 4
};


// Enum Indiana.ECrimeType
enum class ECrimeType : uint8_t
{
	None                           = 0,
	RestrictedArea                 = 1,
	Pickpocket                     = 2,
	Lockpick                       = 3,
	Hack                           = 4,
	Disguised                      = 5,
	Theft                          = 6,
	ECrimeType_MAX                 = 7
};


// Enum Indiana.ECalledShotCameraStep
enum class ECalledShotCameraStep : uint8_t
{
	Attacker                       = 0,
	Target                         = 1,
	TargetReaction                 = 2,
	Complete                       = 3,
	ECalledShotCameraStep_MAX      = 4
};


// Enum Indiana.EAttribute
enum class EAttribute : uint8_t
{
	Strength                       = 0,
	Dexterity                      = 1,
	Endurance                      = 2,
	Intelligence                   = 3,
	Perception                     = 4,
	Willpower                      = 5,
	Charm                          = 6,
	Wits                           = 7,
	Temperament                    = 8,
	Count                          = 9,
	Invalid                        = 10,
	EAttribute_MAX                 = 11
};


// Enum Indiana.ESkill
enum class ESkill : uint8_t
{
	HandGuns                       = 0,
	LongGuns                       = 1,
	HeavyWeapons                   = 2,
	Sneak                          = 3,
	Lockpick                       = 4,
	Engineering                    = 5,
	Hack                           = 6,
	Medical                        = 7,
	LightMelee                     = 8,
	HeavyMelee                     = 9,
	Science                        = 10,
	Persuade                       = 11,
	Lie                            = 12,
	Intimidate                     = 13,
	Dodge                          = 14,
	Block                          = 15,
	Inspiration                    = 16,
	Determination                  = 17,
	Count                          = 18,
	Invalid                        = 19,
	ESkill_MAX                     = 20
};


// Enum Indiana.EOCLState
enum class EOCLState : uint8_t
{
	Closed                         = 0,
	Open                           = 1,
	Locked                         = 2,
	SealedClosed                   = 3,
	SealedOpen                     = 4,
	Barred                         = 5,
	Opening                        = 6,
	OpeningToSealed                = 7,
	Closing                        = 8,
	ClosingToSealed                = 9,
	ClosingToLocked                = 10,
	EOCLState_MAX                  = 11
};


// Enum Indiana.ESaveGameType
enum class ESaveGameType : uint8_t
{
	Standard                       = 0,
	Quicksave                      = 1,
	Autosave                       = 2,
	PostGame                       = 3,
	PointOfNoReturn                = 4,
	BeforeSkip                     = 5,
	BeforeEVTransition             = 6,
	Invalid                        = 7,
	ESaveGameType_MAX              = 8
};


// Enum Indiana.ESaveGameResult
enum class ESaveGameResult : uint8_t
{
	Success                        = 0,
	Restricted                     = 1,
	FileWritingFailure             = 2,
	UnableToSaveCompanionStates    = 3,
	PlayerNotAvailable             = 4,
	AsyncSaveTask_Begun            = 5,
	AsyncSaveTask_Failed_DeviceFull = 6,
	AsyncSaveTask_FailedDeletingStaleTargetDir = 7,
	AsyncSaveTask_FailedCreatingTargetDir = 8,
	AsyncSaveTask_StorageUninitialized = 9,
	AsyncSaveTask_FailedStorageContainer = 10,
	AsyncSaveTask_Suspended        = 11,
	AsyncSaveTask_NoMetadata       = 12,
	AsyncSaveTask_BufferAccessFailed = 13,
	AsyncSaveTask_BufferMaximumReached = 14,
	AsyncSaveTask_FailedPopulatingSaveFileMap = 15,
	AsyncSaveTask_Delayed          = 16,
	AsyncSaveTask_FailedScreenshotWaitTimeout = 17,
	AsyncSaveTask_FailedSaveStateCompression = 18,
	ESaveGameResult_MAX            = 19
};


// Enum Indiana.EActiveUserChangeType
enum class EActiveUserChangeType : uint8_t
{
	Login                          = 0,
	LoggingOut                     = 1,
	Logout                         = 2,
	SwitchingUser                  = 3,
	ControllerChange               = 4,
	EActiveUserChangeType_MAX      = 5
};


// Enum Indiana.ELoadGameResult
enum class ELoadGameResult : uint8_t
{
	Success                        = 0,
	Restricted                     = 1,
	MissingFile                    = 2,
	FileReadingFailure             = 3,
	CorruptionDetected             = 4,
	UnableToRestorePlayerState     = 5,
	UnableToRestoreCompanionState  = 6,
	NoCompanionManager             = 7,
	ClassDependencyLoadFailure     = 8,
	SpawnFailure                   = 9,
	InvalidQuicksaveIndex          = 10,
	InvalidAutosaveIndex           = 11,
	SaveOfGivenNameNotFound        = 12,
	PlatformLoadUnsuccessful       = 13,
	StorageUninitialized           = 14,
	SaveVersionUnsupported         = 15,
	SaveFromNewerBuild             = 16,
	MapLoadFailure                 = 17,
	ChunkInstallation              = 18,
	CompressedGameStateUnpackFailure = 19,
	LoadCanceledByUser             = 20,
	LoadInturruptedForPONR         = 21,
	ELoadGameResult_MAX            = 22
};


// Enum Indiana.EBehaviorStateEventType
enum class EBehaviorStateEventType : uint8_t
{
	Added                          = 0,
	Entered                        = 1,
	Exited                         = 2,
	Removed                        = 3,
	EBehaviorStateEventType_MAX    = 4
};


// Enum Indiana.EBehaviorState
enum class EBehaviorState : uint8_t
{
	None                           = 0,
	Cover                          = 1,
	Range                          = 2,
	MeleeSlot                      = 3,
	Search                         = 4,
	RepositionSearch               = 5,
	MeleeBlock                     = 6,
	Dodge                          = 7,
	Idle                           = 8,
	Tether                         = 9,
	SwitchWeapon                   = 10,
	SwitchTarget                   = 11,
	Dead                           = 12,
	Disabled                       = 13,
	SwitchContext                  = 14,
	Suspicious                     = 15,
	Investigate                    = 16,
	Patrol                         = 17,
	Wander                         = 18,
	CompanionFollow                = 19,
	Conversation                   = 20,
	Flee                           = 21,
	Furniture                      = 22,
	Jump                           = 23,
	CompanionCommandMoveTo         = 24,
	CompanionCommandSuppress       = 25,
	CompanionCommandHunkerDown     = 26,
	Deactivated                    = 27,
	Activated                      = 28,
	CompanionCommandFlank          = 29,
	Approach                       = 30,
	CalledShot                     = 31,
	Persuade                       = 32,
	Teleport                       = 33,
	SpawnActor                     = 34,
	Cower                          = 35,
	Follow                         = 36,
	SpellTarget                    = 37,
	Retreat                        = 38,
	Animation                      = 39,
	MoveTo                         = 40,
	Crouch                         = 41,
	QuickCover                     = 42,
	OnRails                        = 43,
	HopeBot                        = 44,
	Walk                           = 45,
	HealGun                        = 46,
	Count                          = 47,
	EBehaviorState_MAX             = 48
};


// Enum Indiana.EUnlockAbility
enum class EUnlockAbility : uint8_t
{
	Invalid                        = 0,
	PerfectDodge                   = 1,
	PerfectDodgeCounter            = 2,
	PerfectDodgeCounterCrit        = 3,
	PerfectBlock                   = 4,
	PerfectBlockCounter            = 5,
	PerfectBlockCounterCrit        = 6,
	PickPocket                     = 7,
	HackRobots                     = 8,
	MedKitOneDrug                  = 9,
	MedKitTwoDrugs                 = 10,
	MedKitThreeDrugs               = 11,
	Acrophobia                     = 12,
	PowerAttacksLightMelee         = 13,
	PowerAttacksHeavyMelee         = 14,
	WeakSpotLightMelee             = 15,
	WeakSpotHeavyMelee             = 16,
	WeakSpotHandGuns               = 17,
	WeakSpotLongGuns               = 18,
	WeakSpotHeavyWeapons           = 19,
	TTDSpellsLightMelee            = 20,
	TTDSpellsHeavyMelee            = 21,
	TTDSpellsHandGuns              = 22,
	TTDSpellsLongGuns              = 23,
	TTDSpellsHeavyWeapons          = 24,
	MeleeFartherReach              = 25,
	MeleeCannotBeBlocked           = 26,
	SneakAttack                    = 27,
	FieldRepair                    = 28,
	SellToAnyVendingMachine        = 29,
	CompanionCommands              = 30,
	DodgeForward                   = 31,
	FastTravelWhileEncumbered      = 32,
	Tinkering                      = 33,
	LockPickPreview                = 34,
	MedKitHealsCompanions          = 35,
	TinkerScienceCostCap           = 36,
	DoubleHackRobots               = 37,
	UndetectableLockpicking        = 38,
	UseScienceAsWeaponSkill        = 39,
	InstantReloadHeavyOnEmpty      = 40,
	StealthInstantKillUndetectable = 41,
	NoDamageOnPerfectBlock         = 42,
	Count                          = 43,
	EUnlockAbility_MAX             = 44
};


// Enum Indiana.EStringTableType
enum class EStringTableType : uint8_t
{
	Unassigned                     = 0,
	Gui                            = 1,
	Items                          = 2,
	Abilities                      = 3,
	Tutorial                       = 4,
	Achievements                   = 5,
	Credits                        = 6,
	Debug                          = 7,
	LoadingTips                    = 8,
	Characters                     = 9,
	Areas                          = 10,
	Waypoints                      = 11,
	Random                         = 12,
	Factions                       = 13,
	Vendors                        = 14,
	Codex                          = 15,
	BrandSlogans                   = 16,
	CutsceneSubtitles              = 17,
	Count                          = 18,
	EStringTableType_MAX           = 19
};


// Enum Indiana.ERestType
enum class ERestType : uint8_t
{
	Sleep                          = 0,
	Wait                           = 1,
	ERestType_MAX                  = 2
};


// Enum Indiana.ETraverseType
enum class ETraverseType : uint8_t
{
	None                           = 0,
	Jump                           = 1,
	Crouch                         = 2,
	Climb                          = 3,
	Walk                           = 4,
	ETraverseType_MAX              = 5
};


// Enum Indiana.EAlarmState
enum class EAlarmState : uint8_t
{
	Off                            = 0,
	On                             = 1,
	Disabled                       = 2,
	EAlarmState_MAX                = 3
};


// Enum Indiana.EAlertState
enum class EAlertState : uint8_t
{
	Unaware                        = 0,
	Suspicious                     = 1,
	Investigating                  = 2,
	Alerted                        = 3,
	Count                          = 4,
	EAlertState_MAX                = 5
};


// Enum Indiana.EItemDegradationState
enum class EItemDegradationState : uint8_t
{
	None                           = 0,
	Damaged                        = 1,
	SeverelyDamaged                = 2,
	Destroyed                      = 3,
	EItemDegradationState_MAX      = 4
};


// Enum Indiana.EWeaponPreference
enum class EWeaponPreference : uint8_t
{
	UsePrimary                     = 0,
	PreferRanged                   = 1,
	PreferMelee                    = 2,
	StronglyPreferMelee            = 3,
	AlwaysRanged                   = 4,
	AlwaysMelee                    = 5,
	PreferLimitedRanged            = 6,
	AlwaysUnlimitedRanged          = 7,
	EWeaponPreference_MAX          = 8
};


// Enum Indiana.EInteractionType
enum class EInteractionType : uint8_t
{
	None                           = 0,
	Door                           = 1,
	DoorBar                        = 2,
	Ladder                         = 3,
	Elevator                       = 4,
	Switch                         = 5,
	Pickup                         = 6,
	Container                      = 7,
	Computer                       = 8,
	Trap                           = 9,
	Loot                           = 10,
	Conversation                   = 11,
	PickPocket                     = 12,
	Workbench                      = 13,
	Vendor                         = 14,
	Generic                        = 15,
	OCL                            = 16,
	Travel                         = 17,
	NoConversationChatter          = 18,
	Bed                            = 19,
	NotAllowedInCombat             = 20,
	Chair                          = 21,
	Hack                           = 22,
	ShipTerminal                   = 23,
	Respec                         = 24,
	GenericDelayed                 = 25,
	ContainerKeyUnlock             = 26,
	Pet                            = 27,
	Evidence                       = 28,
	AudioLog                       = 29,
	EInteractionType_MAX           = 30
};


// Enum Indiana.EDetectionType
enum class EDetectionType : uint8_t
{
	None                           = 0,
	Suspicious                     = 1,
	Investigate                    = 2,
	Pacifist                       = 3,
	MindControlled                 = 4,
	PacifistCombat                 = 5,
	Crime                          = 6,
	Combat                         = 7,
	Count                          = 8,
	EDetectionType_MAX             = 9
};


// Enum Indiana.EReputationType
enum class EReputationType : uint8_t
{
	Positive                       = 0,
	Negative                       = 1,
	EReputationType_MAX            = 2
};


// Enum Indiana.EComputerLockState
enum class EComputerLockState : uint8_t
{
	Unlocked                       = 0,
	Locked                         = 1,
	EComputerLockState_MAX         = 2
};


// Enum Indiana.ETrapState
enum class ETrapState : uint8_t
{
	Armed                          = 0,
	Disarmed                       = 1,
	Deactivated                    = 2,
	ETrapState_MAX                 = 3
};


// Enum Indiana.ECompanionCommand
enum class ECompanionCommand : uint8_t
{
	Invalid                        = 0,
	MoveTo                         = 1,
	Return                         = 2,
	ForceReturn                    = 3,
	Attack                         = 4,
	Flank                          = 5,
	Suppress                       = 6,
	HunkerDown                     = 7,
	CalledShot                     = 8,
	Count                          = 9,
	ECompanionCommand_MAX          = 10
};


// Enum Indiana.ETrapTriggerState
enum class ETrapTriggerState : uint8_t
{
	Armed                          = 0,
	Disarmed                       = 1,
	Deployed                       = 2,
	ETrapTriggerState_MAX          = 3
};


// Enum Indiana.EAudioLogPlayState
enum class EAudioLogPlayState : uint8_t
{
	Stopped                        = 0,
	Playing                        = 1,
	PausedByGame                   = 2,
	PausedByPlayer                 = 3,
	EAudioLogPlayState_MAX         = 4
};


// Enum Indiana.EIndianaUIColorType
enum class EIndianaUIColorType : uint8_t
{
	Invalid                        = 0,
	Stamina                        = 1,
	Health                         = 2,
	TacticalTimeDilation           = 3,
	Ammo                           = 4,
	CalledShot                     = 5,
	Intimidate                     = 6,
	Hostile                        = 7,
	Neutral                        = 8,
	ConversationVisitedNode        = 9,
	ConversationUnvisitedNode      = 10,
	UIPiping                       = 11,
	InteractionPlayerResources     = 12,
	InteractionPossible            = 13,
	InteractionImpossible          = 14,
	InteractIcon                   = 15,
	InWorldQuestBeacon             = 16,
	StandardFontGlow               = 17,
	QuestBeaconFontGlow            = 18,
	CompanionCommandMoveTo         = 19,
	NotificationQuestMessage       = 20,
	NotificationComputerInteractionMessage = 21,
	NotificationGenericMessage     = 22,
	OutOfAmmo                      = 23,
	IndianaYellow                  = 24,
	IndianaNotQuiteYellow          = 25,
	IndianaGrey                    = 26,
	IndianaBrown                   = 27,
	IndianaDarkBrown               = 28,
	IndianaRed                     = 29,
	IndianaGreen                   = 30,
	NRayDamageText                 = 31,
	NRayDamageTextShadow           = 32,
	EnergyDamageText               = 33,
	EnergyDamageTextShadow         = 34,
	ThermalDamageText              = 35,
	ThermalDamageTextShadow        = 36,
	CorrosiveDamageText            = 37,
	CorrosiveDamageTextShadow      = 38,
	ShockDamageText                = 39,
	ShockDamageTextShadow          = 40,
	BallisticDamageText            = 41,
	BallisticDamageTextShadow      = 42,
	TTDTextColor                   = 43,
	Pacifist                       = 44,
	SkillTextColor                 = 45,
	IndianaBlack                   = 46,
	HealingText                    = 47,
	HealingTextShadow              = 48,
	INX1Color                      = 49,
	INX2Color                      = 50,
	ColdDamageText                 = 51,
	ColdDamageTextShadow           = 52,
	Count                          = 53,
	EIndianaUIColorType_MAX        = 54
};


// Enum Indiana.ECharacterAttributeRange
enum class ECharacterAttributeRange : uint8_t
{
	Minimum                        = 0,
	BelowAverage                   = 1,
	Average                        = 2,
	Good                           = 3,
	High                           = 4,
	VeryHigh                       = 5,
	Maximum                        = 6,
	Count                          = 7,
	Invalid                        = 8,
	ECharacterAttributeRange_MAX   = 9
};


// Enum Indiana.ECharacterCreationPageType
enum class ECharacterCreationPageType : uint8_t
{
	Attributes                     = 0,
	Skills                         = 1,
	Aptitude                       = 2,
	Physical                       = 3,
	Naming                         = 4,
	Summary                        = 5,
	Count                          = 6,
	ECharacterCreationPageType_MAX = 7
};


// Enum Indiana.ESkillCategory
enum class ESkillCategory : uint8_t
{
	Melee                          = 0,
	Ranged                         = 1,
	Defense                        = 2,
	Dialog                         = 3,
	Stealth                        = 4,
	Tech                           = 5,
	Leadership                     = 6,
	Count                          = 7,
	Invalid                        = 8,
	ESkillCategory_MAX             = 9
};


// Enum Indiana.EAptitudeType
enum class EAptitudeType : uint8_t
{
	NoAptitude                     = 0,
	BeverageTech                   = 1,
	Bureaucrat                     = 2,
	Cashier                        = 3,
	Construction                   = 4,
	Elevator                       = 5,
	Factory                        = 6,
	Farmer                         = 7,
	FoodTester                     = 8,
	Janitor                        = 9,
	Mascot                         = 10,
	MedicalTech                    = 11,
	SafetyInspector                = 12,
	Scientist                      = 13,
	Chef                           = 14,
	Invalid                        = 15,
	EAptitudeType_MAX              = 16
};


// Enum Indiana.EAbilityPosition
enum class EAbilityPosition : uint8_t
{
	Bottom                         = 0,
	Left                           = 1,
	Top                            = 2,
	Right                          = 3,
	EAbilityPosition_MAX           = 4
};


// Enum Indiana.EAchievementOnlineUpdateType
enum class EAchievementOnlineUpdateType : uint8_t
{
	None                           = 0,
	ProgressChangeOnly             = 1,
	Force                          = 2,
	EAchievementOnlineUpdateType_MAX = 3
};


// Enum Indiana.EActorPoolingMethod
enum class EActorPoolingMethod : uint8_t
{
	Unregister                     = 0,
	Hide                           = 1,
	Nothing                        = 2,
	EActorPoolingMethod_MAX        = 3
};


// Enum Indiana.ESoundAcceptanceType
enum class ESoundAcceptanceType : uint8_t
{
	None                           = 0,
	Hostile                        = 1,
	NonHostile                     = 2,
	ChangeHostile                  = 3,
	AutoDetectPlayer               = 4,
	ChangeHostileAutoDetectPlayer  = 5,
	ESoundAcceptanceType_MAX       = 6
};


// Enum Indiana.ESoundDetectionType
enum class ESoundDetectionType : uint8_t
{
	None                           = 0,
	Projectile                     = 1,
	Gun                            = 2,
	Shout                          = 3,
	ShoutLoS                       = 4,
	ShoutDeath                     = 5,
	LockPick                       = 6,
	Hack                           = 7,
	ArmTrap                        = 8,
	DisarmTrap                     = 9,
	Footstep                       = 10,
	PickPocket                     = 11,
	ProjectileWizz                 = 12,
	Bumped                         = 13,
	ShoutSight                     = 14,
	ShoutProxy                     = 15,
	ShoutDeathProxy                = 16,
	NumSoundDetectionType          = 17,
	ESoundDetectionType_MAX        = 18
};


// Enum Indiana.EDetectionDataType
enum class EDetectionDataType : uint8_t
{
	Unknown                        = 0,
	SoundData                      = 1,
	DamageData                     = 2,
	Count                          = 3,
	EDetectionDataType_MAX         = 4
};


// Enum Indiana.ETeamAttitudeFlag
enum class ETeamAttitudeFlag : uint8_t
{
	None                           = 0,
	Friendly                       = 1,
	Neutral                        = 2,
	Hostile                        = 3,
	All                            = 4,
	ETeamAttitudeFlag_MAX          = 5
};


// Enum Indiana.EAsyncQueryResult
enum class EAsyncQueryResult : uint8_t
{
	Invalid                        = 0,
	Pending                        = 1,
	Success                        = 2,
	Failure                        = 3,
	EAsyncQueryResult_MAX          = 4
};


// Enum Indiana.EBehaviorRestoreType
enum class EBehaviorRestoreType : uint8_t
{
	Restore                        = 0,
	None                           = 1,
	Discard                        = 2,
	EBehaviorRestoreType_MAX       = 3
};


// Enum Indiana.ECompanionState
enum class ECompanionState : uint8_t
{
	CompanionNotRecruited          = 0,
	CompanionRecruited             = 1,
	CompanionInActiveParty         = 2,
	CompanionDismissed             = 3,
	ECompanionState_MAX            = 4
};


// Enum Indiana.ECompanionCombatMode
enum class ECompanionCombatMode : uint8_t
{
	Passive                        = 0,
	Defensive                      = 1,
	Aggressive                     = 2,
	ECompanionCombatMode_MAX       = 3
};


// Enum Indiana.ERagdollFreezeState
enum class ERagdollFreezeState : uint8_t
{
	None                           = 0,
	PrePhysicsFreeze               = 1,
	Frozen                         = 2,
	ERagdollFreezeState_MAX        = 3
};


// Enum Indiana.ERagdollSettleState
enum class ERagdollSettleState : uint8_t
{
	None                           = 0,
	Alive                          = 1,
	Dead                           = 2,
	ERagdollSettleState_MAX        = 3
};


// Enum Indiana.EFurnitureAnimationInterrupt
enum class EFurnitureAnimationInterrupt : uint8_t
{
	BlendToBaseIdle                = 0,
	BlendToEnd                     = 1,
	BlendEndToBaseIdleInConversation = 2,
	EFurnitureAnimationInterrupt_MAX = 3
};


// Enum Indiana.EFurnitureBehaviorState
enum class EFurnitureBehaviorState : uint8_t
{
	InitialMove                    = 0,
	MovingToEnter                  = 1,
	MovingToExit                   = 2,
	Furniture                      = 3,
	Conversation                   = 4,
	ReEnterFurniture               = 5,
	Complete                       = 6,
	WaitingToReserve               = 7,
	EFurnitureBehaviorState_MAX    = 8
};


// Enum Indiana.EPseudoGodMode
enum class EPseudoGodMode : uint8_t
{
	Off                            = 0,
	NonPlayer_LowMinHealth         = 1,
	NonPlayer_MediumMinHealth      = 2,
	NonPlayer_HighMinHealth        = 3,
	EPseudoGodMode_MAX             = 4
};


// Enum Indiana.ETetherExpansionEvent
enum class ETetherExpansionEvent : uint8_t
{
	None                           = 0,
	PlayerDamage                   = 1,
	CompanionDamage                = 2,
	NPCDamage                      = 3,
	CompanionCommand               = 4,
	SwitchTargetFromPlayer         = 5,
	SwitchTargetToPlayer           = 6,
	EnterCombat                    = 7,
	ETetherExpansionEvent_MAX      = 8
};


// Enum Indiana.EBribeDifficulty
enum class EBribeDifficulty : uint8_t
{
	CrimeInterrogation             = 0,
	Easy                           = 1,
	Medium                         = 2,
	Hard                           = 3,
	Extreme                        = 4,
	EBribeDifficulty_MAX           = 5
};


// Enum Indiana.ECombatReaction
enum class ECombatReaction : uint8_t
{
	Attack                         = 0,
	Cower                          = 1,
	Flee                           = 2,
	CowerOrFlee                    = 3,
	None                           = 4,
	ECombatReaction_MAX            = 5
};


// Enum Indiana.EDetectionMode
enum class EDetectionMode : uint8_t
{
	Perception                     = 0,
	PlayerProximity                = 1,
	None                           = 2,
	EDetectionMode_MAX             = 3
};


// Enum Indiana.EThirdPersonSocket
enum class EThirdPersonSocket : uint8_t
{
	None                           = 0,
	Chest                          = 1,
	Head                           = 2,
	RightArm                       = 3,
	LeftArm                        = 4,
	RightLeg                       = 5,
	LeftLeg                        = 6,
	Groin                          = 7,
	EThirdPersonSocket_MAX         = 8
};


// Enum Indiana.EStationaryRotateTarget
enum class EStationaryRotateTarget : uint8_t
{
	None                           = 0,
	NextPathCorner                 = 1,
	CurrentTarget                  = 2,
	EStationaryRotateTarget_MAX    = 3
};


// Enum Indiana.EStationaryRotationType
enum class EStationaryRotationType : uint8_t
{
	None                           = 0,
	OutOfCombatOnly                = 1,
	AlwaysDuringTurns              = 2,
	Always                         = 3,
	EStationaryRotationType_MAX    = 4
};


// Enum Indiana.EChangeRelationshipSource
enum class EChangeRelationshipSource : uint8_t
{
	CompanionCommand               = 0,
	CrimeActive                    = 1,
	CrimeDetected                  = 2,
	Default                        = 3,
	EChangeRelationshipSource_MAX  = 4
};


// Enum Indiana.EReputationRankType
enum class EReputationRankType : uint8_t
{
	Bad                            = 0,
	Mixed                          = 1,
	Default                        = 2,
	Good                           = 3,
	EReputationRankType_MAX        = 4
};


// Enum Indiana.EReputationIncrementType
enum class EReputationIncrementType : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Custom                         = 4,
	EReputationIncrementType_MAX   = 5
};


// Enum Indiana.EMoraleContribution
enum class EMoraleContribution : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Custom                         = 3,
	EMoraleContribution_MAX        = 4
};


// Enum Indiana.EReputationActionType
enum class EReputationActionType : uint8_t
{
	Invalid                        = 0,
	Damage                         = 1,
	Kill                           = 2,
	Trespass                       = 3,
	CrimeRestrictedAreaDisguise    = 4,
	CrimeRestrictedAreaNoDisguise  = 5,
	CrimePickpocket                = 6,
	CrimeLockpick                  = 7,
	CrimeHack                      = 8,
	CrimeDisguised                 = 9,
	CrimeTheft                     = 10,
	EReputationActionType_MAX      = 11
};


// Enum Indiana.ETrackingMode
enum class ETrackingMode : uint8_t
{
	None                           = 0,
	Default                        = 1,
	Bark                           = 2,
	Conversation                   = 3,
	Elevator                       = 4,
	ETrackingMode_MAX              = 5
};


// Enum Indiana.ETrackingRegion
enum class ETrackingRegion : uint8_t
{
	TR_Head                        = 0,
	TR_Body                        = 1,
	TR_Eyes                        = 2,
	TR_WeaponAim                   = 3,
	TR_Count                       = 4,
	TR_MAX                         = 5
};


// Enum Indiana.ETrackingPriority
enum class ETrackingPriority : uint8_t
{
	TP_Default                     = 0,
	TP_PersonalSpace               = 1,
	TP_Moving                      = 2,
	TP_Conversation                = 3,
	TP_Scripted                    = 4,
	TP_Behavior                    = 5,
	TP_Reaction                    = 6,
	TP_Debug                       = 7,
	TP_Count                       = 8,
	TP_MAX                         = 9
};


// Enum Indiana.EBehaviorStateCompletionType
enum class EBehaviorStateCompletionType : uint8_t
{
	None                           = 0,
	Success                        = 1,
	Complete                       = 2,
	ExternalComplete               = 3,
	EBehaviorStateCompletionType_MAX = 4
};


// Enum Indiana.EAIEventType
enum class EAIEventType : uint8_t
{
	Invalid                        = 0,
	BehaviorDiscrete               = 1,
	BehaviorContinuous             = 2,
	ExternalDiscrete               = 3,
	ExternalContinuous             = 4,
	EAIEventType_MAX               = 5
};


// Enum Indiana.EStimulusType
enum class EStimulusType : uint8_t
{
	None                           = 0,
	Distraction                    = 1,
	SightInactive                  = 2,
	Projectile                     = 3,
	GenericSound                   = 4,
	DeadBodyKiller                 = 5,
	Shout                          = 6,
	ForceDetect                    = 7,
	SightActive                    = 8,
	Damage                         = 9,
	FriendInCombat                 = 10,
	EncounterAggro                 = 11,
	EnteredRestrictedArea          = 12,
	Crime                          = 13,
	SawFriendKilledByPlayer        = 14,
	AutoDetect                     = 15,
	PickpocketSound                = 16,
	LockpickSound                  = 17,
	HackSound                      = 18,
	EStimulusType_MAX              = 19
};


// Enum Indiana.ETargetOverrideType
enum class ETargetOverrideType : uint8_t
{
	None                           = 0,
	Taunt                          = 1,
	CommandAttack                  = 2,
	CommandCalledShot              = 3,
	ETargetOverrideType_MAX        = 4
};


// Enum Indiana.ETargetRequestType
enum class ETargetRequestType : uint8_t
{
	Clear                          = 0,
	Fresh                          = 1,
	FirstTarget                    = 2,
	Override                       = 3,
	ClearOverride                  = 4,
	Lost                           = 5,
	Untargetable                   = 6,
	Threat                         = 7,
	Unreachable                    = 8,
	Restore                        = 9,
	ETargetRequestType_MAX         = 10
};


// Enum Indiana.ECoverTypes
enum class ECoverTypes : uint8_t
{
	FullHeight                     = 0,
	HalfHeight                     = 1,
	None                           = 2,
	ECoverTypes_MAX                = 3
};


// Enum Indiana.ERangedRepositionCondition
enum class ERangedRepositionCondition : uint8_t
{
	None                           = 0,
	TooNear                        = 1,
	PreferredRange                 = 2,
	TooFar                         = 3,
	ERangedRepositionCondition_MAX = 4
};


// Enum Indiana.ERangedRepositionType
enum class ERangedRepositionType : uint8_t
{
	Default                        = 0,
	Stationary                     = 1,
	Forward                        = 2,
	Backward                       = 3,
	Strafe                         = 4,
	ERangedRepositionType_MAX      = 5
};


// Enum Indiana.EAnimTreeState
enum class EAnimTreeState : uint8_t
{
	None                           = 0,
	Neutral                        = 1,
	Precombat                      = 2,
	CombatNotReady                 = 3,
	Combat                         = 4,
	Count                          = 5,
	EAnimTreeState_MAX             = 6
};


// Enum Indiana.EDecisionTreeContextType
enum class EDecisionTreeContextType : uint8_t
{
	None                           = 0,
	All                            = 1,
	OutOfCombat                    = 2,
	InCombat                       = 3,
	Count                          = 4,
	EDecisionTreeContextType_MAX   = 5
};


// Enum Indiana.EDisablePriority
enum class EDisablePriority : uint8_t
{
	Invalid                        = 0,
	IdleDisable                    = 1,
	ShockFace                      = 2,
	DelayableCombatEffect          = 3,
	LightHitReact                  = 4,
	HeavyHitReact                  = 5,
	ImmediateCombatEffect          = 6,
	CalledShotCombatEffect         = 7,
	PushEffect                     = 8,
	RagdollDisable                 = 9,
	EDisablePriority_MAX           = 10
};


// Enum Indiana.EParentDefaultBehaviorType
enum class EParentDefaultBehaviorType : uint8_t
{
	Idle                           = 0,
	Wander                         = 1,
	EParentDefaultBehaviorType_MAX = 2
};


// Enum Indiana.EDefaultBehaviorType
enum class EDefaultBehaviorType : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Patrol                         = 2,
	Follow                         = 3,
	FollowPlayer                   = 4,
	Wander                         = 5,
	EDefaultBehaviorType_MAX       = 6
};


// Enum Indiana.EBehaviorStatePriority
enum class EBehaviorStatePriority : uint8_t
{
	None                           = 0,
	Default                        = 1,
	SwitchContext                  = 2,
	SwitchWeapon                   = 3,
	Approach                       = 4,
	IdleDisable                    = 5,
	Conversation                   = 6,
	ShockFace                      = 7,
	Blackout                       = 8,
	DelayableCombatEffect          = 9,
	LightHitReact                  = 10,
	HeavyHitReact                  = 11,
	ImmediateCombatEffect          = 12,
	CalledShotCombatEffect         = 13,
	PushEffect                     = 14,
	RagdollDisable                 = 15,
	CalledShot                     = 16,
	ForceTeleport                  = 17,
	Dead                           = 18,
	EBehaviorStatePriority_MAX     = 19
};


// Enum Indiana.EDecisionTreeRequestPriority
enum class EDecisionTreeRequestPriority : uint8_t
{
	None                           = 0,
	OutOfCombat                    = 1,
	Default                        = 2,
	ForcedQueued                   = 3,
	HardScript                     = 4,
	ForcedImmediate                = 5,
	EDecisionTreeRequestPriority_MAX = 6
};


// Enum Indiana.ESlotPriority
enum class ESlotPriority : uint8_t
{
	Lowest                         = 0,
	Low                            = 1,
	Normal                         = 2,
	High                           = 3,
	Highest                        = 4,
	ESlotPriority_MAX              = 5
};


// Enum Indiana.EWeaponSwitchType
enum class EWeaponSwitchType : uint8_t
{
	Type                           = 0,
	Slot                           = 1,
	LimitedRanged                  = 2,
	UnlimitedRanged                = 3,
	CalledShot                     = 4,
	EWeaponSwitchType_MAX          = 5
};


// Enum Indiana.EAvoidanceGroupType
enum class EAvoidanceGroupType : uint8_t
{
	Default                        = 0,
	FleeingCritter                 = 1,
	EAvoidanceGroupType_MAX        = 2
};


// Enum Indiana.EJumpGravityState
enum class EJumpGravityState : uint8_t
{
	Off                            = 0,
	On                             = 1,
	ForcedOn                       = 2,
	EJumpGravityState_MAX          = 3
};


// Enum Indiana.EStationaryRotateState
enum class EStationaryRotateState : uint8_t
{
	None                           = 0,
	Rotating                       = 1,
	EStationaryRotateState_MAX     = 2
};


// Enum Indiana.ETraverseState
enum class ETraverseState : uint8_t
{
	None                           = 0,
	Waiting                        = 1,
	Traversing                     = 2,
	ETraverseState_MAX             = 3
};


// Enum Indiana.EAIMovementState
enum class EAIMovementState : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	Dynamic                        = 3,
	EAIMovementState_MAX           = 4
};


// Enum Indiana.EUsableCoverTypes
enum class EUsableCoverTypes : uint8_t
{
	All                            = 0,
	FullOnly                       = 1,
	HalfOnly                       = 2,
	EUsableCoverTypes_MAX          = 3
};


// Enum Indiana.EDefensiveActionType
enum class EDefensiveActionType : uint8_t
{
	Unknown                        = 0,
	MeleeBlock                     = 1,
	Dodge                          = 2,
	ReactiveRange                  = 3,
	Count                          = 4,
	EDefensiveActionType_MAX       = 5
};


// Enum Indiana.ELostTargetSearchMode
enum class ELostTargetSearchMode : uint8_t
{
	DirectSearch                   = 0,
	RepositionSearch               = 1,
	ELostTargetSearchMode_MAX      = 2
};


// Enum Indiana.ELostTargetWaitTime
enum class ELostTargetWaitTime : uint8_t
{
	Invalid                        = 0,
	VeryShort                      = 1,
	Short                          = 2,
	Medium                         = 3,
	Long                           = 4,
	ELostTargetWaitTime_MAX        = 5
};


// Enum Indiana.EMeleeRecoveryType
enum class EMeleeRecoveryType : uint8_t
{
	None                           = 0,
	Move                           = 1,
	Dodge                          = 2,
	EMeleeRecoveryType_MAX         = 3
};


// Enum Indiana.EMeleeActionUseCase
enum class EMeleeActionUseCase : uint8_t
{
	Default                        = 0,
	WithinRange                    = 1,
	OutsideRange                   = 2,
	AbilityOnly                    = 3,
	ForceIfOutsideRange            = 4,
	EMeleeActionUseCase_MAX        = 5
};


// Enum Indiana.EPatrolType
enum class EPatrolType : uint8_t
{
	OneShot                        = 0,
	Loop                           = 1,
	PingPong                       = 2,
	EPatrolType_MAX                = 3
};


// Enum Indiana.EAggresionType
enum class EAggresionType : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EAggresionType_MAX             = 3
};


// Enum Indiana.ERangeBehaviorType
enum class ERangeBehaviorType : uint8_t
{
	Cover                          = 0,
	Range                          = 1,
	PreferredRange                 = 2,
	None                           = 3,
	ERangeBehaviorType_MAX         = 4
};


// Enum Indiana.EOnEnterCombatBehavior
enum class EOnEnterCombatBehavior : uint8_t
{
	None                           = 0,
	StationaryFire                 = 1,
	StationaryFireIfOutsidePreferredRange = 2,
	EOnEnterCombatBehavior_MAX     = 3
};


// Enum Indiana.ESuppressingFireDuration
enum class ESuppressingFireDuration : uint8_t
{
	Invalid                        = 0,
	Disabled                       = 1,
	Short                          = 2,
	Medium                         = 3,
	Long                           = 4,
	ESuppressingFireDuration_MAX   = 5
};


// Enum Indiana.EWeaponFireType
enum class EWeaponFireType : uint8_t
{
	Ranged                         = 0,
	Melee                          = 1,
	EWeaponFireType_MAX            = 2
};


// Enum Indiana.EAmmoType
enum class EAmmoType : uint8_t
{
	Invalid                        = 0,
	Handgun                        = 1,
	Rifle                          = 2,
	Shotgun                        = 3,
	Battery                        = 4,
	EnergyCell                     = 5,
	RPG                            = 6,
	Needler                        = 7,
	EAmmoType_MAX                  = 8
};


// Enum Indiana.ENotifyChatterEventType
enum class ENotifyChatterEventType : uint8_t
{
	Invalid                        = 0,
	Event01                        = 1,
	Event02                        = 2,
	Event03                        = 3,
	Event04                        = 4,
	Event05                        = 5,
	Event06                        = 6,
	Event07                        = 7,
	Event08                        = 8,
	Event09                        = 9,
	Event10                        = 10,
	Event11                        = 11,
	Event12                        = 12,
	ENotifyChatterEventType_MAX    = 13
};


// Enum Indiana.EDespawnRules
enum class EDespawnRules : uint8_t
{
	Idle                           = 0,
	Combat                         = 1,
	Never                          = 2,
	EDespawnRules_MAX              = 3
};


// Enum Indiana.EHeadStyle
enum class EHeadStyle : uint8_t
{
	Normal                         = 0,
	NormalWithoutBeard             = 1,
	CappedHair                     = 2,
	CappedHairWithoutBeard         = 3,
	HiddenHair                     = 4,
	HiddenHairWithoutBeard         = 5,
	CompletelyHidden               = 6,
	None                           = 7,
	EHeadStyle_MAX                 = 8
};


// Enum Indiana.EArmorModSlot
enum class EArmorModSlot : uint8_t
{
	Armoring                       = 0,
	Resistance                     = 1,
	Dampening                      = 2,
	Utility                        = 3,
	Count                          = 4,
	Invalid                        = 5,
	EArmorModSlot_MAX              = 6
};


// Enum Indiana.EArmorSlot
enum class EArmorSlot : uint8_t
{
	ArmorSet                       = 0,
	Helmet                         = 1,
	Count                          = 2,
	Invalid                        = 3,
	EArmorSlot_MAX                 = 4
};


// Enum Indiana.EAudioLogPackageType
enum class EAudioLogPackageType : uint8_t
{
	BaseGame                       = 0,
	INX01                          = 1,
	INX02                          = 2,
	EAudioLogPackageType_MAX       = 3
};


// Enum Indiana.EUIMarkerType
enum class EUIMarkerType : uint8_t
{
	None                           = 0,
	Quest                          = 1,
	POI_Undiscovered               = 2,
	AreaBeacon                     = 3,
	Enemy                          = 4,
	Hostile                        = 5,
	POI_Discovered                 = 6,
	NonHostile                     = 7,
	HostilePacifist                = 8,
	Error                          = 9,
	EUIMarkerType_MAX              = 10
};


// Enum Indiana.EBeaconType
enum class EBeaconType : uint8_t
{
	None                           = 0,
	Type1                          = 1,
	POI                            = 2,
	Max                            = 3
};


// Enum Indiana.ESpecialBeaconType
enum class ESpecialBeaconType : uint8_t
{
	None                           = 0,
	Ship                           = 1,
	ShipDoor                       = 2,
	ShipTerminal                   = 3,
	ESpecialBeaconType_MAX         = 4
};


// Enum Indiana.EFlowAbortCondition
enum class EFlowAbortCondition : uint8_t
{
	Conditional                    = 0,
	Custom                         = 1,
	EFlowAbortCondition_MAX        = 2
};


// Enum Indiana.EFlowAbortMode
enum class EFlowAbortMode : uint8_t
{
	None                           = 0,
	Self                           = 1,
	EFlowAbortMode_MAX             = 2
};


// Enum Indiana.EAIScriptExecutionType
enum class EAIScriptExecutionType : uint8_t
{
	OnEnter                        = 0,
	OnUpdate                       = 1,
	OnExit                         = 2,
	EAIScriptExecutionType_MAX     = 3
};


// Enum Indiana.EToggleScriptType
enum class EToggleScriptType : uint8_t
{
	OnEnter                        = 0,
	OnExit                         = 1,
	EToggleScriptType_MAX          = 2
};


// Enum Indiana.EAIAnimationParameter
enum class EAIAnimationParameter : uint8_t
{
	InCover                        = 0,
	InvestigatingDeadBody          = 1,
	EAIAnimationParameter_MAX      = 2
};


// Enum Indiana.EAnimationState
enum class EAnimationState : uint8_t
{
	Combat                         = 0,
	PreCombat                      = 1,
	Neutral                        = 2,
	None                           = 3,
	EAnimationState_MAX            = 4
};


// Enum Indiana.ETargetLostResponse
enum class ETargetLostResponse : uint8_t
{
	None                           = 0,
	AIEvent                        = 1,
	RequestNewTarget               = 2,
	ETargetLostResponse_MAX        = 3
};


// Enum Indiana.EFiringPatternState
enum class EFiringPatternState : uint8_t
{
	PrePause                       = 0,
	StartPause                     = 1,
	Burst                          = 2,
	BurstAnimation                 = 3,
	BurstPause                     = 4,
	EndPause                       = 5,
	Invalid                        = 6,
	EFiringPatternState_MAX        = 7
};


// Enum Indiana.EFiringPatternCompleteType
enum class EFiringPatternCompleteType : uint8_t
{
	FinishBehavior                 = 0,
	FinishTask                     = 1,
	Repeat                         = 2,
	EFiringPatternCompleteType_MAX = 3
};


// Enum Indiana.EMoveToResultResponse
enum class EMoveToResultResponse : uint8_t
{
	ContinueTask                   = 0,
	ExitTask                       = 1,
	ExitBehavior                   = 2,
	EMoveToResultResponse_MAX      = 3
};


// Enum Indiana.EMoveToState
enum class EMoveToState : uint8_t
{
	None                           = 0,
	MoveToTarget                   = 1,
	MoveToNavMesh                  = 2,
	PartialSuccess                 = 3,
	WaitForUnblock                 = 4,
	Failed                         = 5,
	Succeeded                      = 6,
	EMoveToState_MAX               = 7
};


// Enum Indiana.EMoveToResult
enum class EMoveToResult : uint8_t
{
	Pending                        = 0,
	Success                        = 1,
	Blocked                        = 2,
	UnexpectedFailure              = 3,
	OffNavMesh                     = 4,
	Repath                         = 5,
	TotalFailure                   = 6,
	EMoveToResult_MAX              = 7
};


// Enum Indiana.EAnimMovementModifierState
enum class EAnimMovementModifierState : uint8_t
{
	None                           = 0,
	Lamed                          = 1,
	Hobbled                        = 2,
	EAnimMovementModifierState_MAX = 3
};


// Enum Indiana.EAnimMovementState
enum class EAnimMovementState : uint8_t
{
	OnGround                       = 0,
	InAir                          = 1,
	Sprinting                      = 2,
	Climbing                       = 3,
	EAnimMovementState_MAX         = 4
};


// Enum Indiana.EDeathType
enum class EDeathType : uint8_t
{
	Corrosive                      = 0,
	Dismember                      = 1,
	Energy                         = 2,
	Gib                            = 3,
	NRay                           = 4,
	Ragdoll                        = 5,
	Shock                          = 6,
	Thermal                        = 7,
	Count                          = 8,
	EDeathType_MAX                 = 9
};


// Enum Indiana.ECharacterDeathTriBool
enum class ECharacterDeathTriBool : uint8_t
{
	BFalse                         = 0,
	BTrue                          = 1,
	Any                            = 2,
	Count                          = 3,
	ECharacterDeathTriBool_MAX     = 4
};


// Enum Indiana.ECharacterGrouping
enum class ECharacterGrouping : uint8_t
{
	None                           = 0,
	Complex                        = 1,
	GuardGardener                  = 2,
	GuardIconoclasts               = 3,
	GuardLlama                     = 4,
	GuardMardets                   = 5,
	GuardOtherCorporate            = 6,
	GuardOutlaws                   = 7,
	GuardSublight                  = 8,
	GuardUDL                       = 9,
	Infected                       = 10,
	Marauder                       = 11,
	RobotBipedCombatant            = 12,
	RobotBipedNonCombatant         = 13,
	RobotHoverCombatant            = 14,
	RobotHoverNonCombatant         = 15,
	RobotTripedCombatant           = 16,
	RobotTripedNonCombatant        = 17,
	TownieByzantium                = 18,
	TownieHoodlum                  = 19,
	TownieLight                    = 20,
	TownieNonByzantium             = 21,
	ECharacterGrouping_MAX         = 22
};


// Enum Indiana.ECreatureXPType
enum class ECreatureXPType : uint8_t
{
	Invalid                        = 0,
	Trivial                        = 1,
	Fodder                         = 2,
	Normal                         = 3,
	Leader                         = 4,
	Boss                           = 5,
	ECreatureXPType_MAX            = 6
};


// Enum Indiana.ECharacterSkillRange
enum class ECharacterSkillRange : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Extreme                        = 3,
	Cosmetic                       = 4,
	Count                          = 5,
	Invalid                        = 6,
	ECharacterSkillRange_MAX       = 7
};


// Enum Indiana.EAttributeGroup
enum class EAttributeGroup : uint8_t
{
	Body                           = 0,
	Mind                           = 1,
	Personality                    = 2,
	Count                          = 3,
	Invalid                        = 4,
	EAttributeGroup_MAX            = 5
};


// Enum Indiana.EChatterEventType
enum class EChatterEventType : uint8_t
{
	ALL_BlockHit                   = 0,
	ALL_Death                      = 1,
	ALL_DeathCorrosive             = 2,
	ALL_DeathEnergy                = 3,
	ALL_DeathGibbed                = 4,
	ALL_DeathNray                  = 5,
	ALL_DeathShock                 = 6,
	ALL_DeathThermal               = 7,
	ALL_FallDamage                 = 8,
	ALL_Hit                        = 9,
	ALL_HitCrit                    = 10,
	ALL_HitGraze                   = 11,
	ALL_HitHeavy                   = 12,
	ALL_HitNoDamage                = 13,
	ALL_LowHealth                  = 14,
	ALL_Melee                      = 15,
	ALL_MeleeHeavy                 = 16,
	ALL_MeleeSweep                 = 17,
	ALL_MovementDodge              = 18,
	ALL_MovementFalling            = 19,
	ALL_MovementJump               = 20,
	ALL_MovementLand               = 21,
	ALL_StateAcid                  = 22,
	ALL_StateBleed                 = 23,
	ALL_StateBlind                 = 24,
	ALL_StateBurning               = 25,
	ALL_StateConcuss               = 26,
	ALL_StateCripple               = 27,
	ALL_StateKnockback             = 28,
	ALL_StateMaim                  = 29,
	ALL_StatePoison                = 30,
	ALL_StateStaggered             = 31,
	COM_CommandAttack              = 32,
	COM_CommandCalledshot1         = 33,
	COM_CommandCalledshot2         = 34,
	COM_CommandCalledshot3         = 35,
	COM_CommandMoveInvalidLocation = 36,
	COM_CommandMove                = 37,
	COM_CommandReturn              = 38,
	COM_HackSuccessEasy            = 39,
	COM_HackSuccessHard            = 40,
	COM_Idle                       = 41,
	COM_LockpickSuccessEasy        = 42,
	COM_LockpickSuccessHard        = 43,
	COM_PartyCombatEnd             = 44,
	COM_PartyCombatEndNoDamageTaken = 45,
	COM_PartyCombatStartAttacked   = 46,
	COM_PartyCombatStartAttacking  = 47,
	COM_PartyCombatStartEasy       = 48,
	COM_PartyCombatStartHard       = 49,
	COM_PlayerDeath                = 50,
	COM_PlayerHitCrit              = 51,
	COM_PlayerHitGraze             = 52,
	COM_PlayerHitGrazeCorrosive    = 53,
	COM_PlayerHitGrazeEnergy       = 54,
	COM_PlayerHitGrazeNray         = 55,
	COM_PlayerHitGrazeShock        = 56,
	COM_PlayerHitGrazeThermal      = 57,
	COM_PlayerKill                 = 58,
	COM_PlayerKillStealth          = 59,
	COM_PlayerLowHealth            = 60,
	COM_PlayerUseDrug              = 61,
	COM_ResumeBanter               = 62,
	COM_StealthEnter               = 63,
	COM_StealthExit                = 64,
	COM_StealthWarning             = 65,
	COM_WantsToTalk                = 66,
	NPC_AlertAllyDeath             = 67,
	NPC_AlertCorpse                = 68,
	NPC_AlertInvestigate           = 69,
	NPC_AlertSuspicious            = 70,
	NPC_CombatEndLostTarget        = 71,
	NPC_CombatEndTether            = 72,
	NPC_CombatEndVictory           = 73,
	NPC_CombatSearchIdle           = 74,
	NPC_CombatStartAttacked        = 75,
	NPC_CombatStartAttacking       = 76,
	NPC_CombatStartCrime           = 77,
	NPC_CombatStartScared          = 78,
	NPC_CombatTargetLost           = 79,
	NPC_CombatTargetReacquired     = 80,
	NPC_CrimeDetected              = 81,
	NPC_CrimeDetectedDisguise      = 82,
	NPC_CrimeDetectedHack          = 83,
	NPC_CrimeDetectedLockpick      = 84,
	NPC_CrimeDetectedPickpocket    = 85,
	NPC_CrimeDetectedRestrictedArea = 86,
	NPC_CrimeDetectedTheft         = 87,
	NPC_CrimeFleeing               = 88,
	NPC_DialogIntimidated          = 89,
	NPC_DialogLiedTo               = 90,
	NPC_DialogPersuaded            = 91,
	NPC_FriendlyFire               = 92,
	NPC_InterrogationBegin         = 93,
	NPC_InterrogationBeginRestrictedArea = 94,
	NPC_InterrogationBribed        = 95,
	NPC_InterrogationConvinced     = 96,
	NPC_InterrogationFight         = 97,
	NPC_InvestigateGiveUp          = 98,
	NPC_Kill                       = 99,
	NPC_MeleeWaiting               = 100,
	NPC_NoConversation             = 101,
	NPC_HeardCombat                = 102,
	NPC_ObserveCombat              = 103,
	NPC_PerfectDisguise            = 104,
	NPC_PersonalSpaceEnter         = 105,
	NPC_PersonalSpaceExit          = 106,
	NPC_SelfAdvance                = 107,
	NPC_SelfCover                  = 108,
	NPC_SelfReload                 = 109,
	NPC_SelfSuppress               = 110,
	NPC_SelfSwitchTarget           = 111,
	NPC_SquadAdvance               = 112,
	NPC_SquadCover                 = 113,
	NPC_SquadSuppress              = 114,
	NPC_SquadSwitchTarget          = 115,
	NPC_StateDisarmed              = 116,
	NPC_StateKnockdown             = 117,
	NPC_StateKnockout              = 118,
	NPC_StateStunned               = 119,
	NPC_Threatened                 = 120,
	PL_Medkit                      = 121,
	PL_SkillIntimidate             = 122,
	PL_SkillLie                    = 123,
	PL_SkillPersuade               = 124,
	ROBO_HackPowerDown             = 125,
	ROBO_HackPowerUp               = 126,
	ROBO_HackWarning               = 127,
	COM_NPCTargetedPlayerBack      = 128,
	COM_NPCTargetedPlayerFront     = 129,
	COM_NPCTargetedPlayerLeft      = 130,
	COM_NPCTargetedPlayerRight     = 131,
	AnimNotify01                   = 132,
	AnimNotify02                   = 133,
	AnimNotify03                   = 134,
	AnimNotify04                   = 135,
	AnimNotify05                   = 136,
	AnimNotify06                   = 137,
	AnimNotify07                   = 138,
	AnimNotify08                   = 139,
	AnimNotify09                   = 140,
	AnimNotify10                   = 141,
	AnimNotify11                   = 142,
	AnimNotify12                   = 143,
	Cutscene_Line01                = 144,
	Cutscene_Line02                = 145,
	Cutscene_Line03                = 146,
	Cutscene_Line04                = 147,
	Cutscene_Line05                = 148,
	Cutscene_Line06                = 149,
	Cutscene_Line07                = 150,
	Cutscene_Line08                = 151,
	Cutscene_Line09                = 152,
	Cutscene_Line10                = 153,
	Cutscene_Line11                = 154,
	Cutscene_Line12                = 155,
	Cutscene_Line13                = 156,
	Cutscene_Line14                = 157,
	Cutscene_Line15                = 158,
	Cutscene_Line16                = 159,
	Stub1                          = 160,
	Stub2                          = 161,
	Stub3                          = 162,
	Stub4                          = 163,
	Stub5                          = 164,
	Count                          = 165,
	EChatterEventType_MAX          = 166
};


// Enum Indiana.EChatterLevel
enum class EChatterLevel : uint8_t
{
	All                            = 0,
	EventType                      = 1,
	Group                          = 2,
	Character                      = 3,
	EChatterLevel_MAX              = 4
};


// Enum Indiana.EClearThreatTarget
enum class EClearThreatTarget : uint8_t
{
	Applier                        = 0,
	Companions                     = 1,
	Player                         = 2,
	EClearThreatTarget_MAX         = 3
};


// Enum Indiana.ECameraParamsScore
enum class ECameraParamsScore : uint8_t
{
	Invalid                        = 0,
	Fail                           = 1,
	InitialEnvSweepFail            = 2,
	InitialEnvCharSweepFail        = 3,
	EnvClear                       = 4,
	InitialEnvCharSweepEnv         = 5,
	EnvCharClear                   = 6,
	ECameraParamsScore_MAX         = 7
};


// Enum Indiana.ECompanionSlot
enum class ECompanionSlot : uint8_t
{
	Slot1                          = 0,
	Slot2                          = 1,
	ECompanionSlot_MAX             = 2
};


// Enum Indiana.ECompanionFollowDistance
enum class ECompanionFollowDistance : uint8_t
{
	Close                          = 0,
	Medium                         = 1,
	Far                            = 2,
	Invalid                        = 3,
	ECompanionFollowDistance_MAX   = 4
};


// Enum Indiana.ECompanionPosition
enum class ECompanionPosition : uint8_t
{
	CompanionLeft                  = 0,
	CompanionRight                 = 1,
	NumCompanionPositions          = 2,
	Follower                       = 3,
	ECompanionPosition_MAX         = 4
};


// Enum Indiana.EEaseType
enum class EEaseType : uint8_t
{
	CircularIn                     = 0,
	CircularOut                    = 1,
	CircularInOut                  = 2,
	EaseIn                         = 3,
	EaseOut                        = 4,
	EaseInOut                      = 5,
	ExpoIn                         = 6,
	ExpoOut                        = 7,
	ExpoInOut                      = 8,
	SinIn                          = 9,
	SinOut                         = 10,
	SinInOut                       = 11,
	Step                           = 12,
	Lerp                           = 13,
	EEaseType_MAX                  = 14
};


// Enum Indiana.EComputerTerminalResult
enum class EComputerTerminalResult : uint8_t
{
	Success                        = 0,
	Failed_Locked                  = 1,
	Failed_Locked_Permanent        = 2,
	Failed_Locked_Key_NoHack       = 3,
	Failed_Locked_ComputerNoKey_HackResource = 4,
	Failed_Locked_Key_HackResource = 5,
	Failed_Locked_Hack_SkillInsufficient = 6,
	Failed_Locked_Error            = 7,
	Pending_Hacking                = 8,
	EComputerTerminalResult_MAX    = 9
};


// Enum Indiana.EComputerTerminalEventType
enum class EComputerTerminalEventType : uint8_t
{
	Invalid                        = 0,
	Use                            = 1,
	Unlocked                       = 2,
	UnlockAttemptedLocked          = 3,
	Locked                         = 4,
	InsufficientSkill              = 5,
	HackSuccess                    = 6,
	HackStart                      = 7,
	HackInterrupted                = 8,
	InteractLoopFinished           = 9,
	EComputerTerminalEventType_MAX = 10
};


// Enum Indiana.EComputerType
enum class EComputerType : uint8_t
{
	Invalid                        = 0,
	None                           = 1,
	SpacersChoice                  = 2,
	AuntieCleos                    = 3,
	UniversalDefenseLogistics      = 4,
	CandP                          = 5,
	Rizzo                          = 6,
	MonarchStellarIndustries       = 7,
	TandL                          = 8,
	Error                          = 9,
	TheGroundbreaker               = 10,
	TheHope                        = 11,
	Iconoclast                     = 12,
	JobBoard                       = 13,
	EComputerType_MAX              = 14
};


// Enum Indiana.EConversationRestrictions
enum class EConversationRestrictions : uint8_t
{
	None                           = 0,
	Combat                         = 1,
	HostileSE                      = 2,
	All                            = 3,
	EConversationRestrictions_MAX  = 4
};


// Enum Indiana.EPayloadID
enum class EPayloadID : uint8_t
{
	None                           = 0,
	Payload1                       = 1,
	Payload2                       = 2,
	Payload3                       = 3,
	Payload4                       = 4,
	Payload5                       = 5,
	Payload6                       = 6,
	Payload7                       = 7,
	Payload8                       = 8,
	Payload9                       = 9,
	Payload10                      = 10,
	Payload11                      = 11,
	Payload12                      = 12,
	Payload13                      = 13,
	Payload14                      = 14,
	Payload15                      = 15,
	Payload16                      = 16,
	Payload17                      = 17,
	Payload18                      = 18,
	Payload19                      = 19,
	Payload20                      = 20,
	Payload21                      = 21,
	Payload22                      = 22,
	Payload23                      = 23,
	Payload24                      = 24,
	Payload25                      = 25,
	Payload26                      = 26,
	Payload27                      = 27,
	Payload28                      = 28,
	Payload29                      = 29,
	Payload30                      = 30,
	EPayloadID_MAX                 = 31
};


// Enum Indiana.ECameraFramingOffset
enum class ECameraFramingOffset : uint8_t
{
	Auto                           = 0,
	Center                         = 1,
	Left                           = 2,
	Right                          = 3,
	ECameraFramingOffset_MAX       = 4
};


// Enum Indiana.ECreateItemCountRule
enum class ECreateItemCountRule : uint8_t
{
	UseItemDefinitionCount         = 0,
	UseFormulaTier1Count           = 1,
	UseFormulaTier2Count           = 2,
	UseFormulaTier3Count           = 3,
	ECreateItemCountRule_MAX       = 4
};


// Enum Indiana.FCreditsSpacingType
enum class EFCreditsSpacingType : uint8_t
{
	None                           = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Average                        = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	FCreditsSpacingType_MAX        = 6
};


// Enum Indiana.FCreditsTextType
enum class EFCreditsTextType : uint8_t
{
	None                           = 0,
	Header                         = 1,
	Subheader                      = 2,
	Title                          = 3,
	Subtitle                       = 4,
	Normal                         = 5,
	FCreditsTextType_MAX           = 6
};


// Enum Indiana.FCreditsDisplayType
enum class EFCreditsDisplayType : uint8_t
{
	None                           = 0,
	Text                           = 1,
	Image                          = 2,
	Spacing                        = 3,
	FCreditsDisplayType_MAX        = 4
};


// Enum Indiana.EMeleeAttackType
enum class EMeleeAttackType : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	WindUp                         = 3,
	EMeleeAttackType_MAX           = 4
};


// Enum Indiana.EHitReactType
enum class EHitReactType : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	EHitReactType_MAX              = 3
};


// Enum Indiana.EDamageFlags
enum class EDamageFlags : uint8_t
{
	None                           = 0,
	Critical                       = 1,
	Graze                          = 2,
	Melee                          = 3,
	CalledShot                     = 4,
	Stealth                        = 5,
	NoDamage                       = 6,
	Blocked                        = 7,
	Range                          = 8,
	IgnoreNonSealedArmor           = 9,
	WeakSpot                       = 10,
	KillingBlow                    = 11,
	CanDamageFriends               = 12,
	AllDamageTypes                 = 13,
	PowerAttack                    = 14,
	IgnorePostArmorMult            = 15,
	SweepAttack                    = 16,
	FriendlyFire                   = 17,
	TacticalTimeDilation           = 18,
	ScienceWeapon                  = 19,
	IgnoreDTDR                     = 20,
	Suicide                        = 21,
	HeadShot                       = 22,
	ApplyOnTick                    = 23,
	Spell                          = 24,
	IsLastTarget                   = 25,
	EDamageFlags_MAX               = 26
};


// Enum Indiana.EDamageScalars
enum class EDamageScalars : uint8_t
{
	WeaponLevel                    = 0,
	CharLevel                      = 1,
	TargetLevel                    = 2,
	WeaponDurability               = 3,
	SneakAttack                    = 4,
	WeaponCritMult                 = 5,
	SimulateCrit                   = 6,
	EDamageScalars_MAX             = 7
};


// Enum Indiana.EDamageValueType
enum class EDamageValueType : uint8_t
{
	Value                          = 0,
	Percent                        = 1,
	EDamageValueType_MAX           = 2
};


// Enum Indiana.EDamageBaseAmount
enum class EDamageBaseAmount : uint8_t
{
	Default                        = 0,
	WeaponDPS                      = 1,
	EDamageBaseAmount_MAX          = 2
};


// Enum Indiana.EDecisionTreeProcessType
enum class EDecisionTreeProcessType : uint8_t
{
	None                           = 0,
	FirstSuccess                   = 1,
	Sequential                     = 2,
	EDecisionTreeProcessType_MAX   = 3
};


// Enum Indiana.EStateInfoResultType
enum class EStateInfoResultType : uint8_t
{
	Failure                        = 0,
	Success                        = 1,
	RunScript                      = 2,
	EStateInfoResultType_MAX       = 3
};


// Enum Indiana.EDestructibleState
enum class EDestructibleState : uint8_t
{
	Pristine                       = 0,
	Damaged                        = 1,
	Destroyed                      = 2,
	EDestructibleState_MAX         = 3
};


// Enum Indiana.EDestructibleEventType
enum class EDestructibleEventType : uint8_t
{
	Invalid                        = 0,
	Pristine                       = 1,
	Damaged                        = 2,
	Destroyed                      = 3,
	EDestructibleEventType_MAX     = 4
};


// Enum Indiana.EDialogPromptMode
enum class EDialogPromptMode : uint8_t
{
	AcceptCancel                   = 0,
	ContinueCancel                 = 1,
	YesNo                          = 2,
	ConfirmBack                    = 3,
	KeepRevert                     = 4,
	EDialogPromptMode_MAX          = 5
};


// Enum Indiana.EVOPositioning
enum class EVOPositioning : uint8_t
{
	Default                        = 0,
	NonPositional                  = 1,
	Positional                     = 2,
	EVOPositioning_MAX             = 3
};


// Enum Indiana.EDisableTrackingType
enum class EDisableTrackingType : uint8_t
{
	Locked                         = 0,
	TrackCaster                    = 1,
	None                           = 2,
	EDisableTrackingType_MAX       = 3
};


// Enum Indiana.EDisguiseKeyResult
enum class EDisguiseKeyResult : uint8_t
{
	MissingShroud                  = 0,
	MissingKey                     = 1,
	Passed                         = 2,
	EDisguiseKeyResult_MAX         = 3
};


// Enum Indiana.EWeatherType
enum class EWeatherType : uint8_t
{
	None                           = 0,
	Rain                           = 1,
	Dust                           = 2,
	Snow                           = 3,
	EWeatherType_MAX               = 4
};


// Enum Indiana.EElevatorEventType
enum class EElevatorEventType : uint8_t
{
	Invalid                        = 0,
	MoveStart                      = 1,
	MoveEnd                        = 2,
	EElevatorEventType_MAX         = 3
};


// Enum Indiana.ECoreFaceEmotion
enum class ECoreFaceEmotion : uint8_t
{
	DoNotChange                    = 0,
	Fear                           = 1,
	Angry                          = 2,
	Disgust                        = 3,
	Flirtatious                    = 4,
	Happy                          = 5,
	Sad                            = 6,
	Shock                          = 7,
	Neutral                        = 8,
	Annoyed                        = 9,
	Anxious                        = 10,
	Awkward                        = 11,
	Despair                        = 12,
	Proud                          = 13,
	Skeptical                      = 14,
	SlightlyAngry                  = 15,
	SlightlyHappy                  = 16,
	Livid                          = 17,
	SlightlyAnnoyed                = 18,
	Smolder                        = 19,
	Confused                       = 20,
	Smug                           = 21,
	Grimace                        = 22,
	Smirk                          = 23,
	ECoreFaceEmotion_MAX           = 24
};


// Enum Indiana.EPosture
enum class EPosture : uint8_t
{
	Conspiratorial                 = 0,
	Drunk                          = 1,
	DrunkBar                       = 2,
	Thinking                       = 3,
	Neutral                        = 4,
	Angry                          = 5,
	Relaxed                        = 6,
	ReadDocument                   = 7,
	EPosture_MAX                   = 8
};


// Enum Indiana.EEmotion
enum class EEmotion : uint8_t
{
	DoNotUse                       = 0,
	Angry                          = 1,
	Annoyed                        = 2,
	Anxious                        = 3,
	Awkward                        = 4,
	Conspiratorial                 = 5,
	Despair                        = 6,
	Drunk                          = 7,
	Happy                          = 8,
	Neutral                        = 9,
	Proud                          = 10,
	Sad                            = 11,
	Shock                          = 12,
	Skeptical                      = 13,
	SlightlyAngry                  = 14,
	SlightlyHappy                  = 15,
	Smirk                          = 16,
	Smolder                        = 17,
	Thinking                       = 18,
	WorkBench                      = 19,
	Livid                          = 20,
	SlightlyAnnoyed                = 21,
	LookDown                       = 22,
	LookLeft                       = 23,
	LookRight                      = 24,
	LookUp                         = 25,
	DrunkBar                       = 26,
	Fear                           = 27,
	Disgust                        = 28,
	Injured                        = 29,
	SmolderNew                     = 30,
	Confused                       = 31,
	Smug                           = 32,
	Grimace                        = 33,
	Yes                            = 34,
	No                             = 35,
	AngryPosture                   = 36,
	RelaxedPosture                 = 37,
	ReadDocumentPosture            = 38,
	NumEmotionStates               = 39,
	EEmotion_MAX                   = 40
};


// Enum Indiana.EEncounterAggroType
enum class EEncounterAggroType : uint8_t
{
	Default                        = 0,
	On                             = 1,
	Off                            = 2,
	EEncounterAggroType_MAX        = 3
};


// Enum Indiana.EEndGameImageType
enum class EEndGameImageType : uint8_t
{
	Invalid                        = 0,
	SkipHopeToSun                  = 1,
	BoardPath                      = 2,
	ScientistPath                  = 3,
	EEndGameImageType_MAX          = 4
};


// Enum Indiana.EHolsterRequestSource
enum class EHolsterRequestSource : uint8_t
{
	None                           = 0,
	Player                         = 1,
	Ladder                         = 2,
	Medkit                         = 3,
	Scripted                       = 4,
	EHolsterRequestSource_MAX      = 5
};


// Enum Indiana.EEventEffectFloatParams
enum class EEventEffectFloatParams : uint8_t
{
	Duration                       = 0,
	Size                           = 1,
	Scalar                         = 2,
	NormalizedStartTime            = 3,
	SkipAnimations                 = 4,
	Count                          = 5,
	Invalid                        = 6,
	EEventEffectFloatParams_MAX    = 7
};


// Enum Indiana.ETTDState
enum class ETTDState : uint8_t
{
	Invalid                        = 0,
	TTDOnly                        = 1,
	NotInTTDOnly                   = 2,
	ETTDState_MAX                  = 3
};


// Enum Indiana.EFactionHardEnum
enum class EFactionHardEnum : uint8_t
{
	Anarchists                     = 0,
	Byzantium                      = 1,
	CnPFactory                     = 2,
	Deserters                      = 3,
	EmeraldVale                    = 4,
	Fairfield                      = 5,
	Groundbreaker                  = 6,
	InformationBroker              = 7,
	Keystone                       = 8,
	Marauders                      = 9,
	MatherFamily                   = 10,
	Midway                         = 11,
	MSI                            = 12,
	Roseway                        = 13,
	SpacersChoice                  = 14,
	StellarBayResidents            = 15,
	Syndicate                      = 16,
	TartarusMilitary               = 17,
	TartarusPrisoners              = 18,
	TartarusWorkers                = 19,
	TheBoard                       = 20,
	TheHope                        = 21,
	Count                          = 22,
	EFactionHardEnum_MAX           = 23
};


// Enum Indiana.EFactionVisibility
enum class EFactionVisibility : uint8_t
{
	Never                          = 0,
	Always                         = 1,
	Encounter                      = 2,
	EFactionVisibility_MAX         = 3
};


// Enum Indiana.ERapidFireMode
enum class ERapidFireMode : uint8_t
{
	None                           = 0,
	RapidFire                      = 1,
	FineRapidFire                  = 2,
	ERapidFireMode_MAX             = 3
};


// Enum Indiana.EFireMode
enum class EFireMode : uint8_t
{
	Automatic                      = 0,
	Burst                          = 1,
	Charge                         = 2,
	SemiAutomatic                  = 3,
	SpinUp                         = 4,
	ProjectileCharge               = 5,
	EFireMode_MAX                  = 6
};


// Enum Indiana.EFlawTrigger
enum class EFlawTrigger : uint8_t
{
	SpendMoney                     = 0,
	EyeInjury                      = 1,
	HeadInjury                     = 2,
	DialogFastSelection            = 3,
	DialogAttack                   = 4,
	SetOffAlarm                    = 5,
	MaimedArm                      = 6,
	CrippledLeg                    = 7,
	Blinded                        = 8,
	Concussed                      = 9,
	DamageThermal                  = 10,
	DamageCorrosion                = 11,
	DamageNRay                     = 12,
	DamageShock                    = 13,
	DamagePoison                   = 14,
	DamageSwarm                    = 15,
	DamageFalling                  = 16,
	DamageRaptidon                 = 17,
	DamageRobot                    = 18,
	DamagePhysical                 = 19,
	AddictionDrug                  = 20,
	AddictionFood                  = 21,
	AddictionAlcohol               = 22,
	AddictionSmoke                 = 23,
	Count                          = 24,
	EFlawTrigger_MAX               = 25
};


// Enum Indiana.EFlawType
enum class EFlawType : uint8_t
{
	Systemic                       = 0,
	Specific                       = 1,
	EFlawType_MAX                  = 2
};


// Enum Indiana.ETalkNodeVOAttenuationType
enum class ETalkNodeVOAttenuationType : uint8_t
{
	Default                        = 0,
	None                           = 1,
	SmallDistance                  = 2,
	MediumDistance                 = 3,
	LargeDistance                  = 4,
	Custom01                       = 5,
	Custom02                       = 6,
	Custom03                       = 7,
	Custom04                       = 8,
	Custom05                       = 9,
	Custom06                       = 10,
	Custom07                       = 11,
	Custom08                       = 12,
	Custom09                       = 13,
	Custom10                       = 14,
	ETalkNodeVOAttenuationType_MAX = 15
};


// Enum Indiana.EQuestDifficulty
enum class EQuestDifficulty : uint8_t
{
	Easy                           = 0,
	Normal                         = 1,
	Hard                           = 2,
	Deadly                         = 3,
	Count                          = 4,
	EQuestDifficulty_MAX           = 5
};


// Enum Indiana.EQuestLocation
enum class EQuestLocation : uint8_t
{
	EmeraldVale                    = 0,
	Groundbreaker                  = 1,
	Terra2                         = 2,
	Monarch                        = 3,
	Tartarus                       = 4,
	Roseway                        = 5,
	Scylla                         = 6,
	Hephaestus                     = 7,
	Space                          = 8,
	Hope                           = 9,
	Gorgon                         = 10,
	Eridanos                       = 11,
	PhaethonPilothouse             = 12,
	RizzosDistillationStation      = 13,
	EridanosSpaceport              = 14,
	TheGrandColonialHotel          = 15,
	WildernessExploitationReserve  = 16,
	RizzosPurpleberryOrchards      = 17,
	RizzosResearchDevelopmentDistrictLabs = 18,
	HappyDaleFarms                 = 19,
	StormtailShelter               = 20,
	None                           = 21,
	Count                          = 22,
	EQuestLocation_MAX             = 23
};


// Enum Indiana.EResponseType
enum class EResponseType : uint8_t
{
	None                           = 0,
	Lie                            = 1,
	Intimidate                     = 2,
	Persuade                       = 3,
	Dumb                           = 4,
	Science                        = 5,
	EResponseType_MAX              = 6
};


// Enum Indiana.EOEIQuestType
enum class EOEIQuestType : uint8_t
{
	MajorStoryQuest                = 0,
	MajorSideQuest                 = 1,
	Task                           = 2,
	MinorStoryQuest                = 3,
	MinorSideQuest                 = 4,
	MajorFaction                   = 5,
	MinorFaction                   = 6,
	Companion                      = 7,
	INX1MajorStoryQuest            = 8,
	INX1MajorSideQuest             = 9,
	INX1Task                       = 10,
	INX1MinorStoryQuest            = 11,
	INX1MinorSideQuest             = 12,
	INX1MajorFaction               = 13,
	INX1MinorFaction               = 14,
	INX1Companion                  = 15,
	INX2MajorStoryQuest            = 16,
	INX2MajorSideQuest             = 17,
	INX2Task                       = 18,
	INX2MinorStoryQuest            = 19,
	INX2MinorSideQuest             = 20,
	INX2MajorFaction               = 21,
	INX2MinorFaction               = 22,
	INX2Companion                  = 23,
	EOEIQuestType_MAX              = 24
};


// Enum Indiana.EQuestType
enum class EQuestType : uint8_t
{
	MajorStoryQuest                = 0,
	MinorStoryQuest                = 1,
	INX1MajorStoryQuest            = 2,
	INX1MinorStoryQuest            = 3,
	INX2MajorStoryQuest            = 4,
	INX2MinorStoryQuest            = 5,
	MajorSideQuest                 = 6,
	MinorSideQuest                 = 7,
	INX1MajorSideQuest             = 8,
	INX1MinorSideQuest             = 9,
	INX2MajorSideQuest             = 10,
	INX2MinorSideQuest             = 11,
	MajorFaction                   = 12,
	MinorFaction                   = 13,
	INX1MajorFaction               = 14,
	INX1MinorFaction               = 15,
	INX2MajorFaction               = 16,
	INX2MinorFaction               = 17,
	Companion                      = 18,
	INX1Companion                  = 19,
	INX2Companion                  = 20,
	Task                           = 21,
	INX1Task                       = 22,
	INX2Task                       = 23,
	Count                          = 24,
	EQuestType_MAX                 = 25
};


// Enum Indiana.QuestionNodeDisplayType
enum class EQuestionNodeDisplayType : uint8_t
{
	ShowOnce                       = 0,
	ShowAlways                     = 1,
	ShowNever                      = 2,
	QuestionNodeDisplayType_MAX    = 3
};


// Enum Indiana.FlowChartNodeType
enum class EFlowChartNodeType : uint8_t
{
	Talk                           = 0,
	PlayerResponse                 = 1,
	Script                         = 2,
	TriggerConversation            = 3,
	Chatter                        = 4,
	Bank                           = 5,
	Quest                          = 6,
	Objective                      = 7,
	EndState                       = 8,
	GlobalQuest                    = 9,
	BranchComplete                 = 10,
	ChatterEvent                   = 11,
	ChatterBranch                  = 12,
	SoundEffect                    = 13,
	FlowChartNodeType_MAX          = 14
};


// Enum Indiana.NodeDisplayType
enum class ENodeDisplayType : uint8_t
{
	Hidden                         = 0,
	Conversation                   = 1,
	Bark                           = 2,
	Overlay                        = 3,
	NodeDisplayType_MAX            = 4
};


// Enum Indiana.NodePlayType
enum class ENodePlayType : uint8_t
{
	Normal                         = 0,
	Random                         = 1,
	CycleLoop                      = 2,
	CycleStop                      = 3,
	CycleRandom                    = 4,
	NodePlayType_MAX               = 5
};


// Enum Indiana.ConversationType
enum class EConversationType : uint8_t
{
	Conversation                   = 0,
	Chatter                        = 1,
	Count                          = 2,
	Invalid                        = 3,
	ConversationType_MAX           = 4
};


// Enum Indiana.PersistenceType
enum class EPersistenceType : uint8_t
{
	None                           = 0,
	OnceEver                       = 1,
	OncePerConversation            = 2,
	MarkAsRead                     = 3,
	PersistenceType_MAX            = 4
};


// Enum Indiana.EParticleSpawnType
enum class EParticleSpawnType : uint8_t
{
	AtStepLocation                 = 0,
	AtSocketLocation               = 1,
	AttachedToSocket               = 2,
	EParticleSpawnType_MAX         = 3
};


// Enum Indiana.EClimbValidityStatus
enum class EClimbValidityStatus : uint8_t
{
	Valid                          = 0,
	InvalidStart                   = 1,
	InvalidExit                    = 2,
	InvalidStartExit               = 3,
	EClimbValidityStatus_MAX       = 4
};


// Enum Indiana.EFurniturePreviewType
enum class EFurniturePreviewType : uint8_t
{
	Start                          = 0,
	Loop                           = 1,
	Exit                           = 2,
	EFurniturePreviewType_MAX      = 3
};


// Enum Indiana.EEntryLocationStatus
enum class EEntryLocationStatus : uint8_t
{
	Clear                          = 0,
	InvalidLocation                = 1,
	Ignored                        = 2,
	InvalidNav                     = 3,
	InvalidExitLocation            = 4,
	SpaceBlocked                   = 5,
	MissingFloor                   = 6,
	EEntryLocationStatus_MAX       = 7
};


// Enum Indiana.EGender
enum class EGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	Neuter                         = 2,
	Count                          = 3,
	EGender_MAX                    = 4
};


// Enum Indiana.ENotificationState
enum class ENotificationState : uint8_t
{
	NotificationHidden             = 0,
	NotificationFadingIn           = 1,
	NotificationFadingInComplete   = 2,
	NotificationSetText            = 3,
	NotificationAnimateIn          = 4,
	NotificationAnimateInComplete  = 5,
	NotificationVisible            = 6,
	NotificationShowText           = 7,
	NotificationAnimateOut         = 8,
	NotificationAnimateOutComplete = 9,
	NotificationFadingOut          = 10,
	NotificationFadingOutComplete  = 11,
	ENotificationState_MAX         = 12
};


// Enum Indiana.EInputBindingType
enum class EInputBindingType : uint8_t
{
	Press                          = 0,
	PressAndRelease                = 1,
	ReleaseNotHeld                 = 2,
	ReleaseNoConsume               = 3,
	Release                        = 4,
	HoldPoint25                    = 5,
	HoldPoint35                    = 6,
	HoldPoint5                     = 7,
	Hold1                          = 8,
	Hold1Point5                    = 9,
	Axis                           = 10,
	Linked                         = 11,
	ReleaseOnHeldPoint25           = 12,
	ReleaseOnHeldPoint35           = 13,
	ReleaseOnHeldPoint5            = 14,
	ReleaseOnHeld1                 = 15,
	ReleaseOnHeld1Point5           = 16,
	Invalid                        = 17,
	EInputBindingType_MAX          = 18
};


// Enum Indiana.EStickLayoutType
enum class EStickLayoutType : uint8_t
{
	Righty                         = 0,
	Lefty                          = 1,
	EStickLayoutType_MAX           = 2
};


// Enum Indiana.EGamepadLayoutType
enum class EGamepadLayoutType : uint8_t
{
	Standard                       = 0,
	Modern                         = 1,
	Legacy                         = 2,
	Flipped                        = 3,
	EGamepadLayoutType_MAX         = 4
};


// Enum Indiana.EButtonPress
enum class EButtonPress : uint8_t
{
	Invalid                        = 0,
	OnPress                        = 1,
	OnTap                          = 2,
	OnHold                         = 3,
	OnRelease                      = 4,
	EButtonPress_MAX               = 5
};


// Enum Indiana.EMeleeAction
enum class EMeleeAction : uint8_t
{
	Invalid                        = 0,
	Idle                           = 1,
	WindUpRight                    = 2,
	WindUpLeft                     = 3,
	AttackRightToLeft              = 4,
	AttackLeftToRight              = 5,
	WindUpPower                    = 6,
	PowerAttack                    = 7,
	WindUpSweep                    = 8,
	SweepAttack                    = 9,
	CounterAttack                  = 10,
	Recoil                         = 11,
	WindUpNoStamina                = 12,
	NoStaminaAttack                = 13,
	CalledShotAttack               = 14,
	SpecialAttack1                 = 15,
	SpecialAttack2                 = 16,
	SpecialAttack3                 = 17,
	SpecialAttack4                 = 18,
	CalledShot                     = 19,
	EMeleeAction_MAX               = 20
};


// Enum Indiana.EHazardEventType
enum class EHazardEventType : uint8_t
{
	Enabling                       = 0,
	Enabled                        = 1,
	Disabling                      = 2,
	Disabled                       = 3,
	EHazardEventType_MAX           = 4
};


// Enum Indiana.EHealValueType
enum class EHealValueType : uint8_t
{
	Value                          = 0,
	Percent                        = 1,
	EHealValueType_MAX             = 2
};


// Enum Indiana.EHighlightMode
enum class EHighlightMode : uint8_t
{
	InteractableItems              = 0,
	EHighlightMode_MAX             = 1
};


// Enum Indiana.EIdleCamFailReason
enum class EIdleCamFailReason : uint8_t
{
	Invalid                        = 0,
	PlayerInputDetected            = 1,
	PlayerInCombat                 = 2,
	PlayerInConversation           = 3,
	PlayerIsReloading              = 4,
	PlayerIsAiming                 = 5,
	PlayerIsMoving                 = 6,
	PlayerIsCrouching              = 7,
	PlayerIsTakingSurvivalDamage   = 8,
	PlayerHasHostileStatusEffects  = 9,
	PlayerIsNotHealthy             = 10,
	Success                        = 11,
	EIdleCamFailReason_MAX         = 12
};


// Enum Indiana.EAnimationAudioLoopType
enum class EAnimationAudioLoopType : uint8_t
{
	None                           = 0,
	Furniture                      = 1,
	Jump                           = 2,
	AnimNotifyState                = 3,
	Count                          = 4,
	EAnimationAudioLoopType_MAX    = 5
};


// Enum Indiana.EAudioMovementState
enum class EAudioMovementState : uint8_t
{
	Idle                           = 0,
	Walking                        = 1,
	Sprinting                      = 2,
	Count                          = 3,
	EAudioMovementState_MAX        = 4
};


// Enum Indiana.ECharacterMovementAudioEvents
enum class ECharacterMovementAudioEvents : uint8_t
{
	None                           = 0,
	Crouch                         = 1,
	CrouchStanding                 = 2,
	Uncrouch                       = 3,
	UncrouchStanding               = 4,
	Jump                           = 5,
	DodgeLeft                      = 6,
	DodgeBack                      = 7,
	DodgeRight                     = 8,
	DodgeForward                   = 9,
	Land                           = 10,
	StartClimbing                  = 11,
	StopClimbing                   = 12,
	Count                          = 13,
	ECharacterMovementAudioEvents_MAX = 14
};


// Enum Indiana.ECharacterAudioEvent
enum class ECharacterAudioEvent : uint8_t
{
	None                           = 0,
	Passive                        = 1,
	ECharacterAudioEvent_MAX       = 2
};


// Enum Indiana.ECrouchState
enum class ECrouchState : uint8_t
{
	Current                        = 0,
	Crouched                       = 1,
	UnCrouched                     = 2,
	ECrouchState_MAX               = 3
};


// Enum Indiana.EPhaseMode
enum class EPhaseMode : uint8_t
{
	None                           = 0,
	Partial                        = 1,
	Full                           = 2,
	EPhaseMode_MAX                 = 3
};


// Enum Indiana.EIndianaCustomMovementType
enum class EIndianaCustomMovementType : uint8_t
{
	Climbing                       = 0,
	EIndianaCustomMovementType_MAX = 1
};


// Enum Indiana.EIndianaDamageType
enum class EIndianaDamageType : uint8_t
{
	Physical                       = 0,
	Thermal                        = 1,
	Energy                         = 2,
	Shock                          = 3,
	Corrosion                      = 4,
	NRay                           = 5,
	Swarm                          = 6,
	Cold                           = 7,
	Count                          = 8,
	EIndianaDamageType_MAX         = 9
};


// Enum Indiana.EDLCType
enum class EDLCType : uint8_t
{
	INX1                           = 0,
	INX2                           = 1,
	EDLCType_MAX                   = 2
};


// Enum Indiana.EDLCFlags
enum class EDLCFlags : uint8_t
{
	None                           = 0,
	INX1                           = 1,
	INX2                           = 2,
	EDLCFlags_MAX                  = 3
};


// Enum Indiana.EBoolResult
enum class EBoolResult : uint8_t
{
	OnTrue                         = 0,
	OnFalse                        = 1,
	EBoolResult_MAX                = 2
};


// Enum Indiana.EDownLoadableContent
enum class EDownLoadableContent : uint8_t
{
	INX1                           = 0,
	INX2                           = 1,
	EDownLoadableContent_MAX       = 2
};


// Enum Indiana.ETogglableAction
enum class ETogglableAction : uint8_t
{
	Dodge                          = 0,
	Lunge                          = 1,
	Disarmed                       = 2,
	CanFlinch                      = 3,
	MindControlled                 = 4,
	IgnoreMeleeDamage              = 5,
	IgnorePawnCollision            = 6,
	Untargetable                   = 7,
	Undamageable                   = 8,
	Blind                          = 9,
	Sprint                         = 10,
	StatusEffectImmune             = 11,
	WeaponCrit                     = 12,
	ETogglableAction_MAX           = 13
};


// Enum Indiana.EMeshTarget
enum class EMeshTarget : uint8_t
{
	FirstMesh                      = 0,
	CurrentCharacterMesh           = 1,
	WeaponMesh                     = 2,
	EMeshTarget_MAX                = 3
};


// Enum Indiana.ESimplifiedLockpickHackingMode
enum class ESimplifiedLockpickHackingMode : uint8_t
{
	Normal                         = 0,
	Simplified                     = 1,
	ESimplifiedLockpickHackingMode_MAX = 2
};


// Enum Indiana.EWeaponSelectAxisMode
enum class EWeaponSelectAxisMode : uint8_t
{
	Vertical                       = 0,
	Horizontal                     = 1,
	EWeaponSelectAxisMode_MAX      = 2
};


// Enum Indiana.EWeaponSelectMode
enum class EWeaponSelectMode : uint8_t
{
	Off                            = 0,
	TimedFade                      = 1,
	On                             = 2,
	EWeaponSelectMode_MAX          = 3
};


// Enum Indiana.ETTDReticleMeterMode
enum class ETTDReticleMeterMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	ETTDReticleMeterMode_MAX       = 3
};


// Enum Indiana.ECompanionAbilityPassiveNotificationMode
enum class ECompanionAbilityPassiveNotificationMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	ECompanionAbilityPassiveNotificationMode_MAX = 4
};


// Enum Indiana.ECompanionAbilityPassiveCDMode
enum class ECompanionAbilityPassiveCDMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	ECompanionAbilityPassiveCDMode_MAX = 4
};


// Enum Indiana.ECompanionStatusMode
enum class ECompanionStatusMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	ECompanionStatusMode_MAX       = 4
};


// Enum Indiana.EDodgeDisplayMode
enum class EDodgeDisplayMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	EDodgeDisplayMode_MAX          = 3
};


// Enum Indiana.ETTDDisplayMode
enum class ETTDDisplayMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	ETTDDisplayMode_MAX            = 3
};


// Enum Indiana.EAbilityControlMode
enum class EAbilityControlMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	EAbilityControlMode_MAX        = 4
};


// Enum Indiana.EMedicalInhalerMode
enum class EMedicalInhalerMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	EMedicalInhalerMode_MAX        = 3
};


// Enum Indiana.ESurvivalMode
enum class ESurvivalMode : uint8_t
{
	Off                            = 0,
	TimedFade                      = 1,
	On                             = 2,
	ESurvivalMode_MAX              = 3
};


// Enum Indiana.EFPSIndicatorMode
enum class EFPSIndicatorMode : uint8_t
{
	Off                            = 0,
	TopLeft                        = 1,
	TopRight                       = 2,
	BottomRight                    = 3,
	BottomLeft                     = 4,
	EFPSIndicatorMode_MAX          = 5
};


// Enum Indiana.EDirectionalDamageIndicatorMode
enum class EDirectionalDamageIndicatorMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	EDirectionalDamageIndicatorMode_MAX = 3
};


// Enum Indiana.EEnemyAwarenessMeterMode
enum class EEnemyAwarenessMeterMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	EEnemyAwarenessMeterMode_MAX   = 3
};


// Enum Indiana.EEnemyHealthBarMode
enum class EEnemyHealthBarMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	EEnemyHealthBarMode_MAX        = 3
};


// Enum Indiana.ECompassVisibilityMode
enum class ECompassVisibilityMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	ECompassVisibilityMode_MAX     = 3
};


// Enum Indiana.EHUDMode
enum class EHUDMode : uint8_t
{
	Minimal                        = 0,
	Default                        = 1,
	Maximum                        = 2,
	Custom                         = 3,
	EHUDMode_MAX                   = 4
};


// Enum Indiana.EAreaNameMode
enum class EAreaNameMode : uint8_t
{
	Off                            = 0,
	TimedFade                      = 1,
	On                             = 2,
	EAreaNameMode_MAX              = 3
};


// Enum Indiana.EHeldWeaponDisplayText
enum class EHeldWeaponDisplayText : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	EHeldWeaponDisplayText_MAX     = 4
};


// Enum Indiana.EHeldWeaponDisplayMode
enum class EHeldWeaponDisplayMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	EHeldWeaponDisplayMode_MAX     = 4
};


// Enum Indiana.ECompanionAbilityBindingMode
enum class ECompanionAbilityBindingMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	ECompanionAbilityBindingMode_MAX = 4
};


// Enum Indiana.ECompanionAbilityUIMode
enum class ECompanionAbilityUIMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	TimedFade                      = 2,
	On                             = 3,
	ECompanionAbilityUIMode_MAX    = 4
};


// Enum Indiana.EPlayerStatusEffectTextMode
enum class EPlayerStatusEffectTextMode : uint8_t
{
	Off                            = 0,
	TimedFade                      = 1,
	AlwaysOn                       = 2,
	EPlayerStatusEffectTextMode_MAX = 3
};


// Enum Indiana.EPlayerStatusBarMode
enum class EPlayerStatusBarMode : uint8_t
{
	Off                            = 0,
	TimedFade                      = 1,
	On                             = 2,
	EPlayerStatusBarMode_MAX       = 3
};


// Enum Indiana.EQuestUpdateMode
enum class EQuestUpdateMode : uint8_t
{
	Off                            = 0,
	TimedFade                      = 1,
	On                             = 2,
	EQuestUpdateMode_MAX           = 3
};


// Enum Indiana.EReticleMode
enum class EReticleMode : uint8_t
{
	Off                            = 0,
	ADSOnly                        = 1,
	CombatOnly                     = 2,
	On                             = 3,
	EReticleMode_MAX               = 4
};


// Enum Indiana.EAimingReticleMode
enum class EAimingReticleMode : uint8_t
{
	Off                            = 0,
	CombatOnly                     = 1,
	On                             = 2,
	EAimingReticleMode_MAX         = 3
};


// Enum Indiana.EDialogSkillMode
enum class EDialogSkillMode : uint8_t
{
	Never                          = 0,
	OnlyWhenClose                  = 1,
	Always                         = 2,
	EDialogSkillMode_MAX           = 3
};


// Enum Indiana.ELanguageMode
enum class ELanguageMode : uint8_t
{
	English                        = 0,
	French                         = 1,
	Italian                        = 2,
	German                         = 3,
	SpanishCastilian               = 4,
	PortugueseBrazilian            = 5,
	Russian                        = 6,
	Korean                         = 7,
	Japanese                       = 8,
	ChineseSimplified              = 9,
	Polish                         = 10,
	Count                          = 11,
	Invalid                        = 12,
	ELanguageMode_MAX              = 13
};


// Enum Indiana.EWeaponTooltipStatMode
enum class EWeaponTooltipStatMode : uint8_t
{
	DPS                            = 0,
	Damage                         = 1,
	EWeaponTooltipStatMode_MAX     = 2
};


// Enum Indiana.ECompanionOutlineMode
enum class ECompanionOutlineMode : uint8_t
{
	On                             = 0,
	CombatOnly                     = 1,
	Off                            = 2,
	ECompanionOutlineMode_MAX      = 3
};


// Enum Indiana.EConversationSubtitleMode
enum class EConversationSubtitleMode : uint8_t
{
	On                             = 0,
	Delayed                        = 1,
	Off                            = 2,
	EConversationSubtitleMode_MAX  = 3
};


// Enum Indiana.EFPSLimit
enum class EFPSLimit : uint8_t
{
	Thirty                         = 0,
	Sixty                          = 1,
	HundredTwenty                  = 2,
	HundredFourtyFour              = 3,
	HundredSixty                   = 4,
	HundredSixtyFive               = 5,
	HundredEighty                  = 6,
	TwoHundred                     = 7,
	TwoHundredFourty               = 8,
	Unlimited                      = 9,
	EFPSLimit_MAX                  = 10
};


// Enum Indiana.EItemInteraction
enum class EItemInteraction : uint8_t
{
	EDragDropStart                 = 0,
	EDragDropEnd                   = 1,
	EItemPickup                    = 2,
	EItemConsumed                  = 3,
	EItemInteraction_MAX           = 4
};


// Enum Indiana.ECheckBranches
enum class ECheckBranches : uint8_t
{
	Valid                          = 0,
	Invalid                        = 1,
	ECheckBranches_MAX             = 2
};


// Enum Indiana.EOccupationChannel
enum class EOccupationChannel : uint8_t
{
	Firing                         = 0,
	CharacterArea                  = 1,
	Count                          = 2,
	EOccupationChannel_MAX         = 3
};


// Enum Indiana.EPathBlockedType
enum class EPathBlockedType : uint8_t
{
	None                           = 0,
	Stuck                          = 1,
	Lost                           = 2,
	Destination                    = 3,
	EPathBlockedType_MAX           = 4
};


// Enum Indiana.EPlayerAudioEvent
enum class EPlayerAudioEvent : uint8_t
{
	None                           = 0,
	TacticalTimeDilation           = 1,
	EndTacticalTimeDilation        = 2,
	CalledShot                     = 3,
	CalledShotImpactClose          = 4,
	CalledShotImpactFar            = 5,
	CalledShotCameraCutToTarget    = 6,
	CalledShotEnd                  = 7,
	CalledShotOffCooldown          = 8,
	KillCamera                     = 9,
	QuestStarted                   = 10,
	QuestCompleted                 = 11,
	QuestFailed                    = 12,
	ObjectiveCompleted             = 13,
	ObjectiveFailed                = 14,
	AddendumAdded                  = 15,
	ObjectiveUpdated               = 16,
	CombatStart                    = 17,
	BlockRangedAttack              = 18,
	BlockMeleeAttack               = 19,
	Bribe                          = 20,
	DisguiseMeter                  = 21,
	DisguiseMeterDrain             = 22,
	DisguiseMeterDepleted          = 23,
	DisguiseMeterRefilled          = 24,
	PickPocketStart                = 25,
	PickPocketSuccess              = 26,
	PickPocketFail                 = 27,
	PickPocketStop                 = 28,
	HackStart                      = 29,
	HackSuccess                    = 30,
	HackFail                       = 31,
	WeaponDamaged                  = 32,
	WeaponSeverelyDamaged          = 33,
	WeaponDestroyed                = 34,
	HelmetDamaged                  = 35,
	HelmetSeverelyDamaged          = 36,
	HelmetDestroyed                = 37,
	ArmorDamaged                   = 38,
	ArmorSeverelyDamaged           = 39,
	ArmorDestroyed                 = 40,
	StealthEntered                 = 41,
	StealthExited                  = 42,
	ReloadFail                     = 43,
	EPlayerAudioEvent_MAX          = 44
};


// Enum Indiana.EPlayerAudioDetectionState
enum class EPlayerAudioDetectionState : uint8_t
{
	Undetected                     = 0,
	Danger                         = 1,
	Combat                         = 2,
	EPlayerAudioDetectionState_MAX = 3
};


// Enum Indiana.EMapFlags
enum class EMapFlags : uint8_t
{
	None                           = 0,
	Known                          = 1,
	Visited                        = 2,
	EMapFlags_MAX                  = 3
};


// Enum Indiana.EIndianaTextAnimationType
enum class EIndianaTextAnimationType : uint8_t
{
	Invalid                        = 0,
	DefaultComputerTerminalHeader  = 1,
	DefaultComputerTerminalSubheader = 2,
	ComputerTerminalBody           = 3,
	Count                          = 4,
	EIndianaTextAnimationType_MAX  = 5
};


// Enum Indiana.EIndianaAudioEvent
enum class EIndianaAudioEvent : uint8_t
{
	Invalid                        = 0,
	CCAptitudeSelect               = 1,
	CCRandomizeAppearance          = 2,
	CCFinalize                     = 3,
	CompanionGained                = 4,
	CompanionLost                  = 5,
	ToggleAdvanceStats             = 6,
	CollapseExpandList             = 7,
	SliderValueChange              = 8,
	PageNext                       = 9,
	PagePrev                       = 10,
	SubPageChange                  = 11,
	Back                           = 12,
	Sort                           = 13,
	FlipSort                       = 14,
	Hold                           = 15,
	HoldCancel                     = 16,
	HoldFinished                   = 17,
	OpenToMap                      = 18,
	OpenToQuests                   = 19,
	OpenToInventory                = 20,
	TabOpenLedger                  = 21,
	LootBody                       = 22,
	PickpocketAction               = 23,
	ItemViewerPageChange           = 24,
	InventoryChangeTab             = 25,
	CantDo                         = 26,
	CharacterCreationRespecConfirm = 27,
	ExaminablePopUp                = 28,
	GlobalSelect                   = 29,
	TutorialAccept                 = 30,
	ItemAdded                      = 31,
	ItemRemoved                    = 32,
	ItemRepair                     = 33,
	ItemRepairAll                  = 34,
	ItemBreakdown                  = 35,
	ItemJunkUnjunk                 = 36,
	ItemDrop                       = 37,
	ItemInspect                    = 38,
	ItemCompare                    = 39,
	ItemInspectZoom                = 40,
	TutorialPopUpFullScreen        = 41,
	TutorialPopUpMinor             = 42,
	RepIncreased                   = 43,
	RepDecreased                   = 44,
	SkillCheckPass                 = 45,
	POIDiscovered                  = 46,
	XPGained                       = 47,
	LevelUpNotificationStart       = 48,
	LevelUpNotificationEnd         = 49,
	FastTravelImpossible_Encumbered = 50,
	FastTravelImpossible_Combat    = 51,
	ManualSave                     = 52,
	FastTravelAdded                = 53,
	TextEntryTyping                = 54,
	WarningDialog                  = 55,
	NewGame                        = 56,
	ContinueGame                   = 57,
	Zoom                           = 58,
	Pan                            = 59,
	FastTravelConfirm              = 60,
	MapTabChange                   = 61,
	SystemMapOpen                  = 62,
	SystemMapOpenAmbient           = 63,
	SystemMapClose                 = 64,
	SystemMapCloseAmbient          = 65,
	SystemMapShipStart             = 66,
	SystemMapShipStop              = 67,
	SystemMapShipLandingPad        = 68,
	SystemMapFastTravelConfirm     = 69,
	SystemMapPanStart              = 70,
	SystemMapPanStop               = 71,
	SystemMapDestinationUnlocked   = 72,
	QuestSelect                    = 73,
	QuestFilterChange              = 74,
	SkillSelectUnselect            = 75,
	SkillUnavailable               = 76,
	SkillApply                     = 77,
	PerkAddRemove                  = 78,
	PerkApply                      = 79,
	PerkFinalConfirm               = 80,
	VendorOpenClose                = 81,
	VendorOpenClose_AC             = 82,
	VendorOpenClose_CP             = 83,
	VendorOpenClose_Groundbreaker  = 84,
	VendorOpenClose_MSI            = 85,
	VendorOpenClose_SC             = 86,
	VendorOpenClose_Sublight       = 87,
	VendorOpenClose_TL             = 88,
	VendorChangeTab                = 89,
	VendorBuy                      = 90,
	VendorCantBuy                  = 91,
	VendorSell                     = 92,
	VendorChangeCategory           = 93,
	VendorSellJunk                 = 94,
	VendorRepair                   = 95,
	Vendor_Machine_Open_Factionless = 96,
	Vendor_Machine_Open_AC         = 97,
	Vendor_Machine_Open_CP         = 98,
	Vendor_Machine_Open_Groundbreaker = 99,
	Vendor_Machine_Open_MSI        = 100,
	Vendor_Machine_Open_SC         = 101,
	Vendor_Machine_Open_Sublight   = 102,
	Vendor_Machine_Open_TL         = 103,
	Vendor_Human_Open_Factionless  = 104,
	Vendor_Human_Open_AC           = 105,
	Vendor_Human_Open_CP           = 106,
	Vendor_Human_Open_Groundbreaker = 107,
	Vendor_Human_Open_MSI          = 108,
	Vendor_Human_Open_SC           = 109,
	Vendor_Human_Open_Sublight     = 110,
	Vendor_Human_Open_TL           = 111,
	Vendor_Machine_Close_Factionless = 112,
	Vendor_Machine_Close_AC        = 113,
	Vendor_Machine_Close_CP        = 114,
	Vendor_Machine_Close_Groundbreaker = 115,
	Vendor_Machine_Close_MSI       = 116,
	Vendor_Machine_Close_SC        = 117,
	Vendor_Machine_Close_Sublight  = 118,
	Vendor_Machine_Close_TL        = 119,
	Vendor_Human_Close_Factionless = 120,
	Vendor_Human_Close_AC          = 121,
	Vendor_Human_Close_CP          = 122,
	Vendor_Human_Close_Groundbreaker = 123,
	Vendor_Human_Close_MSI         = 124,
	Vendor_Human_Close_SC          = 125,
	Vendor_Human_Close_Sublight    = 126,
	Vendor_Human_Close_TL          = 127,
	WBOpenClose                    = 128,
	WBInstallMod                   = 129,
	WBRepair                       = 130,
	WBTinker                       = 131,
	TextReadOut                    = 132,
	TerminalEnter                  = 133,
	TerminalExit                   = 134,
	RespecEnter                    = 135,
	SleepBed                       = 136,
	WaitChair                      = 137,
	PauseMenuOpen                  = 138,
	PauseMenuClose                 = 139,
	PerkSuppressionNotification    = 140,
	AudioLogAcquiredNew            = 141,
	AudioLogAcquiredRepeat         = 142,
	AudioLogStarted                = 143,
	AudioLogResumed                = 144,
	AudioLogPaused                 = 145,
	AudioLogStopped                = 146,
	Count                          = 147,
	EIndianaAudioEvent_MAX         = 148
};


// Enum Indiana.EIndianaUIOpacityType
enum class EIndianaUIOpacityType : uint8_t
{
	Invalid                        = 0,
	PipingOpacity                  = 1,
	BackgroundOpacity              = 2,
	Count                          = 3,
	EIndianaUIOpacityType_MAX      = 4
};


// Enum Indiana.EWidgetOpenState
enum class EWidgetOpenState : uint8_t
{
	Maximized                      = 0,
	TransitioningToMinimized       = 1,
	Minimized                      = 2,
	TransitioningToMaximized       = 3,
	EWidgetOpenState_MAX           = 4
};


// Enum Indiana.EPlayerHomeBaseType
enum class EPlayerHomeBaseType : uint8_t
{
	None                           = 0,
	Fake                           = 1,
	Real                           = 2,
	EPlayerHomeBaseType_MAX        = 3
};


// Enum Indiana.EObjectInteractionUIType
enum class EObjectInteractionUIType : uint8_t
{
	Lockpick                       = 0,
	Hack                           = 1,
	Trap                           = 2,
	Pickpocket                     = 3,
	EObjectInteractionUIType_MAX   = 4
};


// Enum Indiana.EPropagationMode
enum class EPropagationMode : uint8_t
{
	None                           = 0,
	Parent                         = 1,
	Indirect                       = 2,
	EPropagationMode_MAX           = 3
};


// Enum Indiana.EInteractPayloadType
enum class EInteractPayloadType : uint8_t
{
	Int32                          = 0,
	Float                          = 1,
	String                         = 2,
	EInteractPayloadType_MAX       = 3
};


// Enum Indiana.EInterruptType
enum class EInterruptType : uint8_t
{
	Interrupt                      = 0,
	PlaySimultaneously             = 1,
	EInterruptType_MAX             = 2
};


// Enum Indiana.EItemType
enum class EItemType : uint8_t
{
	Weapon                         = 0,
	ArmorSet                       = 1,
	Ammo                           = 2,
	Currency                       = 3,
	Resource                       = 4,
	Quest                          = 5,
	WeaponMod                      = 6,
	Helmet                         = 7,
	ArmorModArmoring               = 8,
	ArmorModUtility                = 9,
	ArmorModResistance             = 10,
	ArmorModDampening              = 11,
	MedKit                         = 12,
	Gadget                         = 13,
	Count                          = 14,
	Invalid                        = 15,
	EItemType_MAX                  = 16
};


// Enum Indiana.EItemStat
enum class EItemStat : uint8_t
{
	WeaponType                     = 0,
	FireMode                       = 1,
	AmmoType                       = 2,
	SkillType                      = 3,
	DamageType                     = 4,
	DamageTypeEnumValue            = 5,
	Damage                         = 6,
	DPM                            = 7,
	DPS                            = 8,
	RPM                            = 9,
	RoF                            = 10,
	SwingAttackRate                = 11,
	EquipTime                      = 12,
	ReloadTime                     = 13,
	CriticalChance                 = 14,
	CriticalMultiplier             = 15,
	PostArmorMultiplier            = 16,
	MagazineSize                   = 17,
	EffectiveRange                 = 18,
	MaxRange                       = 19,
	Recoil                         = 20,
	AimSpreadReduction             = 21,
	SwayAngle                      = 22,
	SpreadAngle                    = 23,
	NoiseRange                     = 24,
	AoEOuterRadius                 = 25,
	MaxChargeTime                  = 26,
	AmmoPerShot                    = 27,
	AmmoTypeEmbedded               = 28,
	DamageSpecialEffect            = 29,
	ArmorThresholdPhysical         = 30,
	ArmorResistancePhysical        = 31,
	ArmorThresholdThermal          = 32,
	ArmorResistanceThermal         = 33,
	ArmorThresholdEnergy           = 34,
	ArmorResistanceEnergy          = 35,
	ArmorThresholdCorruption       = 36,
	ArmorResistanceCorruption      = 37,
	ArmorThresholdShock            = 38,
	ArmorResistanceShock           = 39,
	ArmorThresholdNRay             = 40,
	ArmorResistanceNRay            = 41,
	ArmorThresholdCold             = 42,
	ArmorResistanceCold            = 43,
	ArmorSkillBonus                = 44,
	ArmorType                      = 45,
	Durability                     = 46,
	Count                          = 47,
	EItemStat_MAX                  = 48
};


// Enum Indiana.EItemSorting
enum class EItemSorting : uint8_t
{
	CustomSort                     = 0,
	Alphabetical                   = 1,
	Value                          = 2,
	Weight                         = 3,
	ValueToWeight                  = 4,
	DamageRating                   = 5,
	WeaponType                     = 6,
	ArmorRating                    = 7,
	ArmorType                      = 8,
	RangedMeleeArmorMod            = 9,
	EItemSorting_MAX               = 10
};


// Enum Indiana.ELedgerPages
enum class ELedgerPages : uint8_t
{
	CharacterStats                 = 0,
	Inventory                      = 1,
	Journal                        = 2,
	Map                            = 3,
	Companion1                     = 4,
	Companion2                     = 5,
	Companion3                     = 6,
	Companion4                     = 7,
	Companion5                     = 8,
	Companion6                     = 9,
	Count                          = 10,
	Invalid                        = 11,
	ELedgerPages_MAX               = 12
};


// Enum Indiana.ELoadingScreenRegion
enum class ELoadingScreenRegion : uint8_t
{
	NoRegion                       = 0,
	Byzantium                      = 1,
	EmeraldVale                    = 2,
	Groundbreaker                  = 3,
	Monarch                        = 4,
	PlayerShip                     = 5,
	Roseway                        = 6,
	ScientistLab                   = 7,
	Scylla                         = 8,
	Tartarus                       = 9,
	TheHope                        = 10,
	Gorgon                         = 11,
	Eridanos                       = 12,
	Count                          = 13,
	ELoadingScreenRegion_MAX       = 14
};


// Enum Indiana.ELocomotionCategory
enum class ELocomotionCategory : uint8_t
{
	LC_WalkStart                   = 0,
	LC_WalkStop                    = 1,
	LC_WalkTurn                    = 2,
	LC_RunStart                    = 3,
	LC_RunStop                     = 4,
	LC_RunTurn                     = 5,
	LC_WalkToRun                   = 6,
	LC_RunToWalk                   = 7,
	LC_TurnInPlace                 = 8,
	LC_Walk                        = 9,
	LC_Idle                        = 10,
	LC_Run                         = 11,
	LC_Invalid                     = 12,
	LC_MAX                         = 13
};


// Enum Indiana.EEqualityComparison
enum class EEqualityComparison : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	EEqualityComparison_MAX        = 2
};


// Enum Indiana.EGlobalVariableComparison
enum class EGlobalVariableComparison : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	GreaterThan                    = 2,
	LessThan                       = 3,
	GreaterThanEqual               = 4,
	LessThanEqual                  = 5,
	EGlobalVariableComparison_MAX  = 6
};


// Enum Indiana.EConditionalType
enum class EConditionalType : uint8_t
{
	GlobalVar                      = 0,
	QuestState                     = 1,
	CompanionState                 = 2,
	PCGender                       = 3,
	DLCInstalled                   = 4,
	EConditionalType_MAX           = 5
};


// Enum Indiana.ELogicalOperator
enum class ELogicalOperator : uint8_t
{
	And                            = 0,
	Or                             = 1,
	ELogicalOperator_MAX           = 2
};


// Enum Indiana.EDebugPCPlatformID
enum class EDebugPCPlatformID : uint8_t
{
	Normal                         = 0,
	PC_EpicGamesStore              = 1,
	PC_Steam                       = 2,
	PC_WindowsStore                = 3,
	PC_Gamepass                    = 4,
	EDebugPCPlatformID_MAX         = 5
};


// Enum Indiana.EWaitingForInputState
enum class EWaitingForInputState : uint8_t
{
	AutosaveSplash                 = 0,
	WaitingForInput                = 1,
	HidingText                     = 2,
	Complete                       = 3,
	EWaitingForInputState_MAX      = 4
};


// Enum Indiana.EMaterialParamType
enum class EMaterialParamType : uint8_t
{
	Scalar                         = 0,
	Vector                         = 1,
	Texture                        = 2,
	EMaterialParamType_MAX         = 3
};


// Enum Indiana.EAttackerSlottingState
enum class EAttackerSlottingState : uint8_t
{
	Unslotted_NoMove               = 0,
	Unslotted                      = 1,
	Waiting                        = 2,
	Slotted                        = 3,
	EAttackerSlottingState_MAX     = 4
};


// Enum Indiana.EMusicChangeReason
enum class EMusicChangeReason : uint8_t
{
	NoMusicAvailable               = 0,
	LoadingDefault                 = 1,
	LoadingConditional             = 2,
	GameOver                       = 3,
	ScriptedOverride               = 4,
	ConditionalOverride            = 5,
	PlayerInDanger                 = 6,
	PlayerInCombat                 = 7,
	Default                        = 8,
	PlayerInPostCombat             = 9,
	UserSkip                       = 10,
	EMusicChangeReason_MAX         = 11
};


// Enum Indiana.ESpecialObsidianID
enum class ESpecialObsidianID : uint8_t
{
	None                           = 0,
	Companion1                     = 1,
	Companion2                     = 2,
	Companion3                     = 3,
	Companion4                     = 4,
	Companion5                     = 5,
	Companion6                     = 6,
	Companion7                     = 7,
	Count                          = 8,
	ESpecialObsidianID_MAX         = 9
};


// Enum Indiana.EOCLEventType
enum class EOCLEventType : uint8_t
{
	Invalid                        = 0,
	Open                           = 1,
	Opening                        = 2,
	Closed                         = 3,
	Closing                        = 4,
	Unlocked                       = 5,
	Barred                         = 6,
	Locked                         = 7,
	LockpickSuccess                = 8,
	LockpickInterrupted            = 9,
	Lockpick                       = 10,
	TravelStart                    = 11,
	Ambient                        = 12,
	Unbarred                       = 13,
	Unsealed                       = 14,
	InteractLoopFinished           = 15,
	EOCLEventType_MAX              = 16
};


// Enum Indiana.EOCLResult
enum class EOCLResult : uint8_t
{
	Success                        = 0,
	Failed_Locked                  = 1,
	Failed_LockedPermanent         = 2,
	Failed_Sealed                  = 3,
	Failed_IsOpening               = 4,
	Failed_IsClosing               = 5,
	Failed_Barred                  = 6,
	Pending_Lockpicking            = 7,
	EOCLResult_MAX                 = 8
};


// Enum Indiana.EOCLDifficulty
enum class EOCLDifficulty : uint8_t
{
	Easy                           = 0,
	Medium                         = 1,
	Difficult                      = 2,
	Extreme                        = 3,
	EOCLDifficulty_MAX             = 4
};


// Enum Indiana.EPatrolMovementType
enum class EPatrolMovementType : uint8_t
{
	Run                            = 0,
	Walk                           = 1,
	EPatrolMovementType_MAX        = 2
};


// Enum Indiana.EPerkCategory
enum class EPerkCategory : uint8_t
{
	Military                       = 0,
	Adventurer                     = 1,
	SilverTongue                   = 2,
	Companion                      = 3,
	Count                          = 4,
	EPerkCategory_MAX              = 5
};


// Enum Indiana.EPersonalSpaceZone
enum class EPersonalSpaceZone : uint8_t
{
	None                           = 0,
	Acknowledgement                = 1,
	Interaction                    = 2,
	Violation                      = 3,
	EPersonalSpaceZone_MAX         = 4
};


// Enum Indiana.EPlanetType
enum class EPlanetType : uint8_t
{
	Hephaestus                     = 0,
	Monarch                        = 1,
	Tartarus                       = 2,
	Terra2                         = 3,
	EPlanetType_MAX                = 4
};


// Enum Indiana.EDesiredEvent
enum class EDesiredEvent : uint8_t
{
	None                           = 0,
	Single                         = 1,
	Loop                           = 2,
	EDesiredEvent_MAX              = 3
};


// Enum Indiana.EXPGainReason
enum class EXPGainReason : uint8_t
{
	EnemyKilled                    = 0,
	QuestCompleted                 = 1,
	QuestObjectiveCompleted        = 2,
	DiscoveredPointOfInterest      = 3,
	HackTerminal                   = 4,
	LockPick                       = 5,
	Conversation                   = 6,
	FoundCollectible               = 7,
	Debug                          = 8,
	DiscoveredTravelDestination    = 9,
	EXPGainReason_MAX              = 10
};


// Enum Indiana.EPointOfInterestXPType
enum class EPointOfInterestXPType : uint8_t
{
	None                           = 0,
	LargePointOfInterest           = 1,
	MediumPointOfInterest          = 2,
	SmallPointOfInterest           = 3,
	MicroPointOfInterest           = 4,
	Services                       = 5,
	EPointOfInterestXPType_MAX     = 6
};


// Enum Indiana.EPointOfInterestLocationType
enum class EPointOfInterestLocationType : uint8_t
{
	FastTravel                     = 0,
	Town                           = 1,
	Cave                           = 2,
	Dungeon                        = 3,
	Landmark                       = 4,
	Vendor                         = 5,
	VendingMachine                 = 6,
	Workbench                      = 7,
	EPointOfInterestLocationType_MAX = 8
};


// Enum Indiana.EPointOfInterestState
enum class EPointOfInterestState : uint8_t
{
	Hidden                         = 0,
	HiddenUndiscoverable           = 1,
	Unknown                        = 2,
	Mentioned                      = 3,
	Discovered                     = 4,
	EPointOfInterestState_MAX      = 5
};


// Enum Indiana.EQuestState
enum class EQuestState : uint8_t
{
	Invalid                        = 0,
	InProgress                     = 1,
	Completed                      = 2,
	Failed                         = 3,
	Mentioned                      = 4,
	EQuestState_MAX                = 5
};


// Enum Indiana.ECompletionStatus
enum class ECompletionStatus : uint8_t
{
	Invalid                        = 0,
	Unstarted                      = 1,
	InProgress                     = 2,
	Completed                      = 3,
	Botched                        = 4,
	ECompletionStatus_MAX          = 5
};


// Enum Indiana.EQueueType
enum class EQueueType : uint8_t
{
	Queue                          = 0,
	Discard                        = 1,
	EQueueType_MAX                 = 2
};


// Enum Indiana.ERandomBankType
enum class ERandomBankType : uint8_t
{
	RandomGoodbye                  = 0,
	Count                          = 1,
	ERandomBankType_MAX            = 2
};


// Enum Indiana.ERecoilState
enum class ERecoilState : uint8_t
{
	Active                         = 0,
	ReturnToZero                   = 1,
	Inactive                       = 2,
	ERecoilState_MAX               = 3
};


// Enum Indiana.ERegionType
enum class ERegionType : uint8_t
{
	None                           = 0,
	Player_Ship_0301               = 1,
	EmeraldVale_0001_Exterior      = 2,
	EmeraldVale_0002_Town          = 3,
	EmeraldVale_0004_Geothermal_Plant = 4,
	EmeraldVale_0005_Outcast_Camp  = 5,
	Groundbreaker_0101_Docking_Bays = 6,
	Groundbreaker_0102_Promenade   = 7,
	Groundbreaker_0103_Operations  = 8,
	Monarch_0401_Exterior          = 9,
	Monarch_0402_Stellar_Bay       = 10,
	Monarch_0410_Stellar_Bay_Secret_Entrance = 11,
	Monarch_0403_Info_Broker_Compound = 12,
	Monarch_0406_Devils_Peak_Station = 13,
	Monarch_0408_Devils_Peak_Caverns = 14,
	Monarch_0409_Nyoka_Secret_Passage = 15,
	Roseway_0801_Forest            = 16,
	Roseway_0802_Town              = 17,
	Roseway_0804_Cleo_Lab          = 18,
	Roseway_0803_Covert_Lab        = 19,
	Roseway_0805_Storage_Facility  = 20,
	Terra2_0201_Exterior           = 21,
	Terra2_0202_Byzantium          = 22,
	Terra2_0203_HHCBuilding        = 23,
	ERegionType_MAX                = 24
};


// Enum Indiana.ERelevancyType
enum class ERelevancyType : uint8_t
{
	None                           = 0,
	Standard                       = 1,
	Complete                       = 2,
	ERelevancyType_MAX             = 3
};


// Enum Indiana.ECrosshairState
enum class ECrosshairState : uint8_t
{
	Invalid                        = 0,
	Default                        = 1,
	Hostile                        = 2,
	Neutral                        = 3,
	ECrosshairState_MAX            = 4
};


// Enum Indiana.EReticleType
enum class EReticleType : uint8_t
{
	Invalid                        = 0,
	GenericMelee                   = 1,
	GenericRanged                  = 2,
	EReticleType_MAX               = 3
};


// Enum Indiana.EStatClampingMethod
enum class EStatClampingMethod : uint8_t
{
	None                           = 0,
	ClampTo0                       = 1,
	Custom                         = 2,
	Attribute                      = 3,
	Skill                          = 4,
	EStatClampingMethod_MAX        = 5
};


// Enum Indiana.EIndianaChunkIndex
enum class EIndianaChunkIndex : uint8_t
{
	EarlyInteractive               = 0,
	BaseGame                       = 1,
	INX1                           = 2,
	INX2                           = 3,
	EIndianaChunkIndex_MAX         = 4
};


// Enum Indiana.EAutoSaveType
enum class EAutoSaveType : uint8_t
{
	Default                        = 0,
	Travel                         = 1,
	Scripted                       = 2,
	EAutoSaveType_MAX              = 3
};


// Enum Indiana.EDeleteGameResult
enum class EDeleteGameResult : uint8_t
{
	Success                        = 0,
	Restricted                     = 1,
	Failed                         = 2,
	SaveOfGivenNameNotFound        = 3,
	FailedDeletingStaleTargetDir   = 4,
	EDeleteGameResult_MAX          = 5
};


// Enum Indiana.ESaveLoadRestriction
enum class ESaveLoadRestriction : uint8_t
{
	NoCurrentRestriction           = 0,
	RunningPlayInEditor            = 1,
	NoPlayerPresent                = 2,
	CinematicInProgress            = 3,
	PlayerInConversation           = 4,
	PlayerInCombat                 = 5,
	PlayerCrimeDetected            = 6,
	LevelTraveling                 = 7,
	ModalInterface                 = 8,
	PlayerIsIncapacitated          = 9,
	SaveInProgress                 = 10,
	LoadInProgress                 = 11,
	TimeDilation                   = 12,
	ManualRestriction              = 13,
	Unsupported                    = 14,
	DeviceFull                     = 15,
	PlatformSaveSystemNull         = 16,
	PlatformStorageInaccessible    = 17,
	PlayerFalling                  = 18,
	PlayerInActiveHazard           = 19,
	PlayerInterpolatingToSpline    = 20,
	PlayerDeadOrDying              = 21,
	SuperNovaOnlySaveOnShip        = 22,
	UserLoggingOut                 = 23,
	UIWindowActive                 = 24,
	UICharacterCreationActive      = 25,
	ESaveLoadRestriction_MAX       = 26
};


// Enum Indiana.EButtonType
enum class EButtonType : uint8_t
{
	Normal                         = 0,
	Selectable                     = 1,
	EButtonType_MAX                = 2
};


// Enum Indiana.EScalarType
enum class EScalarType : uint8_t
{
	Invalid                        = 0,
	Health                         = 1,
	Damage                         = 2,
	Armor                          = 3,
	EScalarType_MAX                = 4
};


// Enum Indiana.ComparisonOperator
enum class EComparisonOperator : uint8_t
{
	Equals                         = 0,
	GreaterThan                    = 1,
	LessThan                       = 2,
	NotEqual                       = 3,
	GreaterThanOrEquals            = 4,
	LessThanOrEquals               = 5,
	Count                          = 6,
	Invalid                        = 7,
	ComparisonOperator_MAX         = 8
};


// Enum Indiana.ExpressionComponentType
enum class ExpressionComponentType : uint8_t
{
	ScriptCall                     = 0,
	Expression                     = 1,
	ExpressionComponentType_MAX    = 2
};


// Enum Indiana.LogicalOperator
enum class ELogicalOperator : uint8_t
{
	And                            = 0,
	Or                             = 1,
	LogicalOperator_MAX            = 2
};


// Enum Indiana.EPlatformFamily
enum class EPlatformFamily : uint8_t
{
	PC                             = 0,
	Xbox                           = 1,
	PS4                            = 2,
	Switch                         = 3,
	EPlatformFamily_MAX            = 4
};


// Enum Indiana.ESettingSubcategory
enum class ESettingSubcategory : uint8_t
{
	Invalid                        = 0,
	GraphicsDisplay                = 1,
	GraphicsQuality                = 2,
	AudioVolume                    = 3,
	ControlsController             = 4,
	Subtitles                      = 5,
	General                        = 6,
	Quests                         = 7,
	Movement                       = 8,
	Gameplay                       = 9,
	Menus                          = 10,
	ControlsMouseKeyboard          = 11,
	UI                             = 12,
	GameplayDisplay                = 13,
	HUD                            = 14,
	UIGeneral                      = 15,
	GraphicsEffects                = 16,
	ESettingSubcategory_MAX        = 17
};


// Enum Indiana.ESetting
enum class ESetting : uint8_t
{
	Invalid                        = 0,
	Resolution                     = 1,
	WindowMode                     = 2,
	VerticalSync                   = 3,
	ViewDistanceQuality            = 4,
	ShadowQuality                  = 5,
	AAQuality                      = 6,
	TextureQuality                 = 7,
	VisualEffectQuality            = 8,
	PostProcessingQuality          = 9,
	FolliageQuality                = 10,
	MasterVolume                   = 11,
	EffectsVolume                  = 12,
	MusicVolume                    = 13,
	UIVolume                       = 14,
	InvertControllerY              = 15,
	ConversationSubtitleMode       = 16,
	ConversationContinueOnVOEnd    = 17,
	ConversationResponsesVisibleDuringVO = 18,
	QuestLogVisibleAllTimes        = 19,
	MotionBlur                     = 20,
	AAMethod                       = 21,
	MouseSensitivity               = 22,
	VoiceVolume                    = 23,
	ItemStatsRaw                   = 24,
	GameDifficulty                 = 25,
	RadialSensitivity              = 26,
	ControllerSensitivity          = 27,
	ShowTutorials                  = 28,
	ShowFloatingDamageText         = 29,
	ShowPlayerHelmet               = 30,
	ShowCompanionHelmets           = 31,
	GeneralQuality                 = 32,
	Gamma                          = 33,
	BarkSubtitleVisibility         = 34,
	CinematicSubtitleVisibility    = 35,
	CompanionOutlineVisibility     = 36,
	KeyBinds                       = 37,
	GamePadLayout                  = 38,
	StickLayout                    = 39,
	MoveForward                    = 40,
	MoveBackward                   = 41,
	StrafeLeft                     = 42,
	StrafeRight                    = 43,
	LookUp                         = 44,
	LookDown                       = 45,
	TurnLeft                       = 46,
	TurnRight                      = 47,
	Sprint                         = 48,
	Jump                           = 49,
	CrouchSneak                    = 50,
	QuickSave                      = 51,
	QuickLoad                      = 52,
	UseInteract                    = 53,
	WeaponOne                      = 54,
	WeaponTwo                      = 55,
	WeaponThree                    = 56,
	WeaponFour                     = 57,
	Inhaler                        = 58,
	NextWeapon                     = 59,
	PreviousWeapon                 = 60,
	LastWeapon                     = 61,
	PrimaryFire                    = 62,
	AlernateFire                   = 63,
	Overcharge                     = 64,
	QuickMelee                     = 65,
	Reload                         = 66,
	WeaponWheel                    = 67,
	TimeDilation                   = 68,
	CompanionMove                  = 69,
	CompanionAttack                = 70,
	CompanionFollow                = 71,
	CompanionOneSpecialAbility     = 72,
	CompanionTwoSpecialAbility     = 73,
	Pause                          = 74,
	ViewInventory                  = 75,
	ViewLedger                     = 76,
	ViewCharacterMenu              = 77,
	ViewJournal                    = 78,
	ViewMap                        = 79,
	ViewRegionMap                  = 80,
	ViewCompanionMenu              = 81,
	ViewPerks                      = 82,
	ViewSkills                     = 83,
	ViewCodex                      = 84,
	ViewSummary                    = 85,
	ViewDetails                    = 86,
	ViewReputation                 = 87,
	InvertMouseY                   = 88,
	ControllerRumble               = 89,
	AutoCollapseInventory          = 90,
	GameplayGamma                  = 91,
	Language                       = 92,
	WeaponTooltipStatMode          = 93,
	HUDVisibility                  = 94,
	HUDMode                        = 95,
	CompassVisibility              = 96,
	ShowDialogSkill                = 97,
	TooltipDelay                   = 98,
	NotificationDuration           = 99,
	InteractionOutlines            = 100,
	InteractionControls            = 101,
	WaypointMarkers                = 102,
	EnemyHealthBars                = 103,
	EnemyAwarenessMeters           = 104,
	AimingReticle                  = 105,
	ReticleFeedback                = 106,
	QuestUpdates                   = 107,
	PlayerStatusBars               = 108,
	PlayerStatusEffects            = 109,
	PlayerStatusEffectNames        = 110,
	CompanionAbilityUI             = 111,
	CompanionAbilityBindings       = 112,
	HeldWeaponDisplay              = 113,
	HeldWeaponDisplayText          = 114,
	AreaNames                      = 115,
	DirectionalDamageIndicators    = 116,
	FPSIndicator                   = 117,
	SurvivalMeters                 = 118,
	MedicalInhaler                 = 119,
	AbilityControls                = 120,
	CompanionStatus                = 121,
	CompanionPassiveCooldowns      = 122,
	CompanionPassiveCooldownNotification = 123,
	LevelUpNotifications           = 124,
	LevelUpReminders               = 125,
	CombatIndicator                = 126,
	TTDScanner                     = 127,
	TTDReticleMeter                = 128,
	TTDStatusEffectPreview         = 129,
	DisguiseMeter                  = 130,
	EquipmentRepairWarning         = 131,
	SimplifiedEquipmentRepairWarning = 132,
	WeaponSelect                   = 133,
	WeaponSelectAxis               = 134,
	SimplifiedLockpickHacking      = 135,
	LootTooltips                   = 136,
	LootControls                   = 137,
	ShowTutorialNotifications      = 138,
	FPSLimit                       = 139,
	Resolution3D                   = 140,
	DetectGraphics                 = 141,
	FieldOfView                    = 142,
	TTDDisplayMode                 = 143,
	DodgeDisplayMode               = 144,
	ControllerDeadZoneLeftInner    = 145,
	ControllerDeadZoneLeftOuter    = 146,
	ControllerDeadZoneRightInner   = 147,
	ControllerDeadZoneRightOuter   = 148,
	EnlargedFontSize               = 149,
	ColorblindMode                 = 150,
	OffsetReticle                  = 151,
	CinematicKillCam               = 152,
	ChromaticAberration            = 153,
	Headbobbing                    = 154,
	MouseADSSensitivity            = 155,
	ControllerADSSensitivity       = 156,
	FontSizeModifier               = 157,
	ControllerEnableAutoSprint     = 158,
	AutoSprint                     = 159,
	InvertMouseX                   = 160,
	InvertControllerX              = 161,
	InterruptAudioLog              = 162,
	ESetting_MAX                   = 163
};


// Enum Indiana.ECategory
enum class ECategory : uint8_t
{
	None                           = 0,
	Graphics                       = 1,
	Audio                          = 2,
	Control                        = 3,
	Gameplay                       = 4,
	UI                             = 5,
	Debug                          = 6,
	Count                          = 7,
	ECategory_MAX                  = 8
};


// Enum Indiana.EShapeType
enum class EShapeType : uint8_t
{
	Unknown                        = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EShapeType_MAX                 = 4
};


// Enum Indiana.ESpawnActorEventLocationSetting
enum class ESpawnActorEventLocationSetting : uint8_t
{
	MatchTargetActor               = 0,
	ProjectToGround                = 1,
	ESpawnActorEventLocationSetting_MAX = 2
};


// Enum Indiana.ESpawnActorEventRotationSetting
enum class ESpawnActorEventRotationSetting : uint8_t
{
	DoNotRotate                    = 0,
	MatchTargetActor               = 1,
	ESpawnActorEventRotationSetting_MAX = 2
};


// Enum Indiana.ESpellApplicationResult
enum class ESpellApplicationResult : uint8_t
{
	NotApplied                     = 0,
	OneShot                        = 1,
	Persistent                     = 2,
	ESpellApplicationResult_MAX    = 3
};


// Enum Indiana.EConeAxis
enum class EConeAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EConeAxis_MAX                  = 4
};


// Enum Indiana.ESpellEffectDirectionType
enum class ESpellEffectDirectionType : uint8_t
{
	Default                        = 0,
	CasterToTarget                 = 1,
	CasterForward                  = 2,
	TargetForward                  = 3,
	ESpellEffectDirectionType_MAX  = 4
};


// Enum Indiana.ESpellEffectTarget
enum class ESpellEffectTarget : uint8_t
{
	Self                           = 0,
	Player                         = 1,
	Companions                     = 2,
	Target                         = 3,
	Party                          = 4,
	AOE                            = 5,
	Cone                           = 6,
	RandomCompanion                = 7,
	RandomCompanionOnCooldown      = 8,
	OtherCompanion                 = 9,
	CharactersDetectingPlayer      = 10,
	AOESingleChoice                = 11,
	Count                          = 12,
	Invalid                        = 13,
	ESpellEffectTarget_MAX         = 14
};


// Enum Indiana.ESpellCastResult
enum class ESpellCastResult : uint8_t
{
	Success                        = 0,
	AlreadyActive                  = 1,
	InvalidTarget                  = 2,
	OnCooldown                     = 3,
	NotEnoughResources             = 4,
	Count                          = 5,
	Invalid                        = 6,
	ESpellCastResult_MAX           = 7
};


// Enum Indiana.EStackSplitStyle
enum class EStackSplitStyle : uint8_t
{
	Default                        = 0,
	CenterBG                       = 1,
	Center                         = 2,
	LeftBG                         = 3,
	Left                           = 4,
	TopBG                          = 5,
	Top                            = 6,
	RightBG                        = 7,
	Right                          = 8,
	BottomBG                       = 9,
	Bottom                         = 10,
	EStackSplitStyle_MAX           = 11
};


// Enum Indiana.TestEnum
enum class ETestEnum : uint8_t
{
	EnumValue0                     = 0,
	EnumValue1                     = 1,
	EnumValue2                     = 2,
	TestEnum_MAX                   = 3
};


// Enum Indiana.EAdjustmentDirection
enum class EAdjustmentDirection : uint8_t
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	EAdjustmentDirection_MAX       = 3
};


// Enum Indiana.ERpgStatGroupMask
enum class ERpgStatGroupMask : uint8_t
{
	None                           = 0,
	CharacterOnly                  = 1,
	WeaponOnly                     = 2,
	CharacterAndWeapon             = 3,
	ERpgStatGroupMask_MAX          = 4
};


// Enum Indiana.ERpgStatGroup
enum class ERpgStatGroup : uint8_t
{
	Character                      = 0,
	Weapon                         = 1,
	Count                          = 2,
	Invalid                        = 3,
	ERpgStatGroup_MAX              = 4
};


// Enum Indiana.EStatModifierType
enum class EStatModifierType : uint8_t
{
	PreAdd                         = 0,
	Multiplier                     = 1,
	PostAdd                        = 2,
	EStatModifierType_MAX          = 3
};


// Enum Indiana.EStatusEffectApplicationType
enum class EStatusEffectApplicationType : uint8_t
{
	ApplyOnStart                   = 0,
	ApplyOnTick                    = 1,
	ApplyOverTime                  = 2,
	ApplyAtEnd                     = 3,
	EStatusEffectApplicationType_MAX = 4
};


// Enum Indiana.EStatusEffectDurationType
enum class EStatusEffectDurationType : uint8_t
{
	UseDurationTime                = 0,
	Instant                        = 1,
	Infinite                       = 2,
	Parent                         = 3,
	Formula                        = 4,
	PassThroughValue               = 5,
	EStatusEffectDurationType_MAX  = 6
};


// Enum Indiana.EStatusEffectInitialApplicationType
enum class EStatusEffectInitialApplicationType : uint8_t
{
	StackIfAlreadyApplied          = 0,
	RemoveExistingIfAlreadyApplied = 1,
	UseLongerDurationIfAlreadyApplied = 2,
	AddDurationIfAlreadyApplied    = 3,
	DontApplyIfAlreadyApplied      = 4,
	StackSingleInstance            = 5,
	EStatusEffectInitialApplicationType_MAX = 6
};


// Enum Indiana.EStatusEffectKeywordType
enum class EStatusEffectKeywordType : uint8_t
{
	None                           = 0,
	Acid                           = 1,
	Bleed                          = 2,
	Disease                        = 3,
	Fire                           = 4,
	Ice                            = 5,
	Poison                         = 6,
	EStatusEffectKeywordType_MAX   = 7
};


// Enum Indiana.EGuiText
enum class EGuiText : uint8_t
{
	__Invalid__                    = 0,
	No                             = 1,
	Accept                         = 2,
	Cancel                         = 3,
	Continue                       = 4,
	EndDialogue                    = 5,
	Back                           = 6,
	Quit                           = 7,
	NewSaveFile                    = 8,
	LedgerNavigation_Inventory     = 9,
	Ledger_Tab_Journal             = 10,
	LedgerNavigation_Map           = 11,
	Male                           = 12,
	Female                         = 13,
	StatusEffect_Injure            = 14,
	StatusEffect_Stagger           = 15,
	StatusEffect_Knockback         = 16,
	StatusEffect_Wind              = 17,
	StatusEffect_Lame              = 18,
	StatusEffect_Maim              = 19,
	StatusEffect_Stun              = 20,
	StatusEffect_Concuss           = 21,
	StatusEffect_Knockdown         = 22,
	StatusEffect_Blur              = 23,
	StatusEffect_Disarm            = 24,
	StatusEffect_Knockout          = 25,
	On                             = 26,
	Off                            = 27,
	Revert                         = 28,
	Yes                            = 29,
	SoundMaster                    = 30,
	SoundEffects                   = 31,
	SoundMusic                     = 32,
	SoundUI                        = 33,
	SettingCategorySound           = 34,
	SettingCategoryGeneral         = 35,
	YAxisInverted                  = 36,
	Default                        = 37,
	Fullscreen                     = 38,
	ResponseLie                    = 39,
	ResponseIntimidate             = 40,
	ResponsePersuade               = 41,
	QuestAdded                     = 42,
	QuestUpdated                   = 43,
	QuestCompleted                 = 44,
	QuestFailed                    = 45,
	Door_BarredShut                = 46,
	Door_InformLocked              = 47,
	Door_InformPermanentlyLocked   = 48,
	Door_Unlocked                  = 49,
	KeyItem_Removed                = 50,
	Menu_Resume                    = 51,
	Menu_Restart                   = 52,
	Menu_MainMenu                  = 53,
	Menu_Settings                  = 54,
	Settings_Debug                 = 55,
	Menu_Dead                      = 56,
	Menu_Levels                    = 57,
	Level_BeautifulCorner          = 58,
	Level_Prototype                = 59,
	Level_Dialog                   = 60,
	Level_Stealth                  = 61,
	Level_Combat                   = 62,
	Level_Movement                 = 63,
	Level_Back                     = 64,
	Settings_VSync                 = 65,
	Settings_General               = 66,
	Container_BarredShut           = 67,
	Level_Area                     = 68,
	Level_QuestTest                = 69,
	Level_GameObjectsTest          = 70,
	Button_Claim                   = 71,
	Button_Close                   = 72,
	Button_Unlock                  = 73,
	Button_Transfer                = 74,
	Button_Claim_All               = 75,
	Door_Guide_Open                = 76,
	Door_Guide_Locked              = 77,
	Door_Guide_Barred              = 78,
	Guide_Unlock_With_Requirement  = 79,
	Switch_Guide_Use               = 80,
	Ladder_Guide_Use               = 81,
	Pickup_Guide_Use               = 82,
	Elevator_Guide_Use             = 83,
	Switch_Guide_Use_Travel        = 84,
	Build_Version                  = 85,
	Computer_Guide_Use             = 86,
	Computer_Guide_Locked          = 87,
	Computer_KeyItem_Removed       = 88,
	Computer_Unlocked_Key          = 89,
	Computer_Locked                = 90,
	Computer_InformLocked_Error    = 91,
	Computer_Difficulty_Easy       = 92,
	Computer_Difficulty_Medium     = 93,
	Computer_Difficulty_Difficult  = 94,
	Computer_Difficulty_Extreme    = 95,
	Button_Clear                   = 96,
	Talk                           = 97,
	Available                      = 98,
	StatusEffect_Intimidate        = 99,
	StatusEffect_ReducedRange      = 100,
	StatusEffect_ReducedSight      = 101,
	StatusEffect_Disabled          = 102,
	StatusEffect_ReducedDamage     = 103,
	StatusEffect_Slow              = 104,
	Settings_Apply                 = 105,
	Settings_Back                  = 106,
	Settings_Graphics              = 107,
	Settings_Audio                 = 108,
	Settings_Controls              = 109,
	Settings_Game                  = 110,
	Settings_UI                    = 111,
	Settings_Subcat_Volume         = 112,
	Settings_Fullscreen            = 113,
	Settings_WindowedFullscreen    = 114,
	Settings_Windowed              = 115,
	Settings_WindowMode            = 116,
	Settings_Low                   = 117,
	Settings_Medium                = 118,
	Settings_High                  = 119,
	Settings_VeryHigh              = 120,
	Settings_ViewDistanceQuality   = 121,
	Settings_ShadowQuality         = 122,
	Settings_AAQuality             = 123,
	Settings_TextureQuality        = 124,
	Settings_PostProcessingQuality = 125,
	Settings_FoliageQuality        = 126,
	Settings_HDR                   = 127,
	Settings_VisualEffectQuality   = 128,
	Settings_Subcat_Quality        = 129,
	Settings_Subcat_General        = 130,
	Settings_Resolution            = 131,
	Settings_Subcat_Camera         = 132,
	Settings_Reserved              = 133,
	Settings_Subcat_Display        = 134,
	InputLabel_MoveSelection       = 135,
	InputLabel_Select              = 136,
	InputLabel_Back                = 137,
	InputLabel_PageLeft            = 138,
	InputLabel_PageRight           = 139,
	Settings_Defaults_Confirmation = 140,
	Trap_Difficulty_Easy           = 141,
	Trap_Difficulty_Medium         = 142,
	Trap_Difficulty_Difficult      = 143,
	Trap_Difficulty_Extreme        = 144,
	Trap_Guide_Armed               = 145,
	Trap_Guide_Disarmed            = 146,
	Trap_Guide_Deactivated         = 147,
	Conversation_PlayerName        = 148,
	Settings_On                    = 149,
	Settings_Off                   = 150,
	Conversation_Exit_Conversation = 151,
	ContextMenu_Repair             = 152,
	ContextMenu_Drop               = 153,
	ContextMenu_Deconstruct        = 154,
	ContextMenu_Inspect            = 155,
	ContextMenu_Unequip            = 156,
	Input_Zero                     = 157,
	Input_One                      = 158,
	Input_Two                      = 159,
	Input_Three                    = 160,
	Input_Four                     = 161,
	Input_Five                     = 162,
	Input_Six                      = 163,
	Input_Seven                    = 164,
	Input_Eight                    = 165,
	Input_Nine                     = 166,
	StatusEffect_Burn              = 167,
	StatusEffect_Bleed             = 168,
	ContextMenu_MarkAsJunk         = 169,
	ContextMenu_UnmarkAsJunk       = 170,
	LedgerNavigation_Quests        = 171,
	Ledger_Tab_Companion           = 172,
	Inventory_ToggleComparison     = 173,
	Inventory_AddToJunk            = 174,
	Inventory_Keep                 = 175,
	Inventory_Inspect              = 176,
	CharacterTitleFighting         = 177,
	CharacterTitleDialog           = 178,
	CharacterTitleStealth          = 179,
	CharacterTitleLeadership       = 180,
	CharacterNameFighting          = 181,
	CharacterNameDialog            = 182,
	CharacterNameStealth           = 183,
	CharacterNameLeadership        = 184,
	CharacterBioFighting           = 185,
	CharacterBioDialog             = 186,
	CharacterBioStealth            = 187,
	CharacterBioLeadership         = 188,
	Item_Inspector                 = 189,
	WeaponStats_UnoccupiedMod      = 190,
	WeaponStat_Damage              = 191,
	WeaponStat_Rof                 = 192,
	WeaponStat_MagSize             = 193,
	WeaponStat_DPS                 = 194,
	WeaponStat_Accuracy            = 195,
	WeaponStat_ReloadTime          = 196,
	WeaponStat_Range               = 197,
	WeaponStat_EquipTime           = 198,
	WeaponStat_CritChanceBonus     = 199,
	WeaponStat_CritDamageBonus     = 200,
	WeaponStat_NoiseRange          = 201,
	WeaponStat_Recoil              = 202,
	WeaponStat_AimAccuracyBonus    = 203,
	WeaponStat_AimStaminaCost      = 204,
	WeaponStat_AmmoPerShot         = 205,
	WeaponStat_PostArmorMultiplier = 206,
	WeaponStat_OverchargeDurationBonus = 207,
	WeaponStat_OverchargeTime      = 208,
	WeaponStat_AOESpreadRadius     = 209,
	Settings_ConversationSubtitle_Delayed = 210,
	DT_Physical                    = 211,
	DT_Thermal                     = 212,
	DT_Energy                      = 213,
	DT_Shock                       = 214,
	DT_Corrosion                   = 215,
	DT_NRay                        = 216,
	WeaponStat_DamageType          = 217,
	Unit_RoundsOverSeconds         = 218,
	WeaponStat_MinMaxEffectiveRange = 219,
	WeaponStat_EffectiveRange      = 220,
	Unit_Meters                    = 221,
	Unit_Percent                   = 222,
	Unit_Meters_Range              = 223,
	Unit_Range                     = 224,
	WeaponStat_Ranged              = 225,
	WeaponStat_Melee               = 226,
	WeaponStat_Type                = 227,
	WeaponStat_Class               = 228,
	WeaponStat_SwayAngle           = 229,
	WeaponStat_SpreadAngle         = 230,
	Unit_PerSecond                 = 231,
	Unit_PercentPerSecond          = 232,
	Unit_Degrees                   = 233,
	WeaponStat_AimSpreadReduction  = 234,
	WeaponStat_DPM                 = 235,
	ContextMenu_Use                = 236,
	Unit_Seconds                   = 237,
	Health_Kit                     = 238,
	Quest_InProgress               = 239,
	Quest_Completed                = 240,
	Quest_Botched                  = 241,
	ContextMenu_Equip              = 242,
	Quest_SetAsActive              = 243,
	Quest_SortQuestType            = 244,
	Quest_SortNewest               = 245,
	Quest_SortOldest               = 246,
	ResponseDumb                   = 247,
	ResponseScience                = 248,
	Computer_Guide_Hack_Requirements = 249,
	Door_Guide_Lockpick_Requirements = 250,
	InteractionGuide_Lockpick_Hold = 251,
	InteractionGuide_Hack_Hold     = 252,
	InteractionGuide_Disarm_Hold   = 253,
	Container_GenericName          = 254,
	Door_Guide_Close               = 255,
	InventoryCategory_Weapons      = 256,
	InventoryCategory_Armor        = 257,
	InventoryCategory_Consumables  = 258,
	InventoryCategory_Modifications = 259,
	InventoryCategory_General      = 260,
	InventoryCategory_Quests       = 261,
	Settings_Ultra                 = 262,
	Guide_Unlock_With_Key          = 263,
	Guide_Requires_Key             = 264,
	Settings_MotionBlur            = 265,
	Settings_None                  = 266,
	Settings_FXAA                  = 267,
	Settings_Temporal              = 268,
	Settings_MSAA                  = 269,
	Settings_AAMethod              = 270,
	Settings_MouseSensitivity      = 271,
	CharacterStats_Attributes      = 272,
	CharacterStats_Skills          = 273,
	CharacterStats_Abilities       = 274,
	Skill_Desc_Block               = 275,
	Skill_Desc_Determination       = 276,
	Skill_Desc_Dodge               = 277,
	Skill_Desc_Hack                = 278,
	Skill_Desc_HandGuns            = 279,
	Skill_Desc_HeavyMelee          = 280,
	Skill_Desc_HeavyWeapons        = 281,
	Skill_Desc_Inspiration         = 282,
	Skill_Desc_Intimidate          = 283,
	Skill_Desc_Lie                 = 284,
	Skill_Desc_LightMelee          = 285,
	Skill_Desc_Lockpick            = 286,
	Skill_Desc_LongGuns            = 287,
	Skill_Desc_Medical             = 288,
	Skill_Desc_Persuade            = 289,
	Skill_Desc_Engineering         = 290,
	Skill_Desc_Science             = 291,
	Skill_Desc_Sneak               = 292,
	LedgerNavigation_Character     = 293,
	GenericNotification_Quest      = 294,
	InteractionGuide_Lockpick_Impossible = 295,
	InteractionGuide_Hack_Impossible = 296,
	InteractionGuide_Trap_Impossible = 297,
	InteractionGuide_Arm_Hold      = 298,
	PauseMenu_Dialog_ConfirmExit   = 299,
	PauseMenu_Dialog_ConfirmMainMenu = 300,
	Location_EmeraldVale           = 301,
	Door_Guide_Unbar               = 302,
	CompanionCommand_Temp_Ability_One = 303,
	CompanionCommand_Temp_Ability_Two = 304,
	CompanionCommand_Temp_Ability_Three = 305,
	CompanionCommand_Temp_Ability_Desc = 306,
	CompanionCommand_MissingCompanion = 307,
	CompanionCommand_Flank         = 308,
	CompanionCommand_Attack        = 309,
	CompanionCommand_Suppress      = 310,
	Location_Monarch               = 311,
	Location_Groundbreaker         = 312,
	SaveLoad_ConfirmLoad           = 313,
	SaveLoad_ConfirmSaveOverwrite  = 314,
	SaveLoad_LoadHeader            = 315,
	SaveLoad_SaveHeader            = 316,
	UseVendingMachine              = 317,
	SaveLoad_ConfirmSaveDelete     = 318,
	SaveLoad_StandardSave          = 319,
	SaveLoad_Quicksave             = 320,
	SaveLoad_Autosave              = 321,
	SaveLoad_PostgameSave          = 322,
	Saveload_Playtime              = 323,
	SaveLoad_SaveDate              = 324,
	SaveLoad_SaveSubHeader         = 325,
	SaveLoad__PlayerLevel          = 326,
	SaveLoad_SaveTypeAndRegion     = 327,
	Computer_Guide_Unlock_Requirement = 328,
	CharacterTab_Perks             = 329,
	GenericNotification_SaveComplete = 330,
	GenericNotification_SaveFailed = 331,
	Skill_HandGuns                 = 332,
	Skill_LightMelee               = 333,
	Skill_HeavyMelee               = 334,
	Skill_LongGuns                 = 335,
	Skill_HeavyWeapons             = 336,
	Skill_Dodge                    = 337,
	Skill_Block                    = 338,
	Skill_Persuade                 = 339,
	Skill_Lie                      = 340,
	Skill_Intimidate               = 341,
	Skill_Sneak                    = 342,
	Skill_Hack                     = 343,
	Skill_Lockpick                 = 344,
	Skill_Medical                  = 345,
	Skill_Engineering              = 346,
	Skill_Science                  = 347,
	Skill_Inspiration              = 348,
	Skill_Determination            = 349,
	Category_Melee                 = 350,
	Category_Ranged                = 351,
	Category_Defense               = 352,
	Category_Dialog                = 353,
	Category_Stealth               = 354,
	Category_Tech                  = 355,
	Category_Leadership            = 356,
	CharacterStats_Attribute_Strength = 357,
	CharacterStats_Attribute_Desc_Strength = 358,
	CharacterStats_Attribute_Dexterity = 359,
	CharacterStats_Attribute_Desc_Dexterity = 360,
	CharacterStats_Attribute_Endurance = 361,
	CharacterStats_Attribute_Desc_Endurance = 362,
	CharacterStats_Attribute_Intelligence = 363,
	CharacterStats_Attribute_Desc_Intelligence = 364,
	CharacterStats_Attribute_Perception = 365,
	CharacterStats_Attribute_Desc_Perception = 366,
	CharacterStats_Attribute_Willpower = 367,
	CharacterStats_Attribute_Charm = 368,
	CharacterStats_Attribute_Desc_Charm = 369,
	CharacterStats_Attribute_Wits  = 370,
	CharacterStats_Attribute_Temperament = 371,
	CharacterStats_Attribute_Desc_Temperament = 372,
	Attribute_Category_Mind        = 373,
	Attribute_Category_Body        = 374,
	Attribute_Category_Personality = 375,
	Attribute_Range_Minimum        = 376,
	Attribute_Range_BelowAverage   = 377,
	Attribute_Range_Average        = 378,
	Attribute_Range_Good           = 379,
	Attribute_Range_High           = 380,
	Attribute_Range_VeryHigh       = 381,
	Maximum                        = 382,
	WeaponStat_ProjectilesPerShot  = 383,
	WeaponStat_MaxChargeTime       = 384,
	CharacterStats_CategoryRefund_Warning = 385,
	CharacterStats_SkillsPage_Leave_Warning = 386,
	InventoryCategory_Gadgets      = 387,
	WeaponStat_RoundsPerMin        = 388,
	ContextMenu_Compare            = 389,
	ContextMenu_StopCompare        = 390,
	Unit_RoundsOverMinutes         = 391,
	WeaponStat_Skill               = 392,
	AmmoType_Handgun               = 393,
	AmmoType_Rifle                 = 394,
	AmmoType_EnergyCell            = 395,
	WeaponStat_AmmoType            = 396,
	WeaponStat_SwingAttackRate     = 397,
	WeaponStat_PowerAttackRate     = 398,
	WeaponStat_SweepAttackRate     = 399,
	WeaponStat_FireMode            = 400,
	FireMode_SemiAutomatic         = 401,
	FireMode_Automatic             = 402,
	FireMode_Burst                 = 403,
	FireMode_Charge                = 404,
	WeaponStat_AOE                 = 405,
	ArmorStat_DT                   = 406,
	ArmorStat_DTP                  = 407,
	ArmorStat_DR                   = 408,
	ArmorStat_DRP                  = 409,
	ModSlot_MeleeGrip              = 410,
	ModSlot_MeleeAttack            = 411,
	ModSlot_Barrel                 = 412,
	ModSlot_Sight                  = 413,
	ModSlot_Magazine               = 414,
	ModSlot_UnderBarrel            = 415,
	Mod_DamageType                 = 416,
	Stat_Delta                     = 417,
	WeaponStat_SecondaryDamageType = 418,
	ModAffix_Add                   = 419,
	Unit_AttacksOverSeconds        = 420,
	Location_Terra2                = 421,
	CharacterStats_FinalAllocation_Confirmation = 422,
	WeaponStat_OnHitEffectChance   = 423,
	WeaponStat_OnHitEffect         = 424,
	AmmoType_Needler               = 425,
	WeaponStat_SkillRequirement    = 426,
	WeaponStat_DamageMultiProjectile = 427,
	Unit_Count                     = 428,
	ItemStack_Count                = 429,
	Body                           = 430,
	Mind                           = 431,
	Personality                    = 432,
	CharacterCreation_AtttributeGroupDesc_Body = 433,
	CharacterCreation_AtttributeGroupDesc_Mind = 434,
	CharacterCreation_AtttributeGroupDesc_Personality = 435,
	CharacterCreation_SkillsRemaining = 436,
	RawItemStats                   = 437,
	Background01                   = 438,
	Background02                   = 439,
	Background03                   = 440,
	Background04                   = 441,
	Background05                   = 442,
	Background_Desc_Background01   = 443,
	Background_Desc_Background02   = 444,
	Background_Desc_Background03   = 445,
	Background_Desc_Background04   = 446,
	Background_Desc_Background05   = 447,
	UseWorkbench                   = 448,
	NoBackground                   = 449,
	CharacterCreation_FinalizationConfirmation = 450,
	Background_Desc_NoBackground   = 451,
	ContextMenu_Mod                = 452,
	ContextMenu_InstallMod         = 453,
	AttributeBonus_Strength_Maximum = 454,
	AttributeBonus_Strength_VeryHigh = 455,
	AttributeBonus_Strength_High   = 456,
	AttributeBonus_Strength_Good   = 457,
	AttributeBonus_Strength_Average = 458,
	AttributeBonus_Strength_BelowAverage = 459,
	AttributeBonus_Strength_Minimum = 460,
	AttributeBonus_Dexterity_Maximum = 461,
	AttributeBonus_Dexterity_VeryHigh = 462,
	AttributeBonus_Dexterity_High  = 463,
	AttributeBonus_Dexterity_Good  = 464,
	AttributeBonus_Dexterity_Average = 465,
	AttributeBonus_Dexterity_BelowAverage = 466,
	AttributeBonus_Dexterity_Minimum = 467,
	AttributeBonus_Endurance_Maximum = 468,
	AttributeBonus_Endurance_VeryHigh = 469,
	AttributeBonus_Endurance_High  = 470,
	AttributeBonus_Endurance_Good  = 471,
	AttributeBonus_Endurance_Average = 472,
	AttributeBonus_Endurance_BelowAverage = 473,
	AttributeBonus_Endurance_Minimum = 474,
	AttributeBonus_Intelligence_Maximum = 475,
	AttributeBonus_Intelligence_VeryHigh = 476,
	AttributeBonus_Intelligence_High = 477,
	AttributeBonus_Intelligence_Good = 478,
	AttributeBonus_Intelligence_Average = 479,
	AttributeBonus_Intelligence_BelowAverage = 480,
	AttributeBonus_Intelligence_Minimum = 481,
	AttributeBonus_Perception_Maximum = 482,
	AttributeBonus_Perception_VeryHigh = 483,
	AttributeBonus_Perception_High = 484,
	AttributeBonus_Perception_Good = 485,
	AttributeBonus_Perception_Average = 486,
	AttributeBonus_Perception_BelowAverage = 487,
	AttributeBonus_Perception_Minimum = 488,
	AttributeBonus_Willpower_Maximum = 489,
	AttributeBonus_Charm_Maximum   = 490,
	AttributeBonus_Charm_VeryHigh  = 491,
	AttributeBonus_Charm_High      = 492,
	AttributeBonus_Charm_Good      = 493,
	AttributeBonus_Charm_Average   = 494,
	AttributeBonus_Charm_BelowAverage = 495,
	AttributeBonus_Charm_Minimum   = 496,
	AttributeBonus_Wits_Maximum    = 497,
	AttributeBonus_Temperament_Maximum = 498,
	AttributeBonus_Temperament_VeryHigh = 499,
	AttributeBonus_Temperament_High = 500,
	AttributeBonus_Temperament_Good = 501,
	AttributeBonus_Temperament_Average = 502,
	AttributeBonus_Temperament_BelowAverage = 503,
	AttributeBonus_Temperament_Minimum = 504,
	Modifications_InstallConfirmation = 505,
	Breakdown_Confirmation         = 506,
	Repair_Confirm                 = 507,
	CharacterCreation_ReturnToMenu = 508,
	AttributeBonus_Strength_Advanced = 509,
	AttributeBonus_Dexterity_Advanced = 510,
	AttributeBonus_Endurance_Advanced = 511,
	AttributeBonus_Intelligence_Advanced = 512,
	AttributeBonus_Perception_Advanced = 513,
	AttributeBonus_Willpower_Advanced = 514,
	AttributeBonus_Charm_Advanced  = 515,
	AttributeBonus_Wits_Advanced   = 516,
	AttributeBonus_Temperament_Advanced = 517,
	X_Of_Y                         = 518,
	Perks_PerksRemaining           = 519,
	ArmorStat_DamageThreshold      = 520,
	ArmorStat_DamageThresholdPercentage = 521,
	ArmorModSlot_Armoring          = 522,
	ArmorModSlot_Dampening         = 523,
	ArmorModSlot_Resistance        = 524,
	ArmorModSlot_Utility           = 525,
	Dialog_Dumb                    = 526,
	Dialog_Prefix                  = 527,
	Requirements_Header            = 528,
	Perk_Purchase_Requirements     = 529,
	Perk_Requirement_Skill         = 530,
	CharacterStats_PerkUpgrade     = 531,
	Category_Desc_Ranged           = 532,
	Category_Desc_Defense          = 533,
	Category_Desc_Dialog           = 534,
	Category_Desc_Stealth          = 535,
	Category_Desc_Tech             = 536,
	Category_Desc_Leadership       = 537,
	AttributeBonus_Strength_BAEffect = 538,
	AttributeBonus_Dexterity_BAEffect = 539,
	AttributeBonus_Endurance_BAEffect = 540,
	AttributeBonus_Intelligence_BAEffect = 541,
	AttributeBonus_Perception_BAEffect = 542,
	AttributeBonus_Willpower_BAEffect = 543,
	AttributeBonus_Charm_BAEffect  = 544,
	AttributeBonus_Wits_BAEffect   = 545,
	AttributeBonus_Temperament_BAEffect = 546,
	FactionResponse_KOS            = 547,
	FactionResponse_Friendly       = 548,
	FactionResponse_Neutral        = 549,
	FactionResponse_VendorPriceIncrease = 550,
	FactionResponse_VendorPriceDecrease = 551,
	AmmoType_Light                 = 552,
	AmmoType_Heavy                 = 553,
	AmmoType_Energy                = 554,
	UseVendor                      = 555,
	ContextMenu_Buy                = 556,
	ContextMenu_Pawn               = 557,
	ContextMenu_ClearBuy           = 558,
	ContextMenu_ClearPawn          = 559,
	Trade                          = 560,
	Vendor_TotalToPay              = 561,
	Vendor_TotalToEarn             = 562,
	Vendor_TotalEven               = 563,
	Vendor_VendorLacksCurrency     = 564,
	Vendor_BuyerLacksCurrency      = 565,
	Vendor_BuyerHasCurrency        = 566,
	LedgerMap_AcceptFastTravel     = 567,
	LedgerMap_FastTravel           = 568,
	WalkSpeed                      = 569,
	CrouchSpeed                    = 570,
	SprintSpeed                    = 571,
	Unit_MetersOverSeconds         = 572,
	Unit_Ratio                     = 573,
	Unit_HealthOverSeconds         = 574,
	Generic_Guide_Locked           = 575,
	Generic_Guide_Travel           = 576,
	OCL_Guide_Sealed               = 577,
	ContextMenu_Unload             = 578,
	GameDifficulty                 = 579,
	GameDifficulty_Story           = 580,
	GameDifficulty_Normal          = 581,
	GameDifficulty_Hard            = 582,
	GameDifficulty_SuperNova       = 583,
	Difficulty_Desc_Story          = 584,
	Difficulty_Desc_Normal         = 585,
	Difficulty_Desc_Hard           = 586,
	Difficulty_Desc_SuperNova      = 587,
	ArmorPartsRequired             = 588,
	WeaponPartsRequired            = 589,
	ItemBreakdown_ArmorParts       = 590,
	ItemBreakdown_WeaponParts      = 591,
	Heal_Percent_Over_Time         = 592,
	RestrictedStock                = 593,
	RestrictedStockLocked          = 594,
	Skill_Category_Weapon_Melee    = 595,
	Skill_Category_Weapon_Ranged   = 596,
	Skill_Category_Defense         = 597,
	Skill_Category_Dialog          = 598,
	Skill_Category_Stealth         = 599,
	Skill_Category_Tech            = 600,
	Skill_Category_Leadership      = 601,
	Skill_Unlock_Header            = 602,
	Stat_WalkSpeed                 = 603,
	Skill_Tier1_Format             = 604,
	Skill_Tier2_Format             = 605,
	Skill_Tier3_Format             = 606,
	Weapon_OnCritHit               = 607,
	QuestLog_NoActiveQuest         = 608,
	ContextMenu_Swap               = 609,
	Location_Hephaestus            = 610,
	Location_Scylla                = 611,
	AbilityUnlock_WeakSpotHandguns = 612,
	AbilityUnlock_TTDSpellsHandguns = 613,
	AbilityUnlock_PowerAttackHeavyMelee = 614,
	AbilityUnlock_WeakSpotHeavyMelee = 615,
	AbilityUnlock_MeleeUnblockable = 616,
	AbilityUnlock_WeakSpotHeavyWeapons = 617,
	AbilityUnlock_TTDSpellsHeavyWeapons = 618,
	AbilityUnlock_CompanionAbilities = 619,
	AbilityUnlock_WeakSpotLongGuns = 620,
	AbilityUnlock_TTDSpellsLongGuns = 621,
	AbilityUnlock_PowerAttackLightMelee = 622,
	AbilityUnlock_WeakSpotLightMelee = 623,
	AbilityUnlock_MeleeReach       = 624,
	WeaponStat_AmmoPerSecond       = 625,
	Dialog_Bribe                   = 626,
	UseBed                         = 627,
	Positive_Reputation_Gained     = 628,
	Positive_Reputation_Lost       = 629,
	Negative_Reputation_Gained     = 630,
	Negative_Reputation_Lost       = 631,
	Faction_Reputation_Changed     = 632,
	Companion_Gained_Morale        = 633,
	Companion_Lost_Morale          = 634,
	Companion_Joined               = 635,
	Companion_Left                 = 636,
	XP_Enemy_Killed                = 637,
	XP_Point_of_Interest           = 638,
	XP_Skill_Used                  = 639,
	XP_Collectible_Found           = 640,
	XP_Generic                     = 641,
	Item_Gained                    = 642,
	Item_Lost                      = 643,
	PerkSurcharges_Percent         = 644,
	PerkBuyingPrice_Percent        = 645,
	Duration_S                     = 646,
	Duration_M_S                   = 647,
	Duration_M                     = 648,
	Duration_H                     = 649,
	Duration_H_M                   = 650,
	DT_All                         = 651,
	AbilityUnlock_Dodge            = 652,
	AbilityUnlock_Block            = 653,
	AbilityUnlock_Pickpocket       = 654,
	AbilityUnlock_HackRobots       = 655,
	AbilityUnlock_Medkit1          = 656,
	AbilityUnlock_Medkit2          = 657,
	AbilityUnlock_Medkit3          = 658,
	DT_Abbreviation                = 659,
	Rank_X_Colon                   = 660,
	Heal_Over_Duration             = 661,
	Distance_Meters                = 662,
	UI_Cooldown                    = 663,
	UI_Create_Item_Format          = 664,
	Location_Roseway               = 665,
	UI_Passive_Bonuses             = 666,
	RestrictedArea                 = 667,
	FastTravel_InCombat            = 668,
	FastTravel_InConversation      = 669,
	FastTravel_Hazard              = 670,
	FastTravel_Encumbered          = 671,
	FastTravel_Interior            = 672,
	FastTravel_Crime               = 673,
	FastTravel_General             = 674,
	FastTravel_NearHostiles        = 675,
	NotAllowedInCombat             = 676,
	FastTravelLocationDiscovered   = 677,
	Bribe_Prefix                   = 678,
	Companion_Unlocked             = 679,
	Skills_Level_X                 = 680,
	UseChair                       = 681,
	SystemMap_SelectDestination    = 682,
	SystemMap_TravelTo_X           = 683,
	CharacterCreation_NameEntry    = 684,
	Location_Tartarus              = 685,
	Companion_Follow_Close         = 686,
	Companion_Follow_Medium        = 687,
	Companion_Follow_Far           = 688,
	Companion_WeaponPref_Melee     = 689,
	Companion_WeaponPref_Mixed     = 690,
	Companion_WeaponPref_Ranged    = 691,
	Companion_Combat_Defensive     = 692,
	Companion_Combat_Offensive     = 693,
	CharacterCreation_NamePrompt   = 694,
	SurvivalMode_Desc              = 695,
	Input_X_Hold                   = 696,
	Hold                           = 697,
	AbilityUnlock_Acrophobia       = 698,
	ShipTerminal                   = 699,
	Companion_Combat_Passive       = 700,
	Companion_PerksPage_Revert_Warning = 701,
	FastTravel_Exhausted           = 702,
	FastTravel_Starving            = 703,
	FastTravel_Dehydrated          = 704,
	FastTravel_ShipRestrict        = 705,
	ItemCondition                  = 706,
	ItemStats_AmmoTypeEmbedded     = 707,
	ArmorType_Heavy                = 708,
	ArmorType_Medium               = 709,
	ArmorType_Light                = 710,
	ArmorType_Header               = 711,
	StatBonus_SkillBonus           = 712,
	SpacersChoice_Flaw             = 713,
	Reward_Perk_Point              = 714,
	Name_Exclamation               = 715,
	CharacterTab_Skills            = 716,
	Ledger_Level_Up_Offer          = 717,
	Flaw_Effects                   = 718,
	Skill_Tier4_Format             = 719,
	Skill_Tier5_Format             = 720,
	AbilityUnlock_SneakAttack      = 721,
	AbilityUnlock_LockpickPreview  = 722,
	Item_Salvaged_With_Count       = 723,
	Item_Salvaged                  = 724,
	AbilityUnlock_SellToMachine    = 725,
	AbilityUnlock_FieldRepair      = 726,
	Optional_Item_Name_X           = 727,
	Value_X_Seconds                = 728,
	AbilityUnlock_Leap             = 729,
	SaveLoad_SaveUnavailable       = 730,
	AbilityUnlock_TTDSpellsLightMelee = 731,
	AbilityUnlock_TTDSpellsHeavyMelee = 732,
	AbilityUnlock_FastTravelWhileEncumbered = 733,
	PerkAdditionalAmmoStock_Percent = 734,
	PerkAdditionalConsumableStock_Percent = 735,
	Perk_Tier_Header               = 736,
	Prompt_Steal_Item              = 737,
	Category_Desc_Melee            = 738,
	SaveLoad_XboxActiveUserSignedOutInGame = 739,
	SaveLoad_XboxActiveUserSignedOutTitle = 740,
	SaveLoad_XboxActiveUserSignedOutMainMenu = 741,
	AbilityUnlock_Tinkering        = 742,
	FlavorAptitude                 = 743,
	FlavorCharacterGeneric         = 744,
	FlavorCharacterLevelUp         = 745,
	FlavorSkills                   = 746,
	FlavorPerks                    = 747,
	FlavorCharacterDetails         = 748,
	FlavorCharacterReputation      = 749,
	FlavorInventoryGeneric         = 750,
	FlavorInventoryBucket          = 751,
	FlavorQuestsGeneric            = 752,
	FlavorMapGeneric               = 753,
	FlavorCompanionsGeneric        = 754,
	FlavorCompanionsInventoryHover = 755,
	FlavorCompanionsStatsHover     = 756,
	FlavorCompanionsBehaviorHover  = 757,
	FlavorCompanionPerksHover      = 758,
	FlavorWorkbenchGeneric         = 759,
	FlavorWorkbenchRepairHover     = 760,
	FlavorWorkbenchBreakdownHover  = 761,
	FlavorWorkbenchJunkHover       = 762,
	FlavorWorkbenchModGeneric      = 763,
	FlavorWorkbenchBreakdownHover01 = 764,
	FlavorCCAttributes             = 765,
	FlavorCCAppearance             = 766,
	FlavorCCName                   = 767,
	FlavorCCReview                 = 768,
	FlavorPartySelection           = 769,
	FlavorCCAtrributesMajor        = 770,
	FlavorCCAttributesMinor        = 771,
	FlavorCCSkills                 = 772,
	FlavorInventoryCategoryWeapons = 773,
	FlavorInventoryCategoryArmor   = 774,
	FlavorInventoryCategoryConsumables = 775,
	FlavorInventoryCategoryModifications = 776,
	FlavorInventoryCategoryGeneral = 777,
	FlavorInventoryCategoryQuests  = 778,
	FlavorCompanionsPerksGeneric   = 779,
	FlavorCompanionsPerksAvailable = 780,
	FlavorCompanionsInventoryRanged = 781,
	FlavorCompanionsInventoryMelee = 782,
	FlavorCompanionsInventoryHelmet = 783,
	FlavorCompanionsInventoryArmor = 784,
	FlavorWorkbenchBreakDownGeneric = 785,
	FlavorWorkbenchRepairGeneric   = 786,
	Archive                        = 787,
	CharacterStats_Respec          = 788,
	CharacterStats_Respec_Dialog1  = 789,
	CharacterStats_Respec_Dialog2  = 790,
	QualityLevel                   = 791,
	Settings_Custom                = 792,
	SavingWidget_Saving            = 793,
	X_Number_Uses                  = 794,
	Disguise_RequiresKey           = 795,
	Disguise_Failed                = 796,
	Disguise_DialogueDifficulty    = 797,
	X_Number                       = 798,
	Companion_WeaponPref_LongRange = 799,
	Companion_WeaponPref_CloseRange = 800,
	Scanner_EnemyLevel             = 801,
	X_Percent_Discount             = 802,
	X_Percent_Surcharge            = 803,
	Workbench_TinkerItem           = 804,
	Workbench_TinkerWeaponBase     = 805,
	Workbench_TinkerArmorBase      = 806,
	ItemModding_ItemNameDesc       = 807,
	RepairAllEquipped_X_Bits       = 808,
	RepairAllEquipped_X_WeaponParts = 809,
	RepairAllEquipped_X_ArmorParts = 810,
	Quest_SortLocation             = 811,
	Quest_SortDifficulty           = 812,
	Quest_SortAlphabetical         = 813,
	Inventory_StackSplitDrop       = 814,
	Inventory_StackSplitJunk       = 815,
	Inventory_StackSplitUnjunk     = 816,
	QuestType_Main                 = 817,
	QuestType_Side                 = 818,
	QuestType_Faction              = 819,
	QuestType_Companion            = 820,
	QuestType_Task                 = 821,
	Location_Space                 = 822,
	QuestDifficulty_Easy           = 823,
	QuestDifficulty_Normal         = 824,
	QuestDifficulty_Hard           = 825,
	QuestDifficulty_Deadly         = 826,
	Sell_X                         = 827,
	Buy_X                          = 828,
	Clear_Cart                     = 829,
	SaveLoad_LoadSubHeader         = 830,
	SaveLoad_SaveFlavorText        = 831,
	SaveLoad_LoadFlavorText        = 832,
	VendorStackSplitBuy            = 833,
	VendorStackSplitUnbuy          = 834,
	VendorStackSplitSell           = 835,
	VendorStackSplitUnsell         = 836,
	LevelUp_NewLevel               = 837,
	PointsAvailable_Skills         = 838,
	PointOfInterestDiscovered      = 839,
	XP_Fast_Travel                 = 840,
	Weapon_Parts_Required_Value    = 841,
	Armor_Parts_Required_Value     = 842,
	FlavorInventoryCategoryJunk    = 843,
	SaveLoad_PointOfNoReturnDelete = 844,
	UI_Empty                       = 845,
	Unicode_Infinity               = 846,
	Warning_PointOfNoReturn_Phineas = 847,
	SettingName_PseudoGod          = 848,
	SettingCategory_Cheat          = 849,
	SettingName_God                = 850,
	SettingName_InfiniteAmmo       = 851,
	SettingCategory_Movement       = 852,
	SettingCategory_Attributes     = 853,
	SettingCategory_Skills         = 854,
	SaveLoad_PointOfNoReturn       = 855,
	Unknown                        = 856,
	CC_ChangeAttributeValue        = 857,
	CharacterCreation_AttributePoints_Remaining = 858,
	AbilityUnlock_PowerAttackScience = 859,
	EyeHorizontal                  = 860,
	MouthVertical                  = 861,
	Missing                        = 862,
	Skills_AdjustedValue           = 863,
	Value_Hyphen_Locked            = 864,
	MainMenu_Keyboard_Prompt       = 865,
	Perk_Purchased                 = 866,
	Perk_Unlocked                  = 867,
	Perk_Marked                    = 868,
	CharacterCustomization_PlayerAge = 869,
	SaveLoad_XboxActiveUserSignedOut = 870,
	SaveLoad_XboxActiveUserDisconnected = 871,
	Item_on_Display                = 872,
	LedgerMap_LocalMapName         = 873,
	Lasts_Duration                 = 874,
	OneYear                        = 875,
	XYears                         = 876,
	OneMonth                       = 877,
	XMonths                        = 878,
	OneWeek                        = 879,
	XWeeks                         = 880,
	OneDay                         = 881,
	XDays                          = 882,
	OneHour                        = 883,
	XHours                         = 884,
	OneMinute                      = 885,
	XMinutes                       = 886,
	OneSecond                      = 887,
	XSeconds                       = 888,
	ValueCommaSpace                = 889,
	Vendor_Confirm                 = 890,
	NameColonText                  = 891,
	Journal_Codex                  = 892,
	RespecificationMachine         = 893,
	MainMenu_Gamepad_Prompt        = 894,
	Inventory_InCombat             = 895,
	SelectTravelDestinationOn_X    = 896,
	Disguise_RequiresID            = 897,
	SavedLoadRestriction_LoggingOut = 898,
	SavedLoadRestriction_PlatformStorageInacessible = 899,
	SavedLoadRestriction_PlatformSaveSystemNull = 900,
	SavedLoadRestriction_DeviceFull = 901,
	SavedLoadRestriction_Unsupported = 902,
	SavedLoadRestriction_GenericFail = 903,
	Supernova_DifficultyChange     = 904,
	DownloadComplete_Percent_X     = 905,
	Disguise_RequiresShroud        = 906,
	Key_CannotBeRebound            = 907,
	Key_CannotBeAssignedTo_Action  = 908,
	Key_AssignedTo_Action_NewAction = 909,
	MissingKeybinds_Actions        = 910,
	AutosaveSplash_PS4             = 911,
	AutosaveSplash_Xbox            = 912,
	AutosaveSplash_PC              = 913,
	Keybinds_Rebind                = 914,
	Keybindings_Attack             = 915,
	Keybindings_Reload             = 916,
	Keybindings_CompanionMove      = 917,
	Righty                         = 918,
	Lefty                          = 919,
	Normal                         = 920,
	Inverted                       = 921,
	Hold_X                         = 922,
	Click_X                        = 923,
	Move                           = 924,
	Look                           = 925,
	CodexCategory_Symbols          = 926,
	CombatOnly                     = 927,
	SystemMapLocationUnlocked      = 928,
	Items_Gained                   = 929,
	Items_Lost                     = 930,
	Repair_X                       = 931,
	ArmorType_Flesh                = 932,
	GamepadNotAllowedWarning       = 933,
	RestrictedStockUnlocked        = 934,
	NowAvailable                   = 935,
	Breakdown_EngineeringLevel     = 936,
	Breakdown_BasicModChance       = 937,
	Breakdown_RareModChance        = 938,
	Breakdown_PopupTitle           = 939,
	ModifyNoRecovery               = 940,
	ModifyItemWithMod              = 941,
	CurrentMod_MeleeGrip           = 942,
	NewMod_MeleeGrip               = 943,
	CurrentMod_MeleeAttack         = 944,
	NewMod_MeleeAttack             = 945,
	CurrentMod_Barrel              = 946,
	NewMod_Barrel                  = 947,
	CurrentMod_Magazine            = 948,
	NewMod_Magazine                = 949,
	CurrentMod_Sight               = 950,
	NewMod_Sight                   = 951,
	CurrentMod_Armoring            = 952,
	NewMod_Armoring                = 953,
	CurrentMod_Resistance          = 954,
	NewMod_Resistance              = 955,
	CurrentMod_Dampening           = 956,
	NewMod_Dampening               = 957,
	CurrentMod_Utility             = 958,
	NewMod_Utility                 = 959,
	YourBits                       = 960,
	SaveLoad_BeforeSkippingHope    = 961,
	YourWeaponParts                = 962,
	YourArmorParts                 = 963,
	ItemSorting_Alphabetical       = 964,
	ItemSorting_Value              = 965,
	ItemSorting_Weight             = 966,
	ItemSorting_ValueToWeight      = 967,
	ItemSorting_DamageRating       = 968,
	ItemSorting_ArmorRating        = 969,
	ItemSorting_WeaponType         = 970,
	ItemSorting_ArmorType          = 971,
	ItemSorting_RangedMeleeArmorMod = 972,
	Breakdown_ItemCount            = 973,
	EquipmentMods_ModCount         = 974,
	AlreadyInstalledMod            = 975,
	TinkerMaxLevelReachedPostDLC   = 976,
	TinkerSkillLocked              = 977,
	SaveLoad_PS4ActiveUserDisconnected = 978,
	MainMenu_Gamepad_PS4_Prompt    = 979,
	PointsAvailable_Perks          = 980,
	Perk_Cost                      = 981,
	PointsAvailable_SkillPerks     = 982,
	Language_English               = 983,
	Language_French                = 984,
	Language_Italian               = 985,
	Language_German                = 986,
	Language_Spanish               = 987,
	Language_Portuguese            = 988,
	Language_Russian               = 989,
	Language_Korean                = 990,
	Language_Japanese              = 991,
	Language_Chinese               = 992,
	Language_Polish                = 993,
	Minimal                        = 994,
	Always                         = 995,
	OnlyWhenClose                  = 996,
	Never                          = 997,
	TimedFade                      = 998,
	FPSIndicator                   = 999,
	FPSIndicatorDescription        = 1000,
	TopLeft                        = 1001,
	TopRight                       = 1002,
	BottomLeft                     = 1003,
	BottomRight                    = 1004,
	AbilityUnlock_TinkerScienceCostCap = 1005,
	Vertical                       = 1006,
	Horizontal                     = 1007,
	Simplified                     = 1008,
	SellToVendingMachines_Locked   = 1009,
	Conversation_Trade             = 1010,
	Attribute_Range_Maximum        = 1011,
	Setting_LanguageDisabled       = 1012,
	Keybinds_UnbindKey             = 1013,
	Keybinds_ResetDefault          = 1014,
	Keybinds_CurrentlyBound        = 1015,
	Keybinds_CurrentBinding        = 1016,
	Keybinds_CurrentlyUnbound      = 1017,
	DetectGraphicsSettings         = 1018,
	Thirty                         = 1019,
	Sixty                          = 1020,
	OneHundredTwenty               = 1021,
	OneHundredFourtyFour           = 1022,
	OneHundredSixty                = 1023,
	OneHundredSixtyFive            = 1024,
	OneHundredEighty               = 1025,
	TwoHundred                     = 1026,
	TwoHundredFourty               = 1027,
	Unlimited                      = 1028,
	CompanionCommand_Ability_One   = 1029,
	CompanionCommand_Ability_Two   = 1030,
	ModifyReplaceWarning           = 1031,
	RepairAllEquipped_X_Parts      = 1032,
	Inventory_SamWarning           = 1033,
	InventorySlot_BodyArmor        = 1034,
	InventorySlot_Helmet           = 1035,
	Companion_Disguise             = 1036,
	Perk_Purchase_Requirements01   = 1037,
	Flavor_CompanionsInventory_Hover = 1038,
	SaveLoad_Maximum_Saves         = 1039,
	Keybindings_Unbind             = 1040,
	Keybindings_Bind               = 1041,
	Keybindings_Rebind             = 1042,
	CompanionPerkUnlocked          = 1043,
	SaveLoad_LeavingEV             = 1044,
	SaveLoad_LeavingEVDescription  = 1045,
	SaveLoad_Sorting_Date          = 1046,
	SaveLoad_Sorting_PlayTime      = 1047,
	SaveLoad_Sorting_Location      = 1048,
	SaveLoad_Sorting_Level         = 1049,
	SaveLoad_SaveConfirm           = 1050,
	SaveLoad_SaveDoubleConfirm     = 1051,
	Cannot_Rebind                  = 1052,
	Menus_Cannot_Rebind            = 1053,
	PartySelect_Encumbered         = 1054,
	PartySelect_WeightAllowance    = 1055,
	Settings_ApplyNow              = 1056,
	Settings_RevertWarn            = 1057,
	NameBlacklisted                = 1058,
	Appearance_Warn                = 1059,
	NotSignedIn_Xbox               = 1060,
	Settings_LanguageSelect        = 1061,
	Perk_Confirmation              = 1062,
	Map_Active                     = 1063,
	Map_Inactive                   = 1064,
	Map_Toggle_Inactive            = 1065,
	Pristine                       = 1066,
	Settings_AimingOnly            = 1067,
	AndMore_Ellipsis               = 1068,
	InactiveQuests                 = 1069,
	ShowInactiveQuests             = 1070,
	HideInactiveQuests             = 1071,
	MultipleQuests                 = 1072,
	Format_DotSpaceEntry           = 1073,
	DoubleClick_x                  = 1074,
	IdleCameraAvailable            = 1075,
	IdleCameraUnavailable          = 1076,
	AdjustedSkillValue             = 1077,
	Location_Gorgon                = 1078,
	UsePet                         = 1079,
	Play                           = 1080,
	Stop                           = 1081,
	AudioLog                       = 1082,
	AudioLogs                      = 1083,
	AudioLogs_BaseGame             = 1084,
	AudioLogs_INX01                = 1085,
	AudioLogs_INX02                = 1086,
	INX01_Name                     = 1087,
	INX02_Name                     = 1088,
	NowAvailableExclamation        = 1089,
	ComingSoon                     = 1090,
	OwnedUninstalled               = 1091,
	Installed                      = 1092,
	Skill_Tier6_Format             = 1093,
	AbilityUnlock_InstantReloadHeavyOnEmpty = 1094,
	DT_Cold                        = 1095,
	PerkSuppressed                 = 1096,
	PerkUnsuppressed               = 1097,
	PerkSuppressedEffect           = 1098,
	AbilityUnlock__StealthInstantKillUndetectable = 1099,
	AbilityUnlock__DoubleHackRobots = 1100,
	AbilityUnlock__UndetectableLockpicking = 1101,
	AbilityUnlock__UseScienceAsWeaponSkill = 1102,
	FlawDecidophobia               = 1103,
	PerkSuppressedByNameDuration   = 1104,
	CurSuppressingNameDuration     = 1105,
	CurrentBitsValue               = 1106,
	CurrentWeaponPartsValue        = 1107,
	CurrentArmorPartsValue         = 1108,
	CurVersionValue                = 1109,
	VersionMismatchValue           = 1110,
	SaveVersionValue               = 1111,
	QuoteValueMissing              = 1112,
	QuoteValueInstalled            = 1113,
	PurchaseDLC                    = 1114,
	Workbench_PlayerLacksWeaponParts = 1115,
	Workbench_PlayerLacksArmorParts = 1116,
	Analyze                        = 1117,
	TinkerMaxLevelReachedPreDLC    = 1118,
	TinkerMaxLevelReached          = 1119,
	Location_PhaethonPilothouse    = 1120,
	Location_RizzosDistillationStation = 1121,
	Location_EridanosSpaceport     = 1122,
	Location_TheGrandColonialHotel = 1123,
	Location_WildernessExploitationReserve = 1124,
	Location_RizzosPurpleberryOrchards = 1125,
	Location_RizzosResearchDevelopmentDistrictLabs = 1126,
	Location_HappyDaleFarms        = 1127,
	Location_StormtailShelter      = 1128,
	SkillName_Virtuoso_Value       = 1129,
	ModRecoveryEngineeringVirtuoso = 1130,
	PreviousModRecovered           = 1131,
	ModInstallWarningEngineeringVirtuoso = 1132,
	GameName                       = 1133,
	Quest_SortContent              = 1134,
	Stop_Audio_Log                 = 1135,
	Warning_PointOfNoReturn_Overwrite = 1136,
	DLCpopup_Gorgon_Title          = 1137,
	DLCpopup_Gorgon                = 1138,
	FastTravel_EridanosQuest       = 1139,
	MoreInfo                       = 1140,
	DLCpopup_Eridanos_Title        = 1141,
	DLCpopup_Eridanos              = 1142,
	DLC_PONR_Prompt                = 1143,
	DLC_PONR_Prompt_Dual           = 1144,
	DLCpopup_Dual                  = 1145,
	DLCpopup_Dual_Title            = 1146,
	EvidenceNearbyNotification     = 1147,
	EGuiText_MAX                   = 1148
};


// Enum Indiana.ESurvivalBar
enum class ESurvivalBar : uint8_t
{
	Hunger                         = 0,
	Thirst                         = 1,
	Sleep                          = 2,
	Invalid                        = 3,
	ESurvivalBar_MAX               = 4
};


// Enum Indiana.CycleBehavior
enum class ECycleBehavior : uint8_t
{
	LinearRepeat                   = 0,
	LinearOnceOnly                 = 1,
	PingPong                       = 2,
	CycleBehavior_MAX              = 3
};


// Enum Indiana.ESwitchEventType
enum class ESwitchEventType : uint8_t
{
	Invalid                        = 0,
	Changed                        = 1,
	AnimateSwitch                  = 2,
	ESwitchEventType_MAX           = 3
};


// Enum Indiana.ESymbolType
enum class ESymbolType : uint8_t
{
	DamageType                     = 0,
	Buff                           = 1,
	Debuff                         = 2,
	MapCompass                     = 3,
	Count                          = 4,
	Invalid                        = 5,
	ESymbolType_MAX                = 6
};


// Enum Indiana.EDesiredBrushType
enum class EDesiredBrushType : uint8_t
{
	Normal                         = 0,
	Hovered                        = 1,
	Pressed                        = 2,
	Focused                        = 3,
	EDesiredBrushType_MAX          = 4
};


// Enum Indiana.ETargetRelationship
enum class ETargetRelationship : uint8_t
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	PacifistHostile                = 3,
	ETargetRelationship_MAX        = 4
};


// Enum Indiana.EScriptedTeamType
enum class EScriptedTeamType : uint8_t
{
	Script                         = 0,
	MindControl                    = 1,
	EScriptedTeamType_MAX          = 2
};


// Enum Indiana.ETimeDilationType
enum class ETimeDilationType : uint8_t
{
	Static                         = 0,
	Curve                          = 1,
	ETimeDilationType_MAX          = 2
};


// Enum Indiana.ETimeDilationPriority
enum class ETimeDilationPriority : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	ETimeDilationPriority_MAX      = 4
};


// Enum Indiana.ERagdollGetupState
enum class ERagdollGetupState : uint8_t
{
	Inactive                       = 0,
	AnimationDelayed               = 1,
	AnimationQueued                = 2,
	AnimationBegan                 = 3,
	AnimationActive                = 4,
	ERagdollGetupState_MAX         = 5
};


// Enum Indiana.ETrapResult
enum class ETrapResult : uint8_t
{
	Success                        = 0,
	Failed                         = 1,
	Failed_Skill                   = 2,
	Failed_Error                   = 3,
	Pending_Arming                 = 4,
	Pending_Disarming              = 5,
	ETrapResult_MAX                = 6
};


// Enum Indiana.ETrapDifficulty
enum class ETrapDifficulty : uint8_t
{
	Easy                           = 0,
	Medium                         = 1,
	Difficult                      = 2,
	Extreme                        = 3,
	ETrapDifficulty_MAX            = 4
};


// Enum Indiana.ETrapEventType
enum class ETrapEventType : uint8_t
{
	Invalid                        = 0,
	Armed                          = 1,
	Disarmed                       = 2,
	PreDetonate                    = 3,
	Detonate                       = 4,
	ETrapEventType_MAX             = 5
};


// Enum Indiana.EDiscoveryStatusFlags
enum class EDiscoveryStatusFlags : uint8_t
{
	Aware                          = 0,
	Visited                        = 1,
	Locked                         = 2,
	Hidden                         = 3,
	EDiscoveryStatusFlags_MAX      = 4
};


// Enum Indiana.ETutorialCategory
enum class ETutorialCategory : uint8_t
{
	Basics                         = 0,
	Exploration                    = 1,
	Loot                           = 2,
	WeaponsAndArmor                = 3,
	SkillsAndReputation            = 4,
	Combat                         = 5,
	Stealth                        = 6,
	Companions                     = 7,
	Supernova                      = 8,
	Count                          = 9,
	Invalid                        = 10,
	ETutorialCategory_MAX          = 11
};


// Enum Indiana.ETutorialEvent
enum class ETutorialEvent : uint8_t
{
	Invalid                        = 0,
	DisguiseActivated              = 1,
	DisguiseDurationEnded          = 2,
	DisguiseImperfectThresholdReached = 3,
	DisguiseInterrogationBegun     = 4,
	DisguiseInterrogationFailed    = 5,
	DisguiseInterrogationSuccess   = 6,
	DisguiseIntro                  = 7,
	DisguiseIntro01                = 8,
	DisguiseIntro02                = 9,
	DisguiseIntro03                = 10,
	FastTravelPointLearned         = 11,
	FlawOffered                    = 12,
	InterrogationBegun             = 13,
	InterrogationFailed            = 14,
	InterrogationSuccess           = 15,
	PlayerArmor                    = 16,
	PlayerArmorGamepad             = 17,
	PlayerBasicMovement            = 18,
	PlayerBlocking                 = 19,
	PlayerCombatAttack             = 20,
	PlayerCombatDialogAbilities    = 21,
	PlayerCompanionAbilities       = 22,
	PlayerCompanionBonuses         = 23,
	PlayerCompanionCommands        = 24,
	PlayerCompanionGain            = 25,
	PlayerCompanionGear            = 26,
	PlayerCompanionPerks           = 27,
	PlayerCompanionPerksAssigned   = 28,
	PlayerConsumables              = 29,
	PlayerConsumablesController    = 30,
	PlayerCover                    = 31,
	PlayerCriminalActivities       = 32,
	PlayerCrouch                   = 33,
	PlayerDamageTypes              = 34,
	PlayerDestructibles            = 35,
	PlayerDodging                  = 36,
	PlayerDodgeLeap                = 37,
	PlayerEncumbrance              = 38,
	PlayerEnemyAwareness           = 39,
	PlayerFalling                  = 40,
	PlayerFlaws                    = 41,
	PlayerFlawOffered              = 42,
	PlayerGrazes                   = 43,
	PlayerFastTravel               = 44,
	PlayerHealthMedkitMax          = 45,
	PlayerItemBroke                = 46,
	PlayerItemDegradation          = 47,
	PlayerItemGain                 = 48,
	PlayerItemPristine             = 49,
	PlayerItemRepair               = 50,
	PlayerJump                     = 51,
	PlayerLevelInstructions        = 52,
	PlayerLevelSkills              = 53,
	PlayerLevelUp                  = 54,
	PlayerLoot                     = 55,
	PlayerLootController           = 56,
	PlayerMedKit                   = 57,
	PlayerMeleePowerAttack         = 58,
	PlayerMeleeWithRanged          = 59,
	PlayerModIntro                 = 60,
	PlayerModUse                   = 61,
	PlayerNRayDamage               = 62,
	PlayerObjectiveMarkers         = 63,
	PlayerPerfectBlocks            = 64,
	PlayerPerks                    = 65,
	PlayerPerksUnlocked            = 66,
	PlayerLockpicks                = 67,
	PlayerQuestDependencies        = 68,
	PlayerQuestScreen              = 69,
	PlayerQuestSwitching           = 70,
	PlayerReinforcement            = 71,
	PlayerReinforcement2           = 72,
	PlayerReinforcement3           = 73,
	PlayerReinforcement4           = 74,
	PlayerReinforcement5           = 75,
	PlayerReinforcement6           = 76,
	PlayerReinforcement7           = 77,
	PlayerReinforcement8           = 78,
	PlayerReinforcement9           = 79,
	PlayerReinforcement10          = 80,
	PlayerReinforcement11          = 81,
	PlayerReinforcement12          = 82,
	PlayerReinforcement13          = 83,
	PlayerReinforcement14          = 84,
	PlayerReinforcement15          = 85,
	PlayerReputations              = 86,
	PlayerRespec                   = 87,
	PlayerResting                  = 88,
	PlayerScienceWeapons           = 89,
	PlayerSneak                    = 90,
	PlayerSneakAttack              = 91,
	PlayerSprint                   = 92,
	PlayerStarmap                  = 93,
	PlayerStealthAttack            = 94,
	PlayerSwitchingWeapons         = 95,
	PlayerTacticalTimeDilation     = 96,
	PlayerTTDLocationHits          = 97,
	PlayerTallGrass                = 98,
	PlayerVendingMachine           = 99,
	PlayerVendorScreen             = 100,
	PlayerWeakspots                = 101,
	PlayerWeapons                  = 102,
	PlayerWeaponsController        = 103,
	PlayerWorkbench                = 104,
	PlayerHunger                   = 105,
	PlayerSleepDeprivation         = 106,
	PlayerThirst                   = 107,
	PlayerSpecialEffects           = 108,
	PlayerDamageTypeCodex          = 109,
	PlayerReinforcement16          = 110,
	PlayerReinforcement17          = 111,
	PlayerReinforcement18          = 112,
	PlayerReinforcement19          = 113,
	PlayerReinforcement20          = 114,
	SpinUpWeapons                  = 115,
	ChargedBurstWeapons            = 116,
	LowGravity                     = 117,
	DiscrepancyAmplifierAcquired   = 118,
	DiscrepancyAmplifierEquipped   = 119,
	DiscrepancyAmplifierUnacquired = 120,
	PlayerItemImprovised           = 121,
	Count                          = 122,
	ETutorialEvent_MAX             = 123
};


// Enum Indiana.ETutorialDisplayType
enum class ETutorialDisplayType : uint8_t
{
	Invalid                        = 0,
	Simple                         = 1,
	CorporateLarge                 = 2,
	Count                          = 3,
	ETutorialDisplayType_MAX       = 4
};


// Enum Indiana.EInputGroup
enum class EInputGroup : uint8_t
{
	None                           = 0,
	LeftStick                      = 1,
	RightStick                     = 2,
	DPad                           = 3,
	EInputGroup_MAX                = 4
};


// Enum Indiana.ETransactionValidationResult
enum class ETransactionValidationResult : uint8_t
{
	Valid                          = 0,
	PlayerLacksCurrency            = 1,
	VendorLacksCurrency            = 2,
	NullPlayerInventory            = 3,
	VendorLacksInventory           = 4,
	VendorInventoryMismatch        = 5,
	PlayerInventoryMismatch        = 6,
	VendorDoesntBuy                = 7,
	CantBuyRestrictedStock         = 8,
	CantPawnNoDropItems            = 9,
	NoItems                        = 10,
	CantRepairHealthyItems         = 11,
	ETransactionValidationResult_MAX = 12
};


// Enum Indiana.EVendorPages
enum class EVendorPages : uint8_t
{
	Buy                            = 0,
	Sell                           = 1,
	Repair                         = 2,
	Count                          = 3,
	EVendorPages_MAX               = 4
};


// Enum Indiana.EHolsterState
enum class EHolsterState : uint8_t
{
	Holstered                      = 0,
	Holstering                     = 1,
	Unholstering                   = 2,
	Unholstered                    = 3,
	EHolsterState_MAX              = 4
};


// Enum Indiana.EModSlot
enum class EModSlot : uint8_t
{
	None                           = 0,
	Barrel                         = 1,
	UnderBarrel                    = 2,
	Magazine                       = 3,
	Sight                          = 4,
	MeleeGrip                      = 5,
	MeleeAttack                    = 6,
	SlotCount                      = 7,
	EModSlot_MAX                   = 8
};


// Enum Indiana.EAttackRestrictions
enum class EAttackRestrictions : uint8_t
{
	None                           = 0,
	PendingReload                  = 1,
	Sprinting                      = 2,
	Blocking                       = 3,
	AttackSuspended                = 4,
	InputSuppressed                = 5,
	Reloading                      = 6,
	NoAmmo                         = 7,
	QuickMeleeCooldown             = 8,
	FireCooldown                   = 9,
	EAttackRestrictions_MAX        = 10
};


// Enum Indiana.EWeaponState
enum class EWeaponState : uint8_t
{
	Invalid                        = 0,
	Equipped                       = 1,
	Reloading                      = 2,
	Firing                         = 3,
	Active                         = 4,
	Charging                       = 5,
	ChargeUp                       = 6,
	ChargeFull                     = 7,
	Scoped                         = 8,
	FineAiming                     = 9,
	BeamLocked                     = 10,
	FiringFineAiming               = 11,
	FiringScoped                   = 12,
	FiringNotAiming                = 13,
	CalledShot                     = 14,
	EWeaponState_MAX               = 15
};


// Enum Indiana.EWeaponEvent
enum class EWeaponEvent : uint8_t
{
	Invalid                        = 0,
	Equip                          = 1,
	Unequip                        = 2,
	Holster                        = 3,
	Unholster                      = 4,
	InstantEquip                   = 5,
	InstantUnequip                 = 6,
	Fire                           = 7,
	FireFineAim                    = 8,
	FireScoped                     = 9,
	DryFire                        = 10,
	DamageTicked                   = 11,
	CalledShot                     = 12,
	FireCalledShot                 = 13,
	FakeFireCalledShot             = 14,
	Reload                         = 15,
	ChargeMax                      = 16,
	MeleeWindUpLeft                = 17,
	MeleeWindUpRight               = 18,
	MeleeAttackRight               = 19,
	MeleeAttackLeft                = 20,
	PowerAttackWindUp              = 21,
	PowerAttackSwing               = 22,
	SweepAttackWindUp              = 23,
	SweepAttackSwing               = 24,
	CounterAttack                  = 25,
	Recoil                         = 26,
	WindUpNoStamina                = 27,
	NoStaminaAttack                = 28,
	MeleeImpact                    = 29,
	Block                          = 30,
	QuickMelee                     = 31,
	Stagger                        = 32,
	CustomFire                     = 33,
	SpecialAttack1                 = 34,
	SpecialAttack2                 = 35,
	SpecialAttack3                 = 36,
	SpecialAttack4                 = 37,
	FineAimStart                   = 38,
	FineAimLeave                   = 39,
	ScopeStart                     = 40,
	ScopeLeave                     = 41,
	ScopeEnter                     = 42,
	ScopeExit                      = 43,
	InstantHolster                 = 44,
	InstantUnholster               = 45,
	StealthMelee                   = 46,
	PerfectBlock                   = 47,
	EWeaponEvent_MAX               = 48
};


// Enum Indiana.EWorkbenchPages
enum class EWorkbenchPages : uint8_t
{
	Modification                   = 0,
	Upgrade                        = 1,
	Repair                         = 2,
	Breakdown                      = 3,
	Count                          = 4,
	EWorkbenchPages_MAX            = 5
};


// Enum Indiana.ETextDirectionType
enum class ETextDirectionType : uint8_t
{
	NoDirectionalBias              = 0,
	Up                             = 1,
	Down                           = 2,
	ETextDirectionType_MAX         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Indiana.AISelector_FValue
// 0x0008
struct FAISelector_FValue
{
	class UClass*                                      AIFValue;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.ActorPoolConfiguration
// 0x0018
struct FActorPoolConfiguration
{
	EActorPoolingMethod                                PoolingMethod;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxActorsToRetain;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSpawnMoreThanMaxActors;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReuseOldestActorsWhenExhausted;                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeferSpawnRequests;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Indiana.AkPlaySoundState
// 0x0018
struct FAkPlaySoundState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.AkPlaySoundStatePair
// 0x0020
struct FAkPlaySoundStatePair
{
	TWeakObjectPtr<class UAkPlaySoundEventEffect>      EventEffect;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAkPlaySoundState                           State;                                                    // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.PlayFxState
// 0x0008
struct FPlayFxState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.PlayFxPair
// 0x0010
struct FPlayFxPair
{
	TWeakObjectPtr<class UPlayFxEventEffect>           EventEffect;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPlayFxState                                State;                                                    // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.EventEffectState
// 0x0020
struct FEventEffectState
{
	TArray<struct FAkPlaySoundStatePair>               PlayAkSoundStateMap;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPlayFxPair>                         PlayFxStateMap;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.LocString
// 0x0008
struct FLocString
{
	int                                                StringID;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStringTableType                                   TableType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct Indiana.CauseDamageInfo
// 0x0110
struct FCauseDamageInfo
{
	TWeakObjectPtr<class AController>                  InstigatorController;                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       SourceActor;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDamageEventType                                   DamageEventType;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DesiredDamage;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ActualDamage;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         ImpactLocation;                                           // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FVector_NetQuantize                         ImpactDirection;                                          // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       HitBone;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            HitPhysMaterial;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                BodyPartHit;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                WeaponCategory;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x108];                                     // 0x0008(0x0108) MISSED OFFSET
};

// ScriptStruct Indiana.AimAssistConfig
// 0x0190
struct FAimAssistConfig
{
	float                                              TargetLockHorizontalRate;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetLockStrength;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetLockNoTouchDuration;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetLockNoTouchFadeTime;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackQuickTargetInputThreshold;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackQuickTargetIdleTime;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackQuickTargetDuration;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackQuickTargetMinVelocity;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackQuickTargetHorizontalRate;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrackQuickTargetVerticalRate;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          FrictionInputCurve;                                       // 0x0000(0x0078) (Edit)
	struct FRuntimeFloatCurve                          FrictionStrengthTowardsTargetCurve;                       // 0x0000(0x0078) (Edit)
	struct FRuntimeFloatCurve                          FrictionStrengthAwayFromTargetCurve;                      // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x118];                                     // 0x0078(0x0118) MISSED OFFSET
};

// ScriptStruct Indiana.ExtremaOverlap
// 0x0020
struct FExtremaOverlap
{
	TWeakObjectPtr<class AIndianaCharacter>            Overlapper;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.DefensiveActionElement
// 0x0004
struct FDefensiveActionElement
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.ReactiveToMeleeElement
// 0x005C (0x0060 - 0x0004)
struct FReactiveToMeleeElement : public FDefensiveActionElement
{
	float                                              PerMeleeHitModifier;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxProbability;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<EMeleeAction, float>                          MeleeActionProbabilityOverrides;                          // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ReactiveToRangeElement
// 0x0014
struct FReactiveToRangeElement
{
	float                                              MinSustainFireDuration;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSustainFireDuration;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SustainFirePauseDuration;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgeProbability;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockProbability;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_RecoveryBackupBehavior
// 0x0020
struct FAISettings_RecoveryBackupBehavior
{
	EMeleeRecoveryType                                 RecoveryType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BackupChance;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBackupDistance;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBackupDistance;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDodgeDirection                                    DodgeDirection;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDodgeRequiresClearPath;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValidTargetDistance;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLookAtTarget;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_MeleeActionBase
// 0x003C
struct FAISettings_MeleeActionBase
{
	float                                              RecoveryDelay;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAdaptiveRootMotion;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdaptiveRootMotionStopDistance;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBackupBehavior;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_RecoveryBackupBehavior          BackupBehavior;                                           // 0x0000(0x0020) (Edit)
	float                                              AttackingRotationThreshold;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreferredAttackDistance;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0004(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_MeleeAction
// 0x001C (0x0058 - 0x003C)
struct FAISettings_MeleeAction : public FAISettings_MeleeActionBase
{
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMeleeActionUseCase                                UseCase;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UseRange;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideNumMeleeSlotsRequired;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumMeleeSlotsRequired;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCollisionDuringApproach;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBumpDuringApproach;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSprintDuringApproach;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0001(0x0057) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_MeleePatternEntry
// 0x0048
struct FAISettings_MeleePatternEntry
{
	class UMeleeSlotRequestData*                       MeleeAction;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_MeleeActionBase                 Settings;                                                 // 0x0000(0x003C) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_MeleePattern
// 0x0020
struct FAISettings_MeleePattern
{
	float                                              MaxValidTargetDistance;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAISettings_MeleePatternEntry>       AttackPattern;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_Melee
// 0x00E0
struct FAISettings_Melee
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MinDelayBetweenActions;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LostTargetTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LostTargetRangeScalar;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeWaitDistance;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_RecoveryBackupBehavior          MainBackupBehavior;                                       // 0x0000(0x0020) (Edit)
	TMap<class UMeleeSlotRequestData*, struct FAISettings_MeleeAction> MeleeActions;                                             // 0x0000(0x0050) (Edit, ZeroConstructor)
	bool                                               bUseAttackPattern;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class UMeleeSlotPatternRequestData*, struct FAISettings_MeleePattern> AttackPatterns;                                           // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0050(0x0090) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_FiringPattern
// 0x0018
struct FAISettings_FiringPattern
{
	float                                              StartPauseTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BurstRounds;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurstTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BurstCount;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurstPauseTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndPauseTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_StationaryFire
// 0x001C
struct FAISettings_StationaryFire
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FAISettings_FiringPattern                   FiringPattern;                                            // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_CoverFire
// 0x002C
struct FAISettings_CoverFire
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EUsableCoverTypes                                  CoverTypes;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCoverUses;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_FiringPattern                   FiringPattern;                                            // 0x0000(0x0018) (Edit)
	int                                                CoverUseCount;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoverTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoverTimeFuzz;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0004(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_MovingFire
// 0x002C
struct FAISettings_MovingFire
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PrePauseTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_FiringPattern                   FiringPattern;                                            // 0x0000(0x0018) (Edit)
	bool                                               bCanFireWhileRunning;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFireWhileMovingToPreferredRange;                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovingToPreferredRangeNoFireTime;                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovingToPreferredRangeFireTime;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0004(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_SuppressingFire
// 0x0001
struct FAISettings_SuppressingFire
{
	ESuppressingFireDuration                           Duration;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISettings_LostTarget
// 0x000C
struct FAISettings_LostTarget
{
	ELostTargetWaitTime                                WaitTime;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReenterCoverCount;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ELostTargetSearchMode                              SearchMode;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_RangedBehavior_Set
// 0x0010
struct FAISettings_RangedBehavior_Set
{
	float                                              CoverWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_RangedBehavior_TooFar_Set
// 0x0008 (0x0018 - 0x0010)
struct FAISettings_RangedBehavior_TooFar_Set : public FAISettings_RangedBehavior_Set
{
	float                                              PreferredRangeWeight;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_RangePositioning_Set
// 0x0010
struct FAISettings_RangePositioning_Set
{
	float                                              StationaryWeight;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BackwardWeight;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForwardWeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrafeWeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_RangedPositioning
// 0x0030
struct FAISettings_RangedPositioning
{
	struct FAISettings_RangePositioning_Set            TooNear;                                                  // 0x0000(0x0010) (Edit)
	struct FAISettings_RangePositioning_Set            PreferredRange;                                           // 0x0000(0x0010) (Edit)
	struct FAISettings_RangePositioning_Set            TooFar;                                                   // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_RangedBehavior
// 0x0080
struct FAISettings_RangedBehavior
{
	EOnEnterCombatBehavior                             OnEnterCombatBehavior;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitedRange;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShootAtFeet;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bArcingWeapon;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinMoveDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_RangedBehavior_Set              Near;                                                     // 0x0000(0x0010) (Edit)
	struct FAISettings_RangedBehavior_Set              PreferedRange;                                            // 0x0000(0x0010) (Edit)
	struct FAISettings_RangedBehavior_TooFar_Set       ToFar;                                                    // 0x0000(0x0018) (Edit)
	bool                                               bOverrideRangeReposition;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettings_RangedPositioning               OverrideRangeRepositionData;                              // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_Block
// 0x0014
struct FAISettings_Block
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBlockTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockAttemptTimeWindow;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_Dodge
// 0x0008
struct FAISettings_Dodge
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.AISettings_Positioning
// 0x000C
struct FAISettings_Positioning
{
	float                                              PreferredMinRange;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreferredMaxRange;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AbsoluteRangeBuffer;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.AISettingsWander
// 0x0014
struct FAISettingsWander
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinMoveDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinIdleTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxIdleTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.BehaviorSettings_Set
// 0x0010
struct FBehaviorSettings_Set
{
	class UAISettings_Behavior*                        DefaultBehavior;                                          // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
	class UInterestDataPackage*                        InterestData;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.GlobalVariable
// 0x0010
struct FGlobalVariable
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.GlobalVariableConditional
// 0x0030
struct FGlobalVariableConditional
{
	struct FGlobalVariable                             GlobalVariable;                                           // 0x0000(0x0010) (Edit)
	EGlobalVariableComparison                          Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGlobalVariable                             OtherGlobalVariable;                                      // 0x0000(0x0010) (Edit)
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct Indiana.QuestReference
// 0x0010
struct FQuestReference
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.QuestStateConditional
// 0x0014
struct FQuestStateConditional
{
	struct FQuestReference                             QuestReference;                                           // 0x0000(0x0010) (Edit)
	EEqualityComparison                                Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EQuestState                                        ComparisonState;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
};

// ScriptStruct Indiana.CompanionStateConditional
// 0x0004
struct FCompanionStateConditional
{
	ESpecialObsidianID                                 CompanionToCheck;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EEqualityComparison                                Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECompanionState                                    ComparisonState;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Indiana.PCGenderConditional
// 0x0003
struct FPCGenderConditional
{
	EEqualityComparison                                Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGender                                            ComparisonGender;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0001(0x0002) MISSED OFFSET
};

// ScriptStruct Indiana.DLCInstalledConditional
// 0x0002
struct FDLCInstalledConditional
{
	EDLCType                                           DLCToCheck;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDefault;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
};

// ScriptStruct Indiana.LogicalStatement
// 0x0058
struct FLogicalStatement
{
	ELogicalOperator                                   Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EConditionalType                                   ConditionalType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGlobalVariableConditional                  Condition;                                                // 0x0000(0x0030) (Edit)
	struct FQuestStateConditional                      QuestStateCondition;                                      // 0x0000(0x0014) (Edit)
	struct FCompanionStateConditional                  CompanionStateCondition;                                  // 0x0000(0x0004) (Edit)
	struct FPCGenderConditional                        PCGenderCondition;                                        // 0x0000(0x0003) (Edit)
	struct FDLCInstalledConditional                    DLCInstalledCondition;                                    // 0x0000(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x56];                                      // 0x0002(0x0056) MISSED OFFSET
};

// ScriptStruct Indiana.LogicalExpression
// 0x0068
struct FLogicalExpression
{
	EConditionalType                                   ConditionalType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGlobalVariableConditional                  BaseCondition;                                            // 0x0000(0x0030) (Edit)
	struct FQuestStateConditional                      BaseQuestStateCondition;                                  // 0x0000(0x0014) (Edit)
	struct FCompanionStateConditional                  BaseCompanionStateCondition;                              // 0x0000(0x0004) (Edit)
	struct FPCGenderConditional                        BasePCGenderCondition;                                    // 0x0000(0x0003) (Edit)
	struct FDLCInstalledConditional                    BaseDLCInstalledCondition;                                // 0x0000(0x0002) (Edit)
	TArray<struct FLogicalStatement>                   AdditionalConditions;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct Indiana.ScriptedBehavior_Set
// 0x0068 (0x0078 - 0x0010)
struct FScriptedBehavior_Set : public FBehaviorSettings_Set
{
	struct FLogicalExpression                          GlobalVariableExpression;                                 // 0x0000(0x0068) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.BehaviorPackage
// 0x0098
struct FBehaviorPackage
{
	struct FBehaviorSettings_Set                       DefaultBehaviorData;                                      // 0x0000(0x0010) (Edit)
	TMap<EPhaseOfDay, struct FBehaviorSettings_Set>    TimeOfDayData;                                            // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<struct FScriptedBehavior_Set>               ScriptedBehaviors;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              InterestRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x0004(0x0094) MISSED OFFSET
};

// ScriptStruct Indiana.BehaviorPhases
// 0x0030
struct FBehaviorPhases
{
	TArray<class UEventListener*>                      PhaseListeners;                                           // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.SaveGameDataBehaviorStack
// 0x0010
struct FSaveGameDataBehaviorStack
{
	TArray<class UBehaviorStateInfo*>                  SavedStateInfos;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Indiana.SaveGameDataDetection
// 0x0030
struct FSaveGameDataDetection
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.SaveGameDataTargetInfo
// 0x0014
struct FSaveGameDataTargetInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.SaveGameDataDecisionTree
// 0x0008
struct FSaveGameDataDecisionTree
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SaveGameDataInterest
// 0x0050
struct FSaveGameDataInterest
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.SaveGameDataAIController
// 0x00C0
struct FSaveGameDataAIController
{
	struct FSaveGameDataBehaviorStack                  BehaviorStackData;                                        // 0x0000(0x0010)
	struct FSaveGameDataDetection                      DetectionData;                                            // 0x0000(0x0030)
	struct FSaveGameDataTargetInfo                     TargetInfoData;                                           // 0x0000(0x0014)
	struct FSaveGameDataDecisionTree                   DecisionTreeData;                                         // 0x0000(0x0008)
	struct FSaveGameDataInterest                       InterestData;                                             // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0050(0x0070) MISSED OFFSET
};

// ScriptStruct Indiana.ExaminableStringSet
// 0x0020
struct FExaminableStringSet
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit)
	struct FLocString                                  OverrideLabel;                                            // 0x0000(0x0008) (Edit)
	struct FName                                       RemoteEventOnExaminationEnd;                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.ItemTutorialSet
// 0x0006
struct FItemTutorialSet
{
	ETutorialEvent                                     OnItemAddedTutorial;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     OnItemEquippedTutorial;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     OnItemLostTutorial;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     OnItemBreakDownTutorial;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     OnItemDroppedTutorial;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     OnItemSoldTutorial;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0001(0x0005) MISSED OFFSET
};

// ScriptStruct Indiana.GameDateTime
// 0x0008
struct FGameDateTime
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.DamageMultipliers
// 0x0010
struct FDamageMultipliers
{
	float                                              BaseDamageMultiplier;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageThresholdMultiplier;                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageResistanceMultiplier;                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PostArmorDamageMultiplier;                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.BoneMod
// 0x0040
struct FBoneMod
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               ApplyTranslation;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyRotation;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyScale;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0001(0x003F) MISSED OFFSET
};

// ScriptStruct Indiana.PropEntry
// 0x0068
struct FPropEntry
{
	struct FGameplayTag                                PropTag;                                                  // 0x0000(0x0008)
	class USkeletalMesh*                               SkeletalMeshToSpawn;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMeshToSpawn;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketToAttachTo;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SocketRotation;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystemToSpawn;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleSocketToAttachTo;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticleSocketOffset;                                     // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ParticleSocketRotation;                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	EDespawnRules                                      DespawnRule;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkeletalMeshUsesParentPose;                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0001(0x0067) MISSED OFFSET
};

// ScriptStruct Indiana.TransformedShape
// 0x0040
struct FTransformedShape
{
	class UShape*                                      Shape;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ShapeTransform;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AppearanceCustomizations
// 0x0058
struct FAppearanceCustomizations
{
	float                                              Age;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UEyeColor*                                   EyeColor;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHairAppearances*                            Hair;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHairColor*                                  HairColor;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBrows*                                      Brows;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBeardAppearances*                           Beard;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBeardColor*                                 BeardColor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkinTone*                                   SkinTone;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UScar*                                       Scar;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDirt*                                       Dirt;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMakeup*                                     Makeup;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.AppearanceMatch
// 0x0040
struct FAppearanceMatch
{
	struct FGameplayTagContainer                       Genders;                                                  // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       Views;                                                    // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.MainAppearances
// 0x0028
struct FMainAppearances
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.AppliedAppearanceMod
// 0x0058
struct FAppliedAppearanceMod
{
	class UModAppearances*                             ModAppearances;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UModVisual*                                  SourceMod;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UModVisual*                                  Mod;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               ComponentTags;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               RequiredTags;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0010(0x0048) MISSED OFFSET
};

// ScriptStruct Indiana.HeadAppearanceMods
// 0x0040 (0x0098 - 0x0058)
struct FHeadAppearanceMods : public FAppliedAppearanceMod
{
	EHeadStyle                                         HeadStyle;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       HairMorphTarget;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHelmetVisible;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UPosedSkeletalMeshModVisual*                 HairMeshMod;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPosedSkeletalMeshModVisual*                 BeardMeshMod;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialParamModVisual*                     MaterialParamMods;                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct Indiana.AppearanceInstance
// 0x02D8
struct FAppearanceInstance
{
	struct FName                                       TargetMeshName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FAppearanceMatch                            AppearanceMatch;                                          // 0x0000(0x0040) (Edit, EditConst)
	bool                                               bUseHeadAsBaseSkeleton;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UPosedSkeletalMeshModVisual*                 SecondaryAppearanceMesh;                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialParamModVisual*                     AppearanceModVisual;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMainAppearances                            CurrentAppearances;                                       // 0x0000(0x0028)
	struct FMainAppearances                            PendingAppearances;                                       // 0x0000(0x0028)
	struct FHeadAppearanceMods                         CurrentHeadAppearanceMods;                                // 0x0000(0x0098)
	struct FHeadAppearanceMods                         PendingHeadAppearanceMods;                                // 0x0000(0x0098)
	TMap<class UClass*, struct FAppliedAppearanceMod>  CurrentMods;                                              // 0x0000(0x0050) (ZeroConstructor)
	TMap<class UClass*, struct FAppliedAppearanceMod>  PendingMods;                                              // 0x0000(0x0050) (ZeroConstructor)
	TArray<struct FName>                               CurrentBaseMeshComponentTags;                             // 0x0000(0x0010) (ZeroConstructor)
	class UFootstepData*                               CurrentFootstepData;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2D7];                                     // 0x0001(0x02D7) MISSED OFFSET
};

// ScriptStruct Indiana.MaterialParamDescription
// 0x0010
struct FMaterialParamDescription
{
	struct FName                                       MaterialSlot;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialParam;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.FadeSettings
// 0x0038
struct FFadeSettings
{
	struct FVector                                     RevealEmissiveColor;                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeadingEdgeBlend;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLevel;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeadingEdgeAmount;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RevealEdgeTightness;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBaseValue;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RevealRMEA;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RevealNormal;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RevealBaseColor;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.BodyPart
// 0x0060
struct FBodyPart
{
	struct FName                                       PhATBodySetupBoneName;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRepresentsMultipleBodyParts;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                BodyPartTag;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       TransformSocketName;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalBodyPartsOffset;                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        DirectionalBodyParts;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCanBeSevered;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SeverBoneNameOverride;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachedSocket;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DetachedSocket;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBulletMagnetism;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0001(0x005F) MISSED OFFSET
};

// ScriptStruct Indiana.AptitudeTextures
// 0x0078
struct FAptitudeTextures
{
	TSoftObjectPtr<class UTexture>                     Uninteractable;                                           // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     Highlighted;                                              // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     Icon;                                                     // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorData
// 0x0048
struct FArmorData
{
	int                                                PhysicalDT;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PhysicalDR;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ThermalDT;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ThermalDR;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EnergyDT;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EnergyDR;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShockDT;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShockDR;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CorrosionDT;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CorrosionDR;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NRayDT;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NRayDR;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColdDT;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColdDR;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageThreshold;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageResistance;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ArmorType;                                                // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorPiece
// 0x0068
struct FArmorPiece
{
	struct FGameplayTagContainer                       BodyParts;                                                // 0x0000(0x0020) (Edit)
	struct FArmorData                                  ArmorData;                                                // 0x0000(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorModifier
// 0x0040
struct FArmorModifier
{
	struct FGameplayTagContainer                       EffectedBodyParts;                                        // 0x0000(0x0020) (Edit)
	TArray<class UClass*>                              DamageTypes;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                DamageThreshold;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageThresholdPercent;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageResistance;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageResistancePercent;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorPieceEntry
// 0x0070
struct FArmorPieceEntry
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorModifierEntry
// 0x0050
struct FArmorModifierEntry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.StatModifierDescriptionBase
// 0x0010
struct FStatModifierDescriptionBase
{
	class URpgStat*                                    RpgStat;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ERpgStatGroup                                      Group;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EStatModifierType                                  ModifierType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.StatModifierDescription
// 0x0008 (0x0018 - 0x0010)
struct FStatModifierDescription : public FStatModifierDescriptionBase
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreScalingBonus;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Indiana.NewArmorModVisual
// 0x0020
struct FNewArmorModVisual
{
	class UModAppearances*                             ModAppearances;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAppliesToAllArmorSets;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TSoftObjectPtr<class UClass>>               ArmorSets;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorVisualProperties
// 0x0058
struct FArmorVisualProperties
{
	bool                                               bModdableByArmorSet;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModdableByHelmet;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModdableByModsDefault;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<EArmorModSlot, bool>                          ModdablePerMod;                                           // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.NewArmorSetModVisual
// 0x0018
struct FNewArmorSetModVisual
{
	class UModAppearances*                             ModAppearances;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TSoftObjectPtr<class UClass>>               ArmorMods;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorSetModSlot
// 0x0018
struct FArmorSetModSlot
{
	EArmorModSlot                                      ModSlot;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bModdable;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentModClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UArmorModItem*                               EquippedMod;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.StatModifierInstance
// 0x0028
struct FStatModifierInstance
{
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FStatModifierDescription                    StatModifier;                                             // 0x0000(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.StatInstance
// 0x0038
struct FStatInstance
{
	float                                              InherentValue;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InherentMultiplier;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FStatModifierInstance>               Modifiers;                                                // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.RpgStatCollection
// 0x0068
struct FRpgStatCollection
{
	TMap<class URpgStat*, struct FStatInstance>        StatMap;                                                  // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.AssetInfo
// 0x0030
struct FAssetInfo
{
	class UObject*                                     Asset;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.AudioLogDefinition
// 0x0010
struct FAudioLogDefinition
{
	class UConversationData*                           ConversationData;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartNode;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.BeaconProperties
// 0x0020
struct FBeaconProperties
{
	struct FLocString                                  DisplayText;                                              // 0x0000(0x0008) (Edit)
	EBeaconType                                        BeaconType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BeaconTagWidgetClass;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAreaBeacon;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AreaBeaconRadius;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct Indiana.BeaconData
// 0x0048
struct FBeaconData
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       CurrentFloor;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	ESpecialBeaconType                                 SpecialType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UShipDestinationData*                        ShipDestinationData;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FBeaconProperties                           BeaconProperties;                                         // 0x0000(0x0020) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.MapBeaconCache
// 0x00A0
struct FMapBeaconCache
{
	TMap<struct FGuid, struct FBeaconData>             BeaconData;                                               // 0x0000(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.DeathClassOverride
// 0x0010
struct FDeathClassOverride
{
	class UClass*                                      DeathClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                CreatureType;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.DamageDescription
// 0x0078
struct FDamageDescription
{
	EDamageEventType                                   DamageEventType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SecondaryDamageType;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              GuaranteedStatusEffects;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EMeleeAttackType                                   MeleeAttackType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitReactType                                      HitReactionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRange;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseCritChance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StealthMultiplier;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrazeChanceModifier;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrazeMultiplier;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageResistanceMultiplier;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageThresholdMultiplier;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostArmorDamageMultiplier;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseOverride;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDeathClassOverride>                 DeathClassOverrides;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0010(0x0068) MISSED OFFSET
};

// ScriptStruct Indiana.DamageLevelScaler
// 0x0080
struct FDamageLevelScaler
{
	bool                                               bScaleBaseDamage;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          BaseDamageCurve;                                          // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponInputBuffer
// 0x000C
struct FWeaponInputBuffer
{
	float                                              WindowTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InputTimeStamp;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.DepthOfFieldSettings
// 0x0014
struct FDepthOfFieldSettings
{
	bool                                               bUseSettings;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FocalDistance;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NearTransition;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NearBlur;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FarBlur;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.CustomShotAngles
// 0x0008
struct FCustomShotAngles
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.BeardAppearance
// 0x0050 (0x0090 - 0x0040)
struct FBeardAppearance : public FAppearanceMatch
{
	TSoftObjectPtr<class USkeletalMesh>                Mesh;                                                     // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     BeardTexture;                                             // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET
};

// ScriptStruct Indiana.AIStateHistory
// 0x0010
struct FAIStateHistory
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.BreakBoneInfo
// 0x0060
struct FBreakBoneInfo
{
	struct FName                                       Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Source;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneBreakName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBroke;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0001(0x005F) MISSED OFFSET
};

// ScriptStruct Indiana.AnimEventGameplayTagData
// 0x0010
struct FAnimEventGameplayTagData
{
	struct FGameplayTag                                GameplayTag;                                              // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UBasePlayAnimEventEffect*                    AnimEventEffect;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.AnimEventGameplayTagContainer
// 0x0010
struct FAnimEventGameplayTagContainer
{
	TArray<struct FAnimEventGameplayTagData>           AnimationData;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Indiana.BodyRotationProperties
// 0x0008
struct FBodyRotationProperties
{
	float                                              RotationInitiateThreshold;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationCompleteTolerance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.RandomPlayerSequenceEntryNamed
// 0x0060
struct FRandomPlayerSequenceEntryNamed
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0000(0x0038) (Edit, BlueprintVisible)
	bool                                               bMustPlayFromBeginning;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreForInitialAnimation;                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreIfHelmetIsVisible;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreIfWithinTalkRange;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreIfOutsideOfTalkRange;                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0001(0x005F) MISSED OFFSET
};

// ScriptStruct Indiana.LocomotionNode
// 0x0018
struct FLocomotionNode
{
	class UAnimSequence*                               Node0Sequence;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Node1Sequence;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnterNode0;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnterNode1;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Indiana.BipedWeaponAnims
// 0x0158
struct FBipedWeaponAnims
{
	class UAimOffsetBlendSpace*                        CombatAimBlendSpace;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               HobbledWalkForward;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatWalkForward;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatRunForward;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               ForwardBlendSpace;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               RunForwardBlendSpace;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatWalkBackward;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatRunBackward;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               BackwardBlendSpace;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               RunBackwardBlendSpace;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatWalkLeft;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatRunLeft;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               LeftBlendSpace;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               RunLeftBlendSpace;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatWalkRight;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatRunRight;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               RightBlendSpace;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpace1D*                               RunRightBlendSpace;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatCrouchStartSequence;                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatCrouchIdleSequence;                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CombatCrouchEndSequence;                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               ReadyFireArmPose;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               IdleFireArmPose;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               WeaponDownWalkArm;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               WeaponDownRunArm;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               BlockStartSequence;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               BlockIdleSequence;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               JumpSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LowGravJumpSequence;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LowGravFallSequence;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LowGravLandSequence;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SearchingStartSequence;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x150];                                     // 0x0008(0x0150) MISSED OFFSET
};

// ScriptStruct Indiana.BipedPersonalityAnims
// 0x00B8
struct FBipedPersonalityAnims
{
	class UAimOffsetBlendSpace*                        NonCombatAimBlendSpace;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               WalkForward;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               WalkBackward;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               RunForward;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               RunBackward;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               LowGravRunForward;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               LowGravRunBackward;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               HandPose;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               WalkArmPose;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               RunArmPose;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               JumpIntro;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               JumpLoop;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               JumpLand;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               LowGravJumpIntro;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               LowGravJumpLoop;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               LowGravJumpLand;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CrouchIdleStart;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CrouchIdle;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CrouchIdleEnd;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CrouchWalkStart;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CrouchWalk;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CrouchWalkEnd;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               HeadAdditiveLayer;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0008(0x00B0) MISSED OFFSET
};

// ScriptStruct Indiana.LoopRandomSequence
// 0x0028
struct FLoopRandomSequence
{
	TArray<struct FRandomPlayerSequenceEntryNamed>     LoopSequences;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               StartSequence;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StopSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreBarkWhileInBLEBranch;                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Indiana.DiscoveredAnims
// 0x0090
struct FDiscoveredAnims
{
	TMap<struct FName, struct FLoopRandomSequence>     TalkingSequences;                                         // 0x0000(0x0050) (ZeroConstructor)
	TArray<struct FRandomPlayerSequenceEntryNamed>     BaseIdle;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FRandomPlayerSequenceEntryNamed>     DialogIdles;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLoopRandomSequence>                 IdleStates;                                               // 0x0000(0x0010) (ZeroConstructor)
	class UAnimSequence*                               StartSequence;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WalkForwardSequence;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct Indiana.TalkingIdleEntry
// 0x0090
struct FTalkingIdleEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               StartSequence;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FLoopRandomSequence>     TalkingSequences;                                         // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<struct FRandomPlayerSequenceEntryNamed>     Idle;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRandomPlayerSequenceEntryNamed>     DialogIdle;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FLoopRandomSequence>                 IdleStates;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0010(0x0080) MISSED OFFSET
};

// ScriptStruct Indiana.BlockProperties
// 0x0004
struct FBlockProperties
{
	float                                              AttackDamageMultiplier;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AppearanceGoreCap
// 0x0098
struct FAppearanceGoreCap
{
	struct FGameplayTagContainer                       BodyParts;                                                // 0x0000(0x0020) (Edit)
	TSoftObjectPtr<class UStaticMesh>                  UpperCap;                                                 // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UStaticMesh>                  LowerCap;                                                 // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class USkeletalMesh>                SkinnedCap;                                               // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
};

// ScriptStruct Indiana.BodyAppearance
// 0x00B0 (0x00F0 - 0x0040)
struct FBodyAppearance : public FAppearanceMatch
{
	TSoftObjectPtr<class USkeletalMesh>                BodyMesh;                                                 // 0x0000(0x0028) (Edit)
	TMap<struct FName, TSoftObjectPtr<class UMaterialInterface>> MaterialOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<struct FAppearanceGoreCap>                  GoreCaps;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TSoftObjectPtr<class UFootstepData>                Footsteps;                                                // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET
};

// ScriptStruct Indiana.SpellEffectApplyChance
// 0x0070
struct FSpellEffectApplyChance
{
	struct FGameplayTagContainer                       BodyParts;                                                // 0x0000(0x0020) (Edit)
	TMap<class UClass*, float>                         SpellApplyChances;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.CompositeConditionalElement
// 0x0010
struct FCompositeConditionalElement
{
	class UBTDecorator_IndianaConditional*             Conditional;                                              // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ELogicalOperator                                   LogicalOperator;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.AISelector_Location
// 0x0008
struct FAISelector_Location
{
	class UClass*                                      AILocation;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_Actor
// 0x0008
struct FAISelector_Actor
{
	class UClass*                                      AIActor;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_Bool
// 0x0008
struct FAISelector_Bool
{
	class UClass*                                      AIBool;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_Int
// 0x0008
struct FAISelector_Int
{
	class UClass*                                      AIInt;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_UObject
// 0x0008
struct FAISelector_UObject
{
	class UClass*                                      Object;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_FiringPattern
// 0x0008
struct FAISelector_FiringPattern
{
	class UClass*                                      AIFiringPattern;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_BoolWriteable
// 0x0008
struct FAISelector_BoolWriteable
{
	class UClass*                                      AIBool;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_ActorWritable
// 0x0008
struct FAISelector_ActorWritable
{
	class UClass*                                      AIActor;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_LocationWritable
// 0x0008
struct FAISelector_LocationWritable
{
	class UClass*                                      AILocation;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AISelector_Action
// 0x0008
struct FAISelector_Action
{
	class UClass*                                      AIAction;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.SlateBrushContainer
// 0x0090
struct FSlateBrushContainer
{
	class USlateBrushAsset*                            BrushAsset;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0000(0x0088) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SizeConstraint
// 0x0014
struct FSizeConstraint
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBrushAsMinSize;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSnap;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Snap;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0008(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaTextBlockStyle
// 0x0010 (0x0200 - 0x01F0)
struct FIndianaTextBlockStyle : public FTextBlockStyle
{
	class USlateWidgetStyleAsset*                      ImportAsset;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EIndianaUIColorType                                ColorOverride;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1FF];                                     // 0x0001(0x01FF) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaButtonStyle
// 0x0798 (0x07A0 - 0x0008)
struct FIndianaButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrushContainer                        NormalBrush;                                              // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        HoveredBrush;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        PressedBrush;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        FocusedBrush;                                             // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        SelectedNormalBrush;                                      // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        SelectedHoveredBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        SelectedPressedBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        SelectedFocusedBrush;                                     // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        DisabledBrush;                                            // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                ContentColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ButtonColor;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     NormalPadding;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     PressedPadding;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSizeConstraint                             SizeConstraints;                                          // 0x0000(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndianaTextBlockStyle                      TextBlockStyle;                                           // 0x0000(0x0200) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                               PressedSoundOverride;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               HoveredSoundOverride;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FocusedSoundOverride;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SelectedPressedSoundOverride;                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SelectedHoveredSoundOverride;                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SelectedFocusedSoundOverride;                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x798];                                     // 0x0008(0x0798) MISSED OFFSET
};

// ScriptStruct Indiana.TimeDilationData
// 0x0098
struct FTimeDilationData
{
	ETimeDilationPriority                              Priority;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETimeDilationType                                  Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeIn;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeOut;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeDilationStatic;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          TimeDilationCurve;                                        // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.UIAppearanceData
// 0x0018
struct FUIAppearanceData
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLocString                                  CustomizationName;                                        // 0x0000(0x0008) (Edit)
	float                                              StepSize;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.BoneModificationUIWrapper
// 0x0010
struct FBoneModificationUIWrapper
{
	class UBoneModifications*                          Modification;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiredInverseValue;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.SkillCategoryDetail
// 0x0040
struct FSkillCategoryDetail
{
	ESkillCategory                                     Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0000(0x0028) (Edit)
	TArray<ESkill>                                     AssociatedSkills;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.DeathClassRow
// 0x0020
struct FDeathClassRow
{
	class UClass*                                      DeathClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDeathBodyTypeParticleSystems*               ParticleSystemData;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDeathBodyTypeAudioEvents*                   AudioEventData;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExagerateVerticalImpulse;                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExageratedStrength;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct Indiana.CharacterDeathDamageInfo
// 0x0070
struct FCharacterDeathDamageInfo
{
	class UClass*                                      DmgType;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                WeaponCategory;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bCalledShot;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCritical;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseOverride;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                BodyPartHit;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       BoneHit;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactDirection;                                          // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BreakBoneHit;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BreakAttachedSocket;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BreakDetachedSocket;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGibbing;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllBonesBroken;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakBoneRemoved;                                        // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FDeathClassOverride>                 DeathClassOverrides;                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.CharacterDeathDataRow
// 0x0030
struct FCharacterDeathDataRow
{
	class UClass*                                      DmgType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                WeaponCategory;                                           // 0x0000(0x0008) (Edit)
	ECharacterDeathTriBool                             CalledShot;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterDeathTriBool                             CriticalHit;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCharacterDeathImpulse*                      Impulse;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EffectChance;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DeathClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.GameDataReferenceID
// 0x0018
struct FGameDataReferenceID
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SpeakerGameDataReferenceID
// 0x0000 (0x0018 - 0x0018)
struct FSpeakerGameDataReferenceID : public FGameDataReferenceID
{

};

// ScriptStruct Indiana.ScannerAbility
// 0x0010
struct FScannerAbility
{
	class FString                                      AbilityName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.RangedStatModifierDescription
// 0x0090 (0x00A0 - 0x0010)
struct FRangedStatModifierDescription : public FStatModifierDescriptionBase
{
	bool                                               bUseCurve;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeCurveValue;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          RangedCurve;                                              // 0x0000(0x0078) (Edit)
	float                                              MinRpgStatValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRpgStatValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresDLC;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresMinSkill;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinSkill;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0004(0x009C) MISSED OFFSET
};

// ScriptStruct Indiana.PerkSubclassArray
// 0x0010
struct FPerkSubclassArray
{
	TArray<class UClass*>                              Perks;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Indiana.BaseItemDefinition
// 0x0010
struct FBaseItemDefinition
{
	bool                                               bPristine;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.DegradableItemDefinition
// 0x0008 (0x0018 - 0x0010)
struct FDegradableItemDefinition : public FBaseItemDefinition
{
	float                                              Condition;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponItemDefinition
// 0x0040 (0x0058 - 0x0018)
struct FWeaponItemDefinition : public FDegradableItemDefinition
{
	class UClass*                                      WeaponClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoConsumableClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AmmoPoolSize;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              EquippedMods;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bGenerateRandomMicroMod;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EquippedMicroMod;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorItemDefinition
// 0x0000 (0x0018 - 0x0018)
struct FArmorItemDefinition : public FDegradableItemDefinition
{

};

// ScriptStruct Indiana.ArmorSetItemDefinition
// 0x0038 (0x0050 - 0x0018)
struct FArmorSetItemDefinition : public FArmorItemDefinition
{
	class UClass*                                      ArmorSetClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ArmoringModClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      UtilityModClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ResistanceModClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DampeningModClass;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateRandomMicroMod;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EquippedMicroMod;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct Indiana.AmmoItemDefinition
// 0x0008 (0x0018 - 0x0010)
struct FAmmoItemDefinition : public FBaseItemDefinition
{
	class UClass*                                      AmmoClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.CurrencyItmDefinition
// 0x0008 (0x0018 - 0x0010)
struct FCurrencyItmDefinition : public FBaseItemDefinition
{
	class UClass*                                      CurrencyItemClass;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ResourceItmDefinition
// 0x0008 (0x0018 - 0x0010)
struct FResourceItmDefinition : public FBaseItemDefinition
{
	class UClass*                                      ResourceItemClass;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.QuestItmDefinition
// 0x0008 (0x0018 - 0x0010)
struct FQuestItmDefinition : public FBaseItemDefinition
{
	class UClass*                                      QuestItemClass;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponModItemDefinition
// 0x0008 (0x0018 - 0x0010)
struct FWeaponModItemDefinition : public FBaseItemDefinition
{
	class UClass*                                      WeaponModClass;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.HelmetItemDefinition
// 0x0008 (0x0020 - 0x0018)
struct FHelmetItemDefinition : public FArmorItemDefinition
{
	class UClass*                                      HelmetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorModArmoringItemDefinition
// 0x0008 (0x0020 - 0x0018)
struct FArmorModArmoringItemDefinition : public FArmorItemDefinition
{
	class UClass*                                      ArmoringModClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorModUtilityItemDefinition
// 0x0008 (0x0020 - 0x0018)
struct FArmorModUtilityItemDefinition : public FArmorItemDefinition
{
	class UClass*                                      UtilityModClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorModResistanceItemDefinition
// 0x0008 (0x0020 - 0x0018)
struct FArmorModResistanceItemDefinition : public FArmorItemDefinition
{
	class UClass*                                      ResistanceModClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorModDampeningItemDefinition
// 0x0008 (0x0020 - 0x0018)
struct FArmorModDampeningItemDefinition : public FArmorItemDefinition
{
	class UClass*                                      DampeningModClass;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.GadgetItemDefinition
// 0x0008 (0x0018 - 0x0010)
struct FGadgetItemDefinition : public FBaseItemDefinition
{
	class UClass*                                      GadgetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ItemDefinitionVariant
// 0x01F0
struct FItemDefinitionVariant
{
	EItemType                                          ItemType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeaponItemDefinition                       WeaponItemDefinition;                                     // 0x0000(0x0058) (Edit)
	struct FArmorSetItemDefinition                     ArmorSetItemDefinition;                                   // 0x0000(0x0050) (Edit)
	struct FAmmoItemDefinition                         AmmoItemDefinition;                                       // 0x0000(0x0018) (Edit)
	struct FCurrencyItmDefinition                      CurrencyItemDefinition;                                   // 0x0000(0x0018) (Edit)
	struct FResourceItmDefinition                      ResourceItemDefinition;                                   // 0x0000(0x0018) (Edit)
	struct FQuestItmDefinition                         QuestItemDefinition;                                      // 0x0000(0x0018) (Edit)
	struct FWeaponModItemDefinition                    WeaponModItemDefinition;                                  // 0x0000(0x0018) (Edit)
	struct FHelmetItemDefinition                       HelmetItemDefinition;                                     // 0x0000(0x0020) (Edit)
	struct FArmorModArmoringItemDefinition             ArmorModArmoringItemDefinition;                           // 0x0000(0x0020) (Edit)
	struct FArmorModUtilityItemDefinition              ArmorModUtilityItemDefinition;                            // 0x0000(0x0020) (Edit)
	struct FArmorModResistanceItemDefinition           ArmorModResistanceItemDefinition;                         // 0x0000(0x0020) (Edit)
	struct FArmorModDampeningItemDefinition            ArmorModDampeningItemDefinition;                          // 0x0000(0x0020) (Edit)
	struct FBaseItemDefinition                         MedKitItemDefinitionDeprecated;                           // 0x0000(0x0010) (Edit)
	struct FGadgetItemDefinition                       GadgetItemDefinition;                                     // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0018(0x01D8) MISSED OFFSET
};

// ScriptStruct Indiana.DefaultItemStack
// 0x01F8
struct FDefaultItemStack
{
	struct FItemDefinitionVariant                      Item;                                                     // 0x0000(0x01F0) (Edit)
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLootable;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F7];                                     // 0x0001(0x01F7) MISSED OFFSET
};

// ScriptStruct Indiana.ItemStack
// 0x0010
struct FItemStack
{
	class UItem*                                       Item;                                                     // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                Count;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLootable;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.ExpressionComponentAsset
// 0x0010
struct FExpressionComponentAsset
{
	ELogicalOperator                                   Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.ConditionalExpressionAsset
// 0x0020 (0x0030 - 0x0010)
struct FConditionalExpressionAsset : public FExpressionComponentAsset
{
	TArray<ExpressionComponentType>                    ComponentTypes;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        ComponentIndices;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ConditionalCallAsset
// 0x0048 (0x0058 - 0x0010)
struct FConditionalCallAsset : public FExpressionComponentAsset
{
	bool                                               Not;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ScriptCall;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      FullName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Flags;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              Parameters;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0010(0x0048) MISSED OFFSET
};

// ScriptStruct Indiana.ConditionalAsset
// 0x0050
struct FConditionalAsset
{
	TArray<struct FConditionalExpressionAsset>         ExpressionComponents;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FConditionalCallAsset>               CallComponents;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FConditionalExpressionAsset                 Root;                                                     // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterLinkAsset
// 0x0060
struct FChatterLinkAsset
{
	int                                                FromNodeID;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ToNodeID;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FConditionalAsset                           Conditional;                                              // 0x0000(0x0050) (Edit)
	int                                                RandomWeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0004(0x005C) MISSED OFFSET
};

// ScriptStruct Indiana.ScriptCallAsset
// 0x0070
struct FScriptCallAsset
{
	class FString                                      Script;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Flags;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FConditionalAsset                           Conditional;                                              // 0x0000(0x0050) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.DialogueNodeAsset
// 0x00B0
struct FDialogueNodeAsset
{
	int                                                NodeID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ContainerNodeID;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFlowChartNodeType                                 NodeType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FChatterLinkAsset>                   Links;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FConditionalAsset                           Conditional;                                              // 0x0000(0x0050) (Edit)
	TArray<struct FScriptCallAsset>                    OnEnterScripts;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FScriptCallAsset>                    OnExitScripts;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FScriptCallAsset>                    OnUpdateScripts;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               NotSkippable;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuestionNode;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HideSpeaker;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENodePlayType                                      PlayType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPersistenceType                                   Persistence;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NoPlayRandomWeight;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENodeDisplayType                                   DisplayType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVOPositioning                                     VOPositioning;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAF];                                      // 0x0001(0x00AF) MISSED OFFSET
};

// ScriptStruct Indiana.TalkNodeAsset
// 0x0050 (0x0100 - 0x00B0)
struct FTalkNodeAsset : public FDialogueNodeAsset
{
	struct FGuid                                       SpeakerGameDataID;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ListenerGameDataID;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      EmotionType;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              EmotionStrength;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmotionDelay;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ExternalVO;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              VODelayOverride;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETalkNodeVOAttenuationType                         VOAttenuationType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOmitFromUIHistory;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasVO;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistEmotion;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFF];                                      // 0x0001(0x00FF) MISSED OFFSET
};

// ScriptStruct Indiana.ScriptNodeAsset
// 0x0008 (0x00B8 - 0x00B0)
struct FScriptNodeAsset : public FDialogueNodeAsset
{
	bool                                               RequiresValidChildNode;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB7];                                      // 0x0001(0x00B7) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterNodeAsset
// 0x0008 (0x00B8 - 0x00B0)
struct FChatterNodeAsset : public FDialogueNodeAsset
{
	int                                                VariantCount;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x0004(0x00B4) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterBranchNodeAsset
// 0x0020 (0x00D8 - 0x00B8)
struct FChatterBranchNodeAsset : public FScriptNodeAsset
{
	struct FGuid                                       ParentID;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       EventID;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0010(0x00C8) MISSED OFFSET
};

// ScriptStruct Indiana.GameDataStructure
// 0x0008
struct FGameDataStructure
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterEvent
// 0x0028 (0x0030 - 0x0008)
struct FChatterEvent : public FGameDataStructure
{
	EChatterEventType                                  EventType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EInterruptType                                     OnInterrupt;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EChatterLevel                                      InterruptionLevel;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EQueueType                                         OnQueued;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ChatterPrefix;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterEventNodeAsset
// 0x0030 (0x00E0 - 0x00B0)
struct FChatterEventNodeAsset : public FDialogueNodeAsset
{
	struct FChatterEvent                               EventData;                                                // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET
};

// ScriptStruct Indiana.SoundEffectNodeAsset
// 0x0018 (0x00C8 - 0x00B0)
struct FSoundEffectNodeAsset : public FDialogueNodeAsset
{
	class FString                                      AudioEvent;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              FadeOutDuration;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0004(0x00C4) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterBundle
// 0x00E0
struct FChatterBundle
{
	class FString                                      LoadedFilename;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, class FString>                           AudioLookup;                                              // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<class FString>                              StringTableFilenames;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FTalkNodeAsset>                      TalkNodes;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FScriptNodeAsset>                    ScriptNodes;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FChatterNodeAsset>                   ChatterNodes;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FChatterBranchNodeAsset>             ChatterBranchNodes;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FChatterEventNodeAsset>              ChatterEventNodes;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSoundEffectNodeAsset>               SoundEffectNodes;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0010(0x00D0) MISSED OFFSET
};

// ScriptStruct Indiana.InputLabelDescription
// 0x0038
struct FInputLabelDescription
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IconName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLocString                                  TextReference;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	bool                                               bDisplayKeyboardMouse;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayGamepad;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBoundToActionName;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresConstantTicking;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaComboButtonStyle
// 0x08D0 (0x08D8 - 0x0008)
struct FIndianaComboButtonStyle : public FSlateWidgetStyle
{
	struct FIndianaButtonStyle                         ButtonStyle;                                              // 0x0000(0x07A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        DownArrowImage;                                           // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        MenuBorderBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMargin                                     MenuBorderPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C8];                                     // 0x0010(0x08C8) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaComboBoxStyle
// 0x08D8 (0x08E0 - 0x0008)
struct FIndianaComboBoxStyle : public FSlateWidgetStyle
{
	struct FIndianaComboButtonStyle                    ComboButtonStyle;                                         // 0x0000(0x08D8) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08D8(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.MoveToQueryInfo
// 0x0010
struct FMoveToQueryInfo
{
	struct FVector                                     Extent;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.BotchableQuestInfo
// 0x001C
struct FBotchableQuestInfo
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeathEventID;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeathEndStateID;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepDescription;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x0001(0x001B) MISSED OFFSET
};

// ScriptStruct Indiana.PageDimensions
// 0x0030
struct FPageDimensions
{
	int                                                VerticalIndent;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Rows;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              SupportedClasses;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<EItemSorting>                               SupportedSortingOptions;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ItemViewerInitializer
// 0x00A0
struct FItemViewerInitializer
{
	bool                                               bShowAllCategory;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPageDimensions                             AllDimensions;                                            // 0x0000(0x0030) (Edit)
	TArray<struct FPageDimensions>                     PageDimensions;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bShowJunkCategory;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPageDimensions                             JunkDimensions;                                           // 0x0000(0x0030) (Edit)
	TArray<class UTexture2D*>                          Images;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLocString>                          PageHeaderText;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0010(0x0090) MISSED OFFSET
};

// ScriptStruct Indiana.CompanionEQSRequest
// 0x0028
struct FCompanionEQSRequest
{
	class UEQSRequest_IndianaBase*                     EQSRequest;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloseRadius;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarRadius;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdealAngle;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAngle;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovementDistanceThreshold;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct Indiana.ConversationCompanionConfig
// 0x0018
struct FConversationCompanionConfig
{
	struct FVector                                     Companion1IdealLocation;                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Companion2IdealLocation;                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.EntryData
// 0x0010
struct FEntryData
{
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  InWorldBeaconImage;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.CompassAreaBeaconEaseSetting
// 0x0008
struct FCompassAreaBeaconEaseSetting
{
	EEaseType                                          EaseType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              EaseExponent;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.DistanceRatioToSpeedPair
// 0x0008
struct FDistanceRatioToSpeedPair
{
	float                                              DistanceRatio;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.ComputerBrandData
// 0x0040
struct FComputerBrandData
{
	TArray<struct FLocString>                          BrandSlogans;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>                   BrandIcon;                                                // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FLocString                                  BrandName;                                                // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.CharacterDescription
// 0x0020
struct FCharacterDescription
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSpeakerGameDataReferenceID                 CharacterReferenceID;                                     // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.CameraProperties
// 0x0010
struct FCameraProperties
{
	ECameraFramingOffset                               CameraOffset;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraTracksMovement;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FixedCameraTarget;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.ConversationDescription
// 0x01F8
struct FConversationDescription
{
	class UConversationData*                           ConversationData;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartNode;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterDescription>               Characters;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FSpeakerGameDataReferenceID, struct FCameraProperties> SpeakerCameraOverrides;                                   // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FSpeakerGameDataReferenceID, class AActor*> SpeakerAudioOverrides;                                    // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      InstanceClass;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<EPayloadID, class AActor*>                    InstancePayloadActors;                                    // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FCameraProperties                           BaseCameraProperties;                                     // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bAllowBarkConversationDuringCombat;                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACineCameraActor*                            OverrideCamera;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLogicalExpression                          TeleportCondition;                                        // 0x0000(0x0068) (Edit)
	class AIndianaTargetPoint*                         PlayerTeleport;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCompanionCutscene;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class AIndianaTargetPoint*                         CompanionOneTeleport;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESpecialObsidianID                                 CompanionOnePreference;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class AIndianaTargetPoint*                         CompanionTwoTeleport;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESpecialObsidianID                                 CompanionTwoPreference;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class AIndianaTargetPoint*                         OwnerTeleport;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0008(0x01F0) MISSED OFFSET
};

// ScriptStruct Indiana.TalkDependencies
// 0x0090
struct FTalkDependencies
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFaceFXAnim*                                 AnimFaceFX;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct Indiana.CoverAssetCollisionData
// 0x0040
struct FCoverAssetCollisionData
{
	struct FVector                                     BoxExtent;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.CreditsEntry
// 0x0038
struct FCreditsEntry
{
	class FString                                      DebugName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsText;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFCreditsTextType                                  TextType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLocString                                  LocString;                                                // 0x0000(0x0008) (Edit)
	bool                                               bIsSpacing;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFCreditsSpacingType                               SpacingType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsImage;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ImageAsset;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideImageSize;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OverrideImageSize;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.CreditsGroup
// 0x0020
struct FCreditsGroup
{
	class FString                                      DebugName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCreditsEntry>                       Credits;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.EventEffectParams
// 0x0080
struct FEventEffectParams
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Indiana.AppliedMaterialParam
// 0x0018
struct FAppliedMaterialParam
{
	TWeakObjectPtr<class UMaterialInstanceDynamic>     DynamicMaterial;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EMaterialParamType                                 ParamType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.DeathBodyTypeAudioEvent
// 0x0010
struct FDeathBodyTypeAudioEvent
{
	struct FGameplayTag                                DeathAudioEvent;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.RandomRequestItem
// 0x0010
struct FRandomRequestItem
{
	class UDecisionTreeRequestData*                    Request;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.PhaseWeaponDefinition
// 0x0008
struct FPhaseWeaponDefinition
{
	int                                                Phase;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WeaponIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.DecisionTreeStack
// 0x0010
struct FDecisionTreeStack
{
	TArray<class UClass*>                              DecisionTrees;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Indiana.DecisionTreeContextMap
// 0x0060
struct FDecisionTreeContextMap
{
	struct FDecisionTreeStack                          DefaultDecisionTrees;                                     // 0x0000(0x0010)
	TMap<struct FName, struct FDecisionTreeStack>      DecisionTreeMap;                                          // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.DecisionTreeMapElement
// 0x0010
struct FDecisionTreeMapElement
{
	struct FGameplayTag                                EventType;                                                // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UClass*                                      DecisionTree;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.DecisionTreeResult
// 0x0038
struct FDecisionTreeResult
{
	class UAIEventInfo*                                EventInfo;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UDecisionTreeRequestData*>            DecisionTreeRequests;                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.DifficultyModifier
// 0x0080
struct FDifficultyModifier
{
	bool                                               bUseCurve;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.DifficultyStatModifierDescription
// 0x0200 (0x0210 - 0x0010)
struct FDifficultyStatModifierDescription : public FStatModifierDescriptionBase
{
	struct FDifficultyModifier                         DifficultyModifiers[0x4];                                 // 0x0000(0x0080) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.LogicalExpressionGroup
// 0x0070
struct FLogicalExpressionGroup
{
	ELogicalOperator                                   Operator;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLogicalExpression                          Expression;                                               // 0x0000(0x0068) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.LogicalGroupedExpression
// 0x0078
struct FLogicalGroupedExpression
{
	struct FLogicalExpression                          BaseExpression;                                           // 0x0000(0x0068) (Edit)
	TArray<struct FLogicalExpressionGroup>             AdditionalExpressions;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0010(0x0068) MISSED OFFSET
};

// ScriptStruct Indiana.EmotionEntry
// 0x00A8
struct FEmotionEntry
{
	TMap<struct FName, struct FLoopRandomSequence>     TalkingSequences;                                         // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FRandomPlayerSequenceEntryNamed>     Idle;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FRandomPlayerSequenceEntryNamed>     DialogIdle;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FLoopRandomSequence>                 IdleStates;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               WalkForwardSequence;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BeginEmotionSequence;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               EmotionAdditiveLayerStart;                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               EmotionAdditiveLayer;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveLayerStrengthOffset;                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0004(0x00A4) MISSED OFFSET
};

// ScriptStruct Indiana.PotentialEncounterList
// 0x0010
struct FPotentialEncounterList
{
	class UEncounterList*                              EncounterList;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistEncounter;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.EncounterClearConditions
// 0x00F8
struct FEncounterClearConditions
{
	struct FLogicalGroupedExpression                   ForceClearConditions;                                     // 0x0000(0x0078) (Edit)
	struct FLogicalGroupedExpression                   ClearConditions;                                          // 0x0000(0x0078) (Edit)
	float                                              KillPercentToClear;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF4];                                      // 0x0004(0x00F4) MISSED OFFSET
};

// ScriptStruct Indiana.GameTimeDataEntry
// 0x000C
struct FGameTimeDataEntry
{
	int                                                Days;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Hours;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.EncounterActivationConditions
// 0x0098
struct FEncounterActivationConditions
{
	struct FLogicalGroupedExpression                   ValidConditions;                                          // 0x0000(0x0078) (Edit)
	bool                                               bRestrictTimePhases;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EPhaseOfDay>                                ValidTimePhases;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              ActivationChance;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x0004(0x0094) MISSED OFFSET
};

// ScriptStruct Indiana.AISelector_EQSParameter
// 0x0008
struct FAISelector_EQSParameter
{
	class UClass*                                      EQSParameter;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.AIDynamicParam_IndianaBase
// 0x0018
struct FAIDynamicParam_IndianaBase
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EAIParamType                                       ParamType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISelector_EQSParameter                    ValueSelector;                                            // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponSlot
// 0x0008
struct FWeaponSlot
{
	TWeakObjectPtr<class UWeapon>                      Weapon;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Indiana.MedKitConsumableSlot
// 0x0010
struct FMedKitConsumableSlot
{
	class UClass*                                      Consumable;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.InteractionDescription
// 0x0028
struct FInteractionDescription
{
	class AActor*                                      Interactee;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AIndianaCharacter*                           Initiator;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EInteractionType                                   Interaction;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TWeakObjectPtr<class UInteractableComponent>       Interactable;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ItemStackSplit
// 0x0018
struct FItemStackSplit
{
	struct FItemStack                                  ItemStack;                                                // 0x0000(0x0010)
	int                                                SplitCount;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaDamageEvent
// 0x0050
struct FIndianaDamageEvent
{
	class UImpactDataSet*                              ImpactDataSet;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct Indiana.ShotInfo
// 0x0108
struct FShotInfo
{
	struct FDamageDescription                          DamageDescription;                                        // 0x0000(0x0078)
	struct FIndianaDamageEvent                         DamageEvent;                                              // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0050(0x00B8) MISSED OFFSET
};

// ScriptStruct Indiana.DamageTypeRequirementFire
// 0x0020
struct FDamageTypeRequirementFire
{
	int                                                MinSkill;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInstantHitData*                             InstantHitData;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RangedAttackMod;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct Indiana.SpawnPropertyModifiers
// 0x00D0
struct FSpawnPropertyModifiers
{
	class UClass*                                      TeamOverride;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UConversationData*                           ConversationDataOverride;                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ULootTableData*>                      AdditionalLoot;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOverrideOutOfCombatBehavior;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBehaviorPackage                            OutOfCombatBehavior;                                      // 0x0000(0x0098) (Edit)
	bool                                               bIgnoreOverrideInterestPackage;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Spline;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0008(0x00C8) MISSED OFFSET
};

// ScriptStruct Indiana.FootstepStimulus
// 0x0008
struct FFootstepStimulus
{
	float                                              AIRadius;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AIAwarenessGenerated;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.FootstepSurfaceMatch
// 0x0018
struct FFootstepSurfaceMatch
{
	TArray<TEnumAsByte<EPhysicalSurface>>              SurfaceTypes;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.FootstepMatch
// 0x0020 (0x0038 - 0x0018)
struct FFootstepMatch : public FFootstepSurfaceMatch
{
	TArray<EFootstepType>                              StepTypes;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<EFootID>                                    Feet;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.FootstepStimulusOverride
// 0x0008 (0x0040 - 0x0038)
struct FFootstepStimulusOverride : public FFootstepMatch
{
	struct FFootstepStimulus                           Stimulus;                                                 // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.SpecialEventStimulusOverride
// 0x0008 (0x0020 - 0x0018)
struct FSpecialEventStimulusOverride : public FFootstepSurfaceMatch
{
	struct FFootstepStimulus                           Stimulus;                                                 // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.SpecialMovementStimulusProperties
// 0x0018
struct FSpecialMovementStimulusProperties
{
	struct FFootstepStimulus                           DefaultEventStimulus;                                     // 0x0000(0x0008) (Edit)
	TArray<struct FSpecialEventStimulusOverride>       EventStimulusOverrides;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.FootstepVisuals
// 0x0030
struct FFootstepVisuals
{
	class UParticleSystem*                             PSTemplate;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EParticleSpawnType                                 ParticleSystemSpawnType;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PSSocket;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

// ScriptStruct Indiana.FootstepVisualsOverride
// 0x0030 (0x0068 - 0x0038)
struct FFootstepVisualsOverride : public FFootstepMatch
{
	struct FFootstepVisuals                            Visuals;                                                  // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.SpecialEventVisualsOverride
// 0x0030 (0x0048 - 0x0018)
struct FSpecialEventVisualsOverride : public FFootstepSurfaceMatch
{
	struct FFootstepVisuals                            Visuals;                                                  // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.SpecialMovementVisualProperties
// 0x0040
struct FSpecialMovementVisualProperties
{
	struct FFootstepVisuals                            DefaultEventVisual;                                       // 0x0000(0x0030) (Edit)
	TArray<struct FSpecialEventVisualsOverride>        EventVisualsOverrides;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.urniturePositionalAnimationData
// 0x0028
struct FurniturePositionalAnimationData
{
	class UAnimMontage*                                Start;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Exit;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CombatExit;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Loop;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClimbing;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Indiana.TransformOverride
// 0x0040
struct FTransformOverride
{
	int                                                Slot;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ComponentEvent
// 0x0030
struct FComponentEvent
{
	class UWidget*                                     Dispatcher;                                               // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.SliderEvent
// 0x0008 (0x0038 - 0x0030)
struct FSliderEvent : public FComponentEvent
{
	float                                              Value;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct Indiana.AchievementArray
// 0x0010
struct FAchievementArray
{
	TArray<class UAchievementDataAsset*>               Achievements;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.AIEventTypeMapElement
// 0x0010
struct FAIEventTypeMapElement
{
	struct FGameplayTag                                Event;                                                    // 0x0000(0x0008) (Edit)
	EAIEventType                                       EventType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponAISettingsMapElement
// 0x0010
struct FWeaponAISettingsMapElement
{
	struct FGameplayTag                                WeaponType;                                               // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UAISettings_Weapon*                          WeaponSettings;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.LostTargetTimes
// 0x0010
struct FLostTargetTimes
{
	float                                              RangedInitiallyUnseenTime;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangedInitiallySeenTime;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoverInitiallyUnseenTime;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoverInitiallySeenTime;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.DisablePriorityMapElement
// 0x0010
struct FDisablePriorityMapElement
{
	struct FGameplayTag                                DisableType;                                              // 0x0000(0x0008) (Edit)
	EDisablePriority                                   Priority;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.CompanionFollowSettings
// 0x0001
struct FCompanionFollowSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Indiana.CompanionCommmandMoveToSettings
// 0x0004
struct FCompanionCommmandMoveToSettings
{
	float                                              WalkDistanceThreshold;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.CompanionCommmandSettings
// 0x0008
struct FCompanionCommmandSettings
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LostTargetTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.NavigationBlockDetectionSettings
// 0x0014
struct FNavigationBlockDetectionSettings
{
	float                                              BlockDetectionDistance;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockDetectionInterval;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlockDetectionSampleCount;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockDestinationCheckDistance;                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockDestinationSampleInterval;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.NavigationBlockedSettings
// 0x0018
struct FNavigationBlockedSettings
{
	float                                              BlockDistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockHeadingCosineAngle;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockDeltaCosineAngle;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBlockTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBlockTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoBlockerTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.NavigationBumpSettings
// 0x000C
struct FNavigationBumpSettings
{
	float                                              MaxBumpSpeed;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostOverlapBumpTime;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BumperBlockedTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.NavigationJumpSettings
// 0x0008
struct FNavigationJumpSettings
{
	float                                              MaxJumpDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxJumpHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.GameTimespan
// 0x0008
struct FGameTimespan
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SpellSet
// 0x0050
struct FSpellSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.SpellSet.SpellTypes
};

// ScriptStruct Indiana.MinMaxChatterTime
// 0x0008
struct FMinMaxChatterTime
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterEventRestrictedCharacterGroups
// 0x0050
struct FChatterEventRestrictedCharacterGroups
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.ChatterEventRestrictedCharacterGroups.Values
};

// ScriptStruct Indiana.InvestigationSettings
// 0x0034
struct FInvestigationSettings
{
	float                                              MinInitialWaitTime;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialWaitTime;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndWaitTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinArrivalRadius;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxArrivalRadius;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StimulusUpdateWaitTime;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StimulusUpdateMinDuration;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExitChatterTriggerTime;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISettingsWander                           DeadBodyWanderSearchSettings;                             // 0x0000(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0014(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.PseudoGodModeSettings
// 0x0004
struct FPseudoGodModeSettings
{
	float                                              MinimumHealthPercentage;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.DamageTypeScalar
// 0x0018
struct FDamageTypeScalar
{
	TArray<class UClass*>                              DamageTypes;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Scalar;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.ArmorVsDamageTypes
// 0x0018
struct FArmorVsDamageTypes
{
	struct FGameplayTag                                ArmorType;                                                // 0x0000(0x0008) (Edit)
	TArray<struct FDamageTypeScalar>                   DamageTypeScalars;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.InteractAudioEvent
// 0x0010
struct FInteractAudioEvent
{
	class UAkAudioEvent*                               OpenSound;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.ReputationActionConsequence
// 0x0018
struct FReputationActionConsequence
{
	EReputationType                                    ReputationType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EReputationIncrementType                           IncrementType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CustomAmount;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EReputationIncrementType                           TalkIncrementType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TalkCustomAmount;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EReputationIncrementType                           BribeIncrementType;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BribeCustomAmount;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.ReputationElement
// 0x0010
struct FReputationElement
{
	int                                                PositiveIndex;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NegativeIndex;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UReputationData*                             ReputationData;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.NameTypeBinding
// 0x0010
struct FNameTypeBinding
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInputBindingType                                  BindingType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.LinkedBinding
// 0x0018
struct FLinkedBinding
{
	struct FName                                       LinkedBindingName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FNameTypeBinding>                    Bindings;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.GamepadBindings
// 0x0040
struct FGamepadBindings
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        OldKey;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        NewKey;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              NewScale;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInputBindingType                                  NewBindingType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0001(0x003F) MISSED OFFSET
};

// ScriptStruct Indiana.GamepadBindingsList
// 0x0010
struct FGamepadBindingsList
{
	TArray<struct FGamepadBindings>                    Bindings;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Indiana.MeleeInput
// 0x0002
struct FMeleeInput
{
	EMeleeAction                                       PreviousAction;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EButtonPress                                       ButtonPress;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
};

// ScriptStruct Indiana.MeleeAction
// 0x00A0
struct FMeleeAction
{
	EMeleeAction                                       Action;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponEvent                                       WeaponEvent;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeleeInput>                         Input;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UForceFeedbackEffect*                        ForceFeedbackEffectOneHand;                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffectOneHandBlocked;                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffectTwoHands;                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffectTwoHandsBlocked;                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInput;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowInputAtStart;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartQueuedActionAtStart;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartWhenQueued;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecoilIfBlocked;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerForceFeedbackAtStart;                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CalledShotCharge;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMeleeAttackType                                   AttackType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMeleeAction                                       InterruptAction;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMeleeAction                                       AutoQueuedAction;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0001(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.MeleeAction.ChainActions
	unsigned char                                      UnknownData01[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.DefaultTeamRelationships
// 0x00F0
struct FDefaultTeamRelationships
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.DefaultTeamRelationships.HostileTeams
	unsigned char                                      UnknownData01[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.DefaultTeamRelationships.NeutralTeams
	unsigned char                                      UnknownData02[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.DefaultTeamRelationships.FriendlyTeams
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0050(0x00A0) MISSED OFFSET
};

// ScriptStruct Indiana.ActionLabelDescription
// 0x000C
struct FActionLabelDescription
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	bool                                               bDisplayKeyboard;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayGamepad;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct Indiana.SpecializedAmmoClasses
// 0x0010
struct FSpecializedAmmoClasses
{
	TArray<class UClass*>                              Classes;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.HUDFadeSettings
// 0x0014
struct FHUDFadeSettings
{
	float                                              HUDActiveTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HUDFadeInTime;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HUDFadeInExponent;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HUDFadeOutTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HUDFadeOutExponent;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.HairAppearance
// 0x0050 (0x0090 - 0x0040)
struct FHairAppearance : public FAppearanceMatch
{
	TSoftObjectPtr<class USkeletalMesh>                StandardMesh;                                             // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class USkeletalMesh>                CappedMesh;                                               // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET
};

// ScriptStruct Indiana.TrackingSetting
// 0x000C
struct FTrackingSetting
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ComfortAngle;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistanceThreshold;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.NewHeadAppearance
// 0x0080 (0x00C0 - 0x0040)
struct FNewHeadAppearance : public FAppearanceMatch
{
	TSoftObjectPtr<class USkeletalMesh>                HeadMesh;                                                 // 0x0000(0x0028) (Edit)
	TMap<struct FName, TSoftObjectPtr<class UMaterialInterface>> MaterialOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	struct FName                                       HairMorphTarget;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0008(0x00B8) MISSED OFFSET
};

// ScriptStruct Indiana.AreaHeightTile
// 0x0058
struct FAreaHeightTile
{
	struct FBox2D                                      WorldArea;                                                // 0x0000(0x0014) (Edit, ZeroConstructor, EditConst)
	TSoftObjectPtr<class UHeightmapData>               HeightmapData;                                            // 0x0000(0x0028) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.HeightValuesTexture
// 0x00A0
struct FHeightValuesTexture
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct Indiana.HitLocationChance
// 0x0028
struct FHitLocationChance
{
	struct FGameplayTagContainer                       BodyParts;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bWeakSpot;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Indiana.ImpactAudioDamageTypeOverlays
// 0x0050
struct FImpactAudioDamageTypeOverlays
{
	TMap<TSoftObjectPtr<class UClass>, class UAkAudioEvent*> DamageTypeOverlays;                                       // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Indiana.ImpactAIDataOverride
// 0x0004
struct FImpactAIDataOverride
{
	float                                              AISoundRadius;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.ImpactParticle
// 0x0060
struct FImpactParticle
{
	class UParticleSystem*                             Fx;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FxScale;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotation;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, float>                          ChargeEmitterEnableThresholds;                            // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ImpactFxEntry
// 0x0048
struct FImpactFxEntry
{
	TArray<struct FImpactParticle>                     ImpactParticles;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInterface*                          Decal;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalSizeMin;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalSizeMax;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalSizeMinClamp;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalSizeMaxClamp;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalDurationMin;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalDurationMax;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalFadeTimeMin;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalFadeTimeMax;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeScreenSize;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalDepth;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NormalOffset;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct Indiana.AimTargets
// 0x0018
struct FAimTargets
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentTag;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.PropComponents
// 0x0018
struct FPropComponents
{
	class UMeshComponent*                              PropMesh;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PropParticleSystem;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AudioState
// 0x0018
struct FAudioState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateValue;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AttributeStatModifierDescription
// 0x0020 (0x0030 - 0x0010)
struct FAttributeStatModifierDescription : public FStatModifierDescriptionBase
{
	float                                              AttributeStatValues[0x7];                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowInUIAtValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct Indiana.LandAudioEvent
// 0x0018
struct FLandAudioEvent
{
	bool                                               bHasMinDistance;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMaxDistance;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkPlaySoundEventEffect*                     Event;                                                    // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AutoConsoleCommandProperties
// 0x0028
struct FAutoConsoleCommandProperties
{
	bool                                               bEnable;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerRegularly;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteWaitTime;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerAfterTravel;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.AutoRandomInputProperties
// 0x0050
struct FAutoRandomInputProperties
{
	bool                                               bEnable;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	bool                                               bAxis;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAxisDeltaSpeed;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAxisDeltaSpeed;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHold;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinHoldTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHoldTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTriggerTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTriggerTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct Indiana.AISoundDetectionSettings
// 0x0028
struct FAISoundDetectionSettings
{
	EAlertState                                        DetectedAlertState;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetectedAwarenessChange;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bContinuousAwareness;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class URpgStat*                                    AwarenessChangeStat;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchFriendAwareness;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathDistanceCheckScalar;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EStimulusType                                      StimulusType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Indiana.TagToAudio
// 0x0010
struct FTagToAudio
{
	struct FGameplayTag                                PrimaryItemSkill;                                         // 0x0000(0x0008) (Edit)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.TagToAudioList
// 0x0010
struct FTagToAudioList
{
	TArray<struct FTagToAudio>                         AudioForItems;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.WeightedImageData
// 0x0050
struct FWeightedImageData
{
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x0000(0x0028) (Edit)
	bool                                               bCanShowTips;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightDecay;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct Indiana.LoadingImageContainer
// 0x0010
struct FLoadingImageContainer
{
	TArray<struct FWeightedImageData>                  LoadingImages;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.ConditionalizedLoadingImageContainer
// 0x00C8
struct FConditionalizedLoadingImageContainer
{
	class FString                                      DebugName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FWeightedImageData                          Image;                                                    // 0x0000(0x0050) (Edit)
	struct FLogicalExpression                          Conditional;                                              // 0x0000(0x0068) (Edit)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0068(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.LoadingScreenRegionMaps
// 0x0010
struct FLoadingScreenRegionMaps
{
	TArray<TSoftObjectPtr<class UWorld>>               Maps;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.ConditionalizedLoadingTips
// 0x0070
struct FConditionalizedLoadingTips
{
	struct FLocString                                  Tip;                                                      // 0x0000(0x0008) (Edit)
	struct FLogicalExpression                          Conditional;                                              // 0x0000(0x0068) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.RotatedBox
// 0x0050
struct FRotatedBox
{
	struct FBox                                        Box;                                                      // 0x0000(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.SkillUnlockEffect
// 0x0018
struct FSkillUnlockEffect
{
	ESkill                                             EquippedWeaponSkill;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinSkill;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Spell;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLocString                                  UnlockTierString;                                         // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.SkillsArray
// 0x0010
struct FSkillsArray
{
	TArray<ESkill>                                     Skills;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.AttributesArray
// 0x0010
struct FAttributesArray
{
	TArray<EAttribute>                                 Attributes;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.SkillCheck
// 0x0018
struct FSkillCheck
{
	int                                                MinSkill[0x5];                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Variance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.TextAnimationData
// 0x0008
struct FTextAnimationData
{
	int                                                CharactersPerSecond;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct Indiana.OpacityWrapper
// 0x0004
struct FOpacityWrapper
{
	float                                              OpacityValue;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.InteractPayload
// 0x0018
struct FInteractPayload
{
	int                                                Int32_2;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Float_2;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      String_2;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.InteractActorDescription
// 0x0020
struct FInteractActorDescription
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInteractPayload                            Payload;                                                  // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.InterestTypeData
// 0x0010
struct FInterestTypeData
{
	struct FGameplayTag                                InterestType;                                             // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.DeathMontageGroup
// 0x0018
struct FDeathMontageGroup
{
	TArray<class UAnimMontage*>                        List;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bListIsRadialAnimation;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Indiana.LocomotionData
// 0x0050
struct FLocomotionData
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSequenceAlt;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct Indiana.PlatformSetProductID
// 0x00C0
struct FPlatformSetProductID
{
	class FString                                      ForcedUniversalID;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PCWindowsStoreID;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PCGamepassID;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PCEpicID;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PCSteamID;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PCFallbackLink;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      XboxID;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PS4AmericaTitleID;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PS4ID_SIEA;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PS4EuropeTitleID;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      PS4ID_SIEE;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      SwitchID;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0010(0x00B0) MISSED OFFSET
};

// ScriptStruct Indiana.MainMenuLevelDescription
// 0x0030
struct FMainMenuLevelDescription
{
	struct FSoftObjectPath                             Level;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLocString                                  TextReference;                                            // 0x0000(0x0008) (Edit, BlueprintVisible)
	bool                                               bIsDeliverableInCurrentMilestone;                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTravelDestinationData*                      TravelDestinationData;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.ManagerDebuggerPlayerData
// 0x0010
struct FManagerDebuggerPlayerData
{
	class UInputComponent*                             InputComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.MapCompassUIVisuals
// 0x0018
struct FMapCompassUIVisuals
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit)
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ConditionalMusicTrack
// 0x0080
struct FConditionalMusicTrack
{
	struct FLogicalGroupedExpression                   Condition;                                                // 0x0000(0x0078) (Edit)
	class UMusicTrackData*                             MusicTrack;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct Indiana.MapFloorData
// 0x0048
struct FMapFloorData
{
	struct FLocString                                  FloorName;                                                // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>                   MapImage;                                                 // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FVector2D                                   MapMinBounds;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MapMaxBounds;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           FloorLevel;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadMovementScalar;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct Indiana.PointOfInterestLocation
// 0x0020
struct FPointOfInterestLocation
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       FloorName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPointOfInterestData*                        POIData;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.MapTextEntryData
// 0x0028
struct FMapTextEntryData
{
	struct FLocString                                  DisplayText;                                              // 0x0000(0x0008) (Edit)
	float                                              TextRotation;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       FloorName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct Indiana.MaterialParamMod
// 0x0060
struct FMaterialParamMod
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EMaterialParamType                                 Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScalarParam;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VectorParam;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture>                     TextureParam;                                             // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.MeleeAnimEvent
// 0x0010
struct FMeleeAnimEvent
{
	class UAnimMontage*                                Anim;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipIfHaveQueuedAction;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Indiana.ShapeInterface
// 0x0008
struct FShapeInterface
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.BoxShapeData
// 0x0010 (0x0018 - 0x0008)
struct FBoxShapeData : public FShapeInterface
{
	struct FVector                                     BoxExtent;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.SphereShapeData
// 0x0008 (0x0010 - 0x0008)
struct FSphereShapeData : public FShapeInterface
{
	float                                              SphereRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.CapsuleShapeData
// 0x0008 (0x0010 - 0x0008)
struct FCapsuleShapeData : public FShapeInterface
{
	float                                              CapsuleHalfHeight;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.ShapeVariant
// 0x0040
struct FShapeVariant
{
	EShapeType                                         ShapeType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxShapeData                               BoxData;                                                  // 0x0000(0x0018) (Edit)
	struct FSphereShapeData                            SphereData;                                               // 0x0000(0x0010) (Edit)
	struct FCapsuleShapeData                           CapsuleData;                                              // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.TransformedShapeVariant
// 0x0070
struct FTransformedShapeVariant
{
	struct FTransform                                  ShapeTransform;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FShapeVariant                               Shape;                                                    // 0x0000(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.MeleeCollisionInfo
// 0x0080
struct FMeleeCollisionInfo
{
	bool                                               bWeaponMesh;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionSocket;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformedShapeVariant                    CollisionShapeInfo;                                       // 0x0000(0x0070) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.DamageTypeRequirement
// 0x0010
struct FDamageTypeRequirement
{
	int                                                MinSkill;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.LerpTimer
// 0x0020
struct FLerpTimer
{
	float                                              Duration;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             TickDelegate;                                             // 0x0000(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ModAppearance
// 0x0008 (0x0048 - 0x0040)
struct FModAppearance : public FAppearanceMatch
{
	class UModVisual*                                  ModVisual;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Indiana.AppliedMod
// 0x000C
struct FAppliedMod
{
	TWeakObjectPtr<class UModVisual>                   Mod;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPermanentlyApplied;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct Indiana.ParticleSystemPool
// 0x0020
struct FParticleSystemPool
{
	TArray<class UPooledParticleSystemComponent*>      ActiveComponents;                                         // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UPooledParticleSystemComponent*>      FreeComponents;                                           // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.PendingParticleSpawnInfo
// 0x0010
struct FPendingParticleSpawnInfo
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.PerkTextures
// 0x0018
struct FPerkTextures
{
	class UTexture2D*                                  Unpurchased;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Purchased;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Suppressed;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.PerkTier
// 0x0018
struct FPerkTier
{
	int                                                PreviousPointsRequired;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Perks;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.PerkTiers
// 0x0010
struct FPerkTiers
{
	TArray<struct FPerkTier>                           PerkTiers;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.AddictionTimer
// 0x0040
struct FAddictionTimer
{
	struct FGameplayTag                                AddictionTag;                                             // 0x0000(0x0008) (Edit)
	float                                              TimerMax;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncreasePerSecond;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlawClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAddictionTimerEntersMaxed;                              // 0x0000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddictionTimerLeavesMaxed;                              // 0x0000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              CurrentTimer;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct Indiana.SurvivalTier
// 0x0010
struct FSurvivalTier
{
	class UClass*                                      Spell;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TierMin;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TierMax;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.CurveData
// 0x0080
struct FCurveData
{
	struct FName                                       ScalerName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          Parameter;                                                // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SkillValueExperienceRange
// 0x000C
struct FSkillValueExperienceRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.LevelDifferenceRangeScalar
// 0x000C
struct FLevelDifferenceRangeScalar
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.LootOnBreakdown
// 0x0010
struct FLootOnBreakdown
{
	ESkill                                             Skill;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinSkill;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class ULootTableData*                              LootTable;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.DodgeInputRange
// 0x0008
struct FDodgeInputRange
{
	float                                              VerticalWeight;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalWeight;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.DodgeProperties
// 0x001C
struct FDodgeProperties
{
	struct FVector                                     RelativeDirection;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgeVelocity;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgeVelocityZ;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideFriction;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0004(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.InterestStateTextures
// 0x0018
struct FInterestStateTextures
{
	class UTexture2D*                                  DiscoveredTexture;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  UnknownTexture;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MentionedTexture;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.PONRQuest
// 0x0020
struct FPONRQuest
{
	class FString                                      QuestName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        QuestEventIDs;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ConversationReference
// 0x0010
struct FConversationReference
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.ConversationPoNR
// 0x0068
struct FConversationPoNR
{
	struct FName                                       Filename;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FConversationReference                      Conversation;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<class FString, int>                           GlobalVariables;                                          // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.NodeSet
// 0x0020
struct FNodeSet
{
	struct FConversationReference                      Conversation;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<int>                                        NodeIDs;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.NodeVarConditionalVarReset
// 0x0050
struct FNodeVarConditionalVarReset
{
	struct FName                                       ConversationName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FConversationReference                      Conversation;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                ConversationNode;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      TestGlobalVar;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TestGlobalVarValue;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      TargetGlobalVar;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TargetGlobalVarValue;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct Indiana.PostProcessFX
// 0x0078
struct FPostProcessFX
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistentParticle;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FRuntimeFloatCurve>      Params;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveParticleSystem;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct Indiana.QuestSubTypeGroup
// 0x0010
struct FQuestSubTypeGroup
{
	TArray<EQuestType>                                 AcceptedSubTypes;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Indiana.DifficultyRange
// 0x0008
struct FDifficultyRange
{
	int                                                RangeMinimum;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RangeMaximum;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.RandomActionSetPair
// 0x0010
struct FRandomActionSetPair
{
	class UAIAction*                                   Action;                                                   // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Score;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.WeightedEffect
// 0x0010
struct FWeightedEffect
{
	class UEventEffect*                                Effect;                                                   // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.QueryPair
// 0x0010
struct FQueryPair
{
	class UEQSRequest_IndianaBase*                     EQSRequest;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.PriorityCreatureSpawn
// 0x0040
struct FPriorityCreatureSpawn
{
	struct FGameplayTagContainer                       CreaturesTypeTags;                                        // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       CreatureRoleTags;                                         // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.HitReaction
// 0x0010
struct FHitReaction
{
	class UClass*                                      StatusEffect;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.CrosshairVisuals
// 0x0030
struct FCrosshairVisuals
{
	class UTexture2D*                                  Left;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Top;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Center;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Minimal;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  StaticImage;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StaticImagePositionOffset;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.CrosshairStates
// 0x0090
struct FCrosshairStates
{
	struct FCrosshairVisuals                           Default;                                                  // 0x0000(0x0030) (Edit)
	struct FCrosshairVisuals                           Hostile;                                                  // 0x0000(0x0030) (Edit)
	struct FCrosshairVisuals                           Neutral;                                                  // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.StatClampingData
// 0x0010
struct FStatClampingData
{
	bool                                               bMinClamp;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaxClamp;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.PendingDeferredSpawn
// 0x0038
struct FPendingDeferredSpawn
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.CachedGameState
// 0x0178
struct FCachedGameState
{
	TArray<class UObject*>                             PreloadedObjects;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPendingDeferredSpawn>               PendingDeferredSpawns;                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
	TMap<class AActor*, uint64_t>                      DeferredSpawnActorStateDataOffsets;                       // 0x0000(0x0050) (ZeroConstructor, Transient)
	TMap<struct FGuid, class AActor*>                  DeferredSpawnsByGUID;                                     // 0x0000(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0050(0x0128) MISSED OFFSET
};

// ScriptStruct Indiana.ScaledActorEntry
// 0x0030
struct FScaledActorEntry
{
	int                                                MinPlayerLevel;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       ActorClass;                                               // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.HUDSetting
// 0x0034
struct FHUDSetting
{
	ECompassVisibilityMode                             CompassVisibility;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDialogSkillMode                                   DialogSkillMode;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TooltipDelay;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NotificationDuration;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionOutlines;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionControls;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWaypointMarkers;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EEnemyHealthBarMode                                EnemyHealthBarMode;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EReticleMode                                       ReticleMode;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReticleFeedback;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EQuestUpdateMode                                   QuestUpdateMode;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAwarenessMeterMode;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerStatusBarMode                               StatusBarMode;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPlayerStatusEffects;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerStatusEffectTextMode                        PlayerStatusEffectTextMode;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECompanionAbilityUIMode                            CompanionAbilityUI;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECompanionAbilityBindingMode                       CompanionAbilityBindings;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EHeldWeaponDisplayMode                             HeldWeaponDisplay;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EHeldWeaponDisplayText                             HeldWeaponTextDisplay;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAreaNameMode                                      AreaNameMode;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDirectionalDamageIndicatorMode                    DirectionalDamageIndicatorMode;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFPSIndicatorMode                                  FPSIndicator;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowSurvivalBars;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMedicalInhalerMode                                InhalerMode;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAbilityControlMode                                AbilityControlMode;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECompanionStatusMode                               CompanionStatusMode;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECompanionAbilityPassiveCDMode                     CompanionAbilityPassiveCooldowns;                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECompanionAbilityPassiveNotificationMode           CompanionAbilityPassiveNotifications;                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLevelUpNotifications;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLevelUpReminders;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowCombatIndicator;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTTDScanner;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETTDReticleMeterMode                               TTDReticleMeterMode;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTTDStatusEffectPreview;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDisguiseMeter;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipmentRepairWarning;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponSelectMode                                  WeaponSelectMode;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponSelectAxisMode                              WeaponSelectAxisMode;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTutorialNotifications;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTutorialPopups;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLootTooltips;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLootControls;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x33];                                      // 0x0001(0x0033) MISSED OFFSET
};

// ScriptStruct Indiana.SettingPlatformStringContainer
// 0x0010
struct FSettingPlatformStringContainer
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SettingDescription
// 0x0068
struct FSettingDescription
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit, BlueprintVisible)
	ESettingSubcategory                                Subcategory;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<EPlatformFamily, struct FSettingPlatformStringContainer> PlatformOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.SubcategoryDescription
// 0x0060
struct FSubcategoryDescription
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit, BlueprintVisible)
	TMap<EPlatformFamily, struct FSettingPlatformStringContainer> PlatformOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.GamepadLayout
// 0x0070
struct FGamepadLayout
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit, BlueprintVisible)
	TMap<EPlatformFamily, struct FSettingPlatformStringContainer> PlatformOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	TArray<struct FLocString>                          ButtonNames;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.DynamicOverrides
// 0x0008
struct FDynamicOverrides
{
	struct FLocString                                  AutoSprintName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Indiana.MapShipDestinations
// 0x0050
struct FMapShipDestinations
{
	TMap<struct FGuid, class UShipDestinationData*>    Destinations;                                             // 0x0000(0x0050) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Indiana.IndianaSliderStyle
// 0x0388 (0x0390 - 0x0008)
struct FIndianaSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrushContainer                        NormalBarBrush;                                           // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        FocusedBarBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        DisabledBarBrush;                                         // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        NormalThumbBrush;                                         // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        FocusedThumbBrush;                                        // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrushContainer                        DisabledThumbBrush;                                       // 0x0000(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BarThickness;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HoveredSoundOverride;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FocusedSoundOverride;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StepSoundOverride;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderIndentation;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSliderIndentation;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38F];                                     // 0x0001(0x038F) MISSED OFFSET
};

// ScriptStruct Indiana.AreaOfEffect
// 0x0060
struct FAreaOfEffect
{
	struct FTransformedShape                           CollisionShapeInfo;                                       // 0x0000(0x0040) (Edit)
	class URpgStat*                                    CollisionSizeStat;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ESpellEffectTarget                                 SourceType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSources;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTargetPlayerHostiles;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPenetratesWalls;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionSocket;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EMeshTarget                                        MeshTarget;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0001(0x005F) MISSED OFFSET
};

// ScriptStruct Indiana.TargetCone
// 0x0038
struct FTargetCone
{
	class URpgStat*                                    CollisionSizeStat;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngle;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EConeAxis                                          ConeAxis;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertAxis;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	ESpellEffectTarget                                 SourceType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPenetratesWalls;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionSocket;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EMeshTarget                                        MeshTarget;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct Indiana.TargetEffect
// 0x00E0
struct FTargetEffect
{
	ESpellEffectTarget                                 SpellEffectTarget;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UStatusEffect*>                       StatusEffects;                                            // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class USpellConditional*>                   EffectTargetConditionals;                                 // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, NoClear)
	ESpellEffectDirectionType                          EffectDirectionType;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationAngle;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomlyNegateRotationAngle;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInverseDirection;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTwoDimensionalDirection;                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAreaOfEffect                               AreaOfEffect;                                             // 0x0000(0x0060) (Edit)
	struct FTargetCone                                 TargetCone;                                               // 0x0000(0x0038) (Edit)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET
};

// ScriptStruct Indiana.SpellEffectByEvent
// 0x0028
struct FSpellEffectByEvent
{
	class UEventListener*                              ApplyEvent;                                               // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEventListener*                              RemoveEvent;                                              // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTargetEffect>                       TargetEffects;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bRemoveSingleStack;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Indiana.SpellInstance
// 0x0058
struct FSpellInstance
{
	class UEventListener*                              ApplyEvent;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEventListener*                              RemoveEvent;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.DynamicEffectProperties
// 0x0028
struct FDynamicEffectProperties
{
	bool                                               bIgnoreApplyChance;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectDirection;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectBone;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.AlertStateImageSet
// 0x0010
struct FAlertStateImageSet
{
	class UTexture2D*                                  BackingTexture;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FillTexture;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.AwarenessImageSet
// 0x0060
struct FAwarenessImageSet
{
	struct FAlertStateImageSet                         ImageSetUnaware;                                          // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FAlertStateImageSet                         ImageSetSuspicious;                                       // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FAlertStateImageSet                         ImageSetInvestigating;                                    // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FAlertStateImageSet                         ImageSetAlerted;                                          // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FAlertStateImageSet                         ImageSetDisguise;                                         // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FAlertStateImageSet                         ImageSetDisguiseAlert;                                    // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.AwarenessTalkImageSet
// 0x0020
struct FAwarenessTalkImageSet
{
	class UTexture2D*                                  DisguiseUnalerted;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DisguiseAlerted;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  NonDisguiseUnalerted;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  NonDisguiseAlerted;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.IDSet
// 0x0050
struct FIDSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.IDSet.Ids
};

// ScriptStruct Indiana.OEIStringEntry
// 0x0038
struct FOEIStringEntry
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DefaultText;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      FemaleText;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.OEIStringTable
// 0x0100
struct FOEIStringTable
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.OEIStringTable.StringsWithTokens
	TMap<class FString, struct FIDSet>                 StringsWithFemaleVO;                                      // 0x0000(0x0050) (Edit, ZeroConstructor)
	TMap<int, struct FOEIStringEntry>                  Entries;                                                  // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0050(0x00B0) MISSED OFFSET
};

// ScriptStruct Indiana.MiniTimeSpan
// 0x000C
struct FMiniTimeSpan
{
	int                                                Minutes;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Milliseconds;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SubtitleEntry
// 0x0038
struct FSubtitleEntry
{
	class FString                                      DebugName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FMiniTimeSpan                               StartTime;                                                // 0x0000(0x000C) (Edit)
	struct FMiniTimeSpan                               EndTime;                                                  // 0x0000(0x000C) (Edit)
	struct FLocString                                  NameString;                                               // 0x0000(0x0008) (Edit)
	int                                                SubtitleStringID;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct Indiana.StatuEffectVisualSet
// 0x0050
struct FStatuEffectVisualSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Indiana.StatuEffectVisualSet.StatusEffectVisuals
};

// ScriptStruct Indiana.AlternateBrushSet
// 0x03B8
struct FAlternateBrushSet
{
	struct FSlateBrush                                 HiddenBrush;                                              // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 LockedBrush;                                              // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 LockedHoverFocused;                                       // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 LockedSelected;                                           // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 UnlockedBrush;                                            // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 UnlockedHoverFocused;                                     // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 UnlockedSelected;                                         // 0x0000(0x0088) (Edit)
	unsigned char                                      UnknownData00[0x330];                                     // 0x0088(0x0330) MISSED OFFSET
};

// ScriptStruct Indiana.SystemMapEntryData
// 0x0C00
struct FSystemMapEntryData
{
	class FString                                      DebugName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLocString                                  NameString;                                               // 0x0000(0x0008) (Edit)
	struct FLocString                                  DescString;                                               // 0x0000(0x0008) (Edit)
	struct FVector2D                                   TextPadding;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextAlignment;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   QuestIconPadding;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PlayerIconPadding;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextZOrder;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ButtonZOrder;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                QuestIconZOrder;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIconZOrder;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SortingOrder;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayPointOfNoReturnWarning;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowWhileHidden;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipHorizontal;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HiddenBrush;                                              // 0x0000(0x0088) (Edit)
	struct FVector2D                                   HiddenPosition;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 LockedBrush;                                              // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 LockedHoverFocused;                                       // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 LockedSelected;                                           // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 UnlockedBrush;                                            // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 UnlockedHoverFocused;                                     // 0x0000(0x0088) (Edit)
	struct FSlateBrush                                 UnlockedSelected;                                         // 0x0000(0x0088) (Edit)
	bool                                               bHasINX1Overrides;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlternateBrushSet                          INX1BrushSet;                                             // 0x0000(0x03B8) (Edit)
	bool                                               bHasINX2Overrides;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlternateBrushSet                          INX2BrushSet;                                             // 0x0000(0x03B8) (Edit)
	TArray<class UShipDestinationData*>                Destinations;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TMap<class UShipDestinationData*, class UTexture2D*> DestinationImages;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xBB0];                                     // 0x0050(0x0BB0) MISSED OFFSET
};

// ScriptStruct Indiana.SystemMapEntryHelper
// 0x0018
struct FSystemMapEntryHelper
{
	struct FLocString                                  NameString;                                               // 0x0000(0x0008)
	struct FLocString                                  DescString;                                               // 0x0000(0x0008)
	bool                                               bAwareLocation;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHiddenLocation;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLockedLocation;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bActiveQuestLocation;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInactiveQuestLocation;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Indiana.WwiseVOEvent
// 0x0020
struct FWwiseVOEvent
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.TeamRelationship
// 0x0002
struct FTeamRelationship
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Indiana.TravelMapPosition
// 0x00A0
struct FTravelMapPosition
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	TArray<class UTravelDestinationData*>              TravelDestinations;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                PrimaryDestinationIndex;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldCoordinate;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInvertVisibilityConditions;                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLogicalGroupedExpression                   VisibilityConditions;                                     // 0x0000(0x0078) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.TravelShipMapPosition
// 0x0080
struct FTravelShipMapPosition
{
	class UShipDestinationData*                        ShipDestination;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConditional;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLogicalExpression                          Conditional;                                              // 0x0000(0x0068) (Edit)
	struct FVector2D                                   WorldCoordinate;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct Indiana.TravelShipData
// 0x0020
struct FTravelShipData
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	class UTravelDestinationData*                      PlayerShipDestinationData;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTravelShipMapPosition>              ShipLocations;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.TutorialBaseEventData
// 0x0078
struct FTutorialBaseEventData
{
	bool                                               bIsGamepadTutorial;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     MouseAndKeyboardTutorialEvent;                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETutorialEvent                                     GamepadTutorialEvent;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLogicalExpression                          Conditional;                                              // 0x0000(0x0068) (Edit)
	ETutorialCategory                                  Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverDisplayInJournal;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TutorialSortOrder;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct Indiana.TutorialPlatformStringContainer
// 0x0010
struct FTutorialPlatformStringContainer
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	struct FLocString                                  Description;                                              // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.TutorialEventDataContainer
// 0x0088 (0x0100 - 0x0078)
struct FTutorialEventDataContainer : public FTutorialBaseEventData
{
	struct FLocString                                  TutorialNameString;                                       // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	struct FLocString                                  TutorialEventString;                                      // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	TMap<EPlatformFamily, struct FTutorialPlatformStringContainer> PlatformOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisplayInJournalByDefault;                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayTitleInSideNotification;                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ActionName;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              ActionNameList;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0010(0x00F0) MISSED OFFSET
};

// ScriptStruct Indiana.TutorialFullScreenEventDataContainer
// 0x01D8 (0x0250 - 0x0078)
struct FTutorialFullScreenEventDataContainer : public FTutorialBaseEventData
{
	ETutorialDisplayType                               DisplayType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTutorialTag;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTutorialName;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayInJournalByDefault;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLocString                                  PreFlavorString;                                          // 0x0000(0x0008) (Edit)
	struct FLocString                                  TutorialNameString;                                       // 0x0000(0x0008) (Edit)
	struct FLocString                                  TutorialBodyString;                                       // 0x0000(0x0008) (Edit)
	TMap<EPlatformFamily, struct FTutorialPlatformStringContainer> PlatformOverrides;                                        // 0x0000(0x0050) (Edit, ZeroConstructor)
	struct FLocString                                  SubHeaderString;                                          // 0x0000(0x0008) (Edit)
	struct FLocString                                  SubDescriptionString;                                     // 0x0000(0x0008) (Edit)
	TMap<EPlatformFamily, struct FTutorialPlatformStringContainer> SubPlatformOverrides;                                     // 0x0000(0x0050) (Edit, ZeroConstructor)
	struct FLocString                                  ColoredString;                                            // 0x0000(0x0008) (Edit)
	struct FInputLabelDescription                      PrimaryDescription;                                       // 0x0000(0x0038) (Edit)
	struct FInputLabelDescription                      SecondaryDescription;                                     // 0x0000(0x0038) (Edit)
	struct FInputLabelDescription                      BindingDescriptionOne;                                    // 0x0000(0x0038) (Edit)
	struct FInputLabelDescription                      BindingDescriptionTwo;                                    // 0x0000(0x0038) (Edit)
	class UBrandDataAsset*                             BrandType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x248];                                     // 0x0008(0x0248) MISSED OFFSET
};

// ScriptStruct Indiana.ResolutionFontSizeData
// 0x0020
struct FResolutionFontSizeData
{
	class FString                                      DebugName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   Resolution;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int8_t                                             FontSize;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct Indiana.VendorStockDescriptor
// 0x0028
struct FVendorStockDescriptor
{
	class ULootTableData*                              LootTable;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOneOff;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRestricted;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreRestockDelay;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UGenericLogicDataAsset*                      GenerationConditionsDataAsset;                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       DescriptorGuid;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.PerkCostModifier
// 0x0010
struct FPerkCostModifier
{
	class UClass*                                      Perk;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CostModifier;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.WaitData
// 0x000C
struct FWaitData
{
	float                                              StepValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLocString                                  LocString;                                                // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.OnHitStatusEffects
// 0x0028
struct FOnHitStatusEffects
{
	ESkill                                             Skill;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class URpgStat*                                    SkillModifierStat;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinSkill;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Chance;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StatusEffect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysApply;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Indiana.HitFlinchAnim
// 0x0028
struct FHitFlinchAnim
{
	struct FGameplayTagContainer                       BodyParts;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UAnimMontage*                                Anim;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponModDefaultVisuals
// 0x0028
struct FWeaponModDefaultVisuals
{
	struct FGameplayTagContainer                       WeaponCategories;                                         // 0x0000(0x0020) (Edit)
	class UModVisual*                                  DefaultVisuals;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponModSlot
// 0x0058
struct FWeaponModSlot
{
	class UModVisual*                                  SlotDefaultVisuals;                                       // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bModdable;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultMod;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWeaponMod*                                  CurrentMod;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UModVisual*                                  CurrentVisuals;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UModVisual*                                  PendingRemovalVisuals;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponModVisualOverride
// 0x0018
struct FWeaponModVisualOverride
{
	TArray<TSoftObjectPtr<class UClass>>               Mods;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UModVisual*                                  VisualOverride;                                           // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponModProjectileOverride
// 0x0060
struct FWeaponModProjectileOverride
{
	TArray<TSoftObjectPtr<class UClass>>               Mods;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TSoftObjectPtr<class UClass>                       OverrideProjectileClass;                                  // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UInstantHitData>              OverrideInstantHitData;                                   // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.HitTypeData
// 0x0020
struct FHitTypeData
{
	class UCurveVector*                                Curve;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationDuration;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalMovementScalarMin;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalMovementScalarMax;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalMovementScalarMin;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalMovementScalarMax;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ETextDirectionType                                 TextMovementDirectionType;                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct Indiana.DamageTypeColors
// 0x0002
struct FDamageTypeColors
{
	EIndianaUIColorType                                TextColor;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EIndianaUIColorType                                OutlineColor;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
};

// ScriptStruct Indiana.ButtonEvent
// 0x0000 (0x0030 - 0x0030)
struct FButtonEvent : public FComponentEvent
{

};

// ScriptStruct Indiana.AchievementProgress
// 0x0004
struct FAchievementProgress
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Indiana.AIDetectionData
// 0x0018
struct FAIDetectionData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.AISoundDetectionData
// 0x0028 (0x0040 - 0x0018)
struct FAISoundDetectionData : public FAIDetectionData
{
	ESoundDetectionType                                SoundType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       ShoutTarget;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Indiana.JointDriverData
// 0x00C0
struct FJointDriverData
{
	struct FName                                       IKChainName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EFootID                                            FootID;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootDownDistance;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootUpDistance;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BoneThatWillBeIKed;                                       // 0x0000(0x0018) (Edit)
	struct FBoneReference                              BoneToModify;                                             // 0x0000(0x0018) (Edit)
	struct FBoneReference                              UpperLegJoint;                                            // 0x0000(0x0018) (Edit)
	struct FBoneReference                              HipBoneToUseForHeightCalculation;                         // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0018(0x00A8) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_BatchJointDriver
// 0x0138 (0x0228 - 0x00F0)
struct FAnimNode_BatchJointDriver : public FAnimNode_SkeletalControlBase
{
	TArray<struct FJointDriverData>                    Legs;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              PlantRollAmount;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchClamp;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPitchClamp;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackLeftName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackRightName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FrontLeftName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FrontRightName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeightCompensation;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SetTransformOnMiss;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoHeightCompensation;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GroundRollMultiplier;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              HipBoneToModify;                                          // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              BipedHipCounterBone;                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              ConversationCameraBone;                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              HipAdjustRange;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipTranslationSpeedRun;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipTranslationSpeedIdle;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipLimitSpeedRun;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipRotationSpeedRun;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipTranslationSpeed;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipLimitSpeed;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipRotationSpeed;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootTranslationSpeed;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootTranslationSpeedRun;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootRotationSpeed;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootRotationSpeedRun;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTickBeforeReset;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreNormalRays;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x227];                                     // 0x0001(0x0227) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_BatchModify
// 0x0010 (0x0100 - 0x00F0)
struct FAnimNode_BatchModify : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_BoneMatch
// 0x0080 (0x0170 - 0x00F0)
struct FAnimNode_BoneMatch : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x158];                                     // 0x0018(0x0158) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_CurveSlot
// 0x00A0 (0x00D0 - 0x0030)
struct FAnimNode_CurveSlot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUpdateSourcePose;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xCF];                                      // 0x0001(0x00CF) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_EyeLidLimitEntry
// 0x0080
struct FAnimNode_EyeLidLimitEntry
{
	struct FBoneReference                              UpperEyelidBone;                                          // 0x0000(0x0018) (Edit)
	struct FBoneReference                              UpperEyelidMidBone;                                       // 0x0000(0x0018) (Edit)
	struct FBoneReference                              LowerEyelidBone;                                          // 0x0000(0x0018) (Edit)
	struct FBoneReference                              LowerEyelidMidBone;                                       // 0x0000(0x0018) (Edit)
	bool                                               bFlipAngles;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7F];                                      // 0x0001(0x007F) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_EyeLidLimits
// 0x0020 (0x0110 - 0x00F0)
struct FAnimNode_EyeLidLimits : public FAnimNode_SkeletalControlBase
{
	float                                              UpperLidCorrectAmount;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimNode_EyeLidLimitEntry>          EyeLidEntries;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0010(0x0100) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_EyeLookAt
// 0x0100 (0x01F0 - 0x00F0)
struct FAnimNode_EyeLookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       LookAtSocket;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtClampUp;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtClampRight;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearRotationFirst;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1EF];                                     // 0x0001(0x01EF) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_JointDriver
// 0x00C0 (0x01B0 - 0x00F0)
struct FAnimNode_JointDriver : public FAnimNode_SkeletalControlBase
{
	struct FName                                       IKChainName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFootID                                            FootID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootDownDistance;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootUpDistance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BoneThatWillBeIKed;                                       // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              BoneToModify;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              UpperLegJoint;                                            // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              HipBoneToUseForHeightCalculation;                         // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              PlantRollAmount;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchClamp;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPitchClamp;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeightCompensation;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SetTransformOnMiss;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoHeightCompensation;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPerformVelocityCompensation;                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1AF];                                     // 0x0001(0x01AF) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_LocomotionPlay
// 0x0010 (0x00B0 - 0x00A0)
struct FAnimNode_LocomotionPlay : public FAnimNode_SequencePlayer
{
	int                                                CurrentSlot;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0004(0x00AC) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_RandomSequenceNamed
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_RandomSequenceNamed : public FAnimNode_Base
{
	bool                                               bShuffleMode;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomTimeOnInitialize;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomTimePercentage;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomTimeStart;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ListName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SetUpdateName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0004(0x00AC) MISSED OFFSET
};

// ScriptStruct Indiana.AnimNode_RotateBoneAboutBone
// 0x0048 (0x0138 - 0x00F0)
struct FAnimNode_RotateBoneAboutBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12C];                                     // 0x000C(0x012C) MISSED OFFSET
};

// ScriptStruct Indiana.BannedNameReaderData
// 0x0010 (0x0018 - 0x0008)
struct FBannedNameReaderData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.TrackingRegion
// 0x00F0
struct FTrackingRegion
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Indiana.BodyTrackingRegion
// 0x0028 (0x0118 - 0x00F0)
struct FBodyTrackingRegion : public FTrackingRegion
{
	class ULocomotionLogicComponent*                   LocomotionLogic;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x110];                                     // 0x0008(0x0110) MISSED OFFSET
};

// ScriptStruct Indiana.CharacterCreationAttributeData
// 0x0050
struct FCharacterCreationAttributeData
{
	TMap<EAttribute, ECharacterAttributeRange>         AttributeValues;                                          // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.CharacterCreationSkillData
// 0x0020
struct FCharacterCreationSkillData
{
	TArray<ESkillCategory>                             StartingSkillCategories;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.CharacterCreationPerkData
// 0x0010
struct FCharacterCreationPerkData
{
	TArray<class UClass*>                              SelectedPerks;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Indiana.CreationTemplate
// 0x00A8
struct FCreationTemplate
{
	struct FLocString                                  TitleTextReference;                                       // 0x0000(0x0008) (Edit)
	struct FLocString                                  BodyTextReference;                                        // 0x0000(0x0008) (Edit)
	class UClass*                                      Aptitude;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCharacterCreationAttributeData             AttributeData;                                            // 0x0000(0x0050) (Edit)
	struct FCharacterCreationSkillData                 SkillData;                                                // 0x0000(0x0020) (Edit)
	struct FCharacterCreationPerkData                  PerkData;                                                 // 0x0000(0x0010) (Edit)
	class UAppearancePreset*                           AppearancePreset;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCustomCharacter;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA7];                                      // 0x0001(0x00A7) MISSED OFFSET
};

// ScriptStruct Indiana.AttributeMetaData
// 0x0002
struct FAttributeMetaData
{
	unsigned char                                      PointedAttributeIndex;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPointIsUp;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
};

// ScriptStruct Indiana.ScannerData
// 0x00A8
struct FScannerData
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Indiana.ScannerArmorData
// 0x0060
struct FScannerArmorData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterCooldownSet
// 0x0028 (0x0030 - 0x0008)
struct FChatterCooldownSet : public FGameDataStructure
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterCooldownSettings
// 0x0010 (0x0018 - 0x0008)
struct FChatterCooldownSettings : public FGameDataStructure
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ChatterEventsGameDataReferenceID
// 0x0000 (0x0018 - 0x0018)
struct FChatterEventsGameDataReferenceID : public FGameDataReferenceID
{

};

// ScriptStruct Indiana.CompanionCommandMoveToLocation
// 0x0040
struct FCompanionCommandMoveToLocation
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Indiana.LocationCost
// 0x0010
struct FLocationCost
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.AddictionModifier
// 0x0010
struct FAddictionModifier
{
	struct FGameplayTag                                AddictionTag;                                             // 0x0000(0x0008) (Edit)
	float                                              AmountToRemove;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Indiana.NodeConfig
// 0x0018
struct FNodeConfig
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bOverrideCameraProperties;                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FCameraProperties                           CameraProperties;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.ReceiveDamageData
// 0x0048
struct FReceiveDamageData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaGenericDamageEvent
// 0x00C8 (0x00D8 - 0x0010)
struct FIndianaGenericDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0010(0x00C8) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaPointDamageEvent
// 0x00C8 (0x0170 - 0x00A8)
struct FIndianaPointDamageEvent : public FPointDamageEvent
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00A8(0x00C8) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaRadialDamageEvent
// 0x00C8 (0x0108 - 0x0040)
struct FIndianaRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0040(0x00C8) MISSED OFFSET
};

// ScriptStruct Indiana.DeathPoseData
// 0x0068
struct FDeathPoseData
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Indiana.DeathBodyInstanceData
// 0x0060
struct FDeathBodyInstanceData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.EyesTrackingRegion
// 0x0000 (0x00F0 - 0x00F0)
struct FEyesTrackingRegion : public FTrackingRegion
{

};

// ScriptStruct Indiana.FaceFxRigsGameDataReferenceID
// 0x0000 (0x0018 - 0x0018)
struct FFaceFxRigsGameDataReferenceID : public FGameDataReferenceID
{

};

// ScriptStruct Indiana.FaceFxRigStructure
// 0x0018 (0x0020 - 0x0008)
struct FFaceFxRigStructure : public FGameDataStructure
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.BlockedActorData
// 0x0028
struct FBlockedActorData
{
	int                                                Slot;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EEntryLocationStatus                               LocationStatus;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<TSoftObjectPtr<class AActor>>               BlockingActors;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<TSoftObjectPtr<class UPrimitiveComponent>>  BlockingComponents;                                       // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.DelayedEventData
// 0x0020
struct FDelayedEventData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.ReputationActionModifiers
// 0x000C
struct FReputationActionModifiers
{
	float                                              BribeModifier;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TalkModifier;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FightModifier;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.MeleeAnim
// 0x000C
struct FMeleeAnim
{
	EWeaponEvent                                       WeaponEvent;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkippable;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipIfHoldReleased;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct Indiana.TransitionGroupElement
// 0x0010
struct FTransitionGroupElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.HeadTrackingRegion
// 0x0060 (0x0150 - 0x00F0)
struct FHeadTrackingRegion : public FTrackingRegion
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x00F0(0x0060) MISSED OFFSET
};

// ScriptStruct Indiana.PerceptionRangeScalar
// 0x0030
struct FPerceptionRangeScalar
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.IndianaAINoiseEvent
// 0x0000 (0x0030 - 0x0030)
struct FIndianaAINoiseEvent : public FAINoiseEvent
{

};

// ScriptStruct Indiana.CompanionInfo
// 0x000C
struct FCompanionInfo
{
	float                                              Health;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DTBody;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DTHead;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.TrajectoryResult
// 0x0010
struct FTrajectoryResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.InteractPayloadParamDescription
// 0x0020
struct FInteractPayloadParamDescription
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.NavigationCategory
// 0x0090
struct FNavigationCategory
{
	struct FLocString                                  Name;                                                     // 0x0000(0x0008) (Edit)
	struct FSlateBrush                                 Brush;                                                    // 0x0000(0x0088) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.MeleeEQSResult
// 0x0010
struct FMeleeEQSResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.MeleeAttacker
// 0x0018
struct FMeleeAttacker
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.ObjectRefCounter
// 0x0030
struct FObjectRefCounter
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.ObjectiveWaypointGameDataReferenceID
// 0x0000 (0x0018 - 0x0018)
struct FObjectiveWaypointGameDataReferenceID : public FGameDataReferenceID
{

};

// ScriptStruct Indiana.RandomBank
// 0x0018 (0x0020 - 0x0008)
struct FRandomBank : public FGameDataStructure
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Indiana.RandomBankGameDataReferenceID
// 0x0000 (0x0018 - 0x0018)
struct FRandomBankGameDataReferenceID : public FGameDataReferenceID
{

};

// ScriptStruct Indiana.RandomTextEntry
// 0x0008 (0x0010 - 0x0008)
struct FRandomTextEntry : public FGameDataStructure
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.SharedStateStubData
// 0x001C
struct FSharedStateStubData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Indiana.SaveGameGeneralMetadata
// 0x00E8
struct FSaveGameGeneralMetadata
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct Indiana.LevelReference
// 0x0028
struct FLevelReference
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.GenericGameStateHeader
// 0x0010
struct FGenericGameStateHeader
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.GenericVersionedGameStateHeader
// 0x0008 (0x0018 - 0x0010)
struct FGenericVersionedGameStateHeader : public FGenericGameStateHeader
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Indiana.CompanionGameStateHeader
// 0x0030 (0x0048 - 0x0018)
struct FCompanionGameStateHeader : public FGenericVersionedGameStateHeader
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct Indiana.PlayerGameStateHeader
// 0x0010 (0x0028 - 0x0018)
struct FPlayerGameStateHeader : public FGenericVersionedGameStateHeader
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ActorGameStateHeader
// 0x0020 (0x0030 - 0x0010)
struct FActorGameStateHeader : public FGenericGameStateHeader
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Indiana.LevelGameStateHeader
// 0x0028 (0x0040 - 0x0018)
struct FLevelGameStateHeader : public FGenericVersionedGameStateHeader
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct Indiana.GenericVersionedWithDependenciesGameStateHeader
// 0x0010 (0x0028 - 0x0018)
struct FGenericVersionedWithDependenciesGameStateHeader : public FGenericVersionedGameStateHeader
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.DependencyLoadRequest
// 0x0010
struct FDependencyLoadRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.DestroyedPrePlacedActorRegistry
// 0x0050
struct FDestroyedPrePlacedActorRegistry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Indiana.StatusEffectSerializationContext
// 0x0010
struct FStatusEffectSerializationContext
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.ScriptedTeamDataSource
// 0x0010
struct FScriptedTeamDataSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Indiana.TestAudioDataTypeReferenceID
// 0x0000 (0x0018 - 0x0018)
struct FTestAudioDataTypeReferenceID : public FGameDataReferenceID
{

};

// ScriptStruct Indiana.IKChainConfig
// 0x0001
struct FIKChainConfig
{
	EFootID                                            FootID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Indiana.CostModifiers
// 0x0014
struct FCostModifiers
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Indiana.WeaponAimTrackingRegion
// 0x0020 (0x0110 - 0x00F0)
struct FWeaponAimTrackingRegion : public FTrackingRegion
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
