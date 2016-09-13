#pragma once
#include "sfwdraw.h"
class roll
{

private:
	int frequency1 = 0,
	frequency2 = 0,
	frequency3 = 0,
	frequency4 = 0,
	frequency5 = 0,
	frequency6 = 0;
public:
		int rol;
		int points;

		void init(int frequency1, int frequency2, int frequency3, int frequency4, int frequency5, int frequency6,int rol, int points);
		void update();
		void print();


};