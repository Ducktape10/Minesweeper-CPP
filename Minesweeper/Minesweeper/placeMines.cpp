#include <random>
#include "MatrixObject.h"

matrixObject** placeMines(int width, int heigth, int numberOfMines){
	matrixObject** minesMatrix = new matrixObject*[width]; // Need define struct default values

	for (int i = 0; i < width; i++) {
		minesMatrix[i] = new matrixObject[heigth];
	}

	/*for (int i = width; i < 30; i++) // Out of range set -3 to know that's not part of map
	{
		for (int j = heigth; j < 20; j++)
		{
			minesMatrix[i][j].objType = -3;
		}
	}*/

    for (int i = 0; i < numberOfMines; i++){
        bool placed = false;

        while (!placed){
            int randomX = rand() % (width);
            int randomY =  rand() % (heigth);
            if (minesMatrix[randomX][randomY].objType != -1){ // Need to know mine objType [-1]
                minesMatrix[randomX][randomY].objType = -1;
                placed = true;
            }
        }
    }

    return minesMatrix; // You can define the size of matrixObject when you call this function
}