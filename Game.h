#pragma once
#include "constdecl.h"
class Game 
{

	AI ai;
	Player player1;
	Ball ball;
	roll roll;

public:
	float topBoundary, bottomBoundary;
	float time;

	int p1score, p2score;

	unsigned font;
	void init();
	void draw() const;
	void update();
	void print();
	APP_STATE next();

};