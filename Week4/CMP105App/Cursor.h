#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
public:
	Cursor();
	~Cursor();

	virtual void handleInput();
	virtual void update();

protected:
	float mouseX;
	float mouseY;
};

