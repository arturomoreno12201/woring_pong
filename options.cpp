#include "options.h"
#include "sfwdraw.h"
#include <cstdio>
#include "GameState.h"


void Option::init(int a_font) { font = a_font; }
void Option::play() { select = 0; timer = 1.f; }

void Option::draw()
{
	sfw::drawString(font, "PONG?", 230, 360, 90, 60, 0, 0, select == 3 ? MAGENTA : WHITE);

	sfw::drawString(font, "playe the game by presing (P)", 100, 140, 16, 16, 0, 0, select == 1 ? MAGENTA : WHITE);
	sfw::drawString(font, "watch the ai fight by pressing (O)", 100, 120, 16, 16, 0, 0, select == 0 ? RED : MAGENTA);
	sfw::drawString(font, "leave the game by presing (D)", 100, 100, 16, 16, 0, 0, select == 0 ? RED : WHITE);

}

void Option::step()
{
	
	timer -= sfw::getDeltaTime();
	if (timer < 0)
	{
		timer = 1.f;
		select = 1 - select; // flip selection between 0 and 1
	}
	timer -= sfw::getDeltaTime();
	if (timer < 0)
	{
		timer = 1.f;
		select = 3 - select; // flip selection between 0 and 1
	}

}

APP_STATE Option::next()
{
	GameState gs;
	if (sfw::getKey('D')) return ENTER_DEPART;
	if (sfw::getKey('P'))  return ENTER_GAME1;
	if (sfw::getKey('O'))  return ENTER_AIGAME;


	if (sfw::getKey(KEY_ENTER))
	{
		if (select == 0) return ENTER_DEPART;
		if (select == 1) return ENTER_SPLASH;
		if (select == 3) return ENTER_SPLASH;
	}
	return OPTIONS;
}