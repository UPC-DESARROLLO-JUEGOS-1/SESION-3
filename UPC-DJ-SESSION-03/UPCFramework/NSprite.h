#pragma once

#include <string>
#include <iostream>

class NSprite
{
public:
	NSprite();
	~NSprite();

	int GetX() { return mX; }
	int GetY() { return mY; }
	int GetWidth() { return mWidth; }
	int GetHeight() { return mHeight; }

	void SetX(int value) { mX = value; }
	void SetY(int value) { mY = value; }

	void Initialize(const std::string path);

	void Update(float dt);
	void Draw(float dt);

private:
	int mWidth;
	int mHeight;
	int mX;
	int mY;
};

