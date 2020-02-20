#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::handleInput(float dt)
{

}

void Enemy::update(float dt)
{
	move(velocity * dt);
	sf::Vector2u windowPos = window->getSize();
	sf::Vector2f enemyPos = getPosition();
	if (enemyPos.x > windowPos.x - 30)
	{
		enemyPos.x = windowPos.x - 30;
		velocity.x *= -1;
	}
	if (enemyPos.x < 0)
	{
		enemyPos.x = 0;
		velocity.x *= -1;
	}
	if (enemyPos.y > windowPos.y - 30)
	{
		enemyPos.y = windowPos.y - 30;
		velocity.y *= -1;
	}
	if (enemyPos.y < 0)
	{
		enemyPos.y = 0;
		velocity.y *= -1;
	}
	setPosition(enemyPos);
}