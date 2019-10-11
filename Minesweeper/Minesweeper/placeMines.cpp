#include <random>
#include "MatrixObject.h"

matrixObject * placeMines(int width, int heigth, int numberOfMines){
    matrixObject minesMatrix[30][20]; // Need define struct default values

	for (int i = width; i < 30; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (i >= width || j >= heigth)
			{
				minesMatrix[i][j].isValid = false;
			}
		}
	}

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

    return *minesMatrix; // You can define the size of matrixObject when you call this function
}