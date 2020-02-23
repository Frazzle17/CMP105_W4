#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"

#include <SFML/Graphics.hpp>

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	virtual void update(float dt);

	void setWindow(sf::RenderWindow* win) { window = win; };

protected:
	sf::RenderWindow* window;
};

