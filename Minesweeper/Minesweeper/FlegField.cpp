#include "MatrixObject.h"

void flegField(int x, int y, matrixObject** matrix)
{
	if (!matrix[x][y].isVisible)
	{
		matrix[x][y].isFlagged = !matrix[x][y].isFlagged;
	}
}