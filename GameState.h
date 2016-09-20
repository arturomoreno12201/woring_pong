#pragma once
#include <cstdlib>
#include <random>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Ball.h"
#include "stats.h"
#include "constdecl.h"
#include "ai.h"



// Move variables into a big game state struct.
class GameState
{
	 AI ai;
	 Player player1;
	 Ball ball;
	 roll roll;
	
public:
	float topBoundary, bottomBoundary;
	float time;

	int p1score, p2score;

	unsigned font;
	void init();
	void draw() const;
	void update();
	void print();
	APP_STATE next();
};








// Set up the starting values for everything.
/*GameState createGameState()
{
	GameState state;

	state.font = loadTextureMap("./res/fontmap.png", 16, 16);

	return state;
}

void drawPlayer(GameState &gs)
{
	Player p1 = createPlayer(10, 'W', 'S');
	Player p2 = createPlayer(790, 'I', 'K');
}

// should call update and collision related function
// also check for anything else that isn't
// part of any of our structs.
void updateGameState(GameState &gs)
{
	void drawBall(const Ball &b);
	void updateBall(Ball &b);

	Player p1 = createPlayer(10, 'W', 'S');
	Player p2 = createPlayer(790, 'I', 'K');

	Ball b = createBall(400, 290, 100, 100, 10, 30);

	updateBall(b);
	drawBall(b);

	if (b.xpos < p1.x && b.ypos > p1.y && b.ypos < p1.y + p1.size)
	{
		b.xvel *= -1;
		b.xpos = p1.x;
		b.xvel += 50;
		b.yvel += 50;
	}

	if (b.xpos > p2.x && b.ypos > p2.y && b.ypos < p2.y + p2.size)
	{
		b.xvel *= -1;
		b.xpos = p2.x;
		b.xvel -= 50;
		b.yvel -= 50;
	}
}*/