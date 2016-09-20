#pragma once
#include <cstdlib>
#include <random>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "sfwdraw.h"

using namespace sfw;

class Ball
{
public:
	
	float xpos, ypos;
	float xvel, yvel;
	float radius;
	int font;
	int score1 = 0;
	int score2 = 0;

	unsigned steps;
	
	void init(float b_xpos, float b_ypos, float b_xvel, float b_yvel, float b_rad, unsigned b_steps,int a_score1, int a_score2);
	void draw() const;
	void update();
};

/*Ball createBall(float b_xpos, float b_ypos, float b_xvel, float b_yvel, float b_rad, unsigned b_steps);
void drawBall(const Ball &b);
void updateBall(Ball &b);*/