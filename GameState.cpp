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

void GameState::init()
{
	
	player1.init (10, 'W', 'S');
	player2.init (790, 'I', 'K');
	ball.init(400, 290, 100, 100, 10, 30);

	font = loadTextureMap("./res/fontmap.png", 16, 16);
	printf("pass 1");
	
}

void GameState::draw() const
{
	ball.draw();
	player1.draw();
	player2.draw();
	//printf("pass 2");
}

// should call update and collision related function
// also check for anything else that isn't
// part of any of our structs.
void GameState::update()
{
	ball.update();
	player1.update();
	player2.update();



	if (ball.xpos < player1.x && ball.ypos > player1.y && ball.ypos < player1.y + player1.size)
	{
		ball.xvel *= -1;
		ball.xpos = player1.x;
		ball.xvel += 50;
		ball.yvel += 50;
	}

	if (ball.xpos > player2.x && ball.ypos > player2.y && ball.ypos < player2.y + player2.size)
	{
		ball.xvel *= -1;
		ball.xpos = player2.x;
		ball.xvel -= 50;
		ball.yvel -= 50;
	}
	//printf("pass 3");
}