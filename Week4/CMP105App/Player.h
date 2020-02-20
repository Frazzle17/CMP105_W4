#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"
class Player: public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
};

