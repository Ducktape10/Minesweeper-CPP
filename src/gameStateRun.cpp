#include <iostream>

#include "gameStateRun.h"

using namespace std;

void Run()
{	
	while (actualGameState == GAME_IN_PROGRESS)
	{
		GetInput();
		//MakeMove();
		actualGameState = GAME_LOST; // Testing
	}
}

void GetInput()
{
	char move = ' ';
	int cX = -1, cY = -1;

	while ((move != 'p'
		&& move != 'f')
		|| cX < 0
		|| cX > 30
		|| cY < 0
		|| cY > 20)
	{
		cin >> move >> cX >> cY;
	}
}