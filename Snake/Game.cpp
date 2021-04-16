#include "Game.h"
#include <iostream>

int Game::getDefaultDisplayWidth() {
	return this->defaultDisplayWidth;
}

int Game::getDefaultDisplayHeight() {
	return this->defaultDisplayHeight;
}

void Game::start() {
	if (this->started)
		return;
	this->started = true;
	this->onStart();
	while (this->started) 
		run();
}

void Game::terminate() {
	this->started = false;
}