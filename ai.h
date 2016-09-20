#pragma once
#include "sfwdraw.h"
#include "Player.h"
#include "Ball.h"

using namespace sfw;

class AI 
{
public:
	
	int speed;
	float x, y;
	float size;
	char up, down;

	void init(float a_x);
	void draw() const;
	void update(const Ball &ball);
	
};