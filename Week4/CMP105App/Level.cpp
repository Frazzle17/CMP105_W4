#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	spriteTexture.loadFromFile("gfx/Mushroom.png");

	testSprite.setInput(input);
	testSprite.setTexture(&spriteTexture);
	testSprite.setSize(sf::Vector2f(10, 10));
	testSprite.setPosition(100, 100);

	goombaTexture.loadFromFile("gfx/Goomba.png");

	goomba.setWindow(window);
	goomba.setTexture(&goombaTexture);
	goomba.setSize(sf::Vector2f(10, 10));
	goomba.setPosition(500, 200);
	goomba.setVelocity(100, 100);

	ballTexture.loadFromFile("gfx/Beach_Ball.png");

	ball.setWindow(window);
	ball.setTexture(&ballTexture);
	ball.setSize(sf::Vector2f(10, 10));
	ball.setPosition(1000, 400);
	ball.setVelocity(1000, 1000);

	cursorTexture.loadFromFile("gfx/icon.png");

	cursor.setInput(input);
	cursor.setTexture(&cursorTexture);
	cursor.setSize(sf::Vector2f(48, 48));
	window->setMouseCursorVisible(false);

	bgTexture.loadFromFile("gfx/Level1_1.png");

	bg.setInput(input);
	bg.setWindow(window);
	bg.setupView();
	bg.setTexture(&bgTexture);
	bg.setSize(sf::Vector2f(11038, 675));
	bg.setPosition(0, 0);
	//std::cout << windowSize.x << "  " << windowSize.y << std::endl;
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
	cursor.handleInput();
	bg.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	testSprite.update(dt);
	goomba.update(dt);
	ball.update(dt);
	cursor.update();
	bg.update();
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(goomba);
	window->draw(ball);
	window->draw(cursor);
	window->draw(bg);

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