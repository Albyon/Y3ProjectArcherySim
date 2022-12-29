// Yeoman VR -Y3 Project by Owen Atkinson


#include "PlayerPawnVR.h"

// Sets default values
APlayerPawnVR::APlayerPawnVR()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//initialise components
	VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	
	HMDCam = CreateDefaultSubobject<UCameraComponent>(TEXT("HMD Cam"));
	
	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand Mesh"));
	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand Mesh"));
	
}

// Called when the game starts or when spawned
void APlayerPawnVR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawnVR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawnVR::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

