#pragma once
#include <iostream>
#include "sfwdraw.h";
using namespace sfw;
using namespace std;

struct Player
{
	float xPos, yPos, width, height;
};

extern Player player1;
extern Player player2;

struct Ball
{
	float xPos, yPos, radius;
};

extern Ball ball;

struct wall
{
	float startX, startY, endX, endY;
};

extern float hoorayArray[420];
extern float drse[30];

extern wall top;
extern wall bottom;
extern void moveBall();
extern void movePlayers();
extern void drawPlayer(Player p);


extern float ballSpeed;
extern float playerSpeed;
