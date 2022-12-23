// Yeoman VR -Y3 Project by Owen Atkinson

#pragma once
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArrowProjectile.generated.h"

UCLASS()
class Y3PROJECTARCHERYSIM_API AArrowProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArrowProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, Category = Mesh)
		UStaticMeshComponent* Arrow;
	//Sphere Collision. Using as it's probably the most appropriate shape for an arrowhead
	UPROPERTY(VisibleAnywhere, Category = Projectile)
		USphereComponent* CollisionComponent;
	float SphereRadius = 10.0f;
	float ArrowSpeed = 1216.0f;
	UPROPERTY(VisibleAnywhere, Category = Projectile)
		UProjectileMovementComponent* ProjectileMovementComponent;
	void FireDirection(const FVector& ShootDirection);
};
