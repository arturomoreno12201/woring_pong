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
#include "stats.h"
#include "ai.h"



void GameState::init()
{
	
	time = 60.0f;
	player1.init (30, 'W', 'S');
	ai.init(770);
	ball.init(400, 290, 100, 100, 10, 35,0,0);

	roll.init(1,20);
	font = loadTextureMap("./res/fontmap.png", 16, 16);
	
	//kiwljujprintf("pass 1");
	
}

void GameState::draw() const
{
	ai.draw();
	ball.draw();
	player1.draw();


	char buffer[80];
	sprintf_s(buffer, "Time: %f", time);
	sfw::drawString(font, buffer, 270, 570, 16, 16);
	
	//printf("pass 2");
}

void GameState::print() 
{

	roll.print();

}
APP_STATE GameState::next()
{

	if (time <= 0.0f)
	{
		return ENTER_OPTION;
	}
	
	return GAME2;
}
// should call update and collision related function
// also check for anything else that isn't
// part of any of our structs.
void GameState::update()

{
	time -= sfw::getDeltaTime();
	
	ball.update();
	player1.update();

	roll.update();
	ai.update(ball);

	if (ball.xpos > ai.x && ball.ypos > ai.y && ball.ypos < ai.y + ai.size)
	{
		ball.xvel *= -1;
		ball.xpos = ai.x;
		ball.xvel -= 50;
		ball.yvel -= 50;
	}

	if (ball.xpos < player1.x && ball.ypos > player1.y && ball.ypos < player1.y + player1.size)
	{
		ball.xvel *= -1;
		ball.xpos = player1.x;
		ball.xvel += 50;
		ball.yvel += 50;
	}
	

	
	//printf("pass 3");
}