#ifdef UBUNTU
#define OLC_PGE_APPLICATION
#endif

#include "GameEngine.h"

int main()
{
	#ifdef UBUNTU
	printf("OS_UBUNTU defined.\n");
	#endif
	#ifndef UBUNTU
	printf("OS_UBUNTU is not defined.\n");
	#endif

	GameEngine game;
	if (game.Construct(800, 450, 1, 1))
		game.Start();

	return 0;
}
