#include "ai.h"
#include "sfwdraw.h"
#include "Ball.h"
#include <time.h>
void AI::init(float a_x)
{


	x = a_x;
	y = 300;

	size = 80;

}

void AI::draw() const
{
	drawLine(x, y, x, y + size, WHITE);
}

void AI::update(const Ball &ball)
{
	

	if (ball.ypos > y-- || y < ball.ypos)
	{
		y += getDeltaTime() * 500;
	}
	if (ball.ypos < y++ || y > ball.ypos)
	{
		y -= getDeltaTime() * 500;
	}


	if (y < -50)
	{
		y = 600;
	}

	if (y > 600)
	{
		y = -50;
	}
}
