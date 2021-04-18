#pragma once
#include "Game.h"
#include "ConsoleDisplay.h"

class SnakeGame : public Game
{
private:
	ConsoleDisplay display;

public:
	SnakeGame() : Game{30, 30} {}

	void run() override;

	void onStart() override;
};

