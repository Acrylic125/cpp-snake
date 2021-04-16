#pragma once
class Game
{
private:
	const int defaultDisplayWidth,
			  defaultDisplayHeight;
	bool started = false;

public:
	Game(int defaultDisplayWidth, int defaultDisplayHeight) :
		defaultDisplayWidth(defaultDisplayWidth), defaultDisplayHeight(defaultDisplayHeight) {}

	void start();
	
	virtual void onStart() = 0;

	virtual void run() = 0;

	void terminate();

	int getDefaultDisplayWidth();

	int getDefaultDisplayHeight();
};

