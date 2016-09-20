#pragma once
#include <cstdlib>
#include <random>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Ball.h"
#include "stats.h"
#include "constdecl.h"
#include "ai.h"
#include "InBetween.h"
#include "randLines.h"


class AIgame 
{

	AI ai,ai2;
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