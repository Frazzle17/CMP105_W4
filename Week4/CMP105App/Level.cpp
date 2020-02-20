#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	spriteTexture.loadFromFile("gfx/Mushroom.png");

	testSprite.setInput(input);
	testSprite.setTexture(&spriteTexture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	goombaTexture.loadFromFile("gfx/Goomba.png");

	goomba.setWindow(window);
	goomba.setTexture(&goombaTexture);
	goomba.setSize(sf::Vector2f(100, 100));
	goomba.setPosition(500, 200);
	goomba.setVelocity(100, 100);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	testSprite.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	testSprite.update(dt);
	goomba.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(goomba);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}