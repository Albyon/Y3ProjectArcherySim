// Yeoman VR -Y3 Project by Owen Atkinson

#pragma once
/* VR Includes */
//These include a lot of things that are depreciated so it's just here as a fallback if necessary
#include "HeadMountedDisplay.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerPawnVR.generated.h"

UCLASS()
class Y3PROJECTARCHERYSIM_API APlayerPawnVR : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerPawnVR();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(BlueprintReadWrite,VisibleAnywhere)
		//Doesn't actually need a skeletal or static mesh for the player body since it's a VR game.
		UCameraComponent* HMDCam;
	//placeholders in case we decide to use actual hand models later on. For now we will just use the system controller models until we are ready to Polish the game.
	USkeletalMeshComponent* leftHand;
	USkeletalMeshComponent* rightHand;
	UPROPERTY(VisibleAnywhere)
		USceneComponent* VROrigin;
	

};
