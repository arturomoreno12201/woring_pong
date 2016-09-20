#include "sfwdraw.h"
#include "Ball.h"
#include <time.h>




void Ball::init(float b_xpos, float b_ypos, float b_xvel, float b_yvel, float b_rad, unsigned b_steps,int a_score1, int a_score2)
{

	xpos = b_xpos;
	ypos = b_ypos;
	xvel = b_xvel;
	yvel = b_yvel;
	radius = b_rad;
	steps = b_steps;
	score1 = a_score1;
	score2 = a_score2;
	font = loadTextureMap("./res/fontmap.png", 16, 16);
}



void Ball::draw() const
{
	
	drawCircle(xpos, ypos, radius, steps, BLUE);
	drawString(font, std::to_string(score1).c_str(), 0, 580, 40, 40, '\0');
	drawString(font, std::to_string(score2).c_str(), 755, 580, 40, 40, '\0');
}

void Ball::update() 
{

	
	
	

	xpos += xvel * getDeltaTime();
	ypos += yvel * getDeltaTime();

	 if (ypos < 0)
	{
		yvel *= -1;
	}

	if (ypos > 600)
	{
		yvel *= -1;
		
	}
	//right
	if (xpos < 0)
	{
		//b.xvel *= -1;
		xpos = 400;
		ypos = 300;

		xvel = rand() % 1000 - 10;
		yvel = rand() % 1000 - 10;
		 ++score2;
		//printf("right");
	}
	//left
	if (xpos > 800)
	{
		//b.xvel *= -1;
		xpos = 400;
		ypos = 300;

		xvel = rand() % 1000 - 1010;
		yvel = rand() % 1000 - 1010;

		++score1;
		//printf("left");
	}




	}
	;


