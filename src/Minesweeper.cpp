#include <iostream>

#include "FlegField.h"
#include "GlobalVariables.h"
#include "MatrixToString.h"
#include "PokeField.h"
#include "gameStateRun.h"
#include "generateMap.h"
#include "getNearFields.h"
#include "placeMines.h"

using namespace std;

int actualGameState = GAME_SETUP;

void matrixToStringTest() {
  int width = 30;
  int height = 20;

  matrixObject **testPointerPointer = placeMines(width, height, 50);
  matrixObject **renderedMap = generateMap(testPointerPointer, width, height);
  matrixObject testMatrix[30][20];

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      testMatrix[i][j] = renderedMap[i][j];
    }
  }

  cout << matrixToString(testMatrix);
}

int main() {
  matrixToStringTest();

  // Setup();
  actualGameState = GAME_IN_PROGRESS;

  Run();

  // End();
}