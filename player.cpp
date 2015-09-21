#include "Globsl.h"

Player player1{ 50, 384, 10, 100 };
Player player2{ 974, 384, 10, 100 };
float playerSpeed = 250;

void movePlayers()
{
	if (getKey('w'))
	{
		player1.yPos -= playerSpeed * getDeltaTime();
	}
	if (getKey('s'))
	{
		player1.yPos += playerSpeed * getDeltaTime();
	}
	if (getKey('l'))
	{
		player2.yPos += playerSpeed * getDeltaTime();
	}
	if (getKey('o'))
	{
		player2.yPos -= playerSpeed * getDeltaTime();
	}
}

void drawPlayer(Player p)
{
	drawLine(p.xPos, p.yPos, p.xPos + p.width, p.yPos);//Top
	drawLine(p.xPos, p.yPos, p.xPos, p.yPos + p.height);//left
	drawLine(p.xPos + p.width, p.yPos, p.xPos + p.width, p.yPos + p.height);//right
	drawLine(p.xPos, p.yPos + p.height, p.xPos + p.width, p.yPos + p.height);//bot
}
