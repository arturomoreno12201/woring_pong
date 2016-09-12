#include <cstdlib>
#include <random>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Ball.h"
#include "GameState.h"

using namespace sfw;


int main()
{
	initContext(800, 600, "NSFW Draw");
	setBackgroundColor(YELLOW);

	GameState gs;

	gs = createGameState();

	float acc = 0;
	float acc2 = 0;
	float accRand = rand();

	int player = 0;
	
	Player p1 = createPlayer( 10, 'W', 'S');
	Player p2 = createPlayer(790, 'I', 'K');
	

	drawPlayer(gs);

	//Ball b = createBall(400, 290, 100, 100, 10, 30);

	
	while (stepContext())
	{		

			drawLine(400, 0, 400, 600, BLACK);

			updateGameState(gs);
		

	}
	termContext();
	//termContext();
}