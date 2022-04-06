#pragma once
//#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class GameEngine : public olc::PixelGameEngine
{
private:

public:
	GameEngine()
	{
		sAppName = "Plateformer";
	}

public:
	bool OnUserCreate() override;

	bool OnUserUpdate(float fElapsedTime) override;

};
