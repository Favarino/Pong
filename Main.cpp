#include "Globsl.h"

void main()
{

	initContext(1024, 768, "Pongorinos");
	while (stepContext())
	{
		movePlayers();
		moveBall();
		drawCircle(ball.xPos, ball.yPos, ball.radius);
		drawPlayer(player1);
		drawPlayer(player2);
	}
}
