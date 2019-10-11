#include <iostream>

using namespace std;

enum gameState 
{
	GAME_LOST = -1,
	GAME_SETUP,
	GAME_IN_PROGRESS,
	GAME_WON
};

struct matrixObject
{
	int objType = 0; // Value can range from -1 to 8. 0-8 then its a field (the number depends on how many mines there are around the field), -1 if its a mine.
	bool isVisible = false; // This variable decides if the field is rendered depending on objType or as an X. Also decides if the field can be poked or not in the function pokeField().
	bool isFlagged = false; // This variable decides if the field is rendered as an F or X. Also decides if the field can be poked or not in the function pokeField().
};

// For demonstration purposes only
int actualGameState = GAME_IN_PROGRESS;

int main()
{
    cout << ((actualGameState == GAME_IN_PROGRESS) ? "The game is in progress...\n" : "The game has not started yet, or it has already ended...\n");
}
