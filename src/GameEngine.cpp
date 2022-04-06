#include "olcPixelGameEngine.h"
#include "GameEngine.h"

bool GameEngine::OnUserCreate()
{
	// Called once at the start, so create things here

	return true;
}

bool GameEngine::OnUserUpdate(float fElapsedTime)
{
	// called once per frame
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand() % 256));

	return true;
}
