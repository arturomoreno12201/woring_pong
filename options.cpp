#include "options.h"

void optons::init(int a_font)
{

	font = a_font;

}

void optons::play()
{

	select = 0;
	timer = 1.f;

}

void optons::draw()
{
}

void optons::step()
{
}

APP_STATE optons::next()
{
	return APP_STATE();
}
