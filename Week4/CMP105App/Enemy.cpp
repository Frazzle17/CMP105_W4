#include "Enemy.h"

Enemy::Enemy()
{
	window = nullptr;
}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	sf::Vector2f enemySize = Enemy::getSize();
	float xSize = enemySize.x;
	float ySize = enemySize.y;
	move(velocity * dt);
	sf::Vector2u windowPos = window->getSize();
	sf::Vector2f enemyPos = getPosition();
	if (enemyPos.x > windowPos.x - xSize)
	{
		enemyPos.x = windowPos.x - xSize;
		velocity.x *= -1;
	}
	if (enemyPos.x < 0)
	{
		enemyPos.x = 0;
		velocity.x *= -1;
	}
	if (enemyPos.y > windowPos.y - ySize)
	{
		enemyPos.y = windowPos.y - ySize;
		velocity.y *= -1;
	}
	if (enemyPos.y < 0)
	{
		enemyPos.y = 0;
		velocity.y *= -1;
	}
	setPosition(enemyPos);
}