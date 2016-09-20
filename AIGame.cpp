#include "AIGame.h"
#include "InBetween.h"
#include "sfwdraw.h"
#include <cstdio>

void AIgame::init()
{
	
	time = 60.0f;
	ai.init(770);
	ai2.init(30);
	
	ball.init(400, 300, 100, 100, 10, 35,0,0);
	roll.init(1, 20);
	font = loadTextureMap("./res/fontmap.png", 16, 16);
}

void AIgame::draw() const
{

	
	ai.draw();
	ai2.draw();
	ball.draw();
	
	
	char buffer[80];
	sprintf_s(buffer, "Time: %f", time);
	sfw::drawString(font, buffer, 270, 570, 16, 16);

}


void AIgame::print()
{
	roll.print();
}

APP_STATE AIgame::next()
{
	if (time <= 0.0f)
	{
		return ENTER_INBE;
	}

	return AIGAME;
}


void AIgame::update()
{
	
	time -= sfw::getDeltaTime();

	ball.update();


	roll.update();

	ai2.update(ball);
	if (ball.xpos < ai2.x && ball.ypos > ai2.y && ball.ypos < ai2.y + ai2.size)
	{
		ball.xvel *= -1;
		ball.xpos = ai2.x;
		ball.xvel += 50;
		ball.yvel += 50;
	}

	ai.update(ball);
	if (ball.xpos > ai.x && ball.ypos > ai.y && ball.ypos < ai.y + ai.size)
	{
		ball.xvel *= -1;
		ball.xpos = ai.x;
		ball.xvel -= 50;
		ball.yvel -= 50;
	}
	

}