#include "Cursor.h"
#include "Framework/Input.h"

Cursor::Cursor()
{
	mouseX = 0.f;
	mouseY = 0.f;
}

Cursor::~Cursor()
{

}

void Cursor::handleInput()
{
	mouseX = input->getMouseX();
	mouseY = input->getMouseY();
}

void Cursor::update()
{
	setPosition(mouseX, mouseY);
}