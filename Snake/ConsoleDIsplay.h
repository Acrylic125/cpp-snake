#pragma once
#include "Display.h"
#include <Windows.h>

class ConsoleDisplay : public Display {
private:
	wchar_t* display = nullptr;
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

public:
	ConsoleDisplay() : 
		Display{} {}

	ConsoleDisplay(int width, int height) :
		Display(width, height) {}

	ConsoleDisplay(DisplayDimension dimension) :
		Display(dimension) {}

	~ConsoleDisplay() {
		delete display, hConsole;
	}
};

