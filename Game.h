#pragma once
#include "constdecl.h"
class Game 
{

	 int font;
	 int timer;
	 int select;
public:
	void init(int a_font);
	void play();
	
	void draw();
	

	APP_STATE next();

};