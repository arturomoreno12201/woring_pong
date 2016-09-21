#include "InBe2.h"

void InBe2::init(int a_font)
{
	font = a_font;
}

void InBe2::play(int s1, int s2)
{
	p1score = s1;
	p2score = s2;
	timer = 6.f;
}


void InBe2::draw() const
{


	if (p1score > p2score)
	{

		sfw::drawString(font, "right wins", 230, 360, 30, 30, 0, 0, WHITE);

	}
	if (p1score< p2score)
	{

		sfw::drawString(font, "left wins", 230, 360, 30, 30, 0, 0, WHITE);

	}

}

void InBe2::step()
{
	timer -= sfw::getDeltaTime();
}

APP_STATE InBe2::next()
{
	if (timer < 0 || sfw::getKey('M'))
		return ENTER_GAME1;

	return INBE1;
}
