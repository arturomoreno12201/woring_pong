#pragma once
#include "sfwdraw.h"
#include "Player.h"
#include "Ball.h"

using namespace sfw;

class Line
{
public:

	int speed;
	float x, y;
	float size;
	char up, down;

	void init(float a_x,float a_y);
	void draw() const;
	void update();

}; 
