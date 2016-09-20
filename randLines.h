#pragma once
class line 
{

public:

	int speed;
	float x, y;
	float size;
	char up, down;

	void init(float a_x);
	void draw() const;
	void update(const Ball &ball);

};