#include "actor.h"
Actor::Actor(int xPos, int yPos, char *token)
{
	_token = token;
	_xPos = xPos;
	_yPos = yPos;
}

void Actor::move(int newX, int newY)
{
	_xPos = newX;
	_yPos = newY;
}
