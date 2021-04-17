#pragma once

struct DisplayDimension {
private:
	int width, height;
public:
	DisplayDimension() :
		DisplayDimension{400, 400} {}

	DisplayDimension(int width, int height) : 
		width(width), height(height) {}
	
	void SetWidth(int width);

	void SetHeight(int height);

	void SetSize(int width, int height);

	int GetWidth();

	int GetHeight();

	int GetSize();
};

class Display
{
private:
	DisplayDimension dimension;

public:
	Display() : 
		dimension({}) {}

	Display(int width, int height) :
		dimension({width, height}) {}

	Display(DisplayDimension dimension) :
		dimension(dimension) {}

	virtual void SetDimension(DisplayDimension dimensions) = 0;

	DisplayDimension* GetDimension();
};

