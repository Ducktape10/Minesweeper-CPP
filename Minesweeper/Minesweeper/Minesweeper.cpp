#include <iostream>

using namespace std;

enum gameState 
{
	GAME_LOST = -1,
	GAME_IN_PROGRESS = 0,
	GAME_WON = 1
	// Should we also add GAME_START?
};

struct matrixObject
{
	int objType;
	bool isVisible, isFlagged;
};

// For demonstration purposes only
int actualGameState = GAME_IN_PROGRESS;

int main()
{
    cout << ((actualGameState == 0) ? "The game is in progress...\n" : "The game has not started yet, or it has already ended...\n");
}
