// Yeoman VR -Y3 Project by Owen Atkinson


#include "ArrowProjectile.h"

// Sets default values
AArrowProjectile::AArrowProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
	}
	Arrow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(SphereRadius);
	//Sett Collider as the Root
	RootComponent = CollisionComponent;
	if (!ProjectileMovementComponent)
	{
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		//Speed calculated by converting the average arrow speed of 240 fps into uu. (73k/60 gives 1216)
		ProjectileMovementComponent->InitialSpeed = ArrowSpeed;
		ProjectileMovementComponent->MaxSpeed = ArrowSpeed;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = false;// arrows do bounce but only in rare occasions for now we'll keep it off.
		ProjectileMovementComponent->ProjectileGravityScale = 0.3f;//gravity should cause arcing. Likely not noticable at the range the project is working at but it's a nice feature
	}
}

// Called when the game starts or when spawned
void AArrowProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArrowProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AArrowProjectile::FireDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}
