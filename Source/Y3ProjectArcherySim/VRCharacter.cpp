// Yeoman VR -Y3 Project by Owen Atkinson


#include "VRCharacter.h"

// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//component initialisation
	VRTracking = CreateDefaultSubobject<USceneComponent>(TEXT("VRTracking"));
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("camera"));
	//CAUSES A lnk ERROR FOR SOME REASON
	/*MCLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MCLeft"));
	MCRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MCRight"));*/
	/*leftHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leftHand"));
	rightHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("rightHand"));
	wristWatch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("wristWatch"));*/
	debugLogOutput = CreateDefaultSubobject<UTextRenderComponent>(TEXT("debugLogOutput"));
}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

