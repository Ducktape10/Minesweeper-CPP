#include <random>
#include "Minesweeper.h"

void placeMines(struct matrixObject** minesMatrix, int width, int heigth, int numberOfMines) {
    for (int i = 0; i < numberOfMines; i++){
        bool placed = false;

        while (!placed){
            int randomX = rand() % (width - 1);
            int randomY =  rand() % (heigth - 1);
            if (minesMatrix[randomX][randomY].objType != -1){ // Need to know mine objType [-1]
                minesMatrix[randomX][randomY].objType = -1;
                placed = true;
            }
        }
    }
}