#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"
class Player: public GameObject
{
public:
	Player();
	~Player();

	virtual void handleInput(float dt);
	virtual void update(float dt);
};

