#pragma once
#include "Game.h"

class SnakeGame : public Game
{

public:
	SnakeGame() : Game{30, 30} {}

	void run() override;

	void onStart() override;
};

