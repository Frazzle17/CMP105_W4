#include "Background.h"

Background::Background()
{
	window = nullptr;
}

Background::~Background()
{

}

void Background::handleInput(float dt)
{
	sf::Vector2u windowSize = window->getSize();
	sf::Vector2f bgSize = getSize();
	float xOffset = windowSize.x / 2;
	sf::Vector2f viewCenter = view.getCenter();
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		view.move(-500 * dt, 0);
		if (viewCenter.x < xOffset)
		{
			view.setCenter(xOffset, viewCenter.y);
		}
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		view.move(500 * dt, 0);
		if (viewCenter.x > bgSize.x - xOffset)
		{
			view.setCenter(bgSize.x - xOffset, viewCenter.y);
		}
	}
}

void Background::update()
{
	window->setView(view);
}

void Background::setupView()
{
	sf::Vector2u windowSize = window->getSize();
	view.setSize(windowSize.x, windowSize.y);
	view.setCenter(windowSize.x/2, windowSize.y/2);
}