#include <iostream>
#include "placeMines.h"
#include "getNearFields.h"
#include "MatrixToString.h"
#include "generateMap.h"
#include "PokeField.h"
#include "FlegField.h"

using namespace std;

enum gameState
{
	GAME_LOST = -1,
	GAME_SETUP,
	GAME_IN_PROGRESS,
	GAME_WON
};

// For demonstration purposes only
int actualGameState = GAME_IN_PROGRESS;

void matrixToStringTest()
{
	int width = 30;
	int heigth = 20;

	matrixObject** testPointerPointer = placeMines(width, heigth, 50);
	matrixObject** renderedMap = generateMap(testPointerPointer, width, heigth);
	matrixObject testMatrix[30][20];

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < heigth; j++)
		{
			testMatrix[i][j] = renderedMap[i][j];
		}
	}

	cout << matrixToString(testMatrix);
}

int main()
{
	matrixToStringTest();
	cout << ((actualGameState == GAME_IN_PROGRESS) ? "The game is in progress...\n" : "The game has not started yet, or it has already ended...\n");
}
