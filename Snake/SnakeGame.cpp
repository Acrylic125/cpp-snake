#include "SnakeGame.h"
#include <iostream>
#include <Windows.h>
#include <iterator>
#include "Utils.h"

using namespace std;

void SnakeGame::onStart() {
	int width = getDefaultDisplayWidth(),
		height = getDefaultDisplayHeight(),
		size = getTotalScreenSize();
	// Create Screen Buffer (Adapted From https://github.com/OneLoneCoder/CommandLineFPS/blob/master/CommandLineFPS.cpp)
	wchar_t* display = new wchar_t[size];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

	display[getTotalScreenSize() - 1] = '\0';
	for (int i = 0; i < getTotalScreenSize() - 1; i++) {
		display[i] = 'A';
	}
	WriteConsoleOutputCharacter(hConsole, display, getDefaultDisplayWidth() * getDefaultDisplayHeight(), {0, 0}, &dwBytesWritten);
} 

void SnakeGame::run() {
	//cout << "Test";
}