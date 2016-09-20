#pragma once
#include "constdecl.h"
#include "Ball.h"
#include "AIGame.h"

class InBe2 
{

	Ball ball;



public:
	int p1score, p2score;
	int font;
	float timer;
	//start up
	void init(int a_font);
	//activation
	void play(int s1, int s2);
	//update
	void draw()const;
	void step();


	APP_STATE next();

};