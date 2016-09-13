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

#include "SplashScreen.h"
#include "Depart.h"
#include "options.h"

using namespace sfw;


int main()
{
	initContext(800, 600, "BLACK");
	setBackgroundColor(BLACK);

	GameState gs;


	gs.init ();
	gs.print();
	
	while (stepContext())
	{		

		gs.draw();
		gs.update();
	

	}
	
	termContext();

}