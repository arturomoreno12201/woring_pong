#include "InBetween.h"
#include "sfwdraw.h"
#include "Ball.h"
#include <cstdio>

void InBe::init(int a_font)
{
	
	font = a_font;


}

void InBe::play(int s1, int s2)
{
	p1score = s1;
	p2score = s2;
	timer = 6.f;
}

void InBe::draw()const
{

	
	if (p1score >= 5 || p1score > p2score)
	{
	
		sfw::drawString(font, "right wins", 230, 360, 30, 30, 0, 0, WHITE);
	
	}
	if (p2score >= 5|| p1score < p2score)
	{
	
		sfw::drawString(font, "left wins", 230, 360, 30, 30, 0, 0, WHITE);
	
	}

	

}
void InBe::step()
{


	timer -= sfw::getDeltaTime();

}


APP_STATE InBe::next()
{
	if (timer < 0 || sfw::getKey('M'))
		return ENTER_OPTION;

	return INBE;

}
