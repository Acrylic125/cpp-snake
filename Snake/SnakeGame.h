#pragma once
#include "Game.h"

class SnakeGame : public Game
{

public:
	SnakeGame() : Game{450, 625} {}

	void run() override;

	void onStart() override;
};

