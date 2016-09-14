#pragma once
#include "constdecl.h"

class terminate 
{

	int font;
	float timer;
public:
	//start up
	void init(int a_font);
	//activation
	void playe();
	//update
	void draw();
	void step();

	APP_STATE next();


};