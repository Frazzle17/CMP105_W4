#include "Player.h"

Player::Player()
{
	
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		velocity.x = 50;
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		velocity.x = -50;
	}
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		velocity.y = -50;
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		velocity.y = 50;
	}

}

void Player::update(float dt)
{
	move(velocity * dt);
	velocity.x = 0;
	velocity.y = 0;
}