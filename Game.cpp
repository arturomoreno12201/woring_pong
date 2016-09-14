#include "Game.h"
#include "sfwdraw.h"
using namespace sfw;
void Game::init(int a_font)
{
	font = a_font;

}

void Game::play()
{
	timer -= sfw::getDeltaTime();
	if (timer < 0)
	{
		timer = 1.f;
		select = 1 - select; // flip selection between 0 and 1
	}
}



void Game::draw()
{

	drawString(font,"game",100,100,20,20);

}



APP_STATE Game::next()
{
	return SPLASH;
}
