#include "Display.h"

int DisplayDimension::GetHeight() {
	return height;
}

int DisplayDimension::GetWidth() {
	return width;
}

int DisplayDimension::GetSize() {
	return width * height;
}

void DisplayDimension::SetWidth(int width) {
	this->width = width;
}

void DisplayDimension::SetHeight(int height) {
	this->height = height;
}

void DisplayDimension::SetSize(int width, int height) {
	this->width = width;
	this->height = height;
}

void Display::SetDimension(DisplayDimension dimension) {
	this->dimension = dimension;
}


DisplayDimension* Display::GetDimension() {
	return &(this->dimension);
}