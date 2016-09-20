#include "Line.h"

void Line::init(float a_x,float a_y)
{
	x = a_x;
	y = a_y;

	size = 20;
}

void Line::draw() const
{
	drawLine(x, y, x, y + size, RED);
}

void Line::update()
{
}
