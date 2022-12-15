// Yeoman VR -Y3 Project by Owen Atkinson

#pragma once
#include "Components/TextRenderComponent.h"
#include "MotionControllerComponent.h"
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacter.generated.h"

UCLASS()
class Y3PROJECTARCHERYSIM_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//VRPawn Setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* VRTracking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* camera;
	// the motion controllers cause a LNK error and so will be made in bp. Hopefully not permantly
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMotionControllerComponent* MCLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMotionControllerComponent* MCRight;*/
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* leftHand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* rightHand;*/
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* wristWatch;*/ //UI

	UTextRenderComponent* debugLogOutput; //used to see debug console output while in HMD. For Testing only.
};
