#include "MatrixObject.h"
#include "getNearFields.h"
#include <iostream>

matrixObject **generateMap(matrixObject **minesMatrix,int width, int heigth) {
	for (int x = 0; x < width; x++) {
		for (int y = 0; y < heigth; y++) {
			if (minesMatrix[x][y].objType != -1) {
				int** nearFields = getNearFields(x, y, width, heigth);
				int fieldsLength = getLengthOfFieldPointer(x, y, width, heigth);
				//std::cout << fieldsLength << " ";
				int mines = 0;
				for (int i = 0; i < fieldsLength; i++) {
					int fX = nearFields[i][0];
					int fY = nearFields[i][1];
					std::cout << fX << " " << fY << std::endl;
					std::cout << minesMatrix[fX][fY].objType << std::endl;
					if (minesMatrix[fX][fY].objType == -1) {
						mines++;
					}
				}
				minesMatrix[x][y].objType = mines;
			}
		}
		//std::cout << std::endl;
	}

	return minesMatrix; // You can define the size of matrixObject when you call this function
}