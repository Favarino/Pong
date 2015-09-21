#include "Globsl.h"


bool dirX, dirY = false; //false = left && down
float ballSpeed = 250;
Ball ball{ 512, 384, 10 };
void moveBall()
{
	if (ball.xPos - ball.radius <= player1.xPos)
	{
		if (ball.yPos >= player1.yPos && ball.yPos <= player1.yPos + player1.height)
		{
			dirX = true;
		}
	}

	if (ball.xPos + ball.radius >= player2.xPos)
	{
		if (ball.yPos >= player2.yPos && ball.yPos <= player2.yPos + player2.height)
		{
			dirX = false;
		}
	}
	if (ball.yPos - ball.radius <= 0)
	{
		dirY = true;
	}
	if (ball.yPos + ball.radius >= bottom.endY)
	{
		dirY = false;
	}
	if (dirX)
	{
		ball.xPos += ballSpeed * getDeltaTime();
	}
	else
	{
		ball.xPos -= ballSpeed * getDeltaTime();
	}
	if (dirY)
	{
		ball.yPos += ballSpeed * getDeltaTime();
	}
	else
	{
		ball.yPos -= ballSpeed * getDeltaTime();
	}
	if (ball.xPos <= 0 || ball.xPos >= 1024)
	{
		ball.xPos = 512;
		ball.yPos = 384;
	}
}
