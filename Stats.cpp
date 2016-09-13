#include "sfwdraw.h"
#include "Stats.h"
#include <stdio.h>
#include <stdlib.h>

void roll::init(int d_freq1,int d_freq2, int d_freq3, int d_freq4, int d_freq5, int d_freq6, int d_ro, int d_points)

{

		frequency1 = d_freq1;
		frequency2 = d_freq2;
		frequency3 = d_freq3;
		frequency4 = d_freq4;
		frequency5 = d_freq5;
		frequency6 = d_freq6;
		rol= d_ro;
		points = d_points;

}

void roll::print()
{

	printf("%s%13\n", "stats", "points");
	printf("1%13d\n", frequency1);
	printf("2%13d\n", frequency2);
	printf("3%13d\n", frequency3);
	printf("4%13d\n", frequency4);
	printf("5%13d\n", frequency5);
	printf("6%13d\n", frequency6);

}

void roll::update()
{

	for (rol = 1; rol <= 20; rol++) 
	{
	
		points = 1 + rand() % 3;

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
	/*printf("%s%13\n", "stats","points");
	printf("1%13d\n", frequency1);
	printf("2%13d\n", frequency2);
	printf("3%13d\n", frequency3);
	printf("4%13d\n", frequency4);
	printf("5%13d\n", frequency5);
	printf("6%13d\n", frequency6);*/
	
}