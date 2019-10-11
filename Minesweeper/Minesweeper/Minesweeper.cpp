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
	int objType; // Value can range from -1 to 8. 0-8 then its a field (the number depends on how many mines there are around the field), -1 if its a mine.
	bool isFlagged; // This variable decides if the field is rendered as an F or X. Also decides if the field can be poked or not in the function pokeField().
	bool isVisible; // This variable decides if the field is rendered depending on objType or as an X. Also decides if the field can be poked or not in the function pokeField().
};

int actualGameState = GAME_SETUP;

int main()
{
    cout << ((actualGameState == GAME_IN_PROGRESS) ? "The game is in progress...\n" : "The game has not started yet, or it has already ended...\n");
}
