#pragma once

struct DisplayDimension {
private:
	int width, height;
public:
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
	virtual void SetDimension(DisplayDimension dimensions) = 0;

	DisplayDimension* GetDimension();
};

