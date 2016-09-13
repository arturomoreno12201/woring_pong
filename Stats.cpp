#include "sfwdraw.h"
#include "Stats.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



	int frequency1 = 0,
		frequency2 = 0,
		frequency3 = 0,
		frequency4 = 0,
		frequency5 = 0,
		frequency6 = 0;

void roll::init(int d_ro, int d_points)

{

		
		rol= d_ro;
		points = d_points;

}



void roll::update()
{



	
}

void roll::print()
{

	srand(time(NULL));
	for (rol = 1; rol <= 2000; rol++)
	{

		points = 1 + rand() % 6;

		switch (points)
		{

		case 1:
			++frequency1;
			break;
		case 2:
			++frequency2;
			break;
		case 3:
			++frequency3;
			break;
		case 4:
			++frequency4;
			break;
		case 5:
			++frequency5;
			break;
		case 6:
			++frequency6;
			break;

		}

	} 

	printf("%s%13\n", "stats", "points");
	printf("1.SPEED:%5d\n", frequency1);
	printf("2.CHARISMA: %d\n", frequency2);
	printf("3.constitution: %d\n", frequency3);
	printf("4.intelligence:%d\n", frequency4);
	printf("5.wisdom%d\n", frequency5);
	printf("6.charisma:%d\n", frequency6);

}