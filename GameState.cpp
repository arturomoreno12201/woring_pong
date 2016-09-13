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

void GameState::init()
{
	
	player1.init (30, 'W', 'S');
	player2.init (770, 'I', 'K');
	ball.init(400, 290, 100, 100, 10, 35);
	roll.init(1,20);

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

void GameState::print() 
{

	roll.print();

}
// should call update and collision related function
// also check for anything else that isn't
// part of any of our structs.
void GameState::update()
{
	ball.update();
	player1.update();
	player2.update();
	roll.update();


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