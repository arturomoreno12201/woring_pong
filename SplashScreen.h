#pragma once
#include "constdecl.h"

class Splash
{

	int font;
	float timer;
public:
	//start up
	void init(int a_font);
	//activation
	void play();
	//update
	void draw();
	void step();

	APP_STATE next();

};