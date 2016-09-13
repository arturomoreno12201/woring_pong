#include "Depart.h"

void Depart::init(int a_font)
{

	font = a_font;

}

void Depart::play()
{

	timer = 3.f;

}

void Depart::draw()
{
}

void Depart::step()
{
}

APP_STATE Depart::next()
{
	return APP_STATE();
}
