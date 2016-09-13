#pragma once

using namespace sfw;

class Player
{
	// How many variables do I need?
	
	
public:
	float x, y;
	float size;
	char up, down;

	void init(float a_x, char a_up, char a_down);
	void draw() const;
	void update();
};
	/*Player createPlayer(float a_x, char a_up, char a_down);
	void drawPlayer  (const Player &p);
	void drawPlayer2 (const Player &p);
	void updatePlayer(Player &p);*/