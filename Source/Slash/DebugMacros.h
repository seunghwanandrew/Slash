#pragma once

#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, true);
#define DRAW_LINE(Location, MoveDirection) if(GetWorld()) DrawDebugLine(GetWorld(), Location, MoveDirection, FColor::Red, true);
#define DRAW_POINT(Position) if(GetWorld()) DrawDebugPoint(GetWorld(), Position, 20.f, FColor::Red, true);
#define DRAW_ACTOR_VECTOR(Location, Position) \
	if (GetWorld()) \
	{\
		DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Red, true); \
		DrawDebugLine(GetWorld(), Location, Position, FColor::Red, true); \
		DrawDebugPoint(GetWorld(), Position, 20.f, FColor::Red, true); \
	};
#define DRAW_SPHERE_SINGLEFRAME(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Blue, false, -1.0F);
#define DRAW_LINE_SINGLEFRAME(Location, MoveDirection) if(GetWorld()) DrawDebugLine(GetWorld(), Location, MoveDirection, FColor::Blue, false, -1.0F, 0, 1.0F);
#define DRAW_POINT_SINGLEFRAME(Position) if(GetWorld()) DrawDebugPoint(GetWorld(), Position, 20.f, FColor::Blue, false, -1.0F);
#define DRAW_ACTOR_VECTOR_SINGLEFRAME(Location, Position) \
	if (GetWorld()) \
	{\
		DrawDebugSphere(GetWorld(), Location, 25.f, 24, FColor::Blue, false, -1.0F); \
		DrawDebugLine(GetWorld(), Location, Position, FColor::Blue, false, -1.0F); \
		DrawDebugPoint(GetWorld(), Position, 20.f, FColor::Blue, false, -1.0F); \
	};
