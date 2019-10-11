#include "MatrixObject.h"
#include "getNearFields.h"

matrixObject **generateMap(matrixObject **minesMatrix,int width, int heigth) {
	for (int x = 0; x < width; x++) {
		for (int y = 0; y < heigth; y++) {
			if (minesMatrix[x][y].objType != -1) {
				int** nearFields = getNearFields(x, y, width, heigth);
				int fieldsLength = getLengthOfFieldPointer(x, y, width, heigth);
				int mines = 0;
				for (int i = 0; i < fieldsLength; i++) {
					int fX = nearFields[i][0];
					int fY = nearFields[i][1];
					if (minesMatrix[fX][fY].objType == -1) {
						mines++;
					}
				}
				minesMatrix[x][y].objType = mines;
			}
		}
	}

	return minesMatrix; // You can define the size of matrixObject when you call this function
}