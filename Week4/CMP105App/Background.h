#pragma once
#include "Framework/GameObject.h"

class Background:public GameObject
{
public:
	Background();
	~Background();

	virtual void handleInput(float dt);
	virtual void update();

	void setupView();
	void setWindow(sf::RenderWindow* win) { window = win; };

protected:
	sf::RenderWindow* window;
	sf::View view;
};

