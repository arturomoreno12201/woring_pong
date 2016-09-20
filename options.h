#pragma once
#include "constdecl.h"
#include "GameState.h"

class Option
{

	int font;
	float timer;
	int select;
public:
	void init(int a_font);

	void play();
	void draw();
	void step();

	APP_STATE next();

};