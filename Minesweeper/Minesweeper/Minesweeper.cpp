#include <iostream>
#include "Minesweeper.h"

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

int main()
{
    cout << ((actualGameState == GAME_IN_PROGRESS) ? "The game is in progress...\n" : "The game has not started yet, or it has already ended...\n");
}
