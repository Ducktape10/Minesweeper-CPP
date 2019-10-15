#include "MatrixObject.h"
#include "RevealNulls.h"

void PokeField(int x, int y, matrixObject** matrix, int width, int heigth)
{
	if (!matrix[x][y].isFlagged && !matrix[x][y].isVisible)
	{
		if (matrix[x][y].objType == 0)
		{
			revealNulls(x, y, matrix, width, heigth);
		}
		else
		{
			matrix[x][y].isVisible = true;
		}
	}
}