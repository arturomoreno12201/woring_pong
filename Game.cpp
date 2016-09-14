#include "Game.h"
#include "sfwdraw.h"
using namespace sfw;
void Game::init(int a_font)
{
	font = a_font;

}

void Game::play()
{
	
		

}



void Game::draw()
{

	drawString(font,"GAME",100,100,20,20);

}



APP_STATE Game::next()
{
	return SPLASH;
}
