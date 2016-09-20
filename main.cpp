#include <cstdlib>
#include <random>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "sfwdraw.h"
#include "Player.h"
#include "Ball.h"
#include "GameState.h"
#include "constdecl.h"
#include "Game.h"
#include "SplashScreen.h"
#include "Depart.h"
#include "options.h"
#include "constdecl.h"
#include <time.h>
using namespace sfw;


int main()
{
	initContext(800, 600, "BLACK");
	setBackgroundColor(BLACK);
	unsigned font = sfw::loadTextureMap("./res/fontmap.png", 16, 16);
	srand(time(NULL));
	Splash splash;
	Depart depart;
	Option options;
	Game game;
	GameState gs;

	splash.init(font);
	depart.init(font);
	options.init(font);
	
	APP_STATE state = ENTER_SPLASH;

	gs.init ();
	gs.print();
	bool quit = false;
	while (stepContext())
	{		

		
		switch (state)
		{
			// The Game State
	
			// Main Menu
		case ENTER_OPTION:
			options.play();
		case OPTIONS:
			options.step();
			options.draw();
			state = options.next();
			break;

			// Enter the program state
		case ENTER_SPLASH:
			splash.play();
		case SPLASH:
			splash.step();
			splash.draw();
			state = splash.next();

			break;
	
		case ENTER_GAME1:
			game.init();
		case GAME1:
			game.draw();
			game.update();
			state = game.next();
			break;

		case ENTER_GAME2:
			gs.init();
		case GAME2:
			gs.draw();
			gs.update();
			state = gs.next();
			break;

			// Leaving the application
		case ENTER_DEPART:
			depart.play();
		case DEPART:
			depart.step();
			depart.draw();
			state = depart.next();
			break;

		case TEMINATE: quit = true;
		}
	

	}
	
	termContext();

}